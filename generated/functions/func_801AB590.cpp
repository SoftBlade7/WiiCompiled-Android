#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801AB590(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801AB590;

loc_801AB590:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(255));
}

loc_801AB594:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801AB5A0;
    }
}

loc_801AB598:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801AB5A0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(128));
}

loc_801AB5A4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801AB5B0;
    }
}

loc_801AB5A8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(159));
}

loc_801AB5AC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801AB5B8;
    }
}

loc_801AB5B0:
{
    r3 = (r3 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801AB5B8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(338));
}

loc_801AB5BC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801AB600;
    }
}

loc_801AB5C0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(8482));
}

loc_801AB5C4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801AB600;
    }
}

loc_801AB5C8:
{
    r4 = 0x80290000u;
    r0 = 32;
    r4 = (r4 + 2384);
    r5 = 0;
    ctr = r0;
}

loc_801AB5DC:
{
    r0 = MemoryInline::FlatRead16(r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_801AB5E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801AB5F4;
    }
}

loc_801AB5E8:
{
    r0 = (r5 + 128);
    r3 = (r0 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801AB5F4:
{
    r4 = (r4 + 2);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801AB5DC;
    }
}

loc_801AB600:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801AB590 func_801AB590 preserves=true fpr_mask=0x00000000
