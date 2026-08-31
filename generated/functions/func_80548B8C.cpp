#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80548B8C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80548B8C;

loc_80548B8C:
{
    r0 = 2;
    r6 = 0;
    ctr = r0;
}

loc_80548B98:
{
    r0 = (r6 & 255);
    r5 = (r0 * 900);
    r5 = (r3 + r5);
    r5 = MemoryInline::FlatRead32((r5 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r5));
}

loc_80548BAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80548BB8;
    }
}

loc_80548BB0:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80548BB8:
{
    r6 = (r6 + 1);
    r0 = (r6 & 255);
    r5 = (r0 * 900);
    r5 = (r3 + r5);
    r5 = MemoryInline::FlatRead32((r5 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r5));
}

loc_80548BD0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80548BDC;
    }
}

loc_80548BD4:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80548BDC:
{
    r6 = (r6 + 1);
    r0 = (r6 & 255);
    r5 = (r0 * 900);
    r5 = (r3 + r5);
    r5 = MemoryInline::FlatRead32((r5 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r5));
}

loc_80548BF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80548C00;
    }
}

loc_80548BF8:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80548C00:
{
    r6 = (r6 + 1);
    r0 = (r6 & 255);
    r5 = (r0 * 900);
    r5 = (r3 + r5);
    r5 = MemoryInline::FlatRead32((r5 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r5));
}

loc_80548C18:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80548C24;
    }
}

loc_80548C1C:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80548C24:
{
    r6 = (r6 + 1);
    r0 = (r6 & 255);
    r5 = (r0 * 900);
    r5 = (r3 + r5);
    r5 = MemoryInline::FlatRead32((r5 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r5));
}

loc_80548C3C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80548C48;
    }
}

loc_80548C40:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80548C48:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80548B98;
    }
}

loc_80548C50:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80548B8C func_80548B8C preserves=true fpr_mask=0x00000000
