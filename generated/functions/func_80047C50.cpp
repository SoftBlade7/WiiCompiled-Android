#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80047C50(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f27_entry = 0.0;
    double leaf_stack_saved_f28_entry = 0.0;
    double leaf_stack_saved_f29_entry = 0.0;
    double leaf_stack_saved_f30_entry = 0.0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint32_t r10_psq_tmp_0 = 0;
    uint32_t r10_psq_tmp_1 = 0;
    uint32_t r10_psq_tmp_2 = 0;
    uint32_t r10_psq_tmp_3 = 0;
    uint32_t r11_psq_tmp_0 = 0;
    uint32_t r11_psq_tmp_1 = 0;
    uint32_t r11_psq_tmp_2 = 0;
    uint32_t r11_psq_tmp_3 = 0;
    uint32_t r12_psq_tmp_0 = 0;
    uint32_t r12_psq_tmp_1 = 0;
    uint32_t r12_psq_tmp_2 = 0;
    uint32_t r12_psq_tmp_3 = 0;
    uint32_t r25_psq_tmp_0 = 0;
    uint32_t r25_psq_tmp_1 = 0;
    uint32_t r25_psq_tmp_2 = 0;
    uint32_t r25_psq_tmp_3 = 0;
    uint32_t r26_psq_tmp_0 = 0;
    uint32_t r26_psq_tmp_1 = 0;
    uint32_t r26_psq_tmp_2 = 0;
    uint32_t r26_psq_tmp_3 = 0;
    uint32_t r27_psq_tmp_0 = 0;
    uint32_t r27_psq_tmp_1 = 0;
    uint32_t r27_psq_tmp_2 = 0;
    uint32_t r27_psq_tmp_3 = 0;
    uint32_t r28_psq_tmp_0 = 0;
    uint32_t r28_psq_tmp_1 = 0;
    uint32_t r28_psq_tmp_2 = 0;
    uint32_t r28_psq_tmp_3 = 0;
    uint32_t r29_psq_tmp_0 = 0;
    uint32_t r29_psq_tmp_1 = 0;
    uint32_t r29_psq_tmp_2 = 0;
    uint32_t r29_psq_tmp_3 = 0;
    uint32_t r30_psq_tmp_0 = 0;
    uint32_t r30_psq_tmp_1 = 0;
    uint32_t r30_psq_tmp_2 = 0;
    uint32_t r30_psq_tmp_3 = 0;
    uint32_t r31_psq_tmp_0 = 0;
    uint32_t r31_psq_tmp_1 = 0;
    uint32_t r31_psq_tmp_2 = 0;
    uint32_t r31_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_4 = 0;
    uint32_t r5_psq_tmp_5 = 0;
    uint32_t r6_psq_tmp_0 = 0;
    uint32_t r6_psq_tmp_1 = 0;
    uint32_t r6_psq_tmp_2 = 0;
    uint32_t r6_psq_tmp_3 = 0;
    uint32_t r6_psq_tmp_4 = 0;
    uint32_t r6_psq_tmp_5 = 0;
    uint32_t r7_psq_tmp_0 = 0;
    uint32_t r7_psq_tmp_1 = 0;
    uint32_t r7_psq_tmp_2 = 0;
    uint32_t r7_psq_tmp_3 = 0;
    uint32_t r7_psq_tmp_4 = 0;
    uint32_t r7_psq_tmp_5 = 0;
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
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f13 = ctx->fpr[13];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80047C50;

loc_80047C50:
{
    leaf_stack_saved_f27_entry = f27.d;
    leaf_stack_saved_f28_entry = f28.d;
    leaf_stack_saved_f29_entry = f29.d;
    leaf_stack_saved_f30_entry = f30.d;
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -288), r1);
    r1 = (r1 + -288);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 292), r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r11 = (r1 + 208);
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
    r0 = (r4 ^ -2147483648);
    r9 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 172), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80047C9C:
{
    f10.d = MemoryInline::FlatReadFloat64((r2 + -29936));
    r24 = 0;
    MemoryInline::FlatWriteRam32((r1 + 168), r9);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 168));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f10.d));
    PpcSetPairedFprInline(f11, PPC_Fres(PPC_PsFromScalarInline(f0.d)));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f11.d, f11.d));
    PpcSetPairedFprInline(f1, PPC_PsMulInline(f11.d, f11.d));
    PpcSetPairedFprInline(f11, PPC_PsNmsubInline(PPC_PsFromScalarInline(f0.d), f1.d, f2.d));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80047EDC;
    }
}

loc_80047CC4:
{
    r25 = (r1 + 32);
    r26 = (r1 + 44);
    r27 = (r1 + 20);
    r28 = (r1 + 56);
    r29 = (r1 + 8);
    r30 = (r1 + 92);
    r31 = (r1 + 104);
    r12 = (r1 + 80);
    r11 = (r1 + 116);
    r10 = (r1 + 68);
    r8 = (r8 & 1);
    f9.d = MemoryInline::FlatReadFloat32((r2 + -29928));
    f7.d = MemoryInline::FlatReadFloat32((r2 + -29924));
    r3 = -872349696;
    ctr = r4;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80047EDC;
    }
}

loc_80047D04:
{
    r0 = (r24 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 172), r0);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    MemoryInline::FlatWriteRam32((r1 + 168), r9);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 168));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r6_psq_tmp_2 = (r6 + 12);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_2));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_2 = (r5 + 12);
    PpcSetPairedFprInline(f6, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_2));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r7_psq_tmp_2 = (r7 + 12);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r7_psq_tmp_2));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f13, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r7));
    f2.d = PpcFmulsInline(f0.d, PPC_PsToScalarInline(f11.d));
    f0.d = PpcFmulsInline(f2.d, f2.d);
    f8.d = PpcFmulsInline(f9.d, f0.d);
    f0.d = PpcFmulsInline(f7.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 136), f8.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    PpcSetPairedFprInline(f12, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f8.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r7_psq_tmp_3 = (r7 + 20);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r7_psq_tmp_3));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f1.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r11, f12.d);
    PpcSetPairedFprInline(f29, PPC_PsMuls0Inline(f13.d, PPC_PsFromScalarInline(f8.d)));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f28.d, PPC_PsFromScalarInline(f2.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_3 = (r5 + 8);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_3));
    PpcSetPairedFprInline(f31, PPC_PsMuls0Inline(f4.d, PPC_PsFromScalarInline(f5.d)));
    PpcSetPairedFprInline(f30, PPC_PsMuls0Inline(f6.d, PPC_PsFromScalarInline(f2.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r25, f0.d);
    PpcSetPairedFprInline(f27, PPC_PsMuls0Inline(f27.d, PPC_PsFromScalarInline(f5.d)));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f28.d, PPC_PsFromScalarInline(f2.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r6_psq_tmp_3 = (r6 + 20);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r26, f27.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r6_psq_tmp_4 = (r6 + 8);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_4));
    PpcSetPairedFprInline(f12, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f8.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r31, f31.d);
    PpcSetPairedFprInline(f31, PPC_PsMuls0Inline(f4.d, PPC_PsFromScalarInline(f5.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<0u, 0u>(ctx, r25));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r26));
    PpcSetPairedFprInline(f27, PPC_PsMuls0Inline(f27.d, PPC_PsFromScalarInline(f5.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r30, f30.d);
    PpcSetPairedFprInline(f28, PPC_PsAddInline(f4.d, f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r28, f29.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r7_psq_tmp_4 = (r7 + 8);
    PpcSetPairedFprInline(f13, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r7_psq_tmp_4));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r27, f28.d);
    PpcSetPairedFprInline(f28, PPC_PsAddInline(f0.d, f27.d));
    PpcSetPairedFprInline(f29, PPC_PsMuls0Inline(f13.d, PPC_PsFromScalarInline(f8.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_4 = (r5 + 20);
    PpcSetPairedFprInline(f6, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r30));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r31));
    PpcSetPairedFprInline(f30, PPC_PsMuls0Inline(f6.d, PPC_PsFromScalarInline(f2.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<0u, 0u>(ctx, r28));
    PpcSetPairedFprInline(f13, PPC_PsAddInline(f3.d, f1.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r27));
    MemoryInline::FlatWriteRamFloat32((r1 + 128), f2.d);
    PpcSetPairedFprInline(f4, PPC_PsAddInline(f1.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r11));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r12, f13.d);
    PpcSetPairedFprInline(f13, PPC_PsAddInline(f30.d, f31.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r12));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r29, f4.d);
    PpcSetPairedFprInline(f4, PPC_PsAddInline(f28.d, f29.d));
    PpcSetPairedFprInline(f1, PPC_PsAddInline(f3.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r29_psq_tmp_2 = (r29 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r29_psq_tmp_2, f4.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 8));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r10, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsAddInline(f13.d, f12.d));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f6.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 132), f5.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r25_psq_tmp_2 = (r25 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r25_psq_tmp_2, f0.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r26_psq_tmp_2 = (r26 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r26_psq_tmp_2, f27.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r27_psq_tmp_2 = (r27 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r27_psq_tmp_2, f28.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_2 = (r28 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r28_psq_tmp_2, f29.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 140), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 144), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 148), f6.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_2 = (r30 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r30_psq_tmp_2, f30.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r31_psq_tmp_2 = (r31 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r31_psq_tmp_2, f31.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r12_psq_tmp_2 = (r12 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r12_psq_tmp_2, f13.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r11_psq_tmp_2 = (r11 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r11_psq_tmp_2, f12.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r10_psq_tmp_2 = (r10 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r10_psq_tmp_2, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_80047E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r6 + 24));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f4.d));
    f0.d = PpcFmulsInline(f0.d, f5.d);
    f2.d = MemoryInline::FlatReadFloat32((r7 + 24));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f3.d));
    f2.d = PpcFmulsInline(f2.d, f8.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 152), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 156), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 160), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 164), f1.d);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f6.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80047EA8;
    }
}

loc_80047E9C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29952));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
}

loc_80047EA8:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 152));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_80047EB0:
{
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 156));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 160));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80047ED4;
    }
}

loc_80047EC8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29956));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
}

loc_80047ED4:
{
    r24 = (r24 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80047D04;
    }
}

loc_80047EDC:
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
    r11 = (r1 + 208);
    f27.d = leaf_stack_saved_f27_entry;
    // inline leaf 0x800215E0 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E0
    r0 = MemoryInline::FlatRead32((r1 + 292));
    ctx->lr = r0;
    r1 = (r1 + 288);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[13] = f13;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF001FFF gpr_write=0xFF001F0B gpr_return=0x00000008 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80047C50 func_80047C50 preserves=true fpr_mask=0x00000000
