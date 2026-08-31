#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807C0F00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r24_psq_tmp_0 = 0;
    uint32_t r24_psq_tmp_1 = 0;
    uint32_t r24_psq_tmp_2 = 0;
    uint32_t r24_psq_tmp_3 = 0;
    uint32_t r24_psq_tmp_4 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r30_psq_tmp_0 = 0;
    uint32_t r30_psq_tmp_1 = 0;
    uint32_t r30_psq_tmp_2 = 0;
    uint32_t r30_psq_tmp_3 = 0;
    uint32_t r30_psq_tmp_4 = 0;
    uint32_t r30_psq_tmp_5 = 0;
    uint32_t r30_psq_tmp_6 = 0;
    uint32_t r30_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_10 = 0;
    uint32_t r4_psq_tmp_11 = 0;
    uint32_t r4_psq_tmp_12 = 0;
    uint32_t r4_psq_tmp_13 = 0;
    uint32_t r4_psq_tmp_14 = 0;
    uint32_t r4_psq_tmp_15 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_7 = 0;
    uint32_t r4_psq_tmp_8 = 0;
    uint32_t r4_psq_tmp_9 = 0;
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
    uint32_t r7_psq_tmp_0 = 0;
    uint32_t r7_psq_tmp_1 = 0;
    uint32_t r7_psq_tmp_10 = 0;
    uint32_t r7_psq_tmp_11 = 0;
    uint32_t r7_psq_tmp_12 = 0;
    uint32_t r7_psq_tmp_13 = 0;
    uint32_t r7_psq_tmp_14 = 0;
    uint32_t r7_psq_tmp_15 = 0;
    uint32_t r7_psq_tmp_2 = 0;
    uint32_t r7_psq_tmp_3 = 0;
    uint32_t r7_psq_tmp_4 = 0;
    uint32_t r7_psq_tmp_5 = 0;
    uint32_t r7_psq_tmp_6 = 0;
    uint32_t r7_psq_tmp_7 = 0;
    uint32_t r7_psq_tmp_8 = 0;
    uint32_t r7_psq_tmp_9 = 0;
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
    uint32_t r11 = ctx->gpr[11];
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

    goto loc_807C0F00;

loc_807C0F00:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 160), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 144), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    r11 = (r1 + 96);
    // inline leaf 0x8002158C (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002158C
    r0 = MemoryInline::FlatRead32((r3 + 104));
    r5 = (r3 + 140);
    r6 = MemoryInline::FlatRead32((r3 + 652));
    r24 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807C0F50:
{
    f28.d = MemoryInline::FlatReadFloat32((r3 + 96));
    r4 = (r5 - r6);
    r0 = (r6 - r5);
    r0 = (r4 | r0);
    r25 = MemoryInline::FlatRead32((r3 + 4));
    r26_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r26 = (r26_rot_0 & 1);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C0F74;
    }
}

loc_807C0F6C:
{
    r3 = 0;
    goto loc_807C14D4;
}

loc_807C0F74:
{
    r4 = 0x808A0000u;
    r3 = 0x808A0000u;
    f30.d = MemoryInline::FlatReadFloat32((r4 + 26328));
    r27 = (r1 + 8);
    f31.d = MemoryInline::FlatReadFloat32((r3 + 26340));
    r28 = (r1 + 20);
    r29 = (r1 + 32);
    r30 = (r1 + 44);
    r22 = 0x808B0000u;
    r23 = 0x808B0000u;
    r31 = 1;
    goto loc_807C14B0;
}

loc_807C0FA4:
{
}

loc_807C0FA8:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_807C0FE4;
    }
}

loc_807C0FAC:
{
    r5 = MemoryInline::FlatRead32((r24 + 652));
    r0 = (r24 + 140);
    goto loc_807C0FCC;
}

loc_807C0FB8:
{
    r4 = MemoryInline::FlatRead32((r24 + 104));
    r3 = MemoryInline::FlatRead16(r5);
    r4 = MemoryInline::FlatRead16(r4);
}

loc_807C0FC8:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r3))) {
        goto loc_807C0FD8;
    }
}

loc_807C0FCC:
{
    r5 = (r5 + -2);
}

loc_807C0FD4:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_807C0FB8;
    }
}

loc_807C0FD8:
{
    r0 = (r24 + 140);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_807C0FE0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807C14B0;
    }
}

loc_807C0FE4:
{
    r3 = MemoryInline::FlatRead32((r24 + 104));
    r5 = MemoryInline::FlatRead32((r24 + 8));
    r0 = MemoryInline::FlatRead16(r3);
    r4 = MemoryInline::FlatRead32(r24);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r24_psq_tmp_2 = (r24 + 60);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r24_psq_tmp_2));
    r5 = (r5 + r0);
    r3 = MemoryInline::FlatRead16((r5 + 4));
    r0 = MemoryInline::FlatRead16((r5 + 8));
    r3 = (r3 * 12);
    r3 = (r4 + r3);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    r0 = (r0 * 12);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r24_psq_tmp_3 = (r24 + 68);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r24_psq_tmp_3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    r4 = (r25 + r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r30, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f1.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_2 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_2));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_2 = (r30 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r30_psq_tmp_2, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r30));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r30_psq_tmp_3 = (r30 + 4);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r30_psq_tmp_3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f2.d, f1.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f3.d, f0.d, f2.d));
    PpcSetPairedFprInline(f0, PPC_PsSum0Inline(f1.d, f2.d, f2.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f0.d), f28.d);
}

loc_807C1054:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C14B0;
    }
}

loc_807C105C:
{
    r0 = MemoryInline::FlatRead16((r5 + 10));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r30_psq_tmp_4 = (r30 + 4);
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<0u, 0u>(ctx, r30_psq_tmp_4));
    r0 = (r0 * 12);
    r6 = (r25 + r0);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r6_psq_tmp_2 = (r6 + 4);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f4.d, f2.d));
    PpcSetPairedFprInline(f2, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f2.d, f4.d, f4.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f28.d);
}

loc_807C1084:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C14B0;
    }
}

loc_807C108C:
{
    r0 = MemoryInline::FlatRead16((r5 + 12));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r30_psq_tmp_5 = (r30 + 4);
    PpcSetPairedFprInline(f6, PPC_PsqLStackInline<0u, 0u>(ctx, r30_psq_tmp_5));
    r0 = (r0 * 12);
    f2.d = MemoryInline::FlatReadFloat32(r5);
    r7 = (r25 + r0);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r7_psq_tmp_2 = (r7 + 4);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r7_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r7));
    PpcSetPairedFprInline(f6, PPC_PsMulInline(f6.d, f5.d));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f4.d, f6.d));
    PpcSetPairedFprInline(f4, PPC_PsSum0Inline(f5.d, f6.d, f6.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(PPC_PsToScalarInline(f4.d) - f2.d));
    SetCRFloatResident(cr, 0, f2.d, f28.d);
}

loc_807C10BC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C14B0;
    }
}

loc_807C10C4:
{
    r0 = MemoryInline::FlatRead16((r5 + 6));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r30_psq_tmp_6 = (r30 + 4);
    PpcSetPairedFprInline(f6, PPC_PsqLStackInline<0u, 0u>(ctx, r30_psq_tmp_6));
    r0 = (r0 * 12);
    r3 = (r25 + r0);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 4);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f6, PPC_PsMulInline(f6.d, f5.d));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f4.d, f6.d));
    PpcSetPairedFprInline(f29, PPC_PsSum0Inline(f5.d, f6.d, f6.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f28.d - PPC_PsToScalarInline(f29.d)));
    SetCRFloatResident(cr, 0, f4.d, f30.d);
}

loc_807C10F0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C14B0;
    }
}

loc_807C10F8:
{
    f3.d = MemoryInline::FlatReadFloat32((r24 + 16));
    SetCRFloatResident(cr, 0, f3.d, f4.d);
}

loc_807C1100:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C1118;
    }
}

loc_807C1108:
{
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f28.d));
    SetCRFloatResident(cr, 0, f3.d, f4.d);
}

loc_807C1110:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C14B0;
    }
}

loc_807C1118:
{
    r3 = MemoryInline::FlatRead16((r5 + 14));
    r0 = MemoryInline::FlatRead32((r24 + 100));
    r3 = (r3 & 31);
    r3 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r3));
    r0 = (r3 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C14B0;
    }
}

loc_807C1130:
{
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f0.d), PPC_PsToScalarInline(f1.d));
}

loc_807C1134:
{
    f3.d = PpcFmulsInline(f28.d, f28.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C1148;
    }
}

loc_807C113C:
{
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f0.d), f2.d);
}

loc_807C1140:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C122C;
    }
}

loc_807C1144:
{
    goto loc_807C1154;
}

loc_807C1148:
{
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f2.d);
}

loc_807C114C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C122C;
    }
}

loc_807C1150:
{
    goto loc_807C11C0;
}

loc_807C1154:
{
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f0.d), f30.d);
}

loc_807C1158:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C14A8;
    }
}

loc_807C1160:
{
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f2.d);
}

loc_807C1164:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C1194;
    }
}

loc_807C1168:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_3 = (r4 + 4);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r6_psq_tmp_3 = (r6 + 4);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f5.d, f4.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6));
    PpcSetPairedFprInline(f4, PPC_PsMaddInline(f2.d, f4.d, f5.d));
    PpcSetPairedFprInline(f10, PPC_PsSum0Inline(f4.d, f5.d, f5.d));
    f2.d = PpcFmulsInline(PPC_PsToScalarInline(f10.d), PPC_PsToScalarInline(f0.d));
    SetCRFloatResident(cr, 0, f2.d, PPC_PsToScalarInline(f1.d));
}

loc_807C118C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C12BC;
    }
}

loc_807C1190:
{
    f1.d = PPC_PsToScalarInline(f1.d);
    f10.d = PPC_PsToScalarInline(f10.d);
    goto loc_807C1298;
}

loc_807C1194:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_4 = (r4 + 4);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r7_psq_tmp_3 = (r7 + 4);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r7_psq_tmp_3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f5.d, f4.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r7));
    PpcSetPairedFprInline(f4, PPC_PsMaddInline(f1.d, f4.d, f5.d));
    PpcSetPairedFprInline(f11, PPC_PsSum0Inline(f4.d, f5.d, f5.d));
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f11.d), PPC_PsToScalarInline(f0.d));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_807C11B8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C13AC;
    }
}

loc_807C11BC:
{
    f11.d = PPC_PsToScalarInline(f11.d);
    goto loc_807C1298;
}

loc_807C11C0:
{
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f30.d);
}

loc_807C11C4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C14A8;
    }
}

loc_807C11CC:
{
    SetCRFloatResident(cr, 0, f2.d, PPC_PsToScalarInline(f0.d));
}

loc_807C11D0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C1200;
    }
}

loc_807C11D4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r6_psq_tmp_5 = (r6 + 4);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_5));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r7_psq_tmp_5 = (r7 + 4);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r7_psq_tmp_5));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f5.d, f4.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r7));
    PpcSetPairedFprInline(f4, PPC_PsMaddInline(f0.d, f4.d, f5.d));
    PpcSetPairedFprInline(f11, PPC_PsSum0Inline(f4.d, f5.d, f5.d));
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f11.d), PPC_PsToScalarInline(f1.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_807C11F8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C1334;
    }
}

loc_807C11FC:
{
    f11.d = PPC_PsToScalarInline(f11.d);
    goto loc_807C12A4;
}

loc_807C1200:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r6_psq_tmp_6 = (r6 + 4);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_6));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_6 = (r4 + 4);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_6));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f5.d, f4.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f4, PPC_PsMaddInline(f2.d, f4.d, f5.d));
    PpcSetPairedFprInline(f10, PPC_PsSum0Inline(f4.d, f5.d, f5.d));
    f2.d = PpcFmulsInline(PPC_PsToScalarInline(f10.d), PPC_PsToScalarInline(f1.d));
    SetCRFloatResident(cr, 0, f2.d, PPC_PsToScalarInline(f0.d));
}

loc_807C1224:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C12BC;
    }
}

loc_807C1228:
{
    f10.d = PPC_PsToScalarInline(f10.d);
    goto loc_807C12A4;
}

loc_807C122C:
{
    SetCRFloatResident(cr, 0, f2.d, f30.d);
}

loc_807C1230:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C14A8;
    }
}

loc_807C1238:
{
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f0.d), PPC_PsToScalarInline(f1.d));
}

loc_807C123C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C126C;
    }
}

loc_807C1240:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r7_psq_tmp_7 = (r7 + 4);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r7_psq_tmp_7));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_8 = (r4 + 4);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_8));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r7));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f5.d, f4.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f4, PPC_PsMaddInline(f1.d, f4.d, f5.d));
    PpcSetPairedFprInline(f11, PPC_PsSum0Inline(f4.d, f5.d, f5.d));
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f11.d), f2.d);
    SetCRFloatResident(cr, 0, f1.d, PPC_PsToScalarInline(f0.d));
}

loc_807C1264:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C13AC;
    }
}

loc_807C1268:
{
    goto loc_807C12B0;
}

loc_807C126C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r7_psq_tmp_8 = (r7 + 4);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r7_psq_tmp_8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r6_psq_tmp_8 = (r6 + 4);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_8));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r7));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f5.d, f4.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6));
    PpcSetPairedFprInline(f4, PPC_PsMaddInline(f0.d, f4.d, f5.d));
    PpcSetPairedFprInline(f11, PPC_PsSum0Inline(f4.d, f5.d, f5.d));
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f11.d), f2.d);
    SetCRFloatResident(cr, 0, f0.d, PPC_PsToScalarInline(f1.d));
}

loc_807C1290:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C1334;
    }
}

loc_807C1294:
{
    f1.d = PPC_PsToScalarInline(f1.d);
    goto loc_807C12B0;
}

loc_807C1298:
{
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f0.d), PPC_PsToScalarInline(f0.d));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
    f6.d = PPC_PsToScalarInline(f6.d);
    goto loc_807C1430;
}

loc_807C12A4:
{
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f1.d), PPC_PsToScalarInline(f1.d));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f1.d = PPC_PsToScalarInline(f1.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
    f6.d = PPC_PsToScalarInline(f6.d);
    goto loc_807C1430;
}

loc_807C12B0:
{
    f0.d = PpcFmulsInline(f2.d, f2.d);
    f27.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
    f6.d = PPC_PsToScalarInline(f6.d);
    f11.d = PPC_PsToScalarInline(f11.d);
    goto loc_807C1430;
}

loc_807C12BC:
{
    f7.d = PpcFmulsInline(PPC_PsToScalarInline(f10.d), PPC_PsToScalarInline(f1.d));
    f5.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f6.d = PpcFmulsInline(PPC_PsToScalarInline(f10.d), PPC_PsToScalarInline(f10.d));
    f4.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f7.d - PPC_PsToScalarInline(f0.d)));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f31.d));
    f0.d = MemoryInline::FlatReadFloat32(r6);
    f7.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = MemoryInline::FlatReadFloat32((r6 + 8));
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
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r29));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f1.d);
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    f10.d = PPC_PsToScalarInline(f10.d);
    goto loc_807C1420;
}

loc_807C1334:
{
    f7.d = PpcFmulsInline(PPC_PsToScalarInline(f11.d), f2.d);
    f4.d = MemoryInline::FlatReadFloat32(r6);
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f11.d), PPC_PsToScalarInline(f11.d));
    f6.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f5.d = MemoryInline::FlatReadFloat32((r7 + 4));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f7.d - PPC_PsToScalarInline(f1.d)));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f0.d = MemoryInline::FlatReadFloat32(r7);
    f8.d = MemoryInline::FlatReadFloat32((r6 + 8));
    f7.d = MemoryInline::FlatReadFloat32((r7 + 8));
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
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r28));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    f11.d = PPC_PsToScalarInline(f11.d);
    goto loc_807C1420;
}

loc_807C13AC:
{
    f7.d = PpcFmulsInline(PPC_PsToScalarInline(f11.d), PPC_PsToScalarInline(f0.d));
    f6.d = MemoryInline::FlatReadFloat32((r7 + 4));
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f11.d), PPC_PsToScalarInline(f11.d));
    f5.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = MemoryInline::FlatReadFloat32(r7);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f31.d));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f8.d = MemoryInline::FlatReadFloat32((r7 + 8));
    f7.d = MemoryInline::FlatReadFloat32((r4 + 8));
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
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r27));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    f11.d = PPC_PsToScalarInline(f11.d);
}

loc_807C1420:
{
    f27.d = static_cast<double>(PpcForceSingleValueInline(f3.d - PPC_PsToScalarInline(f1.d)));
    SetCRFloatResident(cr, 0, f27.d, f30.d);
}

loc_807C1428:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C14B0;
    } else {
        f1.d = PPC_PsToScalarInline(f1.d);
    }
}

loc_807C1430:
{
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f29.d), PPC_PsToScalarInline(f29.d));
    SetCRFloatResident(cr, 0, f27.d, f0.d);
}

loc_807C1438:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807C14B0;
    }
}

loc_807C143C:
{
    SetCRFloatResident(cr, 0, f27.d, f30.d);
}

loc_807C1440:
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

loc_807C1454:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C14B0;
    }
}

loc_807C1458:
{
    SetCRFloatResident(cr, 0, f27.d, f30.d);
}

loc_807C145C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C1478;
    }
}

loc_807C1464:
{
    r3 = (r22 + 22260);
    r5 = (r23 + 22224);
    r4 = 627;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807C1478u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
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

loc_807C1478:
{
    SetCRFloatResident(cr, 0, f27.d, f30.d);
}

loc_807C147C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C148C;
    }
}

loc_807C1484:
{
    f0.d = f30.d;
    goto loc_807C1498;
}

loc_807C148C:
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

loc_807C1498:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - PPC_PsToScalarInline(f29.d)));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_807C14A0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C14B0;
    }
}

loc_807C14A8:
{
    r3 = 1;
    goto loc_807C14D4;
}

loc_807C14B0:
{
    r3 = MemoryInline::FlatRead32((r24 + 104));
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r24 + 104), r3);
    r0 = MemoryInline::FlatRead16(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807C14C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C0FA4;
    }
}

loc_807C14C8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r24 + 104), r0);
    r3 = 0;
}

loc_807C14D4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::FlatReadFloat64((r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 96);
    f27.d = MemoryInline::FlatReadFloat64((r1 + 96));
    // inline leaf 0x800215D8 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D8
    r0 = MemoryInline::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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
// RECOMP_REGISTRATION base 0x807C0F00 func_807C0F00 preserves=false fpr_mask=0xF8000000
