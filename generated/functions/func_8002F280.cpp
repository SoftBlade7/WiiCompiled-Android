#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8002F280(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r10_psq_tmp_0 = 0;
    uint32_t r10_psq_tmp_1 = 0;
    uint32_t r10_psq_tmp_2 = 0;
    uint32_t r10_psq_tmp_3 = 0;
    uint32_t r10_psq_tmp_4 = 0;
    uint32_t r10_psq_tmp_5 = 0;
    uint32_t r10_psq_tmp_6 = 0;
    uint32_t r10_psq_tmp_7 = 0;
    uint32_t r1_psq_tmp_0 = 0;
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
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
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

    goto loc_8002F280;

loc_8002F280:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r0 = MemoryInline::FlatRead8((r4 + 42));
    r7 = MemoryInline::FlatRead32((r1 + 40));
}

loc_8002F2A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002F2B8;
    }
}

loc_8002F2A4:
{
}

loc_8002F2A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8002F424;
    }
}

loc_8002F2AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8002F2B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002F590;
    }
}

loc_8002F2B4:
{
    goto loc_8002F6FC;
}

loc_8002F2B8:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 4));
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -31032), 0, 20u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -31016));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8002F2C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002F2E4;
    }
}

loc_8002F2CC:
{
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8002F2D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002F2E4;
    }
}

loc_8002F2DC:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -31020));
    goto loc_8002F700;
}

loc_8002F2E4:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -31024));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8002F2F0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002F380;
    }
}

loc_8002F2F4:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -31016));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8002F300:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002F380;
    }
}

loc_8002F304:
{
    f1.d = (-(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r8 + 4));
    r0 = MemoryInline::FlatRead16((r4 + 44));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8002F320:
{
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f1.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_11 = (r5 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_11));
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f31.d), f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r6_psq_tmp_5 = (r6 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_5));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r10, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f1.d, f3.d));
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f31.d), f3.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r10_psq_tmp_5 = (r10 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r10_psq_tmp_5, f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002F36C;
    }
}

loc_8002F344:
{
    f0.d = MemoryInline::FlatReadFloat32((r9 + 4));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -31032));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r9 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r8 + 4));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r8 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r10 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32((r10 + 4), f0.d);
}

loc_8002F36C:
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
    r5_psq_tmp_12 = (r5 + 4);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_12, f12.d);
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_13 = (r5 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_13, f6.d);
    // end of inlined leaf 0x8019A91C
    f1.d = f31.d;
    goto loc_8002F700;
}

loc_8002F380:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -31024));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8002F38C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002F41C;
    }
}

loc_8002F390:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -31016));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8002F39C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002F41C;
    }
}

loc_8002F3A0:
{
    f1.d = (-(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r8 + 4));
    r0 = MemoryInline::FlatRead16((r4 + 44));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8002F3BC:
{
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f1.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_14 = (r5 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_14));
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f31.d), f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r6_psq_tmp_6 = (r6 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_6));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r10, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f1.d, f3.d));
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f31.d), f3.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r10_psq_tmp_6 = (r10 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r10_psq_tmp_6, f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002F408;
    }
}

loc_8002F3E0:
{
    f0.d = MemoryInline::FlatReadFloat32((r9 + 4));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -31032));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r9 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r8 + 4));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r8 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r10 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteFloat32((r10 + 4), f0.d);
}

loc_8002F408:
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
    r5_psq_tmp_15 = (r5 + 4);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_15, f12.d);
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_16 = (r5 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_16, f6.d);
    // end of inlined leaf 0x8019A91C
    f1.d = f31.d;
    goto loc_8002F700;
}

loc_8002F41C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -31020));
    goto loc_8002F700;
}

loc_8002F424:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 8));
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -31032), 0, 20u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31016));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8002F434:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002F450;
    }
}

loc_8002F438:
{
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8002F444:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002F450;
    }
}

loc_8002F448:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31020));
    goto loc_8002F700;
}

loc_8002F450:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -31024));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8002F45C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002F4EC;
    }
}

loc_8002F460:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31016));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8002F46C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002F4EC;
    }
}

loc_8002F470:
{
    f1.d = (-(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r8 + 8));
    r0 = MemoryInline::FlatRead16((r4 + 44));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8002F48C:
{
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f1.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_5 = (r5 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_5));
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f31.d), f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r6_psq_tmp_3 = (r6 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r10, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f1.d, f3.d));
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f31.d), f3.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r10_psq_tmp_3 = (r10 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r10_psq_tmp_3, f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002F4D8;
    }
}

loc_8002F4B0:
{
    f0.d = MemoryInline::FlatReadFloat32((r9 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -31032));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r9 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r8 + 8));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r8 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r10 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32((r10 + 8), f0.d);
}

loc_8002F4D8:
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
    r5_psq_tmp_6 = (r5 + 4);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_6, f12.d);
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_7 = (r5 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_7, f6.d);
    // end of inlined leaf 0x8019A91C
    f1.d = f31.d;
    goto loc_8002F700;
}

loc_8002F4EC:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -31024));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8002F4F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002F588;
    }
}

loc_8002F4FC:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -31016));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8002F508:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002F588;
    }
}

loc_8002F50C:
{
    f1.d = (-(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r8 + 8));
    r0 = MemoryInline::FlatRead16((r4 + 44));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8002F528:
{
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f1.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_8 = (r5 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_8));
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f31.d), f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r6_psq_tmp_4 = (r6 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_4));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r10, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f1.d, f3.d));
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f31.d), f3.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r10_psq_tmp_4 = (r10 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r10_psq_tmp_4, f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002F574;
    }
}

loc_8002F54C:
{
    f0.d = MemoryInline::FlatReadFloat32((r9 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -31032));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r9 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r8 + 8));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r8 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r10 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteFloat32((r10 + 8), f0.d);
}

loc_8002F574:
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
    r5_psq_tmp_9 = (r5 + 4);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_9, f12.d);
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_10 = (r5 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_10, f6.d);
    // end of inlined leaf 0x8019A91C
    f1.d = f31.d;
    goto loc_8002F700;
}

loc_8002F588:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r2 + -31020));
    goto loc_8002F700;
}

loc_8002F590:
{
    f1.d = MemoryInline::FlatReadFloat32(r6);
    guest_range_2 = MemoryInline::ResolveRangeHost((r2 + -31032), 0, 20u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r2 + -31016));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8002F5A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002F5BC;
    }
}

loc_8002F5A4:
{
    f1.d = MemoryInline::FlatReadFloat32(r5);
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8002F5B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002F5BC;
    }
}

loc_8002F5B4:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r2 + -31020));
    goto loc_8002F700;
}

loc_8002F5BC:
{
    f1.d = MemoryInline::FlatReadFloat32(r6);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r2 + -31024));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8002F5C8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002F658;
    }
}

loc_8002F5CC:
{
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r2 + -31016));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8002F5D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002F658;
    }
}

loc_8002F5DC:
{
    f1.d = (-(f1.d));
    f0.d = MemoryInline::FlatReadFloat32(r8);
    r0 = MemoryInline::FlatRead16((r4 + 44));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8002F5F8:
{
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f1.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_1 = (r5 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_1));
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f31.d), f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r6_psq_tmp_1 = (r6 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r10, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f1.d, f3.d));
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f31.d), f3.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r10_psq_tmp_1 = (r10 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r10_psq_tmp_1, f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002F644;
    }
}

loc_8002F61C:
{
    f0.d = MemoryInline::FlatReadFloat32(r9);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31032));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32(r9, f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r8);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32(r8, f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r10);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32(r10, f0.d);
}

loc_8002F644:
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
    goto loc_8002F700;
}

loc_8002F658:
{
    f1.d = MemoryInline::FlatReadFloat32(r6);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r2 + -31024));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8002F664:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002F6F4;
    }
}

loc_8002F668:
{
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r2 + -31016));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8002F674:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002F6F4;
    }
}

loc_8002F678:
{
    f1.d = (-(f1.d));
    f0.d = MemoryInline::FlatReadFloat32(r8);
    r0 = MemoryInline::FlatRead16((r4 + 44));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8002F694:
{
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f1.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_4 = (r5 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_4));
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f31.d), f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r6_psq_tmp_2 = (r6 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_2));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r10, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f1.d, f3.d));
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f31.d), f3.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r10_psq_tmp_2 = (r10 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r10_psq_tmp_2, f0.d);
    if (((cr & 0x20000000u) != 0)) {
        f0.d = PPC_PsToScalarInline(f0.d);
        goto loc_8002F6E0;
    }
}

loc_8002F6B8:
{
    f0.d = MemoryInline::FlatReadFloat32(r9);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31032));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32(r9, f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r8);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32(r8, f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r10);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteFloat32(r10, f0.d);
}

loc_8002F6E0:
{
    r4 = r10;
    r5 = r7;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    InvokeDirectCpu<0x8019A91Cu>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f1.d = f31.d;
    goto loc_8002F700;
}

loc_8002F6F4:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r2 + -31020));
    goto loc_8002F700;
}

loc_8002F6FC:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31020));
}

loc_8002F700:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 36));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 16));
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
// RECOMP_REGISTRATION base 0x8002F280 func_8002F280 preserves=false fpr_mask=0x80000000
