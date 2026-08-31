#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8002FCC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint32_t r10_psq_tmp_0 = 0;
    uint32_t r10_psq_tmp_1 = 0;
    uint32_t r10_psq_tmp_2 = 0;
    uint32_t r10_psq_tmp_3 = 0;
    uint32_t r10_psq_tmp_4 = 0;
    uint32_t r10_psq_tmp_5 = 0;
    uint32_t r10_psq_tmp_6 = 0;
    uint32_t r10_psq_tmp_7 = 0;
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
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_7 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_10 = 0;
    uint32_t r5_psq_tmp_11 = 0;
    uint32_t r5_psq_tmp_12 = 0;
    uint32_t r5_psq_tmp_13 = 0;
    uint32_t r5_psq_tmp_14 = 0;
    uint32_t r5_psq_tmp_15 = 0;
    uint32_t r5_psq_tmp_16 = 0;
    uint32_t r5_psq_tmp_17 = 0;
    uint32_t r5_psq_tmp_18 = 0;
    uint32_t r5_psq_tmp_19 = 0;
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
    uint32_t r6_psq_tmp_2 = 0;
    uint32_t r6_psq_tmp_3 = 0;
    uint32_t r6_psq_tmp_4 = 0;
    uint32_t r6_psq_tmp_5 = 0;
    uint32_t r6_psq_tmp_6 = 0;
    uint32_t r6_psq_tmp_7 = 0;
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8002FCC0;

loc_8002FCC0:
{
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r0 = MemoryInline::FlatRead8((r4 + 42));
    r7 = MemoryInline::FlatRead32((r1 + 40));
}

loc_8002FCE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002FCF8;
    }
}

loc_8002FCE4:
{
}

loc_8002FCE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8002FEB4;
    }
}

loc_8002FCEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8002FCF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80030070;
    }
}

loc_8002FCF4:
{
    goto loc_8003022C;
}

loc_8002FCF8:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 4));
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -31032), 0, 28u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -31016));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8002FD08:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002FD24;
    }
}

loc_8002FD0C:
{
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8002FD18:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002FD24;
    }
}

loc_8002FD1C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -31020));
    goto loc_80030230;
}

loc_8002FD24:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -31024));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8002FD30:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002FDE8;
    }
}

loc_8002FD34:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -31016));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_8002FD40:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002FDE8;
    }
}

loc_8002FD44:
{
    f1.d = (-(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r8 + 4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -31008));
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, f5.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_13 = (r5 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_13));
    PpcSetPairedFprInline(f4, PPC_PsMadds0Inline(f4.d, PPC_PsFromScalarInline(f31.d), f5.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r6_psq_tmp_5 = (r6 + 8);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_5));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r10, f4.d);
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, f5.d));
    f1.d = MemoryInline::FlatReadFloat32(r10);
    PpcSetPairedFprInline(f4, PPC_PsMadds0Inline(f4.d, PPC_PsFromScalarInline(f31.d), f5.d));
    f2.d = PpcFmulsInline(f1.d, f1.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r10_psq_tmp_5 = (r10 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r10_psq_tmp_5, f4.d);
    f1.d = MemoryInline::FlatReadFloat32((r10 + 8));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8002FD94:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002FDE0;
    }
}

loc_8002FD98:
{
    r0 = MemoryInline::FlatRead16((r4 + 44));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8002FDA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002FDCC;
    }
}

loc_8002FDA4:
{
    f0.d = MemoryInline::FlatReadFloat32((r9 + 4));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -31032));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r9 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r8 + 4));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r8 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r10 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    MemoryInline::FlatWriteFloat32((r10 + 4), f0.d);
}

loc_8002FDCC:
{
    r4 = r10;
    r5 = r7;
    // inline leaf 0x8019A91C (21 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_5 = (r4 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_5));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_21 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_21));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_22 = (r3 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_22));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_23 = (r3 + 24);
    PpcSetPairedFprInline(f9, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_23));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f8.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5, f6.d);
    PpcSetPairedFprInline(f11, PPC_PsMaddInline(f9.d, f1.d, f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_24 = (r3 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_24));
    PpcSetPairedFprInline(f12, PPC_PsSum0Inline(f11.d, f11.d, PPC_PsFromScalarInline(f12.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_25 = (r3 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_25));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_14 = (r5 + 4);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_14, f12.d);
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_15 = (r5 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_15, f6.d);
    // end of inlined leaf 0x8019A91C
    f1.d = f31.d;
    goto loc_80030230;
}

loc_8002FDE0:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -31020));
    goto loc_80030230;
}

loc_8002FDE8:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -31024));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8002FDF4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002FEAC;
    }
}

loc_8002FDF8:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -31016));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_8002FE04:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002FEAC;
    }
}

loc_8002FE08:
{
    f1.d = (-(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r8 + 4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -31008));
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, f5.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_16 = (r5 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_16));
    PpcSetPairedFprInline(f4, PPC_PsMadds0Inline(f4.d, PPC_PsFromScalarInline(f31.d), f5.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r6_psq_tmp_6 = (r6 + 8);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_6));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r10, f4.d);
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, f5.d));
    f1.d = MemoryInline::FlatReadFloat32(r10);
    PpcSetPairedFprInline(f4, PPC_PsMadds0Inline(f4.d, PPC_PsFromScalarInline(f31.d), f5.d));
    f2.d = PpcFmulsInline(f1.d, f1.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r10_psq_tmp_6 = (r10 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r10_psq_tmp_6, f4.d);
    f1.d = MemoryInline::FlatReadFloat32((r10 + 8));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8002FE58:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002FEA4;
    }
}

loc_8002FE5C:
{
    r0 = MemoryInline::FlatRead16((r4 + 44));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8002FE64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002FE90;
    }
}

loc_8002FE68:
{
    f0.d = MemoryInline::FlatReadFloat32((r9 + 4));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -31032));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r9 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r8 + 4));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r8 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r10 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    MemoryInline::FlatWriteFloat32((r10 + 4), f0.d);
}

loc_8002FE90:
{
    r4 = r10;
    r5 = r7;
    // inline leaf 0x8019A91C (21 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_6 = (r4 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_6));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_26 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_26));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_27 = (r3 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_27));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_28 = (r3 + 24);
    PpcSetPairedFprInline(f9, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_28));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f8.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5, f6.d);
    PpcSetPairedFprInline(f11, PPC_PsMaddInline(f9.d, f1.d, f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_29 = (r3 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_29));
    PpcSetPairedFprInline(f12, PPC_PsSum0Inline(f11.d, f11.d, PPC_PsFromScalarInline(f12.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_30 = (r3 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_30));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_17 = (r5 + 4);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_17, f12.d);
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_18 = (r5 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_18, f6.d);
    // end of inlined leaf 0x8019A91C
    f1.d = f31.d;
    goto loc_80030230;
}

loc_8002FEA4:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -31020));
    goto loc_80030230;
}

loc_8002FEAC:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -31020));
    goto loc_80030230;
}

loc_8002FEB4:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 8));
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -31032), 0, 28u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31016));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8002FEC4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002FEE0;
    }
}

loc_8002FEC8:
{
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8002FED4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002FEE0;
    }
}

loc_8002FED8:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31020));
    goto loc_80030230;
}

loc_8002FEE0:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -31024));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8002FEEC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002FFA4;
    }
}

loc_8002FEF0:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31016));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_8002FEFC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002FFA4;
    }
}

loc_8002FF00:
{
    f1.d = (-(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r8 + 8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -31008));
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, f5.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_7 = (r5 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_7));
    PpcSetPairedFprInline(f4, PPC_PsMadds0Inline(f4.d, PPC_PsFromScalarInline(f31.d), f5.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r6_psq_tmp_3 = (r6 + 8);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r10, f4.d);
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, f5.d));
    f2.d = MemoryInline::FlatReadFloat32(r10);
    f1.d = MemoryInline::FlatReadFloat32((r10 + 4));
    PpcSetPairedFprInline(f4, PPC_PsMadds0Inline(f4.d, PPC_PsFromScalarInline(f31.d), f5.d));
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f1.d = PpcFmulsInline(f1.d, f1.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r10_psq_tmp_3 = (r10 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r10_psq_tmp_3, f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8002FF50:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002FF9C;
    }
}

loc_8002FF54:
{
    r0 = MemoryInline::FlatRead16((r4 + 44));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8002FF5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002FF88;
    }
}

loc_8002FF60:
{
    f0.d = MemoryInline::FlatReadFloat32((r9 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -31032));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r9 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r8 + 8));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r8 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r10 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    MemoryInline::FlatWriteFloat32((r10 + 8), f0.d);
}

loc_8002FF88:
{
    r4 = r10;
    r5 = r7;
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
    r3_psq_tmp_11 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_11));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_12 = (r3 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_12));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_13 = (r3 + 24);
    PpcSetPairedFprInline(f9, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_13));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f8.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5, f6.d);
    PpcSetPairedFprInline(f11, PPC_PsMaddInline(f9.d, f1.d, f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_14 = (r3 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_14));
    PpcSetPairedFprInline(f12, PPC_PsSum0Inline(f11.d, f11.d, PPC_PsFromScalarInline(f12.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_15 = (r3 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_15));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_8 = (r5 + 4);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_8, f12.d);
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_9 = (r5 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_9, f6.d);
    // end of inlined leaf 0x8019A91C
    f1.d = f31.d;
    goto loc_80030230;
}

loc_8002FF9C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31020));
    goto loc_80030230;
}

loc_8002FFA4:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -31024));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8002FFB0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80030068;
    }
}

loc_8002FFB4:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31016));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_8002FFC0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80030068;
    }
}

loc_8002FFC4:
{
    f1.d = (-(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r8 + 8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r2 + -31008));
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, f5.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_10 = (r5 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_10));
    PpcSetPairedFprInline(f4, PPC_PsMadds0Inline(f4.d, PPC_PsFromScalarInline(f31.d), f5.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r6_psq_tmp_4 = (r6 + 8);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_4));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r10, f4.d);
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, f5.d));
    f2.d = MemoryInline::FlatReadFloat32(r10);
    f1.d = MemoryInline::FlatReadFloat32((r10 + 4));
    PpcSetPairedFprInline(f4, PPC_PsMadds0Inline(f4.d, PPC_PsFromScalarInline(f31.d), f5.d));
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f1.d = PpcFmulsInline(f1.d, f1.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r10_psq_tmp_4 = (r10 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r10_psq_tmp_4, f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80030014:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80030060;
    }
}

loc_80030018:
{
    r0 = MemoryInline::FlatRead16((r4 + 44));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80030020:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003004C;
    }
}

loc_80030024:
{
    f0.d = MemoryInline::FlatReadFloat32((r9 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -31032));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r9 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r8 + 8));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r8 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r10 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    MemoryInline::FlatWriteFloat32((r10 + 8), f0.d);
}

loc_8003004C:
{
    r4 = r10;
    r5 = r7;
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
    r3_psq_tmp_16 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_16));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_17 = (r3 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_17));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_18 = (r3 + 24);
    PpcSetPairedFprInline(f9, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_18));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f8.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5, f6.d);
    PpcSetPairedFprInline(f11, PPC_PsMaddInline(f9.d, f1.d, f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_19 = (r3 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_19));
    PpcSetPairedFprInline(f12, PPC_PsSum0Inline(f11.d, f11.d, PPC_PsFromScalarInline(f12.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_20 = (r3 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_20));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_11 = (r5 + 4);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_11, f12.d);
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_12 = (r5 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_12, f6.d);
    // end of inlined leaf 0x8019A91C
    f1.d = f31.d;
    goto loc_80030230;
}

loc_80030060:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31020));
    goto loc_80030230;
}

loc_80030068:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31020));
    goto loc_80030230;
}

loc_80030070:
{
    f1.d = MemoryInline::FlatReadFloat32(r6);
    guest_range_2 = MemoryInline::ResolveRangeHost((r2 + -31032), 0, 28u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r2 + -31016));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80030080:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8003009C;
    }
}

loc_80030084:
{
    f1.d = MemoryInline::FlatReadFloat32(r5);
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80030090:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8003009C;
    }
}

loc_80030094:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r2 + -31020));
    goto loc_80030230;
}

loc_8003009C:
{
    f1.d = MemoryInline::FlatReadFloat32(r6);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r2 + -31024));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800300A8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80030160;
    }
}

loc_800300AC:
{
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r2 + -31016));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_800300B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80030160;
    }
}

loc_800300BC:
{
    f1.d = (-(f1.d));
    f0.d = MemoryInline::FlatReadFloat32(r8);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r2 + -31008));
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, f5.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_1 = (r5 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_1));
    PpcSetPairedFprInline(f4, PPC_PsMadds0Inline(f4.d, PPC_PsFromScalarInline(f31.d), f5.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r6_psq_tmp_1 = (r6 + 8);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r10, f4.d);
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, f5.d));
    f1.d = MemoryInline::FlatReadFloat32((r10 + 4));
    PpcSetPairedFprInline(f4, PPC_PsMadds0Inline(f4.d, PPC_PsFromScalarInline(f31.d), f5.d));
    f2.d = PpcFmulsInline(f1.d, f1.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r10_psq_tmp_1 = (r10 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r10_psq_tmp_1, f4.d);
    f1.d = MemoryInline::FlatReadFloat32((r10 + 8));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8003010C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80030158;
    }
}

loc_80030110:
{
    r0 = MemoryInline::FlatRead16((r4 + 44));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80030118:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80030144;
    }
}

loc_8003011C:
{
    f0.d = MemoryInline::FlatReadFloat32(r9);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31032));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32(r9, f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r8);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32(r8, f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r10);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    MemoryInline::FlatWriteFloat32(r10, f0.d);
}

loc_80030144:
{
    r4 = r10;
    r5 = r7;
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
    r5_psq_tmp_2 = (r5 + 4);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_2, f12.d);
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_3 = (r5 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_3, f6.d);
    // end of inlined leaf 0x8019A91C
    f1.d = f31.d;
    goto loc_80030230;
}

loc_80030158:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r2 + -31020));
    goto loc_80030230;
}

loc_80030160:
{
    f1.d = MemoryInline::FlatReadFloat32(r6);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r2 + -31024));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8003016C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80030224;
    }
}

loc_80030170:
{
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r2 + -31016));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_8003017C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80030224;
    }
}

loc_80030180:
{
    f1.d = (-(f1.d));
    f0.d = MemoryInline::FlatReadFloat32(r8);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r2 + -31008));
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, f5.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_4 = (r5 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_4));
    PpcSetPairedFprInline(f4, PPC_PsMadds0Inline(f4.d, PPC_PsFromScalarInline(f31.d), f5.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r6_psq_tmp_2 = (r6 + 8);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_2));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r10, f4.d);
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, f5.d));
    f1.d = MemoryInline::FlatReadFloat32((r10 + 4));
    PpcSetPairedFprInline(f4, PPC_PsMadds0Inline(f4.d, PPC_PsFromScalarInline(f31.d), f5.d));
    f2.d = PpcFmulsInline(f1.d, f1.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r10_psq_tmp_2 = (r10 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r10_psq_tmp_2, f4.d);
    f1.d = MemoryInline::FlatReadFloat32((r10 + 8));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800301D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8003021C;
    }
}

loc_800301D4:
{
    r0 = MemoryInline::FlatRead16((r4 + 44));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800301DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80030208;
    }
}

loc_800301E0:
{
    f0.d = MemoryInline::FlatReadFloat32(r9);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31032));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32(r9, f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r8);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32(r8, f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r10);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    MemoryInline::FlatWriteFloat32(r10, f0.d);
}

loc_80030208:
{
    r4 = r10;
    r5 = r7;
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
    r3_psq_tmp_6 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_6));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_7 = (r3 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_7));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_8 = (r3 + 24);
    PpcSetPairedFprInline(f9, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_8));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f8.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5, f6.d);
    PpcSetPairedFprInline(f11, PPC_PsMaddInline(f9.d, f1.d, f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_9 = (r3 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_9));
    PpcSetPairedFprInline(f12, PPC_PsSum0Inline(f11.d, f11.d, PPC_PsFromScalarInline(f12.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_10 = (r3 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_10));
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
    goto loc_80030230;
}

loc_8003021C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r2 + -31020));
    goto loc_80030230;
}

loc_80030224:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r2 + -31020));
    goto loc_80030230;
}

loc_8003022C:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31020));
}

loc_80030230:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 36));
    f31.d = leaf_stack_saved_f31_entry;
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007FF gpr_write=0x000000B3 gpr_return=0x00000010 fpr_read=0x80001F7F fpr_write=0x80001F7F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8002FCC0 func_8002FCC0 preserves=true fpr_mask=0x00000000
