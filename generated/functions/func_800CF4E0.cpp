#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CF4E0(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_800CF4E0;

loc_800CF4E0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800CF4EC:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CF508;
    }
}

loc_800CF500:
{
    r3 = 0;
    goto loc_800CF5F0;
}

loc_800CF508:
{
    r4 = 0x80270000u;
    r5 = r30;
    r4 = (r4 + 23744);
    r3 = 2;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800CF520u;
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

loc_800CF524:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CF560;
    }
}

loc_800CF528:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CF53C;
    }
}

loc_800CF52C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(1));
}

loc_800CF530:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CF548;
    }
}

loc_800CF534:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CF554;
    }
}

loc_800CF538:
{
    goto loc_800CF574;
}

loc_800CF53C:
{
}

loc_800CF540:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(5))) {
        goto loc_800CF574;
    }
}

loc_800CF544:
{
    goto loc_800CF56C;
}

loc_800CF548:
{
    r31 = 9;
    r3 = -1;
    goto loc_800CF574;
}

loc_800CF554:
{
    r31 = 9;
    r3 = -2;
    goto loc_800CF574;
}

loc_800CF560:
{
    r31 = 6;
    r3 = -10;
    goto loc_800CF574;
}

loc_800CF56C:
{
    r31 = 6;
    r3 = -20;
}

loc_800CF574:
{
    r0 = MemoryInline::FlatRead32((r13 + -26928));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800CF57C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CF5EC;
    }
}

loc_800CF580:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_800CF584:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CF5EC;
    }
}

loc_800CF588:
{
    r4 = (r3 + -65536);
    r3 = r31;
    r4 = (r4 + -5464);
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
    r5 = MemoryInline::FlatRead32((r13 + -26928));
    r0 = MemoryInline::FlatRead32(r5);
}

loc_800CF5A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800CF5C8;
    }
}

loc_800CF5A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_800CF5AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CF5C8;
    }
}

loc_800CF5B0:
{
    r12 = MemoryInline::FlatRead32((r5 + 48));
    r3 = r31;
    r4 = MemoryInline::FlatRead8((r5 + 33));
    r5 = MemoryInline::FlatRead32((r5 + 52));
    ctr = r12;
    ctx->lr = 0x800CF5C8u;
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

loc_800CF5C8:
{
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800CF5D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CF5EC;
    }
}

loc_800CF5D4:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite8((r3 + 34), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    MemoryInline::FlatWrite8((r3 + 35), static_cast<uint8_t>(r0));
}

loc_800CF5EC:
{
    r3 = r30;
}

loc_800CF5F0:
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
// RECOMP_REGISTRATION base 0x800CF4E0 func_800CF4E0 preserves=true fpr_mask=0x00000000
