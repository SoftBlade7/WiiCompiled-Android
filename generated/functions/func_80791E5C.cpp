#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80791E5C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r28_psq_tmp_0 = 0;
    uint32_t r28_psq_tmp_1 = 0;
    uint32_t r28_psq_tmp_10 = 0;
    uint32_t r28_psq_tmp_11 = 0;
    uint32_t r28_psq_tmp_12 = 0;
    uint32_t r28_psq_tmp_13 = 0;
    uint32_t r28_psq_tmp_14 = 0;
    uint32_t r28_psq_tmp_15 = 0;
    uint32_t r28_psq_tmp_16 = 0;
    uint32_t r28_psq_tmp_17 = 0;
    uint32_t r28_psq_tmp_18 = 0;
    uint32_t r28_psq_tmp_2 = 0;
    uint32_t r28_psq_tmp_3 = 0;
    uint32_t r28_psq_tmp_4 = 0;
    uint32_t r28_psq_tmp_5 = 0;
    uint32_t r28_psq_tmp_6 = 0;
    uint32_t r28_psq_tmp_7 = 0;
    uint32_t r28_psq_tmp_8 = 0;
    uint32_t r28_psq_tmp_9 = 0;
    uint32_t r30_psq_tmp_0 = 0;
    uint32_t r30_psq_tmp_1 = 0;
    uint32_t r30_psq_tmp_2 = 0;
    uint32_t r30_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80791E5C;

loc_80791E5C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = 0x808A0000u;
    r29 = (r29 + 19672);
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    r28 = r3;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r30 = r3;
    r3 = r28;
    // inline leaf 0x807BD78C (10 guest instruction(s))
    r4 = MemoryInline::FlatRead32(r3);
    r3 = 4259840;
    r0 = (r3 + -32767);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x807BD78C
}

loc_80791E98:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80791EDC;
    }
}

loc_80791E9C:
{
    r3 = r28;
    r4 = (r1 + 8);
    // inline leaf 0x80590C6C (10 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 160));
    MemoryInline::FlatWriteRamFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 176));
    MemoryInline::FlatWriteRamFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 192));
    MemoryInline::FlatWriteRamFloat32((r4 + 8), f0.d);
    // end of inlined leaf 0x80590C6C
    r3 = (r1 + 8);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_0 = (r28 + 100);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_0));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 16));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f1.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f0.d), f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_1 = (r28 + 108);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_2 = (r28 + 100);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_2, f2.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_0));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f1.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f0.d), f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_3 = (r28 + 108);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_3, f2.d);
    goto loc_80791F08;
}

loc_80791EDC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_4 = (r28 + 100);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r30_psq_tmp_1 = (r30 + 56);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_1));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 16));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f1.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f0.d), f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_5 = (r28 + 108);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_5));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_6 = (r28 + 100);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_6, f2.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r30_psq_tmp_2 = (r30 + 64);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_2));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f2.d, f1.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, PPC_PsFromScalarInline(f0.d), f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_7 = (r28 + 108);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_7, f2.d);
}

loc_80791F08:
{
    r3 = r28;
    r4 = (r28 + 112);
    // inline leaf 0x80590C94 (10 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 164));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 180));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 196));
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    // end of inlined leaf 0x80590C94
    r3 = (r28 + 88);
    ctx->lr = 0x80791F1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    InvokeDirectCpu<0x807912E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
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
    f2.d = MemoryInline::FlatReadFloat32((r28 + 124));
    r3 = r28;
    f1.d = MemoryInline::FlatReadFloat32((r28 + 128));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 132));
    MemoryInline::FlatWriteFloat32((r28 + 156), f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 160), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 164), f0.d);
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    f0.d = MemoryInline::FlatReadFloat32(r3);
    MemoryInline::FlatWriteFloat32((r28 + 124), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r28 + 128), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r3 = r28;
    MemoryInline::FlatWriteFloat32((r28 + 132), f0.d);
    // inline leaf 0x80590264 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = (r3 + 156);
    // end of inlined leaf 0x80590264
    r4 = MemoryInline::FlatRead32(r28);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & 536870912);
}

loc_80791F6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80791FB0;
    }
}

loc_80791F70:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 196));
    f4.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f3.d = PpcFmulsInline(f0.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r28 + 192));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 200));
    f4.d = PpcFmulsInline(f2.d, f4.d);
    f2.d = MemoryInline::FlatReadFloat32((r28 + 204));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 16));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 204), f0.d);
    goto loc_80791FC0;
}

loc_80791FB0:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 204));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 20));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 204), f0.d);
}

loc_80791FC0:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 224));
    r3 = r28;
    f0.d = MemoryInline::FlatReadFloat32((r28 + 184));
    f4.d = MemoryInline::FlatReadFloat32((r28 + 128));
    f6.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r28 + 204));
    f2.d = MemoryInline::FlatReadFloat32((r28 + 112));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 116));
    f4.d = PpcFmulsInline(f2.d, f6.d);
    f2.d = PpcFmulsInline(f1.d, f6.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 120));
    f3.d = MemoryInline::FlatReadFloat32((r28 + 124));
    f1.d = PpcFmulsInline(f0.d, f6.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 132));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r28 + 124), f3.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_9 = (r28 + 156);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_9));
    MemoryInline::FlatWriteFloat32((r28 + 128), f2.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_10 = (r28 + 124);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_10));
    MemoryInline::FlatWriteFloat32((r28 + 132), f0.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_11 = (r28 + 164);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_11));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_12 = (r28 + 132);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_12));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_13 = (r28 + 156);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_13, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_14 = (r28 + 164);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_14, f0.d);
    // inline leaf 0x80590D08 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 212);
    // end of inlined leaf 0x80590D08
    f0.d = MemoryInline::FlatReadFloat32(r3);
    MemoryInline::FlatWriteFloat32((r28 + 136), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r28 + 140), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r3 = r28;
    MemoryInline::FlatWriteFloat32((r28 + 144), f0.d);
    // inline leaf 0x80590CF8 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    // end of inlined leaf 0x80590CF8
    MemoryInline::FlatWriteFloat32((r28 + 148), f1.d);
    r3 = r28;
    // inline leaf 0x80590DC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 176));
    // end of inlined leaf 0x80590DC0
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_15 = (r28 + 116);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_15));
    r31 = 0;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_16 = (r28 + 140);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_16));
    MemoryInline::FlatWriteFloat32((r28 + 152), f1.d);
    PpcSetPairedFprInline(f3, PPC_PsMulInline(f3.d, f2.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_17 = (r28 + 112);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_17));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_18 = (r28 + 136);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_18));
    f4.d = MemoryInline::FlatReadFloat32((r30 + 556));
    PpcSetPairedFprInline(f2, PPC_PsMaddInline(f0.d, f1.d, f3.d));
    f0.d = MemoryInline::FlatReadFloat32(r29);
    MemoryInline::FlatWriteFloat32((r28 + 168), f4.d);
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f2.d, f3.d, f3.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_80792098:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807920AC;
    }
}

loc_8079209C:
{
    r3 = r28;
    // inline leaf 0x807BD78C (10 guest instruction(s))
    r4 = MemoryInline::FlatRead32(r3);
    r3 = 4259840;
    r0 = (r3 + -32767);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x807BD78C
}

loc_807920A8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807920B0;
    }
}

loc_807920AC:
{
    r31 = 1;
}

loc_807920B0:
{
    MemoryInline::FlatWrite8((r28 + 172), static_cast<uint8_t>(r31));
    r3 = r28;
    // inline leaf 0x805914BC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r3 = (r3 + 356);
    // end of inlined leaf 0x805914BC
    f1.d = MemoryInline::FlatReadFloat32((r28 + 176));
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32(r3);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807920CC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807920F0;
    }
}

loc_807920D0:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 180));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807920DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807920F0;
    }
}

loc_807920E0:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 184));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807920EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807920F4;
    }
}

loc_807920F0:
{
    r0 = 1;
}

loc_807920F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807920F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079211C;
    }
}

loc_807920FC:
{
    f0.d = MemoryInline::FlatReadFloat32(r3);
    MemoryInline::FlatWriteFloat32((r28 + 176), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r28 + 180), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r3 = 1;
    MemoryInline::FlatWriteFloat32((r28 + 184), f0.d);
    goto loc_80792120;
}

loc_8079211C:
{
    r3 = 0;
}

loc_80792120:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000001F gpr_write=0xF000003B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x000007FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80791E5C func_80791E5C preserves=true fpr_mask=0x00000000
