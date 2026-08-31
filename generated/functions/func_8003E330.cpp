#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8003E330(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r14_psq_tmp_0 = 0;
    uint32_t r14_psq_tmp_1 = 0;
    uint32_t r14_psq_tmp_2 = 0;
    uint32_t r14_psq_tmp_3 = 0;
    uint32_t r18_psq_tmp_0 = 0;
    uint32_t r18_psq_tmp_1 = 0;
    uint32_t r18_psq_tmp_2 = 0;
    uint32_t r18_psq_tmp_3 = 0;
    uint32_t r18_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_10 = 0;
    uint32_t r1_psq_tmp_11 = 0;
    uint32_t r1_psq_tmp_12 = 0;
    uint32_t r1_psq_tmp_13 = 0;
    uint32_t r1_psq_tmp_14 = 0;
    uint32_t r1_psq_tmp_15 = 0;
    uint32_t r1_psq_tmp_16 = 0;
    uint32_t r1_psq_tmp_17 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint32_t r1_psq_tmp_8 = 0;
    uint32_t r1_psq_tmp_9 = 0;
    uint32_t r21_rot_0 = 0;
    uint32_t r23_psq_tmp_0 = 0;
    uint32_t r23_psq_tmp_1 = 0;
    uint32_t r23_psq_tmp_2 = 0;
    uint32_t r23_psq_tmp_3 = 0;
    uint32_t r23_psq_tmp_4 = 0;
    uint32_t r23_psq_tmp_5 = 0;
    uint32_t r23_psq_tmp_6 = 0;
    uint32_t r23_psq_tmp_7 = 0;
    uint32_t r23_psq_tmp_8 = 0;
    uint32_t r23_psq_tmp_9 = 0;
    uint32_t r24_psq_tmp_0 = 0;
    uint32_t r24_psq_tmp_1 = 0;
    uint32_t r24_psq_tmp_2 = 0;
    uint32_t r24_psq_tmp_3 = 0;
    uint32_t r24_psq_tmp_4 = 0;
    uint32_t r24_psq_tmp_5 = 0;
    uint32_t r24_psq_tmp_6 = 0;
    uint32_t r25_psq_tmp_0 = 0;
    uint32_t r25_psq_tmp_1 = 0;
    uint32_t r25_psq_tmp_2 = 0;
    uint32_t r25_psq_tmp_3 = 0;
    uint32_t r25_psq_tmp_4 = 0;
    uint32_t r26_psq_tmp_0 = 0;
    uint32_t r26_psq_tmp_1 = 0;
    uint32_t r26_psq_tmp_2 = 0;
    uint32_t r26_psq_tmp_3 = 0;
    uint32_t r26_psq_tmp_4 = 0;
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
    uint32_t r30_psq_tmp_4 = 0;
    uint32_t r30_psq_tmp_5 = 0;
    uint32_t r30_psq_tmp_6 = 0;
    uint32_t r30_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_10 = 0;
    uint32_t r3_psq_tmp_11 = 0;
    uint32_t r3_psq_tmp_12 = 0;
    uint32_t r3_psq_tmp_13 = 0;
    uint32_t r3_psq_tmp_14 = 0;
    uint32_t r3_psq_tmp_15 = 0;
    uint32_t r3_psq_tmp_16 = 0;
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
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_7 = 0;
    uint32_t r4_psq_tmp_8 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
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
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
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
    PPC_FPR f13 = ctx->fpr[13];
    PPC_FPR f14 = ctx->fpr[14];
    PPC_FPR f15 = ctx->fpr[15];
    PPC_FPR f16 = ctx->fpr[16];
    PPC_FPR f17 = ctx->fpr[17];
    PPC_FPR f18 = ctx->fpr[18];
    PPC_FPR f19 = ctx->fpr[19];
    PPC_FPR f20 = ctx->fpr[20];
    PPC_FPR f21 = ctx->fpr[21];
    PPC_FPR f22 = ctx->fpr[22];
    PPC_FPR f23 = ctx->fpr[23];
    PPC_FPR f24 = ctx->fpr[24];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8003E330;

loc_8003E330:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -752), 0, 760u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -752), r1);
    r1 = (r1 + -752);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 756u, (r1 + 756), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 736u, (r1 + 736), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 744);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 720u, (r1 + 720), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 728);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 704u, (r1 + 704), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 712);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 688u, (r1 + 688), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 696);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 672u, (r1 + 672), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 680);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 656u, (r1 + 656), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 664);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 640u, (r1 + 640), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 648);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 624u, (r1 + 624), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 632);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 608u, (r1 + 608), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 616);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 592u, (r1 + 592), f22.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_9 = (r1 + 600);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_9, PPC_PsFromScalarInline(f22.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 576u, (r1 + 576), f21.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_10 = (r1 + 584);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_10, PPC_PsFromScalarInline(f21.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 560u, (r1 + 560), f20.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_11 = (r1 + 568);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_11, PPC_PsFromScalarInline(f20.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 544u, (r1 + 544), f19.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_12 = (r1 + 552);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_12, PPC_PsFromScalarInline(f19.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 528u, (r1 + 528), f18.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_13 = (r1 + 536);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_13, PPC_PsFromScalarInline(f18.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 512u, (r1 + 512), f17.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_14 = (r1 + 520);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_14, PPC_PsFromScalarInline(f17.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 496u, (r1 + 496), f16.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_15 = (r1 + 504);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_15, PPC_PsFromScalarInline(f16.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 480u, (r1 + 480), f15.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_16 = (r1 + 488);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_16, PPC_PsFromScalarInline(f15.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 464u, (r1 + 464), f14.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_17 = (r1 + 472);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_17, PPC_PsFromScalarInline(f14.d));
    r11 = (r1 + 464);
    // inline leaf 0x8002156C (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -72), r14);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -68), r15);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -64), r16);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -60), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002156C
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 140u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r7 = 1127219200;
    r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
    r15 = r3;
    MemoryInline::WriteResolved32(guest_range_3, 276u, (r1 + 276), r0);
    r16 = r4;
    f13.d = MemoryInline::FlatReadFloat32((r2 + -30216));
    r17 = r5;
    MemoryInline::WriteResolved32(guest_range_3, 272u, (r1 + 272), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r4 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 280u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 284u, (r1 + 284), r0);
        MemoryInline::WriteResolved32(guest_range_3, 280u, (r1 + 280), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r4 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r4 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 288u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 292u, (r1 + 292), r0);
        MemoryInline::WriteResolved32(guest_range_3, 288u, (r1 + 288), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r4 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r4 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 296u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 300u, (r1 + 300), r0);
        MemoryInline::WriteResolved32(guest_range_3, 296u, (r1 + 296), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r4 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r4 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 304u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 308u, (r1 + 308), r0);
        MemoryInline::WriteResolved32(guest_range_3, 304u, (r1 + 304), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r4 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r4 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 312u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 316u, (r1 + 316), r0);
        MemoryInline::WriteResolved32(guest_range_3, 312u, (r1 + 312), r3);
    }
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 136u, (r4 + 136));
    MemoryInline::WriteResolved32(guest_range_3, 320u, (r1 + 320), r7);
    SetCRFloatResident(cr, 0, f13.d, f7.d);
}

loc_8003E454:
{
    MemoryInline::FlatWriteRam32((r1 + 328), r7);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003E56C;
    }
}

loc_8003E45C:
{
    r3 = (r1 + 144);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801730CCu>(ctx);
    f7.d = MemoryInline::FlatReadFloat32((r1 + 144));
    f7.d = PPC_Fctiwz(f7.d);
    fctiwzword0 = PPC_FprLowWordInline(f7.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 336), f7.d);
    r0 = fctiwzword0;
}

loc_8003E478:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8003E490;
    }
}

loc_8003E47C:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 336), f7.d);
    r0 = MemoryInline::FlatRead32((r1 + 340));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8003E488:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003E55C;
    }
}

loc_8003E48C:
{
    goto loc_8003E56C;
}

loc_8003E490:
{
    r3 = r16;
    r4 = (r16 + 140);
    r5 = (r1 + 132);
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
    r3 = (r1 + 132);
    r4 = r3;
    // inline leaf 0x80036F00 (25 guest instruction(s))
}

loc_inl2_0x80036F00:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30776));
    PpcSetPairedFprInline(f6, PPC_PsMulInline(f3.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_2 = (r4 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<1u, 0u>(ctx, r4_psq_tmp_2));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30772));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f4.d, f4.d, f6.d));
    PpcSetPairedFprInline(f5, PPC_PsSum0Inline(f5.d, f6.d, f4.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f5.d), f2.d);
}

loc_inl2_0x80036F24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_0x80036F54;
    }
}

loc_inl2_0x80036F28:
{
    f2.d = PPC_Frsqrte(PPC_PsToScalarInline(f5.d));
    f6.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f6.d = PPC_Fnmsubs(f6.d, PPC_PsToScalarInline(f5.d), f1.d);
    f2.d = PpcFmulsInline(f6.d, f0.d);
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f2.d)));
    PpcSetPairedFprInline(f4, PPC_PsMuls0Inline(f4.d, PPC_PsFromScalarInline(f2.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f3.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_6 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_6, f4.d);
    r3 = 1;
    goto loc_inl2_cont_80036F00;
}

loc_inl2_0x80036F54:
{
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f3.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_7 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_7, f4.d);
    r3 = 0;
    f6.d = PPC_PsToScalarInline(f6.d);
}

loc_inl2_cont_80036F00:
{
    // end of inlined leaf 0x80036F00
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8003E4B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003E548;
    }
}

loc_8003E4B4:
{
    f13.d = MemoryInline::FlatReadFloat32((r1 + 140));
    f7.d = MemoryInline::FlatReadFloat32((r2 + -30216));
    SetCRFloatResident(cr, 0, f13.d, f7.d);
}

loc_8003E4C0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003E508;
    }
}

loc_8003E4C8:
{
    f15.d = MemoryInline::FlatReadFloat32((r16 + 136));
    f16.d = MemoryInline::FlatReadFloat32((r1 + 132));
    f14.d = MemoryInline::FlatReadFloat32((r1 + 136));
    f13.d = PpcFmulsInline(f13.d, f15.d);
    f17.d = PpcFmulsInline(f16.d, f15.d);
    f7.d = MemoryInline::FlatReadFloat32((r1 + 316));
    f15.d = PpcFmulsInline(f14.d, f15.d);
    f16.d = MemoryInline::FlatReadFloat32((r1 + 284));
    f14.d = MemoryInline::FlatReadFloat32((r1 + 300));
    f16.d = static_cast<double>(PpcForceSingleValueInline(f16.d + f17.d));
    f14.d = static_cast<double>(PpcForceSingleValueInline(f14.d + f15.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f13.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 284), f16.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 300), f14.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 316), f7.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
    f8.d = PPC_PsToScalarInline(f8.d);
    f9.d = PPC_PsToScalarInline(f9.d);
    f10.d = PPC_PsToScalarInline(f10.d);
    f11.d = PPC_PsToScalarInline(f11.d);
    f12.d = PPC_PsToScalarInline(f12.d);
    goto loc_8003E56C;
}

loc_8003E508:
{
    f15.d = MemoryInline::FlatReadFloat32((r16 + 136));
    f16.d = MemoryInline::FlatReadFloat32((r1 + 132));
    f14.d = MemoryInline::FlatReadFloat32((r1 + 136));
    f13.d = PpcFmulsInline(f13.d, f15.d);
    f17.d = PpcFmulsInline(f16.d, f15.d);
    f7.d = MemoryInline::FlatReadFloat32((r1 + 316));
    f15.d = PpcFmulsInline(f14.d, f15.d);
    f16.d = MemoryInline::FlatReadFloat32((r1 + 284));
    f14.d = MemoryInline::FlatReadFloat32((r1 + 300));
    f16.d = static_cast<double>(PpcForceSingleValueInline(f16.d - f17.d));
    f14.d = static_cast<double>(PpcForceSingleValueInline(f14.d - f15.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f13.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 284), f16.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 300), f14.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 316), f7.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
    f8.d = PPC_PsToScalarInline(f8.d);
    f9.d = PPC_PsToScalarInline(f9.d);
    f10.d = PPC_PsToScalarInline(f10.d);
    f11.d = PPC_PsToScalarInline(f11.d);
    f12.d = PPC_PsToScalarInline(f12.d);
    goto loc_8003E56C;
}

loc_8003E548:
{
    f13.d = MemoryInline::FlatReadFloat32((r1 + 316));
    f7.d = MemoryInline::FlatReadFloat32((r16 + 136));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f13.d + f7.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 316), f7.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
    f8.d = PPC_PsToScalarInline(f8.d);
    f9.d = PPC_PsToScalarInline(f9.d);
    f10.d = PPC_PsToScalarInline(f10.d);
    f11.d = PPC_PsToScalarInline(f11.d);
    f12.d = PPC_PsToScalarInline(f12.d);
    goto loc_8003E56C;
}

loc_8003E55C:
{
    f13.d = MemoryInline::FlatReadFloat32((r1 + 316));
    f7.d = MemoryInline::FlatReadFloat32((r16 + 136));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f13.d + f7.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 316), f7.d);
}

loc_8003E56C:
{
    r6 = MemoryInline::FlatRead32((r17 + 36));
    r3 = r15;
    r4 = r16;
    r5 = r17;
    r22 = (r6 + 156);
    ctx->lr = 0x8003E584u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8003FFB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r5 = MemoryInline::FlatRead8((r22 + 169));
    r3 = r17;
    r0 = MemoryInline::FlatRead8((r22 + 170));
    r4 = (r1 + 224);
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    f15.d = MemoryInline::FlatReadFloat64((r2 + -30192));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    f14.d = MemoryInline::FlatReadFloat32((r2 + -30212));
    r5 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 324), r5);
    r0 = (r0 ^ -2147483648);
    r6 = MemoryInline::FlatRead8((r15 + 192));
    MemoryInline::FlatWriteRam32((r1 + 332), r0);
    f13.d = MemoryInline::FlatReadFloat64((r1 + 320));
    r5 = (0 - r6);
    f7.d = MemoryInline::FlatReadFloat64((r1 + 328));
    r0 = (r5 | r6);
    f13.d = static_cast<double>(PpcForceSingleValueInline(f13.d - f15.d));
    r21_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r21 = (r21_rot_0 & 1);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f15.d));
    f13.d = static_cast<double>(PpcForceSingleValueInline(f13.d / f14.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f13.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f7.d / f14.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f7.d);
    ctx->lr = 0x8003E5E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    ctx->fpr[14] = f14;
    ctx->fpr[15] = f15;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80035260u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f14 = ctx->fpr[14];
    f15 = ctx->fpr[15];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r4 = (r1 + 224);
    r3 = (r1 + 272);
    r5 = r4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->fpr[14] = f14;
    ctx->fpr[15] = f15;
    ctx->fpr[31] = f31;
    ctx->xer = xer;
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
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
    f13 = ctx->fpr[13];
    f14 = ctx->fpr[14];
    f15 = ctx->fpr[15];
    f31 = ctx->fpr[31];
    r3 = (r1 + 224);
    r4 = 0;
    // inline leaf 0x80037500 (22 guest instruction(s))
}

loc_inl3_0x80037500:
{
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & -4);
    r4 = (r3 + r4);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_4 = (r4 + 16);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_4));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 32));
    PpcSetPairedFprInline(f0, PPC_PsMerge00Inline(f0.d, f1.d));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f2.d), PPC_PsFromScalarInline(f2.d), f0.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(PPC_PsToScalarInline(f0.d) - PPC_PsToScalarInline(f0.d)));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f2.d);
}

loc_inl3_0x8003752C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x80037530:
{
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    r6 = 0x80380000u;
    r6 = (r6 + 19616);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsMuls1Inline(PPC_PsFromScalarInline(f0.d), f3.d));
    f2.d = PPC_Fnmsubs(f2.d, PPC_PsToScalarInline(f1.d), PPC_PsToScalarInline(f3.d));
    f0.d = PpcFmulsInline(f2.d, PPC_PsToScalarInline(f0.d));
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f1.d), f0.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    goto loc_inl3_cont_80037500;
}

loc_inl3_return:
{
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_inl3_cont_80037500:
{
    // end of inlined leaf 0x80037500
    f21.d = f1.d;
    r3 = (r1 + 224);
    r4 = 1;
    // inline leaf 0x80037500 (22 guest instruction(s))
}

loc_inl4_0x80037500:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r4 = (r3 + r4);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_5 = (r4 + 16);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_5));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 32));
    PpcSetPairedFprInline(f0, PPC_PsMerge00Inline(f0.d, f1.d));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f2.d), PPC_PsFromScalarInline(f2.d), f0.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(PPC_PsToScalarInline(f0.d) - PPC_PsToScalarInline(f0.d)));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f2.d);
}

loc_inl4_0x8003752C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x80037530:
{
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    r6 = 0x80380000u;
    r6 = (r6 + 19616);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsMuls1Inline(PPC_PsFromScalarInline(f0.d), f3.d));
    f2.d = PPC_Fnmsubs(f2.d, PPC_PsToScalarInline(f1.d), PPC_PsToScalarInline(f3.d));
    f0.d = PpcFmulsInline(f2.d, PPC_PsToScalarInline(f0.d));
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f1.d), f0.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    goto loc_inl4_cont_80037500;
}

loc_inl4_return:
{
    f0.d = PPC_PsToScalarInline(f0.d);
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_inl4_cont_80037500:
{
    // end of inlined leaf 0x80037500
    f13.d = MemoryInline::FlatReadFloat32((r1 + 276));
    f20.d = f1.d;
    f7.d = MemoryInline::FlatReadFloat32((r1 + 292));
    f13.d = PpcFmulsInline(f13.d, f13.d);
    f14.d = MemoryInline::FlatReadFloat32((r2 + -30216));
    f7.d = PpcFmulsInline(f7.d, f7.d);
    f15.d = static_cast<double>(PpcForceSingleValueInline(f13.d + f7.d));
    SetCRFloatResident(cr, 0, f15.d, f14.d);
}

loc_8003E634:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003E640;
    }
}

loc_8003E63C:
{
    goto loc_8003E64C;
}

loc_8003E640:
{
    f1.d = f15.d;
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28972));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28968));
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, f1.d, f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f14.d = PpcFmulsInline(f15.d, f1.d);
}

loc_8003E64C:
{
    r0 = MemoryInline::FlatRead8((r22 + 173));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_8003E654:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003E664;
    }
}

loc_8003E658:
{
    f7.d = MemoryInline::FlatReadFloat32((r2 + -30216));
    SetCRFloatResident(cr, 0, f7.d, f14.d);
}

loc_8003E660:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003E670;
    }
}

loc_8003E664:
{
    f23.d = MemoryInline::FlatReadFloat32((r2 + -30216));
    f22.d = MemoryInline::FlatReadFloat32((r2 + -30208));
    goto loc_8003E694;
}

loc_8003E670:
{
    PpcSetPairedFprInline(f15, PPC_Fres(PPC_PsFromScalarInline(f14.d)));
    f13.d = MemoryInline::FlatReadFloat32((r1 + 276));
    f7.d = MemoryInline::FlatReadFloat32((r1 + 292));
    PpcSetPairedFprInline(f16, PPC_PsAddInline(f15.d, f15.d));
    PpcSetPairedFprInline(f15, PPC_PsMulInline(f15.d, f15.d));
    f13.d = (-(f13.d));
    PpcSetPairedFprInline(f15, PPC_PsNmsubInline(PPC_PsFromScalarInline(f14.d), f15.d, f16.d));
    f23.d = PpcFmulsInline(f13.d, PPC_PsToScalarInline(f15.d));
    f22.d = PpcFmulsInline(f7.d, PPC_PsToScalarInline(f15.d));
    f15.d = PPC_PsToScalarInline(f15.d);
    f16.d = PPC_PsToScalarInline(f16.d);
}

loc_8003E694:
{
    r12 = MemoryInline::FlatRead32(r15);
    r3 = r15;
    r0 = MemoryInline::FlatRead16(r22);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    r4 = (r0 & 2048);
    ctr = r12;
    ctx->lr = 0x8003E6B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
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
    ctx->fpr[13] = f13;
    ctx->fpr[14] = f14;
    ctx->fpr[15] = f15;
    ctx->fpr[16] = f16;
    ctx->fpr[17] = f17;
    ctx->fpr[18] = f18;
    ctx->fpr[19] = f19;
    ctx->fpr[20] = f20;
    ctx->fpr[21] = f21;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f14 = ctx->fpr[14];
    f15 = ctx->fpr[15];
    f16 = ctx->fpr[16];
    f17 = ctx->fpr[17];
    f18 = ctx->fpr[18];
    f19 = ctx->fpr[19];
    f20 = ctx->fpr[20];
    f21 = ctx->fpr[21];
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r12 = MemoryInline::FlatRead32(r15);
    r14 = r3;
    r0 = MemoryInline::FlatRead16(r22);
    r3 = r15;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    r4 = (r0 & 2048);
    ctr = r12;
    ctx->lr = 0x8003E6D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
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
    ctx->fpr[13] = f13;
    ctx->fpr[14] = f14;
    ctx->fpr[15] = f15;
    ctx->fpr[16] = f16;
    ctx->fpr[17] = f17;
    ctx->fpr[18] = f18;
    ctx->fpr[19] = f19;
    ctx->fpr[20] = f20;
    ctx->fpr[21] = f21;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f14 = ctx->fpr[14];
    f15 = ctx->fpr[15];
    f16 = ctx->fpr[16];
    f17 = ctx->fpr[17];
    f18 = ctx->fpr[18];
    f19 = ctx->fpr[19];
    f20 = ctx->fpr[20];
    f21 = ctx->fpr[21];
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r12 = r14;
    r20 = r3;
    r3 = r17;
    r19 = 1;
    ctr = r12;
    ctx->lr = 0x8003E6E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
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
    ctx->fpr[13] = f13;
    ctx->fpr[14] = f14;
    ctx->fpr[15] = f15;
    ctx->fpr[16] = f16;
    ctx->fpr[17] = f17;
    ctx->fpr[18] = f18;
    ctx->fpr[19] = f19;
    ctx->fpr[20] = f20;
    ctx->fpr[21] = f21;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f14 = ctx->fpr[14];
    f15 = ctx->fpr[15];
    f16 = ctx->fpr[16];
    f17 = ctx->fpr[17];
    f18 = ctx->fpr[18];
    f19 = ctx->fpr[19];
    f20 = ctx->fpr[20];
    f21 = ctx->fpr[21];
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    f7.d = MemoryInline::FlatReadFloat64((r2 + -30192));
    r18 = r3;
    MemoryInline::FlatWriteRamFloat64((r1 + 344), f7.d);
    r26 = (r1 + 72);
    f7.d = MemoryInline::FlatReadFloat32((r2 + -30204));
    r25 = (r1 + 60);
    MemoryInline::FlatWriteRamFloat64((r1 + 352), f7.d);
    r24 = (r1 + 48);
    f7.d = MemoryInline::FlatReadFloat32((r2 + -30200));
    r14 = (r1 + 120);
    f17.d = MemoryInline::FlatReadFloat32((r2 + -30216));
    r29 = (r1 + 108);
    f19.d = MemoryInline::FlatReadFloat64((r2 + -30184));
    r28 = (r1 + 96);
    f18.d = MemoryInline::FlatReadFloat32((r2 + -30196));
    r30 = (r1 + 224);
    MemoryInline::FlatWriteRamFloat64((r1 + 360), f7.d);
    r23 = (r1 + 176);
    r27 = (r1 + 84);
    r31 = -872349696;
    goto loc_8003ED3C;
}

loc_8003E73C:
{
    r0 = MemoryInline::FlatRead8((r18 + 228));
    f13.d = MemoryInline::FlatReadFloat32((r18 + 48));
    f7.d = MemoryInline::FlatReadFloat32((r18 + 56));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(255));
}

loc_8003E74C:
{
    f14.d = PpcFmulsInline(f13.d, f7.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003E79C;
    }
}

loc_8003E754:
{
    r3 = MemoryInline::FlatRead32((r18 + 200));
    r5 = MemoryInline::FlatRead8((r3 + 137));
}

loc_8003E760:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r5))) {
        goto loc_8003E79C;
    }
}

loc_8003E764:
{
    r3 = MemoryInline::FlatRead8((r3 + 138));
    f7.d = MemoryInline::FlatReadFloat64((r1 + 344));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r3 = (100 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(100) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3 = (r3 * r0);
    r3 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r5));
    r3 = (r4 + r3);
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 324), r3);
    f13.d = MemoryInline::FlatReadFloat64((r1 + 320));
    f13.d = static_cast<double>(PpcForceSingleValueInline(f13.d - f7.d));
    f7.d = MemoryInline::FlatReadFloat64((r1 + 352));
    f7.d = PpcFmulsInline(f7.d, f13.d);
    f14.d = PpcFmulsInline(f14.d, f7.d);
}

loc_8003E79C:
{
    r3 = MemoryInline::FlatRead32((r18 + 200));
    f7.d = MemoryInline::FlatReadFloat32((r3 + 88));
    f27.d = PpcFmulsInline(f14.d, f7.d);
    f7.d = MemoryInline::FlatReadFloat64((r1 + 360));
    SetCRFloatResident(cr, 0, f27.d, f7.d);
}

loc_8003E7B0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8003ED24;
    }
}

loc_8003E7B4:
{
    r4 = MemoryInline::FlatRead32((r3 + 36));
    r4 = MemoryInline::FlatRead16((r4 + 156));
    r4 = (r4 & 24576);
}

loc_8003E7C4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(16384))) {
        goto loc_8003E7DC;
    }
}

loc_8003E7C8:
{
}

loc_8003E7CC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(8192))) {
        goto loc_8003E7EC;
    }
}

loc_8003E7D0:
{
}

loc_8003E7D4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(24576))) {
        goto loc_8003E7FC;
    }
}

loc_8003E7D8:
{
    goto loc_8003E80C;
}

loc_8003E7DC:
{
    f13.d = MemoryInline::FlatReadFloat32((r18 + 52));
    f7.d = MemoryInline::FlatReadFloat32((r18 + 56));
    f14.d = PpcFmulsInline(f13.d, f7.d);
    goto loc_8003E818;
}

loc_8003E7EC:
{
    f13.d = MemoryInline::FlatReadFloat32((r18 + 48));
    f7.d = MemoryInline::FlatReadFloat32((r18 + 60));
    f14.d = PpcFmulsInline(f13.d, f7.d);
    goto loc_8003E818;
}

loc_8003E7FC:
{
    f13.d = MemoryInline::FlatReadFloat32((r18 + 48));
    f7.d = MemoryInline::FlatReadFloat32((r18 + 56));
    f14.d = PpcFmulsInline(f13.d, f7.d);
    goto loc_8003E818;
}

loc_8003E80C:
{
    f13.d = MemoryInline::FlatReadFloat32((r18 + 52));
    f7.d = MemoryInline::FlatReadFloat32((r18 + 60));
    f14.d = PpcFmulsInline(f13.d, f7.d);
}

loc_8003E818:
{
}

loc_8003E81C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_8003E864;
    }
}

loc_8003E820:
{
    r6 = MemoryInline::FlatRead8((r3 + 137));
}

loc_8003E828:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r6))) {
        goto loc_8003E864;
    }
}

loc_8003E82C:
{
    r4 = MemoryInline::FlatRead8((r3 + 138));
    f7.d = MemoryInline::FlatReadFloat64((r1 + 344));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r4 = (100 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(100) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r0 = (r4 * r0);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r6));
    r0 = (r5 + r0);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 332), r0);
    f13.d = MemoryInline::FlatReadFloat64((r1 + 328));
    f13.d = static_cast<double>(PpcForceSingleValueInline(f13.d - f7.d));
    f7.d = MemoryInline::FlatReadFloat64((r1 + 352));
    f7.d = PpcFmulsInline(f7.d, f13.d);
    f14.d = PpcFmulsInline(f14.d, f7.d);
}

loc_8003E864:
{
    f7.d = MemoryInline::FlatReadFloat32((r3 + 92));
    f26.d = PpcFmulsInline(f14.d, f7.d);
    f7.d = MemoryInline::FlatReadFloat64((r1 + 360));
    SetCRFloatResident(cr, 0, f26.d, f7.d);
}

loc_8003E874:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8003ED24;
    }
}

loc_8003E878:
{
    r3 = r15;
    r4 = r18;
    r5 = r22;
    r6 = r16;
    r7 = r19;
    r8 = 0;
    ctx->lr = 0x8003E894u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
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
    ctx->fpr[13] = f13;
    ctx->fpr[14] = f14;
    ctx->fpr[15] = f15;
    ctx->fpr[16] = f16;
    ctx->fpr[17] = f17;
    ctx->fpr[18] = f18;
    ctx->fpr[19] = f19;
    ctx->fpr[20] = f20;
    ctx->fpr[21] = f21;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8003CB60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f14 = ctx->fpr[14];
    f15 = ctx->fpr[15];
    f16 = ctx->fpr[16];
    f17 = ctx->fpr[17];
    f18 = ctx->fpr[18];
    f19 = ctx->fpr[19];
    f20 = ctx->fpr[20];
    f21 = ctx->fpr[21];
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r0 = MemoryInline::FlatRead8((r18 + 154));
    r19 = 0;
    f14.d = MemoryInline::FlatReadFloat32((r18 + 64));
    f13.d = MemoryInline::FlatReadFloat32((r18 + 68));
}

loc_8003E8A8:
{
    f7.d = MemoryInline::FlatReadFloat32((r18 + 72));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f14.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f13.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f7.d);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8003E8D4;
    }
}

loc_8003E8BC:
{
    MemoryInline::FlatWriteRam32((r1 + 324), r0);
    f7.d = MemoryInline::FlatReadFloat64((r1 + 320));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f19.d));
    f7.d = PpcFmulsInline(f18.d, f7.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f14.d + f7.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f7.d);
}

loc_8003E8D4:
{
    r0 = MemoryInline::FlatRead8((r18 + 155));
}

loc_8003E8DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8003E8FC;
    }
}

loc_8003E8E0:
{
    MemoryInline::FlatWriteRam32((r1 + 332), r0);
    f7.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f13.d = MemoryInline::FlatReadFloat64((r1 + 328));
    f13.d = static_cast<double>(PpcForceSingleValueInline(f13.d - f19.d));
    f13.d = PpcFmulsInline(f18.d, f13.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f13.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f7.d);
}

loc_8003E8FC:
{
    r0 = MemoryInline::FlatRead8((r18 + 156));
}

loc_8003E904:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8003E924;
    }
}

loc_8003E908:
{
    MemoryInline::FlatWriteRam32((r1 + 324), r0);
    f7.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f13.d = MemoryInline::FlatReadFloat64((r1 + 320));
    f13.d = static_cast<double>(PpcForceSingleValueInline(f13.d - f19.d));
    f13.d = PpcFmulsInline(f18.d, f13.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f13.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f7.d);
}

loc_8003E924:
{
    r3 = MemoryInline::FlatRead32((r18 + 200));
    f13.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f7.d = MemoryInline::FlatReadFloat32((r3 + 104));
    f16.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f13.d + f7.d));
    f15.d = MemoryInline::FlatReadFloat32((r3 + 96));
    f14.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f13.d = MemoryInline::FlatReadFloat32((r3 + 100));
    f15.d = static_cast<double>(PpcForceSingleValueInline(f16.d + f15.d));
    SetCRFloatResident(cr, 0, f17.d, f7.d);
}

loc_8003E94C:
{
    f13.d = static_cast<double>(PpcForceSingleValueInline(f14.d + f13.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f15.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f13.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f7.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003EBB8;
    }
}

loc_8003E960:
{
    r3 = r30;
    r4 = (r18 + 172);
    r5 = (r1 + 36);
    // inline leaf 0x8019A91C (21 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_7 = (r4 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_7));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_11 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_11));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_12 = (r3 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_12));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_13 = (r3 + 24);
    PpcSetPairedFprInline(f9, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_13));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f8.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 0u>(ctx, r5, f6.d);
    PpcSetPairedFprInline(f11, PPC_PsMaddInline(f9.d, f1.d, f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_14 = (r3 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_14));
    PpcSetPairedFprInline(f12, PPC_PsSum0Inline(f11.d, f11.d, PPC_PsFromScalarInline(f12.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_15 = (r3 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_15));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_5 = (r5 + 4);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_5, f12.d);
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_6 = (r5 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_6, f6.d);
    // end of inlined leaf 0x8019A91C
    f7.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f30.d = PpcFmulsInline(f21.d, f22.d);
    f31.d = PpcFmulsInline(f21.d, f23.d);
    f28.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f25.d = PpcFmulsInline(f20.d, f22.d);
    f29.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f24.d = PpcFmulsInline(f20.d, f23.d);
    f1.d = (-(f7.d));
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80036FF0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f13.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = 128;
    f7.d = MemoryInline::FlatReadFloat32((r1 + 12));
    r4 = 0;
    f16.d = PpcFmulsInline(f13.d, f27.d);
    f15.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f27.d = PpcFmulsInline(f7.d, f27.d);
    f14.d = MemoryInline::FlatReadFloat32((r1 + 44));
    MemoryInline::FlatWriteRamFloat64((r1 + 368), f15.d);
    f13.d = PpcFmulsInline(f13.d, f26.d);
    f15.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f7.d = PpcFmulsInline(f7.d, f26.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 376), f15.d);
    f15.d = PpcFmulsInline(f16.d, f28.d);
    r5 = 4;
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f14.d);
    f14.d = PpcFmulsInline(f27.d, f28.d);
    f28.d = static_cast<double>(PpcForceSingleValueInline(f28.d - f15.d));
    f15.d = PpcFmulsInline(f7.d, f29.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f17.d);
    f26.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f14.d));
    f14.d = PpcFmulsInline(f13.d, f29.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f17.d);
    f15.d = static_cast<double>(PpcForceSingleValueInline(f28.d - f15.d));
    f28.d = PpcFmulsInline(f30.d, f16.d);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f26.d - f14.d));
    f26.d = PpcFmulsInline(f30.d, f7.d);
    f14.d = PpcFmulsInline(f30.d, f15.d);
    f30.d = PpcFmulsInline(f24.d, f29.d);
    f15.d = PpcFmulsInline(f31.d, f15.d);
    f29.d = PpcFmulsInline(f25.d, f29.d);
    f30.d = static_cast<double>(PpcForceSingleValueInline(f14.d + f30.d));
    f14.d = static_cast<double>(PpcForceSingleValueInline(f28.d - f26.d));
    f26.d = static_cast<double>(PpcForceSingleValueInline(f28.d + f26.d));
    f28.d = static_cast<double>(PpcForceSingleValueInline(f15.d - f29.d));
    f15.d = MemoryInline::FlatReadFloat64((r1 + 368));
    f16.d = PpcFmulsInline(f31.d, f16.d);
    f7.d = PpcFmulsInline(f31.d, f7.d);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f15.d + f30.d));
    f31.d = PpcFmulsInline(f24.d, f27.d);
    f27.d = PpcFmulsInline(f25.d, f27.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f29.d);
    f15.d = static_cast<double>(PpcForceSingleValueInline(f16.d - f7.d));
    f16.d = static_cast<double>(PpcForceSingleValueInline(f16.d + f7.d));
    f7.d = MemoryInline::FlatReadFloat64((r1 + 376));
    f25.d = PpcFmulsInline(f25.d, f13.d);
    f28.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f28.d));
    f7.d = PpcFmulsInline(f24.d, f13.d);
    f24.d = static_cast<double>(PpcForceSingleValueInline(f14.d - f31.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f28.d);
    f14.d = static_cast<double>(PpcForceSingleValueInline(f26.d - f31.d));
    f15.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f15.d));
    f13.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f16.d));
    f16.d = static_cast<double>(PpcForceSingleValueInline(f24.d - f7.d));
    f14.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f14.d));
    f15.d = static_cast<double>(PpcForceSingleValueInline(f25.d + f15.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f16.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f13.d - f25.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f15.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f14.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f7.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x8016F0F0u>(ctx);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f7, PPC_PsqLStackInline<0u, 0u>(ctx, r24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(0));
}

loc_8003EA9C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f13, PPC_PsqLStackInline<0u, 0u>(ctx, r25));
    PpcSetPairedFprInline(f14, PPC_PsSubInline(f7.d, f13.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r24_psq_tmp_2 = (r24 + 8);
    PpcSetPairedFprInline(f7, PPC_PsqLStackInline<1u, 0u>(ctx, r24_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r25_psq_tmp_2 = (r25 + 8);
    PpcSetPairedFprInline(f13, PPC_PsqLStackInline<1u, 0u>(ctx, r25_psq_tmp_2));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r14, f14.d);
    PpcSetPairedFprInline(f14, PPC_PsSubInline(f7.d, f13.d));
    f7.d = MemoryInline::FlatReadFloat32((r1 + 120));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f7.d));
    f13.d = MemoryInline::FlatReadFloat32((r1 + 124));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r14_psq_tmp_2 = (r14 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r14_psq_tmp_2, f14.d);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f13.d));
    f7.d = MemoryInline::FlatReadFloat32((r1 + 128));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f7.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003EADC;
    }
}

loc_8003EAD4:
{
    r0 = 0;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
}

loc_8003EADC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f7, PPC_PsqLStackInline<0u, 0u>(ctx, r24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(0));
}

loc_8003EAE4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f13, PPC_PsqLStackInline<0u, 0u>(ctx, r26));
    PpcSetPairedFprInline(f14, PPC_PsSubInline(f7.d, f13.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r24_psq_tmp_3 = (r24 + 8);
    PpcSetPairedFprInline(f7, PPC_PsqLStackInline<1u, 0u>(ctx, r24_psq_tmp_3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_2 = (r26 + 8);
    PpcSetPairedFprInline(f13, PPC_PsqLStackInline<1u, 0u>(ctx, r26_psq_tmp_2));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r29, f14.d);
    PpcSetPairedFprInline(f14, PPC_PsSubInline(f7.d, f13.d));
    f7.d = MemoryInline::FlatReadFloat32((r1 + 108));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f7.d));
    f13.d = MemoryInline::FlatReadFloat32((r1 + 112));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r29_psq_tmp_2 = (r29 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r29_psq_tmp_2, f14.d);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f13.d));
    f7.d = MemoryInline::FlatReadFloat32((r1 + 116));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f7.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003EB24;
    }
}

loc_8003EB1C:
{
    r0 = 1;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
}

loc_8003EB24:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f7, PPC_PsqLStackInline<0u, 0u>(ctx, r24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(0));
}

loc_8003EB2C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f13, PPC_PsqLStackInline<0u, 0u>(ctx, r25));
    PpcSetPairedFprInline(f14, PPC_PsAddInline(f7.d, f13.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r24_psq_tmp_4 = (r24 + 8);
    PpcSetPairedFprInline(f7, PPC_PsqLStackInline<1u, 0u>(ctx, r24_psq_tmp_4));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r25_psq_tmp_3 = (r25 + 8);
    PpcSetPairedFprInline(f13, PPC_PsqLStackInline<1u, 0u>(ctx, r25_psq_tmp_3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r28, f14.d);
    PpcSetPairedFprInline(f14, PPC_PsAddInline(f7.d, f13.d));
    f7.d = MemoryInline::FlatReadFloat32((r1 + 96));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f7.d));
    f13.d = MemoryInline::FlatReadFloat32((r1 + 100));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_2 = (r28 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r28_psq_tmp_2, f14.d);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f13.d));
    f7.d = MemoryInline::FlatReadFloat32((r1 + 104));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f7.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003EB6C;
    }
}

loc_8003EB64:
{
    r0 = 2;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
}

loc_8003EB6C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f7, PPC_PsqLStackInline<0u, 0u>(ctx, r24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(0));
}

loc_8003EB74:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f13, PPC_PsqLStackInline<0u, 0u>(ctx, r26));
    PpcSetPairedFprInline(f14, PPC_PsAddInline(f7.d, f13.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r24_psq_tmp_5 = (r24 + 8);
    PpcSetPairedFprInline(f7, PPC_PsqLStackInline<1u, 0u>(ctx, r24_psq_tmp_5));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_3 = (r26 + 8);
    PpcSetPairedFprInline(f13, PPC_PsqLStackInline<1u, 0u>(ctx, r26_psq_tmp_3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r27, f14.d);
    PpcSetPairedFprInline(f14, PPC_PsAddInline(f7.d, f13.d));
    f7.d = MemoryInline::FlatReadFloat32((r1 + 84));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f7.d));
    f13.d = MemoryInline::FlatReadFloat32((r1 + 88));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r27_psq_tmp_2 = (r27 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r27_psq_tmp_2, f14.d);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f13.d));
    f7.d = MemoryInline::FlatReadFloat32((r1 + 92));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f7.d));
    if (((cr & 0x20000000u) != 0)) {
        f0.d = PPC_PsToScalarInline(f0.d);
        f2.d = PPC_PsToScalarInline(f2.d);
        f3.d = PPC_PsToScalarInline(f3.d);
        f4.d = PPC_PsToScalarInline(f4.d);
        f5.d = PPC_PsToScalarInline(f5.d);
        f6.d = PPC_PsToScalarInline(f6.d);
        f8.d = PPC_PsToScalarInline(f8.d);
        f9.d = PPC_PsToScalarInline(f9.d);
        f10.d = PPC_PsToScalarInline(f10.d);
        f11.d = PPC_PsToScalarInline(f11.d);
        f12.d = PPC_PsToScalarInline(f12.d);
        goto loc_8003ED24;
    }
}

loc_8003EBAC:
{
    r0 = 3;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    f0.d = PPC_PsToScalarInline(f0.d);
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
    f6.d = PPC_PsToScalarInline(f6.d);
    f8.d = PPC_PsToScalarInline(f8.d);
    f9.d = PPC_PsToScalarInline(f9.d);
    f10.d = PPC_PsToScalarInline(f10.d);
    f11.d = PPC_PsToScalarInline(f11.d);
    f12.d = PPC_PsToScalarInline(f12.d);
    goto loc_8003ED24;
}

loc_8003EBB8:
{
    PpcSetPairedFprInline(f13, PPC_PsMerge00Inline(PPC_PsFromScalarInline(f23.d), PPC_PsFromScalarInline(f22.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r18_psq_tmp_2 = (r18 + 172);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r18_psq_tmp_2));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r30));
    PpcSetPairedFprInline(f7, PPC_PsMerge00Inline(PPC_PsFromScalarInline(f27.d), PPC_PsFromScalarInline(f26.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r30_psq_tmp_2 = (r30 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLStackInline<0u, 0u>(ctx, r30_psq_tmp_2));
    r4 = (r1 + 16);
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r18_psq_tmp_3 = (r18 + 180);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r18_psq_tmp_3));
    PpcSetPairedFprInline(f24, PPC_PsMuls0Inline(f13.d, PPC_PsFromScalarInline(f20.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r30_psq_tmp_3 = (r30 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r30_psq_tmp_3));
    PpcSetPairedFprInline(f25, PPC_PsMuls0Inline(f13.d, PPC_PsFromScalarInline(f21.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r30_psq_tmp_4 = (r30 + 24);
    PpcSetPairedFprInline(f9, PPC_PsqLStackInline<0u, 0u>(ctx, r30_psq_tmp_4));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f13, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f8.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r30_psq_tmp_5 = (r30 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r30_psq_tmp_5));
    PpcSetPairedFprInline(f26, PPC_PsNegInline(f24.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r30_psq_tmp_6 = (r30 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r30_psq_tmp_6));
    PpcSetPairedFprInline(f11, PPC_PsMaddInline(f9.d, f1.d, f10.d));
    r3 = 128;
    PpcSetPairedFprInline(f25, PPC_PsMerge10Inline(f25.d, f25.d));
    r4 = 0;
    PpcSetPairedFprInline(f27, PPC_PsNmsubInline(f7.d, f13.d, f13.d));
    r5 = 4;
    PpcSetPairedFprInline(f24, PPC_PsMerge01Inline(f24.d, f26.d));
    PpcSetPairedFprInline(f13, PPC_PsMuls0Inline(f25.d, f7.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, PPC_PsFromScalarInline(f6.d)));
    PpcSetPairedFprInline(f12, PPC_PsSum0Inline(f11.d, f11.d, PPC_PsFromScalarInline(f12.d)));
    PpcSetPairedFprInline(f7, PPC_PsMuls1Inline(f24.d, f7.d));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    PpcSetPairedFprInline(f14, PPC_PsMerge00Inline(f6.d, f12.d));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f26, PPC_PsMadds0Inline(f25.d, f27.d, f14.d));
    PpcSetPairedFprInline(f14, PPC_PsAddInline(f13.d, f7.d));
    PpcSetPairedFprInline(f7, PPC_PsNegInline(f7.d));
    PpcSetPairedFprInline(f15, PPC_PsMadds1Inline(f24.d, f27.d, f26.d));
    PpcSetPairedFprInline(f13, PPC_PsAddInline(f13.d, f7.d));
    PpcSetPairedFprInline(f7, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    PpcSetPairedFprInline(f26, PPC_PsSubInline(f15.d, f13.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r23_psq_tmp_2 = (r23 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r23_psq_tmp_2, f7.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r23, f26.d);
    PpcSetPairedFprInline(f26, PPC_PsSubInline(f15.d, f14.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r23_psq_tmp_3 = (r23 + 12);
    PPC_PsqStStackInline<0u, 0u>(ctx, r23_psq_tmp_3, f26.d);
    PpcSetPairedFprInline(f26, PPC_PsAddInline(f15.d, f13.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r23_psq_tmp_4 = (r23 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r23_psq_tmp_4, f26.d);
    PpcSetPairedFprInline(f26, PPC_PsAddInline(f15.d, f14.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r23_psq_tmp_5 = (r23 + 20);
    PPC_PsqStStackInline<1u, 0u>(ctx, r23_psq_tmp_5, f7.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r23_psq_tmp_6 = (r23 + 32);
    PPC_PsqStStackInline<1u, 0u>(ctx, r23_psq_tmp_6, f7.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r23_psq_tmp_7 = (r23 + 44);
    PPC_PsqStStackInline<1u, 0u>(ctx, r23_psq_tmp_7, f7.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r23_psq_tmp_8 = (r23 + 36);
    PPC_PsqStStackInline<0u, 0u>(ctx, r23_psq_tmp_8, f26.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x8016F0F0u>(ctx);
    f7.d = MemoryInline::FlatReadFloat32((r1 + 176));
}

loc_8003EC8C:
{
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f7.d));
    f7.d = MemoryInline::FlatReadFloat32((r1 + 180));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f7.d));
    f7.d = MemoryInline::FlatReadFloat32((r1 + 184));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f7.d));
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_8003ECAC;
    }
}

loc_8003ECA4:
{
    r0 = 0;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
}

loc_8003ECAC:
{
    f7.d = MemoryInline::FlatReadFloat32((r1 + 188));
}

loc_8003ECB4:
{
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f7.d));
    f7.d = MemoryInline::FlatReadFloat32((r1 + 192));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f7.d));
    f7.d = MemoryInline::FlatReadFloat32((r1 + 196));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f7.d));
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_8003ECD4;
    }
}

loc_8003ECCC:
{
    r0 = 1;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
}

loc_8003ECD4:
{
    f7.d = MemoryInline::FlatReadFloat32((r1 + 200));
}

loc_8003ECDC:
{
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f7.d));
    f7.d = MemoryInline::FlatReadFloat32((r1 + 204));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f7.d));
    f7.d = MemoryInline::FlatReadFloat32((r1 + 208));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f7.d));
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_8003ECFC;
    }
}

loc_8003ECF4:
{
    r0 = 2;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
}

loc_8003ECFC:
{
    f7.d = MemoryInline::FlatReadFloat32((r1 + 212));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(0));
}

loc_8003ED04:
{
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f7.d));
    f7.d = MemoryInline::FlatReadFloat32((r1 + 216));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f7.d));
    f7.d = MemoryInline::FlatReadFloat32((r1 + 220));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f7.d));
    if (((cr & 0x20000000u) != 0)) {
        f0.d = PPC_PsToScalarInline(f0.d);
        f2.d = PPC_PsToScalarInline(f2.d);
        f3.d = PPC_PsToScalarInline(f3.d);
        f4.d = PPC_PsToScalarInline(f4.d);
        f5.d = PPC_PsToScalarInline(f5.d);
        f6.d = PPC_PsToScalarInline(f6.d);
        f8.d = PPC_PsToScalarInline(f8.d);
        f9.d = PPC_PsToScalarInline(f9.d);
        f10.d = PPC_PsToScalarInline(f10.d);
        f11.d = PPC_PsToScalarInline(f11.d);
        f12.d = PPC_PsToScalarInline(f12.d);
        f13.d = PPC_PsToScalarInline(f13.d);
        f15.d = PPC_PsToScalarInline(f15.d);
        f24.d = PPC_PsToScalarInline(f24.d);
        f25.d = PPC_PsToScalarInline(f25.d);
        goto loc_8003ED24;
    }
}

loc_8003ED1C:
{
    r0 = 3;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    f0.d = PPC_PsToScalarInline(f0.d);
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
    f6.d = PPC_PsToScalarInline(f6.d);
    f8.d = PPC_PsToScalarInline(f8.d);
    f9.d = PPC_PsToScalarInline(f9.d);
    f10.d = PPC_PsToScalarInline(f10.d);
    f11.d = PPC_PsToScalarInline(f11.d);
    f12.d = PPC_PsToScalarInline(f12.d);
    f13.d = PPC_PsToScalarInline(f13.d);
    f15.d = PPC_PsToScalarInline(f15.d);
    f24.d = PPC_PsToScalarInline(f24.d);
    f25.d = PPC_PsToScalarInline(f25.d);
}

loc_8003ED24:
{
    r12 = r20;
    r3 = r17;
    r4 = r18;
    ctr = r12;
    ctx->lr = 0x8003ED38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
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
    ctx->fpr[13] = f13;
    ctx->fpr[14] = f14;
    ctx->fpr[15] = f15;
    ctx->fpr[16] = f16;
    ctx->fpr[17] = f17;
    ctx->fpr[18] = f18;
    ctx->fpr[19] = f19;
    ctx->fpr[20] = f20;
    ctx->fpr[21] = f21;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f14 = ctx->fpr[14];
    f15 = ctx->fpr[15];
    f16 = ctx->fpr[16];
    f17 = ctx->fpr[17];
    f18 = ctx->fpr[18];
    f19 = ctx->fpr[19];
    f20 = ctx->fpr[20];
    f21 = ctx->fpr[21];
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r18 = r3;
}

loc_8003ED3C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r18), static_cast<int32_t>(0));
}

loc_8003ED40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003E73C;
    }
}

loc_8003ED44:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 464), 0, 296u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 272u, (r1 + 736));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 256u, (r1 + 720));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 240u, (r1 + 704));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 224u, (r1 + 688));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 208u, (r1 + 672));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 192u, (r1 + 656));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 176u, (r1 + 640));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 160u, (r1 + 624));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 144u, (r1 + 608));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 128u, (r1 + 592));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f21.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 112u, (r1 + 576));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f20.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 96u, (r1 + 560));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f19.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 80u, (r1 + 544));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f18.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 64u, (r1 + 528));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f17.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 48u, (r1 + 512));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f16.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 32u, (r1 + 496));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f15.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 16u, (r1 + 480));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 464);
    f14.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 0u, (r1 + 464));
    // inline leaf 0x800215B8 (19 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -72));
            r15 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 56u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 64u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 68u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215B8
    r0 = MemoryInline::ReadResolved32(guest_range_4, 292u, (r1 + 756));
    ctx->lr = r0;
    r1 = (r1 + 752);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
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
    ctx->fpr[13] = f13;
    ctx->fpr[14] = f14;
    ctx->fpr[15] = f15;
    ctx->fpr[16] = f16;
    ctx->fpr[17] = f17;
    ctx->fpr[18] = f18;
    ctx->fpr[19] = f19;
    ctx->fpr[20] = f20;
    ctx->fpr[21] = f21;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8003E330 func_8003E330 preserves=false fpr_mask=0xFFFFC000
