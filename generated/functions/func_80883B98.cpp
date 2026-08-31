#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80883B98(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_80537B88_loc_0 = 0;
    uint32_t addr_lfsx_80537B88_loc_1 = 0;
    uint32_t addr_lfsx_80537B88_loc_2 = 0;
    uint32_t addr_lfsx_80537B88_loc_3 = 0;
    uint32_t addr_lfsx_80537B88_loc_4 = 0;
    uint32_t addr_lfsx_80537B88_loc_5 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_100 = 0;
    uint32_t r0_rot_101 = 0;
    uint32_t r0_rot_102 = 0;
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
    uint32_t r0_rot_59 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_60 = 0;
    uint32_t r0_rot_61 = 0;
    uint32_t r0_rot_62 = 0;
    uint32_t r0_rot_63 = 0;
    uint32_t r0_rot_64 = 0;
    uint32_t r0_rot_65 = 0;
    uint32_t r0_rot_66 = 0;
    uint32_t r0_rot_67 = 0;
    uint32_t r0_rot_68 = 0;
    uint32_t r0_rot_69 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_70 = 0;
    uint32_t r0_rot_71 = 0;
    uint32_t r0_rot_72 = 0;
    uint32_t r0_rot_73 = 0;
    uint32_t r0_rot_74 = 0;
    uint32_t r0_rot_75 = 0;
    uint32_t r0_rot_76 = 0;
    uint32_t r0_rot_77 = 0;
    uint32_t r0_rot_78 = 0;
    uint32_t r0_rot_79 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_80 = 0;
    uint32_t r0_rot_81 = 0;
    uint32_t r0_rot_82 = 0;
    uint32_t r0_rot_83 = 0;
    uint32_t r0_rot_84 = 0;
    uint32_t r0_rot_85 = 0;
    uint32_t r0_rot_86 = 0;
    uint32_t r0_rot_87 = 0;
    uint32_t r0_rot_88 = 0;
    uint32_t r0_rot_89 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r0_rot_90 = 0;
    uint32_t r0_rot_91 = 0;
    uint32_t r0_rot_92 = 0;
    uint32_t r0_rot_93 = 0;
    uint32_t r0_rot_94 = 0;
    uint32_t r0_rot_95 = 0;
    uint32_t r0_rot_96 = 0;
    uint32_t r0_rot_97 = 0;
    uint32_t r0_rot_98 = 0;
    uint32_t r0_rot_99 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_10 = 0;
    uint32_t r11_rot_11 = 0;
    uint32_t r11_rot_12 = 0;
    uint32_t r11_rot_13 = 0;
    uint32_t r11_rot_14 = 0;
    uint32_t r11_rot_15 = 0;
    uint32_t r11_rot_16 = 0;
    uint32_t r11_rot_17 = 0;
    uint32_t r11_rot_18 = 0;
    uint32_t r11_rot_19 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_20 = 0;
    uint32_t r11_rot_21 = 0;
    uint32_t r11_rot_22 = 0;
    uint32_t r11_rot_23 = 0;
    uint32_t r11_rot_24 = 0;
    uint32_t r11_rot_25 = 0;
    uint32_t r11_rot_26 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r11_rot_4 = 0;
    uint32_t r11_rot_5 = 0;
    uint32_t r11_rot_6 = 0;
    uint32_t r11_rot_7 = 0;
    uint32_t r11_rot_8 = 0;
    uint32_t r11_rot_9 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_10 = 0;
    uint32_t r12_rot_11 = 0;
    uint32_t r12_rot_12 = 0;
    uint32_t r12_rot_13 = 0;
    uint32_t r12_rot_14 = 0;
    uint32_t r12_rot_15 = 0;
    uint32_t r12_rot_16 = 0;
    uint32_t r12_rot_17 = 0;
    uint32_t r12_rot_18 = 0;
    uint32_t r12_rot_19 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_20 = 0;
    uint32_t r12_rot_21 = 0;
    uint32_t r12_rot_22 = 0;
    uint32_t r12_rot_23 = 0;
    uint32_t r12_rot_24 = 0;
    uint32_t r12_rot_25 = 0;
    uint32_t r12_rot_26 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r12_rot_5 = 0;
    uint32_t r12_rot_6 = 0;
    uint32_t r12_rot_7 = 0;
    uint32_t r12_rot_8 = 0;
    uint32_t r12_rot_9 = 0;
    uint32_t r15_addr_0 = 0;
    uint32_t r15_addr_1 = 0;
    uint32_t r15_addr_2 = 0;
    uint32_t r15_addr_3 = 0;
    uint32_t r15_addr_4 = 0;
    uint32_t r16_addr_0 = 0;
    uint32_t r16_addr_1 = 0;
    uint32_t r16_addr_10 = 0;
    uint32_t r16_addr_11 = 0;
    uint32_t r16_addr_12 = 0;
    uint32_t r16_addr_13 = 0;
    uint32_t r16_addr_14 = 0;
    uint32_t r16_addr_15 = 0;
    uint32_t r16_addr_16 = 0;
    uint32_t r16_addr_17 = 0;
    uint32_t r16_addr_18 = 0;
    uint32_t r16_addr_19 = 0;
    uint32_t r16_addr_2 = 0;
    uint32_t r16_addr_20 = 0;
    uint32_t r16_addr_21 = 0;
    uint32_t r16_addr_22 = 0;
    uint32_t r16_addr_23 = 0;
    uint32_t r16_addr_24 = 0;
    uint32_t r16_addr_25 = 0;
    uint32_t r16_addr_26 = 0;
    uint32_t r16_addr_27 = 0;
    uint32_t r16_addr_28 = 0;
    uint32_t r16_addr_29 = 0;
    uint32_t r16_addr_3 = 0;
    uint32_t r16_addr_30 = 0;
    uint32_t r16_addr_31 = 0;
    uint32_t r16_addr_32 = 0;
    uint32_t r16_addr_33 = 0;
    uint32_t r16_addr_34 = 0;
    uint32_t r16_addr_4 = 0;
    uint32_t r16_addr_5 = 0;
    uint32_t r16_addr_6 = 0;
    uint32_t r16_addr_7 = 0;
    uint32_t r16_addr_8 = 0;
    uint32_t r16_addr_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_16 = 0;
    uint32_t r3_addr_17 = 0;
    uint32_t r3_addr_18 = 0;
    uint32_t r3_addr_19 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_20 = 0;
    uint32_t r3_addr_21 = 0;
    uint32_t r3_addr_22 = 0;
    uint32_t r3_addr_23 = 0;
    uint32_t r3_addr_24 = 0;
    uint32_t r3_addr_25 = 0;
    uint32_t r3_addr_26 = 0;
    uint32_t r3_addr_27 = 0;
    uint32_t r3_addr_28 = 0;
    uint32_t r3_addr_29 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_30 = 0;
    uint32_t r3_addr_31 = 0;
    uint32_t r3_addr_32 = 0;
    uint32_t r3_addr_33 = 0;
    uint32_t r3_addr_34 = 0;
    uint32_t r3_addr_35 = 0;
    uint32_t r3_addr_36 = 0;
    uint32_t r3_addr_37 = 0;
    uint32_t r3_addr_38 = 0;
    uint32_t r3_addr_39 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_40 = 0;
    uint32_t r3_addr_41 = 0;
    uint32_t r3_addr_42 = 0;
    uint32_t r3_addr_43 = 0;
    uint32_t r3_addr_44 = 0;
    uint32_t r3_addr_45 = 0;
    uint32_t r3_addr_46 = 0;
    uint32_t r3_addr_47 = 0;
    uint32_t r3_addr_48 = 0;
    uint32_t r3_addr_49 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
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
    uint32_t r3_rot_20 = 0;
    uint32_t r3_rot_21 = 0;
    uint32_t r3_rot_22 = 0;
    uint32_t r3_rot_23 = 0;
    uint32_t r3_rot_24 = 0;
    uint32_t r3_rot_25 = 0;
    uint32_t r3_rot_26 = 0;
    uint32_t r3_rot_27 = 0;
    uint32_t r3_rot_28 = 0;
    uint32_t r3_rot_29 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_30 = 0;
    uint32_t r3_rot_31 = 0;
    uint32_t r3_rot_32 = 0;
    uint32_t r3_rot_33 = 0;
    uint32_t r3_rot_34 = 0;
    uint32_t r3_rot_35 = 0;
    uint32_t r3_rot_36 = 0;
    uint32_t r3_rot_37 = 0;
    uint32_t r3_rot_38 = 0;
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
    uint32_t r4_rot_20 = 0;
    uint32_t r4_rot_21 = 0;
    uint32_t r4_rot_22 = 0;
    uint32_t r4_rot_23 = 0;
    uint32_t r4_rot_24 = 0;
    uint32_t r4_rot_25 = 0;
    uint32_t r4_rot_26 = 0;
    uint32_t r4_rot_27 = 0;
    uint32_t r4_rot_28 = 0;
    uint32_t r4_rot_29 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_30 = 0;
    uint32_t r4_rot_31 = 0;
    uint32_t r4_rot_32 = 0;
    uint32_t r4_rot_33 = 0;
    uint32_t r4_rot_34 = 0;
    uint32_t r4_rot_35 = 0;
    uint32_t r4_rot_36 = 0;
    uint32_t r4_rot_37 = 0;
    uint32_t r4_rot_38 = 0;
    uint32_t r4_rot_39 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_40 = 0;
    uint32_t r4_rot_41 = 0;
    uint32_t r4_rot_42 = 0;
    uint32_t r4_rot_43 = 0;
    uint32_t r4_rot_44 = 0;
    uint32_t r4_rot_45 = 0;
    uint32_t r4_rot_46 = 0;
    uint32_t r4_rot_47 = 0;
    uint32_t r4_rot_48 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_10 = 0;
    uint32_t r5_addr_11 = 0;
    uint32_t r5_addr_12 = 0;
    uint32_t r5_addr_13 = 0;
    uint32_t r5_addr_14 = 0;
    uint32_t r5_addr_15 = 0;
    uint32_t r5_addr_16 = 0;
    uint32_t r5_addr_17 = 0;
    uint32_t r5_addr_18 = 0;
    uint32_t r5_addr_19 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_20 = 0;
    uint32_t r5_addr_21 = 0;
    uint32_t r5_addr_22 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;
    uint32_t r5_addr_7 = 0;
    uint32_t r5_addr_8 = 0;
    uint32_t r5_addr_9 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_10 = 0;
    uint32_t r9_rot_11 = 0;
    uint32_t r9_rot_12 = 0;
    uint32_t r9_rot_13 = 0;
    uint32_t r9_rot_14 = 0;
    uint32_t r9_rot_15 = 0;
    uint32_t r9_rot_16 = 0;
    uint32_t r9_rot_17 = 0;
    uint32_t r9_rot_18 = 0;
    uint32_t r9_rot_19 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_20 = 0;
    uint32_t r9_rot_21 = 0;
    uint32_t r9_rot_22 = 0;
    uint32_t r9_rot_23 = 0;
    uint32_t r9_rot_24 = 0;
    uint32_t r9_rot_25 = 0;
    uint32_t r9_rot_26 = 0;
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
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80883B98;

loc_80883B98:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -1648), 0, 1656u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -1648), r1);
    r1 = (r1 + -1648);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 1652u, (r1 + 1652), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 1632u, (r1 + 1632), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 1640);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 1616u, (r1 + 1616), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 1624);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 1600u, (r1 + 1600), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 1608);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 1584u, (r1 + 1584), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 1592);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 1568u, (r1 + 1568), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 1576);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 1552u, (r1 + 1552), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 1560);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    r11 = (r1 + 1552);
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
    r4 = 0x809C0000u;
    r20 = 0x808B0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r20 = (r20 + 9632);
    r18 = 0x809C0000u;
    r14 = 0x802A0000u;
    r0 = MemoryInline::FlatRead32((r4 + 32));
    r19 = 0x808E0000u;
    r30 = r3;
    r3 = 0x802A0000u;
    MemoryInline::WriteResolved32(guest_range_2, 1472u, (r1 + 1472), r0);
    r18 = (r18 + 18808);
    f30.d = MemoryInline::FlatReadFloat32(r20);
    r19 = (r19 + -13352);
    f31.d = MemoryInline::FlatReadFloat32((r20 + 72));
    r22 = (r3 + 16688);
    f27.d = MemoryInline::FlatReadFloat32((r20 + 48));
    r23 = (r14 + 16640);
    f28.d = MemoryInline::FlatReadFloat64((r20 + 88));
    r26 = 0x809C0000u;
    f29.d = MemoryInline::FlatReadFloat32((r20 + 44));
    r25 = 0x809C0000u;
    r27 = 16842752;
    r28 = -1;
    r29 = 0;
    r24 = 0x809C0000u;
    r21 = 1;
    goto loc_80886154;
}

loc_80883C4C:
{
    r0 = MemoryInline::FlatRead8((r30 + 200));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80883C54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80883C90;
    }
}

loc_80883C58:
{
    r3 = MemoryInline::FlatRead32((r30 + 196));
    r0 = MemoryInline::FlatRead32((r30 + 192));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r30 + 196), r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_80883C6C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80883CF0;
    }
}

loc_80883C70:
{
    r3 = MemoryInline::FlatRead32((r30 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 188));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x80883C88u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite8((r30 + 200), static_cast<uint8_t>(r29));
    goto loc_80886148;
}

loc_80883C90:
{
    r3 = MemoryInline::FlatRead32((r30 + 32));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x80883CA4u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80883CAC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80883CF0;
    }
}

loc_80883CB0:
{
    r3 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead16((r3 + 70));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r4 + 12));
    r15 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r15), static_cast<int32_t>(0));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80883CF0;
    }
}

loc_80883CD0:
{
    r12 = MemoryInline::FlatRead32(r3);
    f1.d = MemoryInline::FlatReadFloat32(r20);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x80883CE4u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r30 + 192), r15);
    MemoryInline::FlatWrite32((r30 + 196), r29);
    MemoryInline::FlatWrite8((r30 + 200), static_cast<uint8_t>(r21));
}

loc_80883CF0:
{
    r0 = MemoryInline::FlatRead32((r30 + 372));
}

loc_80883CF8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_808841E8;
    }
}

loc_80883CFC:
{
    r0 = MemoryInline::FlatRead32((r30 + 376));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80883D04:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80883DB4;
    }
}

loc_80883D08:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = 1;
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x80883D20u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r30;
    r4 = 1;
    // inline leaf 0x808217B0 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 157), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x808217B0
    r0 = MemoryInline::FlatRead8((r30 + 208));
    r3 = MemoryInline::FlatRead32((r30 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80883D38:
{
    r3 = MemoryInline::FlatRead8((r3 + 68));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80883D50;
    }
}

loc_80883D40:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
    goto loc_80883D58;
}

loc_80883D50:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_5 & 134217727);
}

loc_80883D58:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = (r0 & 65535);
    f1.d = MemoryInline::FlatReadFloat32(r20);
    r5 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r20 + 44));
    ctx->lr = 0x80883D74u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80557684u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f1.d = MemoryInline::FlatReadFloat32((r19 + 8));
    r4 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 188));
    r3 = MemoryInline::FlatRead32((r30 + 8));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r19 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f26.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    // end of inlined leaf 0x80557340
    r12 = MemoryInline::FlatRead32(r3);
    f1.d = f26.d;
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x80883DACu;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r30 + 376), r21);
    goto loc_80883CF0;
}

loc_80883DB4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80883DB8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808841D8;
    }
}

loc_80883DBC:
{
    r3 = MemoryInline::FlatRead32((r30 + 32));
    r17 = 0;
    r0 = MemoryInline::FlatRead16((r30 + 44));
    r16 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 28));
    r0 = (r0 | 1);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 24));
    MemoryInline::FlatWriteFloat32((r30 + 48), f2.d);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r30 + 52), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 56), f0.d);
    goto loc_808841B4;
}

loc_80883DF0:
{
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r16_addr_3 = (r16 + r0);
    r10 = MemoryInline::FlatRead32(r16_addr_3);
    r8 = (r0 + r16);
}

loc_80883E00:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_808841AC;
    }
}

loc_80883E04:
{
    r0 = MemoryInline::FlatRead32((r8 + 8));
}

loc_80883E0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808841AC;
    }
}

loc_80883E10:
{
    r3 = MemoryInline::FlatRead32((r25 + -10456));
    r4 = 0;
    r6 = 0;
    r7 = MemoryInline::FlatRead8((r3 + 37));
}

loc_80883E24:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80883F80;
    }
}

loc_80883E28:
{
}

loc_80883E2C:
{
    r0 = (r7 + 248);
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(8))) {
        goto loc_80883F44;
    }
}

loc_80883E34:
{
    r3 = (r0 & 255);
    r5 = MemoryInline::FlatRead32((r26 + 6584));
    r0 = (r3 + 7);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_9 & 536870911);
    ctr = r0;
}

loc_80883E4C:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(0))) {
        goto loc_80883F44;
    }
}

loc_80883E50:
{
    r3 = MemoryInline::FlatRead32((r5 + 24));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & 1020);
    r6 = (r6 + 8);
    r9 = (r3 + r0);
    r3_addr_6 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_6);
    r11 = MemoryInline::FlatRead32((r9 + 4));
    r3 = MemoryInline::FlatRead16((r3 + 820));
    r0 = MemoryInline::FlatRead16((r11 + 820));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r3 = (r3_rot_4 & 1);
    r12 = MemoryInline::FlatRead32((r9 + 8));
    r4 = (r4 | r3);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_12 & 1);
    r3 = (0 - r4);
    r12 = MemoryInline::FlatRead16((r12 + 820));
    r4 = (r3 | r4);
    r11 = MemoryInline::FlatRead32((r9 + 12));
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_5 & 1);
    r12_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(27));
    r12 = (r12_rot_4 & 1);
    r15 = (r4 | r0);
    r3 = MemoryInline::FlatRead16((r11 + 820));
    r0 = (0 - r15);
    r4 = MemoryInline::FlatRead32((r9 + 16));
    r15 = (r0 | r15);
    r11 = MemoryInline::FlatRead32((r9 + 20));
    r0 = MemoryInline::FlatRead16((r4 + 820));
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(1));
    r4 = (r4_rot_6 & 1);
    r4 = (r4 | r12);
    r12 = MemoryInline::FlatRead16((r11 + 820));
    r15 = (0 - r4);
    r11 = MemoryInline::FlatRead32((r9 + 24));
    r15 = (r15 | r4);
    r4 = MemoryInline::FlatRead32((r9 + 28));
    r9_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(1));
    r9 = (r9_rot_4 & 1);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r3 = (r3_rot_5 & 1);
    r3 = (r9 | r3);
    r9 = MemoryInline::FlatRead16((r11 + 820));
    r11 = (0 - r3);
    r4 = MemoryInline::FlatRead16((r4 + 820));
    r3 = (r11 | r3);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_13 & 1);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
    r11_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(27));
    r11 = (r11_rot_4 & 1);
    r0 = (r3 | r0);
    r4_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r4 = (r4_rot_7 & 1);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(27));
    r3 = (r3_rot_7 & 1);
    r9 = (0 - r0);
    r0 = (r9 | r0);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_14 & 1);
    r9 = (r0 | r11);
    r0 = (0 - r9);
    r0 = (r0 | r9);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_15 & 1);
    r3 = (r0 | r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_16 & 1);
    r3 = (r0 | r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r4_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_8 & 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80883E50;
    }
}

loc_80883F44:
{
    r3 = MemoryInline::FlatRead32((r26 + 6584));
    goto loc_80883F74;
}

loc_80883F4C:
{
    r5 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_19 & 1020);
    r6 = (r6 + 1);
    r5_addr_4 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_4);
    r0 = MemoryInline::FlatRead16((r5 + 820));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_20 & 1);
    r4 = (r4 | r0);
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r4_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_11 & 1);
}

loc_80883F74:
{
    r0 = (r6 & 255);
}

loc_80883F7C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r7))) {
        goto loc_80883F4C;
    }
}

loc_80883F80:
{
    r3 = MemoryInline::FlatRead32((r8 + 16));
}

loc_80883F88:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80884014;
    }
}

loc_80883F8C:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r27 + 257);
    r0 = (r3 & ~r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80884014;
    }
}

loc_80883F9C:
{
}

loc_80883FA0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80884014;
    }
}

loc_80883FA4:
{
    r3 = (r10 + 116);
    // inline leaf 0x800375F0 (16 guest instruction(s))
}

loc_inl3_0x800375F0:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl3_0x800375F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x80037604;
    }
}

loc_inl3_0x800375FC:
{
    r0 = 0;
    goto loc_inl3_0x80037618;
}

loc_inl3_0x80037604:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_22 & 134217727);
}

loc_inl3_0x80037618:
{
}

loc_inl3_0x8003761C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x80037628;
    }
}

loc_inl3_0x80037620:
{
    r3 = r4;
    goto loc_inl3_cont_800375F0;
}

loc_inl3_0x80037628:
{
    r3 = 0;
}

loc_inl3_cont_800375F0:
{
    // end of inlined leaf 0x800375F0
}

loc_80883FB0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80883FBC;
    }
}

loc_80883FB4:
{
    r3 = 0;
    goto loc_80883FC0;
}

loc_80883FBC:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_80883FC0:
{
}

loc_80883FC4:
{
    r0 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80883FD4;
    }
}

loc_80883FCC:
{
}

loc_80883FD0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_80883FD8;
    }
}

loc_80883FD4:
{
    r0 = 1;
}

loc_80883FD8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80883FDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80884154;
    }
}

loc_80883FE0:
{
    r3 = MemoryInline::FlatRead32((r30 + 180));
    r3_addr_9 = (r3 + r16);
    r3 = MemoryInline::FlatRead32(r3_addr_9);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80883FF8u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r3 = (r0 + r16);
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_80884008:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80884154;
    }
}

loc_8088400C:
{
    MemoryInline::FlatWrite32((r3 + 8), r29);
    goto loc_808841AC;
}

loc_80884014:
{
    r3 = (r10 + 116);
    // inline leaf 0x800375F0 (16 guest instruction(s))
}

loc_inl4_0x800375F0:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl4_0x800375F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x80037604;
    }
}

loc_inl4_0x800375FC:
{
    r0 = 0;
    goto loc_inl4_0x80037618;
}

loc_inl4_0x80037604:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_24 & 134217727);
}

loc_inl4_0x80037618:
{
}

loc_inl4_0x8003761C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl4_0x80037628;
    }
}

loc_inl4_0x80037620:
{
    r3 = r4;
    goto loc_inl4_cont_800375F0;
}

loc_inl4_0x80037628:
{
    r3 = 0;
}

loc_inl4_cont_800375F0:
{
    // end of inlined leaf 0x800375F0
}

loc_80884020:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8088402C;
    }
}

loc_80884024:
{
    r3 = 0;
    goto loc_80884030;
}

loc_8088402C:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_80884030:
{
}

loc_80884034:
{
    r0 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80884044;
    }
}

loc_8088403C:
{
}

loc_80884040:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_80884048;
    }
}

loc_80884044:
{
    r0 = 1;
}

loc_80884048:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8088404C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8088406C;
    }
}

loc_80884050:
{
    r3 = MemoryInline::FlatRead32((r30 + 180));
    r3_addr_10 = (r3 + r16);
    r3 = MemoryInline::FlatRead32(r3_addr_10);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 128));
    ctr = r12;
    ctx->lr = 0x80884068u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80884154;
}

loc_8088406C:
{
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r3 = (r0 + r16);
    r0 = MemoryInline::FlatRead8((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8088407C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80884130;
    }
}

loc_80884080:
{
    r3 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80884094u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r16_addr_4 = (r16 + r0);
    r3 = MemoryInline::FlatRead32(r16_addr_4);
    r4 = (r0 + r16);
    r4 = (r4 + 32);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 112));
    ctr = r12;
    ctx->lr = 0x808840B4u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r16_addr_5 = (r16 + r0);
    r3 = MemoryInline::FlatRead32(r16_addr_5);
    r4 = (r0 + r16);
    r4 = (r4 + 44);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 120));
    ctr = r12;
    ctx->lr = 0x808840D4u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r16_addr_6 = (r16 + r0);
    r3 = MemoryInline::FlatRead32(r16_addr_6);
    r4 = (r0 + r16);
    r4 = (r4 + 20);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 116));
    ctr = r12;
    ctx->lr = 0x808840F4u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r16_addr_7 = (r16 + r0);
    r3 = MemoryInline::FlatRead32(r16_addr_7);
    r4 = (r0 + r16);
    r4 = (r4 + 92);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 88));
    ctr = r12;
    ctx->lr = 0x80884114u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 180));
    r3_addr_11 = (r3 + r16);
    r3 = MemoryInline::FlatRead32(r3_addr_11);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 128));
    ctr = r12;
    ctx->lr = 0x8088412Cu;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80884154;
}

loc_80884130:
{
    r3 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80884144u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r3 = (r0 + r16);
    MemoryInline::FlatWrite32((r3 + 8), r29);
    goto loc_808841AC;
}

loc_80884154:
{
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r3 = (r0 + r16);
    r4 = MemoryInline::FlatRead32((r3 + 8));
}

loc_80884164:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80884178;
    }
}

loc_80884168:
{
}

loc_8088416C:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r28))) {
        goto loc_80884178;
    }
}

loc_80884170:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_80884178:
{
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r3 = (r0 + r16);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80884188:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808841AC;
    }
}

loc_8088418C:
{
    r3 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x808841A0u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r3 = (r0 + r16);
    MemoryInline::FlatWrite32((r3 + 8), r29);
}

loc_808841AC:
{
    r16 = (r16 + 100);
    r17 = (r17 + 1);
}

loc_808841B4:
{
    r0 = MemoryInline::FlatRead32((r30 + 176));
}

loc_808841BC:
{
    if ((static_cast<uint32_t>(r17) < static_cast<uint32_t>(r0))) {
        goto loc_80883DF0;
    }
}

loc_808841C0:
{
    r0 = MemoryInline::FlatRead8((r30 + 200));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808841C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80886148;
    }
}

loc_808841CC:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r30 + 376), r0);
    goto loc_80886148;
}

loc_808841D8:
{
    MemoryInline::FlatWrite32((r30 + 372), r21);
    MemoryInline::FlatWrite32((r30 + 376), r29);
    MemoryInline::FlatWrite32((r30 + 380), r29);
    goto loc_80883CF0;
}

loc_808841E8:
{
}

loc_808841EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8088481C;
    }
}

loc_808841F0:
{
    r0 = MemoryInline::FlatRead32((r30 + 376));
}

loc_808841F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80884410;
    }
}

loc_808841FC:
{
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead8((r30 + 208));
    r3 = MemoryInline::FlatRead16((r30 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8088420C:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 28));
    r0 = (r3 | 1);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 24));
    MemoryInline::FlatWriteFloat32((r30 + 48), f2.d);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r30 + 52), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 56), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 212), f30.d);
    MemoryInline::FlatWriteFloat32((r30 + 216), f31.d);
    MemoryInline::FlatWriteFloat32((r30 + 220), f30.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80884244;
    }
}

loc_8088423C:
{
    f0.d = (-(f31.d));
    MemoryInline::FlatWriteFloat32((r30 + 216), f0.d);
}

loc_80884244:
{
    r3 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead8((r3 + 68));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80884250:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80884260;
    }
}

loc_80884254:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 216));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 216), f0.d);
}

loc_80884260:
{
    r3 = (r1 + 1312);
    // inline leaf 0x8022FAC4 (16 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24960));
    guest_range_3 = MemoryInline::ResolveRangeHost((r3 + -808), 0, 856u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 808u, r3, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24956));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 812u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 812u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 816u, (r3 + 8), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 820u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 820u, (r3 + 12), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 824u, (r3 + 16), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 832u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 832u, (r3 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 836u, (r3 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 840u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 840u, (r3 + 32), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 844u, (r3 + 36), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 848u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 852u, (r3 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 848u, (r3 + 40), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 828u, (r3 + 20), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 808u, r3, f0.d);
    // end of inlined leaf 0x8022FAC4
    f0.d = MemoryInline::FlatReadFloat32((r30 + 216));
    r3 = (r1 + 1264);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r1 + 508), f0.d);
    r4 = (r1 + 504);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, (r1 + 504), f30.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r1 + 512), f30.d);
    ctx->lr = 0x80884284u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022FF98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r4 = (r1 + 1312);
    r3 = (r1 + 1264);
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
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80230410u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    r9 = MemoryInline::FlatRead32((r30 + 32));
    r3 = (r1 + 784);
    r7 = MemoryInline::FlatRead32(r22);
    r4 = (r1 + 492);
    r8 = MemoryInline::FlatRead32((r9 + 36));
    r5 = (r1 + 480);
    r0 = MemoryInline::FlatRead32((r9 + 40));
    MemoryInline::FlatWriteRam32((r1 + 496), r0);
    r6 = MemoryInline::FlatRead32((r22 + 4));
    MemoryInline::FlatWriteRam32((r1 + 492), r8);
    r0 = MemoryInline::FlatRead32((r22 + 8));
    r8 = MemoryInline::FlatRead32((r9 + 44));
    MemoryInline::FlatWriteRam32((r1 + 500), r8);
    MemoryInline::FlatWriteRam32((r1 + 480), r7);
    MemoryInline::FlatWriteRam32((r1 + 484), r6);
    MemoryInline::FlatWriteRam32((r1 + 488), r0);
    ctx->lr = 0x808842D8u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80537740u>(ctx);
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
    cr = ctx->cr;
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 784), 0, 48u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 0u, (r1 + 784));
    r4 = (r1 + 1312);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 4u, (r1 + 788));
    r5 = r4;
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 8u, (r1 + 792));
    r3 = (r1 + 1264);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 12u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 12u, (r1 + 796));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 16u, (r1 + 800));
        }
    }
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 20u, (r1 + 804));
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 1264), 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_5, 0u, (r1 + 1264), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 24u, (r1 + 808));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 4u, (r1 + 1268), f5.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 28u, (r1 + 812));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 8u, (r1 + 1272), f4.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 32u, (r1 + 816));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 12u, (r1 + 1276), f3.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 36u, (r1 + 820));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 16u, (r1 + 1280), f2.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 40u, (r1 + 824));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 20u, (r1 + 1284), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 44u, (r1 + 828));
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 24u, (r1 + 1288), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 28u, (r1 + 1292), f5.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 32u, (r1 + 1296), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 36u, (r1 + 1300), f3.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 40u, (r1 + 1304), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 44u, (r1 + 1308), f1.d);
    }
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
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80230410u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    r0 = MemoryInline::FlatRead16((r30 + 44));
    r3 = r30;
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r29));
    r4 = 1;
    r0 = (r0 | 4);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r0));
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 1312), 0, 44u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 0u, (r1 + 1312));
    MemoryInline::FlatWriteFloat32((r30 + 88), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 4u, (r1 + 1316));
    MemoryInline::FlatWriteFloat32((r30 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 8u, (r1 + 1320));
    MemoryInline::FlatWriteFloat32((r30 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 12u, (r1 + 1324));
    MemoryInline::FlatWriteFloat32((r30 + 100), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 16u, (r1 + 1328));
    MemoryInline::FlatWriteFloat32((r30 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 20u, (r1 + 1332));
    MemoryInline::FlatWriteFloat32((r30 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 24u, (r1 + 1336));
    MemoryInline::FlatWriteFloat32((r30 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 28u, (r1 + 1340));
    MemoryInline::FlatWriteFloat32((r30 + 116), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 32u, (r1 + 1344));
    MemoryInline::FlatWriteFloat32((r30 + 120), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 36u, (r1 + 1348));
    MemoryInline::FlatWriteFloat32((r30 + 124), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 40u, (r1 + 1352));
    MemoryInline::FlatWriteFloat32((r30 + 128), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 48));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 56));
    MemoryInline::FlatWriteFloat32((r30 + 100), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 116), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 132), f0.d);
    r12 = MemoryInline::FlatRead32(r30);
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x808843E0u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r30;
    r4 = 1;
    // inline leaf 0x808217B0 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 157), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x808217B0
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = 2;
    f1.d = MemoryInline::FlatReadFloat32(r20);
    r5 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r20 + 44));
    ctx->lr = 0x80884408u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80557684u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r30 + 376), r21);
    goto loc_80883CF0;
}

loc_80884410:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80884414:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8088480C;
    }
}

loc_80884418:
{
    r17 = 0;
    r16 = 0;
    goto loc_808847E8;
}

loc_80884424:
{
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r16_addr_11 = (r16 + r0);
    r10 = MemoryInline::FlatRead32(r16_addr_11);
    r8 = (r0 + r16);
}

loc_80884434:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_808847E0;
    }
}

loc_80884438:
{
    r0 = MemoryInline::FlatRead32((r8 + 8));
}

loc_80884440:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808847E0;
    }
}

loc_80884444:
{
    r3 = MemoryInline::FlatRead32((r25 + -10456));
    r4 = 0;
    r6 = 0;
    r7 = MemoryInline::FlatRead8((r3 + 37));
}

loc_80884458:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_808845B4;
    }
}

loc_8088445C:
{
}

loc_80884460:
{
    r0 = (r7 + 248);
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(8))) {
        goto loc_80884578;
    }
}

loc_80884468:
{
    r3 = (r0 & 255);
    r5 = MemoryInline::FlatRead32((r26 + 6584));
    r0 = (r3 + 7);
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_29 & 536870911);
    ctr = r0;
}

loc_80884480:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(0))) {
        goto loc_80884578;
    }
}

loc_80884484:
{
    r3 = MemoryInline::FlatRead32((r5 + 24));
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_31 & 1020);
    r6 = (r6 + 8);
    r9 = (r3 + r0);
    r3_addr_16 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_16);
    r11 = MemoryInline::FlatRead32((r9 + 4));
    r3 = MemoryInline::FlatRead16((r3 + 820));
    r0 = MemoryInline::FlatRead16((r11 + 820));
    r3_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r3 = (r3_rot_13 & 1);
    r12 = MemoryInline::FlatRead32((r9 + 8));
    r4 = (r4 | r3);
    r0_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_32 & 1);
    r3 = (0 - r4);
    r12 = MemoryInline::FlatRead16((r12 + 820));
    r4 = (r3 | r4);
    r11 = MemoryInline::FlatRead32((r9 + 12));
    r4_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_16 & 1);
    r12_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(27));
    r12 = (r12_rot_10 & 1);
    r15 = (r4 | r0);
    r3 = MemoryInline::FlatRead16((r11 + 820));
    r0 = (0 - r15);
    r4 = MemoryInline::FlatRead32((r9 + 16));
    r15 = (r0 | r15);
    r11 = MemoryInline::FlatRead32((r9 + 20));
    r0 = MemoryInline::FlatRead16((r4 + 820));
    r4_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(1));
    r4 = (r4_rot_17 & 1);
    r4 = (r4 | r12);
    r12 = MemoryInline::FlatRead16((r11 + 820));
    r15 = (0 - r4);
    r11 = MemoryInline::FlatRead32((r9 + 24));
    r15 = (r15 | r4);
    r4 = MemoryInline::FlatRead32((r9 + 28));
    r9_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(1));
    r9 = (r9_rot_10 & 1);
    r3_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r3 = (r3_rot_14 & 1);
    r3 = (r9 | r3);
    r9 = MemoryInline::FlatRead16((r11 + 820));
    r11 = (0 - r3);
    r4 = MemoryInline::FlatRead16((r4 + 820));
    r3 = (r11 | r3);
    r0_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_33 & 1);
    r3_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_15 & 1);
    r11_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(27));
    r11 = (r11_rot_10 & 1);
    r0 = (r3 | r0);
    r4_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r4 = (r4_rot_18 & 1);
    r3_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(27));
    r3 = (r3_rot_16 & 1);
    r9 = (0 - r0);
    r0 = (r9 | r0);
    r0_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_34 & 1);
    r9 = (r0 | r11);
    r0 = (0 - r9);
    r0 = (r0 | r9);
    r0_rot_35 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_35 & 1);
    r3 = (r0 | r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_36 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_36 & 1);
    r3 = (r0 | r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r4_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_19 & 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80884484;
    }
}

loc_80884578:
{
    r3 = MemoryInline::FlatRead32((r26 + 6584));
    goto loc_808845A8;
}

loc_80884580:
{
    r5 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_39 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_39 & 1020);
    r6 = (r6 + 1);
    r5_addr_9 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_9);
    r0 = MemoryInline::FlatRead16((r5 + 820));
    r0_rot_40 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_40 & 1);
    r4 = (r4 | r0);
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r4_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_22 & 1);
}

loc_808845A8:
{
    r0 = (r6 & 255);
}

loc_808845B0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r7))) {
        goto loc_80884580;
    }
}

loc_808845B4:
{
    r3 = MemoryInline::FlatRead32((r8 + 16));
}

loc_808845BC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80884648;
    }
}

loc_808845C0:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r27 + 257);
    r0 = (r3 & ~r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80884648;
    }
}

loc_808845D0:
{
}

loc_808845D4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80884648;
    }
}

loc_808845D8:
{
    r3 = (r10 + 116);
    // inline leaf 0x800375F0 (16 guest instruction(s))
}

loc_inl7_0x800375F0:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl7_0x800375F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl7_0x80037604;
    }
}

loc_inl7_0x800375FC:
{
    r0 = 0;
    goto loc_inl7_0x80037618;
}

loc_inl7_0x80037604:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_42 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_42 & 134217727);
}

loc_inl7_0x80037618:
{
}

loc_inl7_0x8003761C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl7_0x80037628;
    }
}

loc_inl7_0x80037620:
{
    r3 = r4;
    goto loc_inl7_cont_800375F0;
}

loc_inl7_0x80037628:
{
    r3 = 0;
}

loc_inl7_cont_800375F0:
{
    // end of inlined leaf 0x800375F0
}

loc_808845E4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808845F0;
    }
}

loc_808845E8:
{
    r3 = 0;
    goto loc_808845F4;
}

loc_808845F0:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_808845F4:
{
}

loc_808845F8:
{
    r0 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80884608;
    }
}

loc_80884600:
{
}

loc_80884604:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8088460C;
    }
}

loc_80884608:
{
    r0 = 1;
}

loc_8088460C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80884610:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80884788;
    }
}

loc_80884614:
{
    r3 = MemoryInline::FlatRead32((r30 + 180));
    r3_addr_19 = (r3 + r16);
    r3 = MemoryInline::FlatRead32(r3_addr_19);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8088462Cu;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r3 = (r0 + r16);
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_8088463C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80884788;
    }
}

loc_80884640:
{
    MemoryInline::FlatWrite32((r3 + 8), r29);
    goto loc_808847E0;
}

loc_80884648:
{
    r3 = (r10 + 116);
    // inline leaf 0x800375F0 (16 guest instruction(s))
}

loc_inl8_0x800375F0:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl8_0x800375F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl8_0x80037604;
    }
}

loc_inl8_0x800375FC:
{
    r0 = 0;
    goto loc_inl8_0x80037618;
}

loc_inl8_0x80037604:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_44 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_44 & 134217727);
}

loc_inl8_0x80037618:
{
}

loc_inl8_0x8003761C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl8_0x80037628;
    }
}

loc_inl8_0x80037620:
{
    r3 = r4;
    goto loc_inl8_cont_800375F0;
}

loc_inl8_0x80037628:
{
    r3 = 0;
}

loc_inl8_cont_800375F0:
{
    // end of inlined leaf 0x800375F0
}

loc_80884654:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80884660;
    }
}

loc_80884658:
{
    r3 = 0;
    goto loc_80884664;
}

loc_80884660:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_80884664:
{
}

loc_80884668:
{
    r0 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80884678;
    }
}

loc_80884670:
{
}

loc_80884674:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8088467C;
    }
}

loc_80884678:
{
    r0 = 1;
}

loc_8088467C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80884680:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808846A0;
    }
}

loc_80884684:
{
    r3 = MemoryInline::FlatRead32((r30 + 180));
    r3_addr_20 = (r3 + r16);
    r3 = MemoryInline::FlatRead32(r3_addr_20);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 128));
    ctr = r12;
    ctx->lr = 0x8088469Cu;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80884788;
}

loc_808846A0:
{
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r3 = (r0 + r16);
    r0 = MemoryInline::FlatRead8((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808846B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80884764;
    }
}

loc_808846B4:
{
    r3 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x808846C8u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r16_addr_12 = (r16 + r0);
    r3 = MemoryInline::FlatRead32(r16_addr_12);
    r4 = (r0 + r16);
    r4 = (r4 + 32);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 112));
    ctr = r12;
    ctx->lr = 0x808846E8u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r16_addr_13 = (r16 + r0);
    r3 = MemoryInline::FlatRead32(r16_addr_13);
    r4 = (r0 + r16);
    r4 = (r4 + 44);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 120));
    ctr = r12;
    ctx->lr = 0x80884708u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r16_addr_14 = (r16 + r0);
    r3 = MemoryInline::FlatRead32(r16_addr_14);
    r4 = (r0 + r16);
    r4 = (r4 + 20);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 116));
    ctr = r12;
    ctx->lr = 0x80884728u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r16_addr_15 = (r16 + r0);
    r3 = MemoryInline::FlatRead32(r16_addr_15);
    r4 = (r0 + r16);
    r4 = (r4 + 92);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 88));
    ctr = r12;
    ctx->lr = 0x80884748u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 180));
    r3_addr_21 = (r3 + r16);
    r3 = MemoryInline::FlatRead32(r3_addr_21);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 128));
    ctr = r12;
    ctx->lr = 0x80884760u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80884788;
}

loc_80884764:
{
    r3 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80884778u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r3 = (r0 + r16);
    MemoryInline::FlatWrite32((r3 + 8), r29);
    goto loc_808847E0;
}

loc_80884788:
{
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r3 = (r0 + r16);
    r4 = MemoryInline::FlatRead32((r3 + 8));
}

loc_80884798:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_808847AC;
    }
}

loc_8088479C:
{
}

loc_808847A0:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r28))) {
        goto loc_808847AC;
    }
}

loc_808847A4:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_808847AC:
{
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r3 = (r0 + r16);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808847BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808847E0;
    }
}

loc_808847C0:
{
    r3 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x808847D4u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r3 = (r0 + r16);
    MemoryInline::FlatWrite32((r3 + 8), r29);
}

loc_808847E0:
{
    r16 = (r16 + 100);
    r17 = (r17 + 1);
}

loc_808847E8:
{
    r0 = MemoryInline::FlatRead32((r30 + 176));
}

loc_808847F0:
{
    if ((static_cast<uint32_t>(r17) < static_cast<uint32_t>(r0))) {
        goto loc_80884424;
    }
}

loc_808847F4:
{
    r0 = MemoryInline::FlatRead8((r30 + 200));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808847FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80886148;
    }
}

loc_80884800:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r30 + 376), r0);
    goto loc_80886148;
}

loc_8088480C:
{
    MemoryInline::FlatWrite32((r30 + 372), r29);
    MemoryInline::FlatWrite32((r30 + 376), r29);
    MemoryInline::FlatWrite32((r30 + 380), r29);
    goto loc_80883CF0;
}

loc_8088481C:
{
}

loc_80884820:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80885888;
    }
}

loc_80884824:
{
    r0 = MemoryInline::FlatRead32((r30 + 376));
}

loc_8088482C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80884CA4;
    }
}

loc_80884830:
{
    r0 = MemoryInline::FlatRead8((r30 + 208));
    MemoryInline::FlatWriteFloat32((r30 + 212), f30.d);
}

loc_8088483C:
{
    MemoryInline::FlatWriteFloat32((r30 + 216), f31.d);
    MemoryInline::FlatWriteFloat32((r30 + 220), f30.d);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80884850;
    }
}

loc_80884848:
{
    f0.d = (-(f31.d));
    MemoryInline::FlatWriteFloat32((r30 + 216), f0.d);
}

loc_80884850:
{
    r3 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead8((r3 + 68));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8088485C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8088486C;
    }
}

loc_80884860:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 216));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 216), f0.d);
}

loc_8088486C:
{
    r3 = (r1 + 1216);
    // inline leaf 0x8022FAC4 (16 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24960));
    guest_range_7 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_7, 0u, r3, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24956));
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_7, 4u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_7, 8u, (r3 + 8), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_7, 12u, (r3 + 12), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_7, 16u, (r3 + 16), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_7, 24u, (r3 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_7, 28u, (r3 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_7, 32u, (r3 + 32), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_7, 36u, (r3 + 36), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_7, 44u, (r3 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_7, 40u, (r3 + 40), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_7, 20u, (r3 + 20), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_7, 0u, r3, f0.d);
    // end of inlined leaf 0x8022FAC4
    r3 = (r1 + 1168);
    r4 = (r30 + 212);
    ctx->lr = 0x80884880u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022FF98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r4 = (r1 + 1216);
    r3 = (r1 + 1168);
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
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80230410u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    r9 = MemoryInline::FlatRead32((r30 + 32));
    r3 = (r1 + 736);
    r7 = MemoryInline::FlatRead32(r22);
    r4 = (r1 + 468);
    r8 = MemoryInline::FlatRead32((r9 + 36));
    r5 = (r1 + 456);
    r0 = MemoryInline::FlatRead32((r9 + 40));
    MemoryInline::FlatWriteRam32((r1 + 472), r0);
    r6 = MemoryInline::FlatRead32((r22 + 4));
    MemoryInline::FlatWriteRam32((r1 + 468), r8);
    r0 = MemoryInline::FlatRead32((r22 + 8));
    r8 = MemoryInline::FlatRead32((r9 + 44));
    MemoryInline::FlatWriteRam32((r1 + 476), r8);
    MemoryInline::FlatWriteRam32((r1 + 456), r7);
    MemoryInline::FlatWriteRam32((r1 + 460), r6);
    MemoryInline::FlatWriteRam32((r1 + 464), r0);
    ctx->lr = 0x808848D4u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80537740u>(ctx);
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
    cr = ctx->cr;
    guest_range_8 = MemoryInline::ResolveRangeHost((r1 + 736), 0, 48u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 0u, (r1 + 736));
    r4 = (r1 + 1216);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 4u, (r1 + 740));
    r5 = r4;
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 8u, (r1 + 744));
    r3 = (r1 + 1168);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 12u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 12u, (r1 + 748));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 16u, (r1 + 752));
        }
    }
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 20u, (r1 + 756));
    guest_range_9 = MemoryInline::ResolveRangeHost((r1 + 1168), 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_9, 0u, (r1 + 1168), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 24u, (r1 + 760));
    MemoryInline::WriteResolvedFloat32(guest_range_9, 4u, (r1 + 1172), f5.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 28u, (r1 + 764));
    MemoryInline::WriteResolvedFloat32(guest_range_9, 8u, (r1 + 1176), f4.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 32u, (r1 + 768));
    MemoryInline::WriteResolvedFloat32(guest_range_9, 12u, (r1 + 1180), f3.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 36u, (r1 + 772));
    MemoryInline::WriteResolvedFloat32(guest_range_9, 16u, (r1 + 1184), f2.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 40u, (r1 + 776));
    MemoryInline::WriteResolvedFloat32(guest_range_9, 20u, (r1 + 1188), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_8, 44u, (r1 + 780));
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_9, 24u, (r1 + 1192), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_9, 28u, (r1 + 1196), f5.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_9, 32u, (r1 + 1200), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_9, 36u, (r1 + 1204), f3.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_9, 40u, (r1 + 1208), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_9, 44u, (r1 + 1212), f1.d);
    }
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
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80230410u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    r0 = MemoryInline::FlatRead16((r30 + 44));
    r3 = r30;
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r29));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r0));
    guest_range_10 = MemoryInline::ResolveRangeHost((r1 + 1216), 0, 44u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_10, 0u, (r1 + 1216));
    MemoryInline::FlatWriteFloat32((r30 + 88), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_10, 4u, (r1 + 1220));
    MemoryInline::FlatWriteFloat32((r30 + 92), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_10, 8u, (r1 + 1224));
    MemoryInline::FlatWriteFloat32((r30 + 96), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_10, 12u, (r1 + 1228));
    MemoryInline::FlatWriteFloat32((r30 + 100), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_10, 16u, (r1 + 1232));
    MemoryInline::FlatWriteFloat32((r30 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_10, 20u, (r1 + 1236));
    MemoryInline::FlatWriteFloat32((r30 + 108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_10, 24u, (r1 + 1240));
    MemoryInline::FlatWriteFloat32((r30 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_10, 28u, (r1 + 1244));
    MemoryInline::FlatWriteFloat32((r30 + 116), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_10, 32u, (r1 + 1248));
    MemoryInline::FlatWriteFloat32((r30 + 120), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_10, 36u, (r1 + 1252));
    MemoryInline::FlatWriteFloat32((r30 + 124), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_10, 40u, (r1 + 1256));
    MemoryInline::FlatWriteFloat32((r30 + 128), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 48));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 56));
    MemoryInline::FlatWriteFloat32((r30 + 100), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 116), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 132), f0.d);
    ctx->lr = 0x808849CCu;
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
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80821640u>(ctx);
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
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = (r1 + 624);
    r4 = (r30 + 88);
    r5 = 1;
    // inline leaf 0x80537B80 (9 guest instruction(s))
    r0_rot_48 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_48 & -4);
    r5 = (r4 + r0);
    addr_lfsx_80537B88_loc_0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80537B88_loc_0);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 32));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80537B80
    r7 = MemoryInline::FlatRead32((r1 + 624));
    r3 = (r1 + 612);
    r6 = MemoryInline::FlatRead32((r1 + 628));
    r4 = (r30 + 48);
    r0 = MemoryInline::FlatRead32((r1 + 632));
    r5 = (r1 + 444);
    MemoryInline::FlatWriteRam32((r1 + 444), r7);
    MemoryInline::FlatWriteRam32((r1 + 448), r6);
    MemoryInline::FlatWriteRam32((r1 + 452), r0);
    ctx->lr = 0x80884A04u;
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
    InvokeDirectCpu<0x805381A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r7 = MemoryInline::FlatRead32((r1 + 624));
    r3 = (r1 + 600);
    r6 = MemoryInline::FlatRead32((r1 + 628));
    r4 = (r30 + 344);
    r0 = MemoryInline::FlatRead32((r1 + 632));
    r5 = (r1 + 432);
    MemoryInline::FlatWriteRam32((r1 + 432), r7);
    MemoryInline::FlatWriteRam32((r1 + 436), r6);
    MemoryInline::FlatWriteRam32((r1 + 440), r0);
    ctx->lr = 0x80884A2Cu;
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
    InvokeDirectCpu<0x805381A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r3 = (r1 + 588);
    r4 = (r1 + 612);
    r5 = (r1 + 600);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    f1.d = MemoryInline::FlatReadFloat32((r1 + 588));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 592));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 596));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f27.d);
}

loc_80884A60:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_49 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_49 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80884A6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80884AAC;
    }
}

loc_80884A70:
{
    r3 = r30;
    ctx->lr = 0x80884A78u;
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
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80821640u>(ctx);
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
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = (r1 + 420);
    r4 = (r30 + 88);
    r5 = 2;
    // inline leaf 0x80537B80 (9 guest instruction(s))
    r0_rot_50 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_50 & -4);
    r5 = (r4 + r0);
    addr_lfsx_80537B88_loc_1 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80537B88_loc_1);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 32));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80537B80
    r3 = (r1 + 408);
    r4 = (r1 + 420);
    // inline leaf 0x805147D4 (10 guest instruction(s))
    f2.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f2.d = (-(f2.d));
    f1.d = (-(f1.d));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    // end of inlined leaf 0x805147D4
    f2.d = MemoryInline::FlatReadFloat32((r1 + 408));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 412));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 416));
    MemoryInline::FlatWriteRamFloat32((r1 + 588), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 592), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 596), f0.d);
}

loc_80884AAC:
{
    r3 = (r1 + 588);
    ctx->lr = 0x80884AB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r10 = MemoryInline::FlatRead32((r1 + 588));
    r3 = (r1 + 688);
    r9 = MemoryInline::FlatRead32((r1 + 592));
    r4 = (r1 + 396);
    r8 = MemoryInline::FlatRead32((r1 + 596));
    r5 = (r1 + 384);
    r7 = MemoryInline::FlatRead32((r1 + 624));
    r6 = MemoryInline::FlatRead32((r1 + 628));
    r0 = MemoryInline::FlatRead32((r1 + 632));
    MemoryInline::FlatWriteRam32((r1 + 396), r10);
    MemoryInline::FlatWriteRam32((r1 + 400), r9);
    MemoryInline::FlatWriteRam32((r1 + 404), r8);
    MemoryInline::FlatWriteRam32((r1 + 384), r7);
    MemoryInline::FlatWriteRam32((r1 + 388), r6);
    MemoryInline::FlatWriteRam32((r1 + 392), r0);
    ctx->lr = 0x80884AF4u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80537740u>(ctx);
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
    cr = ctx->cr;
    guest_range_11 = MemoryInline::ResolveRangeHost((r1 + 688), 0, 48u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_11, 0u, (r1 + 688));
    r3 = (r1 + 372);
    guest_range_12 = MemoryInline::ResolveRangeHost((r30 + 224), 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_12, 0u, (r30 + 224), f0.d);
    r4 = (r30 + 224);
    r5 = 0;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_11, 4u, (r1 + 692));
    MemoryInline::WriteResolvedFloat32(guest_range_12, 4u, (r30 + 228), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_11, 8u, (r1 + 696));
    MemoryInline::WriteResolvedFloat32(guest_range_12, 8u, (r30 + 232), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_11, 12u, (r1 + 700));
    MemoryInline::WriteResolvedFloat32(guest_range_12, 12u, (r30 + 236), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_11, 16u, (r1 + 704));
    MemoryInline::WriteResolvedFloat32(guest_range_12, 16u, (r30 + 240), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_11, 20u, (r1 + 708));
    MemoryInline::WriteResolvedFloat32(guest_range_12, 20u, (r30 + 244), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_11, 24u, (r1 + 712));
    MemoryInline::WriteResolvedFloat32(guest_range_12, 24u, (r30 + 248), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_11, 28u, (r1 + 716));
    MemoryInline::WriteResolvedFloat32(guest_range_12, 28u, (r30 + 252), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_11, 32u, (r1 + 720));
    MemoryInline::WriteResolvedFloat32(guest_range_12, 32u, (r30 + 256), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_11, 36u, (r1 + 724));
    MemoryInline::WriteResolvedFloat32(guest_range_12, 36u, (r30 + 260), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_11, 40u, (r1 + 728));
    MemoryInline::WriteResolvedFloat32(guest_range_12, 40u, (r30 + 264), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_11, 44u, (r1 + 732));
    MemoryInline::WriteResolvedFloat32(guest_range_12, 44u, (r30 + 268), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r14 + 16640));
    f1.d = MemoryInline::FlatReadFloat32((r23 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r23 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 1132), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1148), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1164), f0.d);
    // inline leaf 0x80537B80 (9 guest instruction(s))
    r0_rot_52 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_52 & -4);
    r5 = (r4 + r0);
    addr_lfsx_80537B88_loc_2 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80537B88_loc_2);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 32));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80537B80
    f0.d = MemoryInline::FlatReadFloat32((r19 + 20));
    r3 = (r1 + 1120);
    r4 = (r1 + 372);
    f1.d = (-(f0.d));
    ctx->lr = 0x80884B90u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x802303BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = (r1 + 360);
    r4 = (r1 + 1120);
    r5 = (r1 + 588);
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
    ctx->fpr[5] = f5;
    InvokeDirectCpu<0x802303F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f1.d = MemoryInline::FlatReadFloat32((r1 + 360));
    r3 = (r1 + 348);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 364));
    r4 = (r1 + 588);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 368));
    MemoryInline::FlatWriteRamFloat32((r1 + 588), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r19 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 592), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 596), f0.d);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f0.d = MemoryInline::FlatReadFloat32((r1 + 348));
    r3 = (r1 + 336);
    guest_range_13 = MemoryInline::ResolveRangeHost((r30 + 157), 0, 205u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_13, 163u, (r30 + 320), f0.d);
    r4 = (r1 + 624);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 352));
    MemoryInline::WriteResolvedFloat32(guest_range_13, 167u, (r30 + 324), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 356));
    MemoryInline::WriteResolvedFloat32(guest_range_13, 171u, (r30 + 328), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r19 + 28));
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r3 = (r1 + 324);
    r5 = (r1 + 336);
    r4 = (r4 + 24);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    f0.d = MemoryInline::FlatReadFloat32((r1 + 324));
    r3 = r30;
    MemoryInline::WriteResolvedFloat32(guest_range_13, 175u, (r30 + 332), f0.d);
    r4 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 328));
    MemoryInline::WriteResolvedFloat32(guest_range_13, 179u, (r30 + 336), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 332));
    MemoryInline::WriteResolvedFloat32(guest_range_13, 183u, (r30 + 340), f0.d);
    // inline leaf 0x808217B0 (2 guest instruction(s))
    MemoryInline::WriteResolved8(guest_range_13, 0u, (r3 + 157), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x808217B0
    MemoryInline::WriteResolved8(guest_range_13, 203u, (r30 + 360), static_cast<uint8_t>(r29));
    r3 = MemoryInline::FlatRead32((r24 + 8656));
    r0 = MemoryInline::FlatRead8((r3 + 20));
    MemoryInline::WriteResolved8(guest_range_13, 204u, (r30 + 361), static_cast<uint8_t>(r0));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80884C3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80884C4C;
    }
}

loc_80884C40:
{
    r3 = MemoryInline::FlatRead32((r24 + 8656));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 28));
    MemoryInline::FlatWriteFloat32((r30 + 364), f0.d);
}

loc_80884C4C:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = 2;
    f1.d = MemoryInline::FlatReadFloat32(r20);
    r5 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r20 + 44));
    ctx->lr = 0x80884C68u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80557684u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = 0;
    f26.d = MemoryInline::FlatReadFloat32((r18 + 52));
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_53 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_53 & -4);
    r3_addr_24 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_24);
    // end of inlined leaf 0x80557340
    r12 = MemoryInline::FlatRead32(r3);
    f1.d = f26.d;
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x80884C90u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r30 + 380), r29);
    r0 = MemoryInline::FlatRead32((r19 + 32));
    MemoryInline::FlatWrite32((r30 + 356), r0);
    MemoryInline::FlatWrite32((r30 + 376), r21);
    goto loc_80883CF0;
}

loc_80884CA4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80884CA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80885874;
    }
}

loc_80884CAC:
{
    r0 = MemoryInline::FlatRead32((r30 + 380));
    MemoryInline::FlatWriteRam32((r1 + 1460), r0);
    r0 = 1127219200;
    r3 = MemoryInline::FlatRead32((r19 + 12));
    MemoryInline::FlatWriteRam32((r1 + 1456), r0);
    r0 = 1127219200;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 1456));
    MemoryInline::FlatWriteRam32((r1 + 1468), r3);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f28.d));
    MemoryInline::FlatWriteRam32((r1 + 1464), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 1464));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f28.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    SetCRFloatResident(cr, 0, f29.d, f1.d);
}

loc_80884CE4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80884CEC;
    }
}

loc_80884CE8:
{
    f1.d = f29.d;
}

loc_80884CEC:
{
    r3 = (r18 + 16);
    r4 = (r18 + 16);
    r9 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r1 + 576);
    r8 = MemoryInline::FlatRead32((r4 + 8));
    r4 = (r1 + 312);
    r10 = MemoryInline::FlatRead32((r18 + 16));
    r5 = (r1 + 300);
    r7 = MemoryInline::FlatRead32(r23);
    r6 = MemoryInline::FlatRead32((r23 + 4));
    r0 = MemoryInline::FlatRead32((r23 + 8));
    MemoryInline::FlatWriteRam32((r1 + 312), r10);
    MemoryInline::FlatWriteRam32((r1 + 316), r9);
    MemoryInline::FlatWriteRam32((r1 + 320), r8);
    MemoryInline::FlatWriteRam32((r1 + 300), r7);
    MemoryInline::FlatWriteRam32((r1 + 304), r6);
    MemoryInline::FlatWriteRam32((r1 + 308), r0);
    ctx->lr = 0x80884D34u;
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
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x8086C098u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    r6 = MemoryInline::FlatRead32((r30 + 320));
    r3 = (r1 + 276);
    r0 = MemoryInline::FlatRead32((r30 + 324));
    r4 = (r30 + 320);
    MemoryInline::FlatWriteRam32((r1 + 292), r0);
    r5 = (r18 + 40);
    MemoryInline::FlatWriteRam32((r1 + 288), r6);
    r0 = MemoryInline::FlatRead32((r30 + 328));
    MemoryInline::FlatWriteRam32((r1 + 296), r0);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    f1.d = MemoryInline::FlatReadFloat32((r19 + 24));
    r3 = (r1 + 264);
    r4 = (r1 + 288);
    r5 = (r1 + 276);
    ctx->lr = 0x80884D70u;
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
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x8086C098u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    f1.d = MemoryInline::FlatReadFloat32((r1 + 264));
    r3 = r30;
    MemoryInline::FlatWriteFloat32((r30 + 320), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 332));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 268));
    MemoryInline::FlatWriteFloat32((r30 + 324), f4.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 336));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 272));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 340));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f4.d));
    MemoryInline::FlatWriteFloat32((r30 + 328), f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    MemoryInline::FlatWriteFloat32((r30 + 332), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 336), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 340), f0.d);
    ctx->lr = 0x80884DB4u;
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
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80821640u>(ctx);
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
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    guest_range_14 = MemoryInline::ResolveRangeHost((r30 + 88), 0, 180u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_14, 0u, (r30 + 88));
    r3 = (r1 + 252);
    MemoryInline::FlatWriteRamFloat32((r1 + 1072), f0.d);
    r4 = (r1 + 1072);
    r5 = 1;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_14, 4u, (r30 + 92));
    MemoryInline::FlatWriteRamFloat32((r1 + 1076), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_14, 8u, (r30 + 96));
    MemoryInline::FlatWriteRamFloat32((r1 + 1080), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_14, 12u, (r30 + 100));
    MemoryInline::FlatWriteRamFloat32((r1 + 1084), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_14, 16u, (r30 + 104));
    MemoryInline::FlatWriteRamFloat32((r1 + 1088), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_14, 20u, (r30 + 108));
    MemoryInline::FlatWriteRamFloat32((r1 + 1092), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_14, 24u, (r30 + 112));
    MemoryInline::FlatWriteRamFloat32((r1 + 1096), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_14, 28u, (r30 + 116));
    MemoryInline::FlatWriteRamFloat32((r1 + 1100), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_14, 32u, (r30 + 120));
    MemoryInline::FlatWriteRamFloat32((r1 + 1104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_14, 36u, (r30 + 124));
    MemoryInline::FlatWriteRamFloat32((r1 + 1108), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_14, 40u, (r30 + 128));
    MemoryInline::FlatWriteRamFloat32((r1 + 1112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_14, 44u, (r30 + 132));
    MemoryInline::FlatWriteRamFloat32((r1 + 1116), f0.d);
    // inline leaf 0x80537B80 (9 guest instruction(s))
    r0_rot_54 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_54 & -4);
    r5 = (r4 + r0);
    addr_lfsx_80537B88_loc_3 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80537B88_loc_3);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 32));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80537B80
    f0.d = MemoryInline::FlatReadFloat32((r19 + 28));
    r3 = (r1 + 240);
    r4 = (r1 + 252);
    f1.d = (-(f0.d));
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f2.d = MemoryInline::FlatReadFloat32((r1 + 240));
    r3 = (r1 + 1024);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 244));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 248));
    MemoryInline::FlatWriteRamFloat32((r1 + 1084), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1100), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1116), f0.d);
    // inline leaf 0x8022FAC4 (16 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24960));
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24956));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 16), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 24), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 28), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 32), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 36), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 44), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 40), f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 20), f0.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8022FAC4
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_14, 136u, (r30 + 224));
    r3 = (r1 + 228);
    MemoryInline::FlatWriteRamFloat32((r1 + 976), f0.d);
    r4 = (r30 + 224);
    r5 = 3;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_14, 152u, (r30 + 240));
    MemoryInline::FlatWriteRamFloat32((r1 + 980), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_14, 168u, (r30 + 256));
    MemoryInline::FlatWriteRamFloat32((r1 + 984), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_14, 140u, (r30 + 228));
    MemoryInline::FlatWriteRamFloat32((r1 + 992), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_14, 156u, (r30 + 244));
    MemoryInline::FlatWriteRamFloat32((r1 + 996), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_14, 172u, (r30 + 260));
    MemoryInline::FlatWriteRamFloat32((r1 + 1000), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_14, 144u, (r30 + 232));
    MemoryInline::FlatWriteRamFloat32((r1 + 1008), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_14, 160u, (r30 + 248));
    MemoryInline::FlatWriteRamFloat32((r1 + 1012), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_14, 176u, (r30 + 264));
    MemoryInline::FlatWriteRamFloat32((r1 + 1016), f0.d);
    // inline leaf 0x80537B80 (9 guest instruction(s))
    r0_rot_55 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_55 & -4);
    r5 = (r4 + r0);
    addr_lfsx_80537B88_loc_4 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80537B88_loc_4);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 32));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80537B80
    f2.d = MemoryInline::FlatReadFloat32((r1 + 228));
    r4 = (r1 + 1024);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 232));
    r5 = r4;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 236));
    r3 = (r1 + 976);
    MemoryInline::FlatWriteRamFloat32((r1 + 988), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1004), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1020), f0.d);
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
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80230410u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    r3 = (r1 + 928);
    r4 = (r1 + 576);
    ctx->lr = 0x80884EE4u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022FF98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r4 = (r1 + 1024);
    r3 = (r1 + 928);
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
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80230410u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    r4 = (r1 + 1024);
    r3 = (r30 + 224);
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
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80230410u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    r4 = (r1 + 1072);
    r3 = (r1 + 1024);
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
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80230410u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    r3 = (r1 + 216);
    r4 = (r1 + 1072);
    r5 = 3;
    // inline leaf 0x80537B80 (9 guest instruction(s))
    r0_rot_56 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_56 & -4);
    r5 = (r4 + r0);
    addr_lfsx_80537B88_loc_5 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80537B88_loc_5);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 32));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80537B80
    r3 = (r1 + 204);
    r4 = (r1 + 216);
    r5 = (r30 + 332);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    f2.d = MemoryInline::FlatReadFloat32((r1 + 204));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 208));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 212));
    MemoryInline::FlatWriteRamFloat32((r1 + 1084), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1100), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1116), f0.d);
    r0 = MemoryInline::FlatRead16((r30 + 44));
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r29));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 1072));
    MemoryInline::FlatWriteFloat32((r30 + 88), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 1076));
    MemoryInline::FlatWriteFloat32((r30 + 92), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 1080));
    MemoryInline::FlatWriteFloat32((r30 + 96), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 1084));
    MemoryInline::FlatWriteFloat32((r30 + 100), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 1088));
    MemoryInline::FlatWriteFloat32((r30 + 104), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 1092));
    MemoryInline::FlatWriteFloat32((r30 + 108), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 1096));
    MemoryInline::FlatWriteFloat32((r30 + 112), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 1100));
    MemoryInline::FlatWriteFloat32((r30 + 116), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 1104));
    MemoryInline::FlatWriteFloat32((r30 + 120), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 1108));
    MemoryInline::FlatWriteFloat32((r30 + 124), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 1112));
    MemoryInline::FlatWriteFloat32((r30 + 128), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 1116));
    MemoryInline::FlatWriteFloat32((r30 + 132), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 1084));
    MemoryInline::FlatWriteFloat32((r30 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 1100));
    MemoryInline::FlatWriteFloat32((r30 + 52), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 1116));
    MemoryInline::FlatWriteFloat32((r30 + 56), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1360), f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1364), f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1368), f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1372), f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1376), f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 1380), f30.d);
    MemoryInline::FlatWriteRam32((r1 + 1448), r29);
    MemoryInline::FlatWriteRam32((r1 + 8), r29);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 324));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_80884FFC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_808853C8;
    }
}

loc_80885000:
{
    r0 = MemoryInline::FlatRead8((r30 + 360));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80885008:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808853C8;
    }
}

loc_8088500C:
{
    r3 = 0x809C0000u;
    r5 = 0x809C0000u;
    r6 = 552075264;
    f1.d = MemoryInline::FlatReadFloat32(r19);
    r3 = MemoryInline::FlatRead32((r3 + 12100));
    r4 = (r30 + 332);
    r5 = (r5 + 15364);
    r6 = (r6 + 4095);
    r7 = (r1 + 1360);
    r8 = (r1 + 8);
    r9 = 0;
    ctx->lr = 0x8088503Cu;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8078F784u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80885040:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80885204;
    }
}

loc_80885044:
{
    r0 = MemoryInline::FlatRead32((r1 + 1384));
    MemoryInline::FlatWriteRam32((r1 + 552), r0);
    r3 = MemoryInline::FlatRead32((r1 + 1388));
    MemoryInline::FlatWriteRam32((r1 + 556), r3);
    r0 = MemoryInline::FlatRead32((r1 + 1392));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 552));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 556));
    MemoryInline::FlatWriteRam32((r1 + 560), r0);
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 560));
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x80885080u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 556));
    f26.d = f1.d;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 552));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = PpcFmulsInline(f2.d, f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 560));
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f27.d);
}

loc_808850A8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_57 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_57 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808850B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808851E8;
    }
}

loc_808850B8:
{
    r5 = MemoryInline::FlatRead32((r1 + 552));
    r3 = (r1 + 540);
    r4 = MemoryInline::FlatRead32((r1 + 556));
    r0 = MemoryInline::FlatRead32((r1 + 560));
    MemoryInline::FlatWriteRam32((r1 + 540), r5);
    MemoryInline::FlatWriteRam32((r1 + 544), r4);
    MemoryInline::FlatWriteRam32((r1 + 548), r0);
    ctx->lr = 0x808850D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32(r19);
    SetCRFloatResident(cr, 0, f26.d, f0.d);
}

loc_808850E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80885120;
    }
}

loc_808850E4:
{
    r3 = (r1 + 192);
    r4 = (r1 + 540);
    // inline leaf 0x805147D4 (10 guest instruction(s))
    f2.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f2.d = (-(f2.d));
    f1.d = (-(f1.d));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    // end of inlined leaf 0x805147D4
    f0.d = MemoryInline::FlatReadFloat32(r19);
    r3 = (r1 + 180);
    r4 = (r1 + 192);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f2.d = MemoryInline::FlatReadFloat32((r1 + 180));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 184));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 188));
    MemoryInline::FlatWriteRamFloat32((r1 + 528), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 532), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 536), f0.d);
    goto loc_80885148;
}

loc_80885120:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f26.d - f0.d));
    r3 = (r1 + 168);
    r4 = (r1 + 540);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f2.d = MemoryInline::FlatReadFloat32((r1 + 168));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 172));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 176));
    MemoryInline::FlatWriteRamFloat32((r1 + 528), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 532), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 536), f0.d);
}

loc_80885148:
{
    r4 = 0x802A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r19 + 28));
    r3 = (r1 + 156);
    r4 = (r4 + 16688);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    r3 = r30;
    ctx->lr = 0x80885164u;
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
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80821640u>(ctx);
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
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = (r1 + 144);
    r4 = (r30 + 88);
    r5 = (r1 + 156);
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
    ctx->fpr[5] = f5;
    InvokeDirectCpu<0x802303F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    r3 = (r1 + 132);
    r4 = (r1 + 144);
    r5 = (r1 + 528);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    f1.d = MemoryInline::FlatReadFloat32((r19 + 36));
    r3 = (r1 + 120);
    r4 = (r1 + 1396);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    r3 = (r1 + 108);
    r4 = (r1 + 132);
    r5 = (r1 + 120);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r0 = MemoryInline::FlatRead32((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 108));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 112));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808851B4:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 116));
    MemoryInline::FlatWriteRamFloat32((r1 + 564), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 568), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 572), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808851DC;
    }
}

loc_808851C8:
{
    r3 = (r1 + 8);
    r4 = 4;
    r5 = 4;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807BD9E8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    goto loc_808851E0;
}

loc_808851DC:
{
    r3 = 0;
}

loc_808851E0:
{
    r31 = r3;
    MemoryInline::FlatWrite8((r30 + 360), static_cast<uint8_t>(r21));
}

loc_808851E8:
{
    r3 = MemoryInline::FlatRead32((r30 + 380));
    r0 = MemoryInline::FlatRead32((r30 + 356));
    r3 = (r3 + 3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_808851F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80885294;
    }
}

loc_808851FC:
{
    MemoryInline::FlatWrite32((r30 + 356), r3);
    goto loc_80885294;
}

loc_80885204:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 17200));
    r0 = MemoryInline::FlatRead32((r3 + 80));
}

loc_80885214:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80885254;
    }
}

loc_80885218:
{
    // inline leaf 0x8082B3EC (5 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 17200));
    r3 = MemoryInline::FlatRead32((r3 + 80));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 52));
    // end of inlined leaf 0x8082B3EC
    f2.d = MemoryInline::FlatReadFloat32((r30 + 336));
    f0.d = MemoryInline::FlatReadFloat32(r19);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8088522C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80885254;
    }
}

loc_80885230:
{
    f26.d = MemoryInline::FlatReadFloat32((r30 + 340));
    // inline leaf 0x8082B3EC (5 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 17200));
    r3 = MemoryInline::FlatRead32((r3 + 80));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 52));
    // end of inlined leaf 0x8082B3EC
    f0.d = MemoryInline::FlatReadFloat32((r30 + 332));
    r31 = 1;
    MemoryInline::FlatWriteRamFloat32((r1 + 564), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 568), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 572), f26.d);
    MemoryInline::FlatWrite8((r30 + 360), static_cast<uint8_t>(r31));
    goto loc_80885294;
}

loc_80885254:
{
    r0 = MemoryInline::FlatRead8((r30 + 361));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8088525C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80885294;
    }
}

loc_80885260:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 336));
    f1.d = MemoryInline::FlatReadFloat32(r19);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 364));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80885274:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80885294;
    }
}

loc_80885278:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 340));
    r31 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 332));
    MemoryInline::FlatWriteRamFloat32((r1 + 564), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 568), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 572), f2.d);
    MemoryInline::FlatWrite8((r30 + 360), static_cast<uint8_t>(r31));
}

loc_80885294:
{
    r0 = MemoryInline::FlatRead8((r30 + 360));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8088529C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808853C8;
    }
}

loc_808852A0:
{
    r15 = (r31 * 100);
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r15_addr_2 = (r15 + r0);
    r3 = MemoryInline::FlatRead32(r15_addr_2);
    r4 = (r0 + r15);
}

loc_808852B4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80885308;
    }
}

loc_808852B8:
{
    r0 = MemoryInline::FlatRead8((r4 + 12));
}

loc_808852C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80885308;
    }
}

loc_808852C4:
{
    r0 = MemoryInline::FlatRead8((r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808852CC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808852EC;
    }
}

loc_808852D0:
{
    r4 = MemoryInline::FlatRead32((r4 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_808852D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808852EC;
    }
}

loc_808852DC:
{
    r0 = MemoryInline::FlatRead32((r4 + 32));
    r4 = (r27 + 257);
    r0 = (r4 & ~r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80885308;
    }
}

loc_808852EC:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x808852FCu;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r3 = (r0 + r15);
    MemoryInline::FlatWrite32((r3 + 8), r28);
}

loc_80885308:
{
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r4 = (r30 + 60);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 60));
    r3 = (r0 + r15);
    MemoryInline::FlatWriteFloat32((r3 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 64));
    MemoryInline::FlatWriteFloat32((r3 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 68));
    MemoryInline::FlatWriteFloat32((r3 + 40), f0.d);
    r3 = MemoryInline::FlatRead32((r30 + 180));
    r3_addr_25 = (r3 + r15);
    r3 = MemoryInline::FlatRead32(r3_addr_25);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80885338:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8088534C;
    }
}

loc_8088533C:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 112));
    ctr = r12;
    ctx->lr = 0x8088534Cu;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8088534C:
{
    r0 = MemoryInline::FlatRead32((r30 + 180));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 564));
    r3 = (r0 + r15);
    MemoryInline::FlatWriteFloat32((r3 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 568));
    MemoryInline::FlatWriteFloat32((r3 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 572));
    MemoryInline::FlatWriteFloat32((r3 + 28), f0.d);
    r0 = MemoryInline::FlatRead32((r30 + 180));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 564));
    r3 = (r0 + r15);
    MemoryInline::FlatWriteFloat32((r3 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 568));
    MemoryInline::FlatWriteFloat32((r3 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 572));
    MemoryInline::FlatWriteFloat32((r3 + 88), f0.d);
    r3 = MemoryInline::FlatRead32((r30 + 180));
    r3_addr_26 = (r3 + r15);
    r3 = MemoryInline::FlatRead32(r3_addr_26);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80885398:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808853B0;
    }
}

loc_8088539C:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = (r1 + 564);
    r12 = MemoryInline::FlatRead32((r12 + 116));
    ctr = r12;
    ctx->lr = 0x808853B0u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_808853B0:
{
    r3 = MemoryInline::FlatRead32((r30 + 380));
    r0 = MemoryInline::FlatRead32((r30 + 356));
    r3 = (r3 + 3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_808853C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_808853C8;
    }
}

loc_808853C4:
{
    MemoryInline::FlatWrite32((r30 + 356), r3);
}

loc_808853C8:
{
    r3 = MemoryInline::FlatRead32((r30 + 356));
    r0 = MemoryInline::FlatRead32((r30 + 380));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_808853D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808853F0;
    }
}

loc_808853D8:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x808853F0u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_808853F0:
{
    r17 = 0;
    r16 = 0;
    goto loc_808857C0;
}

loc_808853FC:
{
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r16_addr_19 = (r16 + r0);
    r10 = MemoryInline::FlatRead32(r16_addr_19);
    r8 = (r0 + r16);
}

loc_8088540C:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_808857B8;
    }
}

loc_80885410:
{
    r0 = MemoryInline::FlatRead32((r8 + 8));
}

loc_80885418:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808857B8;
    }
}

loc_8088541C:
{
    r3 = MemoryInline::FlatRead32((r25 + -10456));
    r4 = 0;
    r6 = 0;
    r7 = MemoryInline::FlatRead8((r3 + 37));
}

loc_80885430:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8088558C;
    }
}

loc_80885434:
{
}

loc_80885438:
{
    r0 = (r7 + 248);
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(8))) {
        goto loc_80885550;
    }
}

loc_80885440:
{
    r3 = (r0 & 255);
    r5 = MemoryInline::FlatRead32((r26 + 6584));
    r0 = (r3 + 7);
    r0_rot_61 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_61 & 536870911);
    ctr = r0;
}

loc_80885458:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(0))) {
        goto loc_80885550;
    }
}

loc_8088545C:
{
    r3 = MemoryInline::FlatRead32((r5 + 24));
    r0_rot_63 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_63 & 1020);
    r6 = (r6 + 8);
    r9 = (r3 + r0);
    r3_addr_30 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_30);
    r11 = MemoryInline::FlatRead32((r9 + 4));
    r3 = MemoryInline::FlatRead16((r3 + 820));
    r0 = MemoryInline::FlatRead16((r11 + 820));
    r3_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r3 = (r3_rot_22 & 1);
    r12 = MemoryInline::FlatRead32((r9 + 8));
    r4 = (r4 | r3);
    r0_rot_64 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_64 & 1);
    r3 = (0 - r4);
    r12 = MemoryInline::FlatRead16((r12 + 820));
    r4 = (r3 | r4);
    r11 = MemoryInline::FlatRead32((r9 + 12));
    r4_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_27 & 1);
    r12_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(27));
    r12 = (r12_rot_16 & 1);
    r15 = (r4 | r0);
    r3 = MemoryInline::FlatRead16((r11 + 820));
    r0 = (0 - r15);
    r4 = MemoryInline::FlatRead32((r9 + 16));
    r15 = (r0 | r15);
    r11 = MemoryInline::FlatRead32((r9 + 20));
    r0 = MemoryInline::FlatRead16((r4 + 820));
    r4_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(1));
    r4 = (r4_rot_28 & 1);
    r4 = (r4 | r12);
    r12 = MemoryInline::FlatRead16((r11 + 820));
    r15 = (0 - r4);
    r11 = MemoryInline::FlatRead32((r9 + 24));
    r15 = (r15 | r4);
    r4 = MemoryInline::FlatRead32((r9 + 28));
    r9_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(1));
    r9 = (r9_rot_16 & 1);
    r3_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r3 = (r3_rot_23 & 1);
    r3 = (r9 | r3);
    r9 = MemoryInline::FlatRead16((r11 + 820));
    r11 = (0 - r3);
    r4 = MemoryInline::FlatRead16((r4 + 820));
    r3 = (r11 | r3);
    r0_rot_65 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_65 & 1);
    r3_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_24 & 1);
    r11_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(27));
    r11 = (r11_rot_16 & 1);
    r0 = (r3 | r0);
    r4_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r4 = (r4_rot_29 & 1);
    r3_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(27));
    r3 = (r3_rot_25 & 1);
    r9 = (0 - r0);
    r0 = (r9 | r0);
    r0_rot_66 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_66 & 1);
    r9 = (r0 | r11);
    r0 = (0 - r9);
    r0 = (r0 | r9);
    r0_rot_67 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_67 & 1);
    r3 = (r0 | r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_68 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_68 & 1);
    r3 = (r0 | r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r4_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_30 & 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8088545C;
    }
}

loc_80885550:
{
    r3 = MemoryInline::FlatRead32((r26 + 6584));
    goto loc_80885580;
}

loc_80885558:
{
    r5 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_71 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_71 & 1020);
    r6 = (r6 + 1);
    r5_addr_14 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_14);
    r0 = MemoryInline::FlatRead16((r5 + 820));
    r0_rot_72 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_72 & 1);
    r4 = (r4 | r0);
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r4_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_33 & 1);
}

loc_80885580:
{
    r0 = (r6 & 255);
}

loc_80885588:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r7))) {
        goto loc_80885558;
    }
}

loc_8088558C:
{
    r3 = MemoryInline::FlatRead32((r8 + 16));
}

loc_80885594:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80885620;
    }
}

loc_80885598:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r27 + 257);
    r0 = (r3 & ~r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80885620;
    }
}

loc_808855A8:
{
}

loc_808855AC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80885620;
    }
}

loc_808855B0:
{
    r3 = (r10 + 116);
    // inline leaf 0x800375F0 (16 guest instruction(s))
}

loc_inl36_0x800375F0:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl36_0x800375F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl36_0x80037604;
    }
}

loc_inl36_0x800375FC:
{
    r0 = 0;
    goto loc_inl36_0x80037618;
}

loc_inl36_0x80037604:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_74 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_74 & 134217727);
}

loc_inl36_0x80037618:
{
}

loc_inl36_0x8003761C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl36_0x80037628;
    }
}

loc_inl36_0x80037620:
{
    r3 = r4;
    goto loc_inl36_cont_800375F0;
}

loc_inl36_0x80037628:
{
    r3 = 0;
}

loc_inl36_cont_800375F0:
{
    // end of inlined leaf 0x800375F0
}

loc_808855BC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808855C8;
    }
}

loc_808855C0:
{
    r3 = 0;
    goto loc_808855CC;
}

loc_808855C8:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_808855CC:
{
}

loc_808855D0:
{
    r0 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_808855E0;
    }
}

loc_808855D8:
{
}

loc_808855DC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_808855E4;
    }
}

loc_808855E0:
{
    r0 = 1;
}

loc_808855E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808855E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80885760;
    }
}

loc_808855EC:
{
    r3 = MemoryInline::FlatRead32((r30 + 180));
    r3_addr_33 = (r3 + r16);
    r3 = MemoryInline::FlatRead32(r3_addr_33);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80885604u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r3 = (r0 + r16);
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_80885614:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80885760;
    }
}

loc_80885618:
{
    MemoryInline::FlatWrite32((r3 + 8), r29);
    goto loc_808857B8;
}

loc_80885620:
{
    r3 = (r10 + 116);
    // inline leaf 0x800375F0 (16 guest instruction(s))
}

loc_inl37_0x800375F0:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl37_0x800375F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl37_0x80037604;
    }
}

loc_inl37_0x800375FC:
{
    r0 = 0;
    goto loc_inl37_0x80037618;
}

loc_inl37_0x80037604:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_76 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_76 & 134217727);
}

loc_inl37_0x80037618:
{
}

loc_inl37_0x8003761C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl37_0x80037628;
    }
}

loc_inl37_0x80037620:
{
    r3 = r4;
    goto loc_inl37_cont_800375F0;
}

loc_inl37_0x80037628:
{
    r3 = 0;
}

loc_inl37_cont_800375F0:
{
    // end of inlined leaf 0x800375F0
}

loc_8088562C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80885638;
    }
}

loc_80885630:
{
    r3 = 0;
    goto loc_8088563C;
}

loc_80885638:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8088563C:
{
}

loc_80885640:
{
    r0 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80885650;
    }
}

loc_80885648:
{
}

loc_8088564C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_80885654;
    }
}

loc_80885650:
{
    r0 = 1;
}

loc_80885654:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80885658:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80885678;
    }
}

loc_8088565C:
{
    r3 = MemoryInline::FlatRead32((r30 + 180));
    r3_addr_34 = (r3 + r16);
    r3 = MemoryInline::FlatRead32(r3_addr_34);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 128));
    ctr = r12;
    ctx->lr = 0x80885674u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80885760;
}

loc_80885678:
{
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r3 = (r0 + r16);
    r0 = MemoryInline::FlatRead8((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80885688:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8088573C;
    }
}

loc_8088568C:
{
    r3 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x808856A0u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r16_addr_20 = (r16 + r0);
    r3 = MemoryInline::FlatRead32(r16_addr_20);
    r4 = (r0 + r16);
    r4 = (r4 + 32);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 112));
    ctr = r12;
    ctx->lr = 0x808856C0u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r16_addr_21 = (r16 + r0);
    r3 = MemoryInline::FlatRead32(r16_addr_21);
    r4 = (r0 + r16);
    r4 = (r4 + 44);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 120));
    ctr = r12;
    ctx->lr = 0x808856E0u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r16_addr_22 = (r16 + r0);
    r3 = MemoryInline::FlatRead32(r16_addr_22);
    r4 = (r0 + r16);
    r4 = (r4 + 20);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 116));
    ctr = r12;
    ctx->lr = 0x80885700u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r16_addr_23 = (r16 + r0);
    r3 = MemoryInline::FlatRead32(r16_addr_23);
    r4 = (r0 + r16);
    r4 = (r4 + 92);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 88));
    ctr = r12;
    ctx->lr = 0x80885720u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 180));
    r3_addr_35 = (r3 + r16);
    r3 = MemoryInline::FlatRead32(r3_addr_35);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 128));
    ctr = r12;
    ctx->lr = 0x80885738u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80885760;
}

loc_8088573C:
{
    r3 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80885750u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r3 = (r0 + r16);
    MemoryInline::FlatWrite32((r3 + 8), r29);
    goto loc_808857B8;
}

loc_80885760:
{
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r3 = (r0 + r16);
    r4 = MemoryInline::FlatRead32((r3 + 8));
}

loc_80885770:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80885784;
    }
}

loc_80885774:
{
}

loc_80885778:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r28))) {
        goto loc_80885784;
    }
}

loc_8088577C:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_80885784:
{
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r3 = (r0 + r16);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80885794:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808857B8;
    }
}

loc_80885798:
{
    r3 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x808857ACu;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r3 = (r0 + r16);
    MemoryInline::FlatWrite32((r3 + 8), r29);
}

loc_808857B8:
{
    r16 = (r16 + 100);
    r17 = (r17 + 1);
}

loc_808857C0:
{
    r0 = MemoryInline::FlatRead32((r30 + 176));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r17), static_cast<uint32_t>(r0));
}

loc_808857C8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_808853FC;
    }
}

loc_808857CC:
{
    r4 = MemoryInline::FlatRead32((r30 + 380));
    r3 = (r1 + 96);
    r5 = MemoryInline::FlatRead32((r30 + 32));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r30 + 380), r0);
    r4 = (r5 + 24);
    r0 = MemoryInline::FlatRead16((r5 + 72));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r5 = MemoryInline::FlatRead32((r5 + 8));
    r0_rot_80 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_80 & -16);
    r5 = (r5 + r0);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    f1.d = MemoryInline::FlatReadFloat32((r1 + 96));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 104));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x8088581Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r19 + 40));
    r0 = MemoryInline::FlatRead8((r30 + 200));
    f4.d = (-(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r19 + 48));
    f3.d = MemoryInline::FlatReadFloat32((r19 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80885834:
{
    f2.d = MemoryInline::FlatReadFloat32((r19 + 56));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r19 + 4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80886148;
    }
}

loc_80885850:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80885854:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80886148;
    }
}

loc_80885858:
{
    r3 = MemoryInline::FlatRead32((r19 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 380));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80885864:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80886148;
    }
}

loc_80885868:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r30 + 376), r0);
    goto loc_80886148;
}

loc_80885874:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r30 + 372), r0);
    MemoryInline::FlatWrite32((r30 + 376), r29);
    MemoryInline::FlatWrite32((r30 + 380), r29);
    goto loc_80883CF0;
}

loc_80885888:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8088588C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80886148;
    }
}

loc_80885890:
{
    r0 = MemoryInline::FlatRead32((r30 + 376));
}

loc_80885898:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80885A38;
    }
}

loc_8088589C:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 188));
    f1.d = MemoryInline::FlatReadFloat32((r19 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r19 + 44));
    f26.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    r0 = MemoryInline::FlatRead8((r30 + 208));
    MemoryInline::FlatWriteFloat32((r30 + 212), f30.d);
}

loc_808858B8:
{
    MemoryInline::FlatWriteFloat32((r30 + 216), f31.d);
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 220), f0.d);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808858DC;
    }
}

loc_808858C8:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f1.d = (-(f31.d));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 216), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 220), f0.d);
}

loc_808858DC:
{
    r3 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead8((r3 + 68));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808858E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80885904;
    }
}

loc_808858EC:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 216));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 220));
    f1.d = (-(f1.d));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 216), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 220), f0.d);
}

loc_80885904:
{
    f0.d = MemoryInline::FlatReadFloat32((r19 + 40));
    r3 = r30;
    MemoryInline::FlatWriteFloat32((r30 + 368), f0.d);
    r4 = 1;
    r12 = MemoryInline::FlatRead32(r30);
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x80885924u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r30;
    r4 = 1;
    // inline leaf 0x808217B0 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 157), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x808217B0
    r3 = MemoryInline::FlatRead32((r30 + 32));
    r5 = 0;
    r6 = MemoryInline::FlatRead32((r30 + 8));
    r4 = MemoryInline::FlatRead8((r3 + 68));
    r3 = MemoryInline::FlatRead32((r6 + 40));
    r0 = (0 - r4);
    f1.d = MemoryInline::FlatReadFloat32(r20);
    r0 = (r0 | r4);
    f2.d = MemoryInline::FlatReadFloat32((r20 + 44));
    r4_rot_36 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_36 & 1);
    ctx->lr = 0x8088595Cu;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80557684u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r19 + 8));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r30 + 8));
    f26.d = PpcFmulsInline(f0.d, f26.d);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_81 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_81 & -4);
    r3_addr_38 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_38);
    // end of inlined leaf 0x80557340
    r12 = MemoryInline::FlatRead32(r3);
    f1.d = f26.d;
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x80885988u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r15 = MemoryInline::FlatRead32((r19 + 60));
}

loc_80885990:
{
    if ((static_cast<int32_t>(r15) == static_cast<int32_t>(0))) {
        goto loc_808859F0;
    }
}

loc_80885994:
{
    r4 = MemoryInline::FlatRead32((r30 + 180));
    r3 = MemoryInline::FlatRead32((r4 + 200));
}

loc_808859A0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_808859F0;
    }
}

loc_808859A4:
{
    r0 = MemoryInline::FlatRead8((r4 + 212));
}

loc_808859AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808859F0;
    }
}

loc_808859B0:
{
    r0 = MemoryInline::FlatRead8((r4 + 204));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808859B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808859D8;
    }
}

loc_808859BC:
{
    r4 = MemoryInline::FlatRead32((r4 + 216));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_808859C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808859D8;
    }
}

loc_808859C8:
{
    r0 = MemoryInline::FlatRead32((r4 + 32));
    r4 = (r27 + 257);
    r0 = (r4 & ~r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808859F0;
    }
}

loc_808859D8:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x808859E8u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 180));
    MemoryInline::FlatWrite32((r3 + 208), r15);
}

loc_808859F0:
{
    r3 = MemoryInline::FlatRead32((r30 + 180));
    r4 = (r30 + 60);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 60));
    MemoryInline::FlatWriteFloat32((r3 + 232), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 64));
    MemoryInline::FlatWriteFloat32((r3 + 236), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 68));
    MemoryInline::FlatWriteFloat32((r3 + 240), f0.d);
    r3 = MemoryInline::FlatRead32((r30 + 180));
    r3 = MemoryInline::FlatRead32((r3 + 200));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80885A1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80885A30;
    }
}

loc_80885A20:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 112));
    ctr = r12;
    ctx->lr = 0x80885A30u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80885A30:
{
    MemoryInline::FlatWrite32((r30 + 376), r21);
    goto loc_80883CF0;
}

loc_80885A38:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80885A3C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80886138;
    }
}

loc_80885A40:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 188));
    f0.d = MemoryInline::FlatReadFloat32((r19 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r19 + 48));
    f26.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 368));
    f0.d = (-(f1.d));
    f0.d = PpcFmulsInline(f0.d, f26.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80885A60:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80885A74;
    }
}

loc_80885A64:
{
    f0.d = PpcFmulsInline(f1.d, f26.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 368), f0.d);
    goto loc_80885A78;
}

loc_80885A74:
{
    MemoryInline::FlatWriteFloat32((r30 + 368), f30.d);
}

loc_80885A78:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 368));
    r3 = (r1 + 72);
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f0.d);
    r5 = (r1 + 84);
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f30.d);
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r4 = (r4 + 24);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r0 = MemoryInline::FlatRead16((r30 + 44));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 80));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 76));
    r0 = (r0 | 1);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    MemoryInline::FlatWriteFloat32((r30 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 368));
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r30 + 52), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 56), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r19 + 52));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80885ACC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80885B1C;
    }
}

loc_80885AD4:
{
    f0.d = MemoryInline::FlatReadFloat32((r19 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 220));
    f2.d = PpcFmulsInline(f0.d, f26.d);
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_80885AE4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80885AF8;
    }
}

loc_80885AEC:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 220), f0.d);
    goto loc_80885B1C;
}

loc_80885AF8:
{
    f0.d = (-(f0.d));
    f0.d = PpcFmulsInline(f0.d, f26.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80885B04:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80885B18;
    }
}

loc_80885B0C:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 220), f0.d);
    goto loc_80885B1C;
}

loc_80885B18:
{
    MemoryInline::FlatWriteFloat32((r30 + 220), f30.d);
}

loc_80885B1C:
{
    r3 = (r1 + 880);
    // inline leaf 0x8022FAC4 (16 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24960));
    guest_range_15 = MemoryInline::ResolveRangeHost((r3 + -820), 0, 868u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_15, 820u, r3, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24956));
    if (!MemoryInline::WriteResolvedPair32(guest_range_15, 824u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_15, 824u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_15, 828u, (r3 + 8), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_15, 832u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_15, 832u, (r3 + 12), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_15, 836u, (r3 + 16), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_15, 844u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_15, 844u, (r3 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_15, 848u, (r3 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_15, 852u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_15, 852u, (r3 + 32), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_15, 856u, (r3 + 36), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_15, 860u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_15, 864u, (r3 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_15, 860u, (r3 + 40), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_15, 840u, (r3 + 20), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_15, 820u, r3, f0.d);
    // end of inlined leaf 0x8022FAC4
    f0.d = MemoryInline::FlatReadFloat32((r30 + 220));
    r3 = (r1 + 832);
    MemoryInline::WriteResolvedFloat32(guest_range_15, 8u, (r1 + 68), f0.d);
    r4 = (r1 + 60);
    if (!MemoryInline::WriteResolvedPair32(guest_range_15, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f30.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f30.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_15, 0u, (r1 + 60), f30.d);
        MemoryInline::WriteResolvedFloat32(guest_range_15, 4u, (r1 + 64), f30.d);
    }
    ctx->lr = 0x80885B40u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022FF98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r4 = (r1 + 880);
    r3 = (r1 + 832);
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
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80230410u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    f0.d = MemoryInline::FlatReadFloat32((r30 + 216));
    r3 = (r1 + 832);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    r4 = (r1 + 48);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f30.d);
    ctx->lr = 0x80885B6Cu;
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
    ctx->fpr[5] = f5;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022FF98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r4 = (r1 + 880);
    r3 = (r1 + 832);
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
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80230410u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    r9 = MemoryInline::FlatRead32((r30 + 32));
    r3 = (r1 + 640);
    r7 = MemoryInline::FlatRead32(r22);
    r4 = (r1 + 36);
    r8 = MemoryInline::FlatRead32((r9 + 36));
    r5 = (r1 + 24);
    r0 = MemoryInline::FlatRead32((r9 + 40));
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    r6 = MemoryInline::FlatRead32((r22 + 4));
    MemoryInline::FlatWriteRam32((r1 + 36), r8);
    r0 = MemoryInline::FlatRead32((r22 + 8));
    r8 = MemoryInline::FlatRead32((r9 + 44));
    MemoryInline::FlatWriteRam32((r1 + 44), r8);
    MemoryInline::FlatWriteRam32((r1 + 24), r7);
    MemoryInline::FlatWriteRam32((r1 + 28), r6);
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    ctx->lr = 0x80885BC0u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80537740u>(ctx);
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
    cr = ctx->cr;
    guest_range_16 = MemoryInline::ResolveRangeHost((r1 + 640), 0, 48u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_16, 0u, (r1 + 640));
    r4 = (r1 + 880);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_16, 4u, (r1 + 644));
    r5 = r4;
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_16, 8u, (r1 + 648));
    r3 = (r1 + 832);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_16, 12u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_16, 12u, (r1 + 652));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_16, 16u, (r1 + 656));
        }
    }
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_16, 20u, (r1 + 660));
    guest_range_17 = MemoryInline::ResolveRangeHost((r1 + 832), 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_17, 0u, (r1 + 832), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_16, 24u, (r1 + 664));
    MemoryInline::WriteResolvedFloat32(guest_range_17, 4u, (r1 + 836), f5.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_16, 28u, (r1 + 668));
    MemoryInline::WriteResolvedFloat32(guest_range_17, 8u, (r1 + 840), f4.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_16, 32u, (r1 + 672));
    MemoryInline::WriteResolvedFloat32(guest_range_17, 12u, (r1 + 844), f3.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_16, 36u, (r1 + 676));
    MemoryInline::WriteResolvedFloat32(guest_range_17, 16u, (r1 + 848), f2.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_16, 40u, (r1 + 680));
    MemoryInline::WriteResolvedFloat32(guest_range_17, 20u, (r1 + 852), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_16, 44u, (r1 + 684));
    if (!MemoryInline::WriteResolvedPair32(guest_range_17, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_17, 24u, (r1 + 856), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_17, 28u, (r1 + 860), f5.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_17, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_17, 32u, (r1 + 864), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_17, 36u, (r1 + 868), f3.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_17, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_17, 40u, (r1 + 872), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_17, 44u, (r1 + 876), f1.d);
    }
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
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80230410u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    r0 = MemoryInline::FlatRead16((r30 + 44));
    r4 = 0x802A0000u;
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r29));
    r3 = (r1 + 12);
    r0 = (r0 | 4);
    r4 = (r4 + 16688);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 880));
    MemoryInline::FlatWriteFloat32((r30 + 88), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 884));
    MemoryInline::FlatWriteFloat32((r30 + 92), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 888));
    MemoryInline::FlatWriteFloat32((r30 + 96), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 892));
    MemoryInline::FlatWriteFloat32((r30 + 100), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 896));
    MemoryInline::FlatWriteFloat32((r30 + 104), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 900));
    MemoryInline::FlatWriteFloat32((r30 + 108), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 904));
    MemoryInline::FlatWriteFloat32((r30 + 112), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 908));
    MemoryInline::FlatWriteFloat32((r30 + 116), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 912));
    MemoryInline::FlatWriteFloat32((r30 + 120), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 916));
    MemoryInline::FlatWriteFloat32((r30 + 124), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 920));
    MemoryInline::FlatWriteFloat32((r30 + 128), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 48));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 56));
    MemoryInline::FlatWriteFloat32((r30 + 100), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 116), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 132), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r18 + 56));
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r3 = (r1 + 516);
    r5 = (r1 + 12);
    r4 = (r4 + 24);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r3 = MemoryInline::FlatRead32((r30 + 180));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 516));
    MemoryInline::FlatWriteFloat32((r3 + 220), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 520));
    MemoryInline::FlatWriteFloat32((r3 + 224), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 524));
    MemoryInline::FlatWriteFloat32((r3 + 228), f0.d);
    r3 = MemoryInline::FlatRead32((r30 + 180));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 516));
    MemoryInline::FlatWriteFloat32((r3 + 256), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 520));
    MemoryInline::FlatWriteFloat32((r3 + 272), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 524));
    MemoryInline::FlatWriteFloat32((r3 + 288), f0.d);
    r3 = MemoryInline::FlatRead32((r30 + 180));
    r3 = MemoryInline::FlatRead32((r3 + 200));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80885D1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80885D34;
    }
}

loc_80885D20:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = (r1 + 516);
    r12 = MemoryInline::FlatRead32((r12 + 116));
    ctr = r12;
    ctx->lr = 0x80885D34u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80885D34:
{
    r17 = 0;
    r16 = 0;
    goto loc_80886104;
}

loc_80885D40:
{
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r16_addr_27 = (r16 + r0);
    r10 = MemoryInline::FlatRead32(r16_addr_27);
    r8 = (r0 + r16);
}

loc_80885D50:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_808860FC;
    }
}

loc_80885D54:
{
    r0 = MemoryInline::FlatRead32((r8 + 8));
}

loc_80885D5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808860FC;
    }
}

loc_80885D60:
{
    r3 = MemoryInline::FlatRead32((r25 + -10456));
    r4 = 0;
    r6 = 0;
    r7 = MemoryInline::FlatRead8((r3 + 37));
}

loc_80885D74:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80885ED0;
    }
}

loc_80885D78:
{
}

loc_80885D7C:
{
    r0 = (r7 + 248);
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(8))) {
        goto loc_80885E94;
    }
}

loc_80885D84:
{
    r3 = (r0 & 255);
    r5 = MemoryInline::FlatRead32((r26 + 6584));
    r0 = (r3 + 7);
    r0_rot_83 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_83 & 536870911);
    ctr = r0;
}

loc_80885D9C:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(0))) {
        goto loc_80885E94;
    }
}

loc_80885DA0:
{
    r3 = MemoryInline::FlatRead32((r5 + 24));
    r0_rot_85 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_85 & 1020);
    r6 = (r6 + 8);
    r9 = (r3 + r0);
    r3_addr_41 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_41);
    r11 = MemoryInline::FlatRead32((r9 + 4));
    r3 = MemoryInline::FlatRead16((r3 + 820));
    r0 = MemoryInline::FlatRead16((r11 + 820));
    r3_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r3 = (r3_rot_31 & 1);
    r12 = MemoryInline::FlatRead32((r9 + 8));
    r4 = (r4 | r3);
    r0_rot_86 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_86 & 1);
    r3 = (0 - r4);
    r12 = MemoryInline::FlatRead16((r12 + 820));
    r4 = (r3 | r4);
    r11 = MemoryInline::FlatRead32((r9 + 12));
    r4_rot_39 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_39 & 1);
    r12_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(27));
    r12 = (r12_rot_22 & 1);
    r15 = (r4 | r0);
    r3 = MemoryInline::FlatRead16((r11 + 820));
    r0 = (0 - r15);
    r4 = MemoryInline::FlatRead32((r9 + 16));
    r15 = (r0 | r15);
    r11 = MemoryInline::FlatRead32((r9 + 20));
    r0 = MemoryInline::FlatRead16((r4 + 820));
    r4_rot_40 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(1));
    r4 = (r4_rot_40 & 1);
    r4 = (r4 | r12);
    r12 = MemoryInline::FlatRead16((r11 + 820));
    r15 = (0 - r4);
    r11 = MemoryInline::FlatRead32((r9 + 24));
    r15 = (r15 | r4);
    r4 = MemoryInline::FlatRead32((r9 + 28));
    r9_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(1));
    r9 = (r9_rot_22 & 1);
    r3_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r3 = (r3_rot_32 & 1);
    r3 = (r9 | r3);
    r9 = MemoryInline::FlatRead16((r11 + 820));
    r11 = (0 - r3);
    r4 = MemoryInline::FlatRead16((r4 + 820));
    r3 = (r11 | r3);
    r0_rot_87 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_87 & 1);
    r3_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_33 & 1);
    r11_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(27));
    r11 = (r11_rot_22 & 1);
    r0 = (r3 | r0);
    r4_rot_41 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r4 = (r4_rot_41 & 1);
    r3_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(27));
    r3 = (r3_rot_34 & 1);
    r9 = (0 - r0);
    r0 = (r9 | r0);
    r0_rot_88 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_88 & 1);
    r9 = (r0 | r11);
    r0 = (0 - r9);
    r0 = (r0 | r9);
    r0_rot_89 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_89 & 1);
    r3 = (r0 | r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_90 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_90 & 1);
    r3 = (r0 | r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r4_rot_42 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_42 & 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80885DA0;
    }
}

loc_80885E94:
{
    r3 = MemoryInline::FlatRead32((r26 + 6584));
    goto loc_80885EC4;
}

loc_80885E9C:
{
    r5 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_93 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_93 & 1020);
    r6 = (r6 + 1);
    r5_addr_19 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_19);
    r0 = MemoryInline::FlatRead16((r5 + 820));
    r0_rot_94 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_94 & 1);
    r4 = (r4 | r0);
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r4_rot_45 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_45 & 1);
}

loc_80885EC4:
{
    r0 = (r6 & 255);
}

loc_80885ECC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r7))) {
        goto loc_80885E9C;
    }
}

loc_80885ED0:
{
    r3 = MemoryInline::FlatRead32((r8 + 16));
}

loc_80885ED8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80885F64;
    }
}

loc_80885EDC:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r27 + 257);
    r0 = (r3 & ~r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80885F64;
    }
}

loc_80885EEC:
{
}

loc_80885EF0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80885F64;
    }
}

loc_80885EF4:
{
    r3 = (r10 + 116);
    // inline leaf 0x800375F0 (16 guest instruction(s))
}

loc_inl45_0x800375F0:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl45_0x800375F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl45_0x80037604;
    }
}

loc_inl45_0x800375FC:
{
    r0 = 0;
    goto loc_inl45_0x80037618;
}

loc_inl45_0x80037604:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_96 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_96 & 134217727);
}

loc_inl45_0x80037618:
{
}

loc_inl45_0x8003761C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl45_0x80037628;
    }
}

loc_inl45_0x80037620:
{
    r3 = r4;
    goto loc_inl45_cont_800375F0;
}

loc_inl45_0x80037628:
{
    r3 = 0;
}

loc_inl45_cont_800375F0:
{
    // end of inlined leaf 0x800375F0
}

loc_80885F00:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80885F0C;
    }
}

loc_80885F04:
{
    r3 = 0;
    goto loc_80885F10;
}

loc_80885F0C:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_80885F10:
{
}

loc_80885F14:
{
    r0 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80885F24;
    }
}

loc_80885F1C:
{
}

loc_80885F20:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_80885F28;
    }
}

loc_80885F24:
{
    r0 = 1;
}

loc_80885F28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80885F2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808860A4;
    }
}

loc_80885F30:
{
    r3 = MemoryInline::FlatRead32((r30 + 180));
    r3_addr_44 = (r3 + r16);
    r3 = MemoryInline::FlatRead32(r3_addr_44);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80885F48u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r3 = (r0 + r16);
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_80885F58:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_808860A4;
    }
}

loc_80885F5C:
{
    MemoryInline::FlatWrite32((r3 + 8), r29);
    goto loc_808860FC;
}

loc_80885F64:
{
    r3 = (r10 + 116);
    // inline leaf 0x800375F0 (16 guest instruction(s))
}

loc_inl46_0x800375F0:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl46_0x800375F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl46_0x80037604;
    }
}

loc_inl46_0x800375FC:
{
    r0 = 0;
    goto loc_inl46_0x80037618;
}

loc_inl46_0x80037604:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_98 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_98 & 134217727);
}

loc_inl46_0x80037618:
{
}

loc_inl46_0x8003761C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl46_0x80037628;
    }
}

loc_inl46_0x80037620:
{
    r3 = r4;
    goto loc_inl46_cont_800375F0;
}

loc_inl46_0x80037628:
{
    r3 = 0;
}

loc_inl46_cont_800375F0:
{
    // end of inlined leaf 0x800375F0
}

loc_80885F70:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80885F7C;
    }
}

loc_80885F74:
{
    r3 = 0;
    goto loc_80885F80;
}

loc_80885F7C:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_80885F80:
{
}

loc_80885F84:
{
    r0 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80885F94;
    }
}

loc_80885F8C:
{
}

loc_80885F90:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_80885F98;
    }
}

loc_80885F94:
{
    r0 = 1;
}

loc_80885F98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80885F9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80885FBC;
    }
}

loc_80885FA0:
{
    r3 = MemoryInline::FlatRead32((r30 + 180));
    r3_addr_45 = (r3 + r16);
    r3 = MemoryInline::FlatRead32(r3_addr_45);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 128));
    ctr = r12;
    ctx->lr = 0x80885FB8u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_808860A4;
}

loc_80885FBC:
{
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r3 = (r0 + r16);
    r0 = MemoryInline::FlatRead8((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80885FCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80886080;
    }
}

loc_80885FD0:
{
    r3 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80885FE4u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r16_addr_28 = (r16 + r0);
    r3 = MemoryInline::FlatRead32(r16_addr_28);
    r4 = (r0 + r16);
    r4 = (r4 + 32);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 112));
    ctr = r12;
    ctx->lr = 0x80886004u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r16_addr_29 = (r16 + r0);
    r3 = MemoryInline::FlatRead32(r16_addr_29);
    r4 = (r0 + r16);
    r4 = (r4 + 44);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 120));
    ctr = r12;
    ctx->lr = 0x80886024u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r16_addr_30 = (r16 + r0);
    r3 = MemoryInline::FlatRead32(r16_addr_30);
    r4 = (r0 + r16);
    r4 = (r4 + 20);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 116));
    ctr = r12;
    ctx->lr = 0x80886044u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r16_addr_31 = (r16 + r0);
    r3 = MemoryInline::FlatRead32(r16_addr_31);
    r4 = (r0 + r16);
    r4 = (r4 + 92);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 88));
    ctr = r12;
    ctx->lr = 0x80886064u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 180));
    r3_addr_46 = (r3 + r16);
    r3 = MemoryInline::FlatRead32(r3_addr_46);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 128));
    ctr = r12;
    ctx->lr = 0x8088607Cu;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_808860A4;
}

loc_80886080:
{
    r3 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80886094u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r3 = (r0 + r16);
    MemoryInline::FlatWrite32((r3 + 8), r29);
    goto loc_808860FC;
}

loc_808860A4:
{
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r3 = (r0 + r16);
    r4 = MemoryInline::FlatRead32((r3 + 8));
}

loc_808860B4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_808860C8;
    }
}

loc_808860B8:
{
}

loc_808860BC:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r28))) {
        goto loc_808860C8;
    }
}

loc_808860C0:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_808860C8:
{
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r3 = (r0 + r16);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808860D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808860FC;
    }
}

loc_808860DC:
{
    r3 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x808860F0u;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
    r2 = ctx->gpr[2];
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 180));
    r3 = (r0 + r16);
    MemoryInline::FlatWrite32((r3 + 8), r29);
}

loc_808860FC:
{
    r16 = (r16 + 100);
    r17 = (r17 + 1);
}

loc_80886104:
{
    r0 = MemoryInline::FlatRead32((r30 + 176));
}

loc_8088610C:
{
    if ((static_cast<uint32_t>(r17) < static_cast<uint32_t>(r0))) {
        goto loc_80885D40;
    }
}

loc_80886110:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 368));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_80886118:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80886148;
    }
}

loc_80886120:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 220));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_80886128:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80886148;
    }
}

loc_8088612C:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r30 + 376), r0);
    goto loc_80886148;
}

loc_80886138:
{
    MemoryInline::FlatWrite32((r30 + 372), r29);
    MemoryInline::FlatWrite32((r30 + 376), r29);
    MemoryInline::FlatWrite32((r30 + 380), r29);
    goto loc_80883CF0;
}

loc_80886148:
{
    r3 = MemoryInline::FlatRead32((r30 + 204));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r30 + 204), r0);
}

loc_80886154:
{
    r3 = MemoryInline::FlatRead32((r30 + 204));
    r0 = MemoryInline::FlatRead32((r1 + 1472));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80886160:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80883C4C;
    }
}

loc_80886164:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 1632));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 1616));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 1600));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::FlatReadFloat64((r1 + 1584));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::FlatReadFloat64((r1 + 1568));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 1552);
    f26.d = MemoryInline::FlatReadFloat64((r1 + 1552));
    // inline leaf 0x800215B8 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -72));
            r15 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 68u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215B8
    r0 = MemoryInline::FlatRead32((r1 + 1652));
    ctx->lr = r0;
    r1 = (r1 + 1648);
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
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
// RECOMP_REGISTRATION base 0x80883B98 func_80883B98 preserves=false fpr_mask=0xFC000000
