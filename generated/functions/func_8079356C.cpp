#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8079356C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_80793988_loc_0 = 0;
    uint32_t addr_stfsx_807936F4_loc_0 = 0;
    uint32_t addr_stfsx_80793994_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r16_psq_tmp_0 = 0;
    uint32_t r16_psq_tmp_1 = 0;
    uint32_t r16_psq_tmp_10 = 0;
    uint32_t r16_psq_tmp_11 = 0;
    uint32_t r16_psq_tmp_12 = 0;
    uint32_t r16_psq_tmp_2 = 0;
    uint32_t r16_psq_tmp_3 = 0;
    uint32_t r16_psq_tmp_4 = 0;
    uint32_t r16_psq_tmp_5 = 0;
    uint32_t r16_psq_tmp_6 = 0;
    uint32_t r16_psq_tmp_7 = 0;
    uint32_t r16_psq_tmp_8 = 0;
    uint32_t r16_psq_tmp_9 = 0;
    uint32_t r17_psq_tmp_0 = 0;
    uint32_t r17_psq_tmp_1 = 0;
    uint32_t r17_psq_tmp_2 = 0;
    uint32_t r17_psq_tmp_3 = 0;
    uint32_t r17_psq_tmp_4 = 0;
    uint32_t r17_psq_tmp_5 = 0;
    uint32_t r17_psq_tmp_6 = 0;
    uint32_t r17_psq_tmp_7 = 0;
    uint32_t r17_psq_tmp_8 = 0;
    uint32_t r17_psq_tmp_9 = 0;
    uint32_t r19_psq_tmp_0 = 0;
    uint32_t r19_psq_tmp_1 = 0;
    uint32_t r19_psq_tmp_2 = 0;
    uint32_t r19_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_10 = 0;
    uint32_t r1_psq_tmp_11 = 0;
    uint32_t r1_psq_tmp_12 = 0;
    uint32_t r1_psq_tmp_13 = 0;
    uint32_t r1_psq_tmp_14 = 0;
    uint32_t r1_psq_tmp_15 = 0;
    uint32_t r1_psq_tmp_16 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint32_t r1_psq_tmp_8 = 0;
    uint32_t r1_psq_tmp_9 = 0;
    uint32_t r20_psq_tmp_0 = 0;
    uint32_t r20_psq_tmp_1 = 0;
    uint32_t r20_psq_tmp_2 = 0;
    uint32_t r20_psq_tmp_3 = 0;
    uint32_t r20_psq_tmp_4 = 0;
    uint32_t r20_psq_tmp_5 = 0;
    uint32_t r20_psq_tmp_6 = 0;
    uint32_t r20_psq_tmp_7 = 0;
    uint32_t r22_rot_0 = 0;
    uint32_t r22_rot_1 = 0;
    uint32_t r22_rot_2 = 0;
    uint32_t r23_rot_0 = 0;
    uint32_t r23_rot_1 = 0;
    uint32_t r23_rot_2 = 0;
    uint32_t r24_psq_tmp_0 = 0;
    uint32_t r24_psq_tmp_1 = 0;
    uint32_t r24_psq_tmp_2 = 0;
    uint32_t r24_psq_tmp_3 = 0;
    uint32_t r24_psq_tmp_4 = 0;
    uint32_t r24_psq_tmp_5 = 0;
    uint32_t r24_psq_tmp_6 = 0;
    uint32_t r24_psq_tmp_7 = 0;
    uint32_t r24_psq_tmp_8 = 0;
    uint32_t r26_psq_tmp_0 = 0;
    uint32_t r26_psq_tmp_1 = 0;
    uint32_t r26_psq_tmp_2 = 0;
    uint32_t r26_psq_tmp_3 = 0;
    uint32_t r26_psq_tmp_4 = 0;
    uint32_t r27_psq_tmp_0 = 0;
    uint32_t r27_psq_tmp_1 = 0;
    uint32_t r27_psq_tmp_2 = 0;
    uint32_t r27_psq_tmp_3 = 0;
    uint32_t r27_psq_tmp_4 = 0;
    uint32_t r27_psq_tmp_5 = 0;
    uint32_t r27_psq_tmp_6 = 0;
    uint32_t r28_psq_tmp_0 = 0;
    uint32_t r28_psq_tmp_1 = 0;
    uint32_t r28_psq_tmp_2 = 0;
    uint32_t r28_psq_tmp_3 = 0;
    uint32_t r28_psq_tmp_4 = 0;
    uint32_t r28_psq_tmp_5 = 0;
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
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_4 = 0;
    uint32_t r5_psq_tmp_5 = 0;
    uint32_t r5_psq_tmp_6 = 0;
    uint32_t r5_psq_tmp_7 = 0;
    uint32_t r5_psq_tmp_8 = 0;
    uint32_t r5_psq_tmp_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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

    goto loc_8079356C;

loc_8079356C:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -480), 0, 488u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -480), r1);
    r1 = (r1 + -480);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 484u, (r1 + 484), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 464u, (r1 + 464), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 472);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 448u, (r1 + 448), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 456);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 432u, (r1 + 432), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 440);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 416u, (r1 + 416), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 424);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 400u, (r1 + 400), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 408);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 384u, (r1 + 384), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 392);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 368u, (r1 + 368), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 376);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 352u, (r1 + 352), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 360);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 336u, (r1 + 336), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 344);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 320u, (r1 + 320), f22.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_9 = (r1 + 328);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_9, PPC_PsFromScalarInline(f22.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 304u, (r1 + 304), f21.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_10 = (r1 + 312);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_10, PPC_PsFromScalarInline(f21.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 288u, (r1 + 288), f20.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_11 = (r1 + 296);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_11, PPC_PsFromScalarInline(f20.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 272u, (r1 + 272), f19.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_12 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_12, PPC_PsFromScalarInline(f19.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 256u, (r1 + 256), f18.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_13 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_13, PPC_PsFromScalarInline(f18.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 240u, (r1 + 240), f17.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_14 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_14, PPC_PsFromScalarInline(f17.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 224u, (r1 + 224), f16.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_15 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_15, PPC_PsFromScalarInline(f16.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 208u, (r1 + 208), f15.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_16 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_16, PPC_PsFromScalarInline(f15.d));
    r11 = (r1 + 208);
    // inline leaf 0x80021574 (17 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -64), r16);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -60), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021574
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r5 = 1127219200;
    r4 = 0x809C0000u;
    r29 = 0x808A0000u;
    r0 = (r0 * 116);
    MemoryInline::WriteResolved32(guest_range_3, 120u, (r1 + 120), r5);
    r4 = (r4 + 12104);
    MemoryInline::WriteResolved32(guest_range_3, 128u, (r1 + 128), r5);
    r16 = r3;
    r4 = (r4 + r0);
    f20.d = MemoryInline::FlatReadFloat32((r4 + 68));
    r29 = (r29 + 19672);
    ctx->lr = 0x8079363Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x80792618u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    r17 = MemoryInline::FlatRead32((r16 + 32));
    f1.d = f20.d;
    guest_range_1 = MemoryInline::ResolveRangeHost(r29, 0, 128u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r29 + 32));
    r3 = r17;
    // inline leaf 0x8079ED1C (12 guest instruction(s))
}

loc_inl1_0x8079ED1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 104));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_inl1_0x8079ED24:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl1_0x8079ED44;
    }
}

loc_inl1_0x8079ED28:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 104), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_inl1_0x8079ED34:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl1_0x8079ED3C;
    }
}

loc_inl1_0x8079ED38:
{
    MemoryInline::FlatWriteFloat32((r3 + 104), f1.d);
}

loc_inl1_0x8079ED3C:
{
    r3 = 1;
    goto loc_inl1_cont_8079ED1C;
}

loc_inl1_0x8079ED44:
{
    r3 = 0;
}

loc_inl1_cont_8079ED1C:
{
    // end of inlined leaf 0x8079ED1C
}

loc_80793654:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80793664;
    }
}

loc_80793658:
{
    r3 = r17;
    r4 = (r16 + 176);
    // inline leaf 0x8079EDB4 (31 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r3 + 104));
    r5 = 0x809C0000u;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    r5 = (r5 + 12104);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f0.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1));
    r4 = (r0 * 116);
    r0 = MemoryInline::FlatRead32((r3 + 116));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 92);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f0.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 100);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2, f1.d);
    r6 = (r0 | 64);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r4 = (r5 + r4);
    MemoryInline::FlatWrite32((r3 + 116), r6);
    r0 = (r0 * 116);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 96));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 56));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 60));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 100));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    r5 = (r5 + r0);
    r4 = MemoryInline::FlatRead32((r3 + 164));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 180), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 184), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 52));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    // end of inlined leaf 0x8079EDB4
}

loc_80793664:
{
    r0 = MemoryInline::FlatRead32((r16 + 80));
}

loc_8079366C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(1))) {
        goto loc_8079372C;
    }
}

loc_80793670:
{
    r0 = MemoryInline::FlatRead8((r16 + 172));
}

loc_80793678:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807936C0;
    }
}

loc_8079367C:
{
    f0.d = MemoryInline::FlatReadFloat32((r16 + 152));
    r3 = (r1 + 104);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r16_psq_tmp_1 = (r16 + 300);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r16_psq_tmp_1));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r16_psq_tmp_2 = (r16 + 240);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r16_psq_tmp_2));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r29 + 80));
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f4.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r16_psq_tmp_3 = (r16 + 308);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r16_psq_tmp_3));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r16_psq_tmp_4 = (r16 + 248);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r16_psq_tmp_4));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f4.d, f3.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f0.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f0.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_4, f1.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
}

loc_807936C0:
{
    r3 = MemoryInline::FlatRead32((r16 + 336));
    f2.d = MemoryInline::FlatReadFloat32((r16 + 240));
    f1.d = MemoryInline::FlatReadFloat32((r16 + 248));
    r4 = (r3 + 1);
    f0.d = MemoryInline::FlatReadFloat32((r16 + 244));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 60);
    r5 = (r3 & 15);
    MemoryInline::FlatWriteFloat32((r16 + 304), f0.d);
    r3 = MemoryInline::FlatRead32((r16 + 328));
    MemoryInline::FlatWriteFloat32((r16 + 300), f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r16 + 312));
    MemoryInline::FlatWriteFloat32((r16 + 308), f1.d);
    MemoryInline::FlatWrite32((r16 + 336), r4);
    addr_stfsx_807936F4_loc_0 = (r3 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_807936F4_loc_0, f0.d);
    r0 = MemoryInline::FlatRead8((r16 + 172));
}

loc_80793700:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80793728;
    }
}

loc_80793704:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 84u, (r29 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r16 + 148));
    f19.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 88u, (r29 + 88));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    SetCRFloatResident(cr, 0, f0.d, f19.d);
}

loc_80793718:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80793720;
    }
}

loc_8079371C:
{
    goto loc_8079372C;
}

loc_80793720:
{
    f19.d = f0.d;
    goto loc_8079372C;
}

loc_80793728:
{
    f19.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r29);
}

loc_8079372C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r29 + 28));
    r19 = (r16 + 252);
    f0.d = MemoryInline::FlatReadFloat32((r16 + 216));
    r18 = 1;
    r0 = MemoryInline::FlatRead32((r16 + 80));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r16 + 184));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 92u, (r29 + 92));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80793750:
{
    f18.d = PpcFmulsInline(f2.d, f1.d);
    f17.d = PpcFmulsInline(f0.d, f1.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80793D2C;
    }
}

loc_8079375C:
{
    r3 = 0x808A0000u;
    r0 = (r5 + -6);
    f27.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r29);
    r28 = (r1 + 92);
    r21 = MemoryInline::FlatRead32((r3 + 26316));
    r26 = (r16 + 264);
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 120u, (r29 + 120));
    r25 = (r16 + 4);
    f26.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r29 + 12));
    r24 = (r16 + 56);
    f28.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 96u, (r29 + 96));
    r23_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r23 = (r23_rot_1 & 60);
    f29.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 100u, (r29 + 100));
    r22_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r22 = (r22_rot_1 & -4);
    f24.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 108u, (r29 + 108));
    r27 = (r1 + 80);
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r29 + 16));
    r30 = 0x809C0000u;
    f30.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 104u, (r29 + 104));
    r31 = 552075264;
    f23.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 72u, (r29 + 72));
    f22.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r29 + 8));
    f15.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 112u, (r29 + 112));
    f16.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r29 + 32));
    goto loc_80793D20;
}

loc_807937C0:
{
    r0 = MemoryInline::FlatRead32((r16 + 84));
    r20 = MemoryInline::FlatRead32((r25 + 32));
}

loc_807937CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807937F4;
    }
}

loc_807937D0:
{
    r3 = MemoryInline::FlatRead32((r25 + 28));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r20_psq_tmp_2 = (r20 + 80);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r20_psq_tmp_2));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_8 = (r3 + 80);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_8));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f1.d, f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r20_psq_tmp_3 = (r20 + 80);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r20_psq_tmp_3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_9 = (r3 + 88);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_9));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r20_psq_tmp_4 = (r20 + 88);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r20_psq_tmp_4));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f1.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r20_psq_tmp_5 = (r20 + 88);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r20_psq_tmp_5, f0.d);
}

loc_807937F4:
{
    r0 = MemoryInline::FlatRead8((r16 + 172));
}

loc_807937FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80793870;
    }
}

loc_80793800:
{
    r0 = (r18 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    f5.d = MemoryInline::FlatReadFloat32((r1 + 104));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 120));
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f25.d));
    f4.d = MemoryInline::FlatReadFloat32(r26);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 128));
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    f6.d = PpcFmulsInline(f26.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 108));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f25.d));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 120));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 112));
    f5.d = PpcFmulsInline(f5.d, f6.d);
    f3.d = PpcFmulsInline(f26.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f25.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f3.d = PpcFmulsInline(f2.d, f3.d);
    MemoryInline::FlatWriteFloat32(r26, f4.d);
    f1.d = PpcFmulsInline(f26.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteFloat32((r26 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r26 + 8), f0.d);
}

loc_80793870:
{
    f2.d = MemoryInline::FlatReadFloat32((r25 + 288));
    SetCRFloatResident(cr, 0, f2.d, f27.d);
}

loc_80793878:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807938B8;
    }
}

loc_8079387C:
{
    f1.d = MemoryInline::FlatReadFloat32((r16 + 156));
    f0.d = MemoryInline::FlatReadFloat32(r26);
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32(r26, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r16 + 160));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r26 + 4), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r16 + 164));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 8));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r26 + 8), f0.d);
}

loc_807938B8:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r26));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r18), static_cast<int32_t>(1));
}

loc_807938C0:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r16_psq_tmp_8 = (r16 + 124);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r16_psq_tmp_8));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_2 = (r26 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r16_psq_tmp_9 = (r16 + 132);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r16_psq_tmp_9));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r28, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_2 = (r28 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r28_psq_tmp_2, f0.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807938FC;
    }
}

loc_807938E0:
{
    r0 = (r18 + -1);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 128));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f25.d));
    f0.d = PpcFmulsInline(f28.d, f0.d);
    f18.d = static_cast<double>(PpcForceSingleValueInline(f18.d - f0.d));
}

loc_807938FC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r28_psq_tmp_3 = (r28 + 4);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r28_psq_tmp_3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r16_psq_tmp_10 = (r16 + 244);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r16_psq_tmp_10));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r28));
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f2.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r16_psq_tmp_11 = (r16 + 240);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r16_psq_tmp_11));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f0.d, f1.d, f2.d));
    PpcSetPairedFprInline(f0, PPC_PsSum0Inline(f1.d, f2.d, f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f18.d - PPC_PsToScalarInline(f0.d)));
    SetCRFloatResident(cr, 0, f2.d, f27.d);
}

loc_80793920:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80793960;
    }
}

loc_80793924:
{
    f1.d = MemoryInline::FlatReadFloat32((r16 + 240));
    f0.d = MemoryInline::FlatReadFloat32(r26);
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32(r26, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r16 + 244));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r26 + 4), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r16 + 248));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 8));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r26 + 8), f0.d);
}

loc_80793960:
{
    f0.d = MemoryInline::FlatReadFloat32((r19 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f29.d, f0.d);
    SetCRFloatResident(cr, 0, f0.d, f27.d);
}

loc_80793974:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80793980;
    }
}

loc_80793978:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r26 + 4), f0.d);
}

loc_80793980:
{
    r0 = MemoryInline::FlatRead32((r25 + 324));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r18), static_cast<int32_t>(1));
}

loc_80793988:
{
    addr_lfsx_80793988_loc_0 = (r23 + r0);
    f21.d = MemoryInline::FlatReadFloat32(addr_lfsx_80793988_loc_0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80793998;
    }
}

loc_80793990:
{
    r0 = MemoryInline::FlatRead32((r16 + 332));
    addr_stfsx_80793994_loc_0 = (r22 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_80793994_loc_0, f21.d);
}

loc_80793998:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r26));
    r17 = (r20 + 32);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r19));
    r3 = (r1 + 80);
    f0.d = MemoryInline::FlatReadFloat32((r16 + 168));
    r4 = (r1 + 68);
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f3.d, f2.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r26_psq_tmp_3 = (r26 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r26_psq_tmp_3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r19_psq_tmp_2 = (r19 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r19_psq_tmp_2));
    f21.d = static_cast<double>(PpcForceSingleValueInline(f21.d - f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r28, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f3.d, f2.d));
    r6 = MemoryInline::FlatRead32((r1 + 92));
    f21.d = PpcFmulsInline(f21.d, f19.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r28_psq_tmp_4 = (r28 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r28_psq_tmp_4, f1.d);
    r5 = MemoryInline::FlatRead32((r1 + 96));
    r0 = MemoryInline::FlatRead32((r1 + 100));
    MemoryInline::FlatWriteRam32((r1 + 68), r6);
    MemoryInline::FlatWriteRam32((r1 + 72), r5);
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    ctx->lr = 0x807939ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80793F04u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    SetCRFloatResident(cr, 0, f1.d, f17.d);
}

loc_807939F0:
{
    if (((cr & 0x40000000u) == 0)) {
        f2.d = PPC_PsToScalarInline(f2.d);
        goto loc_80793B94;
    }
}

loc_807939F4:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 80));
    f0.d = MemoryInline::FlatReadFloat32(r19);
    f1.d = PpcFmulsInline(f1.d, f17.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32(r26, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r19 + 4));
    f1.d = PpcFmulsInline(f1.d, f17.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r26 + 4), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 88));
    f0.d = MemoryInline::FlatReadFloat32((r19 + 8));
    f1.d = PpcFmulsInline(f1.d, f17.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r26 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r25 + 288));
    SetCRFloatResident(cr, 0, f0.d, f27.d);
}

loc_80793A38:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80793A44;
    }
}

loc_80793A3C:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    MemoryInline::FlatWriteFloat32((r25 + 288), f0.d);
}

loc_80793A44:
{
    r0 = MemoryInline::FlatRead8((r16 + 172));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80793A4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80793B1C;
    }
}

loc_80793A50:
{
    r5 = MemoryInline::FlatRead32((r25 + 28));
    r3 = r27;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r27));
    r4 = (r1 + 56);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_2 = (r5 + 56);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_2));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f24.d), f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r27_psq_tmp_2 = (r27 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r27_psq_tmp_2));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r27, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_3 = (r5 + 64);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_3));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    r5 = MemoryInline::FlatRead32((r1 + 80));
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f24.d), f1.d));
    MemoryInline::FlatWriteRam32((r1 + 56), r5);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r27_psq_tmp_3 = (r27 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r27_psq_tmp_3, f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 88));
    MemoryInline::FlatWriteRam32((r1 + 64), r0);
    ctx->lr = 0x80793AA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x807872C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r29 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r16 + 152));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f27.d));
    SetCRFloatResident(cr, 0, f27.d, f1.d);
}

loc_80793AB0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80793ABC;
    }
}

loc_80793AB4:
{
    f2.d = f27.d;
    goto loc_80793ACC;
}

loc_80793ABC:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f27.d));
    f0.d = PpcFmulsInline(f31.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f0.d));
}

loc_80793ACC:
{
    r3 = (r17 + 24);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r27));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    r4 = (r1 + 44);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f2.d), f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_11 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_11));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r27_psq_tmp_4 = (r27 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r27_psq_tmp_4));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f2.d), f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_12 = (r3 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_12, f0.d);
    r5 = MemoryInline::FlatRead32((r17 + 24));
    r0 = MemoryInline::FlatRead32((r17 + 28));
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r5);
    r0 = MemoryInline::FlatRead32((r17 + 32));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    ctx->lr = 0x80793B18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x807872C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    goto loc_80793B94;
}

loc_80793B1C:
{
    r3 = MemoryInline::FlatRead32(r16);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 33554432);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80793B2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80793B38;
    }
}

loc_80793B30:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 16));
    goto loc_80793B44;
}

loc_80793B38:
{
    f0.d = MemoryInline::FlatReadFloat32((r16 + 152));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f0.d));
}

loc_80793B44:
{
    r5 = MemoryInline::FlatRead32((r25 + 28));
    r3 = (r17 + 24);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    r4 = (r1 + 32);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_4 = (r5 + 56);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_4));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f2.d), f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_13 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_13));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_5 = (r5 + 64);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_5));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f2.d), f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_14 = (r3 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_14, f0.d);
    r5 = MemoryInline::FlatRead32((r17 + 24));
    r0 = MemoryInline::FlatRead32((r17 + 28));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 32), r5);
    r0 = MemoryInline::FlatRead32((r17 + 32));
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    ctx->lr = 0x80793B94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x807872C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_80793B94:
{
    r5 = MemoryInline::FlatRead32((r25 + 28));
    r3 = (r17 + 12);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    r4 = (r1 + 20);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_7 = (r5 + 44);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_7));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f23.d), f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_16 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_16));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_8 = (r5 + 52);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_8));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f23.d), f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_17 = (r3 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_17, f0.d);
    r5 = MemoryInline::FlatRead32((r17 + 12));
    r0 = MemoryInline::FlatRead32((r17 + 16));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    r0 = MemoryInline::FlatRead32((r17 + 20));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    ctx->lr = 0x80793BE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x807872C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = r17;
    ctx->lr = 0x80793BECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r5 = ctx->gpr[5];
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
    f1.d = MemoryInline::FlatReadFloat32((r16 + 220));
    r8 = r21;
    f0.d = MemoryInline::FlatReadFloat32((r16 + 180));
    r6 = (r31 + 4095);
    f2.d = MemoryInline::FlatReadFloat32((r20 + 180));
    r9 = 0;
    f3.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r16 + 100));
    f0.d = MemoryInline::FlatReadFloat32(r26);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f21.d = static_cast<double>(PpcForceSingleValueInline(f21.d + f2.d));
    f1.d = PpcFmulsInline(f1.d, f21.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r20 + 68), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r16 + 104));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f1.d = PpcFmulsInline(f1.d, f21.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r20 + 72), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r16 + 108));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 8));
    f1.d = PpcFmulsInline(f1.d, f21.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r20 + 76), f0.d);
    r17 = MemoryInline::FlatRead32((r25 + 32));
    r3 = MemoryInline::FlatRead32((r30 + 12100));
    f1.d = MemoryInline::FlatReadFloat32((r17 + 180));
    r4 = (r17 + 68);
    r5 = (r17 + 188);
    r7 = (r17 + 216);
    ctx->lr = 0x80793C68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x8078F500u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
}

loc_80793C6C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80793C9C;
    }
}

loc_80793C70:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r24));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r17_psq_tmp_2 = (r17 + 240);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r17_psq_tmp_2));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f31.d), f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r24, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r24_psq_tmp_2 = (r24 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r24_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r17_psq_tmp_3 = (r17 + 248);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r17_psq_tmp_3));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f0.d, PPC_PsFromScalarInline(f31.d), f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r24_psq_tmp_3 = (r24 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r24_psq_tmp_3, f0.d);
    goto loc_80793CB4;
}

loc_80793C9C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r24));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f22.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r24, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r24_psq_tmp_4 = (r24 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r24_psq_tmp_4));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f22.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r24_psq_tmp_5 = (r24 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r24_psq_tmp_5, f0.d);
}

loc_80793CB4:
{
    r0 = (r18 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r17_psq_tmp_5 = (r17 + 68);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r17_psq_tmp_5));
    f1.d = f20.d;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r24));
    r3 = r20;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 120));
    PpcSetPairedFprInline(f3, PPC_PsAddInline(f2.d, f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f25.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r17_psq_tmp_6 = (r17 + 68);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r17_psq_tmp_6, f3.d);
    f0.d = PpcFmulsInline(f15.d, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r17_psq_tmp_7 = (r17 + 76);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r17_psq_tmp_7));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r24_psq_tmp_7 = (r24 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r24_psq_tmp_7));
    PpcSetPairedFprInline(f3, PPC_PsAddInline(f2.d, f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f16.d + f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r17_psq_tmp_8 = (r17 + 76);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r17_psq_tmp_8, f3.d);
    // inline leaf 0x8079ED1C (12 guest instruction(s))
}

loc_inl3_0x8079ED1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 104));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_inl3_0x8079ED24:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl3_0x8079ED44;
    }
}

loc_inl3_0x8079ED28:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 104), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_inl3_0x8079ED34:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl3_0x8079ED3C;
    }
}

loc_inl3_0x8079ED38:
{
    MemoryInline::FlatWriteFloat32((r3 + 104), f1.d);
}

loc_inl3_0x8079ED3C:
{
    r3 = 1;
    goto loc_inl3_cont_8079ED1C;
}

loc_inl3_0x8079ED44:
{
    r3 = 0;
}

loc_inl3_cont_8079ED1C:
{
    // end of inlined leaf 0x8079ED1C
}

loc_80793CFC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        f3.d = PPC_PsToScalarInline(f3.d);
        goto loc_80793D0C;
    }
}

loc_80793D00:
{
    r3 = r20;
    r4 = (r16 + 176);
    // inline leaf 0x8079EDB4 (31 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r3 + 104));
    r5 = 0x809C0000u;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    r5 = (r5 + 12104);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f0.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_4 = (r4 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_4));
    r4 = (r0 * 116);
    r0 = MemoryInline::FlatRead32((r3 + 116));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_18 = (r3 + 92);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_18, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f0.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_19 = (r3 + 100);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_19, f1.d);
    r6 = (r0 | 64);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r4 = (r5 + r4);
    MemoryInline::FlatWrite32((r3 + 116), r6);
    r0 = (r0 * 116);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 96));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 56));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 60));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 100));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    r5 = (r5 + r0);
    r4 = MemoryInline::FlatRead32((r3 + 164));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 180), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 184), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 52));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    // end of inlined leaf 0x8079EDB4
}

loc_80793D0C:
{
    r19 = r26;
    r26 = (r26 + 12);
    r25 = (r25 + 4);
    r24 = (r24 + 12);
    r18 = (r18 + 1);
}

loc_80793D20:
{
    r0 = MemoryInline::FlatRead32((r16 + 80));
}

loc_80793D28:
{
    if ((static_cast<int32_t>(r18) < static_cast<int32_t>(r0))) {
        goto loc_807937C0;
    }
}

loc_80793D2C:
{
    r3 = MemoryInline::FlatRead32((r16 + 12));
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r0 & 580);
}

loc_80793D38:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(580));
}

loc_80793D3C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80793E64;
    }
}

loc_80793D40:
{
    r0 = MemoryInline::FlatRead32((r16 + 20));
    r3 = 0;
}

loc_80793D4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(16))) {
        goto loc_80793D6C;
    }
}

loc_80793D50:
{
    r0 = MemoryInline::FlatRead32((r16 + 84));
}

loc_80793D58:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80793D6C;
    }
}

loc_80793D5C:
{
    r0 = MemoryInline::FlatRead8((r16 + 340));
}

loc_80793D64:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80793D6C;
    }
}

loc_80793D68:
{
    r3 = 1;
}

loc_80793D6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80793D70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80793E64;
    }
}

loc_80793D74:
{
    r4 = MemoryInline::FlatRead32((r16 + 80));
    r3 = 0x809C0000u;
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r16 + 80), r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r4 = (r16 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 13848));
    r27 = MemoryInline::FlatRead32((r4 + 32));
    r0 = MemoryInline::FlatRead32((r27 + 4));
    r4 = r27;
    r0 = (r0 * 36);
    r3 = (r3 + r0);
    r3 = (r3 + 72);
    ctx->lr = 0x80793DACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x807961F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    r3 = MemoryInline::FlatRead32((r16 + 12));
    r4 = r27;
    ctx->lr = 0x80793DB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x807988F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    r0 = MemoryInline::FlatRead32((r27 + 120));
    r3 = r27;
    r4 = r16;
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r27 + 120), r0);
    r12 = MemoryInline::FlatRead32(r27);
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x80793DDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
}

loc_80793DE0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80793DF0;
    }
}

loc_80793DE4:
{
    r0 = MemoryInline::FlatRead32((r27 + 120));
    r0 = (r0 & -33554433);
    MemoryInline::FlatWrite32((r27 + 120), r0);
}

loc_80793DF0:
{
}

loc_80793DF4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80793E14;
    }
}

loc_80793DF8:
{
    r3 = MemoryInline::FlatRead32((r16 + 12));
    r0 = MemoryInline::FlatRead8((r3 + 569));
}

loc_80793E04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80793E14;
    }
}

loc_80793E08:
{
    r0 = MemoryInline::FlatRead32((r27 + 120));
    r0 = (r0 | 1048576);
    MemoryInline::FlatWrite32((r27 + 120), r0);
}

loc_80793E14:
{
    r3 = MemoryInline::FlatRead32((r16 + 20));
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r27 + 120));
    r4 = (r4 + 12104);
    r3 = (r3 * 116);
    r0 = (r0 & 192);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80793E2C:
{
    r5 = (r4 + r3);
    r4 = MemoryInline::FlatRead32((r5 + 24));
    r3 = MemoryInline::FlatRead32((r5 + 28));
    r0 = MemoryInline::FlatRead32((r5 + 32));
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80793E58;
    }
}

loc_80793E4C:
{
    MemoryInline::FlatWrite32((r27 + 360), r4);
    MemoryInline::FlatWrite32((r27 + 364), r3);
    MemoryInline::FlatWrite32((r27 + 368), r0);
}

loc_80793E58:
{
    r3 = MemoryInline::FlatRead32((r16 + 12));
    r4 = r27;
    ctx->lr = 0x80793E64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x80798928u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
}

loc_80793E64:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 208), 0, 280u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 256u, (r1 + 464));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 240u, (r1 + 448));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 224u, (r1 + 432));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 208u, (r1 + 416));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 192u, (r1 + 400));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 176u, (r1 + 384));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 160u, (r1 + 368));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 144u, (r1 + 352));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 128u, (r1 + 336));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 112u, (r1 + 320));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f21.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 96u, (r1 + 304));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f20.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 80u, (r1 + 288));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f19.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 64u, (r1 + 272));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f18.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 48u, (r1 + 256));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f17.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 32u, (r1 + 240));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f16.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 16u, (r1 + 224));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 208);
    f15.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 0u, (r1 + 208));
    // inline leaf 0x800215C0 (17 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 48u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 56u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 56u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215C0
    r0 = MemoryInline::ReadResolved32(guest_range_4, 276u, (r1 + 484));
    ctx->lr = r0;
    r1 = (r1 + 480);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8079356C func_8079356C preserves=false fpr_mask=0xFFFF8000
