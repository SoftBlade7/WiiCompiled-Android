#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8061B9BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8061B9BC;

loc_8061B9BC:
{
    r0 = 5;
    r9 = 0;
    r4 = 0;
    r6 = 1;
    ctr = r0;
}

loc_8061B9D0:
{
    r0 = MemoryInline::FlatRead32((r3 + 88));
    r5 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r9));
    r0 = (r0 & r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061BA34;
    }
}

loc_8061B9E0:
{
    r8 = (r3 + r4);
    r7 = 0;
    r0 = MemoryInline::FlatRead32((r8 + 12));
    r5 = 0;
}

loc_8061B9F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8061BA08;
    }
}

loc_8061B9F8:
{
    r0 = MemoryInline::FlatRead32((r8 + 4));
}

loc_8061BA00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8061BA08;
    }
}

loc_8061BA04:
{
    r5 = 1;
}

loc_8061BA08:
{
}

loc_8061BA0C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8061BA24;
    }
}

loc_8061BA10:
{
    r5 = MemoryInline::FlatRead32((r8 + 4));
    r0 = MemoryInline::FlatRead32((r8 + 8));
}

loc_8061BA1C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_8061BA24;
    }
}

loc_8061BA20:
{
    r7 = 1;
}

loc_8061BA24:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8061BA28:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8061BA34;
    }
}

loc_8061BA2C:
{
    r3 = r9;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_8061BA34:
{
    r9 = (r9 + 1);
    r4 = (r4 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8061B9D0;
    }
}

loc_8061BA40:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8061B9BC func_8061B9BC preserves=true fpr_mask=0x00000000
