#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80035510(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r29_psq_tmp_0 = 0;
    uint32_t r29_psq_tmp_1 = 0;
    uint32_t r29_psq_tmp_2 = 0;
    uint32_t r29_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;
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
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80035510;

loc_80035510:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 108), 0, 16u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 108));
    r29 = r3;
    r30 = r5;
    r31 = r6;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80035538:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80035548;
    }
}

loc_8003553C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80035540:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003560C;
    }
}

loc_80035544:
{
    goto loc_80035914;
}

loc_80035548:
{
    r4 = MemoryInline::FlatRead8(r5);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 109));
    r8 = MemoryInline::FlatRead8((r5 + 1));
    r9 = (r4 * r0);
    r7 = MemoryInline::FlatRead8((r5 + 2));
    r4 = MemoryInline::FlatRead8((r5 + 3));
    r0 = (r9 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 110));
    r8 = (r8 * r0);
    r0 = (r8 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 111));
    r7 = (r7 * r0);
    r0 = (r7 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 112));
    r4 = (r4 * r0);
    r0 = (r4 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8(r6);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 109));
    r7 = MemoryInline::FlatRead8((r6 + 1));
    r8 = (r4 * r0);
    r5 = MemoryInline::FlatRead8((r6 + 2));
    r4 = MemoryInline::FlatRead8((r6 + 3));
    r0 = (r8 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 110));
    r7 = (r7 * r0);
    r0 = (r7 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 111));
    r5 = (r5 * r0);
    r0 = (r5 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 112));
    r3 = (r4 * r0);
    r0 = (r3 + 128);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r0));
    goto loc_80035914;
}

loc_8003560C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 120));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30832));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80035618:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800356E0;
    }
}

loc_8003561C:
{
    r4 = MemoryInline::FlatRead8(r5);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 109));
    r8 = MemoryInline::FlatRead8((r5 + 1));
    r9 = (r4 * r0);
    r7 = MemoryInline::FlatRead8((r5 + 2));
    r4 = MemoryInline::FlatRead8((r5 + 3));
    r0 = (r9 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 110));
    r8 = (r8 * r0);
    r0 = (r8 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 111));
    r7 = (r7 * r0);
    r0 = (r7 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 112));
    r4 = (r4 * r0);
    r0 = (r4 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8(r6);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 109));
    r7 = MemoryInline::FlatRead8((r6 + 1));
    r8 = (r4 * r0);
    r5 = MemoryInline::FlatRead8((r6 + 2));
    r4 = MemoryInline::FlatRead8((r6 + 3));
    r0 = (r8 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 110));
    r7 = (r7 * r0);
    r0 = (r7 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 111));
    r5 = (r5 * r0);
    r0 = (r5 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 112));
    r3 = (r4 * r0);
    r0 = (r3 + 128);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r0));
    goto loc_80035914;
}

loc_800356E0:
{
    r3 = 0x802B0000u;
    r4 = (r4 + 172);
    r3 = (r3 + 30048);
    r5 = (r1 + 8);
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
    PPC_PsqStStackInline<1u, 0u>(ctx, r5, f6.d);
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
    r5_psq_tmp_1 = (r5 + 4);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_1, f12.d);
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_2 = (r5 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_2, f6.d);
    // end of inlined leaf 0x8019A91C
    r3 = (r1 + 8);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_1 = (r29 + 124);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_1));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f1.d, f0.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_6 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_6));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_2 = (r29 + 132);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_2));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f1.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_7 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_7, f0.d);
    // inline leaf 0x8019AC68 (17 guest instruction(s))
}

loc_inl2_0x8019AC68:
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

loc_inl2_0x8019AC88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8019AC8C:
{
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -26356));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f4.d);
    f2.d = PPC_Fnmsubs(f2.d, PPC_PsToScalarInline(f1.d), f3.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f1.d), f0.d);
    goto loc_inl2_cont_8019AC68;
}

loc_inl2_return:
{
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_inl2_cont_8019AC68:
{
    // end of inlined leaf 0x8019AC68
    guest_range_1 = MemoryInline::ResolveRangeHost((r29 + 109), 0, 15u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 11u, (r29 + 120));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_80035724:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800357EC;
    }
}

loc_80035728:
{
    r3 = MemoryInline::FlatRead8(r30);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r29 + 109));
    r5 = MemoryInline::FlatRead8((r30 + 1));
    r6 = (r3 * r0);
    r4 = MemoryInline::FlatRead8((r30 + 2));
    r3 = MemoryInline::FlatRead8((r30 + 3));
    r0 = (r6 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r29 + 110));
    r5 = (r5 * r0);
    r0 = (r5 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r29 + 111));
    r4 = (r4 * r0);
    r0 = (r4 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r29 + 112));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8((r30 + 3), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8(r31);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r29 + 109));
    r5 = MemoryInline::FlatRead8((r31 + 1));
    r6 = (r3 * r0);
    r4 = MemoryInline::FlatRead8((r31 + 2));
    r3 = MemoryInline::FlatRead8((r31 + 3));
    r0 = (r6 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r29 + 110));
    r5 = (r5 * r0);
    r0 = (r5 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r29 + 111));
    r4 = (r4 * r0);
    r0 = (r4 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r29 + 112));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
    goto loc_80035914;
}

loc_800357EC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30828));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r29 + 113));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    r3 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r29 + 109));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r29 + 114));
    r27_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r27 = (r27_rot_1 & -256);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r29 + 110));
    r6 = (r3 - r4);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r29 + 115));
    r3 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r29 + 111));
    r9 = (r0 - r5);
    r10 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r29 + 116));
    r28_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r28 = (r28_rot_1 & -256);
    f0.d = PPC_Fctiwz(f0.d);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r29 + 112));
    r11_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(8));
    r11 = (r11_rot_1 & -256);
    r3 = (r3 - r7);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r12_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r12 = (r12_rot_1 & -256);
    r29 = fctiwzword0;
    r4 = (r0 - r10);
    r5 = MemoryInline::FlatRead8(r30);
    r0 = (r29 * r6);
    r8 = MemoryInline::FlatRead8((r30 + 1));
    r7 = MemoryInline::FlatRead8((r30 + 2));
    r6 = MemoryInline::FlatRead8((r30 + 3));
    r10 = (r29 * r9);
    r0 = (r27 + r0);
    r0 = (r0 & 65535);
    r9 = (r29 * r3);
    r3 = (r28 + r10);
    r3 = (r3 & 65535);
    r10 = (r29 * r4);
    r4 = (r12 + r9);
    r4 = (r4 & 65535);
    r9 = (r5 * r0);
    r5 = (r11 + r10);
    r5 = (r5 & 65535);
    r8 = (r8 * r3);
    r9 = (r9 + 128);
    r9 = (static_cast<int32_t>(r9) >> 16);
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r9));
    r7 = (r7 * r4);
    r8 = (r8 + 128);
    r8 = (static_cast<int32_t>(r8) >> 16);
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r8));
    r6 = (r6 * r5);
    r7 = (r7 + 128);
    r7 = (static_cast<int32_t>(r7) >> 16);
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r7));
    r6 = (r6 + 128);
    r6 = (static_cast<int32_t>(r6) >> 16);
    MemoryInline::FlatWrite8((r30 + 3), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead8(r31);
    r7 = MemoryInline::FlatRead8((r31 + 1));
    r8 = (r6 * r0);
    r6 = MemoryInline::FlatRead8((r31 + 2));
    r0 = MemoryInline::FlatRead8((r31 + 3));
    r3 = (r7 * r3);
    r7 = (r8 + 128);
    r7 = (static_cast<int32_t>(r7) >> 16);
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r7));
    r3 = (r3 + 128);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r3));
    r4 = (r6 * r4);
    r3 = (r0 * r5);
    r0 = (r4 + 128);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r0));
    r0 = (r3 + 128);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(16) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
}

loc_80035914:
{
    r11 = (r1 + 64);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF8001FFF gpr_write=0xF8001FFB gpr_return=0x00000018 fpr_read=0x00001F7F fpr_write=0x00001F7F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80035510 func_80035510 preserves=true fpr_mask=0x00000000
