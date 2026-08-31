#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805EEC5C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805EEC5C;

loc_805EEC5C:
{
    r8 = 0;
    r7 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r8));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805EEC74;
    }
}

loc_805EEC70:
{
    r8 = 1;
}

loc_805EEC74:
{
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r0));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805EEC88;
    }
}

loc_805EEC84:
{
    r8 = (r8 + 1);
}

loc_805EEC88:
{
    r0 = 2;
    r0 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r0));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805EEC9C;
    }
}

loc_805EEC98:
{
    r8 = (r8 + 1);
}

loc_805EEC9C:
{
    r0 = 3;
    r0 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r0));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805EECB0;
    }
}

loc_805EECAC:
{
    r8 = (r8 + 1);
}

loc_805EECB0:
{
    r0 = 4;
    r0 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r0));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805EECC4;
    }
}

loc_805EECC0:
{
    r8 = (r8 + 1);
}

loc_805EECC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(1));
}

loc_805EECC8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805EECD0;
    }
}

loc_805EECCC:
{
    r6 = 1;
}

loc_805EECD0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite32((r3 + 8), r5);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 13), static_cast<uint8_t>(r6));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x000001C1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805EEC5C func_805EEC5C preserves=true fpr_mask=0x00000000
