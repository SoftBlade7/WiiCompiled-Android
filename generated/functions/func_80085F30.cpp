#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80085F30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r23_psq_tmp_0 = 0;
    uint32_t r23_psq_tmp_1 = 0;
    uint32_t r23_psq_tmp_2 = 0;
    uint32_t r23_psq_tmp_3 = 0;
    uint32_t r23_psq_tmp_4 = 0;
    uint32_t r24_psq_tmp_0 = 0;
    uint32_t r24_psq_tmp_1 = 0;
    uint32_t r24_psq_tmp_2 = 0;
    uint32_t r25_psq_tmp_0 = 0;
    uint32_t r25_psq_tmp_1 = 0;
    uint32_t r25_psq_tmp_2 = 0;
    uint32_t r25_psq_tmp_3 = 0;
    uint32_t r25_psq_tmp_4 = 0;
    uint32_t r26_psq_tmp_0 = 0;
    uint32_t r26_psq_tmp_1 = 0;
    uint32_t r26_psq_tmp_10 = 0;
    uint32_t r26_psq_tmp_2 = 0;
    uint32_t r26_psq_tmp_3 = 0;
    uint32_t r26_psq_tmp_4 = 0;
    uint32_t r26_psq_tmp_5 = 0;
    uint32_t r26_psq_tmp_6 = 0;
    uint32_t r26_psq_tmp_7 = 0;
    uint32_t r26_psq_tmp_8 = 0;
    uint32_t r26_psq_tmp_9 = 0;
    uint32_t r27_psq_tmp_0 = 0;
    uint32_t r27_psq_tmp_1 = 0;
    uint32_t r27_psq_tmp_2 = 0;
    uint32_t r28_psq_tmp_0 = 0;
    uint32_t r28_psq_tmp_1 = 0;
    uint32_t r28_psq_tmp_2 = 0;
    uint32_t r28_psq_tmp_3 = 0;
    uint32_t r28_psq_tmp_4 = 0;
    uint32_t r28_psq_tmp_5 = 0;
    uint32_t r29_psq_tmp_0 = 0;
    uint32_t r29_psq_tmp_1 = 0;
    uint32_t r29_psq_tmp_2 = 0;
    uint32_t r29_psq_tmp_3 = 0;
    uint32_t r29_psq_tmp_4 = 0;
    uint32_t r29_psq_tmp_5 = 0;
    uint32_t r29_psq_tmp_6 = 0;
    uint32_t r29_psq_tmp_7 = 0;
    uint32_t r29_psq_tmp_8 = 0;
    uint32_t r29_psq_tmp_9 = 0;
    uint32_t r30_psq_tmp_0 = 0;
    uint32_t r30_psq_tmp_1 = 0;
    uint32_t r30_psq_tmp_2 = 0;
    uint32_t r30_psq_tmp_3 = 0;
    uint32_t r30_psq_tmp_4 = 0;
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
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint32_t r3_psq_tmp_9 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_10 = 0;
    uint32_t r4_psq_tmp_11 = 0;
    uint32_t r4_psq_tmp_12 = 0;
    uint32_t r4_psq_tmp_13 = 0;
    uint32_t r4_psq_tmp_14 = 0;
    uint32_t r4_psq_tmp_15 = 0;
    uint32_t r4_psq_tmp_16 = 0;
    uint32_t r4_psq_tmp_17 = 0;
    uint32_t r4_psq_tmp_18 = 0;
    uint32_t r4_psq_tmp_19 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_20 = 0;
    uint32_t r4_psq_tmp_21 = 0;
    uint32_t r4_psq_tmp_22 = 0;
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
    uint32_t r5_psq_tmp_8 = 0;
    uint32_t r5_psq_tmp_9 = 0;
    uint32_t r6_psq_tmp_0 = 0;
    uint32_t r7_psq_tmp_0 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r23 = ctx->gpr[23];
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
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80085F30;

loc_80085F30:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -672), 0, 680u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -672), r1);
    r1 = (r1 + -672);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 676u, (r1 + 676), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 656u, (r1 + 656), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 664);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 640u, (r1 + 640), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 648);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 624u, (r1 + 624), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 632);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 608u, (r1 + 608), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 616);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 592u, (r1 + 592), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 600);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 576u, (r1 + 576), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 584);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    r11 = (r1 + 576);
    // inline leaf 0x80021590 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -4), r31);
    // end of inlined leaf 0x80021590
    f26.d = f1.d;
    r23 = r4;
    f27.d = f2.d;
    r31 = r3;
    f28.d = f3.d;
    r3 = r23;
    f29.d = f4.d;
    r4 = (r1 + 384);
    f30.d = f5.d;
    f31.d = f6.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80199FC8u>(ctx);
    r3 = ctx->gpr[3];
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
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    r3 = r23;
    r4 = r31;
    // inline leaf 0x80199D30 (13 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_0 = (r4 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_0, f1.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 16);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_1 = (r4 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1, f2.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 24);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_2 = (r4 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_2, f3.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 32);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_3 = (r4 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_3, f4.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 40);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_4 = (r4 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_4, f5.d);
    // end of inlined leaf 0x80199D30
    f6.d = static_cast<double>(PpcForceSingleValueInline(f31.d / f30.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28892));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 368), 0, 160u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r1 + 368), f0.d);
    r29 = (r1 + 368);
    r23 = (r1 + 432);
    r28 = (r1 + 468);
    f5.d = (-(f30.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r1 + 372), f0.d);
    f2.d = (-(f31.d));
    r3 = (r1 + 332);
    f4.d = PpcFmulsInline(f6.d, f28.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r1 + 376), f0.d);
    f3.d = PpcFmulsInline(f6.d, f26.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 64u, (r1 + 432), f28.d);
    f1.d = PpcFmulsInline(f6.d, f29.d);
    r4 = (r1 + 344);
    f0.d = PpcFmulsInline(f6.d, f27.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 68u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f26.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 68u, (r1 + 436), f26.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 72u, (r1 + 440), f5.d);
    }
    r30 = (r31 + 48);
    r5 = (r1 + 356);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f29.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f26.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 76u, (r1 + 444), f29.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 80u, (r1 + 448), f26.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 84u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f29.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 84u, (r1 + 452), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 88u, (r1 + 456), f29.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 92u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f27.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 92u, (r1 + 460), f27.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 96u, (r1 + 464), f5.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 100u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f28.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f27.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 100u, (r1 + 468), f28.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 104u, (r1 + 472), f27.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 108u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 108u, (r1 + 476), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 112u, (r1 + 480), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 116u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 116u, (r1 + 484), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 120u, (r1 + 488), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 124u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 124u, (r1 + 492), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 128u, (r1 + 496), f3.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 132u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 132u, (r1 + 500), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 136u, (r1 + 504), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 140u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 140u, (r1 + 508), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 144u, (r1 + 512), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 148u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 148u, (r1 + 516), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 152u, (r1 + 520), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 156u, (r1 + 524), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 112), f5.d);
    MemoryInline::FlatWriteFloat32((r31 + 116), f2.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r29));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r23));
    PpcSetPairedFprInline(f1, f3.d);
    mkw_gqr0 = ctx->gqr[0];
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r28));
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r23_psq_tmp_0 = (r23 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r23_psq_tmp_0));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_0 = (r29 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r29_psq_tmp_0));
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f0.d, f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f4.d);
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_0 = (r28 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r28_psq_tmp_0));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f0.d, f3.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_5 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_5, f4.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_5 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_5, f1.d);
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
    r4 = r30;
    r3 = (r1 + 356);
    // inline leaf 0x8019AC24 (17 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_6 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_6));
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
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f2.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_6 = (r4 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_6, f3.d);
    // end of inlined leaf 0x8019AC24
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r30_psq_tmp_0 = (r30 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_0));
    r25 = (r1 + 456);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_1 = (r29 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r29_psq_tmp_1));
    r26 = (r1 + 444);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r30));
    r3 = (r1 + 296);
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r29));
    r4 = (r1 + 308);
    r27 = (r31 + 64);
    r5 = (r1 + 320);
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f2.d, f1.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    f0.d = (-(PPC_PsToScalarInline(f0.d)));
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r29));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r25));
    PpcSetPairedFprInline(f1, f3.d);
    mkw_gqr0 = ctx->gqr[0];
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r26));
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r25_psq_tmp_0 = (r25 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r25_psq_tmp_0));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_2 = (r29 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r29_psq_tmp_2));
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f0.d, f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f4.d);
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_0 = (r26 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r26_psq_tmp_0));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f0.d, f3.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_7 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_7, f4.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_7 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_7, f1.d);
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
    r5_psq_tmp_1 = (r5 + 4);
    PPC_PsqStStackInline<0u, 0u>(ctx, r5_psq_tmp_1, f10.d);
    // end of inlined leaf 0x8019ACCC
    r4 = r27;
    r3 = (r1 + 320);
    // inline leaf 0x8019AC24 (17 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_8 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_8));
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
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f2.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_8 = (r4 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_8, f3.d);
    // end of inlined leaf 0x8019AC24
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r27_psq_tmp_0 = (r27 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r27_psq_tmp_0));
    r3 = (r1 + 260);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_3 = (r29 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r29_psq_tmp_3));
    r4 = (r1 + 272);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r27));
    r30 = (r31 + 80);
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r29));
    r5 = (r1 + 284);
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f2.d, f1.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    f0.d = (-(PPC_PsToScalarInline(f0.d)));
    MemoryInline::FlatWriteFloat32((r27 + 12), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r29));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r26));
    PpcSetPairedFprInline(f1, f3.d);
    mkw_gqr0 = ctx->gqr[0];
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r23));
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_1 = (r26 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r26_psq_tmp_1));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_4 = (r29 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r29_psq_tmp_4));
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f0.d, f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f4.d);
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r23_psq_tmp_1 = (r23 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r23_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f0.d, f3.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_9 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_9, f4.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_9 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_9, f1.d);
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
    r5_psq_tmp_2 = (r5 + 4);
    PPC_PsqStStackInline<0u, 0u>(ctx, r5_psq_tmp_2, f10.d);
    // end of inlined leaf 0x8019ACCC
    r4 = r30;
    r3 = (r1 + 284);
    // inline leaf 0x8019AC24 (17 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_10 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_10));
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
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f2.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_10 = (r4 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_10, f3.d);
    // end of inlined leaf 0x8019AC24
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r30_psq_tmp_1 = (r30 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_1));
    r3 = (r1 + 224);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_5 = (r29 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r29_psq_tmp_5));
    r4 = (r1 + 236);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r30));
    r26 = (r31 + 96);
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r29));
    r5 = (r1 + 248);
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f2.d, f1.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    f0.d = (-(PPC_PsToScalarInline(f0.d)));
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r29));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r28));
    PpcSetPairedFprInline(f1, f3.d);
    mkw_gqr0 = ctx->gqr[0];
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r25));
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_1 = (r28 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r28_psq_tmp_1));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_6 = (r29 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r29_psq_tmp_6));
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f0.d, f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f4.d);
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r25_psq_tmp_1 = (r25 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r25_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f0.d, f3.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_11 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_11, f4.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_11 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_11, f1.d);
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
    r5_psq_tmp_3 = (r5 + 4);
    PPC_PsqStStackInline<0u, 0u>(ctx, r5_psq_tmp_3, f10.d);
    // end of inlined leaf 0x8019ACCC
    r4 = r26;
    r3 = (r1 + 248);
    // inline leaf 0x8019AC24 (17 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_12 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_12));
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
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f2.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_12 = (r4 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_12, f3.d);
    // end of inlined leaf 0x8019AC24
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r26_psq_tmp_2 = (r26 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_2));
    r24 = r23;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_7 = (r29 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r29_psq_tmp_7));
    r25 = 0;
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r26));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r29));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f2.d, f1.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    f0.d = (-(PPC_PsToScalarInline(f0.d)));
    MemoryInline::FlatWriteFloat32((r26 + 12), f0.d);
}

loc_8008625C:
{
    r4 = r24;
    r5 = r23;
    r3 = (r1 + 384);
    // inline leaf 0x8019A91C (21 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_14 = (r4 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_14));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_14 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_14));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_15 = (r3 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_15));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_16 = (r3 + 24);
    PpcSetPairedFprInline(f9, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_16));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f8.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5, f6.d);
    PpcSetPairedFprInline(f11, PPC_PsMaddInline(f9.d, f1.d, f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_17 = (r3 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_17));
    PpcSetPairedFprInline(f12, PPC_PsSum0Inline(f11.d, f11.d, PPC_PsFromScalarInline(f12.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_18 = (r3 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_18));
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
    r25 = (r25 + 1);
    r24 = (r24 + 12);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(8));
}

loc_80086278:
{
    r23 = (r23 + 12);
    if (((cr & 0x80000000u) != 0)) {
        f6.d = PPC_PsToScalarInline(f6.d);
        f12.d = PPC_PsToScalarInline(f12.d);
        goto loc_8008625C;
    }
}

loc_80086280:
{
    r4 = (r1 + 368);
    r3 = (r1 + 384);
    r5 = r4;
    // inline leaf 0x8019A91C (21 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_15 = (r4 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r4_psq_tmp_15));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_19 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_19));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_20 = (r3 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_20));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_21 = (r3 + 24);
    PpcSetPairedFprInline(f9, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_21));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f8.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 0u>(ctx, r5, f6.d);
    PpcSetPairedFprInline(f11, PPC_PsMaddInline(f9.d, f1.d, f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_22 = (r3 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_22));
    PpcSetPairedFprInline(f12, PPC_PsSum0Inline(f11.d, f11.d, f12.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_23 = (r3 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_23));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_7 = (r5 + 4);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_7, f12.d);
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_8 = (r5 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_8, f6.d);
    // end of inlined leaf 0x8019A91C
    r3 = (r31 + 120);
    r4 = (r1 + 432);
    r5 = 8;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80085BD0u>(ctx);
    r0 = ctx->gpr[0];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r26 = (r1 + 368);
    r28 = (r1 + 432);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r26));
    r27 = (r1 + 468);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r28));
    r3 = (r1 + 188);
    PpcSetPairedFprInline(f1, f3.d);
    mkw_gqr0 = ctx->gqr[0];
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r27));
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_2 = (r28 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r28_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_3 = (r26 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r26_psq_tmp_3));
    r4 = (r1 + 200);
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r27_psq_tmp_1 = (r27 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r27_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f4.d);
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, f3.d));
    r25 = (r31 + 144);
    r5 = (r1 + 212);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f0.d, f3.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_24 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_24, f4.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_16 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_16, f1.d);
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
    r5_psq_tmp_9 = (r5 + 4);
    PPC_PsqStStackInline<0u, 0u>(ctx, r5_psq_tmp_9, f10.d);
    // end of inlined leaf 0x8019ACCC
    r4 = r25;
    r3 = (r1 + 212);
    // inline leaf 0x8019AC24 (17 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_25 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_25));
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
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f2.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_17 = (r4 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_17, f3.d);
    // end of inlined leaf 0x8019AC24
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r25_psq_tmp_2 = (r25 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r25_psq_tmp_2));
    r24 = (r1 + 456);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r26_psq_tmp_4 = (r26 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r26_psq_tmp_4));
    r30 = (r1 + 444);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r25));
    r3 = (r1 + 152);
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r26));
    r4 = (r1 + 164);
    r29 = (r31 + 160);
    r5 = (r1 + 176);
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f2.d, f1.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    f0.d = (-(PPC_PsToScalarInline(f0.d)));
    MemoryInline::FlatWriteFloat32((r25 + 12), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r26));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r24));
    PpcSetPairedFprInline(f1, f3.d);
    mkw_gqr0 = ctx->gqr[0];
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r30));
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r24_psq_tmp_0 = (r24 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r24_psq_tmp_0));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_5 = (r26 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r26_psq_tmp_5));
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f0.d, f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f4.d);
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r30_psq_tmp_2 = (r30 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r30_psq_tmp_2));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f0.d, f3.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_26 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_26, f4.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_18 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_18, f1.d);
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
    r4 = r29;
    r3 = (r1 + 176);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    InvokeDirectCpu<0x8019AC24u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_8 = (r29 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_8));
    r3 = (r1 + 116);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r26_psq_tmp_6 = (r26 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r26_psq_tmp_6));
    r4 = (r1 + 128);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r29));
    r25 = (r31 + 176);
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r26));
    r5 = (r1 + 140);
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f2.d, f1.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    f0.d = (-(PPC_PsToScalarInline(f0.d)));
    MemoryInline::FlatWriteFloat32((r29 + 12), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r28));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r24));
    PpcSetPairedFprInline(f1, f3.d);
    mkw_gqr0 = ctx->gqr[0];
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r30));
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r24_psq_tmp_1 = (r24 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r24_psq_tmp_1));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_3 = (r28 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r28_psq_tmp_3));
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f0.d, f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f4.d);
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r30_psq_tmp_3 = (r30 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r30_psq_tmp_3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f0.d, f3.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_27 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_27, f4.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_19 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_19, f1.d);
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
    r4 = r25;
    r3 = (r1 + 140);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    InvokeDirectCpu<0x8019AC24u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r25_psq_tmp_3 = (r25 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r25_psq_tmp_3));
    r23 = (r1 + 480);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_4 = (r28 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r28_psq_tmp_4));
    r7 = (r1 + 504);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r25));
    r6 = (r1 + 516);
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r28));
    r3 = (r1 + 80);
    r4 = (r1 + 92);
    r29 = (r31 + 192);
    r5 = (r1 + 104);
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f2.d, f1.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    f0.d = (-(PPC_PsToScalarInline(f0.d)));
    MemoryInline::FlatWriteFloat32((r25 + 12), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r23));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r7));
    PpcSetPairedFprInline(f1, f3.d);
    mkw_gqr0 = ctx->gqr[0];
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r6));
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r7_psq_tmp_0 = (r7 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r7_psq_tmp_0));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r23_psq_tmp_2 = (r23 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r23_psq_tmp_2));
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f0.d, f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f4.d);
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r6_psq_tmp_0 = (r6 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r6_psq_tmp_0));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f0.d, f3.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_28 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_28, f4.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_20 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_20, f1.d);
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
    r4 = r29;
    r3 = (r1 + 104);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    InvokeDirectCpu<0x8019AC24u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_9 = (r29 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_9));
    r3 = (r1 + 44);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r23_psq_tmp_3 = (r23 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r23_psq_tmp_3));
    r4 = (r1 + 56);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r29));
    r5 = (r1 + 68);
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r23));
    r23 = (r31 + 208);
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f2.d, f1.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    f0.d = (-(PPC_PsToScalarInline(f0.d)));
    MemoryInline::FlatWriteFloat32((r29 + 12), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r26));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r30));
    PpcSetPairedFprInline(f1, f3.d);
    mkw_gqr0 = ctx->gqr[0];
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r28));
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r30_psq_tmp_4 = (r30 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r30_psq_tmp_4));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_7 = (r26 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r26_psq_tmp_7));
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f0.d, f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f4.d);
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_5 = (r28 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r28_psq_tmp_5));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f0.d, f3.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_29 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_29, f4.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_21 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_21, f1.d);
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
    r4 = r23;
    r3 = (r1 + 68);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    InvokeDirectCpu<0x8019AC24u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r23_psq_tmp_4 = (r23 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r23_psq_tmp_4));
    r3 = (r1 + 8);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r26_psq_tmp_8 = (r26 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r26_psq_tmp_8));
    r4 = (r1 + 20);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r23));
    r25 = (r31 + 224);
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r26));
    r5 = (r1 + 32);
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f2.d, f1.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    f0.d = (-(PPC_PsToScalarInline(f0.d)));
    MemoryInline::FlatWriteFloat32((r23 + 12), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r26));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r27));
    PpcSetPairedFprInline(f1, f3.d);
    mkw_gqr0 = ctx->gqr[0];
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r24));
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r27_psq_tmp_2 = (r27 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r27_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_9 = (r26 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<1u, 0u>(ctx, r26_psq_tmp_9));
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f0.d, f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f4.d);
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r24_psq_tmp_2 = (r24 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r24_psq_tmp_2));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f0.d, f3.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_30 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_30, f4.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_22 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_22, f1.d);
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
    r4 = r25;
    r3 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    InvokeDirectCpu<0x8019AC24u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r25_psq_tmp_4 = (r25 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r25_psq_tmp_4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r26_psq_tmp_10 = (r26 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r26_psq_tmp_10));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r25));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r26));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f2.d, f1.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    f0.d = (-(PPC_PsToScalarInline(f0.d)));
    MemoryInline::FlatWriteFloat32((r25 + 12), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 656));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 640));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 624));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::FlatReadFloat64((r1 + 608));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::FlatReadFloat64((r1 + 592));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::FlatReadFloat64((r1 + 576));
    r11 = (r1 + 576);
    {
        uint8_t* const guest_thunk_stack = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
        r23 = MemoryInline::ReadResolved32(guest_thunk_stack, 0u, (r11 + -36));
        r24 = MemoryInline::ReadResolved32(guest_thunk_stack, 4u, (r11 + -32));
        r25 = MemoryInline::ReadResolved32(guest_thunk_stack, 8u, (r11 + -28));
        r26 = MemoryInline::ReadResolved32(guest_thunk_stack, 12u, (r11 + -24));
        r27 = MemoryInline::ReadResolved32(guest_thunk_stack, 16u, (r11 + -20));
        r28 = MemoryInline::ReadResolved32(guest_thunk_stack, 20u, (r11 + -16));
        r29 = MemoryInline::ReadResolved32(guest_thunk_stack, 24u, (r11 + -12));
        r30 = MemoryInline::ReadResolved32(guest_thunk_stack, 28u, (r11 + -8));
        r31 = MemoryInline::ReadResolved32(guest_thunk_stack, 32u, (r11 + -4));
    }
    r0 = MemoryInline::FlatRead32((r1 + 676));
    ctx->lr = r0;
    r1 = (r1 + 672);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[23] = r23;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80085F30 func_80085F30 preserves=false fpr_mask=0xFC000000
