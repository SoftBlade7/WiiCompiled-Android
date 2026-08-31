#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80031080(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f25_entry = 0.0;
    double leaf_stack_saved_f26_entry = 0.0;
    double leaf_stack_saved_f27_entry = 0.0;
    double leaf_stack_saved_f28_entry = 0.0;
    double leaf_stack_saved_f29_entry = 0.0;
    double leaf_stack_saved_f30_entry = 0.0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
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
    uint32_t r6_psq_tmp_2 = 0;
    uint32_t r6_psq_tmp_3 = 0;
    uint32_t r6_psq_tmp_4 = 0;
    uint32_t r6_psq_tmp_5 = 0;
    uint32_t r6_psq_tmp_6 = 0;
    uint32_t r6_psq_tmp_7 = 0;
    uint32_t r6_psq_tmp_8 = 0;
    uint32_t r6_psq_tmp_9 = 0;
    uint32_t r8_psq_tmp_0 = 0;
    uint32_t r8_psq_tmp_1 = 0;
    uint32_t r8_psq_tmp_2 = 0;
    uint32_t r9_psq_tmp_0 = 0;
    uint32_t r9_psq_tmp_1 = 0;
    uint32_t r9_psq_tmp_10 = 0;
    uint32_t r9_psq_tmp_2 = 0;
    uint32_t r9_psq_tmp_3 = 0;
    uint32_t r9_psq_tmp_4 = 0;
    uint32_t r9_psq_tmp_5 = 0;
    uint32_t r9_psq_tmp_6 = 0;
    uint32_t r9_psq_tmp_7 = 0;
    uint32_t r9_psq_tmp_8 = 0;
    uint32_t r9_psq_tmp_9 = 0;
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
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80031080;

loc_80031080:
{
    leaf_stack_saved_f25_entry = f25.d;
    leaf_stack_saved_f26_entry = f26.d;
    leaf_stack_saved_f27_entry = f27.d;
    leaf_stack_saved_f28_entry = f28.d;
    leaf_stack_saved_f29_entry = f29.d;
    leaf_stack_saved_f30_entry = f30.d;
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -31032), 0, 24u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -31028));
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r10;
    guest_range_1 = MemoryInline::ResolveRangeHost(r6, 0, 12u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r6);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r9;
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -31020));
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r8;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -31024));
    f30.d = f31.d;
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    f29.d = f31.d;
    f28.d = f31.d;
    r11 = MemoryInline::FlatRead32((r1 + 168));
    f1.d = MemoryInline::FlatReadFloat32(r8);
    f27.d = f31.d;
    f26.d = f31.d;
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    r28 = r4;
    f25.d = f31.d;
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_80031120:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80031198;
    }
}

loc_80031124:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r2 + -31012));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_8003112C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80031198;
    }
}

loc_80031134:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    r9 = (r1 + 8);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f2.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_1 = (r5 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_1));
    PpcSetPairedFprInline(f1, PPC_PsMadds0Inline(f1.d, PPC_PsFromScalarInline(f4.d), f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r6_psq_tmp_1 = (r6 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r9, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f2.d, f3.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    PpcSetPairedFprInline(f1, PPC_PsMadds0Inline(f1.d, PPC_PsFromScalarInline(f4.d), f3.d));
    f2.d = std::fabs(f2.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r9_psq_tmp_1 = (r9 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r9_psq_tmp_1, f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8003116C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80031198;
    }
}

loc_80031174:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80031180:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80031198;
    }
}

loc_80031188:
{
    f30.d = f4.d;
    SetCRFloatResident(cr, 0, f4.d, f31.d);
}

loc_80031190:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80031198;
    }
}

loc_80031194:
{
    f31.d = f4.d;
}

loc_80031198:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -31032));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r6);
    f1.d = MemoryInline::FlatReadFloat32(r8);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -31024));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_800311B4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8003122C;
    }
}

loc_800311B8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r2 + -31012));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_800311C0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003122C;
    }
}

loc_800311C8:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    r9 = (r1 + 8);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f2.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_3 = (r5 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_3));
    PpcSetPairedFprInline(f1, PPC_PsMadds0Inline(f1.d, PPC_PsFromScalarInline(f4.d), f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r6_psq_tmp_3 = (r6 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r9, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f2.d, f3.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    PpcSetPairedFprInline(f1, PPC_PsMadds0Inline(f1.d, PPC_PsFromScalarInline(f4.d), f3.d));
    f2.d = std::fabs(f2.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r9_psq_tmp_3 = (r9 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r9_psq_tmp_3, f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80031200:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003122C;
    }
}

loc_80031208:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80031214:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003122C;
    }
}

loc_8003121C:
{
    f29.d = f4.d;
    SetCRFloatResident(cr, 0, f4.d, f31.d);
}

loc_80031224:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8003122C;
    }
}

loc_80031228:
{
    f31.d = f4.d;
}

loc_8003122C:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -31028));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r6 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r8 + 4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -31024));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_80031248:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800312C0;
    }
}

loc_8003124C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r2 + -31012));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_80031254:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800312C0;
    }
}

loc_8003125C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    r9 = (r1 + 8);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f2.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_5 = (r5 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_5));
    PpcSetPairedFprInline(f1, PPC_PsMadds0Inline(f1.d, PPC_PsFromScalarInline(f4.d), f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r6_psq_tmp_5 = (r6 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_5));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r9, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f2.d, f3.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    PpcSetPairedFprInline(f1, PPC_PsMadds0Inline(f1.d, PPC_PsFromScalarInline(f4.d), f3.d));
    f2.d = std::fabs(f2.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r9_psq_tmp_5 = (r9 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r9_psq_tmp_5, f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80031294:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800312C0;
    }
}

loc_8003129C:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800312A8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800312C0;
    }
}

loc_800312B0:
{
    f28.d = f4.d;
    SetCRFloatResident(cr, 0, f4.d, f31.d);
}

loc_800312B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800312C0;
    }
}

loc_800312BC:
{
    f31.d = f4.d;
}

loc_800312C0:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -31032));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r6 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r8 + 4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -31024));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_800312DC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80031354;
    }
}

loc_800312E0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r2 + -31012));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_800312E8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80031354;
    }
}

loc_800312F0:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    r9 = (r1 + 8);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f2.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_7 = (r5 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_7));
    PpcSetPairedFprInline(f1, PPC_PsMadds0Inline(f1.d, PPC_PsFromScalarInline(f4.d), f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r6_psq_tmp_7 = (r6 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_7));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r9, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f2.d, f3.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    PpcSetPairedFprInline(f1, PPC_PsMadds0Inline(f1.d, PPC_PsFromScalarInline(f4.d), f3.d));
    f2.d = std::fabs(f2.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r9_psq_tmp_7 = (r9 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r9_psq_tmp_7, f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80031328:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80031354;
    }
}

loc_80031330:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8003133C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80031354;
    }
}

loc_80031344:
{
    f27.d = f4.d;
    SetCRFloatResident(cr, 0, f4.d, f31.d);
}

loc_8003134C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80031354;
    }
}

loc_80031350:
{
    f31.d = f4.d;
}

loc_80031354:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -31028));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r6 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r8 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -31024));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_80031370:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800313E8;
    }
}

loc_80031374:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r2 + -31012));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_8003137C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800313E8;
    }
}

loc_80031384:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    r9 = (r1 + 8);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f2.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_9 = (r5 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_9));
    PpcSetPairedFprInline(f1, PPC_PsMadds0Inline(f1.d, PPC_PsFromScalarInline(f4.d), f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r6_psq_tmp_9 = (r6 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_9));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r9, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f2.d, f3.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    PpcSetPairedFprInline(f1, PPC_PsMadds0Inline(f1.d, PPC_PsFromScalarInline(f4.d), f3.d));
    f2.d = std::fabs(f2.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r9_psq_tmp_9 = (r9 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r9_psq_tmp_9, f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_800313BC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800313E8;
    }
}

loc_800313C4:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800313D0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800313E8;
    }
}

loc_800313D8:
{
    f26.d = f4.d;
    SetCRFloatResident(cr, 0, f4.d, f31.d);
}

loc_800313E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800313E8;
    }
}

loc_800313E4:
{
    f31.d = f4.d;
}

loc_800313E8:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -31032));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r6 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r8 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -31024));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_80031404:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8003147C;
    }
}

loc_80031408:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r2 + -31012));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_80031410:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003147C;
    }
}

loc_80031418:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    r8 = (r1 + 8);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f2.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_11 = (r5 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_11));
    PpcSetPairedFprInline(f1, PPC_PsMadds0Inline(f1.d, PPC_PsFromScalarInline(f4.d), f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r6_psq_tmp_11 = (r6 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_11));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r8, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f2.d, f3.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    PpcSetPairedFprInline(f1, PPC_PsMadds0Inline(f1.d, PPC_PsFromScalarInline(f4.d), f3.d));
    f2.d = std::fabs(f2.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r8_psq_tmp_1 = (r8 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r8_psq_tmp_1, f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80031450:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003147C;
    }
}

loc_80031458:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80031464:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003147C;
    }
}

loc_8003146C:
{
    f25.d = f4.d;
    SetCRFloatResident(cr, 0, f4.d, f31.d);
}

loc_80031474:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8003147C;
    }
}

loc_80031478:
{
    f31.d = f4.d;
}

loc_8003147C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -31020));
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_80031484:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003148C;
    }
}

loc_80031488:
{
    goto loc_80031764;
}

loc_8003148C:
{
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r6);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r6 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r6 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f4.d = PpcFmulsInline(f31.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::FlatRead16((r4 + 44));
    f2.d = PpcFmulsInline(f31.d, f2.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800314C4:
{
    f0.d = PpcFmulsInline(f31.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    guest_range_2 = MemoryInline::ResolveRangeHost(r10, 0, 12u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, r10, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r10 + 4), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r10 + 8), f0.d);
    }
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800315B0;
    }
}

loc_800314E0:
{
    r0 = (r7 + 255);
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_800314EC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800315B0;
    }
}

loc_800314F0:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f31.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -31016));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80031500:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80031510;
    }
}

loc_80031508:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -31032));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, r10, f0.d);
}

loc_80031510:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f31.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -31016));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80031520:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80031530;
    }
}

loc_80031528:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -31028));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, r10, f0.d);
}

loc_80031530:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f28.d - f31.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -31016));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80031540:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80031550;
    }
}

loc_80031548:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -31032));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r10 + 4), f0.d);
}

loc_80031550:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f27.d - f31.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -31016));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80031560:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80031570;
    }
}

loc_80031568:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -31028));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r10 + 4), f0.d);
}

loc_80031570:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f26.d - f31.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -31016));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80031580:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80031590;
    }
}

loc_80031588:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -31032));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r10 + 8), f0.d);
}

loc_80031590:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f25.d - f31.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -31016));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800315A0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800315B0;
    }
}

loc_800315A8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -31028));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r10 + 8), f0.d);
}

loc_800315B0:
{
    r4 = r31;
    r5 = r11;
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
    r3_psq_tmp_1 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 24);
    PpcSetPairedFprInline(f9, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f8.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5, f6.d);
    PpcSetPairedFprInline(f11, PPC_PsMaddInline(f9.d, f1.d, f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4));
    PpcSetPairedFprInline(f12, PPC_PsSum0Inline(f11.d, f11.d, PPC_PsFromScalarInline(f12.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_5 = (r3 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_13 = (r5 + 4);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_13, f12.d);
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_14 = (r5 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_14, f6.d);
    // end of inlined leaf 0x8019A91C
    r0 = MemoryInline::FlatRead16((r28 + 44));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800315C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80031760;
    }
}

loc_800315C8:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f31.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -31016));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800315D8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800315F4;
    }
}

loc_800315E0:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f31.d));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, PPC_PsToScalarInline(f0.d));
}

loc_800315EC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80031610;
    }
}

loc_800315F4:
{
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -31032));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32(r30, f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r29);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32(r29, f0.d);
}

loc_80031610:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f28.d - f31.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -31016));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80031620:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003163C;
    }
}

loc_80031628:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f27.d - f31.d));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80031634:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80031658;
    }
}

loc_8003163C:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -31032));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 4), f0.d);
}

loc_80031658:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f26.d - f31.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -31016));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80031668:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80031684;
    }
}

loc_80031670:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f25.d - f31.d));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8003167C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800316A0;
    }
}

loc_80031684:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -31032));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 8), f0.d);
}

loc_800316A0:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f31.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -31016));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800316B0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800316C0;
    }
}

loc_800316B8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -31028));
    MemoryInline::FlatWriteFloat32(r31, f0.d);
}

loc_800316C0:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f31.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -31016));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800316D0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800316E0;
    }
}

loc_800316D8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -31032));
    MemoryInline::FlatWriteFloat32(r31, f0.d);
}

loc_800316E0:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f28.d - f31.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -31016));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800316F0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80031700;
    }
}

loc_800316F8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -31028));
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
}

loc_80031700:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f27.d - f31.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -31016));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80031710:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80031720;
    }
}

loc_80031718:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -31032));
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
}

loc_80031720:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f26.d - f31.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -31016));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80031730:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80031740;
    }
}

loc_80031738:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -31028));
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
}

loc_80031740:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f25.d - f31.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -31016));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80031750:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80031760;
    }
}

loc_80031758:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -31032));
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
}

loc_80031760:
{
    f1.d = f31.d;
}

loc_80031764:
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
    f27.d = leaf_stack_saved_f27_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = leaf_stack_saved_f26_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = leaf_stack_saved_f25_entry;
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r0 = MemoryInline::FlatRead32((r1 + 164));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF0000FFF gpr_write=0xF0000B33 gpr_return=0x00000010 fpr_read=0xFE001F7F fpr_write=0xFE001F7F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80031080 func_80031080 preserves=true fpr_mask=0x00000000
