#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801828DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_stbux_80182FFC_loc_0 = 0;
    uint32_t addr_stbux_80183A88_loc_0 = 0;
    uint32_t addr_stbux_80183AFC_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_10 = 0;
    uint32_t r0_mdest_11 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mdest_6 = 0;
    uint32_t r0_mdest_7 = 0;
    uint32_t r0_mdest_8 = 0;
    uint32_t r0_mdest_9 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_10 = 0;
    uint32_t r0_mrot_11 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_mrot_6 = 0;
    uint32_t r0_mrot_7 = 0;
    uint32_t r0_mrot_8 = 0;
    uint32_t r0_mrot_9 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_28 = 0;
    uint32_t r0_rot_29 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_30 = 0;
    uint32_t r0_rot_31 = 0;
    uint32_t r0_rot_32 = 0;
    uint32_t r0_rot_33 = 0;
    uint32_t r0_rot_34 = 0;
    uint32_t r0_rot_35 = 0;
    uint32_t r0_rot_36 = 0;
    uint32_t r0_rot_37 = 0;
    uint32_t r0_rot_38 = 0;
    uint32_t r0_rot_39 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_40 = 0;
    uint32_t r0_rot_41 = 0;
    uint32_t r0_rot_42 = 0;
    uint32_t r0_rot_43 = 0;
    uint32_t r0_rot_44 = 0;
    uint32_t r0_rot_45 = 0;
    uint32_t r0_rot_46 = 0;
    uint32_t r0_rot_47 = 0;
    uint32_t r0_rot_48 = 0;
    uint32_t r0_rot_49 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_50 = 0;
    uint32_t r0_rot_51 = 0;
    uint32_t r0_rot_52 = 0;
    uint32_t r0_rot_53 = 0;
    uint32_t r0_rot_54 = 0;
    uint32_t r0_rot_55 = 0;
    uint32_t r0_rot_56 = 0;
    uint32_t r0_rot_57 = 0;
    uint32_t r0_rot_58 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r14_rot_0 = 0;
    uint32_t r14_rot_1 = 0;
    uint32_t r14_rot_2 = 0;
    uint32_t r14_rot_3 = 0;
    uint32_t r16_addr_0 = 0;
    uint32_t r16_addr_1 = 0;
    uint32_t r16_addr_10 = 0;
    uint32_t r16_addr_2 = 0;
    uint32_t r16_addr_3 = 0;
    uint32_t r16_addr_4 = 0;
    uint32_t r16_addr_5 = 0;
    uint32_t r16_addr_6 = 0;
    uint32_t r16_addr_7 = 0;
    uint32_t r16_addr_8 = 0;
    uint32_t r16_addr_9 = 0;
    uint32_t r19_rot_0 = 0;
    uint32_t r20_addr_0 = 0;
    uint32_t r20_addr_1 = 0;
    uint32_t r20_addr_2 = 0;
    uint32_t r20_addr_3 = 0;
    uint32_t r20_addr_4 = 0;
    uint32_t r20_rot_0 = 0;
    uint32_t r20_rot_1 = 0;
    uint32_t r20_rot_2 = 0;
    uint32_t r20_rot_3 = 0;
    uint32_t r23_addr_0 = 0;
    uint32_t r23_addr_1 = 0;
    uint32_t r23_addr_2 = 0;
    uint32_t r23_addr_3 = 0;
    uint32_t r23_addr_4 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r25_rot_1 = 0;
    uint32_t r25_rot_2 = 0;
    uint32_t r25_rot_3 = 0;
    uint32_t r25_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_14 = 0;
    uint32_t r3_rot_15 = 0;
    uint32_t r3_rot_16 = 0;
    uint32_t r3_rot_17 = 0;
    uint32_t r3_rot_18 = 0;
    uint32_t r3_rot_19 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_10 = 0;
    uint32_t r4_rot_11 = 0;
    uint32_t r4_rot_12 = 0;
    uint32_t r4_rot_13 = 0;
    uint32_t r4_rot_14 = 0;
    uint32_t r4_rot_15 = 0;
    uint32_t r4_rot_16 = 0;
    uint32_t r4_rot_17 = 0;
    uint32_t r4_rot_18 = 0;
    uint32_t r4_rot_19 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_10 = 0;
    uint32_t r5_rot_11 = 0;
    uint32_t r5_rot_12 = 0;
    uint32_t r5_rot_13 = 0;
    uint32_t r5_rot_14 = 0;
    uint32_t r5_rot_15 = 0;
    uint32_t r5_rot_16 = 0;
    uint32_t r5_rot_17 = 0;
    uint32_t r5_rot_18 = 0;
    uint32_t r5_rot_19 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_20 = 0;
    uint32_t r5_rot_21 = 0;
    uint32_t r5_rot_22 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_rot_9 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_10 = 0;
    uint32_t r6_rot_11 = 0;
    uint32_t r6_rot_12 = 0;
    uint32_t r6_rot_13 = 0;
    uint32_t r6_rot_14 = 0;
    uint32_t r6_rot_15 = 0;
    uint32_t r6_rot_16 = 0;
    uint32_t r6_rot_17 = 0;
    uint32_t r6_rot_18 = 0;
    uint32_t r6_rot_19 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_20 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r6_rot_8 = 0;
    uint32_t r6_rot_9 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_10 = 0;
    uint32_t r7_rot_11 = 0;
    uint32_t r7_rot_12 = 0;
    uint32_t r7_rot_13 = 0;
    uint32_t r7_rot_14 = 0;
    uint32_t r7_rot_15 = 0;
    uint32_t r7_rot_16 = 0;
    uint32_t r7_rot_17 = 0;
    uint32_t r7_rot_18 = 0;
    uint32_t r7_rot_19 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_20 = 0;
    uint32_t r7_rot_21 = 0;
    uint32_t r7_rot_22 = 0;
    uint32_t r7_rot_23 = 0;
    uint32_t r7_rot_24 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r7_rot_8 = 0;
    uint32_t r7_rot_9 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_10 = 0;
    uint32_t r8_rot_11 = 0;
    uint32_t r8_rot_12 = 0;
    uint32_t r8_rot_13 = 0;
    uint32_t r8_rot_14 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint32_t r8_rot_8 = 0;
    uint32_t r8_rot_9 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_10 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint32_t r9_rot_6 = 0;
    uint32_t r9_rot_7 = 0;
    uint32_t r9_rot_8 = 0;
    uint32_t r9_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_10 = nullptr;
    uint8_t* guest_range_11 = nullptr;
    uint8_t* guest_range_12 = nullptr;
    uint8_t* guest_range_13 = nullptr;
    uint8_t* guest_range_14 = nullptr;
    uint8_t* guest_range_15 = nullptr;
    uint8_t* guest_range_16 = nullptr;
    uint8_t* guest_range_17 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;
    uint8_t* guest_range_9 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801828DC;

loc_801828DC:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r11 = (r1 + 128);
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
    r14 = 0;
    r8 = 0x80290000u;
    MemoryInline::FlatWrite32((r3 + 28), r14);
    r9 = (r3 + 28);
    r8 = (r8 + -17000);
    r7 = 0x80180000u;
    MemoryInline::FlatWrite32((r3 + 32), r14);
    r6 = 0x80180000u;
    r16 = r4;
    r17 = r5;
    r4 = (r7 + 10448);
    r5 = (r6 + 1708);
    MemoryInline::FlatWrite32(r3, r8);
    r15 = r3;
    r6 = 4;
    r7 = 4;
    MemoryInline::FlatWrite32((r3 + 24), r14);
    MemoryInline::FlatWrite32((r3 + 28), r9);
    MemoryInline::FlatWrite32((r3 + 32), r9);
    r3 = (r3 + 60);
    ctx->lr = 0x80182944u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80020FF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x80250000u;
    r7 = 255;
    r5 = (r4 + 11048);
    r0 = MemoryInline::FlatRead32((r15 + 80));
    r11 = MemoryInline::FlatRead16((r4 + 11048));
    r11 = (r11 << 16);
    r11 = (static_cast<int32_t>(r11) >> 16);
    r4 = r16;
    r3 = MemoryInline::FlatRead32((r15 + 76));
    r0 = (r0 & 31);
    r10 = MemoryInline::FlatRead16((r5 + 2));
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    r6 = (r3 & 31);
    r9 = MemoryInline::FlatRead16((r5 + 4));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r8 = MemoryInline::FlatRead16((r5 + 6));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r3 = (r15 + 4);
    MemoryInline::FlatWrite16((r15 + 36), static_cast<uint16_t>(r11));
    r5 = 20;
    MemoryInline::FlatWrite16((r15 + 38), static_cast<uint16_t>(r10));
    MemoryInline::FlatWrite16((r15 + 40), static_cast<uint16_t>(r9));
    MemoryInline::FlatWrite16((r15 + 42), static_cast<uint16_t>(r8));
    MemoryInline::FlatWrite16((r15 + 44), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r15 + 46), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r15 + 48), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r15 + 50), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r15 + 52), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r15 + 54), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r15 + 56), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r15 + 58), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite32((r15 + 76), r6);
    MemoryInline::FlatWrite32((r15 + 80), r0);
    MemoryInline::FlatWrite8((r15 + 84), static_cast<uint8_t>(r14));
    MemoryInline::FlatWrite32((r15 + 88), r14);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x800131E0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    guest_range_1 = MemoryInline::ResolveRangeHost((r16 + 20), 0, 44u, true, false);
    r20 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r16 + 60));
    r23 = (r16 + 64);
    r10 = MemoryInline::ReadResolved16(guest_range_1, 0u, (r16 + 20));
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    r18 = 8;
    r12_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(28));
    r12 = (r12_rot_0 & 15);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & 60);
    r0 = (r12 * 20);
    r11 = (r20 & 15);
    r24 = (r3 + 64);
    r9 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r16 + 22));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r8 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r16 + 24));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r14_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(26));
    r14 = (r14_rot_0 & 60);
    r22 = (r16 + r24);
    r24 = (r24 + r0);
    r7 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r16 + 26));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r21 = (r16 + r24);
    r6 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r16 + 28));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r24 = (r24 + r14);
    r5 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r16 + 30));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
}

loc_80182A10:
{
    r4 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r16 + 32));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r19_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(24));
    r19 = (r19_rot_0 & 15);
    r3 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r16 + 34));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 16u, (r16 + 36));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r30 = MemoryInline::ReadResolved16(guest_range_1, 18u, (r16 + 38));
    r30 = (r30 << 16);
    r30 = (static_cast<int32_t>(r30) >> 16);
    r29 = MemoryInline::ReadResolved16(guest_range_1, 20u, (r16 + 40));
    r29 = (r29 << 16);
    r29 = (static_cast<int32_t>(r29) >> 16);
    r28 = MemoryInline::ReadResolved16(guest_range_1, 22u, (r16 + 42));
    r28 = (r28 << 16);
    r28 = (static_cast<int32_t>(r28) >> 16);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r16 + 44));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r16 + 48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r14 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r16 + 52));
            r14 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r16 + 56));
        }
    }
    guest_range_17 = MemoryInline::ResolveRangeHost((r15 + 36), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_17, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r10)) << 16) | static_cast<uint16_t>(r9)))) {
        MemoryInline::WriteResolved16(guest_range_17, 0u, (r15 + 36), r10);
        MemoryInline::WriteResolved16(guest_range_17, 2u, (r15 + 38), r9);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_17, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r8)) << 16) | static_cast<uint16_t>(r7)))) {
        MemoryInline::WriteResolved16(guest_range_17, 4u, (r15 + 40), r8);
        MemoryInline::WriteResolved16(guest_range_17, 6u, (r15 + 42), r7);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_17, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r6)) << 16) | static_cast<uint16_t>(r5)))) {
        MemoryInline::WriteResolved16(guest_range_17, 8u, (r15 + 44), r6);
        MemoryInline::WriteResolved16(guest_range_17, 10u, (r15 + 46), r5);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_17, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_17, 12u, (r15 + 48), r4);
        MemoryInline::WriteResolved16(guest_range_17, 14u, (r15 + 50), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_17, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_17, 16u, (r15 + 52), r0);
        MemoryInline::WriteResolved16(guest_range_17, 18u, (r15 + 54), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_17, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r29)) << 16) | static_cast<uint16_t>(r28)))) {
        MemoryInline::WriteResolved16(guest_range_17, 20u, (r15 + 56), r29);
        MemoryInline::WriteResolved16(guest_range_17, 22u, (r15 + 58), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_17, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_17, 24u, (r15 + 60), r27);
        MemoryInline::WriteResolved32(guest_range_17, 28u, (r15 + 64), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_17, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r14)))) {
        MemoryInline::WriteResolved32(guest_range_17, 32u, (r15 + 68), r25);
        MemoryInline::WriteResolved32(guest_range_17, 36u, (r15 + 72), r14);
    }
    if ((static_cast<uint32_t>(r11) > static_cast<uint32_t>(8))) {
        goto loc_80182A84;
    }
}

loc_80182A80:
{
    r18 = r11;
}

loc_80182A84:
{
}

loc_80182A88:
{
    r14 = 10;
    if ((static_cast<uint32_t>(r12) > static_cast<uint32_t>(10))) {
        goto loc_80182A94;
    }
}

loc_80182A90:
{
    r14 = r12;
}

loc_80182A94:
{
}

loc_80182A98:
{
    r27 = 8;
    if ((static_cast<uint32_t>(r19) > static_cast<uint32_t>(8))) {
        goto loc_80182AA4;
    }
}

loc_80182AA0:
{
    r27 = r19;
}

loc_80182AA4:
{
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(7));
    r5 = (r5_rot_0 & 1);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(20));
    r0 = (r0_rot_0 & 1);
    r4 = (0 - r5);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(5));
    r3 = (r3_rot_1 & 1);
    MemoryInline::FlatWriteRam8((r1 + 52), static_cast<uint8_t>(r0));
    r0 = (0 - r3);
    r3 = (r0 | r3);
    r4 = (r4 | r5);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(9));
    r0 = (r0_rot_1 & 1);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(19));
    r6 = (r6_rot_0 & 3);
    MemoryInline::FlatWriteRam8((r1 + 51), static_cast<uint8_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
}

loc_80182AD8:
{
    r28 = 3;
    MemoryInline::FlatWriteRam8((r1 + 49), static_cast<uint8_t>(r0));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(8));
    r0 = (r0_rot_3 & 1);
    MemoryInline::FlatWriteRam8((r1 + 50), static_cast<uint8_t>(r0));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
    MemoryInline::FlatWriteRam8((r1 + 48), static_cast<uint8_t>(r0));
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(3))) {
        goto loc_80182AF8;
    }
}

loc_80182AF4:
{
    r28 = r6;
}

loc_80182AF8:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(17));
    r0 = (r0_rot_5 & 7);
    r29 = 4;
}

loc_80182B04:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(4))) {
        goto loc_80182B0C;
    }
}

loc_80182B08:
{
    r29 = r0;
}

loc_80182B0C:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(14));
    r0 = (r0_rot_6 & 31);
    r30 = 16;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
}

loc_80182B18:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80182B20;
    }
}

loc_80182B1C:
{
    r30 = r0;
}

loc_80182B20:
{
    r0 = MemoryInline::FlatRead8((r1 + 49));
    r3 = r15;
    r8 = MemoryInline::FlatRead8((r1 + 52));
    r4 = (r18 & 255);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r5 = (r14 & 255);
    r0 = MemoryInline::FlatRead8((r1 + 48));
    r6 = (r27 & 255);
    r7 = (r30 & 255);
    r9 = (r29 & 255);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r10 = (r28 & 255);
    r0 = MemoryInline::FlatRead8((r1 + 51));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r0 = MemoryInline::FlatRead8((r1 + 50));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->lr = 0x80182B64u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80183BD8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r15 + 88));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80182B6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80183B0C;
    }
}

loc_80182B70:
{
    r19 = (r18 & 255);
}

loc_80182B74:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(0))) {
        goto loc_80182BB8;
    }
}

loc_80182B78:
{
    r3 = MemoryInline::FlatRead32((r15 + 80));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(9));
    r0 = (r0_rot_7 & 480);
    r20_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r20 = (r20_rot_1 & 15);
    r25 = (r4 + r0);
    goto loc_80182BA4;
}

loc_80182B8C:
{
    r3 = r25;
    r4 = 0;
    r5 = 32;
    ctx->lr = 0x80182B9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r25 = (r25 + 32);
    r20 = (r20 + 1);
}

loc_80182BA4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r20), static_cast<uint32_t>(r19));
}

loc_80182BA8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80182B8C;
    }
}

loc_80182BAC:
{
    r0 = MemoryInline::FlatRead32((r15 + 80));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r18), static_cast<uint32_t>(28));
    r0_mrot_1 = (r0_rot_8 & -268435456);
    r0_mdest_1 = (r0 & 268435455);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite32((r15 + 80), r0);
}

loc_80182BB8:
{
    r0 = (r18 & 255);
}

loc_80182BBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80182C4C;
    }
}

loc_80182BC0:
{
    r3 = MemoryInline::FlatRead32(r17);
    r18 = 0;
    r19 = MemoryInline::FlatRead32((r15 + 88));
    r31 = 1953038336;
    r20 = (r3 + 12);
    goto loc_80182C38;
}

loc_80182BD8:
{
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r18), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & 1020);
    r3 = MemoryInline::FlatRead32((r17 + 12));
    r26 = (r23 + r0);
    r23_addr_2 = (r23 + r0);
    r0 = MemoryInline::FlatRead16(r23_addr_2);
    r12 = MemoryInline::FlatRead32(r3);
    r4 = (r31 + 28007);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_13 & -8);
    r6 = 0;
    r20_addr_2 = (r20 + r0);
    r0 = MemoryInline::FlatRead32(r20_addr_2);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    r5 = (r20 + r0);
    ctr = r12;
    ctx->lr = 0x80182C0Cu;
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
    r10 = ctx->gpr[10];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r15 + 88));
    r25_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r18), static_cast<uint32_t>(5));
    r25 = (r25_rot_2 & 8160);
    r4 = r3;
    r5 = 0;
    r3 = (r0 + r25);
    ctx->lr = 0x80182C24u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801813E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead8((r26 + 2));
    r3 = (r19 + r25);
    r5 = MemoryInline::FlatRead8((r26 + 3));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80170B50u>(ctx);
    r18 = (r18 + 1);
}

loc_80182C38:
{
    r0 = MemoryInline::FlatRead32((r15 + 80));
    r3 = (r18 & 255);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_11 & 15);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80182C48:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80182BD8;
    }
}

loc_80182C4C:
{
    r0 = MemoryInline::FlatRead32((r15 + 76));
    r3 = (r14 & 255);
}

loc_80182C54:
{
    r4 = MemoryInline::FlatRead32((r15 + 88));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
    r0 = (r0_rot_15 & 480);
    r4 = (r4 + r0);
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80182D5C;
    }
}

loc_80182C64:
{
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r0 = (r0_rot_16 & 1073741823);
}

loc_80182C68:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80182D24;
    }
}

loc_80182C70:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r22, 0, 80u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, r22);
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r22 + 4));
        }
    }
    guest_range_3 = MemoryInline::ResolveRangeHost(r4, 0, 80u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, r4, f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r22 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r4 + 4), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r22 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r4 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r22 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r4 + 12), f1.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r22 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r4 + 16), f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r22 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r4 + 20), f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 28u, (r22 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r4 + 24), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r22 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r4 + 28), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 36u, (r22 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r4 + 32), f1.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 40u, (r22 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 36u, (r4 + 36), f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r22 + 44));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 40u, (r4 + 40), f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 48u, (r22 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 44u, (r4 + 44), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 52u, (r22 + 52));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 48u, (r4 + 48), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 56u, (r22 + 56));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 52u, (r4 + 52), f1.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 60u, (r22 + 60));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 56u, (r4 + 56), f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 64u, (r22 + 64));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 60u, (r4 + 60), f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 68u, (r22 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 64u, (r4 + 64), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 72u, (r22 + 72));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 68u, (r4 + 68), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 76u, (r22 + 76));
    r22 = (r22 + 80);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 72u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 72u, (r4 + 72), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 76u, (r4 + 76), f0.d);
    }
    r4 = (r4 + 80);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80182C70;
    }
}

loc_80182D1C:
{
    r3 = (r3 & 3);
}

loc_80182D20:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80182D5C;
    }
}

loc_80182D24:
{
    ctr = r3;
}

loc_80182D28:
{
    f2.d = MemoryInline::FlatReadFloat32(r22);
    f1.d = MemoryInline::FlatReadFloat32((r22 + 4));
    MemoryInline::FlatWriteFloat32(r4, f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r22 + 8));
    MemoryInline::FlatWriteFloat32((r4 + 4), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r22 + 12));
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r22 + 16));
    r22 = (r22 + 20);
    MemoryInline::FlatWriteFloat32((r4 + 12), f1.d);
    MemoryInline::FlatWriteFloat32((r4 + 16), f0.d);
    r4 = (r4 + 20);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80182D28;
    }
}

loc_80182D5C:
{
    r3 = MemoryInline::FlatRead32((r15 + 76));
    r5 = (r27 & 255);
}

loc_80182D64:
{
    r4 = MemoryInline::FlatRead32((r15 + 88));
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0 = (r0_rot_18 & 15);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(9));
    r3 = (r3_rot_2 & 480);
    r0 = (r0 * 20);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80182EB0;
    }
}

loc_80182D80:
{
    r0 = MemoryInline::FlatRead32((r15 + 80));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r4 = (r4_rot_1 & 15);
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
}

loc_80182D8C:
{
    if (((cr & 0x08000000u) == 0)) {
        goto loc_80182EA4;
    }
}

loc_80182D90:
{
    r0 = (r5 - r4);
    r9 = (r5 + -8);
}

loc_80182D9C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8))) {
        goto loc_80182E60;
    }
}

loc_80182DA0:
{
    if (((cr & 0x04000000u) != 0)) {
        goto loc_80182E60;
    }
}

loc_80182DA4:
{
    r0 = (r9 + 7);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -4);
    r0 = (r0 - r4);
    r8 = 1;
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_19 & 536870911);
    r10 = (r3 + r5);
    r7 = 4;
    r6 = 60;
    r5 = 0;
    ctr = r0;
}

loc_80182DD0:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r9))) {
        goto loc_80182E60;
    }
}

loc_80182DD4:
{
    guest_range_4 = MemoryInline::ResolveRangeHost(r10, 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 0u, r10, static_cast<uint8_t>(r8));
    r4 = (r4 + 8);
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r10 + 1), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r10 + 2), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r10 + 3), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 4u, (r10 + 4), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_4, 5u, (r10 + 5), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_4, 6u, (r10 + 6), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_4, 7u, (r10 + 7), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 8u, (r10 + 8), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_4, 9u, (r10 + 9), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_4, 10u, (r10 + 10), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_4, 11u, (r10 + 11), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 12u, (r10 + 12), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_4, 13u, (r10 + 13), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_4, 14u, (r10 + 14), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_4, 15u, (r10 + 15), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 16u, (r10 + 16), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_4, 17u, (r10 + 17), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_4, 18u, (r10 + 18), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_4, 19u, (r10 + 19), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 20u, (r10 + 20), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_4, 21u, (r10 + 21), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_4, 22u, (r10 + 22), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_4, 23u, (r10 + 23), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 24u, (r10 + 24), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_4, 25u, (r10 + 25), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_4, 26u, (r10 + 26), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_4, 27u, (r10 + 27), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 28u, (r10 + 28), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_4, 29u, (r10 + 29), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_4, 30u, (r10 + 30), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_4, 31u, (r10 + 31), static_cast<uint8_t>(r5));
    r10 = (r10 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80182DD4;
    }
}

loc_80182E60:
{
    r5 = (r27 & 255);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r6 = (r6_rot_1 & -4);
    r0 = (r5 - r4);
    r9 = 1;
    r10 = (r3 + r6);
    r8 = 4;
    r7 = 60;
    r6 = 0;
    ctr = r0;
}

loc_80182E88:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r5))) {
        goto loc_80182EA4;
    }
}

loc_80182E8C:
{
    MemoryInline::FlatWrite8(r10, static_cast<uint8_t>(r9));
    MemoryInline::FlatWrite8((r10 + 1), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8((r10 + 2), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r10 + 3), static_cast<uint8_t>(r6));
    r10 = (r10 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80182E8C;
    }
}

loc_80182EA4:
{
    r0 = MemoryInline::FlatRead32((r15 + 80));
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(20));
    r0_mrot_3 = (r0_rot_22 & 15728640);
    r0_mdest_3 = (r0 & -15728641);
    r0 = (r0_mdest_3 | r0_mrot_3);
    MemoryInline::FlatWrite32((r15 + 80), r0);
}

loc_80182EB0:
{
    r5 = 0;
    goto loc_80182EE4;
}

loc_80182EB8:
{
    r4 = MemoryInline::FlatRead8(r21);
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead8((r21 + 1));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r21 + 2));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r21 + 3));
    r21 = (r21 + 4);
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    r3 = (r3 + 4);
}

loc_80182EE4:
{
    r0 = MemoryInline::FlatRead32((r15 + 80));
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r0 = (r0_rot_25 & 15);
}

loc_80182EF0:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r0))) {
        goto loc_80182EB8;
    }
}

loc_80182EF4:
{
    r0 = MemoryInline::FlatRead8((r1 + 49));
}

loc_80182EFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80182F4C;
    }
}

loc_80182F00:
{
    r4 = MemoryInline::FlatRead32((r15 + 76));
    r7 = (r16 + r24);
    r6 = MemoryInline::FlatRead32((r15 + 88));
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0 = (r0_rot_26 & 15);
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(14));
    r5 = (r5_rot_5 & 60);
    r3 = (r0 * 20);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
    r4 = (r4_rot_3 & 480);
    r16_addr_1 = (r16 + r24);
    r0 = MemoryInline::FlatRead8(r16_addr_1);
    r24 = (r24 + 4);
    r5 = (r5 + r4);
    r4 = MemoryInline::FlatRead8((r7 + 1));
    r3 = (r6 + r3);
    r5 = (r5 + r3);
    r3 = MemoryInline::FlatRead8((r7 + 2));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r7 + 3));
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r0));
}

loc_80182F4C:
{
    r0 = MemoryInline::FlatRead8((r1 + 48));
}

loc_80182F54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80182FAC;
    }
}

loc_80182F58:
{
    r6 = MemoryInline::FlatRead32((r15 + 76));
    r8 = (r16 + r24);
    r7 = MemoryInline::FlatRead32((r15 + 88));
    r0_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r0 = (r0_rot_28 & 15);
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(14));
    r4 = (r4_rot_5 & 60);
    r5 = (r0 * 20);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(9));
    r3 = (r3_rot_3 & 480);
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(26));
    r6 = (r6_rot_4 & 4);
    r16_addr_3 = (r16 + r24);
    r0 = MemoryInline::FlatRead8(r16_addr_3);
    r3 = (r4 + r3);
    r4 = MemoryInline::FlatRead8((r8 + 1));
    r5 = (r6 + r5);
    r3 = (r7 + r3);
    r5 = (r5 + r3);
    r3 = MemoryInline::FlatRead8((r8 + 2));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r24 = (r24 + 4);
    r0 = MemoryInline::FlatRead8((r8 + 3));
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r0));
}

loc_80182FAC:
{
    r0 = MemoryInline::FlatRead8((r1 + 52));
}

loc_80182FB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80183010;
    }
}

loc_80182FB8:
{
    r4 = MemoryInline::FlatRead32((r15 + 76));
    r10 = (r16 + r24);
    r16_addr_5 = (r16 + r24);
    r5 = MemoryInline::FlatRead8(r16_addr_5);
    r24 = (r24 + 4);
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0 = (r0_rot_30 & 15);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(14));
    r3 = (r3_rot_5 & 60);
    r6 = (r0 * 20);
    r9 = MemoryInline::FlatRead32((r15 + 88));
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
    r0 = (r0_rot_31 & 480);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r8 = (r8_rot_1 & 4);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(26));
    r7 = (r7_rot_1 & 4);
    r3 = (r3 + r0);
    r0 = (r8 + r7);
    r4 = MemoryInline::FlatRead8((r10 + 1));
    r7 = (r6 + r3);
    r3 = MemoryInline::FlatRead8((r10 + 2));
    r6 = (r9 + r0);
    addr_stbux_80182FFC_loc_0 = (r6 + r7);
    MemoryInline::FlatWrite8(addr_stbux_80182FFC_loc_0, static_cast<uint8_t>(r5));
    r6 = addr_stbux_80182FFC_loc_0;
    r0 = MemoryInline::FlatRead8((r10 + 3));
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r0));
}

loc_80183010:
{
    r3 = (r28 & 255);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80183018:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_8018326C;
    }
}

loc_8018301C:
{
    r12 = MemoryInline::FlatRead32((r15 + 76));
    r5 = (r16 + r24);
    r17 = MemoryInline::FlatRead32((r15 + 88));
    r6 = 0;
    r0_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(8));
    r0 = (r0_rot_33 & 15);
    r11_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(28));
    r11 = (r11_rot_1 & 4);
    r4 = (r0 * 20);
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(26));
    r9 = (r9_rot_1 & 4);
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(20));
    r10 = (r10_rot_1 & 4);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(27));
    r8 = (r8_rot_3 & 4);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(14));
    r7 = (r7_rot_3 & 60);
    r0_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(9));
    r0 = (r0_rot_34 & 480);
    r0 = (r7 + r0);
    r14_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(19));
    r14 = (r14_rot_1 & 28);
    r12_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(29));
    r12 = (r12_rot_1 & 4);
    r8 = (r10 + r8);
    r7 = (r11 + r9);
    r4 = (r4 + r0);
    r7 = (r8 + r7);
    r0 = (r14 + r12);
    r4 = (r7 + r4);
    r0 = (r17 + r0);
    r0 = (r4 + r0);
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8018326C;
    }
}

loc_8018307C:
{
}

loc_80183080:
{
    r8 = (r3 + -8);
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(8))) {
        goto loc_80183218;
    }
}

loc_80183088:
{
    r7 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_801830A4;
    }
}

loc_80183090:
{
    r4 = 0x80000000u;
    r4 = (r4 + -2);
}

loc_8018309C:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r4))) {
        goto loc_801830A4;
    }
}

loc_801830A0:
{
    r7 = 1;
}

loc_801830A4:
{
}

loc_801830A8:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80183218;
    }
}

loc_801830AC:
{
    r7 = (r8 + 7);
    r3 = r5;
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(29));
    r7 = (r7_rot_4 & 536870911);
    r4 = r0;
    ctr = r7;
}

loc_801830C4:
{
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(0))) {
        goto loc_80183218;
    }
}

loc_801830C8:
{
    guest_range_5 = MemoryInline::ResolveRangeHost(r3, 0, 160u, true, false);
    r8 = MemoryInline::ReadResolved32(guest_range_5, 0u, r3);
    r6 = (r6 + 8);
    r7 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r3 + 4));
    guest_range_6 = MemoryInline::ResolveRangeHost(r4, 0, 160u, false, true);
    MemoryInline::WriteResolved32(guest_range_6, 0u, r4, r8);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 8u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_6, 4u, (r4 + 4), r7);
    r8 = MemoryInline::ReadResolved32(guest_range_5, 12u, (r3 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 8u, (r4 + 8), f0.d);
    r7 = MemoryInline::ReadResolved32(guest_range_5, 16u, (r3 + 16));
    MemoryInline::WriteResolved32(guest_range_6, 12u, (r4 + 12), r8);
    r8 = MemoryInline::ReadResolved32(guest_range_5, 20u, (r3 + 20));
    MemoryInline::WriteResolved32(guest_range_6, 16u, (r4 + 16), r7);
    r7 = MemoryInline::ReadResolved32(guest_range_5, 24u, (r3 + 24));
    MemoryInline::WriteResolved32(guest_range_6, 20u, (r4 + 20), r8);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 28u, (r3 + 28));
    MemoryInline::WriteResolved32(guest_range_6, 24u, (r4 + 24), r7);
    r8 = MemoryInline::ReadResolved32(guest_range_5, 32u, (r3 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 28u, (r4 + 28), f0.d);
    r7 = MemoryInline::ReadResolved32(guest_range_5, 36u, (r3 + 36));
    MemoryInline::WriteResolved32(guest_range_6, 32u, (r4 + 32), r8);
    r8 = MemoryInline::ReadResolved32(guest_range_5, 40u, (r3 + 40));
    MemoryInline::WriteResolved32(guest_range_6, 36u, (r4 + 36), r7);
    r7 = MemoryInline::ReadResolved32(guest_range_5, 44u, (r3 + 44));
    MemoryInline::WriteResolved32(guest_range_6, 40u, (r4 + 40), r8);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 48u, (r3 + 48));
    MemoryInline::WriteResolved32(guest_range_6, 44u, (r4 + 44), r7);
    r8 = MemoryInline::ReadResolved32(guest_range_5, 52u, (r3 + 52));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 48u, (r4 + 48), f0.d);
    r7 = MemoryInline::ReadResolved32(guest_range_5, 56u, (r3 + 56));
    MemoryInline::WriteResolved32(guest_range_6, 52u, (r4 + 52), r8);
    r8 = MemoryInline::ReadResolved32(guest_range_5, 60u, (r3 + 60));
    MemoryInline::WriteResolved32(guest_range_6, 56u, (r4 + 56), r7);
    r7 = MemoryInline::ReadResolved32(guest_range_5, 64u, (r3 + 64));
    MemoryInline::WriteResolved32(guest_range_6, 60u, (r4 + 60), r8);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 68u, (r3 + 68));
    MemoryInline::WriteResolved32(guest_range_6, 64u, (r4 + 64), r7);
    r8 = MemoryInline::ReadResolved32(guest_range_5, 72u, (r3 + 72));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 68u, (r4 + 68), f0.d);
    r7 = MemoryInline::ReadResolved32(guest_range_5, 76u, (r3 + 76));
    MemoryInline::WriteResolved32(guest_range_6, 72u, (r4 + 72), r8);
    r8 = MemoryInline::ReadResolved32(guest_range_5, 80u, (r3 + 80));
    MemoryInline::WriteResolved32(guest_range_6, 76u, (r4 + 76), r7);
    r7 = MemoryInline::ReadResolved32(guest_range_5, 84u, (r3 + 84));
    MemoryInline::WriteResolved32(guest_range_6, 80u, (r4 + 80), r8);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 88u, (r3 + 88));
    MemoryInline::WriteResolved32(guest_range_6, 84u, (r4 + 84), r7);
    r8 = MemoryInline::ReadResolved32(guest_range_5, 92u, (r3 + 92));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 88u, (r4 + 88), f0.d);
    r7 = MemoryInline::ReadResolved32(guest_range_5, 96u, (r3 + 96));
    MemoryInline::WriteResolved32(guest_range_6, 92u, (r4 + 92), r8);
    r8 = MemoryInline::ReadResolved32(guest_range_5, 100u, (r3 + 100));
    MemoryInline::WriteResolved32(guest_range_6, 96u, (r4 + 96), r7);
    r7 = MemoryInline::ReadResolved32(guest_range_5, 104u, (r3 + 104));
    MemoryInline::WriteResolved32(guest_range_6, 100u, (r4 + 100), r8);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 108u, (r3 + 108));
    MemoryInline::WriteResolved32(guest_range_6, 104u, (r4 + 104), r7);
    r8 = MemoryInline::ReadResolved32(guest_range_5, 112u, (r3 + 112));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 108u, (r4 + 108), f0.d);
    r7 = MemoryInline::ReadResolved32(guest_range_5, 116u, (r3 + 116));
    MemoryInline::WriteResolved32(guest_range_6, 112u, (r4 + 112), r8);
    r8 = MemoryInline::ReadResolved32(guest_range_5, 120u, (r3 + 120));
    MemoryInline::WriteResolved32(guest_range_6, 116u, (r4 + 116), r7);
    r7 = MemoryInline::ReadResolved32(guest_range_5, 124u, (r3 + 124));
    MemoryInline::WriteResolved32(guest_range_6, 120u, (r4 + 120), r8);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 128u, (r3 + 128));
    MemoryInline::WriteResolved32(guest_range_6, 124u, (r4 + 124), r7);
    r8 = MemoryInline::ReadResolved32(guest_range_5, 132u, (r3 + 132));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 128u, (r4 + 128), f0.d);
    r7 = MemoryInline::ReadResolved32(guest_range_5, 136u, (r3 + 136));
    MemoryInline::WriteResolved32(guest_range_6, 132u, (r4 + 132), r8);
    r8 = MemoryInline::ReadResolved32(guest_range_5, 140u, (r3 + 140));
    MemoryInline::WriteResolved32(guest_range_6, 136u, (r4 + 136), r7);
    r7 = MemoryInline::ReadResolved32(guest_range_5, 144u, (r3 + 144));
    MemoryInline::WriteResolved32(guest_range_6, 140u, (r4 + 140), r8);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 148u, (r3 + 148));
    MemoryInline::WriteResolved32(guest_range_6, 144u, (r4 + 144), r7);
    r8 = MemoryInline::ReadResolved32(guest_range_5, 152u, (r3 + 152));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 148u, (r4 + 148), f0.d);
    r7 = MemoryInline::ReadResolved32(guest_range_5, 156u, (r3 + 156));
    r3 = (r3 + 160);
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 152u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_6, 152u, (r4 + 152), r8);
        MemoryInline::WriteResolved32(guest_range_6, 156u, (r4 + 156), r7);
    }
    r4 = (r4 + 160);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801830C8;
    }
}

loc_80183218:
{
    r7 = (r6 * 20);
    r4 = (r28 & 255);
    r3 = (r4 - r6);
    r5 = (r5 + r7);
    r7 = (r0 + r7);
    ctr = r3;
}

loc_80183234:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r4))) {
        goto loc_8018326C;
    }
}

loc_80183238:
{
    r3 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWrite32(r7, r3);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWrite32((r7 + 4), r0);
    r3 = MemoryInline::FlatRead32((r5 + 12));
    MemoryInline::FlatWriteFloat32((r7 + 8), f0.d);
    r0 = MemoryInline::FlatRead32((r5 + 16));
    r5 = (r5 + 20);
    MemoryInline::FlatWrite32((r7 + 12), r3);
    MemoryInline::FlatWrite32((r7 + 16), r0);
    r7 = (r7 + 20);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80183238;
    }
}

loc_8018326C:
{
    r0 = MemoryInline::FlatRead32((r16 + 60));
    r12 = (r29 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_80183274:
{
    r0_rot_36 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(19));
    r0 = (r0_rot_36 & 3);
    r0 = (r0 * 20);
    r24 = (r24 + r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801835F4;
    }
}

loc_80183284:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801833EC;
    }
}

loc_80183288:
{
    r10 = MemoryInline::FlatRead32((r15 + 76));
    r0 = MemoryInline::FlatRead32((r15 + 80));
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(8));
    r3 = (r3_rot_7 & 15);
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(28));
    r9 = (r9_rot_3 & 4);
    r4 = (r3 * 20);
    r7_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(26));
    r7 = (r7_rot_7 & 4);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r3 = (r3_rot_8 & 7);
    r11 = MemoryInline::FlatRead32((r15 + 88));
    r8_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(20));
    r8 = (r8_rot_5 & 4);
    r6_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(27));
    r6 = (r6_rot_6 & 4);
    r5_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(14));
    r5 = (r5_rot_7 & 60);
    r0_rot_37 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(9));
    r0 = (r0_rot_37 & 480);
    r0 = (r5 + r0);
    r6 = (r8 + r6);
    r5 = (r9 + r7);
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r3), static_cast<uint32_t>(r12));
}

loc_801832C8:
{
    r0 = (r4 + r0);
    r7_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(29));
    r7 = (r7_rot_8 & 4);
    r4 = (r6 + r5);
    r4 = (r7 + r4);
    r0 = (r11 + r0);
    r7 = (r4 + r0);
    if (((cr & 0x08000000u) == 0)) {
        goto loc_801833E0;
    }
}

loc_801832E4:
{
    r0 = (r12 - r3);
    r6 = (r12 + -8);
}

loc_801832F0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8))) {
        goto loc_801833A8;
    }
}

loc_801832F4:
{
    if (((cr & 0x04000000u) != 0)) {
        goto loc_801833A8;
    }
}

loc_801832F8:
{
    r0 = (r6 + 7);
    r5_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r5 = (r5_rot_8 & -4);
    r0 = (r0 - r3);
    r4 = 0;
    r0_rot_38 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_38 & 536870911);
    r5 = (r7 + r5);
    ctr = r0;
}

loc_80183318:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r6))) {
        goto loc_801833A8;
    }
}

loc_8018331C:
{
    guest_range_7 = MemoryInline::ResolveRangeHost(r5, 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_7, 0u, r5, static_cast<uint8_t>(r4));
    r3 = (r3 + 8);
    MemoryInline::WriteResolved8(guest_range_7, 1u, (r5 + 1), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 2u, (r5 + 2), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 3u, (r5 + 3), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 4u, (r5 + 4), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 5u, (r5 + 5), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 6u, (r5 + 6), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 7u, (r5 + 7), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 8u, (r5 + 8), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 9u, (r5 + 9), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 10u, (r5 + 10), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 11u, (r5 + 11), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 12u, (r5 + 12), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 13u, (r5 + 13), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 14u, (r5 + 14), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 15u, (r5 + 15), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 16u, (r5 + 16), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 17u, (r5 + 17), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 18u, (r5 + 18), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 19u, (r5 + 19), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 20u, (r5 + 20), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 21u, (r5 + 21), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 22u, (r5 + 22), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 23u, (r5 + 23), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 24u, (r5 + 24), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 25u, (r5 + 25), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 26u, (r5 + 26), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 27u, (r5 + 27), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 28u, (r5 + 28), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 29u, (r5 + 29), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 30u, (r5 + 30), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 31u, (r5 + 31), static_cast<uint8_t>(r4));
    r5 = (r5 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8018331C;
    }
}

loc_801833A8:
{
    r4 = (r29 & 255);
    r6_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r6 = (r6_rot_7 & -4);
    r0 = (r4 - r3);
    r5 = 0;
    r6 = (r7 + r6);
    ctr = r0;
}

loc_801833C4:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r4))) {
        goto loc_801833E0;
    }
}

loc_801833C8:
{
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r5));
    r6 = (r6 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801833C8;
    }
}

loc_801833E0:
{
    r0 = MemoryInline::FlatRead32((r15 + 80));
    r0_rot_41 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(15));
    r0_mrot_5 = (r0_rot_41 & 229376);
    r0_mdest_5 = (r0 & -229377);
    r0 = (r0_mdest_5 | r0_mrot_5);
    MemoryInline::FlatWrite32((r15 + 80), r0);
}

loc_801833EC:
{
    r10 = MemoryInline::FlatRead32((r15 + 76));
    r4 = (r29 & 255);
    r11 = MemoryInline::FlatRead32((r15 + 88));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801833FC:
{
    r0_rot_43 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(8));
    r0 = (r0_rot_43 & 15);
    r9_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(28));
    r9 = (r9_rot_5 & 4);
    r5 = (r0 * 20);
    r7_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(26));
    r7 = (r7_rot_10 & 4);
    r8_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(20));
    r8 = (r8_rot_7 & 4);
    r6_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(27));
    r6 = (r6_rot_10 & 4);
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(14));
    r3 = (r3_rot_10 & 60);
    r0_rot_44 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(9));
    r0 = (r0_rot_44 & 480);
    r0 = (r3 + r0);
    r6 = (r8 + r6);
    r3 = (r9 + r7);
    r7_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(29));
    r7 = (r7_rot_11 & 4);
    r3 = (r6 + r3);
    r0 = (r5 + r0);
    r3 = (r7 + r3);
    r5 = (r16 + r24);
    r0 = (r11 + r0);
    r6 = 0;
    r0 = (r3 + r0);
    if (((cr & 0x04000000u) == 0)) {
        goto loc_801835F4;
    }
}

loc_8018344C:
{
}

loc_80183450:
{
    r8 = (r4 + -8);
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(8))) {
        goto loc_801835A8;
    }
}

loc_80183458:
{
    r7 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80183474;
    }
}

loc_80183460:
{
    r3 = 0x80000000u;
    r3 = (r3 + -2);
}

loc_8018346C:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r3))) {
        goto loc_80183474;
    }
}

loc_80183470:
{
    r7 = 1;
}

loc_80183474:
{
}

loc_80183478:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_801835A8;
    }
}

loc_8018347C:
{
    r7 = (r8 + 7);
    r3 = r5;
    r7_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(29));
    r7 = (r7_rot_12 & 536870911);
    r4 = r0;
    ctr = r7;
}

loc_80183494:
{
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(0))) {
        goto loc_801835A8;
    }
}

loc_80183498:
{
    guest_range_8 = MemoryInline::ResolveRangeHost(r3, 0, 32u, true, false);
    r8 = MemoryInline::ReadResolved8(guest_range_8, 0u, r3);
    r6 = (r6 + 8);
    r7 = MemoryInline::ReadResolved8(guest_range_8, 1u, (r3 + 1));
    guest_range_9 = MemoryInline::ResolveRangeHost(r4, 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_9, 0u, r4, static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_8, 2u, (r3 + 2));
    MemoryInline::WriteResolved8(guest_range_9, 1u, (r4 + 1), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 3u, (r3 + 3));
    MemoryInline::WriteResolved8(guest_range_9, 2u, (r4 + 2), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_8, 4u, (r3 + 4));
    MemoryInline::WriteResolved8(guest_range_9, 3u, (r4 + 3), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 5u, (r3 + 5));
    MemoryInline::WriteResolved8(guest_range_9, 4u, (r4 + 4), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_8, 6u, (r3 + 6));
    MemoryInline::WriteResolved8(guest_range_9, 5u, (r4 + 5), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 7u, (r3 + 7));
    MemoryInline::WriteResolved8(guest_range_9, 6u, (r4 + 6), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_8, 8u, (r3 + 8));
    MemoryInline::WriteResolved8(guest_range_9, 7u, (r4 + 7), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 9u, (r3 + 9));
    MemoryInline::WriteResolved8(guest_range_9, 8u, (r4 + 8), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_8, 10u, (r3 + 10));
    MemoryInline::WriteResolved8(guest_range_9, 9u, (r4 + 9), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 11u, (r3 + 11));
    MemoryInline::WriteResolved8(guest_range_9, 10u, (r4 + 10), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_8, 12u, (r3 + 12));
    MemoryInline::WriteResolved8(guest_range_9, 11u, (r4 + 11), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 13u, (r3 + 13));
    MemoryInline::WriteResolved8(guest_range_9, 12u, (r4 + 12), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_8, 14u, (r3 + 14));
    MemoryInline::WriteResolved8(guest_range_9, 13u, (r4 + 13), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 15u, (r3 + 15));
    MemoryInline::WriteResolved8(guest_range_9, 14u, (r4 + 14), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_8, 16u, (r3 + 16));
    MemoryInline::WriteResolved8(guest_range_9, 15u, (r4 + 15), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 17u, (r3 + 17));
    MemoryInline::WriteResolved8(guest_range_9, 16u, (r4 + 16), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_8, 18u, (r3 + 18));
    MemoryInline::WriteResolved8(guest_range_9, 17u, (r4 + 17), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 19u, (r3 + 19));
    MemoryInline::WriteResolved8(guest_range_9, 18u, (r4 + 18), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_8, 20u, (r3 + 20));
    MemoryInline::WriteResolved8(guest_range_9, 19u, (r4 + 19), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 21u, (r3 + 21));
    MemoryInline::WriteResolved8(guest_range_9, 20u, (r4 + 20), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_8, 22u, (r3 + 22));
    MemoryInline::WriteResolved8(guest_range_9, 21u, (r4 + 21), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 23u, (r3 + 23));
    MemoryInline::WriteResolved8(guest_range_9, 22u, (r4 + 22), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_8, 24u, (r3 + 24));
    MemoryInline::WriteResolved8(guest_range_9, 23u, (r4 + 23), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 25u, (r3 + 25));
    MemoryInline::WriteResolved8(guest_range_9, 24u, (r4 + 24), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_8, 26u, (r3 + 26));
    MemoryInline::WriteResolved8(guest_range_9, 25u, (r4 + 25), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 27u, (r3 + 27));
    MemoryInline::WriteResolved8(guest_range_9, 26u, (r4 + 26), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_8, 28u, (r3 + 28));
    MemoryInline::WriteResolved8(guest_range_9, 27u, (r4 + 27), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 29u, (r3 + 29));
    MemoryInline::WriteResolved8(guest_range_9, 28u, (r4 + 28), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_8, 30u, (r3 + 30));
    MemoryInline::WriteResolved8(guest_range_9, 29u, (r4 + 29), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_8, 31u, (r3 + 31));
    r3 = (r3 + 32);
    MemoryInline::WriteResolved8(guest_range_9, 30u, (r4 + 30), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_9, 31u, (r4 + 31), static_cast<uint8_t>(r7));
    r4 = (r4 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80183498;
    }
}

loc_801835A8:
{
    r4 = (r29 & 255);
    r7_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r7 = (r7_rot_14 & -4);
    r3 = (r4 - r6);
    r5 = (r5 + r7);
    r7 = (r0 + r7);
    ctr = r3;
}

loc_801835C4:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r4))) {
        goto loc_801835F4;
    }
}

loc_801835C8:
{
    r3 = MemoryInline::FlatRead8(r5);
    r0 = MemoryInline::FlatRead8((r5 + 1));
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r5 + 2));
    MemoryInline::FlatWrite8((r7 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 3));
    r5 = (r5 + 4);
    MemoryInline::FlatWrite8((r7 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r7 + 3), static_cast<uint8_t>(r0));
    r7 = (r7 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801835C8;
    }
}

loc_801835F4:
{
    r3 = MemoryInline::FlatRead32((r16 + 60));
    r0 = (r30 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801835FC:
{
    r3_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(19));
    r3 = (r3_rot_12 & 28);
    r24 = (r24 + r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80183A24;
    }
}

loc_80183608:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8018380C;
    }
}

loc_8018360C:
{
    r11 = MemoryInline::FlatRead32((r15 + 76));
    r3 = MemoryInline::FlatRead32((r15 + 80));
    r5_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(14));
    r5 = (r5_rot_13 & 3);
    r4_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(8));
    r4 = (r4_rot_7 & 15);
    r4 = (r5 + r4);
    r3_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(23));
    r3 = (r3_rot_13 & 31);
    r10 = (r4 * 20);
    r6_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(27));
    r6 = (r6_rot_12 & 4);
    r4_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(20));
    r4 = (r4_rot_8 & 4);
    r12 = MemoryInline::FlatRead32((r15 + 88));
    r7_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(26));
    r7 = (r7_rot_16 & 4);
    r4 = (r6 + r4);
    r5_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(28));
    r5 = (r5_rot_14 & 4);
    r6 = (r10 + r7);
    r9_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(9));
    r9 = (r9_rot_7 & 480);
    r8_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(14));
    r8 = (r8_rot_9 & 60);
    r8 = (r9 + r8);
    r5 = (r5 + r4);
    r4 = (r8 + r6);
    r7_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(29));
    r7 = (r7_rot_17 & 4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80183660:
{
    r6_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(19));
    r6 = (r6_rot_13 & 28);
    r5 = (r7 + r5);
    r4 = (r12 + r4);
    r5 = (r6 + r5);
    r10 = (r5 + r4);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80183800;
    }
}

loc_80183678:
{
    r12 = 0;
    r17 = 255;
    r9 = 175;
    r6 = 97;
    r8 = 119;
    r7 = 87;
    r4_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r4 = (r4_rot_9 & -16);
    r5 = 129;
    MemoryInline::FlatWriteRam8((r1 + 36), static_cast<uint8_t>(r17));
    r3 = (r0 - r3);
    r14 = 4;
    r18 = (r10 + r4);
    MemoryInline::FlatWriteRam8((r1 + 37), static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteRam8((r1 + 38), static_cast<uint8_t>(r12));
    MemoryInline::FlatWriteRam8((r1 + 39), static_cast<uint8_t>(r6));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    MemoryInline::FlatWriteRam8((r1 + 40), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    MemoryInline::FlatWriteRam8((r1 + 41), static_cast<uint8_t>(r7));
    r11 = MemoryInline::FlatRead8((r1 + 28));
    MemoryInline::FlatWriteRam8((r1 + 42), static_cast<uint8_t>(r12));
    r10 = MemoryInline::FlatRead8((r1 + 29));
    MemoryInline::FlatWriteRam8((r1 + 43), static_cast<uint8_t>(r5));
    r9 = MemoryInline::FlatRead8((r1 + 30));
    r0 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam8((r1 + 32), static_cast<uint8_t>(r17));
    r8 = MemoryInline::FlatRead8((r1 + 31));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    MemoryInline::FlatWriteRam8((r1 + 33), static_cast<uint8_t>(r14));
    r7 = MemoryInline::FlatRead8((r1 + 24));
    MemoryInline::FlatWriteRam8((r1 + 34), static_cast<uint8_t>(r17));
    r6 = MemoryInline::FlatRead8((r1 + 25));
    MemoryInline::FlatWriteRam8((r1 + 35), static_cast<uint8_t>(r12));
    r5 = MemoryInline::FlatRead8((r1 + 26));
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r12));
    r4 = MemoryInline::FlatRead8((r1 + 27));
    MemoryInline::FlatWriteRam8((r1 + 45), static_cast<uint8_t>(r12));
    MemoryInline::FlatWriteRam8((r1 + 46), static_cast<uint8_t>(r12));
    MemoryInline::FlatWriteRam8((r1 + 47), static_cast<uint8_t>(r12));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80183800;
    }
}

loc_80183718:
{
    r0_rot_46 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(31));
    r0 = (r0_rot_46 & 2147483647);
}

loc_8018371C:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801837B4;
    }
}

loc_80183724:
{
    guest_range_10 = MemoryInline::ResolveRangeHost(r18, 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_10, 0u, r18, static_cast<uint8_t>(r17));
    MemoryInline::WriteResolved8(guest_range_10, 1u, (r18 + 1), static_cast<uint8_t>(r14));
    MemoryInline::WriteResolved8(guest_range_10, 2u, (r18 + 2), static_cast<uint8_t>(r17));
    MemoryInline::WriteResolved8(guest_range_10, 3u, (r18 + 3), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_10, 4u, (r18 + 4), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_10, 5u, (r18 + 5), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_10, 6u, (r18 + 6), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_10, 7u, (r18 + 7), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_10, 8u, (r18 + 8), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_10, 9u, (r18 + 9), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_10, 10u, (r18 + 10), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_10, 11u, (r18 + 11), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_10, 12u, (r18 + 12), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_10, 13u, (r18 + 13), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_10, 14u, (r18 + 14), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_10, 15u, (r18 + 15), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_10, 16u, (r18 + 16), static_cast<uint8_t>(r17));
    MemoryInline::WriteResolved8(guest_range_10, 17u, (r18 + 17), static_cast<uint8_t>(r14));
    MemoryInline::WriteResolved8(guest_range_10, 18u, (r18 + 18), static_cast<uint8_t>(r17));
    MemoryInline::WriteResolved8(guest_range_10, 19u, (r18 + 19), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_10, 20u, (r18 + 20), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_10, 21u, (r18 + 21), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_10, 22u, (r18 + 22), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_10, 23u, (r18 + 23), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_10, 24u, (r18 + 24), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_10, 25u, (r18 + 25), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_10, 26u, (r18 + 26), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_10, 27u, (r18 + 27), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_10, 28u, (r18 + 28), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_10, 29u, (r18 + 29), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_10, 30u, (r18 + 30), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_10, 31u, (r18 + 31), static_cast<uint8_t>(r12));
    r18 = (r18 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80183724;
    }
}

loc_801837AC:
{
    r3 = (r3 & 1);
}

loc_801837B0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80183800;
    }
}

loc_801837B4:
{
    ctr = r3;
}

loc_801837B8:
{
    guest_range_11 = MemoryInline::ResolveRangeHost(r18, 0, 16u, false, true);
    MemoryInline::WriteResolved8(guest_range_11, 0u, r18, static_cast<uint8_t>(r17));
    MemoryInline::WriteResolved8(guest_range_11, 1u, (r18 + 1), static_cast<uint8_t>(r14));
    MemoryInline::WriteResolved8(guest_range_11, 2u, (r18 + 2), static_cast<uint8_t>(r17));
    MemoryInline::WriteResolved8(guest_range_11, 3u, (r18 + 3), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_11, 4u, (r18 + 4), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_11, 5u, (r18 + 5), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_11, 6u, (r18 + 6), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_11, 7u, (r18 + 7), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_11, 8u, (r18 + 8), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_11, 9u, (r18 + 9), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_11, 10u, (r18 + 10), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_11, 11u, (r18 + 11), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_11, 12u, (r18 + 12), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_11, 13u, (r18 + 13), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_11, 14u, (r18 + 14), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_11, 15u, (r18 + 15), static_cast<uint8_t>(r12));
    r18 = (r18 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801837B8;
    }
}

loc_80183800:
{
    r0 = MemoryInline::FlatRead32((r15 + 80));
    r0_rot_48 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(9));
    r0_mrot_8 = (r0_rot_48 & 15872);
    r0_mdest_8 = (r0 & -15873);
    r0 = (r0_mdest_8 | r0_mrot_8);
    MemoryInline::FlatWrite32((r15 + 80), r0);
}

loc_8018380C:
{
    r10 = MemoryInline::FlatRead32((r15 + 76));
    r3 = (r30 & 255);
}

loc_80183814:
{
    r11 = MemoryInline::FlatRead32((r15 + 88));
    r4_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(14));
    r4 = (r4_rot_12 & 3);
    r0_rot_50 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(8));
    r0 = (r0_rot_50 & 15);
    r0 = (r4 + r0);
    r6_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(26));
    r6 = (r6_rot_15 & 4);
    r9 = (r0 * 20);
    r4_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(27));
    r4 = (r4_rot_13 & 4);
    r0_rot_51 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(20));
    r0 = (r0_rot_51 & 4);
    r8_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(9));
    r8 = (r8_rot_11 & 480);
    r7_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(14));
    r7 = (r7_rot_19 & 60);
    r0 = (r4 + r0);
    r5_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(28));
    r5 = (r5_rot_16 & 4);
    r6 = (r9 + r6);
    r0 = (r5 + r0);
    r4_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(29));
    r4 = (r4_rot_14 & 4);
    r7 = (r8 + r7);
    r5_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(19));
    r5 = (r5_rot_17 & 28);
    r4 = (r4 + r0);
    r0 = (r7 + r6);
    r4 = (r5 + r4);
    r5 = (r16 + r24);
    r0 = (r11 + r0);
    r6 = (r4 + r0);
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80183A24;
    }
}

loc_80183874:
{
    r0_rot_52 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(31));
    r0 = (r0_rot_52 & 2147483647);
}

loc_80183878:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80183994;
    }
}

loc_80183880:
{
    guest_range_12 = MemoryInline::ResolveRangeHost(r5, 0, 32u, true, false);
    r4 = MemoryInline::ReadResolved8(guest_range_12, 0u, r5);
    r0 = MemoryInline::ReadResolved8(guest_range_12, 1u, (r5 + 1));
    guest_range_13 = MemoryInline::ResolveRangeHost(r6, 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_13, 0u, r6, static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_12, 2u, (r5 + 2));
    MemoryInline::WriteResolved8(guest_range_13, 1u, (r6 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_12, 3u, (r5 + 3));
    MemoryInline::WriteResolved8(guest_range_13, 2u, (r6 + 2), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_12, 4u, (r5 + 4));
    MemoryInline::WriteResolved8(guest_range_13, 3u, (r6 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_12, 5u, (r5 + 5));
    MemoryInline::WriteResolved8(guest_range_13, 4u, (r6 + 4), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_12, 6u, (r5 + 6));
    MemoryInline::WriteResolved8(guest_range_13, 5u, (r6 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_12, 7u, (r5 + 7));
    MemoryInline::WriteResolved8(guest_range_13, 6u, (r6 + 6), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_12, 8u, (r5 + 8));
    MemoryInline::WriteResolved8(guest_range_13, 7u, (r6 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_12, 9u, (r5 + 9));
    MemoryInline::WriteResolved8(guest_range_13, 8u, (r6 + 8), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_12, 10u, (r5 + 10));
    MemoryInline::WriteResolved8(guest_range_13, 9u, (r6 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_12, 11u, (r5 + 11));
    MemoryInline::WriteResolved8(guest_range_13, 10u, (r6 + 10), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_12, 12u, (r5 + 12));
    MemoryInline::WriteResolved8(guest_range_13, 11u, (r6 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_12, 13u, (r5 + 13));
    MemoryInline::WriteResolved8(guest_range_13, 12u, (r6 + 12), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_12, 14u, (r5 + 14));
    MemoryInline::WriteResolved8(guest_range_13, 13u, (r6 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_12, 15u, (r5 + 15));
    MemoryInline::WriteResolved8(guest_range_13, 14u, (r6 + 14), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_12, 16u, (r5 + 16));
    MemoryInline::WriteResolved8(guest_range_13, 15u, (r6 + 15), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_12, 17u, (r5 + 17));
    MemoryInline::WriteResolved8(guest_range_13, 16u, (r6 + 16), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_12, 18u, (r5 + 18));
    MemoryInline::WriteResolved8(guest_range_13, 17u, (r6 + 17), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_12, 19u, (r5 + 19));
    MemoryInline::WriteResolved8(guest_range_13, 18u, (r6 + 18), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_12, 20u, (r5 + 20));
    MemoryInline::WriteResolved8(guest_range_13, 19u, (r6 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_12, 21u, (r5 + 21));
    MemoryInline::WriteResolved8(guest_range_13, 20u, (r6 + 20), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_12, 22u, (r5 + 22));
    MemoryInline::WriteResolved8(guest_range_13, 21u, (r6 + 21), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_12, 23u, (r5 + 23));
    MemoryInline::WriteResolved8(guest_range_13, 22u, (r6 + 22), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_12, 24u, (r5 + 24));
    MemoryInline::WriteResolved8(guest_range_13, 23u, (r6 + 23), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_12, 25u, (r5 + 25));
    MemoryInline::WriteResolved8(guest_range_13, 24u, (r6 + 24), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_12, 26u, (r5 + 26));
    MemoryInline::WriteResolved8(guest_range_13, 25u, (r6 + 25), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_12, 27u, (r5 + 27));
    MemoryInline::WriteResolved8(guest_range_13, 26u, (r6 + 26), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_12, 28u, (r5 + 28));
    MemoryInline::WriteResolved8(guest_range_13, 27u, (r6 + 27), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_12, 29u, (r5 + 29));
    MemoryInline::WriteResolved8(guest_range_13, 28u, (r6 + 28), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_12, 30u, (r5 + 30));
    MemoryInline::WriteResolved8(guest_range_13, 29u, (r6 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_12, 31u, (r5 + 31));
    r5 = (r5 + 32);
    MemoryInline::WriteResolved8(guest_range_13, 30u, (r6 + 30), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_13, 31u, (r6 + 31), static_cast<uint8_t>(r0));
    r6 = (r6 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80183880;
    }
}

loc_8018398C:
{
    r3 = (r3 & 1);
}

loc_80183990:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80183A24;
    }
}

loc_80183994:
{
    ctr = r3;
}

loc_80183998:
{
    guest_range_14 = MemoryInline::ResolveRangeHost(r5, 0, 16u, true, false);
    r4 = MemoryInline::ReadResolved8(guest_range_14, 0u, r5);
    r0 = MemoryInline::ReadResolved8(guest_range_14, 1u, (r5 + 1));
    guest_range_15 = MemoryInline::ResolveRangeHost(r6, 0, 16u, false, true);
    MemoryInline::WriteResolved8(guest_range_15, 0u, r6, static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_14, 2u, (r5 + 2));
    MemoryInline::WriteResolved8(guest_range_15, 1u, (r6 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_14, 3u, (r5 + 3));
    MemoryInline::WriteResolved8(guest_range_15, 2u, (r6 + 2), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_14, 4u, (r5 + 4));
    MemoryInline::WriteResolved8(guest_range_15, 3u, (r6 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_14, 5u, (r5 + 5));
    MemoryInline::WriteResolved8(guest_range_15, 4u, (r6 + 4), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_14, 6u, (r5 + 6));
    MemoryInline::WriteResolved8(guest_range_15, 5u, (r6 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_14, 7u, (r5 + 7));
    MemoryInline::WriteResolved8(guest_range_15, 6u, (r6 + 6), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_14, 8u, (r5 + 8));
    MemoryInline::WriteResolved8(guest_range_15, 7u, (r6 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_14, 9u, (r5 + 9));
    MemoryInline::WriteResolved8(guest_range_15, 8u, (r6 + 8), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_14, 10u, (r5 + 10));
    MemoryInline::WriteResolved8(guest_range_15, 9u, (r6 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_14, 11u, (r5 + 11));
    MemoryInline::WriteResolved8(guest_range_15, 10u, (r6 + 10), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_14, 12u, (r5 + 12));
    MemoryInline::WriteResolved8(guest_range_15, 11u, (r6 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_14, 13u, (r5 + 13));
    MemoryInline::WriteResolved8(guest_range_15, 12u, (r6 + 12), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_14, 14u, (r5 + 14));
    MemoryInline::WriteResolved8(guest_range_15, 13u, (r6 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_14, 15u, (r5 + 15));
    r5 = (r5 + 16);
    MemoryInline::WriteResolved8(guest_range_15, 14u, (r6 + 14), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_15, 15u, (r6 + 15), static_cast<uint8_t>(r0));
    r6 = (r6 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80183998;
    }
}

loc_80183A24:
{
    r0 = MemoryInline::FlatRead8((r1 + 51));
    r3 = MemoryInline::FlatRead32((r16 + 60));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80183A30:
{
    r0_rot_54 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(18));
    r0 = (r0_rot_54 & 496);
    r24 = (r24 + r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80183A9C;
    }
}

loc_80183A3C:
{
    r6 = MemoryInline::FlatRead32((r15 + 76));
    r10 = (r16 + r24);
    r9 = MemoryInline::FlatRead32((r15 + 88));
    r3_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r3 = (r3_rot_16 & 15);
    r5_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(20));
    r5 = (r5_rot_19 & 4);
    r8 = (r3 * 20);
    r0_rot_55 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(27));
    r0 = (r0_rot_55 & 4);
    r4_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(26));
    r4 = (r4_rot_16 & 4);
    r3 = MemoryInline::FlatRead8((r10 + 2));
    r0 = (r5 + r0);
    r16_addr_7 = (r16 + r24);
    r5 = MemoryInline::FlatRead8(r16_addr_7);
    r7_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(14));
    r7 = (r7_rot_21 & 60);
    r6_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(9));
    r6 = (r6_rot_17 & 480);
    r7 = (r7 + r6);
    r0 = (r4 + r0);
    r6 = (r9 + r0);
    r4 = MemoryInline::FlatRead8((r10 + 1));
    r7 = (r8 + r7);
    r0 = MemoryInline::FlatRead8((r10 + 3));
    addr_stbux_80183A88_loc_0 = (r6 + r7);
    MemoryInline::FlatWrite8(addr_stbux_80183A88_loc_0, static_cast<uint8_t>(r5));
    r6 = addr_stbux_80183A88_loc_0;
    r24 = (r24 + 4);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r0));
}

loc_80183A9C:
{
    r0 = MemoryInline::FlatRead8((r1 + 50));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80183AA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80183B0C;
    }
}

loc_80183AA8:
{
    r4 = MemoryInline::FlatRead32((r15 + 76));
    r10 = (r16 + r24);
    r9 = MemoryInline::FlatRead32((r15 + 88));
    r3_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r3 = (r3_rot_18 & 15);
    r8_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(28));
    r8 = (r8_rot_13 & 4);
    r0_rot_57 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(26));
    r0 = (r0_rot_57 & 4);
    r7_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(20));
    r7 = (r7_rot_23 & 4);
    r5_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r5 = (r5_rot_21 & 4);
    r6_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(14));
    r6 = (r6_rot_19 & 60);
    r0 = (r8 + r0);
    r4_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
    r4 = (r4_rot_18 & 480);
    r7 = (r7 + r5);
    r16_addr_9 = (r16 + r24);
    r5 = MemoryInline::FlatRead8(r16_addr_9);
    r8 = (r3 * 20);
    r3 = MemoryInline::FlatRead8((r10 + 2));
    r0 = (r7 + r0);
    r7 = (r6 + r4);
    r4 = MemoryInline::FlatRead8((r10 + 1));
    r6 = (r9 + r0);
    r7 = (r8 + r7);
    r0 = MemoryInline::FlatRead8((r10 + 3));
    addr_stbux_80183AFC_loc_0 = (r6 + r7);
    MemoryInline::FlatWrite8(addr_stbux_80183AFC_loc_0, static_cast<uint8_t>(r5));
    r6 = addr_stbux_80183AFC_loc_0;
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r0));
}

loc_80183B0C:
{
    r11 = (r1 + 128);
    r3 = r15;
    // inline leaf 0x800215B8 (19 guest instruction(s))
    guest_range_16 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_16, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_16, 0u, (r11 + -72));
            r15 = MemoryInline::ReadResolved32(guest_range_16, 4u, (r11 + -68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_16, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_16, 8u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_16, 12u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_16, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_16, 16u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_16, 20u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_16, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_16, 24u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_16, 28u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_16, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_16, 32u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_16, 36u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_16, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_16, 40u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_16, 44u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_16, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_16, 48u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_16, 52u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_16, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_16, 56u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_16, 60u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_16, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_16, 64u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_16, 68u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215B8
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801828DC func_801828DC preserves=true fpr_mask=0x00000000
