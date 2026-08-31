#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806F62FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r28_psq_tmp_0 = 0;
    uint32_t r28_psq_tmp_1 = 0;
    uint32_t r28_psq_tmp_2 = 0;
    uint32_t r28_psq_tmp_3 = 0;
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
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_806F62FC;

loc_806F62FC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 48);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    f31.d = f1.d;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_806F6328:
{
    r31 = 0x808A0000u;
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r31 = (r31 + 2976);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806F635C;
    }
}

loc_806F6344:
{
    r3 = 0x808A0000u;
    r4 = 190;
    r3 = (r3 + 3148);
    r5 = (r3 + 14);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x806F635Cu;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80025FB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_806F635C:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32(r27);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8932));
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r0 = MemoryInline::FlatRead32((r27 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806F6378:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806F6394;
    }
}

loc_806F6388:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    MemoryInline::FlatWriteFloat32(r30, f0.d);
    goto loc_806F6484;
}

loc_806F6394:
{
    r3 = (r1 + 8);
    // inline leaf 0x8019AC68 (17 guest instruction(s))
}

loc_inl1_0x8019AC68:
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

loc_inl1_0x8019AC88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8019AC8C:
{
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -26356));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f4.d);
    f2.d = PPC_Fnmsubs(f2.d, PPC_PsToScalarInline(f1.d), f3.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f1.d), f0.d);
    goto loc_inl1_cont_8019AC68;
}

loc_inl1_return:
{
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_inl1_cont_8019AC68:
{
    // end of inlined leaf 0x8019AC68
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806F63A4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806F63CC;
    }
}

loc_806F63A8:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r1 + 8);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f3.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f3.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_2, f0.d);
}

loc_806F63CC:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806F63D4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806F641C;
    }
}

loc_806F63D8:
{
    r3 = (r1 + 8);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_1 = (r28 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_1));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 4);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_1 = (r29 + 4);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_1));
    PpcSetPairedFprInline(f4, f2.d);
    mkw_gqr0 = ctx->gqr[0];
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f2.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f4.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r29));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f0.d, f1.d, f2.d));
    PpcSetPairedFprInline(f3, PPC_PsMaddInline(f0.d, f3.d, f4.d));
    PpcSetPairedFprInline(f0, PPC_PsSum0Inline(f1.d, f2.d, f2.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f3.d, f4.d, f4.d));
    f30.d = (-(PPC_PsToScalarInline(f0.d)));
    f1.d = (-(PPC_PsToScalarInline(f1.d)));
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    goto loc_806F6430;
}

loc_806F641C:
{
    r3 = r28;
    // inline leaf 0x8019AC68 (17 guest instruction(s))
}

loc_inl2_0x8019AC68:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
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
    f30.d = (-(f1.d));
    r3 = r29;
    // inline leaf 0x8019AC68 (17 guest instruction(s))
}

loc_inl3_0x8019AC68:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -26360));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f4.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f2.d);
}

loc_inl3_0x8019AC88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x8019AC8C:
{
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -26356));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f4.d);
    f2.d = PPC_Fnmsubs(f2.d, PPC_PsToScalarInline(f1.d), f3.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f1.d), f0.d);
    goto loc_inl3_cont_8019AC68;
}

loc_inl3_return:
{
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_inl3_cont_8019AC68:
{
    // end of inlined leaf 0x8019AC68
}

loc_806F6430:
{
    r3 = 0x809C0000u;
    f1.d = PpcFmulsInline(f1.d, f31.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8932));
    f30.d = PpcFmulsInline(f30.d, f31.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806F6444:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806F6450;
    }
}

loc_806F6448:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    goto loc_806F6470;
}

loc_806F6450:
{
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_806F6454:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806F6464;
    }
}

loc_806F645C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8));
    goto loc_806F6470;
}

loc_806F6464:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
}

loc_806F6470:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806F6478:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806F6480;
    }
}

loc_806F647C:
{
    f1.d = f0.d;
}

loc_806F6480:
{
    MemoryInline::FlatWriteFloat32(r30, f1.d);
}

loc_806F6484:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 48);
    f30.d = MemoryInline::FlatReadFloat64((r1 + 48));
    {
        uint8_t* const guest_thunk_stack = MemoryInline::ResolveRangeHost((r11 + -20), 0, 20u, true, false);
        r27 = MemoryInline::ReadResolved32(guest_thunk_stack, 0u, (r11 + -20));
        r28 = MemoryInline::ReadResolved32(guest_thunk_stack, 4u, (r11 + -16));
        r29 = MemoryInline::ReadResolved32(guest_thunk_stack, 8u, (r11 + -12));
        r30 = MemoryInline::ReadResolved32(guest_thunk_stack, 12u, (r11 + -8));
        r31 = MemoryInline::ReadResolved32(guest_thunk_stack, 16u, (r11 + -4));
    }
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806F62FC func_806F62FC preserves=false fpr_mask=0xC0000000
