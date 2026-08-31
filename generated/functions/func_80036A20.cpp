#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80036A20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint32_t r29_psq_tmp_0 = 0;
    uint32_t r29_psq_tmp_1 = 0;
    uint32_t r29_psq_tmp_2 = 0;
    uint32_t r29_psq_tmp_3 = 0;
    uint32_t r29_psq_tmp_4 = 0;
    uint32_t r29_psq_tmp_5 = 0;
    uint32_t r29_psq_tmp_6 = 0;
    uint32_t r29_psq_tmp_7 = 0;
    uint32_t r29_psq_tmp_8 = 0;
    uint32_t r30_psq_tmp_0 = 0;
    uint32_t r30_psq_tmp_1 = 0;
    uint32_t r30_psq_tmp_2 = 0;
    uint32_t r30_psq_tmp_3 = 0;
    uint32_t r30_psq_tmp_4 = 0;
    uint32_t r30_psq_tmp_5 = 0;
    uint32_t r30_psq_tmp_6 = 0;
    uint32_t r30_psq_tmp_7 = 0;
    uint32_t r31_psq_tmp_0 = 0;
    uint32_t r31_psq_tmp_1 = 0;
    uint32_t r31_psq_tmp_2 = 0;
    uint32_t r31_psq_tmp_3 = 0;
    uint32_t r31_psq_tmp_4 = 0;
    uint32_t r31_psq_tmp_5 = 0;
    uint32_t r31_psq_tmp_6 = 0;
    uint32_t r31_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_10 = 0;
    uint32_t r3_psq_tmp_11 = 0;
    uint32_t r3_psq_tmp_12 = 0;
    uint32_t r3_psq_tmp_13 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint32_t r3_psq_tmp_9 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    goto loc_80036A20;

loc_80036A20:
{
    leaf_stack_saved_f31_entry = f31.d;
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 116u, (r1 + 116), r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r11 = (r1 + 96);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_3, 76u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_3, 80u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_3, 84u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_3, 88u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_3, 92u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 44u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r3);
    r31 = (r1 + 44);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 16));
    r27 = r3;
    MemoryInline::WriteResolvedFloat32(guest_range_3, 44u, (r1 + 44), f0.d);
    r28 = r4;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r3 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 48u, (r1 + 48), f1.d);
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -30812), 0, 1848u, true, false);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -30796));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r31));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 52u, (r1 + 52), f0.d);
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f2.d, f2.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f0.d), PPC_PsFromScalarInline(f0.d), f2.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f2.d, f2.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f3.d);
}

loc_80036A78:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80036DC0;
    }
}

loc_80036A7C:
{
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 1840u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 1840u, (r2 + -28972));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 1844u, (r2 + -28968));
        }
    }
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, PPC_PsToScalarInline(f1.d), f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    PpcSetPairedFprInline(f6, PPC_Fres(PPC_PsFromScalarInline(f1.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f8, PPC_PsqLStackInline<0u, 0u>(ctx, r31));
    guest_range_2 = MemoryInline::ResolveRangeHost((r27 + 4), 0, 40u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r27 + 20));
    r30 = (r1 + 32);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r27 + 36));
    r29 = (r1 + 8);
    PpcSetPairedFprInline(f7, PPC_PsMuls0Inline(f8.d, PPC_PsFromScalarInline(f1.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_0 = (r31 + 8);
    PpcSetPairedFprInline(f8, PPC_PsqLStackInline<1u, 0u>(ctx, r31_psq_tmp_0));
    PpcSetPairedFprInline(f5, PPC_PsAddInline(f6.d, f6.d));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r27 + 4));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r31, f7.d);
    PpcSetPairedFprInline(f7, PPC_PsMuls0Inline(f8.d, PPC_PsFromScalarInline(f1.d)));
    PpcSetPairedFprInline(f3, PPC_PsMulInline(f6.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r31_psq_tmp_1 = (r31 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r31_psq_tmp_1, f7.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f8, PPC_PsqLStackInline<1u, 0u>(ctx, r31));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f9, PPC_PsqLStackInline<0u, 0u>(ctx, r31));
    PpcSetPairedFprInline(f6, PPC_PsNmsubInline(PPC_PsFromScalarInline(f1.d), f3.d, f5.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r31_psq_tmp_2 = (r31 + 4);
    PpcSetPairedFprInline(f5, PPC_PsqLStackInline<0u, 0u>(ctx, r31_psq_tmp_2));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -30796));
    MemoryInline::FlatWriteFloat32(r28, PPC_PsToScalarInline(f6.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f2.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r30));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r30));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r30_psq_tmp_0 = (r30 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r30_psq_tmp_0));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f5.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsMaddInline(f8.d, f1.d, f5.d));
    PpcSetPairedFprInline(f0, PPC_PsSum0Inline(f0.d, f5.d, f5.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 56), PPC_PsToScalarInline(f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(PPC_PsToScalarInline(f0.d)));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f9.d, PPC_PsFromScalarInline(f0.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r29, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f7.d, PPC_PsFromScalarInline(f0.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r29));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r29_psq_tmp_0 = (r29 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r29_psq_tmp_0, f1.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f0.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r30_psq_tmp_1 = (r30 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r30_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r30, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f1.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r30));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_2 = (r30 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r30_psq_tmp_2, f0.d);
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f2.d, f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f0.d), PPC_PsFromScalarInline(f0.d), f2.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f2.d, f2.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f3.d);
}

loc_80036B3C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80036D08;
    }
}

loc_80036B40:
{
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 1840u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 1840u, (r2 + -28972));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 1844u, (r2 + -28968));
        }
    }
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, PPC_PsToScalarInline(f1.d), f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    PpcSetPairedFprInline(f6, PPC_Fres(PPC_PsFromScalarInline(f1.d)));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r27 + 24));
    r3 = (r1 + 20);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 36u, (r27 + 40));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r27 + 8));
    PpcSetPairedFprInline(f7, PPC_PsAddInline(f6.d, f6.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r31_psq_tmp_3 = (r31 + 4);
    PpcSetPairedFprInline(f9, PPC_PsqLStackInline<0u, 0u>(ctx, r31_psq_tmp_3));
    PpcSetPairedFprInline(f6, PPC_PsMulInline(f6.d, f6.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f8, PPC_PsqLStackInline<1u, 0u>(ctx, r31));
    f5.d = PpcFmulsInline(f0.d, f1.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f10, PPC_PsqLStackInline<0u, 0u>(ctx, r31));
    PpcSetPairedFprInline(f6, PPC_PsNmsubInline(PPC_PsFromScalarInline(f1.d), f6.d, f7.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f5.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -30796));
    MemoryInline::FlatWriteFloat32((r28 + 4), PPC_PsToScalarInline(f6.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f5, PPC_PsqLStackInline<0u, 0u>(ctx, r30));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f3.d);
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f5.d, PPC_PsFromScalarInline(f1.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r30_psq_tmp_3 = (r30 + 8);
    PpcSetPairedFprInline(f5, PPC_PsqLStackInline<1u, 0u>(ctx, r30_psq_tmp_3));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r30, f3.d);
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f5.d, PPC_PsFromScalarInline(f1.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 4);
    PpcSetPairedFprInline(f5, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_0));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f4.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r30));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_4 = (r30 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r30_psq_tmp_4, f3.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r30_psq_tmp_5 = (r30 + 4);
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<0u, 0u>(ctx, r30_psq_tmp_5));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f6, PPC_PsqLStackInline<0u, 0u>(ctx, r30));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f4.d, f5.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f7, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f1.d, f2.d, f4.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f5.d, f4.d, f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), PPC_PsToScalarInline(f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(PPC_PsToScalarInline(f1.d)));
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f6.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r29, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f1.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r29));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r29_psq_tmp_1 = (r29 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r29_psq_tmp_1, f2.d);
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f7.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 8);
    PpcSetPairedFprInline(f7, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f7.d, f2.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_2, f1.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 4);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f9, PPC_PsMulInline(f9.d, f3.d));
    PpcSetPairedFprInline(f3, PPC_PsMaddInline(f8.d, f2.d, f9.d));
    PpcSetPairedFprInline(f2, PPC_PsSum0Inline(f3.d, f9.d, f9.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), PPC_PsToScalarInline(f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(PPC_PsToScalarInline(f2.d)));
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f10.d, PPC_PsFromScalarInline(f2.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_4 = (r31 + 8);
    PpcSetPairedFprInline(f10, PPC_PsqLStackInline<1u, 0u>(ctx, r31_psq_tmp_4));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r29, f3.d);
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f10.d, PPC_PsFromScalarInline(f2.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r29));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r29_psq_tmp_2 = (r29 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r29_psq_tmp_2, f3.d);
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f4.d, f2.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f1.d, f3.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_4, f2.d);
    PpcSetPairedFprInline(f3, PPC_PsMulInline(f3.d, f3.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    PpcSetPairedFprInline(f31, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f3.d));
    PpcSetPairedFprInline(f31, PPC_PsSum0Inline(f31.d, f3.d, f3.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f31.d), f0.d);
}

loc_80036C5C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80036CFC;
    }
}

loc_80036C60:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -30812));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f31.d), f0.d);
}

loc_80036C68:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80036C74;
    }
}

loc_80036C70:
{
    goto loc_80036C80;
}

loc_80036C74:
{
    f1.d = f31.d;
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 1840u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 1840u, (r2 + -28972));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 1844u, (r2 + -28968));
        }
    }
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, PPC_PsToScalarInline(f1.d), f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f0.d = PpcFmulsInline(PPC_PsToScalarInline(f31.d), f1.d);
}

loc_80036C80:
{
    MemoryInline::FlatWriteFloat32((r28 + 8), f0.d);
    r3 = (r1 + 32);
    r4 = (r1 + 20);
    r5 = (r1 + 8);
    // inline leaf 0x8019ACCC (15 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f6, PPC_PsMerge10Inline(f1.d, f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f1.d, PPC_PsFromScalarInline(f2.d)));
    PpcSetPairedFprInline(f7, PPC_PsMuls0Inline(f1.d, f0.d));
    PpcSetPairedFprInline(f5, PPC_PsMsubInline(f0.d, PPC_PsFromScalarInline(f3.d), f4.d));
    PpcSetPairedFprInline(f8, PPC_PsMsubInline(f0.d, f6.d, f7.d));
    PpcSetPairedFprInline(f9, PPC_PsMerge11Inline(f5.d, f5.d));
    PpcSetPairedFprInline(f10, PPC_PsMerge01Inline(f5.d, f8.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 0u>(ctx, r5, f9.d);
    PpcSetPairedFprInline(f10, PPC_PsNegInline(f10.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_0 = (r5 + 4);
    PPC_PsqStStackInline<0u, 0u>(ctx, r5_psq_tmp_0, f10.d);
    // end of inlined leaf 0x8019ACCC
    r3 = (r1 + 44);
    r4 = (r1 + 8);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_5 = (r3 + 4);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_5));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_0 = (r4 + 4);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r4_psq_tmp_0));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f3, PPC_PsMulInline(f3.d, f2.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -30812));
    PpcSetPairedFprInline(f2, PPC_PsMaddInline(f1.d, f2.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f2.d, f3.d, f3.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_80036CC0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80036ED4;
    }
}

loc_80036CC4:
{
    f2.d = MemoryInline::FlatReadFloat32(r28);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 28u, (r2 + -30784));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f2.d = (f2.d * f3.d);
    f1.d = (f1.d * f3.d);
    f0.d = (f0.d * f3.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    MemoryInline::FlatWriteFloat32(r28, f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 8), f0.d);
    goto loc_80036ED4;
}

loc_80036CFC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -30812));
    MemoryInline::FlatWriteFloat32((r28 + 8), f0.d);
    goto loc_80036ED4;
}

loc_80036D08:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -30812));
    r3 = (r1 + 20);
    MemoryInline::FlatWriteFloat32((r28 + 4), f2.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r27 + 24));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 36u, (r27 + 40));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r27 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r31_psq_tmp_5 = (r31 + 4);
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<0u, 0u>(ctx, r31_psq_tmp_5));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_6 = (r3 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_6));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f5, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f4.d, f1.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f8.d, f0.d, f4.d));
    PpcSetPairedFprInline(f0, PPC_PsSum0Inline(f1.d, f4.d, f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), PPC_PsToScalarInline(f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(PPC_PsToScalarInline(f0.d)));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f9.d, PPC_PsFromScalarInline(f0.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r29, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f7.d, PPC_PsFromScalarInline(f0.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r29));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r29_psq_tmp_3 = (r29 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r29_psq_tmp_3, f1.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f5.d, f0.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_7 = (r3 + 8);
    PpcSetPairedFprInline(f5, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_7));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f5.d, f1.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_8 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_8, f0.d);
    PpcSetPairedFprInline(f1, PPC_PsMulInline(f1.d, f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    PpcSetPairedFprInline(f31, PPC_PsMaddInline(PPC_PsFromScalarInline(f0.d), PPC_PsFromScalarInline(f0.d), f1.d));
    PpcSetPairedFprInline(f31, PPC_PsSum0Inline(f31.d, f1.d, f1.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f31.d), PPC_PsToScalarInline(f3.d));
}

loc_80036D90:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80036DB8;
    }
}

loc_80036D94:
{
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f31.d), PPC_PsToScalarInline(f2.d));
}

loc_80036D98:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80036DA4;
    }
}

loc_80036DA0:
{
    f2.d = PPC_PsToScalarInline(f2.d);
    goto loc_80036DB0;
}

loc_80036DA4:
{
    f1.d = f31.d;
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 1840u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 1840u, (r2 + -28972));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 1844u, (r2 + -28968));
        }
    }
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, PPC_PsToScalarInline(f1.d), f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f2.d = PpcFmulsInline(PPC_PsToScalarInline(f31.d), f1.d);
}

loc_80036DB0:
{
    MemoryInline::FlatWriteFloat32((r28 + 8), f2.d);
    goto loc_80036ED4;
}

loc_80036DB8:
{
    MemoryInline::FlatWriteFloat32((r28 + 8), PPC_PsToScalarInline(f2.d));
    goto loc_80036ED4;
}

loc_80036DC0:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -30812));
    r29 = (r1 + 32);
    MemoryInline::FlatWriteFloat32(r4, f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 4));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r3 + 20));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r3 + 36));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f1.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<0u, 0u>(ctx, r29));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f4.d, f4.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f0.d), PPC_PsFromScalarInline(f0.d), f4.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f4.d, f4.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f3.d);
}

loc_80036DF8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80036EAC;
    }
}

loc_80036DFC:
{
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 1840u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 1840u, (r2 + -28972));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 1844u, (r2 + -28968));
        }
    }
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, PPC_PsToScalarInline(f1.d), f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    PpcSetPairedFprInline(f4, PPC_Fres(PPC_PsFromScalarInline(f1.d)));
    f3.d = MemoryInline::FlatReadFloat32((r27 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r27 + 24));
    r3 = (r1 + 20);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 40));
    r4 = (r1 + 8);
    PpcSetPairedFprInline(f5, PPC_PsAddInline(f4.d, f4.d));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f4.d, f4.d));
    PpcSetPairedFprInline(f4, PPC_PsNmsubInline(PPC_PsFromScalarInline(f1.d), f4.d, f5.d));
    MemoryInline::FlatWriteFloat32((r28 + 4), PPC_PsToScalarInline(f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<0u, 0u>(ctx, r29));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f3.d);
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f4.d, PPC_PsFromScalarInline(f1.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_4 = (r29 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<1u, 0u>(ctx, r29_psq_tmp_4));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f2.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r29, f3.d);
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f4.d, PPC_PsFromScalarInline(f1.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f6, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r29_psq_tmp_5 = (r29 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r29_psq_tmp_5, f3.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r29));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_6 = (r29 + 4);
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<0u, 0u>(ctx, r29_psq_tmp_6));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_9 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_9));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f5, PPC_PsqLStackInline<0u, 0u>(ctx, r29));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f4.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsMaddInline(f1.d, f2.d, f4.d));
    PpcSetPairedFprInline(f0, PPC_PsSum0Inline(f0.d, f4.d, f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), PPC_PsToScalarInline(f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(PPC_PsToScalarInline(f0.d)));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f5.d, PPC_PsFromScalarInline(f0.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f0.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_2 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_2, f1.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f6.d, f0.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_10 = (r3 + 8);
    PpcSetPairedFprInline(f6, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_10));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f6.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_11 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_11, f0.d);
    // inline leaf 0x8019AC68 (17 guest instruction(s))
}

loc_inl7_0x8019AC68:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -26360));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f4.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f2.d);
}

loc_inl7_0x8019AC88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl7_return;
    }
}

loc_inl7_0x8019AC8C:
{
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -26356));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f4.d);
    f2.d = PPC_Fnmsubs(f2.d, PPC_PsToScalarInline(f1.d), f3.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f1.d), f0.d);
    goto loc_inl7_cont_8019AC68;
}

loc_inl7_return:
{
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_inl7_cont_8019AC68:
{
    // end of inlined leaf 0x8019AC68
    MemoryInline::FlatWriteFloat32((r28 + 8), f1.d);
    goto loc_80036ED4;
}

loc_80036EAC:
{
    MemoryInline::FlatWriteFloat32((r4 + 4), PPC_PsToScalarInline(f2.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r3 + 24));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r3 + 40));
    r3 = (r1 + 20);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    // inline leaf 0x8019AC68 (17 guest instruction(s))
}

loc_inl8_0x8019AC68:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -26360));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f4.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f2.d);
}

loc_inl8_0x8019AC88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl8_return;
    }
}

loc_inl8_0x8019AC8C:
{
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -26356));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f4.d);
    f2.d = PPC_Fnmsubs(f2.d, PPC_PsToScalarInline(f1.d), f3.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f1.d), f0.d);
    goto loc_inl8_cont_8019AC68;
}

loc_inl8_return:
{
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_inl8_cont_8019AC68:
{
    // end of inlined leaf 0x8019AC68
    MemoryInline::FlatWriteFloat32((r28 + 8), f1.d);
}

loc_80036ED4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 96);
    f31.d = leaf_stack_saved_f31_entry;
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800003E gpr_write=0xF800083B gpr_return=0x00000018 fpr_read=0x800007FF fpr_write=0x800007FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80036A20 func_80036A20 preserves=true fpr_mask=0x00000000
