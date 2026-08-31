#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80201290(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80201290;

loc_80201290:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80201294:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802012AC;
    }
}

loc_80201298:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8020129C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802012AC;
    }
}

loc_802012A0:
{
    r0 = MemoryInline::FlatRead32((r3 + 556));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_802012A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802012B4;
    }
}

loc_802012AC:
{
    r3 = 10;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_802012B4:
{
    r5 = 0;
    r0 = 5;
    MemoryInline::FlatWrite32(r4, r5);
    r6 = 0;
    ctr = r0;
}

loc_802012C8:
{
    r8 = MemoryInline::FlatRead32((r3 + 556));
    r7 = (r8 + r6);
    r5 = MemoryInline::FlatRead32((r7 + 64));
    r0 = (r5 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_802012D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80201318;
    }
}

loc_802012DC:
{
    r0 = (r5 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_802012E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80201318;
    }
}

loc_802012E4:
{
    r0 = MemoryInline::FlatRead32((r7 + 676));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(r0));
}

loc_802012EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80201318;
    }
}

loc_802012F0:
{
    r5 = MemoryInline::FlatRead32((r3 + 568));
    r0 = MemoryInline::FlatRead32((r7 + 688));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_802012FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80201318;
    }
}

loc_80201300:
{
    r5 = MemoryInline::FlatRead16((r3 + 572));
    r0 = MemoryInline::FlatRead16((r7 + 692));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_8020130C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80201318;
    }
}

loc_80201310:
{
    r0 = (r7 + 120);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_80201318:
{
    r6 = (r6 + 652);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802012C8;
    }
}

loc_80201320:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80201290 func_80201290 preserves=true fpr_mask=0x00000000
