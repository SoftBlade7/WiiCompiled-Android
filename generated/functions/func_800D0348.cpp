#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D0348(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800D0348;

loc_800D0348:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800D0354:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800D0370;
    }
}

loc_800D0368:
{
    r3 = 0;
    goto loc_800D0444;
}

loc_800D0370:
{
    r4 = 0x80270000u;
    r5 = r30;
    r4 = (r4 + 24864);
    r3 = 2;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800D0388u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(3));
}

loc_800D038C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D03C8;
    }
}

loc_800D0390:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D03A4;
    }
}

loc_800D0394:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(1));
}

loc_800D0398:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D03B0;
    }
}

loc_800D039C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D03BC;
    }
}

loc_800D03A0:
{
    goto loc_800D03DC;
}

loc_800D03A4:
{
}

loc_800D03A8:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(5))) {
        goto loc_800D03DC;
    }
}

loc_800D03AC:
{
    goto loc_800D03D4;
}

loc_800D03B0:
{
    r31 = 9;
    r3 = -1;
    goto loc_800D03DC;
}

loc_800D03BC:
{
    r31 = 9;
    r3 = -2;
    goto loc_800D03DC;
}

loc_800D03C8:
{
    r31 = 6;
    r3 = -10;
    goto loc_800D03DC;
}

loc_800D03D4:
{
    r31 = 6;
    r3 = -20;
}

loc_800D03DC:
{
    r0 = MemoryInline::FlatRead32((r13 + -26904));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800D03E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D0440;
    }
}

loc_800D03E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_800D03EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D0440;
    }
}

loc_800D03F0:
{
    r4 = (r3 + -65536);
    r3 = r31;
    r4 = (r4 + 4536);
    // inline leaf 0x800CCC68 (6 guest instruction(s))
}

loc_inl0_0x800CCC68:
{
    r0 = MemoryInline::FlatRead32((r13 + -26968));
}

loc_inl0_0x800CCC70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x800CCC74:
{
    MemoryInline::FlatWrite32((r13 + -26968), r3);
    MemoryInline::FlatWrite32((r13 + -26964), r4);
    goto loc_inl0_cont_800CCC68;
}

loc_inl0_return:
{
}

loc_inl0_cont_800CCC68:
{
    // end of inlined leaf 0x800CCC68
    r4 = MemoryInline::FlatRead32((r13 + -26904));
    r12 = MemoryInline::FlatRead32((r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_800D040C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D0424;
    }
}

loc_800D0410:
{
    r5 = MemoryInline::FlatRead32((r4 + 24));
    r3 = r31;
    r4 = 0;
    ctr = r12;
    ctx->lr = 0x800D0424u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800D0424:
{
    r3 = MemoryInline::FlatRead32((r13 + -26904));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800D042C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D0440;
    }
}

loc_800D0430:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26904));
    MemoryInline::FlatWrite32((r3 + 48), r0);
}

loc_800D0440:
{
    r3 = r30;
}

loc_800D0444:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800D0348 func_800D0348 preserves=true fpr_mask=0x00000000
