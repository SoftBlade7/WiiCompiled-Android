#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805AB57C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805AB57C;

loc_805AB57C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 9336);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = 0;
    r4 = MemoryInline::FlatRead32((r3 + 44));
}

loc_805AB5B0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805AB5CC;
    }
}

loc_805AB5B4:
{
    r4 = MemoryInline::FlatRead32(r4);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 20));
    r0 = (r0 & 17408);
}

loc_805AB5C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805AB5CC;
    }
}

loc_805AB5C8:
{
    r28 = 1;
}

loc_805AB5CC:
{
}

loc_805AB5D0:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_805AB690;
    }
}

loc_805AB5D4:
{
    r0 = MemoryInline::FlatRead8((r3 + 423));
}

loc_805AB5DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805AB690;
    }
}

loc_805AB5E0:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10520));
    r0 = MemoryInline::FlatRead32((r4 + 72));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805AB5F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805AB604;
    }
}

loc_805AB5F4:
{
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r3 = r30;
    ctx->lr = 0x805AB600u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805ABD94u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805AB67C;
}

loc_805AB604:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // inline leaf 0x805A6C04 (17 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r3 + 824));
    r0 = 0;
    r4 = 0x80890000u;
    r3 = 0x80890000u;
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 48u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r5, static_cast<uint8_t>(r0));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8728));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r5 + 8), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8976));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r5 + 4), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r5 + 12), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r5 + 16), f1.d);
    }
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r5 + 28), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r5 + 36), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r5 + 32), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r5 + 40), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r5 + 44), f1.d);
    }
    // end of inlined leaf 0x805A6C04
    r3 = 0;
    guest_range_2 = MemoryInline::ResolveRangeHost((r30 + 424), 0, 88u, false, true);
    MemoryInline::WriteResolved16(guest_range_2, 16u, (r30 + 440), static_cast<uint16_t>(r3));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    r0 = 1;
    MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r30 + 464), f0.d);
    MemoryInline::WriteResolved16(guest_range_2, 18u, (r30 + 442), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 44u, (r30 + 468), f0.d);
    MemoryInline::WriteResolved16(guest_range_2, 20u, (r30 + 444), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 48u, (r30 + 472), f0.d);
    MemoryInline::WriteResolved16(guest_range_2, 22u, (r30 + 446), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 52u, (r30 + 476), f0.d);
    MemoryInline::WriteResolved16(guest_range_2, 24u, (r30 + 448), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 56u, (r30 + 480), f0.d);
    MemoryInline::WriteResolved16(guest_range_2, 26u, (r30 + 450), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 60u, (r30 + 484), f0.d);
    MemoryInline::WriteResolved16(guest_range_2, 28u, (r30 + 452), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 64u, (r30 + 488), f0.d);
    MemoryInline::WriteResolved16(guest_range_2, 30u, (r30 + 454), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 68u, (r30 + 492), f0.d);
    MemoryInline::WriteResolved16(guest_range_2, 32u, (r30 + 456), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 72u, (r30 + 496), f0.d);
    MemoryInline::WriteResolved16(guest_range_2, 34u, (r30 + 458), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 76u, (r30 + 500), f0.d);
    MemoryInline::WriteResolved16(guest_range_2, 36u, (r30 + 460), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 80u, (r30 + 504), f0.d);
    MemoryInline::WriteResolved16(guest_range_2, 38u, (r30 + 462), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 84u, (r30 + 508), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r30 + 424), static_cast<uint8_t>(r0));
}

loc_805AB67C:
{
    r3 = r30;
    r4 = 1;
    ctx->lr = 0x805AB688u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805A9F54u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 423), static_cast<uint8_t>(r0));
}

loc_805AB690:
{
}

loc_805AB694:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_805AB6A4;
    }
}

loc_805AB698:
{
    r0 = MemoryInline::FlatRead8((r30 + 423));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805AB6A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805ABAB0;
    }
}

loc_805AB6A4:
{
    r0 = MemoryInline::FlatRead8((r30 + 424));
}

loc_805AB6AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805AB78C;
    }
}

loc_805AB6B0:
{
    r3 = MemoryInline::FlatRead32((r30 + 44));
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r4 = MemoryInline::FlatRead32((r30 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 144));
    MemoryInline::FlatWriteFloat32((r4 + 112), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r4 + 116), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r4 + 120), f0.d);
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r3 = MemoryInline::FlatRead32((r30 + 44));
    r29 = MemoryInline::FlatRead32((r4 + 144));
    // inline leaf 0x805909C8 (11 guest instruction(s))
}

loc_inl2_0x805909C8:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl2_0x805909D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl2_0x805909E8;
    }
}

loc_inl2_0x805909DC:
{
    r3 = MemoryInline::FlatRead32((r3 + 32));
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_inl2_cont_805909C8;
}

loc_inl2_0x805909E8:
{
    r3 = MemoryInline::FlatRead32((r3 + 36));
    f1.d = MemoryInline::FlatReadFloat32(r3);
}

loc_inl2_cont_805909C8:
{
    // end of inlined leaf 0x805909C8
    r3 = 0x808B0000u;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 116));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 27800));
    r3 = r30;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r29 + 116), f0.d);
    r12 = MemoryInline::FlatRead32(r30);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x805AB714u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x809C0000u;
    r5 = 0x809C0000u;
    r4 = (r4 + 6604);
    r6 = 0x802A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r3 = r30;
    MemoryInline::FlatWriteFloat32((r30 + 24), f0.d);
    r5 = (r5 + 6628);
    r6 = (r6 + 16640);
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    ctx->lr = 0x805AB740u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x805AA22Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r30 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 88));
    r29 = MemoryInline::FlatRead32((r3 + 140));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 16));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_805AB754:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805ABAB0;
    }
}

loc_805AB758:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 16));
    r3 = (r1 + 8);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 20));
    r4 = (r1 + 12);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 16), f2.d);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x800851E0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 20), f0.d);
    goto loc_805ABAB0;
}

loc_805AB78C:
{
    r3 = MemoryInline::FlatRead32((r30 + 44));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & 1024);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805AB7A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805AB7FC;
    }
}

loc_805AB7A4:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x805AB7B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805AB7BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805AB7FC;
    }
}

loc_805AB7C0:
{
    r0 = MemoryInline::FlatRead32((r30 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805AB7C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805AB7FC;
    }
}

loc_805AB7CC:
{
    r0 = MemoryInline::FlatRead8((r30 + 423));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805AB7D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805ABA70;
    }
}

loc_805AB7D8:
{
    r4 = 0x809C0000u;
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r4 + -10520));
    r0 = MemoryInline::FlatRead32((r4 + 72));
    MemoryInline::FlatWrite32((r30 + 8), r0);
    ctx->lr = 0x805AB7F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805ABD94u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 423), static_cast<uint8_t>(r0));
    goto loc_805ABA70;
}

loc_805AB7FC:
{
    r3 = r30;
    ctx->lr = 0x805AB804u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805ACC34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 76));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805AB80C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805AB998;
    }
}

loc_805AB810:
{
    r28 = MemoryInline::FlatRead16((r30 + 48));
    r28 = (r28 << 16);
    r28 = (static_cast<int32_t>(r28) >> 16);
    r3 = MemoryInline::FlatRead32((r30 + 44));
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r29 = 0x809C0000u;
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r29 + -10520));
    r5 = r28;
    r6 = 0;
    ctx->lr = 0x805AB834u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80516808u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_805AB83C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(-1))) {
        goto loc_805AB960;
    }
}

loc_805AB840:
{
    r0 = MemoryInline::FlatRead16((r30 + 48));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_805AB848:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805AB960;
    }
}

loc_805AB84C:
{
    MemoryInline::FlatWrite16((r30 + 48), static_cast<uint16_t>(r3));
    r3 = r30;
    r12 = MemoryInline::FlatRead32(r30);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x805AB864u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805AB868:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805ABA70;
    }
}

loc_805AB86C:
{
    r0 = MemoryInline::FlatRead32((r30 + 76));
    r4 = MemoryInline::FlatRead16((r30 + 48));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_805AB878:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_805AB8C0;
    }
}

loc_805AB87C:
{
    r0 = MemoryInline::FlatRead8((r30 + 80));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805AB884:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805AB8E4;
    }
}

loc_805AB888:
{
    r29 = 1;
    MemoryInline::FlatWrite32((r30 + 76), r29);
    r3 = r30;
    r12 = MemoryInline::FlatRead32(r30);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x805AB8A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80516CD4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805AB8AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805AB8B8;
    }
}

loc_805AB8B0:
{
    MemoryInline::FlatWrite32((r30 + 8), r3);
    goto loc_805AB8E4;
}

loc_805AB8B8:
{
    MemoryInline::FlatWrite8((r30 + 80), static_cast<uint8_t>(r29));
    goto loc_805AB8E4;
}

loc_805AB8C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_805AB8C4:
{
    MemoryInline::FlatWrite16((r30 + 48), static_cast<uint16_t>(r4));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805AB8DC;
    }
}

loc_805AB8CC:
{
    r3 = MemoryInline::FlatRead32((r29 + -10520));
    r4 = (r4 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80516BFCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    MemoryInline::FlatWrite32((r30 + 8), r3);
}

loc_805AB8DC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 76), r0);
}

loc_805AB8E4:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    // inline leaf 0x805A6C04 (17 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r3 + 824));
    r0 = 0;
    r4 = 0x80890000u;
    r3 = 0x80890000u;
    guest_range_1 = MemoryInline::ResolveRangeHost(r5, 0, 48u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r5, static_cast<uint8_t>(r0));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8728));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r5 + 8), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8976));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r5 + 4), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r5 + 12), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r5 + 16), f1.d);
    }
    MemoryInline::WriteResolved8(guest_range_1, 28u, (r5 + 28), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r5 + 36), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r5 + 32), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r5 + 40), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r5 + 44), f1.d);
    }
    // end of inlined leaf 0x805A6C04
    r0 = 0;
    guest_range_3 = MemoryInline::ResolveRangeHost((r30 + 440), 0, 72u, false, true);
    MemoryInline::WriteResolved16(guest_range_3, 0u, (r30 + 440), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    r3 = r30;
    MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r30 + 464), f0.d);
    MemoryInline::WriteResolved16(guest_range_3, 2u, (r30 + 442), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r30 + 468), f0.d);
    MemoryInline::WriteResolved16(guest_range_3, 4u, (r30 + 444), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r30 + 472), f0.d);
    MemoryInline::WriteResolved16(guest_range_3, 6u, (r30 + 446), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 36u, (r30 + 476), f0.d);
    MemoryInline::WriteResolved16(guest_range_3, 8u, (r30 + 448), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 40u, (r30 + 480), f0.d);
    MemoryInline::WriteResolved16(guest_range_3, 10u, (r30 + 450), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 44u, (r30 + 484), f0.d);
    MemoryInline::WriteResolved16(guest_range_3, 12u, (r30 + 452), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 48u, (r30 + 488), f0.d);
    MemoryInline::WriteResolved16(guest_range_3, 14u, (r30 + 454), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 52u, (r30 + 492), f0.d);
    MemoryInline::WriteResolved16(guest_range_3, 16u, (r30 + 456), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 56u, (r30 + 496), f0.d);
    MemoryInline::WriteResolved16(guest_range_3, 18u, (r30 + 458), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 60u, (r30 + 500), f0.d);
    MemoryInline::WriteResolved16(guest_range_3, 20u, (r30 + 460), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 64u, (r30 + 504), f0.d);
    MemoryInline::WriteResolved16(guest_range_3, 22u, (r30 + 462), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 68u, (r30 + 508), f0.d);
    ctx->lr = 0x805AB95Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805ABD94u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805ABA70;
}

loc_805AB960:
{
    r0 = MemoryInline::FlatRead8((r30 + 420));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805AB968:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805ABA70;
    }
}

loc_805AB96C:
{
    r3 = MemoryInline::FlatRead32((r30 + 44));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & 32768);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805AB980:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805ABA70;
    }
}

loc_805AB984:
{
    r3 = 0;
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 8), r3);
    MemoryInline::FlatWrite8((r30 + 32), static_cast<uint8_t>(r0));
    goto loc_805ABA70;
}

loc_805AB998:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805AB99C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805ABA70;
    }
}

loc_805AB9A0:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r29 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x805AB9B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = MemoryInline::FlatRead32(r3);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 68));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805AB9D0:
{
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805AB9E8;
    }
}

loc_805AB9DC:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    r29 = 1;
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
}

loc_805AB9E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_805AB9EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805ABA70;
    }
}

loc_805AB9F0:
{
    r0 = MemoryInline::FlatRead32((r30 + 76));
}

loc_805AB9F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_805ABA40;
    }
}

loc_805AB9FC:
{
    r0 = MemoryInline::FlatRead8((r30 + 80));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805ABA04:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805ABA5C;
    }
}

loc_805ABA08:
{
    r31 = 1;
    MemoryInline::FlatWrite32((r30 + 76), r31);
    r3 = r30;
    r12 = MemoryInline::FlatRead32(r30);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x805ABA24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80516CD4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
}

loc_805ABA2C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805ABA38;
    }
}

loc_805ABA30:
{
    MemoryInline::FlatWrite32((r30 + 8), r3);
    goto loc_805ABA5C;
}

loc_805ABA38:
{
    MemoryInline::FlatWrite8((r30 + 80), static_cast<uint8_t>(r31));
    goto loc_805ABA5C;
}

loc_805ABA40:
{
    r0 = -1;
    MemoryInline::FlatWrite16((r30 + 48), static_cast<uint16_t>(r0));
}

loc_805ABA54:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 76), r0);
}

loc_805ABA5C:
{
    r0 = MemoryInline::FlatRead8((r30 + 80));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805ABA64:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805ABA70;
    }
}

loc_805ABA68:
{
    r3 = r30;
    ctx->lr = 0x805ABA70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805ABD94u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805ABA70:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x805ABA84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805ABA88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805ABAB0;
    }
}

loc_805ABA8C:
{
    r3 = MemoryInline::FlatRead32((r30 + 40));
    r12 = MemoryInline::FlatRead32((r3 + 52));
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x805ABAA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r30;
    ctx->lr = 0x805ABAA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805A9D50u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r30;
    ctx->lr = 0x805ABAB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805AAD08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805ABAB0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805AB57C func_805AB57C preserves=true fpr_mask=0x00000000
