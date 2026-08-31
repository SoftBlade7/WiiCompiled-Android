#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A1038(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801A1038;

loc_801A1038:
{
    r6 = MemoryInline::FlatRead32((r13 + -25424));
    r0 = (r3 + 31);
    r7 = (r0 & -32);
    r4 = (r4 & -32);
    r5 = MemoryInline::FlatRead32((r13 + -25420));
    r3 = 0;
    ctr = r6;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_801A1058:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801A109C;
    }
}

loc_801A105C:
{
    r0 = MemoryInline::FlatRead32(r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A1064:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A1090;
    }
}

loc_801A1068:
{
    r0 = (r4 - r7);
    r4 = 0;
    MemoryInline::FlatWrite32(r5, r0);
    MemoryInline::FlatWrite32(r7, r4);
    MemoryInline::FlatWrite32((r7 + 4), r4);
    r0 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWrite32((r7 + 8), r0);
    MemoryInline::FlatWrite32((r5 + 4), r7);
    MemoryInline::FlatWrite32((r5 + 8), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801A1090:
{
    r5 = (r5 + 12);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801A105C;
    }
}

loc_801A109C:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000020B9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801A1038 func_801A1038 preserves=true fpr_mask=0x00000000
