#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80066200(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_8006636C_loc_0 = 0;
    uint32_t addr_lfsx_80066418_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r29_psq_tmp_0 = 0;
    uint32_t r29_psq_tmp_1 = 0;
    uint32_t r29_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
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
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_4 = 0;
    uint32_t r5_psq_tmp_5 = 0;
    uint32_t r5_psq_tmp_6 = 0;
    uint32_t r5_psq_tmp_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
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
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80066200;

loc_80066200:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r1 + 116), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 96u, (r1 + 96), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 80u, (r1 + 80), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 60), r31);
    r31 = r5;
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 56), r30);
    r30 = r4;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r29);
    r29 = r3;
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 48), r28);
    r28 = r8;
    f2.d = MemoryInline::FlatReadFloat32((r3 + 44));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f2.d = (-(f2.d));
    f1.d = (-(f1.d));
    f0.d = (-(f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r1 + 16), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r1 + 8), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r1 + 12), f1.d);
    }
    r3 = MemoryInline::FlatRead32(r7);
    r5 = (r3 + 76);
    r3 = MemoryInline::FlatRead32((r3 + 112));
    r3 = (r5 + r3);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80066288:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80066308;
    }
}

loc_8006628C:
{
    r3 = r7;
    r4 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004E340u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r3 + 92));
}

loc_800662A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800662AC;
    }
}

loc_800662A4:
{
    r3 = (r3 + r0);
    goto loc_800662B0;
}

loc_800662AC:
{
    r3 = 0;
}

loc_800662B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800662B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800662E4;
    }
}

loc_800662B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800662C4;
    }
}

loc_800662BC:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    goto loc_800662C8;
}

loc_800662C4:
{
    r0 = 0;
}

loc_800662C8:
{
    r28 = (r28 * 48);
    r3 = (r1 + 20);
    r0 = (r0 * 48);
    r4 = (r30 + r28);
    r5 = (r30 + r0);
    // inline leaf 0x80065930 (50 guest instruction(s))
}

loc_inl0_0x80065930:
{
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_0 = (r5 + 16);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_0));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_1 = (r5 + 20);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_1));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_2 = (r5 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_2));
    PpcSetPairedFprInline(f7, PPC_PsMerge10Inline(f3.d, f2.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_3 = (r5 + 36);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_4 = (r5 + 32);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_4));
    PpcSetPairedFprInline(f6, PPC_PsMerge10Inline(f1.d, f0.d));
    PpcSetPairedFprInline(f12, PPC_PsMulInline(f5.d, f7.d));
    PpcSetPairedFprInline(f8, PPC_PsMerge10Inline(f5.d, f4.d));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f3.d, f6.d));
    PpcSetPairedFprInline(f9, PPC_PsMulInline(f0.d, f5.d));
    PpcSetPairedFprInline(f11, PPC_PsMulInline(f1.d, f8.d));
    PpcSetPairedFprInline(f12, PPC_PsMsubInline(f3.d, f8.d, f12.d));
    PpcSetPairedFprInline(f10, PPC_PsMsubInline(f1.d, f7.d, f10.d));
    PpcSetPairedFprInline(f11, PPC_PsMsubInline(f5.d, f6.d, f11.d));
    PpcSetPairedFprInline(f7, PPC_PsMulInline(f0.d, f12.d));
    PpcSetPairedFprInline(f6, PPC_PsSubInline(f6.d, f6.d));
    PpcSetPairedFprInline(f9, PPC_PsMsubInline(f1.d, f4.d, f9.d));
    PpcSetPairedFprInline(f7, PPC_PsMaddInline(f2.d, f11.d, f7.d));
    PpcSetPairedFprInline(f7, PPC_PsMaddInline(f4.d, f10.d, f7.d));
    SetCRFloatResident(cr, static_cast<uint32_t>(0) & 7u, PpcGetPs0Inline(f7.d), PpcGetPs0Inline(f6.d));
}

loc_inl0_0x80065988:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_0x80065998;
    }
}

loc_inl0_0x8006598C:
{
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f6.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), PPC_PsToScalarInline(f6.d));
    goto loc_inl0_cont_80065930;
}

loc_inl0_0x80065998:
{
    PpcSetPairedFprInline(f0, PPC_Fres(f7.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 16);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_2 = (r4 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_3 = (r4 + 24);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_3));
    PpcSetPairedFprInline(f6, PPC_PsAddInline(f0.d, f0.d));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsNmsubInline(f7.d, f5.d, f6.d));
    PpcSetPairedFprInline(f6, PPC_PsMerge00Inline(f2.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_4 = (r4 + 40);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_4));
    PpcSetPairedFprInline(f11, PPC_PsMuls0Inline(f11.d, f0.d));
    PpcSetPairedFprInline(f9, PPC_PsMuls0Inline(f9.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f4, PPC_PsMerge00Inline(f0.d, f1.d));
    PpcSetPairedFprInline(f5, PPC_PsMerge11Inline(f0.d, f1.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_5 = (r4 + 32);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_5));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f4.d, f11.d));
    PpcSetPairedFprInline(f1, PPC_PsMulInline(f1.d, f9.d));
    PpcSetPairedFprInline(f0, PPC_PsMadds1Inline(f5.d, f11.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f1.d, f1.d));
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f6.d, f9.d, f0.d));
    f1.d = PPC_Fmadds(PPC_PsToScalarInline(f2.d), PPC_PsToScalarInline(f9.d), PPC_PsToScalarInline(f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f0.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_1, PPC_PsFromScalarInline(f1.d));
}

loc_inl0_cont_80065930:
{
    // end of inlined leaf 0x80065930
    f11.d = PPC_PsToScalarInline(f11.d);
    f12.d = PPC_PsToScalarInline(f12.d);
    goto loc_80066328;
}

loc_800662E4:
{
    r28 = (r28 * 48);
    r3 = (r30 + r28);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 36));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    goto loc_80066328;
}

loc_80066308:
{
    r28 = (r8 * 48);
    r3 = (r4 + r28);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 36));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
}

loc_80066328:
{
    r3 = (r1 + 8);
    r4 = r3;
    // inline leaf 0x8019AC24 (17 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_4));
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
    r4_psq_tmp_8 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_8, f3.d);
    // end of inlined leaf 0x8019AC24
    r3 = (r1 + 20);
    r4 = (r1 + 8);
    r5 = (r1 + 32);
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
    r5_psq_tmp_7 = (r5 + 4);
    PPC_PsqStStackInline<0u, 0u>(ctx, r5_psq_tmp_7, f10.d);
    // end of inlined leaf 0x8019ACCC
    r3 = (r1 + 32);
    r4 = r3;
    // inline leaf 0x8019AC24 (17 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_5 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_5));
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
    r4_psq_tmp_9 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_9, f3.d);
    // end of inlined leaf 0x8019AC24
    r3 = (r1 + 8);
    r4 = (r1 + 32);
    r5 = (r1 + 20);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    InvokeDirectCpu<0x8019ACCCu>(ctx);
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
}

loc_80066364:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80066414;
    }
}

loc_80066368:
{
    r3 = (r30 + r28);
    addr_lfsx_8006636C_loc_0 = (r30 + r28);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_8006636C_loc_0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29456));
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_80066394:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800663A0;
    }
}

loc_8006639C:
{
    goto loc_800663AC;
}

loc_800663A0:
{
    f1.d = f30.d;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x80085040u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f0.d = PpcFmulsInline(f30.d, f1.d);
}

loc_800663AC:
{
    r4 = (r1 + 20);
    r3 = (r1 + 32);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    r3 = (r1 + 8);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f0.d)));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f0.d)));
    PpcSetPairedFprInline(f2, PPC_PsMerge00Inline(f3.d, f1.d));
    PpcSetPairedFprInline(f1, PPC_PsMerge11Inline(f3.d, f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r29, f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r29_psq_tmp_0 = (r29 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_0, f1.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f0.d)));
    MemoryInline::FlatWriteFloat32((r29 + 8), PPC_PsToScalarInline(f3.d));
    PpcSetPairedFprInline(f3, PPC_PsMerge11Inline(f3.d, f3.d));
    MemoryInline::FlatWriteFloat32((r29 + 24), PPC_PsToScalarInline(f3.d));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f3.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 32), f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f3.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 36), f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f3.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 40), f3.d);
    goto loc_80066544;
}

loc_80066414:
{
    r3 = (r30 + r28);
    addr_lfsx_80066418_loc_0 = (r30 + r28);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_80066418_loc_0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f30.d = MemoryInline::FlatReadFloat32((r2 + -29456));
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f31.d, f30.d);
}

loc_80066440:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8006644C;
    }
}

loc_80066448:
{
    goto loc_80066458;
}

loc_8006644C:
{
    f1.d = f31.d;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x80085040u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f30.d = PpcFmulsInline(f31.d, f1.d);
}

loc_80066458:
{
    r3 = (r30 + r28);
    f31.d = MemoryInline::FlatReadFloat32((r2 + -29456));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f29.d, f31.d);
}

loc_80066484:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80066490;
    }
}

loc_8006648C:
{
    goto loc_8006649C;
}

loc_80066490:
{
    f1.d = f29.d;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x80085040u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31.d = PpcFmulsInline(f29.d, f1.d);
}

loc_8006649C:
{
    r3 = (r30 + r28);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29456));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 24));
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 40));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f29.d, f0.d);
}

loc_800664C8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800664D4;
    }
}

loc_800664D0:
{
    goto loc_800664E0;
}

loc_800664D4:
{
    f1.d = f29.d;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x80085040u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f0.d = PpcFmulsInline(f29.d, f1.d);
}

loc_800664E0:
{
    r4 = (r1 + 20);
    r3 = (r1 + 32);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    r3 = (r1 + 8);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f30.d)));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f31.d)));
    PpcSetPairedFprInline(f2, PPC_PsMerge00Inline(f3.d, f1.d));
    PpcSetPairedFprInline(f1, PPC_PsMerge11Inline(f3.d, f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r29, f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r29_psq_tmp_1 = (r29 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_1, f1.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f0.d)));
    MemoryInline::FlatWriteFloat32((r29 + 8), PPC_PsToScalarInline(f3.d));
    PpcSetPairedFprInline(f3, PPC_PsMerge11Inline(f3.d, f3.d));
    MemoryInline::FlatWriteFloat32((r29 + 24), PPC_PsToScalarInline(f3.d));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f3.d = PpcFmulsInline(f3.d, f30.d);
    MemoryInline::FlatWriteFloat32((r29 + 32), f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f3.d = PpcFmulsInline(f3.d, f31.d);
    MemoryInline::FlatWriteFloat32((r29 + 36), f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f3.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 40), f3.d);
}

loc_80066544:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 48), 0, 72u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 48u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 32u, (r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 16u, (r1 + 64));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 60));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 56));
        }
    }
    r29 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 52));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 68u, (r1 + 116));
    r28 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 48));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00001BF gpr_write=0xF000003B gpr_return=0x00000018 fpr_read=0xE0001FFF fpr_write=0xE0001FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80066200 func_80066200 preserves=false fpr_mask=0xE0000000
