#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807AD118(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr6_0 = 0;
    uint32_t cr7_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r30_psq_tmp_0 = 0;
    uint32_t r30_psq_tmp_1 = 0;
    uint32_t r30_psq_tmp_2 = 0;
    uint32_t r30_psq_tmp_3 = 0;
    uint32_t r30_psq_tmp_4 = 0;
    uint32_t r30_psq_tmp_5 = 0;
    uint32_t r30_psq_tmp_6 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807AD118;

loc_807AD118:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 100u, (r1 + 100), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 80u, (r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 64u, (r1 + 64), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolved32(guest_range_1, 60u, (r1 + 60), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 23288);
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r1 + 56), r30);
    r30 = r3;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r29);
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r1 + 48), r28);
    }
    r6 = MemoryInline::FlatRead32((r3 + 152));
    r7 = MemoryInline::FlatRead32((r3 + 708));
    r5 = MemoryInline::FlatRead32(r6);
    r4 = MemoryInline::FlatRead32((r6 + 4));
}

loc_807AD164:
{
    r0 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::FlatWriteRam32((r1 + 32), r5);
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(0))) {
        goto loc_807AD1C8;
    }
}

loc_807AD178:
{
    r5 = -1;
    r6 = 0;
    MemoryInline::FlatWrite32((r3 + 708), r5);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 131070);
    r4 = MemoryInline::FlatRead32((r3 + 720));
    MemoryInline::FlatWrite16((r3 + 704), static_cast<uint16_t>(r7));
    r5 = MemoryInline::FlatRead32((r3 + 724));
    MemoryInline::FlatWrite32((r3 + 712), r6);
    r4_addr_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead16(r4_addr_0);
    r0 = (r0 * 28);
    r29 = (r5 + r0);
    r3 = (r29 + 4);
    // inline leaf 0x800213E4 (12 guest instruction(s))
}

loc_inl0_0x800213E4:
{
    r5 = MemoryInline::FlatRead32(r3);
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r7 = MemoryInline::FlatRead32((r3 + 8));
    r3 = 1;
}

loc_inl0_0x800213F8:
{
    SetCRResident(cr, xer, 6, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_inl0_0x800213FC:
{
    SetCRResident(cr, xer, 7, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_inl0_0x80021400:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80021404:
{
    if (((cr & 0x00000020u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80021408:
{
    if (((cr & 0x00000002u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8002140C:
{
    r3 = 0;
    goto loc_inl0_cont_800213E4;
}

loc_inl0_return:
{
}

loc_inl0_cont_800213E4:
{
    // end of inlined leaf 0x800213E4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807AD1B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807AD1F0;
    }
}

loc_807AD1B4:
{
    r3 = MemoryInline::FlatRead32((r30 + 728));
    r12 = (r29 + 4);
    ctx->lr = 0x807AD1C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021450u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    // nop
    goto loc_807AD1F0;
}

loc_807AD1C8:
{
    r4 = MemoryInline::FlatRead32((r3 + 712));
    r0 = MemoryInline::FlatRead16((r3 + 704));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 712), r4);
    r4 = MemoryInline::FlatRead32((r3 + 720));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 724));
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead16(r4_addr_1);
    r0 = (r0 * 28);
    r29 = (r3 + r0);
}

loc_807AD1F0:
{
    r3 = (r29 + 16);
    // inline leaf 0x800213E4 (12 guest instruction(s))
}

loc_inl1_0x800213E4:
{
    r5 = MemoryInline::FlatRead32(r3);
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r7 = MemoryInline::FlatRead32((r3 + 8));
    r3 = 1;
}

loc_inl1_0x800213F8:
{
    SetCRResident(cr, xer, 6, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_inl1_0x800213FC:
{
    SetCRResident(cr, xer, 7, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_inl1_0x80021400:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80021404:
{
    if (((cr & 0x00000020u) == 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80021408:
{
    if (((cr & 0x00000002u) == 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8002140C:
{
    r3 = 0;
    goto loc_inl1_cont_800213E4;
}

loc_inl1_return:
{
}

loc_inl1_cont_800213E4:
{
    // end of inlined leaf 0x800213E4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807AD1FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807AD210;
    }
}

loc_807AD200:
{
    r3 = MemoryInline::FlatRead32((r30 + 728));
    r12 = (r29 + 16);
    ctx->lr = 0x807AD20Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021450u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    // nop
}

loc_807AD210:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 56), 0, 724u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 96u, (r30 + 152));
    r4 = (r1 + 32);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 288));
    PpcSetPairedFprInline(f3, PPC_PsSubInline(f3.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_0 = (r4 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r4_psq_tmp_0));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_0 = (r30 + 768);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_0, f3.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 712u, (r30 + 768));
    PpcSetPairedFprInline(f3, PPC_PsSubInline(f3.d, f1.d));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_1 = (r30 + 776);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_1, f3.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 720u, (r30 + 776));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_807AD254:
{
    r0 = cr;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
}

loc_807AD25C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807AD2B0;
    }
}

loc_807AD260:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r30 + 56));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r30 + 64));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_807AD278:
{
    r0 = cr;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
}

loc_807AD280:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807AD28C;
    }
}

loc_807AD284:
{
    r3 = (r30 + 44);
    goto loc_807AD290;
}

loc_807AD28C:
{
    r3 = (r30 + 56);
}

loc_807AD290:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r30_psq_tmp_2 = (r30 + 768);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_2));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f1.d, f0.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r30_psq_tmp_3 = (r30 + 776);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_4 = (r30 + 768);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_4, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f1.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_5 = (r30 + 776);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_5, f0.d);
    f0.d = PPC_PsToScalarInline(f0.d);
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_807AD2B0:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 584u, (r30 + 640));
    r4 = MemoryInline::ReadResolved16(guest_range_0, 648u, (r30 + 704));
}

loc_807AD2BC:
{
    r28 = (r4 & 255);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807AD424;
    }
}

loc_807AD2C4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 624u, (r30 + 680));
}

loc_807AD2CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807AD424;
    }
}

loc_807AD2D0:
{
}

loc_807AD2D4:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(6))) {
        goto loc_807AD424;
    }
}

loc_807AD2D8:
{
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4 = 0x809C0000u;
    r0 = r3;
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    r4 = (r0 & 255);
    // inline leaf 0x80531F18 (5 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 45));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F18
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r29 = r3;
    if (((cr & 0x80000000u) != 0)) {
        f3.d = PPC_PsToScalarInline(f3.d);
        goto loc_807AD370;
    }
}

loc_807AD2FC:
{
    r3 = (r30 + 668);
    r4 = (r30 + 68);
    // inline leaf 0x8019ADE0 (10 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f3, PPC_PsSubInline(f0.d, f1.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f3, PPC_PsMulInline(f3.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f0.d, f0.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f3.d, f3.d));
    // end of inlined leaf 0x8019ADE0
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f30.d = f1.d;
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_807AD314:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        f3.d = PPC_PsToScalarInline(f3.d);
        goto loc_807AD338;
    }
}

loc_807AD31C:
{
    r3 = 0x808B0000u;
    r5 = 0x808B0000u;
    r3 = (r3 + 22260);
    r4 = 627;
    r5 = (r5 + 22224);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807AD338u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    ctx->fpr[2].d = PPC_PsToScalarInline(ctx->fpr[2].d);
    ctx->fpr[3].d = PPC_PsToScalarInline(ctx->fpr[3].d);
    InvokeDirectCpu<0x80026050u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_807AD338:
{
    f31.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f30.d), f31.d);
}

loc_807AD340:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807AD34C;
    }
}

loc_807AD348:
{
    goto loc_807AD358;
}

loc_807AD34C:
{
    f1.d = f30.d;
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28972));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28968));
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, PPC_PsToScalarInline(f1.d), f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f31.d = PpcFmulsInline(PPC_PsToScalarInline(f30.d), f1.d);
}

loc_807AD358:
{
    r3 = 0x809C0000u;
    r4 = (r29 & 255);
    r3 = MemoryInline::FlatRead32((r3 + 8992));
    // inline leaf 0x806F8210 (4 guest instruction(s))
    r0 = (r4 * 12);
    r3 = (r3 + r0);
    r3 = (r3 + 20);
    // end of inlined leaf 0x806F8210
    f1.d = f31.d;
    ctx->lr = 0x807AD370u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806F7828u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    f30.d = PPC_PsToScalarInline(f30.d);
}

loc_807AD370:
{
}

loc_807AD374:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(3))) {
        goto loc_807AD380;
    }
}

loc_807AD378:
{
}

loc_807AD37C:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(6))) {
        goto loc_807AD394;
    }
}

loc_807AD380:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
}

loc_807AD384:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807AD56C;
    }
}

loc_807AD388:
{
    r0 = MemoryInline::FlatRead32((r30 + 712));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(40));
}

loc_807AD390:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807AD56C;
    }
}

loc_807AD394:
{
    r4 = MemoryInline::FlatRead32((r30 + 152));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(4));
}

loc_807AD39C:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 200));
    r3 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f4.d);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807AD404;
    }
}

loc_807AD3C8:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 80));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f2.d = PpcFmulsInline(f0.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 84));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 88));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
}

loc_807AD404:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead8((r30 + 748));
    r3 = MemoryInline::FlatRead32((r3 + 12088));
    r4 = (r1 + 20);
    r6 = 1;
    r7 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8078D9E8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    goto loc_807AD56C;
}

loc_807AD424:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(6));
}

loc_807AD428:
{
    if (((cr & 0x20000000u) != 0)) {
        f3.d = PPC_PsToScalarInline(f3.d);
        goto loc_807AD56C;
    }
}

loc_807AD42C:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::ReadResolved8(guest_range_0, 692u, (r30 + 748));
    r3 = MemoryInline::FlatRead32((r3 + 6392));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x80590100
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r30 + 68));
    r4 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 292));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r30 + 76));
    f0.d = PpcFmulsInline(f3.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    PpcSetPairedFprInline(f3, PPC_PsMulInline(f3.d, f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f3.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f3.d, f3.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_807AD488:
{
    r0 = cr;
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & 1);
}

loc_807AD490:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        f1.d = PPC_PsToScalarInline(f1.d);
        goto loc_807AD4B4;
    }
}

loc_807AD494:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r30 + 72));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 296));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807AD4AC:
{
    r0 = cr;
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & 1);
}

loc_807AD4B4:
{
}

loc_807AD4B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807AD4C4;
    }
}

loc_807AD4BC:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 692u, (r30 + 748));
    goto loc_807AD4C8;
}

loc_807AD4C4:
{
    r4 = 12;
}

loc_807AD4C8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(12));
}

loc_807AD4CC:
{
    if (((cr & 0x20000000u) != 0)) {
        f3.d = PPC_PsToScalarInline(f3.d);
        goto loc_807AD56C;
    }
}

loc_807AD4D0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // inline leaf 0x80531F18 (5 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 45));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F18
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r29 = r3;
    if (((cr & 0x80000000u) != 0)) {
        f3.d = PPC_PsToScalarInline(f3.d);
        goto loc_807AD56C;
    }
}

loc_807AD4E8:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::ReadResolved8(guest_range_0, 692u, (r30 + 748));
    r3 = MemoryInline::FlatRead32((r3 + 6392));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // end of inlined leaf 0x80590100
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r4 = (r30 + 68);
    // inline leaf 0x8019ADE0 (10 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_5 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_3 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f3, PPC_PsSubInline(f0.d, f1.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f3, PPC_PsMulInline(f3.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f0.d, f0.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f3.d, f3.d));
    // end of inlined leaf 0x8019ADE0
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f30.d = f1.d;
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_807AD510:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        f3.d = PPC_PsToScalarInline(f3.d);
        goto loc_807AD534;
    }
}

loc_807AD518:
{
    r3 = 0x808B0000u;
    r5 = 0x808B0000u;
    r3 = (r3 + 22260);
    r4 = 627;
    r5 = (r5 + 22224);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807AD534u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    ctx->fpr[2].d = PPC_PsToScalarInline(ctx->fpr[2].d);
    ctx->fpr[3].d = PPC_PsToScalarInline(ctx->fpr[3].d);
    InvokeDirectCpu<0x80026050u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_807AD534:
{
    f31.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f30.d), f31.d);
}

loc_807AD53C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807AD548;
    }
}

loc_807AD544:
{
    goto loc_807AD554;
}

loc_807AD548:
{
    f1.d = f30.d;
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28972));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28968));
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, PPC_PsToScalarInline(f1.d), f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f31.d = PpcFmulsInline(PPC_PsToScalarInline(f30.d), f1.d);
}

loc_807AD554:
{
    r3 = 0x809C0000u;
    r4 = (r29 & 255);
    r3 = MemoryInline::FlatRead32((r3 + 8992));
    // inline leaf 0x806F8210 (4 guest instruction(s))
    r0 = (r4 * 12);
    r3 = (r3 + r0);
    r3 = (r3 + 20);
    // end of inlined leaf 0x806F8210
    f1.d = f31.d;
    ctx->lr = 0x807AD56Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806F7828u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    f30.d = PPC_PsToScalarInline(f30.d);
}

loc_807AD56C:
{
    r3 = r30;
    ctx->lr = 0x807AD574u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80858A50u>(ctx);
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
    cr = ctx->cr;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    r0 = MemoryInline::FlatRead32((r1 + 100));
    r28 = MemoryInline::FlatRead32((r1 + 48));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807AD118 func_807AD118 preserves=false fpr_mask=0xC0000000
