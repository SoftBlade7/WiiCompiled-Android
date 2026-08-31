#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80787774(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r27_psq_tmp_0 = 0;
    uint32_t r27_psq_tmp_1 = 0;
    uint32_t r27_psq_tmp_10 = 0;
    uint32_t r27_psq_tmp_11 = 0;
    uint32_t r27_psq_tmp_12 = 0;
    uint32_t r27_psq_tmp_13 = 0;
    uint32_t r27_psq_tmp_14 = 0;
    uint32_t r27_psq_tmp_15 = 0;
    uint32_t r27_psq_tmp_2 = 0;
    uint32_t r27_psq_tmp_3 = 0;
    uint32_t r27_psq_tmp_4 = 0;
    uint32_t r27_psq_tmp_5 = 0;
    uint32_t r27_psq_tmp_6 = 0;
    uint32_t r27_psq_tmp_7 = 0;
    uint32_t r27_psq_tmp_8 = 0;
    uint32_t r27_psq_tmp_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r7_psq_tmp_0 = 0;
    uint32_t r7_psq_tmp_1 = 0;
    uint32_t r7_psq_tmp_2 = 0;
    uint32_t r7_psq_tmp_3 = 0;
    uint32_t r7_psq_tmp_4 = 0;
    uint32_t r7_psq_tmp_5 = 0;
    uint32_t r8_psq_tmp_0 = 0;
    uint32_t r8_psq_tmp_1 = 0;
    uint32_t r8_psq_tmp_10 = 0;
    uint32_t r8_psq_tmp_11 = 0;
    uint32_t r8_psq_tmp_12 = 0;
    uint32_t r8_psq_tmp_13 = 0;
    uint32_t r8_psq_tmp_14 = 0;
    uint32_t r8_psq_tmp_15 = 0;
    uint32_t r8_psq_tmp_16 = 0;
    uint32_t r8_psq_tmp_17 = 0;
    uint32_t r8_psq_tmp_18 = 0;
    uint32_t r8_psq_tmp_19 = 0;
    uint32_t r8_psq_tmp_2 = 0;
    uint32_t r8_psq_tmp_20 = 0;
    uint32_t r8_psq_tmp_21 = 0;
    uint32_t r8_psq_tmp_3 = 0;
    uint32_t r8_psq_tmp_4 = 0;
    uint32_t r8_psq_tmp_5 = 0;
    uint32_t r8_psq_tmp_6 = 0;
    uint32_t r8_psq_tmp_7 = 0;
    uint32_t r8_psq_tmp_8 = 0;
    uint32_t r8_psq_tmp_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80787774;

loc_80787774:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80021588 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -44), r21);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -4), r31);
    // end of inlined leaf 0x80021588
    r4 = 0x808B0000u;
    r23 = 0x809C0000u;
    r25 = MemoryInline::FlatRead32((r4 + 19440));
    r22 = r3;
    r21 = (r23 + 6248);
    r27 = 0;
    r24 = 0;
    r26 = 0;
    goto loc_80787804;
}

loc_807877AC:
{
}

loc_807877B0:
{
    r3 = 0;
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(0))) {
        goto loc_807877C8;
    }
}

loc_807877B8:
{
    r0 = MemoryInline::FlatRead32((r21 + 4));
}

loc_807877C0:
{
    if ((static_cast<int32_t>(r27) >= static_cast<int32_t>(r0))) {
        goto loc_807877C8;
    }
}

loc_807877C4:
{
    r3 = 1;
}

loc_807877C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807877CC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807877E4;
    }
}

loc_807877D0:
{
    r3 = (r23 + 6248);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x807877E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_807877E4:
{
    r3 = MemoryInline::FlatRead32((r21 + 8));
    r0 = MemoryInline::FlatRead32((r22 + 28));
    r3_addr_2 = (r3 + r24);
    r4 = MemoryInline::FlatRead32(r3_addr_2);
    r3 = (r0 + r26);
    ctx->lr = 0x807877F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8078707Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r24 = (r24 + 4);
    r26 = (r26 + 96);
    r27 = (r27 + 1);
}

loc_80787804:
{
}

loc_80787808:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r25))) {
        goto loc_807877AC;
    }
}

loc_8078780C:
{
    r3 = 538968064;
    r27 = (r1 + 8);
    r28 = (r3 + 8224);
    r24 = 0;
    r26 = 0;
    r29 = 0x809C0000u;
    r30 = 0x809C0000u;
    r31 = 33685504;
    r21 = 4;
    goto loc_80787A94;
}

loc_80787834:
{
    r0 = MemoryInline::FlatRead32((r22 + 16));
    r23 = (r0 + r26);
    r5 = MemoryInline::FlatRead32((r23 + 32));
    r0 = (r5 & r28);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80787A8C;
    }
}

loc_80787848:
{
    r0 = MemoryInline::FlatRead8((r23 + 30));
}

loc_80787850:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8078789C;
    }
}

loc_80787854:
{
    r0 = MemoryInline::FlatRead32((r29 + 14528));
    r4 = 0;
}

loc_80787860:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80787874;
    }
}

loc_80787864:
{
    r0 = MemoryInline::FlatRead32((r30 + 14540));
    r3 = (r24 & 7);
}

loc_80787870:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80787878;
    }
}

loc_80787874:
{
    r4 = 1;
}

loc_80787878:
{
}

loc_8078787C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8078789C;
    }
}

loc_80787880:
{
    r0 = (r31 + 514);
    r0 = (r0 & ~r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8078789C;
    }
}

loc_8078788C:
{
    r3 = MemoryInline::FlatRead32(r23);
    r4 = 8;
    ctx->lr = 0x80787898u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80786FC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWrite16((r23 + 28), static_cast<uint16_t>(r3));
}

loc_8078789C:
{
    r5 = r23;
    r6 = 0;
    r4 = 0;
    ctr = r21;
}

loc_807878AC:
{
}

loc_807878B0:
{
    r3 = (r23 + r6);
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r25))) {
        goto loc_807878C4;
    }
}

loc_807878B8:
{
    r8 = MemoryInline::FlatRead8((r3 + 32));
    r0 = (r8 & 128);
}

loc_807878C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807878D4;
    }
}

loc_807878C4:
{
    r0 = MemoryInline::FlatRead8((r3 + 32));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 32), static_cast<uint8_t>(r0));
    goto loc_80787A7C;
}

loc_807878D4:
{
    r7 = MemoryInline::FlatRead32((r22 + 28));
    r0 = (r8 & 252);
    MemoryInline::FlatWrite8((r3 + 32), static_cast<uint8_t>(r0));
    r8 = (r7 + r4);
    r7 = MemoryInline::FlatRead32(r23);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r7));
    f0.d = MemoryInline::FlatReadFloat32((r8 + 88));
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f3.d, f2.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r7_psq_tmp_3 = (r7 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r7_psq_tmp_3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r8_psq_tmp_3 = (r8 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r8_psq_tmp_3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r27, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f3.d, f2.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r27));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r27_psq_tmp_3 = (r27 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r27_psq_tmp_3, f1.d);
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f2.d, f2.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f2.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f2.d, f2.d));
    f1.d = PpcFmulsInline(f0.d, PPC_PsToScalarInline(f1.d));
    MemoryInline::FlatWriteFloat32((r5 + 12), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r23 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80787930:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80787944;
    }
}

loc_80787934:
{
    r0 = MemoryInline::FlatRead8((r3 + 32));
    r0 = (r0 | 3);
    MemoryInline::FlatWrite8((r3 + 32), static_cast<uint8_t>(r0));
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    goto loc_80787A7C;
}

loc_80787944:
{
    r0 = MemoryInline::FlatRead8((r23 + 30));
}

loc_8078794C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80787970;
    }
}

loc_80787950:
{
    r7 = MemoryInline::FlatRead16((r23 + 28));
    r0 = MemoryInline::FlatRead16((r8 + 92));
    r0 = (r7 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80787970;
    }
}

loc_80787960:
{
    r0 = MemoryInline::FlatRead8((r3 + 32));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 32), static_cast<uint8_t>(r0));
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    goto loc_80787A7C;
}

loc_80787970:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r27_psq_tmp_4 = (r27 + 4);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r27_psq_tmp_4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r8_psq_tmp_4 = (r8 + 20);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r8_psq_tmp_4));
    r0 = MemoryInline::FlatRead8((r3 + 32));
    PpcSetPairedFprInline(f3, PPC_PsMulInline(f3.d, f2.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r27));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r8_psq_tmp_5 = (r8 + 16);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r8_psq_tmp_5));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_3 & 1);
    f0.d = MemoryInline::FlatReadFloat32((r23 + 4));
    PpcSetPairedFprInline(f2, PPC_PsMaddInline(f1.d, f2.d, f3.d));
    PpcSetPairedFprInline(f2, PPC_PsSum0Inline(f2.d, f3.d, f3.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f2.d), f0.d);
}

loc_8078799C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807879C0;
    }
}

loc_807879A0:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r27_psq_tmp_5 = (r27 + 4);
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<0u, 0u>(ctx, r27_psq_tmp_5));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r8_psq_tmp_6 = (r8 + 44);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r8_psq_tmp_6));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r8_psq_tmp_7 = (r8 + 40);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r8_psq_tmp_7));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f4.d, f3.d));
    PpcSetPairedFprInline(f3, PPC_PsMaddInline(f1.d, f2.d, f4.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f3.d, f4.d, f4.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_807879BC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80787A20;
    } else {
        f4.d = PPC_PsToScalarInline(f4.d);
    }
}

loc_807879C0:
{
}

loc_807879C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80787A10;
    }
}

loc_807879C8:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r27_psq_tmp_7 = (r27 + 4);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r27_psq_tmp_7));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r8_psq_tmp_9 = (r8 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r8_psq_tmp_9));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r27));
    PpcSetPairedFprInline(f3, PPC_PsMulInline(f3.d, f2.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r8_psq_tmp_10 = (r8 + 28);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r8_psq_tmp_10));
    f0.d = MemoryInline::FlatReadFloat32((r23 + 4));
    PpcSetPairedFprInline(f2, PPC_PsMaddInline(f1.d, f2.d, f3.d));
    PpcSetPairedFprInline(f2, PPC_PsSum0Inline(f2.d, f3.d, f3.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f2.d), f0.d);
}

loc_807879EC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80787A10;
    }
}

loc_807879F0:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r27_psq_tmp_8 = (r27 + 4);
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<0u, 0u>(ctx, r27_psq_tmp_8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r8_psq_tmp_11 = (r8 + 56);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r8_psq_tmp_11));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r8_psq_tmp_12 = (r8 + 52);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r8_psq_tmp_12));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f4.d, f3.d));
    PpcSetPairedFprInline(f3, PPC_PsMaddInline(f1.d, f2.d, f4.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f3.d, f4.d, f4.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_80787A0C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80787A20;
    } else {
        f4.d = PPC_PsToScalarInline(f4.d);
    }
}

loc_80787A10:
{
    r0 = MemoryInline::FlatRead8((r3 + 32));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 32), static_cast<uint8_t>(r0));
    f1.d = PPC_PsToScalarInline(f1.d);
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    goto loc_80787A7C;
}

loc_80787A20:
{
}

loc_80787A24:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        f1.d = PPC_PsToScalarInline(f1.d);
        f2.d = PPC_PsToScalarInline(f2.d);
        f3.d = PPC_PsToScalarInline(f3.d);
        f4.d = PPC_PsToScalarInline(f4.d);
        goto loc_80787A7C;
    }
}

loc_80787A28:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r27_psq_tmp_11 = (r27 + 4);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r27_psq_tmp_11));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r8_psq_tmp_15 = (r8 + 68);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r8_psq_tmp_15));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r27));
    PpcSetPairedFprInline(f3, PPC_PsMulInline(f3.d, f2.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r8_psq_tmp_16 = (r8 + 64);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r8_psq_tmp_16));
    f0.d = MemoryInline::FlatReadFloat32((r23 + 4));
    PpcSetPairedFprInline(f2, PPC_PsMaddInline(f1.d, f2.d, f3.d));
    PpcSetPairedFprInline(f2, PPC_PsSum0Inline(f2.d, f3.d, f3.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f2.d), f0.d);
}

loc_80787A4C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80787A70;
    }
}

loc_80787A50:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r27_psq_tmp_12 = (r27 + 4);
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<0u, 0u>(ctx, r27_psq_tmp_12));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r8_psq_tmp_17 = (r8 + 80);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r8_psq_tmp_17));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r8_psq_tmp_18 = (r8 + 76);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r8_psq_tmp_18));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f4.d, f3.d));
    PpcSetPairedFprInline(f3, PPC_PsMaddInline(f1.d, f2.d, f4.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f3.d, f4.d, f4.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_80787A6C:
{
    if (((cr & 0x40000000u) == 0)) {
        f1.d = PPC_PsToScalarInline(f1.d);
        f2.d = PPC_PsToScalarInline(f2.d);
        f3.d = PPC_PsToScalarInline(f3.d);
        f4.d = PPC_PsToScalarInline(f4.d);
        goto loc_80787A7C;
    }
}

loc_80787A70:
{
    r0 = MemoryInline::FlatRead8((r3 + 32));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 32), static_cast<uint8_t>(r0));
    f1.d = PPC_PsToScalarInline(f1.d);
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
}

loc_80787A7C:
{
    r4 = (r4 + 96);
    r5 = (r5 + 4);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807878AC;
    }
}

loc_80787A8C:
{
    r26 = (r26 + 36);
    r24 = (r24 + 1);
}

loc_80787A94:
{
    r0 = MemoryInline::FlatRead32((r22 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(r0));
}

loc_80787A9C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80787834;
    }
}

loc_80787AA0:
{
    r11 = (r1 + 80);
    // inline leaf 0x800215D4 (12 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -4));
    // end of inlined leaf 0x800215D4
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80787774 func_80787774 preserves=true fpr_mask=0x00000000
