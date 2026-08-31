#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805EECE8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805EECE8;

loc_805EECE8:
{
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r7 = 0;
    r5 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r7));
    r0 = (r6 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805EED04;
    }
}

loc_805EED00:
{
    r7 = 1;
}

loc_805EED04:
{
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805EED18;
    }
}

loc_805EED14:
{
    r7 = (r7 + 1);
}

loc_805EED18:
{
    r0 = 2;
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805EED2C;
    }
}

loc_805EED28:
{
    r7 = (r7 + 1);
}

loc_805EED2C:
{
    r0 = 3;
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805EED40;
    }
}

loc_805EED3C:
{
    r7 = (r7 + 1);
}

loc_805EED40:
{
    r0 = 4;
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805EED54;
    }
}

loc_805EED50:
{
    r7 = (r7 + 1);
}

loc_805EED54:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(1));
}

loc_805EED58:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805EED60;
    }
}

loc_805EED5C:
{
    r4 = 1;
}

loc_805EED60:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 13), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x000000F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805EECE8 func_805EECE8 preserves=true fpr_mask=0x00000000
