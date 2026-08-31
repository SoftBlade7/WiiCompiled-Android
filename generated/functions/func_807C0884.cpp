#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807C0884(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r17_psq_tmp_0 = 0;
    uint32_t r17_psq_tmp_1 = 0;
    uint32_t r17_psq_tmp_10 = 0;
    uint32_t r17_psq_tmp_2 = 0;
    uint32_t r17_psq_tmp_3 = 0;
    uint32_t r17_psq_tmp_4 = 0;
    uint32_t r17_psq_tmp_5 = 0;
    uint32_t r17_psq_tmp_6 = 0;
    uint32_t r17_psq_tmp_7 = 0;
    uint32_t r17_psq_tmp_8 = 0;
    uint32_t r17_psq_tmp_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r21_psq_tmp_0 = 0;
    uint32_t r21_psq_tmp_1 = 0;
    uint32_t r21_psq_tmp_2 = 0;
    uint32_t r21_psq_tmp_3 = 0;
    uint32_t r21_psq_tmp_4 = 0;
    uint32_t r21_psq_tmp_5 = 0;
    uint32_t r21_psq_tmp_6 = 0;
    uint32_t r21_psq_tmp_7 = 0;
    uint32_t r24_psq_tmp_0 = 0;
    uint32_t r24_psq_tmp_1 = 0;
    uint32_t r24_psq_tmp_2 = 0;
    uint32_t r24_psq_tmp_3 = 0;
    uint32_t r24_psq_tmp_4 = 0;
    uint32_t r24_psq_tmp_5 = 0;
    uint32_t r24_psq_tmp_6 = 0;
    uint32_t r24_psq_tmp_7 = 0;
    uint32_t r24_psq_tmp_8 = 0;
    uint32_t r24_psq_tmp_9 = 0;
    uint32_t r25_psq_tmp_0 = 0;
    uint32_t r25_psq_tmp_1 = 0;
    uint32_t r25_psq_tmp_2 = 0;
    uint32_t r25_psq_tmp_3 = 0;
    uint32_t r25_psq_tmp_4 = 0;
    uint32_t r25_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_10 = 0;
    uint32_t r3_psq_tmp_11 = 0;
    uint32_t r3_psq_tmp_12 = 0;
    uint32_t r3_psq_tmp_13 = 0;
    uint32_t r3_psq_tmp_14 = 0;
    uint32_t r3_psq_tmp_15 = 0;
    uint32_t r3_psq_tmp_16 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint32_t r3_psq_tmp_9 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_10 = 0;
    uint32_t r5_psq_tmp_11 = 0;
    uint32_t r5_psq_tmp_12 = 0;
    uint32_t r5_psq_tmp_13 = 0;
    uint32_t r5_psq_tmp_14 = 0;
    uint32_t r5_psq_tmp_15 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_4 = 0;
    uint32_t r5_psq_tmp_5 = 0;
    uint32_t r5_psq_tmp_6 = 0;
    uint32_t r5_psq_tmp_7 = 0;
    uint32_t r5_psq_tmp_8 = 0;
    uint32_t r5_psq_tmp_9 = 0;
    uint32_t r6_psq_tmp_0 = 0;
    uint32_t r6_psq_tmp_1 = 0;
    uint32_t r6_psq_tmp_10 = 0;
    uint32_t r6_psq_tmp_11 = 0;
    uint32_t r6_psq_tmp_12 = 0;
    uint32_t r6_psq_tmp_13 = 0;
    uint32_t r6_psq_tmp_14 = 0;
    uint32_t r6_psq_tmp_15 = 0;
    uint32_t r6_psq_tmp_2 = 0;
    uint32_t r6_psq_tmp_3 = 0;
    uint32_t r6_psq_tmp_4 = 0;
    uint32_t r6_psq_tmp_5 = 0;
    uint32_t r6_psq_tmp_6 = 0;
    uint32_t r6_psq_tmp_7 = 0;
    uint32_t r6_psq_tmp_8 = 0;
    uint32_t r6_psq_tmp_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
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
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807C0884;

loc_807C0884:
{
    MemoryInline::FlatWriteRam32((r1 + -224), r1);
    r1 = (r1 + -224);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 228), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 208), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 192), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 176), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 160), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 144), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    r11 = (r1 + 144);
    // inline leaf 0x80021578 (16 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -60), 0, 60u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -60), r17);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -56), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -52), r19);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -48), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -44), r21);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -4), r31);
    // end of inlined leaf 0x80021578
    r0 = MemoryInline::FlatRead32((r3 + 104));
    r17 = r3;
    f29.d = MemoryInline::FlatReadFloat32((r3 + 96));
    r18 = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807C08D4:
{
    r23 = MemoryInline::FlatRead32((r3 + 4));
    r19 = r5;
    r20 = r6;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C08EC;
    }
}

loc_807C08E4:
{
    r3 = 0;
    goto loc_807C0EC0;
}

loc_807C08EC:
{
    r3 = 0x808A0000u;
    r4 = 0x808A0000u;
    f31.d = MemoryInline::FlatReadFloat32((r4 + 26340));
    r26 = (r1 + 8);
    f28.d = MemoryInline::FlatReadFloat32((r3 + 26328));
    r27 = (r1 + 20);
    r28 = (r1 + 32);
    r24 = (r1 + 56);
    r25 = (r1 + 44);
    r30 = 0x808B0000u;
    r31 = 0x808B0000u;
    r29 = 1;
    goto loc_807C0E9C;
}

loc_807C0920:
{
    r3 = MemoryInline::FlatRead32((r17 + 104));
    r5 = MemoryInline::FlatRead32((r17 + 8));
    r0 = MemoryInline::FlatRead16(r3);
    r4 = MemoryInline::FlatRead32(r17);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r17_psq_tmp_2 = (r17 + 60);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r17_psq_tmp_2));
    r22 = (r5 + r0);
    r3 = MemoryInline::FlatRead16((r22 + 4));
    r0 = MemoryInline::FlatRead16((r22 + 8));
    r3 = (r3 * 12);
    r3 = (r4 + r3);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    r0 = (r0 * 12);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r17_psq_tmp_3 = (r17 + 68);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r17_psq_tmp_3));
    r3 = (r23 + r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r24, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f1.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r24_psq_tmp_2 = (r24 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r24_psq_tmp_2, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r24));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r24_psq_tmp_3 = (r24 + 4);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r24_psq_tmp_3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f2.d, f1.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f3.d, f0.d, f2.d));
    PpcSetPairedFprInline(f0, PPC_PsSum0Inline(f1.d, f2.d, f2.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f0.d), f29.d);
}

loc_807C0990:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C0E9C;
    }
}

loc_807C0998:
{
    r0 = MemoryInline::FlatRead16((r22 + 10));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r24_psq_tmp_4 = (r24 + 4);
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<0u, 0u>(ctx, r24_psq_tmp_4));
    r0 = (r0 * 12);
    r5 = (r23 + r0);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_2 = (r5 + 4);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f4.d, f2.d));
    PpcSetPairedFprInline(f2, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f2.d, f4.d, f4.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f29.d);
}

loc_807C09C0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C0E9C;
    }
}

loc_807C09C8:
{
    r0 = MemoryInline::FlatRead16((r22 + 12));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r24_psq_tmp_5 = (r24 + 4);
    PpcSetPairedFprInline(f6, PPC_PsqLStackInline<0u, 0u>(ctx, r24_psq_tmp_5));
    r0 = (r0 * 12);
    f2.d = MemoryInline::FlatReadFloat32(r22);
    r6 = (r23 + r0);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r6_psq_tmp_2 = (r6 + 4);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6));
    PpcSetPairedFprInline(f6, PPC_PsMulInline(f6.d, f5.d));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f4.d, f6.d));
    PpcSetPairedFprInline(f4, PPC_PsSum0Inline(f5.d, f6.d, f6.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(PPC_PsToScalarInline(f4.d) - f2.d));
    SetCRFloatResident(cr, 0, f2.d, f29.d);
}

loc_807C09F8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C0E9C;
    }
}

loc_807C0A00:
{
    r0 = MemoryInline::FlatRead16((r22 + 6));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r24_psq_tmp_6 = (r24 + 4);
    PpcSetPairedFprInline(f6, PPC_PsqLStackInline<0u, 0u>(ctx, r24_psq_tmp_6));
    r0 = (r0 * 12);
    r21 = (r23 + r0);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r21_psq_tmp_2 = (r21 + 4);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r21_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r21));
    PpcSetPairedFprInline(f6, PPC_PsMulInline(f6.d, f5.d));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f4.d, f6.d));
    PpcSetPairedFprInline(f30, PPC_PsSum0Inline(f5.d, f6.d, f6.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f29.d - PPC_PsToScalarInline(f30.d)));
    SetCRFloatResident(cr, 0, f7.d, f28.d);
}

loc_807C0A2C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C0E9C;
    }
}

loc_807C0A34:
{
    f3.d = MemoryInline::FlatReadFloat32((r17 + 16));
    SetCRFloatResident(cr, 0, f3.d, f7.d);
}

loc_807C0A3C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C0E9C;
    }
}

loc_807C0A44:
{
    r4 = MemoryInline::FlatRead16((r22 + 14));
    r0 = MemoryInline::FlatRead32((r17 + 100));
    r4 = (r4 & 31);
    r4 = PPC_Slw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r4));
    r0 = (r4 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C0E9C;
    }
}

loc_807C0A5C:
{
    r0 = (r4 & 84344832);
}

loc_807C0A60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807C0A84;
    }
}

loc_807C0A64:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r17_psq_tmp_4 = (r17 + 88);
    PpcSetPairedFprInline(f6, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r17_psq_tmp_4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r21_psq_tmp_3 = (r21 + 4);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r21_psq_tmp_3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r17_psq_tmp_5 = (r17 + 84);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r17_psq_tmp_5));
    PpcSetPairedFprInline(f6, PPC_PsMulInline(f6.d, f5.d));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f4.d, f6.d));
    PpcSetPairedFprInline(f3, PPC_PsSum0Inline(f5.d, f6.d, f6.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f3.d), f28.d);
}

loc_807C0A80:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807C0E9C;
    }
}

loc_807C0A84:
{
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f0.d), PPC_PsToScalarInline(f1.d));
}

loc_807C0A88:
{
    r0 = 1;
    f3.d = PpcFmulsInline(f29.d, f29.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C0AA0;
    }
}

loc_807C0A94:
{
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f0.d), f2.d);
}

loc_807C0A98:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C0B84;
    }
}

loc_807C0A9C:
{
    goto loc_807C0AAC;
}

loc_807C0AA0:
{
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f2.d);
}

loc_807C0AA4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C0B84;
    }
}

loc_807C0AA8:
{
    goto loc_807C0B18;
}

loc_807C0AAC:
{
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f0.d), f28.d);
}

loc_807C0AB0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C0E04;
    }
}

loc_807C0AB8:
{
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f2.d);
}

loc_807C0ABC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C0AEC;
    }
}

loc_807C0AC0:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 4);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_3 = (r5 + 4);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f5.d, f4.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5));
    PpcSetPairedFprInline(f4, PPC_PsMaddInline(f2.d, f4.d, f5.d));
    PpcSetPairedFprInline(f10, PPC_PsSum0Inline(f4.d, f5.d, f5.d));
    f2.d = PpcFmulsInline(PPC_PsToScalarInline(f10.d), PPC_PsToScalarInline(f0.d));
    SetCRFloatResident(cr, 0, f2.d, PPC_PsToScalarInline(f1.d));
}

loc_807C0AE4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C0C14;
    }
}

loc_807C0AE8:
{
    f1.d = PPC_PsToScalarInline(f1.d);
    f10.d = PPC_PsToScalarInline(f10.d);
    goto loc_807C0BF0;
}

loc_807C0AEC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_5 = (r3 + 4);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r6_psq_tmp_3 = (r6 + 4);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f5.d, f4.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6));
    PpcSetPairedFprInline(f4, PPC_PsMaddInline(f1.d, f4.d, f5.d));
    PpcSetPairedFprInline(f11, PPC_PsSum0Inline(f4.d, f5.d, f5.d));
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f11.d), PPC_PsToScalarInline(f0.d));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_807C0B10:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C0D04;
    }
}

loc_807C0B14:
{
    f11.d = PPC_PsToScalarInline(f11.d);
    goto loc_807C0BF0;
}

loc_807C0B18:
{
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f28.d);
}

loc_807C0B1C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C0E04;
    }
}

loc_807C0B24:
{
    SetCRFloatResident(cr, 0, f2.d, PPC_PsToScalarInline(f0.d));
}

loc_807C0B28:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C0B58;
    }
}

loc_807C0B2C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_5 = (r5 + 4);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_5));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r6_psq_tmp_5 = (r6 + 4);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_5));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f5.d, f4.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6));
    PpcSetPairedFprInline(f4, PPC_PsMaddInline(f0.d, f4.d, f5.d));
    PpcSetPairedFprInline(f11, PPC_PsSum0Inline(f4.d, f5.d, f5.d));
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f11.d), PPC_PsToScalarInline(f1.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_807C0B50:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C0C8C;
    }
}

loc_807C0B54:
{
    f11.d = PPC_PsToScalarInline(f11.d);
    goto loc_807C0BFC;
}

loc_807C0B58:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_6 = (r5 + 4);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_6));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_7 = (r3 + 4);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_7));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f5.d, f4.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f4, PPC_PsMaddInline(f2.d, f4.d, f5.d));
    PpcSetPairedFprInline(f10, PPC_PsSum0Inline(f4.d, f5.d, f5.d));
    f2.d = PpcFmulsInline(PPC_PsToScalarInline(f10.d), PPC_PsToScalarInline(f1.d));
    SetCRFloatResident(cr, 0, f2.d, PPC_PsToScalarInline(f0.d));
}

loc_807C0B7C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C0C14;
    }
}

loc_807C0B80:
{
    f10.d = PPC_PsToScalarInline(f10.d);
    goto loc_807C0BFC;
}

loc_807C0B84:
{
    SetCRFloatResident(cr, 0, f2.d, f28.d);
}

loc_807C0B88:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C0E04;
    }
}

loc_807C0B90:
{
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f0.d), PPC_PsToScalarInline(f1.d));
}

loc_807C0B94:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C0BC4;
    }
}

loc_807C0B98:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r6_psq_tmp_7 = (r6 + 4);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_7));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_9 = (r3 + 4);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_9));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f5.d, f4.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f4, PPC_PsMaddInline(f1.d, f4.d, f5.d));
    PpcSetPairedFprInline(f11, PPC_PsSum0Inline(f4.d, f5.d, f5.d));
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f11.d), f2.d);
    SetCRFloatResident(cr, 0, f1.d, PPC_PsToScalarInline(f0.d));
}

loc_807C0BBC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C0D04;
    }
}

loc_807C0BC0:
{
    goto loc_807C0C08;
}

loc_807C0BC4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r6_psq_tmp_8 = (r6 + 4);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_8 = (r5 + 4);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_8));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f5.d, f4.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5));
    PpcSetPairedFprInline(f4, PPC_PsMaddInline(f0.d, f4.d, f5.d));
    PpcSetPairedFprInline(f11, PPC_PsSum0Inline(f4.d, f5.d, f5.d));
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f11.d), f2.d);
    SetCRFloatResident(cr, 0, f0.d, PPC_PsToScalarInline(f1.d));
}

loc_807C0BE8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C0C8C;
    }
}

loc_807C0BEC:
{
    f1.d = PPC_PsToScalarInline(f1.d);
    goto loc_807C0C08;
}

loc_807C0BF0:
{
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f0.d), PPC_PsToScalarInline(f0.d));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
    f6.d = PPC_PsToScalarInline(f6.d);
    goto loc_807C0D88;
}

loc_807C0BFC:
{
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f1.d), PPC_PsToScalarInline(f1.d));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f1.d = PPC_PsToScalarInline(f1.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
    f6.d = PPC_PsToScalarInline(f6.d);
    goto loc_807C0D88;
}

loc_807C0C08:
{
    f0.d = PpcFmulsInline(f2.d, f2.d);
    f27.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
    f6.d = PPC_PsToScalarInline(f6.d);
    f11.d = PPC_PsToScalarInline(f11.d);
    goto loc_807C0D88;
}

loc_807C0C14:
{
    f7.d = PpcFmulsInline(PPC_PsToScalarInline(f10.d), PPC_PsToScalarInline(f1.d));
    f5.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f6.d = PpcFmulsInline(PPC_PsToScalarInline(f10.d), PPC_PsToScalarInline(f10.d));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f2.d = MemoryInline::FlatReadFloat32(r3);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f7.d - PPC_PsToScalarInline(f0.d)));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f31.d));
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f7.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f6.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f9.d / f8.d));
    f8.d = PpcFmulsInline(f9.d, PPC_PsToScalarInline(f10.d));
    f5.d = PpcFmulsInline(f5.d, f9.d);
    f2.d = PpcFmulsInline(f2.d, f9.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(PPC_PsToScalarInline(f1.d) - f8.d));
    f7.d = PpcFmulsInline(f7.d, f9.d);
    f1.d = PpcFmulsInline(f4.d, f8.d);
    f0.d = PpcFmulsInline(f0.d, f8.d);
    f4.d = PpcFmulsInline(f6.d, f8.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r28));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f1.d);
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    f10.d = PPC_PsToScalarInline(f10.d);
    goto loc_807C0D78;
}

loc_807C0C8C:
{
    f7.d = PpcFmulsInline(PPC_PsToScalarInline(f11.d), f2.d);
    f4.d = MemoryInline::FlatReadFloat32(r5);
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f11.d), PPC_PsToScalarInline(f11.d));
    f6.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f5.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f7.d - PPC_PsToScalarInline(f1.d)));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f0.d = MemoryInline::FlatReadFloat32(r6);
    f8.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f7.d = MemoryInline::FlatReadFloat32((r6 + 8));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f9.d / f1.d));
    f9.d = PpcFmulsInline(f10.d, PPC_PsToScalarInline(f11.d));
    f1.d = PpcFmulsInline(f4.d, f10.d);
    f6.d = PpcFmulsInline(f6.d, f10.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f9.d));
    f8.d = PpcFmulsInline(f8.d, f10.d);
    f2.d = PpcFmulsInline(f5.d, f4.d);
    f0.d = PpcFmulsInline(f0.d, f4.d);
    f4.d = PpcFmulsInline(f7.d, f4.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r27));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    f11.d = PPC_PsToScalarInline(f11.d);
    goto loc_807C0D78;
}

loc_807C0D04:
{
    f7.d = PpcFmulsInline(PPC_PsToScalarInline(f11.d), PPC_PsToScalarInline(f0.d));
    f6.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f11.d), PPC_PsToScalarInline(f11.d));
    f5.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f4.d = MemoryInline::FlatReadFloat32(r6);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f31.d));
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f8.d = MemoryInline::FlatReadFloat32((r6 + 8));
    f7.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f9.d / f2.d));
    f9.d = PpcFmulsInline(f10.d, PPC_PsToScalarInline(f11.d));
    f6.d = PpcFmulsInline(f6.d, f10.d);
    f2.d = PpcFmulsInline(f4.d, f10.d);
    f9.d = static_cast<double>(PpcForceSingleValueInline(PPC_PsToScalarInline(f0.d) - f9.d));
    f8.d = PpcFmulsInline(f8.d, f10.d);
    f0.d = PpcFmulsInline(f1.d, f9.d);
    f4.d = PpcFmulsInline(f5.d, f9.d);
    f1.d = PpcFmulsInline(f7.d, f9.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f4.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r26));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    f11.d = PPC_PsToScalarInline(f11.d);
}

loc_807C0D78:
{
    f27.d = static_cast<double>(PpcForceSingleValueInline(f3.d - PPC_PsToScalarInline(f1.d)));
    SetCRFloatResident(cr, 0, f27.d, f28.d);
}

loc_807C0D80:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C0E9C;
    } else {
        f1.d = PPC_PsToScalarInline(f1.d);
    }
}

loc_807C0D88:
{
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f30.d), PPC_PsToScalarInline(f30.d));
    SetCRFloatResident(cr, 0, f27.d, f0.d);
}

loc_807C0D90:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807C0E9C;
    }
}

loc_807C0D94:
{
    SetCRFloatResident(cr, 0, f27.d, f28.d);
}

loc_807C0D98:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & 1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_4 & 134217727);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807C0DAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C0E9C;
    }
}

loc_807C0DB0:
{
    SetCRFloatResident(cr, 0, f27.d, f28.d);
}

loc_807C0DB4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C0DD0;
    }
}

loc_807C0DBC:
{
    r3 = (r30 + 22260);
    r5 = (r31 + 22224);
    r4 = 627;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807C0DD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80026050u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_807C0DD0:
{
    SetCRFloatResident(cr, 0, f27.d, f28.d);
}

loc_807C0DD4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C0DE4;
    }
}

loc_807C0DDC:
{
    f0.d = f28.d;
    goto loc_807C0DF0;
}

loc_807C0DE4:
{
    f1.d = f27.d;
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28972));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28968));
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, f1.d, f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f0.d = PpcFmulsInline(f27.d, f1.d);
}

loc_807C0DF0:
{
    f7.d = static_cast<double>(PpcForceSingleValueInline(f0.d - PPC_PsToScalarInline(f30.d)));
    SetCRFloatResident(cr, 0, f7.d, f28.d);
}

loc_807C0DF8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C0E9C;
    }
}

loc_807C0E00:
{
    r0 = 0;
}

loc_807C0E04:
{
}

loc_807C0E08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807C0E14;
    }
}

loc_807C0E0C:
{
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f30.d), f28.d);
}

loc_807C0E10:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807C0E58;
    }
}

loc_807C0E14:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r24));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r17_psq_tmp_7 = (r17 + 84);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r17_psq_tmp_7));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r21_psq_tmp_5 = (r21 + 4);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r21_psq_tmp_5));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r24_psq_tmp_7 = (r24 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r24_psq_tmp_7));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r17_psq_tmp_8 = (r17 + 92);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r17_psq_tmp_8));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r25, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r21));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r25));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r25_psq_tmp_2 = (r25 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r25_psq_tmp_2, f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r25_psq_tmp_3 = (r25 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r25_psq_tmp_3));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f3.d));
    PpcSetPairedFprInline(f3, PPC_PsMaddInline(f1.d, f2.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsSum0Inline(f3.d, f0.d, f0.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f0.d), f28.d);
}

loc_807C0E54:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807C0E9C;
    }
}

loc_807C0E58:
{
}

loc_807C0E5C:
{
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_807C0E64;
    }
}

loc_807C0E60:
{
    MemoryInline::FlatWriteFloat32(r18, f7.d);
}

loc_807C0E64:
{
}

loc_807C0E68:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(0))) {
        goto loc_807C0E84;
    }
}

loc_807C0E6C:
{
    f0.d = MemoryInline::FlatReadFloat32(r21);
    MemoryInline::FlatWriteFloat32(r19, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r21 + 4));
    MemoryInline::FlatWriteFloat32((r19 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r21 + 8));
    MemoryInline::FlatWriteFloat32((r19 + 8), f0.d);
}

loc_807C0E84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r20), static_cast<int32_t>(0));
}

loc_807C0E88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C0E94;
    }
}

loc_807C0E8C:
{
    r0 = MemoryInline::FlatRead16((r22 + 14));
    MemoryInline::FlatWrite16(r20, static_cast<uint16_t>(r0));
}

loc_807C0E94:
{
    r3 = 1;
    goto loc_807C0EC0;
}

loc_807C0E9C:
{
    r3 = MemoryInline::FlatRead32((r17 + 104));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r17 + 104), r3);
    r0 = MemoryInline::FlatRead16(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807C0EB0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C0920;
    }
}

loc_807C0EB4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r17 + 104), r0);
    r3 = 0;
}

loc_807C0EC0:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 208));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 192));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 176));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::FlatReadFloat64((r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 144);
    f27.d = MemoryInline::FlatReadFloat64((r1 + 144));
    // inline leaf 0x800215C4 (16 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -60), 0, 60u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -60));
            r18 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -56));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -52));
            r20 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r11 + -4));
    // end of inlined leaf 0x800215C4
    r0 = MemoryInline::FlatRead32((r1 + 228));
    ctx->lr = r0;
    r1 = (r1 + 224);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
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
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807C0884 func_807C0884 preserves=false fpr_mask=0xF8000000
