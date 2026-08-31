#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80030890(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f27_entry = 0.0;
    double leaf_stack_saved_f28_entry = 0.0;
    double leaf_stack_saved_f29_entry = 0.0;
    double leaf_stack_saved_f30_entry = 0.0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint32_t r25_psq_tmp_0 = 0;
    uint32_t r25_psq_tmp_1 = 0;
    uint32_t r25_psq_tmp_10 = 0;
    uint32_t r25_psq_tmp_11 = 0;
    uint32_t r25_psq_tmp_2 = 0;
    uint32_t r25_psq_tmp_3 = 0;
    uint32_t r25_psq_tmp_4 = 0;
    uint32_t r25_psq_tmp_5 = 0;
    uint32_t r25_psq_tmp_6 = 0;
    uint32_t r25_psq_tmp_7 = 0;
    uint32_t r25_psq_tmp_8 = 0;
    uint32_t r25_psq_tmp_9 = 0;
    uint32_t r26_psq_tmp_0 = 0;
    uint32_t r26_psq_tmp_1 = 0;
    uint32_t r26_psq_tmp_10 = 0;
    uint32_t r26_psq_tmp_11 = 0;
    uint32_t r26_psq_tmp_2 = 0;
    uint32_t r26_psq_tmp_3 = 0;
    uint32_t r26_psq_tmp_4 = 0;
    uint32_t r26_psq_tmp_5 = 0;
    uint32_t r26_psq_tmp_6 = 0;
    uint32_t r26_psq_tmp_7 = 0;
    uint32_t r26_psq_tmp_8 = 0;
    uint32_t r26_psq_tmp_9 = 0;
    uint32_t r28_psq_tmp_0 = 0;
    uint32_t r28_psq_tmp_1 = 0;
    uint32_t r28_psq_tmp_2 = 0;
    uint32_t r28_psq_tmp_3 = 0;
    uint32_t r28_psq_tmp_4 = 0;
    uint32_t r28_psq_tmp_5 = 0;
    uint32_t r28_psq_tmp_6 = 0;
    uint32_t r29_psq_tmp_0 = 0;
    uint32_t r29_psq_tmp_1 = 0;
    uint32_t r29_psq_tmp_2 = 0;
    uint32_t r29_psq_tmp_3 = 0;
    uint32_t r29_psq_tmp_4 = 0;
    uint32_t r29_psq_tmp_5 = 0;
    uint32_t r29_psq_tmp_6 = 0;
    uint32_t r30_psq_tmp_0 = 0;
    uint32_t r30_psq_tmp_1 = 0;
    uint32_t r30_psq_tmp_2 = 0;
    uint32_t r30_psq_tmp_3 = 0;
    uint32_t r30_psq_tmp_4 = 0;
    uint32_t r30_psq_tmp_5 = 0;
    uint32_t r30_psq_tmp_6 = 0;
    uint32_t r30_psq_tmp_7 = 0;
    uint32_t r30_psq_tmp_8 = 0;
    uint32_t r30_psq_tmp_9 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_10 = 0;
    uint32_t r3_psq_tmp_11 = 0;
    uint32_t r3_psq_tmp_12 = 0;
    uint32_t r3_psq_tmp_13 = 0;
    uint32_t r3_psq_tmp_14 = 0;
    uint32_t r3_psq_tmp_15 = 0;
    uint32_t r3_psq_tmp_16 = 0;
    uint32_t r3_psq_tmp_17 = 0;
    uint32_t r3_psq_tmp_18 = 0;
    uint32_t r3_psq_tmp_19 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_20 = 0;
    uint32_t r3_psq_tmp_21 = 0;
    uint32_t r3_psq_tmp_22 = 0;
    uint32_t r3_psq_tmp_23 = 0;
    uint32_t r3_psq_tmp_24 = 0;
    uint32_t r3_psq_tmp_25 = 0;
    uint32_t r3_psq_tmp_26 = 0;
    uint32_t r3_psq_tmp_27 = 0;
    uint32_t r3_psq_tmp_28 = 0;
    uint32_t r3_psq_tmp_29 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_30 = 0;
    uint32_t r3_psq_tmp_31 = 0;
    uint32_t r3_psq_tmp_32 = 0;
    uint32_t r3_psq_tmp_33 = 0;
    uint32_t r3_psq_tmp_34 = 0;
    uint32_t r3_psq_tmp_35 = 0;
    uint32_t r3_psq_tmp_36 = 0;
    uint32_t r3_psq_tmp_37 = 0;
    uint32_t r3_psq_tmp_38 = 0;
    uint32_t r3_psq_tmp_39 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_40 = 0;
    uint32_t r3_psq_tmp_41 = 0;
    uint32_t r3_psq_tmp_42 = 0;
    uint32_t r3_psq_tmp_43 = 0;
    uint32_t r3_psq_tmp_44 = 0;
    uint32_t r3_psq_tmp_45 = 0;
    uint32_t r3_psq_tmp_46 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint32_t r3_psq_tmp_9 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_10 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_7 = 0;
    uint32_t r4_psq_tmp_8 = 0;
    uint32_t r4_psq_tmp_9 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_10 = 0;
    uint32_t r5_psq_tmp_11 = 0;
    uint32_t r5_psq_tmp_12 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_4 = 0;
    uint32_t r5_psq_tmp_5 = 0;
    uint32_t r5_psq_tmp_6 = 0;
    uint32_t r5_psq_tmp_7 = 0;
    uint32_t r5_psq_tmp_8 = 0;
    uint32_t r5_psq_tmp_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80030890;

loc_80030890:
{
    leaf_stack_saved_f27_entry = f27.d;
    leaf_stack_saved_f28_entry = f28.d;
    leaf_stack_saved_f29_entry = f29.d;
    leaf_stack_saved_f30_entry = f30.d;
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 196), r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r11 = (r1 + 112);
    // inline leaf 0x80021594 (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021594
    f3.d = MemoryInline::FlatReadFloat32(r6);
    r27 = r3;
    f0.d = MemoryInline::FlatReadFloat32(r8);
    r24 = r4;
    f7.d = MemoryInline::FlatReadFloat32((r6 + 8));
    f8.d = PpcFmulsInline(f3.d, f3.d);
    f1.d = MemoryInline::FlatReadFloat32((r8 + 8));
    f6.d = PpcFmulsInline(f0.d, f0.d);
    f5.d = PpcFmulsInline(f7.d, f7.d);
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -31032), 0, 2068u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r2 + -31004));
    f4.d = PpcFmulsInline(f1.d, f1.d);
    f3.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -31028));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f5.d));
    f1.d = PpcFmulsInline(f7.d, f1.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -31024));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f0.d));
    r31 = MemoryInline::FlatRead32((r1 + 200));
    f28.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f1.d = PpcFmulsInline(f2.d, f31.d);
    f30.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31020));
    r25 = r5;
    f2.d = PpcFmulsInline(f2.d, f28.d);
    r26 = r6;
    f0.d = PpcFmulsInline(f1.d, f0.d);
    r28 = r8;
    r29 = r9;
    f1.d = PpcFmulsInline(f2.d, f28.d);
    r30 = r10;
    f27.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f27.d, f5.d);
}

loc_8003094C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80030958;
    }
}

loc_80030950:
{
    f1.d = f30.d;
    goto loc_80031038;
}

loc_80030958:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80030964;
    }
}

loc_80030960:
{
    goto loc_80030970;
}

loc_80030964:
{
    f1.d = f27.d;
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(f1.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 2060u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 2060u, (r2 + -28972));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 2064u, (r2 + -28968));
        }
    }
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, f1.d, f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f5.d = PpcFmulsInline(f27.d, f1.d);
}

loc_80030970:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r2 + -31000));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31020));
    f4.d = PpcFmulsInline(f0.d, f28.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -31024));
    f2.d = PpcFmulsInline(f1.d, f31.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f5.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f2.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_80030998:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800309E4;
    }
}

loc_8003099C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -31012));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_800309A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800309E4;
    }
}

loc_800309A8:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r26));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r25));
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f2.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r25_psq_tmp_1 = (r25 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r25_psq_tmp_1));
    PpcSetPairedFprInline(f1, PPC_PsMadds0Inline(f1.d, PPC_PsFromScalarInline(f4.d), f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_1 = (r26 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f2.d, f3.d));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 4));
    PpcSetPairedFprInline(f1, PPC_PsMadds0Inline(f1.d, PPC_PsFromScalarInline(f4.d), f3.d));
    f2.d = std::fabs(f2.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_1 = (r30 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_1, f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_800309DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800309E4;
    }
}

loc_800309E0:
{
    f30.d = f4.d;
}

loc_800309E4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -31024));
    SetCRFloatResident(cr, 0, f5.d, f0.d);
}

loc_800309EC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80030A5C;
    }
}

loc_800309F0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -31012));
    SetCRFloatResident(cr, 0, f5.d, f0.d);
}

loc_800309F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80030A5C;
    }
}

loc_800309FC:
{
    SetCRFloatResident(cr, 0, f5.d, f30.d);
}

loc_80030A00:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80030A5C;
    }
}

loc_80030A04:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r26));
    r3 = (r1 + 68);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r25));
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f2.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r25_psq_tmp_3 = (r25 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r25_psq_tmp_3));
    PpcSetPairedFprInline(f1, PPC_PsMadds0Inline(f1.d, PPC_PsFromScalarInline(f5.d), f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_3 = (r26 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f2.d, f3.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 72));
    PpcSetPairedFprInline(f1, PPC_PsMadds0Inline(f1.d, PPC_PsFromScalarInline(f5.d), f3.d));
    f2.d = std::fabs(f2.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_1, f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80030A3C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80030A5C;
    }
}

loc_80030A40:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f30.d = f5.d;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    MemoryInline::FlatWriteFloat32(r30, f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
}

loc_80030A5C:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -31028));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31016));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = std::fabs(f0.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80030A74:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80030A8C;
    }
}

loc_80030A78:
{
    f0.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = std::fabs(f0.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80030A88:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80030C54;
    }
}

loc_80030A8C:
{
    f2.d = MemoryInline::FlatReadFloat32((r26 + 4));
    SetCRFloatResident(cr, 0, f2.d, f4.d);
}

loc_80030A94:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80030B70;
    }
}

loc_80030A98:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31016));
    f1.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80030AA8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80030B70;
    }
}

loc_80030AAC:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r26));
    r3 = (r1 + 56);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r25));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f4.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r25_psq_tmp_5 = (r25 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r25_psq_tmp_5));
    SetCRFloatResident(cr, 0, f31.d, f30.d);
}

loc_80030AD0:
{
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f31.d), f4.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_5 = (r26 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_5));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f4.d));
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f31.d), f4.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_3, f0.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80030C54;
    }
}

loc_80030AEC:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -31008));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80030B08:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80030C54;
    }
}

loc_80030B0C:
{
    r0 = MemoryInline::FlatRead16((r24 + 44));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 60));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80030B1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    MemoryInline::FlatWriteFloat32(r30, f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80030B58;
    }
}

loc_80030B30:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -31032));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    MemoryInline::FlatWriteFloat32((r30 + 4), f0.d);
}

loc_80030B58:
{
    r3 = r27;
    r4 = r30;
    r5 = r31;
    // inline leaf 0x8019A91C (21 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_5 = (r3 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_6 = (r3 + 24);
    PpcSetPairedFprInline(f9, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_6));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f8.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5, f6.d);
    PpcSetPairedFprInline(f11, PPC_PsMaddInline(f9.d, f1.d, f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_7 = (r3 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_7));
    PpcSetPairedFprInline(f12, PPC_PsSum0Inline(f11.d, f11.d, PPC_PsFromScalarInline(f12.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_8 = (r3 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_8));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_1 = (r5 + 4);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_1, f12.d);
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_2 = (r5 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_2, f6.d);
    // end of inlined leaf 0x8019A91C
    f1.d = f31.d;
    goto loc_80031038;
}

loc_80030B70:
{
    f2.d = MemoryInline::FlatReadFloat32((r26 + 4));
    SetCRFloatResident(cr, 0, f2.d, f4.d);
}

loc_80030B78:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80030C54;
    }
}

loc_80030B7C:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31016));
    f1.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80030B8C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80030C54;
    }
}

loc_80030B90:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r26));
    r3 = (r1 + 44);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r25));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f4.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r25_psq_tmp_6 = (r25 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r25_psq_tmp_6));
    SetCRFloatResident(cr, 0, f31.d, f30.d);
}

loc_80030BB4:
{
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f31.d), f4.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_6 = (r26 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_6));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f4.d));
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f31.d), f4.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_9 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_9, f0.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80030C54;
    }
}

loc_80030BD0:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -31008));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80030BEC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80030C54;
    }
}

loc_80030BF0:
{
    r0 = MemoryInline::FlatRead16((r24 + 44));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80030C00:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::FlatWriteFloat32(r30, f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80030C3C;
    }
}

loc_80030C14:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -31032));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    MemoryInline::FlatWriteFloat32((r30 + 4), f0.d);
}

loc_80030C3C:
{
    r3 = r27;
    r4 = r30;
    r5 = r31;
    // inline leaf 0x8019A91C (21 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_2 = (r4 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_2));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_10 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_10));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_11 = (r3 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_11));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_12 = (r3 + 24);
    PpcSetPairedFprInline(f9, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_12));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f8.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5, f6.d);
    PpcSetPairedFprInline(f11, PPC_PsMaddInline(f9.d, f1.d, f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_13 = (r3 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_13));
    PpcSetPairedFprInline(f12, PPC_PsSum0Inline(f11.d, f11.d, PPC_PsFromScalarInline(f12.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_14 = (r3 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_14));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_3 = (r5 + 4);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_3, f12.d);
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_4 = (r5 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_4, f6.d);
    // end of inlined leaf 0x8019A91C
    f1.d = f31.d;
    goto loc_80031038;
}

loc_80030C54:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -31032));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31016));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = std::fabs(f0.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80030C6C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80030C84;
    }
}

loc_80030C70:
{
    f0.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = std::fabs(f0.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80030C80:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80030E4C;
    }
}

loc_80030C84:
{
    f2.d = MemoryInline::FlatReadFloat32((r26 + 4));
    SetCRFloatResident(cr, 0, f2.d, f4.d);
}

loc_80030C8C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80030D68;
    }
}

loc_80030C90:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31016));
    f1.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80030CA0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80030D68;
    }
}

loc_80030CA4:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r26));
    r3 = (r1 + 32);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r25));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f4.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r25_psq_tmp_8 = (r25 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r25_psq_tmp_8));
    SetCRFloatResident(cr, 0, f31.d, f30.d);
}

loc_80030CC8:
{
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f31.d), f4.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_8 = (r26 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_8));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f4.d));
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f31.d), f4.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_16 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_16, f0.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80030E4C;
    }
}

loc_80030CE4:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -31008));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80030D00:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80030E4C;
    }
}

loc_80030D04:
{
    r0 = MemoryInline::FlatRead16((r24 + 44));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80030D14:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteFloat32(r30, f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80030D50;
    }
}

loc_80030D28:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -31032));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    MemoryInline::FlatWriteFloat32((r30 + 4), f0.d);
}

loc_80030D50:
{
    r3 = r27;
    r4 = r30;
    r5 = r31;
    // inline leaf 0x8019A91C (21 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_3 = (r4 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_3));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_17 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_17));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_18 = (r3 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_18));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_19 = (r3 + 24);
    PpcSetPairedFprInline(f9, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_19));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f8.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5, f6.d);
    PpcSetPairedFprInline(f11, PPC_PsMaddInline(f9.d, f1.d, f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_20 = (r3 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_20));
    PpcSetPairedFprInline(f12, PPC_PsSum0Inline(f11.d, f11.d, PPC_PsFromScalarInline(f12.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_21 = (r3 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_21));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_5 = (r5 + 4);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_5, f12.d);
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_6 = (r5 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_6, f6.d);
    // end of inlined leaf 0x8019A91C
    f1.d = f31.d;
    goto loc_80031038;
}

loc_80030D68:
{
    f2.d = MemoryInline::FlatReadFloat32((r26 + 4));
    SetCRFloatResident(cr, 0, f2.d, f4.d);
}

loc_80030D70:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80030E4C;
    }
}

loc_80030D74:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31016));
    f1.d = MemoryInline::FlatReadFloat32((r25 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80030D84:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80030E4C;
    }
}

loc_80030D88:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r26));
    r3 = (r1 + 20);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r25));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f4.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r25_psq_tmp_9 = (r25 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r25_psq_tmp_9));
    SetCRFloatResident(cr, 0, f31.d, f30.d);
}

loc_80030DAC:
{
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f31.d), f4.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_9 = (r26 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_9));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f4.d));
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f31.d), f4.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_22 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_22, f0.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80030E4C;
    }
}

loc_80030DC8:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -31008));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80030DE4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80030E4C;
    }
}

loc_80030DE8:
{
    r0 = MemoryInline::FlatRead16((r24 + 44));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80030DF8:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32(r30, f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80030E34;
    }
}

loc_80030E0C:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -31032));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    MemoryInline::FlatWriteFloat32((r30 + 4), f0.d);
}

loc_80030E34:
{
    r3 = r27;
    r4 = r30;
    r5 = r31;
    // inline leaf 0x8019A91C (21 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_4 = (r4 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_4));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_23 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_23));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_24 = (r3 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_24));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_25 = (r3 + 24);
    PpcSetPairedFprInline(f9, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_25));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f8.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5, f6.d);
    PpcSetPairedFprInline(f11, PPC_PsMaddInline(f9.d, f1.d, f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_26 = (r3 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_26));
    PpcSetPairedFprInline(f12, PPC_PsSum0Inline(f11.d, f11.d, PPC_PsFromScalarInline(f12.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_27 = (r3 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_27));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_7 = (r5 + 4);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_7, f12.d);
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_8 = (r5 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_8, f6.d);
    // end of inlined leaf 0x8019A91C
    f1.d = f31.d;
    goto loc_80031038;
}

loc_80030E4C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31020));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_80030E54:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80031034;
    }
}

loc_80030E58:
{
    r0 = MemoryInline::FlatRead16((r24 + 44));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80030E60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80031024;
    }
}

loc_80030E64:
{
    f0.d = MemoryInline::FlatReadFloat32(r28);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -31024));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80030E80:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80030E8C;
    }
}

loc_80030E88:
{
    goto loc_80030E90;
}

loc_80030E8C:
{
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(f1.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 2060u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 2060u, (r2 + -28972));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 2064u, (r2 + -28968));
        }
    }
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, f1.d, f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
}

loc_80030E90:
{
    f0.d = MemoryInline::FlatReadFloat32(r28);
    r3 = (r1 + 8);
    f4.d = MemoryInline::FlatReadFloat32(r30);
    r4 = r3;
    f1.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f3.d = PpcFmulsInline(f0.d, f4.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -31024));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f27.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f2.d);
    // inline leaf 0x8019AC24 (17 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_29 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_29));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f2.d, f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26360));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -26356));
    PpcSetPairedFprInline(f4, PPC_PsMaddInline(f3.d, f3.d, f5.d));
    PpcSetPairedFprInline(f4, PPC_PsSum0Inline(f4.d, f5.d, f3.d));
    f5.d = PPC_Frsqrte(PPC_PsToScalarInline(f4.d));
    f6.d = PpcFmulsInline(f5.d, f5.d);
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f6.d = PPC_Fnmsubs(f6.d, PPC_PsToScalarInline(f4.d), f1.d);
    f5.d = PpcFmulsInline(f6.d, f0.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f5.d)));
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f5.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f2.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_5 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_5, f3.d);
    // end of inlined leaf 0x8019AC24
    r3 = (r1 + 8);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -31024));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f27.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_30 = (r3 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_30));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f27.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_31 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_31, f1.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28));
    PpcSetPairedFprInline(f3, PPC_PsSubInline(f1.d, f2.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_1 = (r28 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r28, f3.d);
    PpcSetPairedFprInline(f4, f3.d);
    mkw_gqr0 = ctx->gqr[0];
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_32 = (r3 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_32));
    PpcSetPairedFprInline(f3, PPC_PsSubInline(f1.d, f2.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_2 = (r28 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_2, f3.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f4.d, f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r28, f1.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_33 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_33));
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f3.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_3 = (r28 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_3, f1.d);
    f2.d = MemoryInline::FlatReadFloat32(r29);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80030F3C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80030F48;
    }
}

loc_80030F44:
{
    goto loc_80030F4C;
}

loc_80030F48:
{
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
}

loc_80030F4C:
{
    f0.d = MemoryInline::FlatReadFloat32(r29);
    r3 = (r1 + 8);
    f4.d = MemoryInline::FlatReadFloat32(r30);
    r4 = r3;
    f1.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f3.d = PpcFmulsInline(f0.d, f4.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31024));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f2.d);
    // inline leaf 0x8019AC24 (17 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_34 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_34));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f2.d, f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26360));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -26356));
    PpcSetPairedFprInline(f4, PPC_PsMaddInline(f3.d, f3.d, f5.d));
    PpcSetPairedFprInline(f4, PPC_PsSum0Inline(f4.d, f5.d, f3.d));
    f5.d = PPC_Frsqrte(PPC_PsToScalarInline(f4.d));
    f6.d = PpcFmulsInline(f5.d, f5.d);
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f6.d = PPC_Fnmsubs(f6.d, PPC_PsToScalarInline(f4.d), f1.d);
    f5.d = PpcFmulsInline(f6.d, f0.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f5.d)));
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f5.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f2.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_6 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_6, f3.d);
    // end of inlined leaf 0x8019AC24
    r3 = (r1 + 8);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31028));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    SetCRFloatResident(cr, 0, f29.d, f0.d);
}

loc_80030F94:
{
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f31.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_35 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_35));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f31.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_36 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_36, f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_1 = (r29 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r29, f2.d);
    PpcSetPairedFprInline(f3, f2.d);
    mkw_gqr0 = ctx->gqr[0];
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_37 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_37));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f0.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r29_psq_tmp_2 = (r29 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_2, f2.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f3.d, f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r29, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_38 = (r3 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_38));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r29_psq_tmp_3 = (r29 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_3, f0.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80031008;
    }
}

loc_80030FE8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30992));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r30));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f0.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r30_psq_tmp_3 = (r30 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f0.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_4 = (r30 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_4, f1.d);
    goto loc_80031024;
}

loc_80031008:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30988));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r30));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f0.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r30_psq_tmp_5 = (r30 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_5));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r30, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f0.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_6 = (r30 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_6, f1.d);
}

loc_80031024:
{
    r3 = r27;
    r4 = r30;
    r5 = r31;
    // inline leaf 0x8019A91C (21 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_8 = (r4 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_8));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_40 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_40));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_41 = (r3 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_41));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_42 = (r3 + 24);
    PpcSetPairedFprInline(f9, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_42));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f8.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5, f6.d);
    PpcSetPairedFprInline(f11, PPC_PsMaddInline(f9.d, f1.d, f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_43 = (r3 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_43));
    PpcSetPairedFprInline(f12, PPC_PsSum0Inline(f11.d, f11.d, PPC_PsFromScalarInline(f12.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_44 = (r3 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_44));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_9 = (r5 + 4);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_9, f12.d);
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_10 = (r5 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_10, f6.d);
    // end of inlined leaf 0x8019A91C
}

loc_80031034:
{
    f1.d = f30.d;
}

loc_80031038:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = leaf_stack_saved_f31_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = leaf_stack_saved_f30_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = leaf_stack_saved_f29_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = leaf_stack_saved_f28_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 112);
    f27.d = leaf_stack_saved_f27_entry;
    // inline leaf 0x800215E0 (9 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E0
    r0 = MemoryInline::FlatRead32((r1 + 196));
    ctx->lr = r0;
    r1 = (r1 + 192);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
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
    ctx->fpr[12] = f12;
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
// RECOMP_REGISTRATION base 0x80030890 func_80030890 preserves=true fpr_mask=0x00000000
