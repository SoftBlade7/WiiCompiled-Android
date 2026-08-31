#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8087E468(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addc_left_0 = 0;
    uint32_t r0_addc_left_1 = 0;
    uint32_t r0_addc_left_2 = 0;
    uint32_t r0_addc_left_3 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r0_ca_5 = 0;
    uint32_t r0_not_0 = 0;
    uint32_t r0_not_1 = 0;
    uint32_t r0_not_2 = 0;
    uint32_t r0_not_3 = 0;
    uint32_t r0_not_4 = 0;
    uint32_t r0_not_5 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_100 = 0;
    uint32_t r0_rot_101 = 0;
    uint32_t r0_rot_102 = 0;
    uint32_t r0_rot_103 = 0;
    uint32_t r0_rot_104 = 0;
    uint32_t r0_rot_105 = 0;
    uint32_t r0_rot_106 = 0;
    uint32_t r0_rot_107 = 0;
    uint32_t r0_rot_108 = 0;
    uint32_t r0_rot_109 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_110 = 0;
    uint32_t r0_rot_111 = 0;
    uint32_t r0_rot_112 = 0;
    uint32_t r0_rot_113 = 0;
    uint32_t r0_rot_114 = 0;
    uint32_t r0_rot_115 = 0;
    uint32_t r0_rot_116 = 0;
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
    uint32_t r14_addr_0 = 0;
    uint32_t r14_addr_1 = 0;
    uint32_t r14_addr_2 = 0;
    uint32_t r14_addr_3 = 0;
    uint32_t r14_addr_4 = 0;
    uint32_t r14_addr_5 = 0;
    uint32_t r14_addr_6 = 0;
    uint32_t r14_addr_7 = 0;
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
    uint32_t r18_addr_0 = 0;
    uint32_t r18_addr_1 = 0;
    uint32_t r18_addr_2 = 0;
    uint32_t r18_addr_3 = 0;
    uint32_t r18_addr_4 = 0;
    uint32_t r19_addr_0 = 0;
    uint32_t r19_addr_1 = 0;
    uint32_t r19_addr_2 = 0;
    uint32_t r19_addr_3 = 0;
    uint32_t r19_addr_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint32_t r21_addr_0 = 0;
    uint32_t r21_addr_1 = 0;
    uint32_t r21_addr_2 = 0;
    uint32_t r21_addr_3 = 0;
    uint32_t r21_addr_4 = 0;
    uint32_t r21_addr_5 = 0;
    uint32_t r21_addr_6 = 0;
    uint32_t r21_addr_7 = 0;
    uint32_t r21_addr_8 = 0;
    uint32_t r22_addr_0 = 0;
    uint32_t r22_addr_1 = 0;
    uint32_t r22_addr_10 = 0;
    uint32_t r22_addr_11 = 0;
    uint32_t r22_addr_12 = 0;
    uint32_t r22_addr_13 = 0;
    uint32_t r22_addr_2 = 0;
    uint32_t r22_addr_3 = 0;
    uint32_t r22_addr_4 = 0;
    uint32_t r22_addr_5 = 0;
    uint32_t r22_addr_6 = 0;
    uint32_t r22_addr_7 = 0;
    uint32_t r22_addr_8 = 0;
    uint32_t r22_addr_9 = 0;
    uint32_t r23_addr_0 = 0;
    uint32_t r23_addr_1 = 0;
    uint32_t r23_addr_2 = 0;
    uint32_t r23_addr_3 = 0;
    uint32_t r23_addr_4 = 0;
    uint32_t r23_addr_5 = 0;
    uint32_t r24_addr_0 = 0;
    uint32_t r24_addr_1 = 0;
    uint32_t r24_addr_2 = 0;
    uint32_t r24_addr_3 = 0;
    uint32_t r24_addr_4 = 0;
    uint32_t r24_addr_5 = 0;
    uint32_t r24_addr_6 = 0;
    uint32_t r24_addr_7 = 0;
    uint32_t r24_addr_8 = 0;
    uint32_t r24_addr_9 = 0;
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
    uint32_t r3_addr_4 = 0;
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
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_addc_left_0 = 0;
    uint32_t r4_addc_left_1 = 0;
    uint32_t r4_addc_left_2 = 0;
    uint32_t r4_addc_left_3 = 0;
    uint32_t r4_addc_left_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_10 = 0;
    uint32_t r4_addr_11 = 0;
    uint32_t r4_addr_12 = 0;
    uint32_t r4_addr_13 = 0;
    uint32_t r4_addr_14 = 0;
    uint32_t r4_addr_15 = 0;
    uint32_t r4_addr_16 = 0;
    uint32_t r4_addr_17 = 0;
    uint32_t r4_addr_18 = 0;
    uint32_t r4_addr_19 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_20 = 0;
    uint32_t r4_addr_21 = 0;
    uint32_t r4_addr_22 = 0;
    uint32_t r4_addr_23 = 0;
    uint32_t r4_addr_24 = 0;
    uint32_t r4_addr_25 = 0;
    uint32_t r4_addr_26 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_addr_9 = 0;
    uint32_t r4_ca_0 = 0;
    uint32_t r4_ca_1 = 0;
    uint32_t r4_ca_2 = 0;
    uint32_t r4_ca_3 = 0;
    uint32_t r4_ca_4 = 0;
    uint32_t r4_ca_5 = 0;
    uint32_t r4_ca_6 = 0;
    uint32_t r4_ca_7 = 0;
    uint32_t r4_ca_8 = 0;
    uint32_t r4_not_0 = 0;
    uint32_t r4_not_1 = 0;
    uint32_t r4_not_2 = 0;
    uint32_t r4_not_3 = 0;
    uint32_t r4_not_4 = 0;
    uint32_t r4_not_5 = 0;
    uint32_t r4_not_6 = 0;
    uint32_t r4_not_7 = 0;
    uint32_t r4_not_8 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_10 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;
    uint32_t r4_subfc_sub_0 = 0;
    uint32_t r4_subfc_sub_1 = 0;
    uint32_t r4_subfc_sub_2 = 0;
    uint32_t r4_subfc_sub_3 = 0;
    uint32_t r4_subfc_sub_4 = 0;
    uint32_t r4_subfc_sub_5 = 0;
    uint32_t r4_subfc_sub_6 = 0;
    uint32_t r4_subfc_sub_7 = 0;
    uint32_t r4_subfc_sub_8 = 0;
    uint32_t r4_subfe_rb_0 = 0;
    uint32_t r4_subfe_rb_1 = 0;
    uint32_t r4_subfe_rb_2 = 0;
    uint32_t r4_subfe_rb_3 = 0;
    uint32_t r4_subfe_rb_4 = 0;
    uint32_t r4_subfe_rb_5 = 0;
    uint32_t r4_subfe_rb_6 = 0;
    uint32_t r4_subfe_rb_7 = 0;
    uint32_t r4_subfe_rb_8 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_10 = 0;
    uint32_t r7_addr_11 = 0;
    uint32_t r7_addr_12 = 0;
    uint32_t r7_addr_13 = 0;
    uint32_t r7_addr_14 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint32_t r7_addr_5 = 0;
    uint32_t r7_addr_6 = 0;
    uint32_t r7_addr_7 = 0;
    uint32_t r7_addr_8 = 0;
    uint32_t r7_addr_9 = 0;
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
    uint8_t* guest_range_18 = nullptr;
    uint8_t* guest_range_19 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_20 = nullptr;
    uint8_t* guest_range_21 = nullptr;
    uint8_t* guest_range_22 = nullptr;
    uint8_t* guest_range_23 = nullptr;
    uint8_t* guest_range_24 = nullptr;
    uint8_t* guest_range_25 = nullptr;
    uint8_t* guest_range_26 = nullptr;
    uint8_t* guest_range_27 = nullptr;
    uint8_t* guest_range_28 = nullptr;
    uint8_t* guest_range_29 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_30 = nullptr;
    uint8_t* guest_range_31 = nullptr;
    uint8_t* guest_range_32 = nullptr;
    uint8_t* guest_range_33 = nullptr;
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

    goto loc_8087E468;

loc_8087E468:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -1840), 0, 1848u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -1840), r1);
    r1 = (r1 + -1840);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 1844u, (r1 + 1844), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 1824u, (r1 + 1824), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 1832);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 1808u, (r1 + 1808), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 1816);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 1792u, (r1 + 1792), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 1800);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 1776u, (r1 + 1776), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 1784);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 1760u, (r1 + 1760), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 1768);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 1744u, (r1 + 1744), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 1752);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 1728u, (r1 + 1728), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 1736);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 1712u, (r1 + 1712), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 1720);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    r11 = (r1 + 1712);
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
    r25 = 0x808E0000u;
    r14 = 0x808B0000u;
    r15 = r3;
    r7 = 0;
    r25 = (r25 + -14040);
    r14 = (r14 + 9552);
    r6 = 0;
    r5 = -1;
    goto loc_8087E50C;
}

loc_8087E4E0:
{
    r0 = (r7 & 255);
    r4 = (r1 + 984);
    r0 = (r0 * 48);
    r7 = (r7 + 1);
    r4_addr_2 = (r4 + r0);
    MemoryInline::FlatWrite32(r4_addr_2, r6);
    r4 = r4_addr_2;
    MemoryInline::FlatWrite32((r4 + 4), r6);
    MemoryInline::FlatWrite32((r4 + 8), r6);
    MemoryInline::FlatWrite8((r4 + 12), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r4 + 13), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite32((r4 + 16), r5);
    MemoryInline::FlatWrite8((r4 + 20), static_cast<uint8_t>(r6));
}

loc_8087E50C:
{
    r0 = MemoryInline::FlatRead8((r3 + 7916));
    r4 = (r7 & 255);
}

loc_8087E518:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_8087E4E0;
    }
}

loc_8087E51C:
{
    r5 = 0;
    goto loc_8087E544;
}

loc_8087E524:
{
    r0 = (r5 & 255);
    r5 = (r5 + 1);
    r0 = (r0 * 28);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 18));
    MemoryInline::FlatWrite8((r4 + 17), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 7916));
    MemoryInline::FlatWrite8((r4 + 18), static_cast<uint8_t>(r0));
}

loc_8087E544:
{
    r0 = MemoryInline::FlatRead8(r3);
    r4 = (r5 & 255);
}

loc_8087E550:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_8087E524;
    }
}

loc_8087E554:
{
    r17 = 0;
    r20 = 0x809C0000u;
    r19 = 0x809C0000u;
    r18 = 1;
    goto loc_8087E630;
}

loc_8087E568:
{
    r4 = (r17 & 255);
    r0 = MemoryInline::FlatRead8((r15 + 7917));
    r16 = (r15 + r4);
    r3 = MemoryInline::FlatRead8((r16 + 7930));
}

loc_8087E57C:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_8087E5A0;
    }
}

loc_8087E580:
{
    r4 = (r4 * 48);
    r5 = (r1 + 984);
    r3 = (r15 + 8120);
    r0 = MemoryInline::FlatRead32((r15 + 8376));
    r5_addr_2 = (r5 + r4);
    MemoryInline::FlatWrite32(r5_addr_2, r3);
    r5 = r5_addr_2;
    MemoryInline::FlatWrite32((r5 + 4), r0);
    r3 = (r5 + 4);
    goto loc_8087E5FC;
}

loc_8087E5A0:
{
    r4 = MemoryInline::FlatRead32((r19 + -10456));
    r3 = MemoryInline::FlatRead32((r20 + -10448));
    r0 = MemoryInline::FlatRead32((r4 + 2928));
}

loc_8087E5B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_8087E5BC;
    }
}

loc_8087E5B4:
{
}

loc_8087E5B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_8087E5DC;
    }
}

loc_8087E5BC:
{
    r0 = MemoryInline::FlatRead32((r4 + 2936));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8087E5C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8087E5DC;
    }
}

loc_8087E5C8:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r4 = (r17 & 255);
    r5 = (r1 + 8);
    ctx->lr = 0x8087E5D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8053D848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    goto loc_8087E5E0;
}

loc_8087E5DC:
{
    r3 = 0;
}

loc_8087E5E0:
{
    r0 = (r17 & 255);
    r5 = (r1 + 984);
    r4 = (r0 * 48);
    r0 = MemoryInline::FlatRead32((r15 + 8380));
    r5_addr_3 = (r5 + r4);
    MemoryInline::FlatWrite32(r5_addr_3, r3);
    r5 = r5_addr_3;
    MemoryInline::FlatWrite32((r5 + 4), r0);
    r3 = (r5 + 4);
}

loc_8087E5FC:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_8087E604:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8087E614;
    }
}

loc_8087E608:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8087E610:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8087E61C;
    }
}

loc_8087E614:
{
    MemoryInline::FlatWrite8((r5 + 12), static_cast<uint8_t>(r18));
    goto loc_8087E62C;
}

loc_8087E61C:
{
    r0 = MemoryInline::FlatRead8((r16 + 8028));
}

loc_8087E624:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8087E62C;
    }
}

loc_8087E628:
{
    MemoryInline::FlatWrite8((r5 + 12), static_cast<uint8_t>(r18));
}

loc_8087E62C:
{
    r17 = (r17 + 1);
}

loc_8087E630:
{
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    r3 = (r17 & 255);
}

loc_8087E63C:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8087E568;
    }
}

loc_8087E640:
{
    r20 = 0x808E0000u;
    r19 = 0x808B0000u;
    r20 = (r20 + -13496);
    r17 = 0;
    r19 = (r19 + 24944);
    r18 = 1;
    goto loc_8087E734;
}

loc_8087E65C:
{
    r0 = (r17 & 255);
    r16 = (r1 + 984);
    r0 = (r0 * 48);
    r16 = (r16 + r0);
    r0 = MemoryInline::FlatRead8((r16 + 12));
}

loc_8087E674:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8087E730;
    }
}

loc_8087E678:
{
    r0 = MemoryInline::FlatRead8((r15 + 17277));
    r21 = MemoryInline::FlatRead32(r16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8087E684:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8087E6D0;
    }
}

loc_8087E688:
{
    r0 = MemoryInline::FlatRead32((r25 + 20));
    r3 = (r1 + 280);
    MemoryInline::FlatWriteRam32((r1 + 284), r0);
    MemoryInline::FlatWriteRam32((r1 + 280), r20);
    r12 = MemoryInline::FlatRead32((r20 + 20));
    ctr = r12;
    ctx->lr = 0x8087E6A4u;
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
    r6 = MemoryInline::FlatRead32((r16 + 8));
    r4 = r3;
    r5 = r21;
    r3 = (r1 + 284);
    r7 = 4;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CCA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r16 + 8), r3);
    r3 = (r16 + 16);
    r0 = MemoryInline::FlatRead32((r1 + 284));
    MemoryInline::FlatWrite32((r16 + 16), r0);
    goto loc_8087E714;
}

loc_8087E6D0:
{
    r0 = MemoryInline::FlatRead32((r25 + 24));
    r3 = (r1 + 272);
    MemoryInline::FlatWriteRam32((r1 + 276), r0);
    MemoryInline::FlatWriteRam32((r1 + 272), r19);
    r12 = MemoryInline::FlatRead32((r19 + 20));
    ctr = r12;
    ctx->lr = 0x8087E6ECu;
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
    r6 = MemoryInline::FlatRead32((r16 + 8));
    r4 = r3;
    r5 = r21;
    r3 = (r1 + 276);
    r7 = 4;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CCA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r16 + 8), r3);
    r3 = (r16 + 16);
    r0 = MemoryInline::FlatRead32((r1 + 276));
    MemoryInline::FlatWrite32((r16 + 16), r0);
}

loc_8087E714:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r17), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r4 = MemoryInline::FlatRead32(r3);
    r3 = (r15 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 8384));
}

loc_8087E728:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r0))) {
        goto loc_8087E730;
    }
}

loc_8087E72C:
{
    MemoryInline::FlatWrite8((r16 + 12), static_cast<uint8_t>(r18));
}

loc_8087E730:
{
    r17 = (r17 + 1);
}

loc_8087E734:
{
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    r3 = (r17 & 255);
}

loc_8087E740:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8087E65C;
    }
}

loc_8087E744:
{
    r27 = 0x808E0000u;
    r28 = 0x808E0000u;
    r26 = 0x808B0000u;
    r17 = 0;
    r27 = (r27 + -13496);
    r28 = (r28 + -13544);
    r26 = (r26 + 24944);
    r23 = -1;
    r22 = 0;
    r21 = 1;
    r24 = 255;
    goto loc_8087EC58;
}

loc_8087E774:
{
    r0 = (r17 & 255);
    r16 = (r1 + 984);
    r0 = (r0 * 48);
    r16 = (r16 + r0);
    r0 = MemoryInline::FlatRead8((r16 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8087E78C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8087EC54;
    }
}

loc_8087E790:
{
    r0 = MemoryInline::FlatRead8((r25 + 28));
    r3 = (r1 + 264);
    MemoryInline::FlatWriteRam8((r1 + 268), static_cast<uint8_t>(r0));
    r19 = MemoryInline::FlatRead32(r16);
    MemoryInline::FlatWriteRam32((r1 + 264), r28);
    r12 = MemoryInline::FlatRead32((r28 + 20));
    ctr = r12;
    ctx->lr = 0x8087E7B0u;
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
    r6 = MemoryInline::FlatRead32((r16 + 8));
    r4 = r3;
    r5 = r19;
    r3 = (r1 + 268);
    r7 = 1;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CCA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r15 + 17277));
    MemoryInline::FlatWrite32((r16 + 8), r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8087E7D4:
{
    r18 = MemoryInline::FlatRead8((r1 + 268));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8087E81C;
    }
}

loc_8087E7DC:
{
    r0 = MemoryInline::FlatRead32((r25 + 20));
    r3 = (r1 + 256);
    MemoryInline::FlatWriteRam32((r1 + 260), r0);
    MemoryInline::FlatWriteRam32((r1 + 256), r27);
    r12 = MemoryInline::FlatRead32((r27 + 20));
    ctr = r12;
    ctx->lr = 0x8087E7F8u;
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
    r6 = MemoryInline::FlatRead32((r16 + 8));
    r4 = r3;
    r5 = r19;
    r3 = (r1 + 260);
    r7 = 4;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CCA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r16 + 8), r3);
    r19 = MemoryInline::FlatRead32((r1 + 260));
    goto loc_8087E858;
}

loc_8087E81C:
{
    r0 = MemoryInline::FlatRead32((r25 + 24));
    r3 = (r1 + 248);
    MemoryInline::FlatWriteRam32((r1 + 252), r0);
    MemoryInline::FlatWriteRam32((r1 + 248), r26);
    r12 = MemoryInline::FlatRead32((r26 + 20));
    ctr = r12;
    ctx->lr = 0x8087E838u;
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
    r6 = MemoryInline::FlatRead32((r16 + 8));
    r4 = r3;
    r5 = r19;
    r3 = (r1 + 252);
    r7 = 4;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CCA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r16 + 8), r3);
    r19 = MemoryInline::FlatRead32((r1 + 252));
}

loc_8087E858:
{
    r3 = MemoryInline::FlatRead8((r15 + 8440));
}

loc_8087E860:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r18))) {
        goto loc_8087E9B4;
    }
}

loc_8087E864:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r15 + 8440), static_cast<uint8_t>(r0));
    goto loc_8087E9A4;
}

loc_8087E870:
{
    r20 = 0;
    goto loc_8087E988;
}

loc_8087E878:
{
    r0 = (r20 & 255);
    r3 = MemoryInline::FlatRead8((r15 + 8440));
    r0 = (r0 * 28);
    r16 = (r15 + r0);
    r0 = MemoryInline::FlatRead8((r16 + 16));
}

loc_8087E890:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8087E984;
    }
}

loc_8087E894:
{
    r3 = MemoryInline::FlatRead8((r16 + 25));
    r0 = MemoryInline::FlatRead8((r15 + 2812));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8087E8A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8087E8B0;
    }
}

loc_8087E8A4:
{
    r0 = (r3 * 20);
    r3 = (r15 + r0);
    MemoryInline::FlatWrite8((r3 + 2832), static_cast<uint8_t>(r22));
}

loc_8087E8B0:
{
    r3 = MemoryInline::FlatRead32((r16 + 12));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80874244u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    r4 = 0;
    MemoryInline::FlatWrite8((r16 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    MemoryInline::FlatWrite8((r16 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r15 + 8436));
    MemoryInline::FlatWrite32((r16 + 20), r0);
    MemoryInline::FlatWrite8((r16 + 24), static_cast<uint8_t>(r22));
    MemoryInline::FlatWrite8((r16 + 25), static_cast<uint8_t>(r24));
    r3 = MemoryInline::FlatRead8((r15 + 7916));
}

loc_8087E8E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8087E980;
    }
}

loc_8087E8E8:
{
}

loc_8087E8EC:
{
    r6 = (r3 + -8);
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(8))) {
        goto loc_8087E958;
    }
}

loc_8087E8F4:
{
    r0 = (r6 + 7);
    r5 = r16;
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_7 & 536870911);
    ctr = r0;
}

loc_8087E908:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(0))) {
        goto loc_8087E958;
    }
}

loc_8087E90C:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r25 + 33), 0, 1u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r25 + 33));
    r4 = (r4 + 8);
    guest_range_4 = MemoryInline::ResolveRangeHost((r5 + 27), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 0u, (r5 + 27), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r25 + 33));
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r5 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r25 + 33));
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r5 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r25 + 33));
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r5 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r25 + 33));
    MemoryInline::WriteResolved8(guest_range_4, 4u, (r5 + 31), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r25 + 33));
    MemoryInline::WriteResolved8(guest_range_4, 5u, (r5 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r25 + 33));
    MemoryInline::WriteResolved8(guest_range_4, 6u, (r5 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r25 + 33));
    MemoryInline::WriteResolved8(guest_range_4, 7u, (r5 + 34), static_cast<uint8_t>(r0));
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8087E90C;
    }
}

loc_8087E958:
{
    r0 = (r3 - r4);
    r5 = (r16 + r4);
    ctr = r0;
}

loc_8087E968:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r3))) {
        goto loc_8087E980;
    }
}

loc_8087E96C:
{
    r0 = MemoryInline::FlatRead8((r25 + 33));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8((r5 + 27), static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8087E96C;
    }
}

loc_8087E980:
{
    MemoryInline::FlatWrite8((r15 + 8458), static_cast<uint8_t>(r21));
}

loc_8087E984:
{
    r20 = (r20 + 1);
}

loc_8087E988:
{
    r0 = MemoryInline::FlatRead8(r15);
    r3 = (r20 & 255);
}

loc_8087E994:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8087E878;
    }
}

loc_8087E998:
{
    r3 = MemoryInline::FlatRead8((r15 + 8440));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r15 + 8440), static_cast<uint8_t>(r0));
}

loc_8087E9A4:
{
    r0 = MemoryInline::FlatRead8((r15 + 8440));
}

loc_8087E9AC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r18))) {
        goto loc_8087E870;
    }
}

loc_8087E9B0:
{
    MemoryInline::FlatWrite32((r15 + 8444), r23);
}

loc_8087E9B4:
{
    r0 = MemoryInline::FlatRead8((r15 + 8440));
}

loc_8087E9BC:
{
    if ((static_cast<uint32_t>(r18) != static_cast<uint32_t>(r0))) {
        goto loc_8087EC54;
    }
}

loc_8087E9C0:
{
    r0 = MemoryInline::FlatRead32((r15 + 8444));
}

loc_8087E9C8:
{
    if ((static_cast<uint32_t>(r19) >= static_cast<uint32_t>(r0))) {
        goto loc_8087EC54;
    }
}

loc_8087E9CC:
{
    r20 = 0;
    goto loc_8087EC40;
}

loc_8087E9D4:
{
    r0 = (r20 & 255);
    r3 = MemoryInline::FlatRead8((r15 + 8440));
    r0 = (r0 * 28);
    r18 = (r15 + r0);
    r0 = MemoryInline::FlatRead8((r18 + 16));
}

loc_8087E9EC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8087EC3C;
    }
}

loc_8087E9F0:
{
    r3 = MemoryInline::FlatRead8((r15 + 7916));
    r0 = MemoryInline::FlatRead8((r18 + 18));
}

loc_8087E9FC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_8087EC3C;
    }
}

loc_8087EA00:
{
    r0 = MemoryInline::FlatRead8((r18 + 19));
}

loc_8087EA08:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_8087EC3C;
    }
}

loc_8087EA0C:
{
    r16 = MemoryInline::FlatRead8((r18 + 25));
    r0 = MemoryInline::FlatRead8((r15 + 2812));
}

loc_8087EA18:
{
    if ((static_cast<uint32_t>(r16) >= static_cast<uint32_t>(r0))) {
        goto loc_8087EC3C;
    }
}

loc_8087EA1C:
{
    r6 = MemoryInline::FlatRead32((r18 + 20));
    r0 = MemoryInline::FlatRead32((r15 + 8444));
}

loc_8087EA28:
{
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(r0))) {
        goto loc_8087EC3C;
    }
}

loc_8087EA2C:
{
    r5 = (r16 * 20);
    r0 = MemoryInline::FlatRead32((r15 + 8436));
    r4 = r19;
}

loc_8087EA3C:
{
    r3 = (r15 + r5);
    r7 = MemoryInline::FlatRead32((r3 + 2828));
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r19))) {
        goto loc_8087EA4C;
    }
}

loc_8087EA48:
{
    r4 = r0;
}

loc_8087EA4C:
{
}

loc_8087EA50:
{
    r3 = (r15 + r5);
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r23))) {
        goto loc_8087EB3C;
    }
}

loc_8087EA58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8087EA5C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8087EA94;
    }
}

loc_8087EA60:
{
    r9 = MemoryInline::FlatRead32((r3 + 2816));
    r5 = (r1 + 492);
    r0 = MemoryInline::FlatRead32((r3 + 2820));
    r6 = 1;
    MemoryInline::FlatWriteRam32((r1 + 496), r0);
    r7 = 1;
    r8 = 1;
    MemoryInline::FlatWriteRam32((r1 + 492), r9);
    r0 = MemoryInline::FlatRead32((r3 + 2824));
    MemoryInline::FlatWriteRam32((r1 + 500), r0);
    r3 = MemoryInline::FlatRead32((r18 + 12));
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
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x808743A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8087EB74;
}

loc_8087EA94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(1));
}

loc_8087EA98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8087EAD0;
    }
}

loc_8087EA9C:
{
    r9 = MemoryInline::FlatRead32((r3 + 2816));
    r5 = (r1 + 480);
    r0 = MemoryInline::FlatRead32((r3 + 2820));
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 484), r0);
    r7 = 1;
    r8 = 1;
    MemoryInline::FlatWriteRam32((r1 + 480), r9);
    r0 = MemoryInline::FlatRead32((r3 + 2824));
    MemoryInline::FlatWriteRam32((r1 + 488), r0);
    r3 = MemoryInline::FlatRead32((r18 + 12));
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
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x808743A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8087EB74;
}

loc_8087EAD0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(2));
}

loc_8087EAD4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8087EB08;
    }
}

loc_8087EAD8:
{
    r8 = MemoryInline::FlatRead32((r3 + 2816));
    r5 = (r1 + 468);
    r0 = MemoryInline::FlatRead32((r3 + 2820));
    r6 = 1;
    MemoryInline::FlatWriteRam32((r1 + 472), r0);
    r7 = 1;
    MemoryInline::FlatWriteRam32((r1 + 468), r8);
    r0 = MemoryInline::FlatRead32((r3 + 2824));
    MemoryInline::FlatWriteRam32((r1 + 476), r0);
    r3 = MemoryInline::FlatRead32((r18 + 12));
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80874570u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8087EB74;
}

loc_8087EB08:
{
    r8 = MemoryInline::FlatRead32((r3 + 2816));
    r4 = r19;
    r0 = MemoryInline::FlatRead32((r3 + 2820));
    r5 = (r1 + 456);
    MemoryInline::FlatWriteRam32((r1 + 460), r0);
    r6 = 0;
    r7 = 1;
    MemoryInline::FlatWriteRam32((r1 + 456), r8);
    r0 = MemoryInline::FlatRead32((r3 + 2824));
    MemoryInline::FlatWriteRam32((r1 + 464), r0);
    r3 = MemoryInline::FlatRead32((r18 + 12));
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80874570u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8087EB74;
}

loc_8087EB3C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(3));
}

loc_8087EB40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8087EB74;
    }
}

loc_8087EB44:
{
    r8 = MemoryInline::FlatRead32((r3 + 2816));
    r4 = r19;
    r0 = MemoryInline::FlatRead32((r3 + 2820));
    r5 = (r1 + 444);
    MemoryInline::FlatWriteRam32((r1 + 448), r0);
    r6 = 0;
    r7 = 1;
    MemoryInline::FlatWriteRam32((r1 + 444), r8);
    r0 = MemoryInline::FlatRead32((r3 + 2824));
    MemoryInline::FlatWriteRam32((r1 + 452), r0);
    r3 = MemoryInline::FlatRead32((r18 + 12));
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80874570u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8087EB74:
{
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    r3 = 0;
    MemoryInline::FlatWrite8((r18 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    MemoryInline::FlatWrite8((r18 + 19), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r18 + 20), r19);
    MemoryInline::FlatWrite8((r18 + 24), static_cast<uint8_t>(r22));
    MemoryInline::FlatWrite8((r18 + 25), static_cast<uint8_t>(r16));
    r4 = MemoryInline::FlatRead8((r15 + 7916));
}

loc_8087EB9C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8087EC38;
    }
}

loc_8087EBA0:
{
}

loc_8087EBA4:
{
    r5 = (r4 + -8);
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(8))) {
        goto loc_8087EC10;
    }
}

loc_8087EBAC:
{
    r0 = (r5 + 7);
    r6 = r18;
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_13 & 536870911);
    ctr = r0;
}

loc_8087EBC0:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(0))) {
        goto loc_8087EC10;
    }
}

loc_8087EBC4:
{
    guest_range_5 = MemoryInline::ResolveRangeHost((r25 + 34), 0, 1u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_5, 0u, (r25 + 34));
    r3 = (r3 + 8);
    guest_range_6 = MemoryInline::ResolveRangeHost((r6 + 27), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_6, 0u, (r6 + 27), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_5, 0u, (r25 + 34));
    MemoryInline::WriteResolved8(guest_range_6, 1u, (r6 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_5, 0u, (r25 + 34));
    MemoryInline::WriteResolved8(guest_range_6, 2u, (r6 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_5, 0u, (r25 + 34));
    MemoryInline::WriteResolved8(guest_range_6, 3u, (r6 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_5, 0u, (r25 + 34));
    MemoryInline::WriteResolved8(guest_range_6, 4u, (r6 + 31), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_5, 0u, (r25 + 34));
    MemoryInline::WriteResolved8(guest_range_6, 5u, (r6 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_5, 0u, (r25 + 34));
    MemoryInline::WriteResolved8(guest_range_6, 6u, (r6 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_5, 0u, (r25 + 34));
    MemoryInline::WriteResolved8(guest_range_6, 7u, (r6 + 34), static_cast<uint8_t>(r0));
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8087EBC4;
    }
}

loc_8087EC10:
{
    r0 = (r4 - r3);
    r5 = (r18 + r3);
    ctr = r0;
}

loc_8087EC20:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r4))) {
        goto loc_8087EC38;
    }
}

loc_8087EC24:
{
    r0 = MemoryInline::FlatRead8((r25 + 34));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite8((r5 + 27), static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8087EC24;
    }
}

loc_8087EC38:
{
    MemoryInline::FlatWrite8((r15 + 8458), static_cast<uint8_t>(r21));
}

loc_8087EC3C:
{
    r20 = (r20 + 1);
}

loc_8087EC40:
{
    r0 = MemoryInline::FlatRead8(r15);
    r3 = (r20 & 255);
}

loc_8087EC4C:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8087E9D4;
    }
}

loc_8087EC50:
{
    MemoryInline::FlatWrite32((r15 + 8444), r19);
}

loc_8087EC54:
{
    r17 = (r17 + 1);
}

loc_8087EC58:
{
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    r3 = (r17 & 255);
}

loc_8087EC64:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8087E774;
    }
}

loc_8087EC68:
{
    r18 = 0x808E0000u;
    r19 = 0x808E0000u;
    r16 = (r1 + 984);
    r22 = 0;
    r18 = (r18 + -13568);
    r19 = (r19 + -13688);
    r17 = 1;
    r20 = 0x808E0000u;
    goto loc_8087EE00;
}

loc_8087EC8C:
{
    r0 = (r22 & 255);
    r21 = (r1 + 984);
    r0 = (r0 * 48);
    r21 = (r21 + r0);
    r0 = MemoryInline::FlatRead8((r21 + 12));
}

loc_8087ECA4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8087EDFC;
    }
}

loc_8087ECA8:
{
    r0 = MemoryInline::FlatRead8((r21 + 13));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8087ECB0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8087EDFC;
    }
}

loc_8087ECB4:
{
    r0 = MemoryInline::FlatRead8((r20 + -13992));
    r3 = (r1 + 240);
    MemoryInline::FlatWriteRam8((r1 + 244), static_cast<uint8_t>(r0));
    r23 = MemoryInline::FlatRead32(r21);
    MemoryInline::FlatWriteRam32((r1 + 240), r19);
    r12 = MemoryInline::FlatRead32((r19 + 20));
    ctr = r12;
    ctx->lr = 0x8087ECD4u;
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
    r6 = MemoryInline::FlatRead32((r21 + 8));
    r4 = r3;
    r5 = r23;
    r3 = (r1 + 244);
    r7 = 1;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CCA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r1 + 244));
    r24 = (r21 + 21);
    MemoryInline::FlatWrite32((r21 + 8), r3);
    r26 = 0;
    r3 = (r0 + r17);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0)) + static_cast<uint64_t>(static_cast<uint32_t>(r17)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0 = (r3 & 255);
}

loc_8087ED04:
{
    MemoryInline::FlatWriteRam8((r1 + 244), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r21 + 20), static_cast<uint8_t>(r3));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8087ED6C;
    }
}

loc_8087ED10:
{
    goto loc_8087ED5C;
}

loc_8087ED14:
{
    r0 = MemoryInline::FlatRead8((r25 + 29));
    r3 = (r1 + 232);
    MemoryInline::FlatWriteRam8((r1 + 236), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 232), r18);
    r12 = MemoryInline::FlatRead32((r18 + 20));
    ctr = r12;
    ctx->lr = 0x8087ED30u;
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
    r6 = MemoryInline::FlatRead32((r21 + 8));
    r4 = r3;
    r5 = r23;
    r3 = (r1 + 236);
    r7 = 1;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CCA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r21 + 8), r3);
    r0 = (r26 & 255);
    r3 = MemoryInline::FlatRead8((r1 + 236));
    r26 = (r26 + 1);
    r24_addr_3 = (r24 + r0);
    MemoryInline::FlatWrite8(r24_addr_3, static_cast<uint8_t>(r3));
}

loc_8087ED5C:
{
    r0 = MemoryInline::FlatRead8((r21 + 20));
    r3 = (r26 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8087ED68:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8087ED14;
    }
}

loc_8087ED6C:
{
    r4 = (r21 + 33);
    r5 = 0;
    goto loc_8087ED88;
}

loc_8087ED78:
{
    r0 = (r5 & 255);
    r3 = MemoryInline::FlatRead8((r21 + 20));
    r4_addr_5 = (r4 + r0);
    MemoryInline::FlatWrite8(r4_addr_5, static_cast<uint8_t>(r3));
    r5 = (r5 + 1);
}

loc_8087ED88:
{
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    r3 = (r5 & 255);
}

loc_8087ED94:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8087ED78;
    }
}

loc_8087ED98:
{
    r5 = 0;
    goto loc_8087EDB0;
}

loc_8087EDA0:
{
    r0 = (r5 & 255);
    r24_addr_6 = (r24 + r0);
    r0 = MemoryInline::FlatRead8(r24_addr_6);
    r4_addr_7 = (r4 + r0);
    MemoryInline::FlatWrite8(r4_addr_7, static_cast<uint8_t>(r5));
    r5 = (r5 + 1);
}

loc_8087EDB0:
{
    r0 = MemoryInline::FlatRead8((r21 + 20));
    r3 = (r5 & 255);
}

loc_8087EDBC:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8087EDA0;
    }
}

loc_8087EDC0:
{
    r4 = (r22 & 255);
    r5 = 1;
    goto loc_8087EDEC;
}

loc_8087EDCC:
{
    r0 = (r5 & 255);
    r24_addr_8 = (r24 + r0);
    r0 = MemoryInline::FlatRead8(r24_addr_8);
}

loc_8087EDD8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r4))) {
        goto loc_8087EDE8;
    }
}

loc_8087EDDC:
{
    r0 = (r0 * 48);
    r3 = (r16 + r0);
    MemoryInline::FlatWrite8((r3 + 13), static_cast<uint8_t>(r17));
}

loc_8087EDE8:
{
    r5 = (r5 + 1);
}

loc_8087EDEC:
{
    r0 = MemoryInline::FlatRead8((r21 + 20));
    r3 = (r5 & 255);
}

loc_8087EDF8:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8087EDCC;
    }
}

loc_8087EDFC:
{
    r22 = (r22 + 1);
}

loc_8087EE00:
{
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    r3 = (r22 & 255);
}

loc_8087EE0C:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8087EC8C;
    }
}

loc_8087EE10:
{
    r16 = 0x808E0000u;
    r21 = (r1 + 540);
    r16 = (r16 + -13616);
    r18 = 0;
    r20 = 1;
    goto loc_8087EF0C;
}

loc_8087EE28:
{
    r0 = (r18 & 255);
    r17 = (r1 + 984);
    r0 = (r0 * 48);
    r17 = (r17 + r0);
    r0 = MemoryInline::FlatRead8((r17 + 12));
}

loc_8087EE40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8087EF08;
    }
}

loc_8087EE44:
{
    r0 = MemoryInline::FlatRead8((r17 + 13));
}

loc_8087EE4C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8087EF08;
    }
}

loc_8087EE50:
{
    r0 = MemoryInline::FlatRead8((r17 + 20));
    r19 = (r17 + 21);
    r22 = MemoryInline::FlatRead32(r17);
    r23 = 0;
}

loc_8087EE64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8087EEC4;
    }
}

loc_8087EE68:
{
    goto loc_8087EEB4;
}

loc_8087EE6C:
{
    r0 = MemoryInline::FlatRead8((r25 + 30));
    r3 = (r1 + 224);
    MemoryInline::FlatWriteRam8((r1 + 228), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 224), r16);
    r12 = MemoryInline::FlatRead32((r16 + 20));
    ctr = r12;
    ctx->lr = 0x8087EE88u;
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
    r6 = MemoryInline::FlatRead32((r17 + 8));
    r4 = r3;
    r5 = r22;
    r3 = (r1 + 228);
    r7 = 1;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CCA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r23 & 255);
    r4 = MemoryInline::FlatRead8((r1 + 228));
    MemoryInline::FlatWrite32((r17 + 8), r3);
    r23 = (r23 + 1);
    r21_addr_3 = (r21 + r0);
    MemoryInline::FlatWrite8(r21_addr_3, static_cast<uint8_t>(r4));
}

loc_8087EEB4:
{
    r0 = MemoryInline::FlatRead8((r17 + 20));
    r3 = (r23 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8087EEC0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8087EE6C;
    }
}

loc_8087EEC4:
{
    r0 = MemoryInline::FlatRead8((r17 + 20));
    r6 = 0;
    goto loc_8087EEFC;
}

loc_8087EED0:
{
    r4 = (r6 & 255);
    r19_addr_3 = (r19 + r4);
    r3 = MemoryInline::FlatRead8(r19_addr_3);
    r5 = (r15 + r3);
    r3 = MemoryInline::FlatRead8((r5 + 8016));
}

loc_8087EEE4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8087EEF8;
    }
}

loc_8087EEE8:
{
    r21_addr_6 = (r21 + r4);
    r3 = MemoryInline::FlatRead8(r21_addr_6);
}

loc_8087EEF0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8087EEF8;
    }
}

loc_8087EEF4:
{
    MemoryInline::FlatWrite8((r5 + 8016), static_cast<uint8_t>(r20));
}

loc_8087EEF8:
{
    r6 = (r6 + 1);
}

loc_8087EEFC:
{
    r3 = (r6 & 255);
}

loc_8087EF04:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8087EED0;
    }
}

loc_8087EF08:
{
    r18 = (r18 + 1);
}

loc_8087EF0C:
{
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    r3 = (r18 & 255);
}

loc_8087EF18:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8087EE28;
    }
}

loc_8087EF1C:
{
    r18 = 0;
    r16 = 1;
    r17 = 0x809C0000u;
    goto loc_8087EF74;
}

loc_8087EF2C:
{
    r3 = r15;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80883250u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
}

loc_8087EF38:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8087EF70;
    }
}

loc_8087EF3C:
{
    r0 = (r18 & 255);
    r4 = (r15 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 8028));
}

loc_8087EF4C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8087EF70;
    }
}

loc_8087EF50:
{
    r3 = MemoryInline::FlatRead32((r17 + -10448));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r18), static_cast<uint32_t>(2));
    r0 = (r0_rot_19 & 1020);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 16);
}

loc_8087EF68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8087EF70;
    }
}

loc_8087EF6C:
{
    MemoryInline::FlatWrite8((r4 + 8028), static_cast<uint8_t>(r16));
}

loc_8087EF70:
{
    r18 = (r18 + 1);
}

loc_8087EF74:
{
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    r3 = (r18 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8087EF80:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8087EF2C;
    }
}

loc_8087EF84:
{
    r17 = 0x808E0000u;
    r19 = 0x808E0000u;
    r16 = (r1 + 880);
    r21 = 0;
    r17 = (r17 + -13664);
    r19 = (r19 + -13640);
    r18 = 1;
    goto loc_8087F184;
}

loc_8087EFA4:
{
    r0 = (r21 & 255);
    r20 = (r1 + 984);
    r0 = (r0 * 48);
    r20 = (r20 + r0);
    r0 = MemoryInline::FlatRead8((r20 + 12));
}

loc_8087EFBC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8087F180;
    }
}

loc_8087EFC0:
{
    r0 = MemoryInline::FlatRead8((r20 + 13));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8087EFC8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8087F180;
    }
}

loc_8087EFCC:
{
    r0 = MemoryInline::FlatRead8((r25 + 31));
    r23 = (r20 + 21);
    MemoryInline::FlatWriteRam8((r1 + 220), static_cast<uint8_t>(r0));
    r3 = (r1 + 216);
    r22 = MemoryInline::FlatRead32(r20);
    MemoryInline::FlatWriteRam32((r1 + 216), r19);
    r12 = MemoryInline::FlatRead32((r19 + 20));
    ctr = r12;
    ctx->lr = 0x8087EFF0u;
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
    r6 = MemoryInline::FlatRead32((r20 + 8));
    r4 = r3;
    r5 = r22;
    r3 = (r1 + 220);
    r7 = 1;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CCA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r1 + 220));
    r27 = 0;
    MemoryInline::FlatWrite32((r20 + 8), r3);
    r0_addc_left_2 = r0;
    r0 = (r0_addc_left_2 + r18);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_left_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r18)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWriteRam8((r1 + 220), static_cast<uint8_t>(r0));
    r24 = (r0 & 255);
    r0 = MemoryInline::FlatRead8(r15);
    r3 = (r0 + r24);
    r0 = (r3 + -1);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r24));
    r26 = (r0 & 255);
}

loc_8087F034:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_8087F0DC;
    }
}

loc_8087F038:
{
    goto loc_8087F0D0;
}

loc_8087F03C:
{
    r0 = MemoryInline::FlatRead8((r25 + 32));
    r3 = (r1 + 208);
    MemoryInline::FlatWriteRam8((r1 + 212), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 208), r17);
    r12 = MemoryInline::FlatRead32((r17 + 20));
    ctr = r12;
    ctx->lr = 0x8087F058u;
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
    r6 = MemoryInline::FlatRead32((r20 + 8));
    r4 = r3;
    r5 = r22;
    r3 = (r1 + 212);
    r7 = 1;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CCA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r20 + 8), r3);
    r0 = (r27 & 255);
    r5 = (r0 * r24);
    r7 = MemoryInline::FlatRead8((r1 + 212));
    r3 = MemoryInline::FlatRead8((r20 + 20));
    r8 = 0;
    r6 = (r3 + 1);
    ctr = r24;
}

loc_8087F094:
{
    if ((static_cast<uint32_t>(r24) <= static_cast<uint32_t>(0))) {
        goto loc_8087F0CC;
    }
}

loc_8087F098:
{
    r3 = PPC_Divw(static_cast<int32_t>(r7), static_cast<int32_t>(r6));
    r4 = (r8 + r5);
    r0 = MemoryInline::FlatRead8(r15);
    r4 = (r4 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8087F0AC:
{
    r0 = (r3 * r6);
    r0 = (r7 - r0);
    r7 = (r3 & 255);
    r0 = (r0 & 255);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8087F0C4;
    }
}

loc_8087F0C0:
{
    r16_addr_4 = (r16 + r4);
    MemoryInline::FlatWrite8(r16_addr_4, static_cast<uint8_t>(r0));
}

loc_8087F0C4:
{
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8087F098;
    }
}

loc_8087F0CC:
{
    r27 = (r27 + 1);
}

loc_8087F0D0:
{
    r0 = (r27 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r26));
}

loc_8087F0D8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8087F03C;
    }
}

loc_8087F0DC:
{
    r5 = MemoryInline::FlatRead8((r20 + 20));
    r3 = 0;
    goto loc_8087F170;
}

loc_8087F0E8:
{
    r0 = (r3 & 255);
    r16_addr_9 = (r16 + r0);
    r4 = MemoryInline::FlatRead8(r16_addr_9);
}

loc_8087F0F4:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r5))) {
        goto loc_8087F16C;
    }
}

loc_8087F0F8:
{
    r0 = (r0 * 28);
    r6 = MemoryInline::FlatRead8((r15 + 7916));
    r23_addr_3 = (r23 + r4);
    r9 = MemoryInline::FlatRead8(r23_addr_3);
    r8 = (r15 + r0);
    r7 = MemoryInline::FlatRead8((r8 + 18));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r6));
}

loc_8087F110:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8087F168;
    }
}

loc_8087F114:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8087F138;
    }
}

loc_8087F118:
{
    r4 = (r15 + r9);
    r0 = MemoryInline::FlatRead8((r4 + 8016));
}

loc_8087F124:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8087F138;
    }
}

loc_8087F128:
{
    r4 = (r15 + r7);
    r0 = MemoryInline::FlatRead8((r4 + 8016));
}

loc_8087F134:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8087F168;
    }
}

loc_8087F138:
{
}

loc_8087F13C:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r6))) {
        goto loc_8087F16C;
    }
}

loc_8087F140:
{
    r6 = (r15 + r7);
    r7 = (r15 + r9);
    r4 = MemoryInline::FlatRead8((r7 + 8016));
    r0 = MemoryInline::FlatRead8((r6 + 8016));
}

loc_8087F154:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8087F16C;
    }
}

loc_8087F158:
{
    r4 = MemoryInline::FlatRead8((r7 + 7942));
    r0 = MemoryInline::FlatRead8((r6 + 7942));
}

loc_8087F164:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_8087F16C;
    }
}

loc_8087F168:
{
    MemoryInline::FlatWrite8((r8 + 18), static_cast<uint8_t>(r9));
}

loc_8087F16C:
{
    r3 = (r3 + 1);
}

loc_8087F170:
{
    r0 = MemoryInline::FlatRead8(r15);
    r4 = (r3 & 255);
}

loc_8087F17C:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_8087F0E8;
    }
}

loc_8087F180:
{
    r21 = (r21 + 1);
}

loc_8087F184:
{
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    r3 = (r21 & 255);
}

loc_8087F190:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8087EFA4;
    }
}

loc_8087F194:
{
    r8 = 0;
    goto loc_8087F244;
}

loc_8087F19C:
{
    r0 = (r8 & 255);
    r5 = MemoryInline::FlatRead8((r15 + 7916));
    r0 = (r0 * 28);
    r7 = (r15 + r0);
    r4 = MemoryInline::FlatRead8((r7 + 17));
}

loc_8087F1B4:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r5))) {
        goto loc_8087F240;
    }
}

loc_8087F1B8:
{
    r0 = (r4 * 48);
    r3 = (r1 + 984);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 12));
}

loc_8087F1CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8087F240;
    }
}

loc_8087F1D0:
{
    r0 = MemoryInline::FlatRead8((r3 + 13));
}

loc_8087F1D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8087F240;
    }
}

loc_8087F1DC:
{
    r6 = MemoryInline::FlatRead8((r7 + 18));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
}

loc_8087F1E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8087F23C;
    }
}

loc_8087F1E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8087F20C;
    }
}

loc_8087F1EC:
{
    r3 = (r15 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 8016));
}

loc_8087F1F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8087F20C;
    }
}

loc_8087F1FC:
{
    r3 = (r15 + r6);
    r0 = MemoryInline::FlatRead8((r3 + 8016));
}

loc_8087F208:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8087F23C;
    }
}

loc_8087F20C:
{
}

loc_8087F210:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r5))) {
        goto loc_8087F240;
    }
}

loc_8087F214:
{
    r5 = (r15 + r6);
    r6 = (r15 + r4);
    r3 = MemoryInline::FlatRead8((r6 + 8016));
    r0 = MemoryInline::FlatRead8((r5 + 8016));
}

loc_8087F228:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8087F240;
    }
}

loc_8087F22C:
{
    r3 = MemoryInline::FlatRead8((r6 + 7942));
    r0 = MemoryInline::FlatRead8((r5 + 7942));
}

loc_8087F238:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_8087F240;
    }
}

loc_8087F23C:
{
    MemoryInline::FlatWrite8((r7 + 18), static_cast<uint8_t>(r4));
}

loc_8087F240:
{
    r8 = (r8 + 1);
}

loc_8087F244:
{
    r0 = MemoryInline::FlatRead8(r15);
    r3 = (r8 & 255);
}

loc_8087F250:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8087F19C;
    }
}

loc_8087F254:
{
    r17 = 0;
    r24 = 16842752;
    r23 = 0;
    r22 = 255;
    r21 = 0x809C0000u;
    r20 = 1;
    goto loc_8087F710;
}

loc_8087F270:
{
    r0 = (r17 & 255);
    r3 = MemoryInline::FlatRead8((r15 + 7916));
    r0 = (r0 * 28);
    r16 = (r15 + r0);
    r19 = MemoryInline::FlatRead8((r16 + 18));
    r18 = MemoryInline::FlatRead8((r16 + 17));
}

loc_8087F28C:
{
    if ((static_cast<uint32_t>(r19) >= static_cast<uint32_t>(r3))) {
        goto loc_8087F5E0;
    }
}

loc_8087F290:
{
}

loc_8087F294:
{
    if ((static_cast<uint32_t>(r18) == static_cast<uint32_t>(r19))) {
        goto loc_8087F70C;
    }
}

loc_8087F298:
{
    r3 = MemoryInline::FlatRead32((r16 + 12));
    r26 = 1;
    r0 = 1;
    r6 = MemoryInline::FlatRead32((r3 + 360));
    r4 = MemoryInline::FlatRead32((r3 + 352));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r5 = (r5_rot_2 & -16);
    r4_addr_10 = (r4 + r5);
    r7 = MemoryInline::FlatRead32(r4_addr_10);
}

loc_8087F2B8:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(9))) {
        goto loc_8087F2C8;
    }
}

loc_8087F2BC:
{
}

loc_8087F2C0:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8087F2C8;
    }
}

loc_8087F2C4:
{
    r0 = 0;
}

loc_8087F2C8:
{
}

loc_8087F2CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8087F370;
    }
}

loc_8087F2D0:
{
    r4 = (r15 + r19);
    r0 = MemoryInline::FlatRead8((r15 + 7917));
    r4 = MemoryInline::FlatRead8((r4 + 7930));
    r27 = 0;
    r5 = 0;
}

loc_8087F2E8:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_8087F318;
    }
}

loc_8087F2EC:
{
}

loc_8087F2F0:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(2))) {
        goto loc_8087F2FC;
    }
}

loc_8087F2F4:
{
}

loc_8087F2F8:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(3))) {
        goto loc_8087F318;
    }
}

loc_8087F2FC:
{
    r0 = MemoryInline::FlatRead32((r3 + 356));
}

loc_8087F304:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r6))) {
        goto loc_8087F314;
    }
}

loc_8087F308:
{
    r0 = MemoryInline::FlatRead8((r3 + 365));
}

loc_8087F310:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8087F318;
    }
}

loc_8087F314:
{
    r5 = 1;
}

loc_8087F318:
{
}

loc_8087F31C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8087F364;
    }
}

loc_8087F320:
{
    r4 = MemoryInline::FlatRead32((r16 + 20));
    r28 = 1;
    r0 = MemoryInline::FlatRead32((r15 + 8436));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8087F330:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8087F358;
    }
}

loc_8087F334:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 48));
    ctr = r12;
    ctx->lr = 0x8087F344u;
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
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r24 + 257);
    r0 = (r3 & ~r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8087F358;
    }
}

loc_8087F354:
{
    r28 = 0;
}

loc_8087F358:
{
}

loc_8087F35C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8087F364;
    }
}

loc_8087F360:
{
    r27 = 1;
}

loc_8087F364:
{
}

loc_8087F368:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_8087F370;
    }
}

loc_8087F36C:
{
    r26 = 0;
}

loc_8087F370:
{
    r6 = MemoryInline::FlatRead32((r16 + 12));
    r0 = MemoryInline::FlatRead32((r6 + 356));
    r3 = MemoryInline::FlatRead32((r6 + 352));
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_22 & -16);
    r4 = (r3 + r0);
    r3_addr_5 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_5);
}

loc_8087F38C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_8087F3A8;
    }
}

loc_8087F390:
{
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead8(r4);
    r0 = (r19 - r0);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_23 & 134217727);
    goto loc_8087F3AC;
}

loc_8087F3A8:
{
    r0 = 0;
}

loc_8087F3AC:
{
    r4 = MemoryInline::FlatRead8((r15 + 7916));
    r27 = 0;
    r5 = 0;
}

loc_8087F3BC:
{
    if ((static_cast<uint32_t>(r18) >= static_cast<uint32_t>(r4))) {
        goto loc_8087F3D8;
    }
}

loc_8087F3C0:
{
    r4 = MemoryInline::FlatRead32((r6 + 360));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r4 = (r4_rot_2 & -16);
    r3_addr_6 = (r3 + r4);
    r3 = MemoryInline::FlatRead32(r3_addr_6);
}

loc_8087F3D0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(7))) {
        goto loc_8087F3D8;
    }
}

loc_8087F3D4:
{
    r5 = 1;
}

loc_8087F3D8:
{
}

loc_8087F3DC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8087F414;
    }
}

loc_8087F3E0:
{
    r3 = MemoryInline::FlatRead8((r15 + 17278));
    r4 = 0;
}

loc_8087F3EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8087F408;
    }
}

loc_8087F3F0:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r19), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & 1020);
    r3 = (r15 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 8384));
}

loc_8087F400:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8087F408;
    }
}

loc_8087F404:
{
    r4 = 1;
}

loc_8087F408:
{
}

loc_8087F40C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8087F414;
    }
}

loc_8087F410:
{
    r27 = 1;
}

loc_8087F414:
{
}

loc_8087F418:
{
    r28 = 0;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8087F468;
    }
}

loc_8087F420:
{
    r4 = (r15 + r19);
    r3 = MemoryInline::FlatRead8((r15 + 7917));
    r4 = MemoryInline::FlatRead8((r4 + 7930));
}

loc_8087F430:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r3))) {
        goto loc_8087F468;
    }
}

loc_8087F434:
{
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r3 = (r3_rot_5 & 1020);
    r4 = MemoryInline::FlatRead32((r15 + 8436));
    r5 = (r15 + r3);
    r3 = MemoryInline::FlatRead32((r5 + 7968));
}

loc_8087F448:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r3))) {
        goto loc_8087F460;
    }
}

loc_8087F44C:
{
    r4 = (r3 + 1);
    MemoryInline::FlatWrite32((r5 + 7968), r4);
    r3 = MemoryInline::FlatRead32((r15 + 8436));
    r28 = (r4 - r3);
    goto loc_8087F468;
}

loc_8087F460:
{
    MemoryInline::FlatWrite32((r5 + 7968), r4);
    r28 = 0;
}

loc_8087F468:
{
    r4 = MemoryInline::FlatRead8((r16 + 25));
    r3 = MemoryInline::FlatRead8((r15 + 2812));
}

loc_8087F474:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r3))) {
        goto loc_8087F484;
    }
}

loc_8087F478:
{
    r3 = (r4 * 20);
    r3 = (r15 + r3);
    MemoryInline::FlatWrite8((r3 + 2832), static_cast<uint8_t>(r23));
}

loc_8087F484:
{
}

loc_8087F488:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8087F4E8;
    }
}

loc_8087F48C:
{
    r0 = MemoryInline::FlatRead8((r15 + 17277));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8087F494:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8087F4A0;
    }
}

loc_8087F498:
{
    r3 = MemoryInline::FlatRead32((r16 + 12));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80874244u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8087F4A0:
{
    r0 = MemoryInline::FlatRead8((r15 + 17278));
}

loc_8087F4A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8087F4C0;
    }
}

loc_8087F4AC:
{
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r19), static_cast<uint32_t>(2));
    r0 = (r0_rot_25 & 1020);
    r3 = (r15 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 8384));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8087F4BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8087F4C8;
    }
}

loc_8087F4C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_8087F4C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8087F4D8;
    }
}

loc_8087F4C8:
{
    r3 = MemoryInline::FlatRead32((r16 + 12));
    r4 = r19;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80874B34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8087F4E8;
}

loc_8087F4D8:
{
    r3 = MemoryInline::FlatRead32((r16 + 12));
    r4 = r19;
    r5 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80874950u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8087F4E8:
{
    MemoryInline::FlatWrite8((r16 + 18), static_cast<uint8_t>(r19));
    r4 = 0;
    MemoryInline::FlatWrite8((r16 + 19), static_cast<uint8_t>(r19));
    r0 = MemoryInline::FlatRead32((r15 + 8436));
    MemoryInline::FlatWrite32((r16 + 20), r0);
    MemoryInline::FlatWrite8((r16 + 24), static_cast<uint8_t>(r23));
    MemoryInline::FlatWrite8((r16 + 25), static_cast<uint8_t>(r22));
    r3 = MemoryInline::FlatRead8((r15 + 7916));
}

loc_8087F50C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8087F5A8;
    }
}

loc_8087F510:
{
}

loc_8087F514:
{
    r5 = (r3 + -8);
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(8))) {
        goto loc_8087F580;
    }
}

loc_8087F51C:
{
    r0 = (r5 + 7);
    r6 = r16;
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_29 & 536870911);
    ctr = r0;
}

loc_8087F530:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(0))) {
        goto loc_8087F580;
    }
}

loc_8087F534:
{
    guest_range_7 = MemoryInline::ResolveRangeHost((r25 + 35), 0, 1u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_7, 0u, (r25 + 35));
    r4 = (r4 + 8);
    guest_range_8 = MemoryInline::ResolveRangeHost((r6 + 27), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_8, 0u, (r6 + 27), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_7, 0u, (r25 + 35));
    MemoryInline::WriteResolved8(guest_range_8, 1u, (r6 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_7, 0u, (r25 + 35));
    MemoryInline::WriteResolved8(guest_range_8, 2u, (r6 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_7, 0u, (r25 + 35));
    MemoryInline::WriteResolved8(guest_range_8, 3u, (r6 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_7, 0u, (r25 + 35));
    MemoryInline::WriteResolved8(guest_range_8, 4u, (r6 + 31), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_7, 0u, (r25 + 35));
    MemoryInline::WriteResolved8(guest_range_8, 5u, (r6 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_7, 0u, (r25 + 35));
    MemoryInline::WriteResolved8(guest_range_8, 6u, (r6 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_7, 0u, (r25 + 35));
    MemoryInline::WriteResolved8(guest_range_8, 7u, (r6 + 34), static_cast<uint8_t>(r0));
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8087F534;
    }
}

loc_8087F580:
{
    r0 = (r3 - r4);
    r5 = (r16 + r4);
    ctr = r0;
}

loc_8087F590:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r3))) {
        goto loc_8087F5A8;
    }
}

loc_8087F594:
{
    r0 = MemoryInline::FlatRead8((r25 + 35));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8((r5 + 27), static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8087F594;
    }
}

loc_8087F5A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_8087F5AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8087F5D8;
    }
}

loc_8087F5B0:
{
    r3 = MemoryInline::FlatRead32((r21 + 6392));
    r4 = r18;
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_32 & -4);
    r3_addr_8 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_8);
    // end of inlined leaf 0x80590100
    // inline leaf 0x80590794 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 28));
    // end of inlined leaf 0x80590794
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 500;
    f1.d = MemoryInline::FlatReadFloat32(r14);
    r12 = MemoryInline::FlatRead32((r12 + 228));
    ctr = r12;
    ctx->lr = 0x8087F5D8u;
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
}

loc_8087F5D8:
{
    MemoryInline::FlatWrite8((r15 + 8458), static_cast<uint8_t>(r20));
    goto loc_8087F70C;
}

loc_8087F5E0:
{
}

loc_8087F5E4:
{
    if ((static_cast<uint32_t>(r18) >= static_cast<uint32_t>(r3))) {
        goto loc_8087F70C;
    }
}

loc_8087F5E8:
{
    r0 = MemoryInline::FlatRead8((r15 + 17277));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8087F5F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8087F6E4;
    }
}

loc_8087F5F4:
{
    r3 = MemoryInline::FlatRead8((r16 + 25));
    r0 = MemoryInline::FlatRead8((r15 + 2812));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8087F600:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8087F610;
    }
}

loc_8087F604:
{
    r0 = (r3 * 20);
    r3 = (r15 + r0);
    MemoryInline::FlatWrite8((r3 + 2832), static_cast<uint8_t>(r23));
}

loc_8087F610:
{
    r3 = MemoryInline::FlatRead32((r16 + 12));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80874244u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    r4 = 0;
    MemoryInline::FlatWrite8((r16 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    MemoryInline::FlatWrite8((r16 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r15 + 8436));
    MemoryInline::FlatWrite32((r16 + 20), r0);
    MemoryInline::FlatWrite8((r16 + 24), static_cast<uint8_t>(r23));
    MemoryInline::FlatWrite8((r16 + 25), static_cast<uint8_t>(r22));
    r3 = MemoryInline::FlatRead8((r15 + 7916));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8087F644:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8087F6E0;
    }
}

loc_8087F648:
{
}

loc_8087F64C:
{
    r5 = (r3 + -8);
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(8))) {
        goto loc_8087F6B8;
    }
}

loc_8087F654:
{
    r0 = (r5 + 7);
    r6 = r16;
    r0_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_34 & 536870911);
    ctr = r0;
}

loc_8087F668:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(0))) {
        goto loc_8087F6B8;
    }
}

loc_8087F66C:
{
    guest_range_9 = MemoryInline::ResolveRangeHost((r25 + 36), 0, 1u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_9, 0u, (r25 + 36));
    r4 = (r4 + 8);
    guest_range_10 = MemoryInline::ResolveRangeHost((r6 + 27), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_10, 0u, (r6 + 27), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_9, 0u, (r25 + 36));
    MemoryInline::WriteResolved8(guest_range_10, 1u, (r6 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_9, 0u, (r25 + 36));
    MemoryInline::WriteResolved8(guest_range_10, 2u, (r6 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_9, 0u, (r25 + 36));
    MemoryInline::WriteResolved8(guest_range_10, 3u, (r6 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_9, 0u, (r25 + 36));
    MemoryInline::WriteResolved8(guest_range_10, 4u, (r6 + 31), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_9, 0u, (r25 + 36));
    MemoryInline::WriteResolved8(guest_range_10, 5u, (r6 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_9, 0u, (r25 + 36));
    MemoryInline::WriteResolved8(guest_range_10, 6u, (r6 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_9, 0u, (r25 + 36));
    MemoryInline::WriteResolved8(guest_range_10, 7u, (r6 + 34), static_cast<uint8_t>(r0));
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8087F66C;
    }
}

loc_8087F6B8:
{
    r0 = (r3 - r4);
    r5 = (r16 + r4);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r3));
}

loc_8087F6C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8087F6E0;
    }
}

loc_8087F6CC:
{
    r0 = MemoryInline::FlatRead8((r25 + 36));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8((r5 + 27), static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8087F6CC;
    }
}

loc_8087F6E0:
{
    MemoryInline::FlatWrite8((r15 + 8458), static_cast<uint8_t>(r20));
}

loc_8087F6E4:
{
    r3 = MemoryInline::FlatRead32((r21 + 6392));
    r4 = r18;
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_38 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_38 & -4);
    r3_addr_10 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_10);
    // end of inlined leaf 0x80590100
    // inline leaf 0x80590794 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 28));
    // end of inlined leaf 0x80590794
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 500;
    f1.d = MemoryInline::FlatReadFloat32(r14);
    r12 = MemoryInline::FlatRead32((r12 + 228));
    ctr = r12;
    ctx->lr = 0x8087F70Cu;
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
}

loc_8087F70C:
{
    r17 = (r17 + 1);
}

loc_8087F710:
{
    r0 = MemoryInline::FlatRead8(r15);
    r3 = (r17 & 255);
}

loc_8087F71C:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8087F270;
    }
}

loc_8087F720:
{
    r8 = 0;
    goto loc_8087F7B0;
}

loc_8087F728:
{
    r0 = (r8 & 255);
    r7 = (r1 + 984);
    r0 = (r0 * 48);
    r7 = (r7 + r0);
    r0 = MemoryInline::FlatRead8((r7 + 12));
}

loc_8087F740:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8087F7AC;
    }
}

loc_8087F744:
{
    r0 = MemoryInline::FlatRead8((r7 + 13));
}

loc_8087F74C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8087F7AC;
    }
}

loc_8087F750:
{
    r4 = MemoryInline::FlatRead32((r7 + 16));
    r9 = 0;
    r0 = MemoryInline::FlatRead8((r7 + 20));
    goto loc_8087F7A0;
}

loc_8087F760:
{
    r3 = (r9 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8087F764:
{
    r3 = (r7 + r3);
    r10 = MemoryInline::FlatRead8((r3 + 21));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8087F790;
    }
}

loc_8087F770:
{
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r3 = (r3_rot_10 & 1020);
    r6 = (r15 + r3);
    r5 = MemoryInline::FlatRead32((r6 + 8384));
    r3 = MemoryInline::FlatRead32((r6 + 17284));
    r5 = (r4 - r5);
}

loc_8087F788:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r5))) {
        goto loc_8087F790;
    }
}

loc_8087F78C:
{
    MemoryInline::FlatWrite32((r6 + 17284), r5);
}

loc_8087F790:
{
    r3_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r3 = (r3_rot_12 & 1020);
    r9 = (r9 + 1);
    r3 = (r15 + r3);
    MemoryInline::FlatWrite32((r3 + 8384), r4);
}

loc_8087F7A0:
{
    r3 = (r9 & 255);
}

loc_8087F7A8:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8087F760;
    }
}

loc_8087F7AC:
{
    r8 = (r8 + 1);
}

loc_8087F7B0:
{
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    r3 = (r8 & 255);
}

loc_8087F7BC:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8087F728;
    }
}

loc_8087F7C0:
{
    r0 = 0x808E0000u;
    MemoryInline::FlatWriteRam32((r1 + 1572), r0);
    r0 = 0x808B0000u;
    r27 = 0x808E0000u;
    MemoryInline::FlatWriteRam32((r1 + 1588), r0);
    r0 = 0x808E0000u;
    r3 = MemoryInline::FlatRead32((r1 + 1572));
    r26 = 0x808E0000u;
    MemoryInline::FlatWriteRam32((r1 + 1580), r0);
    r27 = (r27 + -13760);
    r3 = (r3 + -13616);
    f27.d = MemoryInline::FlatReadFloat32(r14);
    MemoryInline::FlatWriteRam32((r1 + 1572), r3);
    r26 = (r26 + -13712);
    r3 = MemoryInline::FlatRead32((r1 + 1588));
    r31 = 1;
    f28.d = MemoryInline::FlatReadFloat64((r14 + 64));
    r29 = 0;
    r3 = (r3 + 13928);
    MemoryInline::FlatWriteRam32((r1 + 1588), r3);
    r3 = r0;
    r0 = 0x808E0000u;
    MemoryInline::FlatWriteRam32((r1 + 1592), r0);
    r3 = (r3 + -13496);
    r0 = 0x808E0000u;
    f29.d = MemoryInline::FlatReadFloat32((r14 + 48));
    MemoryInline::FlatWriteRam32((r1 + 1580), r3);
    r30 = 255;
    r3 = MemoryInline::FlatRead32((r1 + 1592));
    r28 = 0x808E0000u;
    MemoryInline::FlatWriteRam32((r1 + 1596), r0);
    r0 = 0x808E0000u;
    r3 = (r3 + -13784);
    f30.d = MemoryInline::FlatReadFloat32((r14 + 52));
    MemoryInline::FlatWriteRam32((r1 + 1600), r0);
    r0 = 0x808E0000u;
    f31.d = MemoryInline::FlatReadFloat32((r14 + 56));
    MemoryInline::FlatWriteRam32((r1 + 1592), r3);
    r3 = MemoryInline::FlatRead32((r1 + 1596));
    MemoryInline::FlatWriteRam32((r1 + 1604), r0);
    r0 = 0x808E0000u;
    r3 = (r3 + -13808);
    f26.d = MemoryInline::FlatReadFloat32((r14 + 60));
    MemoryInline::FlatWriteRam32((r1 + 1596), r3);
    r14 = (r1 + 632);
    r3 = MemoryInline::FlatRead32((r1 + 1600));
    MemoryInline::FlatWriteRam32((r1 + 1608), r0);
    r0 = 0x808E0000u;
    r3 = (r3 + -13832);
    MemoryInline::FlatWriteRam32((r1 + 1600), r3);
    r3 = MemoryInline::FlatRead32((r1 + 1604));
    MemoryInline::FlatWriteRam32((r1 + 1612), r0);
    r0 = 0x808E0000u;
    r3 = (r3 + -13856);
    MemoryInline::FlatWriteRam32((r1 + 1604), r3);
    r3 = MemoryInline::FlatRead32((r1 + 1608));
    MemoryInline::FlatWriteRam32((r1 + 1576), r0);
    r0 = 0x808B0000u;
    r3 = (r3 + -13568);
    MemoryInline::FlatWriteRam32((r1 + 1608), r3);
    r3 = MemoryInline::FlatRead32((r1 + 1612));
    MemoryInline::FlatWriteRam32((r1 + 1584), r0);
    r0 = 0x808B0000u;
    r3 = (r3 + -13880);
    MemoryInline::FlatWriteRam32((r1 + 1612), r3);
    r3 = MemoryInline::FlatRead32((r1 + 1576));
    MemoryInline::FlatWriteRam32((r1 + 1616), r0);
    r0 = 0x808E0000u;
    r3 = (r3 + -13736);
    MemoryInline::FlatWriteRam32((r1 + 1576), r3);
    r3 = MemoryInline::FlatRead32((r1 + 1584));
    MemoryInline::FlatWriteRam32((r1 + 1620), r0);
    r0 = 0x808E0000u;
    r3 = (r3 + 24944);
    MemoryInline::FlatWriteRam32((r1 + 1584), r3);
    r3 = MemoryInline::FlatRead32((r1 + 1616));
    MemoryInline::FlatWriteRam32((r1 + 1624), r0);
    r3 = (r3 + 24824);
    MemoryInline::FlatWriteRam32((r1 + 1616), r3);
    r3 = MemoryInline::FlatRead32((r1 + 1620));
    r3 = (r3 + -13944);
    MemoryInline::FlatWriteRam32((r1 + 1620), r3);
    r3 = r0;
    r0 = 0;
    r3 = (r3 + -13928);
    MemoryInline::FlatWriteRam32((r1 + 1624), r3);
    MemoryInline::FlatWriteRam8((r1 + 1568), static_cast<uint8_t>(r0));
    goto loc_808812AC;
}

loc_8087F920:
{
    r0 = MemoryInline::FlatRead8((r1 + 1568));
    r24 = (r1 + 984);
    r0 = (r0 * 48);
    r24 = (r24 + r0);
    r0 = MemoryInline::FlatRead8((r24 + 12));
}

loc_8087F938:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_808812A0;
    }
}

loc_8087F93C:
{
    r0 = MemoryInline::FlatRead8((r24 + 13));
}

loc_8087F944:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_808812A0;
    }
}

loc_8087F948:
{
}

loc_8087F94C:
{
    r17 = MemoryInline::FlatRead32(r24);
    r22 = (r24 + 21);
    r18 = (r24 + 33);
    r16 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8087F9C0;
    }
}

loc_8087F960:
{
    goto loc_8087F9B0;
}

loc_8087F964:
{
    r3 = 0x808E0000u;
    MemoryInline::FlatWriteRam32((r1 + 200), r26);
    r0 = MemoryInline::FlatRead32((r3 + -13988));
    r3 = (r1 + 200);
    MemoryInline::FlatWriteRam32((r1 + 204), r0);
    r12 = MemoryInline::FlatRead32((r26 + 20));
    ctr = r12;
    ctx->lr = 0x8087F984u;
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
    r6 = MemoryInline::FlatRead32((r24 + 8));
    r4 = r3;
    r5 = r17;
    r3 = (r1 + 204);
    r7 = 4;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CCA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0_rot_42 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(2));
    r0 = (r0_rot_42 & 1020);
    r4 = MemoryInline::FlatRead32((r1 + 204));
    MemoryInline::FlatWrite32((r24 + 8), r3);
    r16 = (r16 + 1);
    r14_addr_3 = (r14 + r0);
    MemoryInline::FlatWrite32(r14_addr_3, r4);
}

loc_8087F9B0:
{
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    r3 = (r16 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8087F9BC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8087F964;
    }
}

loc_8087F9C0:
{
    r4 = MemoryInline::FlatRead8((r24 + 20));
    r6 = 0;
    goto loc_8087FA18;
}

loc_8087F9CC:
{
    r0 = (r6 & 255);
    r5 = MemoryInline::FlatRead32((r15 + 17180));
    r3 = (r15 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 7918));
    r0_rot_45 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_45 & -4);
    r14_addr_6 = (r14 + r0);
    r0 = MemoryInline::FlatRead32(r14_addr_6);
}

loc_8087F9E8:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8087FA14;
    }
}

loc_8087F9EC:
{
    r5 = 0;
    goto loc_8087FA08;
}

loc_8087F9F4:
{
    r0 = (r5 & 255);
    r5 = (r5 + 1);
    r22_addr_4 = (r22 + r0);
    r0 = MemoryInline::FlatRead8(r22_addr_4);
    r3 = (r15 + r0);
    MemoryInline::FlatWrite8((r3 + 17236), static_cast<uint8_t>(r31));
}

loc_8087FA08:
{
    r0 = (r5 & 255);
}

loc_8087FA10:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_8087F9F4;
    }
}

loc_8087FA14:
{
    r6 = (r6 + 1);
}

loc_8087FA18:
{
    r0 = MemoryInline::FlatRead8((r15 + 7917));
    r3 = (r6 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8087FA24:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8087F9CC;
    }
}

loc_8087FA28:
{
    r12 = MemoryInline::FlatRead32((r1 + 1572));
    r3 = (r1 + 192);
    r0 = MemoryInline::FlatRead8((r25 + 30));
    MemoryInline::FlatWriteRam8((r1 + 196), static_cast<uint8_t>(r0));
    r0 = r12;
    MemoryInline::FlatWriteRam32((r1 + 192), r0);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8087FA4Cu;
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
    r6 = MemoryInline::FlatRead32((r24 + 8));
    r4 = r3;
    r5 = r17;
    r3 = (r1 + 196);
    r7 = 1;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CCA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r24 + 8), r3);
    r5 = 0;
    r4 = MemoryInline::FlatRead8((r1 + 196));
    r0 = MemoryInline::FlatRead8((r24 + 20));
    goto loc_8087FA8C;
}

loc_8087FA78:
{
    r3 = (r5 & 255);
    r5 = (r5 + 1);
    r22_addr_7 = (r22 + r3);
    r3 = MemoryInline::FlatRead8(r22_addr_7);
    r3 = (r15 + r3);
    MemoryInline::FlatWrite8((r3 + 17249), static_cast<uint8_t>(r4));
}

loc_8087FA8C:
{
    r3 = (r5 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8087FA94:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8087FA78;
    }
}

loc_8087FA98:
{
    r3 = 0x808E0000u;
    MemoryInline::FlatWriteRam32((r1 + 184), r26);
    r0 = MemoryInline::FlatRead32((r3 + -13988));
    r3 = (r1 + 184);
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    r12 = MemoryInline::FlatRead32((r26 + 20));
    ctr = r12;
    ctx->lr = 0x8087FAB8u;
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
    r6 = MemoryInline::FlatRead32((r24 + 8));
    r4 = r3;
    r5 = r17;
    r3 = (r1 + 188);
    r7 = 4;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CCA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r1 + 1568));
    r21 = MemoryInline::FlatRead32((r1 + 188));
    r0_rot_46 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_46 & 1020);
    MemoryInline::FlatWrite32((r24 + 8), r3);
    r4 = (r15 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 17188));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r21), static_cast<uint32_t>(r0));
}

loc_8087FAEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808812A0;
    }
}

loc_8087FAF0:
{
    r3 = 0x808E0000u;
    r12 = MemoryInline::FlatRead32((r1 + 1576));
    r0 = MemoryInline::FlatRead32((r3 + -13984));
    r3 = (r1 + 176);
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    r0 = r12;
    MemoryInline::FlatWriteRam32((r1 + 176), r0);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8087FB18u;
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
    r6 = MemoryInline::FlatRead32((r24 + 8));
    r4 = r3;
    r5 = r17;
    r3 = (r1 + 180);
    r7 = 4;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CCA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r15 + 17277));
    MemoryInline::FlatWrite32((r24 + 8), r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8087FB3C:
{
    r19 = MemoryInline::FlatRead32((r1 + 180));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8087FB8C;
    }
}

loc_8087FB44:
{
    r12 = MemoryInline::FlatRead32((r1 + 1580));
    r3 = (r1 + 168);
    r0 = MemoryInline::FlatRead32((r25 + 20));
    MemoryInline::FlatWriteRam32((r1 + 172), r0);
    r0 = r12;
    MemoryInline::FlatWriteRam32((r1 + 168), r0);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8087FB68u;
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
    r6 = MemoryInline::FlatRead32((r24 + 8));
    r4 = r3;
    r5 = r17;
    r3 = (r1 + 172);
    r7 = 4;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CCA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r24 + 8), r3);
    r16 = MemoryInline::FlatRead32((r1 + 172));
    goto loc_8087FBD0;
}

loc_8087FB8C:
{
    r12 = MemoryInline::FlatRead32((r1 + 1584));
    r3 = (r1 + 160);
    r0 = MemoryInline::FlatRead32((r25 + 24));
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    r0 = r12;
    MemoryInline::FlatWriteRam32((r1 + 160), r0);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8087FBB0u;
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
    r6 = MemoryInline::FlatRead32((r24 + 8));
    r4 = r3;
    r5 = r17;
    r3 = (r1 + 164);
    r7 = 4;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CCA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r24 + 8), r3);
    r16 = MemoryInline::FlatRead32((r1 + 164));
}

loc_8087FBD0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r19), static_cast<int32_t>(2));
}

loc_8087FBD4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808800D4;
    }
}

loc_8087FBD8:
{
    r3 = 0x808E0000u;
    r12 = MemoryInline::FlatRead32((r1 + 1588));
    r0 = MemoryInline::FlatRead8((r3 + -13980));
    r3 = (r1 + 152);
    MemoryInline::FlatWriteRam8((r1 + 156), static_cast<uint8_t>(r0));
    r0 = r12;
    MemoryInline::FlatWriteRam32((r1 + 152), r0);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8087FC00u;
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
    r6 = MemoryInline::FlatRead32((r24 + 8));
    r4 = r3;
    r5 = r17;
    r3 = (r1 + 156);
    r7 = 1;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CCA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r18 = MemoryInline::FlatRead8((r1 + 156));
    r19 = 0;
    MemoryInline::FlatWrite32((r24 + 8), r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r18), static_cast<int32_t>(0));
}

loc_8087FC28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8087FC88;
    }
}

loc_8087FC2C:
{
    goto loc_8087FC7C;
}

loc_8087FC30:
{
    r0 = MemoryInline::FlatRead8((r28 + -13979));
    r3 = (r1 + 144);
    MemoryInline::FlatWriteRam8((r1 + 148), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 144), r27);
    r12 = MemoryInline::FlatRead32((r27 + 20));
    ctr = r12;
    ctx->lr = 0x8087FC4Cu;
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
    r6 = MemoryInline::FlatRead32((r24 + 8));
    r4 = r3;
    r5 = r17;
    r3 = (r1 + 148);
    r7 = 1;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CCA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r19 & 255);
    MemoryInline::FlatWrite32((r24 + 8), r3);
    r4 = MemoryInline::FlatRead8((r1 + 148));
    r3 = (r1 + 780);
    r3_addr_14 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_14, static_cast<uint8_t>(r4));
    r19 = (r19 + 1);
}

loc_8087FC7C:
{
    r0 = (r19 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r18));
}

loc_8087FC84:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8087FC30;
    }
}

loc_8087FC88:
{
    r3 = 0x808E0000u;
    r0 = MemoryInline::FlatRead32((r1 + 1592));
    f0.d = MemoryInline::FlatReadFloat32((r3 + -13976));
    r6 = r17;
    MemoryInline::FlatWriteRamFloat32((r1 + 140), f0.d);
    r3 = (r1 + 140);
    r7 = MemoryInline::FlatRead32((r24 + 8));
    r4 = 5;
    MemoryInline::FlatWriteRam32((r1 + 136), r0);
    r5 = 8;
    ctx->lr = 0x8087FCB4u;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CE58u>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 140));
    r4 = 0x808E0000u;
    MemoryInline::FlatWrite32((r24 + 8), r3);
    r6 = r17;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f29.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + -13972));
    r0 = MemoryInline::FlatRead32((r1 + 1596));
    r3 = (r1 + 132);
    MemoryInline::FlatWriteRamFloat32((r1 + 132), f0.d);
    r4 = 4;
    r7 = MemoryInline::FlatRead32((r24 + 8));
    r5 = 6;
    MemoryInline::FlatWriteRamFloat32((r1 + 140), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 528), f1.d);
    MemoryInline::FlatWriteRam32((r1 + 128), r0);
    ctx->lr = 0x8087FCF4u;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CE58u>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 132));
    r4 = 0x808E0000u;
    MemoryInline::FlatWrite32((r24 + 8), r3);
    r6 = r17;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f30.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + -13976));
    r0 = MemoryInline::FlatRead32((r1 + 1592));
    r3 = (r1 + 124);
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f0.d);
    r4 = 5;
    r7 = MemoryInline::FlatRead32((r24 + 8));
    r5 = 8;
    MemoryInline::FlatWriteRamFloat32((r1 + 132), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 532), f1.d);
    MemoryInline::FlatWriteRam32((r1 + 120), r0);
    ctx->lr = 0x8087FD34u;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CE58u>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 124));
    r4 = 0x808E0000u;
    MemoryInline::FlatWrite32((r24 + 8), r3);
    r6 = r17;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f29.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + -13968));
    r0 = MemoryInline::FlatRead32((r1 + 1600));
    r3 = (r1 + 116);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f0.d);
    r4 = 3;
    r7 = MemoryInline::FlatRead32((r24 + 8));
    r5 = 7;
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 536), f1.d);
    MemoryInline::FlatWriteRam32((r1 + 112), r0);
    ctx->lr = 0x8087FD74u;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CE58u>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 116));
    r4 = 0x808E0000u;
    r0 = MemoryInline::FlatRead8((r4 + -13964));
    f25.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f31.d));
    r12 = MemoryInline::FlatRead32((r1 + 1604));
    MemoryInline::FlatWriteRam8((r1 + 108), static_cast<uint8_t>(r0));
    r0 = r12;
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f25.d);
    MemoryInline::FlatWriteRam32((r1 + 104), r0);
    MemoryInline::FlatWrite32((r24 + 8), r3);
    r3 = (r1 + 104);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8087FDACu;
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
    r6 = MemoryInline::FlatRead32((r24 + 8));
    r4 = r3;
    r5 = r17;
    r3 = (r1 + 108);
    r7 = 1;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CCA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead8((r1 + 108));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 1560), r0);
    r19 = 0;
    r4_addc_left_2 = r4;
    r4 = (r4_addc_left_2 + r31);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_addc_left_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r31)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0 = (r4 & 255);
    MemoryInline::FlatWriteRam32((r1 + 1564), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 1560));
    MemoryInline::FlatWriteRam8((r1 + 108), static_cast<uint8_t>(r4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f28.d));
    MemoryInline::FlatWrite32((r24 + 8), r3);
    f24.d = static_cast<double>(PpcForceSingleValueInline(f26.d / f0.d));
    goto loc_808800C4;
}

loc_8087FDF8:
{
    r4 = MemoryInline::FlatRead8((r15 + 17277));
    r0 = (r19 & 255);
    r3 = (r1 + 780);
}

loc_8087FE08:
{
    r3_addr_17 = (r3 + r0);
    r20 = MemoryInline::FlatRead8(r3_addr_17);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8087FE28;
    }
}

loc_8087FE10:
{
    r3 = (r20 * 28);
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    r3 = (r15 + r3);
    r3 = MemoryInline::FlatRead8((r3 + 18));
}

loc_8087FE24:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_808800C0;
    }
}

loc_8087FE28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8087FE2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8087FE54;
    }
}

loc_8087FE30:
{
    r0 = (r20 * 28);
    r17 = (r15 + r0);
    r3 = MemoryInline::FlatRead32((r17 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r3 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_48 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_48 & -16);
    r3_addr_18 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_18);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
}

loc_8087FE50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8087FFD4;
    }
}

loc_8087FE54:
{
    r0 = (r19 & 255);
    MemoryInline::FlatWriteRam32((r1 + 1564), r0);
    r0 = 1127219200;
    r3 = (r1 + 584);
    MemoryInline::FlatWriteRam32((r1 + 1560), r0);
    r4 = (r1 + 432);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 1560));
    MemoryInline::FlatWriteRamFloat32((r1 + 432), f27.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f28.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 440), f27.d);
    f0.d = PpcFmulsInline(f24.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f25.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 436), f0.d);
    ctx->lr = 0x8087FE8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r5 = 0x802A0000u;
    r3 = (r1 + 516);
    r4 = (r1 + 584);
    r5 = (r5 + 16712);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->xer = xer;
    InvokeDirectCpu<0x802303F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    r3 = (r20 * 28);
    r0 = MemoryInline::FlatRead8((r15 + 2812));
    r17 = (r15 + r3);
    r3 = MemoryInline::FlatRead8((r17 + 25));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8087FEB4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8087FEC4;
    }
}

loc_8087FEB8:
{
    r0 = (r3 * 20);
    r3 = (r15 + r0);
    MemoryInline::FlatWrite8((r3 + 2832), static_cast<uint8_t>(r29));
}

loc_8087FEC4:
{
    r10 = MemoryInline::FlatRead32((r1 + 528));
    r4 = r16;
    r9 = MemoryInline::FlatRead32((r1 + 532));
    r5 = (r1 + 420);
    r8 = MemoryInline::FlatRead32((r1 + 536));
    r6 = (r1 + 408);
    r7 = MemoryInline::FlatRead32((r1 + 516));
    r3 = MemoryInline::FlatRead32((r1 + 520));
    r0 = MemoryInline::FlatRead32((r1 + 524));
    MemoryInline::FlatWriteRam32((r1 + 420), r10);
    MemoryInline::FlatWriteRam32((r1 + 424), r9);
    MemoryInline::FlatWriteRam32((r1 + 428), r8);
    MemoryInline::FlatWriteRam32((r1 + 408), r7);
    MemoryInline::FlatWriteRam32((r1 + 412), r3);
    MemoryInline::FlatWriteRam32((r1 + 416), r0);
    r3 = MemoryInline::FlatRead32((r17 + 12));
    ctx->lr = 0x8087FF08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8087477Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    r4 = 0;
    MemoryInline::FlatWrite8((r17 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    MemoryInline::FlatWrite8((r17 + 19), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r17 + 20), r16);
    MemoryInline::FlatWrite8((r17 + 24), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r17 + 25), static_cast<uint8_t>(r30));
    r3 = MemoryInline::FlatRead8((r15 + 7916));
}

loc_8087FF30:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8087FFCC;
    }
}

loc_8087FF34:
{
}

loc_8087FF38:
{
    r6 = (r3 + -8);
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(8))) {
        goto loc_8087FFA4;
    }
}

loc_8087FF40:
{
    r0 = (r6 + 7);
    r5 = r17;
    r0_rot_53 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_53 & 536870911);
    ctr = r0;
}

loc_8087FF54:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(0))) {
        goto loc_8087FFA4;
    }
}

loc_8087FF58:
{
    guest_range_11 = MemoryInline::ResolveRangeHost((r25 + 37), 0, 1u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_11, 0u, (r25 + 37));
    r4 = (r4 + 8);
    guest_range_12 = MemoryInline::ResolveRangeHost((r5 + 27), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_12, 0u, (r5 + 27), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_11, 0u, (r25 + 37));
    MemoryInline::WriteResolved8(guest_range_12, 1u, (r5 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_11, 0u, (r25 + 37));
    MemoryInline::WriteResolved8(guest_range_12, 2u, (r5 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_11, 0u, (r25 + 37));
    MemoryInline::WriteResolved8(guest_range_12, 3u, (r5 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_11, 0u, (r25 + 37));
    MemoryInline::WriteResolved8(guest_range_12, 4u, (r5 + 31), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_11, 0u, (r25 + 37));
    MemoryInline::WriteResolved8(guest_range_12, 5u, (r5 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_11, 0u, (r25 + 37));
    MemoryInline::WriteResolved8(guest_range_12, 6u, (r5 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_11, 0u, (r25 + 37));
    MemoryInline::WriteResolved8(guest_range_12, 7u, (r5 + 34), static_cast<uint8_t>(r0));
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8087FF58;
    }
}

loc_8087FFA4:
{
    r0 = (r3 - r4);
    r5 = (r17 + r4);
    ctr = r0;
}

loc_8087FFB4:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r3))) {
        goto loc_8087FFCC;
    }
}

loc_8087FFB8:
{
    r0 = MemoryInline::FlatRead8((r25 + 37));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8((r5 + 27), static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8087FFB8;
    }
}

loc_8087FFCC:
{
    MemoryInline::FlatWrite8((r15 + 8458), static_cast<uint8_t>(r31));
    goto loc_808800C0;
}

loc_8087FFD4:
{
    r3 = MemoryInline::FlatRead8((r17 + 25));
    r0 = MemoryInline::FlatRead8((r15 + 2812));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8087FFE0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8087FFF0;
    }
}

loc_8087FFE4:
{
    r0 = (r3 * 20);
    r3 = (r15 + r0);
    MemoryInline::FlatWrite8((r3 + 2832), static_cast<uint8_t>(r29));
}

loc_8087FFF0:
{
    r3 = MemoryInline::FlatRead32((r17 + 12));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80874244u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    r4 = 0;
    MemoryInline::FlatWrite8((r17 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    MemoryInline::FlatWrite8((r17 + 19), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r17 + 20), r16);
    MemoryInline::FlatWrite8((r17 + 24), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r17 + 25), static_cast<uint8_t>(r30));
    r3 = MemoryInline::FlatRead8((r15 + 7916));
}

loc_80880020:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_808800BC;
    }
}

loc_80880024:
{
}

loc_80880028:
{
    r6 = (r3 + -8);
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(8))) {
        goto loc_80880094;
    }
}

loc_80880030:
{
    r0 = (r6 + 7);
    r5 = r17;
    r0_rot_49 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_49 & 536870911);
    ctr = r0;
}

loc_80880044:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(0))) {
        goto loc_80880094;
    }
}

loc_80880048:
{
    guest_range_13 = MemoryInline::ResolveRangeHost((r25 + 38), 0, 1u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_13, 0u, (r25 + 38));
    r4 = (r4 + 8);
    guest_range_14 = MemoryInline::ResolveRangeHost((r5 + 27), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_14, 0u, (r5 + 27), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_13, 0u, (r25 + 38));
    MemoryInline::WriteResolved8(guest_range_14, 1u, (r5 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_13, 0u, (r25 + 38));
    MemoryInline::WriteResolved8(guest_range_14, 2u, (r5 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_13, 0u, (r25 + 38));
    MemoryInline::WriteResolved8(guest_range_14, 3u, (r5 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_13, 0u, (r25 + 38));
    MemoryInline::WriteResolved8(guest_range_14, 4u, (r5 + 31), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_13, 0u, (r25 + 38));
    MemoryInline::WriteResolved8(guest_range_14, 5u, (r5 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_13, 0u, (r25 + 38));
    MemoryInline::WriteResolved8(guest_range_14, 6u, (r5 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_13, 0u, (r25 + 38));
    MemoryInline::WriteResolved8(guest_range_14, 7u, (r5 + 34), static_cast<uint8_t>(r0));
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80880048;
    }
}

loc_80880094:
{
    r0 = (r3 - r4);
    r5 = (r17 + r4);
    ctr = r0;
}

loc_808800A4:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r3))) {
        goto loc_808800BC;
    }
}

loc_808800A8:
{
    r0 = MemoryInline::FlatRead8((r25 + 38));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8((r5 + 27), static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808800A8;
    }
}

loc_808800BC:
{
    MemoryInline::FlatWrite8((r15 + 8458), static_cast<uint8_t>(r31));
}

loc_808800C0:
{
    r19 = (r19 + 1);
}

loc_808800C4:
{
    r0 = (r19 & 255);
}

loc_808800CC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r18))) {
        goto loc_8087FDF8;
    }
}

loc_808800D0:
{
    goto loc_8088126C;
}

loc_808800D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r19), static_cast<int32_t>(3));
}

loc_808800D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80880450;
    }
}

loc_808800DC:
{
    r3 = 0x808E0000u;
    r12 = MemoryInline::FlatRead32((r1 + 1588));
    r0 = MemoryInline::FlatRead8((r3 + -13980));
    r3 = (r1 + 96);
    MemoryInline::FlatWriteRam8((r1 + 100), static_cast<uint8_t>(r0));
    r0 = r12;
    MemoryInline::FlatWriteRam32((r1 + 96), r0);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x80880104u;
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
    r6 = MemoryInline::FlatRead32((r24 + 8));
    r4 = r3;
    r5 = r17;
    r3 = (r1 + 100);
    r7 = 1;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CCA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r20 = MemoryInline::FlatRead8((r1 + 100));
    r16 = 0;
    MemoryInline::FlatWrite32((r24 + 8), r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r20), static_cast<int32_t>(0));
}

loc_8088012C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8088018C;
    }
}

loc_80880130:
{
    goto loc_80880180;
}

loc_80880134:
{
    r0 = MemoryInline::FlatRead8((r28 + -13979));
    r3 = (r1 + 88);
    MemoryInline::FlatWriteRam8((r1 + 92), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 88), r27);
    r12 = MemoryInline::FlatRead32((r27 + 20));
    ctr = r12;
    ctx->lr = 0x80880150u;
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
    r6 = MemoryInline::FlatRead32((r24 + 8));
    r4 = r3;
    r5 = r17;
    r3 = (r1 + 92);
    r7 = 1;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CCA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r16 & 255);
    MemoryInline::FlatWrite32((r24 + 8), r3);
    r4 = MemoryInline::FlatRead8((r1 + 92));
    r3 = (r1 + 680);
    r3_addr_22 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_22, static_cast<uint8_t>(r4));
    r16 = (r16 + 1);
}

loc_80880180:
{
    r0 = (r16 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r20));
}

loc_80880188:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80880134;
    }
}

loc_8088018C:
{
    r12 = MemoryInline::FlatRead32((r1 + 1608));
    r3 = (r1 + 80);
    r0 = MemoryInline::FlatRead8((r25 + 29));
    MemoryInline::FlatWriteRam8((r1 + 84), static_cast<uint8_t>(r0));
    r0 = r12;
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x808801B0u;
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
    r6 = MemoryInline::FlatRead32((r24 + 8));
    r4 = r3;
    r5 = r17;
    r3 = (r1 + 84);
    r7 = 1;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CCA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r19 = MemoryInline::FlatRead8((r1 + 84));
    r17 = 0;
    r0 = MemoryInline::FlatRead8((r15 + 7917));
    r4 = (r15 + r19);
    MemoryInline::FlatWrite32((r24 + 8), r3);
    r18 = MemoryInline::FlatRead8((r4 + 7930));
}

loc_808801E4:
{
    if ((static_cast<uint32_t>(r18) >= static_cast<uint32_t>(r0))) {
        goto loc_80880228;
    }
}

loc_808801E8:
{
    r0 = MemoryInline::FlatRead32((r25 + 8));
    r3 = (r20 + -1);
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r18), static_cast<uint32_t>(2));
    r5 = (r5_rot_5 & 1020);
    r4 = MemoryInline::FlatRead32((r15 + 8436));
    r0 = (r3 * r0);
    r5 = (r15 + r5);
    r3 = MemoryInline::FlatRead32((r5 + 7968));
    r4 = (r4 + r0);
}

loc_8088020C:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r3))) {
        goto loc_80880220;
    }
}

loc_80880210:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r5 + 7968), r0);
    r17 = (r0 - r4);
    goto loc_80880228;
}

loc_80880220:
{
    MemoryInline::FlatWrite32((r5 + 7968), r4);
    r17 = 0;
}

loc_80880228:
{
    r16 = 0;
    goto loc_80880440;
}

loc_80880230:
{
    r4 = (r16 & 255);
    r3 = (r1 + 680);
    r3_addr_25 = (r3 + r4);
    r3 = MemoryInline::FlatRead8(r3_addr_25);
    r0 = MemoryInline::FlatRead8((r15 + 2812));
    r3 = (r3 * 28);
    r23 = (r15 + r3);
    r3 = MemoryInline::FlatRead8((r23 + 25));
}

loc_80880250:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_80880260;
    }
}

loc_80880254:
{
    r0 = (r3 * 20);
    r3 = (r15 + r0);
    MemoryInline::FlatWrite8((r3 + 2832), static_cast<uint8_t>(r29));
}

loc_80880260:
{
    r0 = MemoryInline::FlatRead8((r15 + 17277));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80880268:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8088033C;
    }
}

loc_8088026C:
{
    r3 = MemoryInline::FlatRead32((r23 + 12));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80874244u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    r4 = 0;
    MemoryInline::FlatWrite8((r23 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    MemoryInline::FlatWrite8((r23 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r15 + 8436));
    MemoryInline::FlatWrite32((r23 + 20), r0);
    MemoryInline::FlatWrite8((r23 + 24), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r23 + 25), static_cast<uint8_t>(r30));
    r3 = MemoryInline::FlatRead8((r15 + 7916));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808802A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8088033C;
    }
}

loc_808802A4:
{
}

loc_808802A8:
{
    r6 = (r3 + -8);
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(8))) {
        goto loc_80880314;
    }
}

loc_808802B0:
{
    r0 = (r6 + 7);
    r5 = r23;
    r0_rot_58 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_58 & 536870911);
    ctr = r0;
}

loc_808802C4:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(0))) {
        goto loc_80880314;
    }
}

loc_808802C8:
{
    guest_range_15 = MemoryInline::ResolveRangeHost((r25 + 39), 0, 1u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_15, 0u, (r25 + 39));
    r4 = (r4 + 8);
    guest_range_16 = MemoryInline::ResolveRangeHost((r5 + 27), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_16, 0u, (r5 + 27), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_15, 0u, (r25 + 39));
    MemoryInline::WriteResolved8(guest_range_16, 1u, (r5 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_15, 0u, (r25 + 39));
    MemoryInline::WriteResolved8(guest_range_16, 2u, (r5 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_15, 0u, (r25 + 39));
    MemoryInline::WriteResolved8(guest_range_16, 3u, (r5 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_15, 0u, (r25 + 39));
    MemoryInline::WriteResolved8(guest_range_16, 4u, (r5 + 31), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_15, 0u, (r25 + 39));
    MemoryInline::WriteResolved8(guest_range_16, 5u, (r5 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_15, 0u, (r25 + 39));
    MemoryInline::WriteResolved8(guest_range_16, 6u, (r5 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_15, 0u, (r25 + 39));
    MemoryInline::WriteResolved8(guest_range_16, 7u, (r5 + 34), static_cast<uint8_t>(r0));
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808802C8;
    }
}

loc_80880314:
{
    r0 = (r3 - r4);
    r5 = (r23 + r4);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r3));
}

loc_80880324:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8088033C;
    }
}

loc_80880328:
{
    r0 = MemoryInline::FlatRead8((r25 + 39));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8((r5 + 27), static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80880328;
    }
}

loc_8088033C:
{
    r4 = (r16 & 255);
    r7 = MemoryInline::FlatRead32((r25 + 8));
    r3 = (r20 - r4);
    r6 = MemoryInline::FlatRead32((r15 + 8436));
    r0 = (r3 + -1);
    r3 = MemoryInline::FlatRead32((r23 + 12));
    r4 = (r4 * r7);
    r5 = r19;
    r0 = (r7 * r0);
    r4 = (r6 + r4);
    r6 = (r17 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80874A44u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r15 + 7917));
}

loc_80880374:
{
    if ((static_cast<uint32_t>(r18) >= static_cast<uint32_t>(r0))) {
        goto loc_80880438;
    }
}

loc_80880378:
{
    MemoryInline::FlatWrite8((r23 + 18), static_cast<uint8_t>(r19));
    r4 = 0;
    MemoryInline::FlatWrite8((r23 + 19), static_cast<uint8_t>(r19));
    r0 = MemoryInline::FlatRead32((r15 + 8436));
    MemoryInline::FlatWrite32((r23 + 20), r0);
    MemoryInline::FlatWrite8((r23 + 24), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r23 + 25), static_cast<uint8_t>(r30));
    r3 = MemoryInline::FlatRead8((r15 + 7916));
}

loc_8088039C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80880438;
    }
}

loc_808803A0:
{
}

loc_808803A4:
{
    r6 = (r3 + -8);
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(8))) {
        goto loc_80880410;
    }
}

loc_808803AC:
{
    r0 = (r6 + 7);
    r5 = r23;
    r0_rot_61 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_61 & 536870911);
    ctr = r0;
}

loc_808803C0:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(0))) {
        goto loc_80880410;
    }
}

loc_808803C4:
{
    guest_range_17 = MemoryInline::ResolveRangeHost((r25 + 40), 0, 1u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_17, 0u, (r25 + 40));
    r4 = (r4 + 8);
    guest_range_18 = MemoryInline::ResolveRangeHost((r5 + 27), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_18, 0u, (r5 + 27), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_17, 0u, (r25 + 40));
    MemoryInline::WriteResolved8(guest_range_18, 1u, (r5 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_17, 0u, (r25 + 40));
    MemoryInline::WriteResolved8(guest_range_18, 2u, (r5 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_17, 0u, (r25 + 40));
    MemoryInline::WriteResolved8(guest_range_18, 3u, (r5 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_17, 0u, (r25 + 40));
    MemoryInline::WriteResolved8(guest_range_18, 4u, (r5 + 31), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_17, 0u, (r25 + 40));
    MemoryInline::WriteResolved8(guest_range_18, 5u, (r5 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_17, 0u, (r25 + 40));
    MemoryInline::WriteResolved8(guest_range_18, 6u, (r5 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_17, 0u, (r25 + 40));
    MemoryInline::WriteResolved8(guest_range_18, 7u, (r5 + 34), static_cast<uint8_t>(r0));
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808803C4;
    }
}

loc_80880410:
{
    r0 = (r3 - r4);
    r5 = (r23 + r4);
    ctr = r0;
}

loc_80880420:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r3))) {
        goto loc_80880438;
    }
}

loc_80880424:
{
    r0 = MemoryInline::FlatRead8((r25 + 40));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8((r5 + 27), static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80880424;
    }
}

loc_80880438:
{
    MemoryInline::FlatWrite8((r15 + 8458), static_cast<uint8_t>(r31));
    r16 = (r16 + 1);
}

loc_80880440:
{
    r0 = (r16 & 255);
}

loc_80880448:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r20))) {
        goto loc_80880230;
    }
}

loc_8088044C:
{
    goto loc_8088126C;
}

loc_80880450:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r19), static_cast<int32_t>(4));
}

loc_80880454:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808809CC;
    }
}

loc_80880458:
{
    r0 = MemoryInline::FlatRead8((r28 + -13979));
    r3 = (r1 + 72);
    MemoryInline::FlatWriteRam8((r1 + 76), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 72), r27);
    r12 = MemoryInline::FlatRead32((r27 + 20));
    ctr = r12;
    ctx->lr = 0x80880474u;
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
    r6 = MemoryInline::FlatRead32((r24 + 8));
    r4 = r3;
    r5 = r17;
    r3 = (r1 + 76);
    r7 = 1;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CCA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x808E0000u;
    r12 = MemoryInline::FlatRead32((r1 + 1612));
    r0 = MemoryInline::FlatRead8((r4 + -13963));
    MemoryInline::FlatWriteRam8((r1 + 68), static_cast<uint8_t>(r0));
    r0 = r12;
    r19 = MemoryInline::FlatRead8((r1 + 76));
    MemoryInline::FlatWriteRam32((r1 + 64), r0);
    MemoryInline::FlatWrite32((r24 + 8), r3);
    r3 = (r1 + 64);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x808804BCu;
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
    r6 = MemoryInline::FlatRead32((r24 + 8));
    r4 = r3;
    r5 = r17;
    r3 = (r1 + 68);
    r7 = 1;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CCA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32((r1 + 1572));
    r0 = MemoryInline::FlatRead8((r25 + 30));
    MemoryInline::FlatWriteRam8((r1 + 60), static_cast<uint8_t>(r0));
    r0 = r12;
    r18 = MemoryInline::FlatRead8((r1 + 68));
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    MemoryInline::FlatWrite32((r24 + 8), r3);
    r3 = (r1 + 56);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x80880500u;
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
    r6 = MemoryInline::FlatRead32((r24 + 8));
    r4 = r3;
    r5 = r17;
    r3 = (r1 + 60);
    r7 = 1;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CCA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r19 * 28);
    MemoryInline::FlatWrite32((r24 + 8), r3);
    r6 = MemoryInline::FlatRead8((r15 + 7916));
    r5 = 0;
    r4 = MemoryInline::FlatRead8((r1 + 60));
    r3 = 0;
    r17 = (r15 + r0);
    r0 = MemoryInline::FlatRead8((r17 + 18));
}

loc_8088053C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r6))) {
        goto loc_80880550;
    }
}

loc_80880540:
{
    r0 = MemoryInline::FlatRead8((r17 + 19));
}

loc_80880548:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r6))) {
        goto loc_80880550;
    }
}

loc_8088054C:
{
    r3 = 1;
}

loc_80880550:
{
}

loc_80880554:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80880590;
    }
}

loc_80880558:
{
    r3 = MemoryInline::FlatRead32((r17 + 12));
    r6 = 1;
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r3 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_64 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_64 & -16);
    r3_addr_26 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_26);
}

loc_80880574:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80880584;
    }
}

loc_80880578:
{
}

loc_8088057C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_80880584;
    }
}

loc_80880580:
{
    r6 = 0;
}

loc_80880584:
{
}

loc_80880588:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80880590;
    }
}

loc_8088058C:
{
    r5 = 1;
}

loc_80880590:
{
}

loc_80880594:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_808805A0;
    }
}

loc_80880598:
{
}

loc_8088059C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_808806C8;
    }
}

loc_808805A0:
{
    r3 = MemoryInline::FlatRead8((r17 + 25));
    r0 = MemoryInline::FlatRead8((r15 + 2812));
}

loc_808805AC:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_808805BC;
    }
}

loc_808805B0:
{
    r0 = (r3 * 20);
    r3 = (r15 + r0);
    MemoryInline::FlatWrite8((r3 + 2832), static_cast<uint8_t>(r29));
}

loc_808805BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_808805C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808805D8;
    }
}

loc_808805C4:
{
    r3 = MemoryInline::FlatRead32((r17 + 12));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80874244u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r17 + 12));
    // inline leaf 0x80874300 (40 guest instruction(s))
}

loc_inl5_0x80874300:
{
    r6 = MemoryInline::FlatRead32((r3 + 360));
    r4 = MemoryInline::FlatRead32((r3 + 348));
    r5 = (r6 + 1);
    r0 = MemoryInline::FlatRead32((r3 + 356));
    r4_subfc_sub_2 = r4;
    r4 = (r5 - r4_subfc_sub_2);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r4_subfc_sub_2) ? 1u : 0u) << 29);
    r4_subfe_rb_2 = r4;
    r4_not_2 = ~(r4);
    r4_ca_2 = (xer >> 29) & 1u;
    r4 = (r4_not_2 + r4_subfe_rb_2);
    r4 = (r4 + r4_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r4_subfe_rb_2)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5 = (r5 & r4);
}

loc_inl5_0x80874320:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x80874324:
{
    r7 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_66 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r0 = (r0_rot_66 & -16);
    r4 = MemoryInline::FlatRead32((r3 + 368));
    r7_addr_2 = (r7 + r0);
    r0 = MemoryInline::FlatRead32(r7_addr_2);
    r0_rot_67 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_67 & -4);
    r4_addr_13 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_13);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_inl5_0x80874344:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x80874348:
{
    MemoryInline::FlatWrite32((r3 + 360), r5);
    r0_rot_68 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r0 = (r0_rot_68 & -16);
    r6 = 0;
    r5 = -1;
    r7_addr_3 = (r7 + r0);
    MemoryInline::FlatWrite32(r7_addr_3, r6);
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r4 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_69 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_69 & -16);
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32((r4 + 4), r6);
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r4 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_70 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_70 & -16);
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32((r4 + 8), r5);
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r4 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_71 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_71 & -16);
    r5 = MemoryInline::FlatRead32((r3 + 348));
    r3 = (r4 + r0);
    MemoryInline::FlatWrite32((r3 + 12), r5);
    goto loc_inl5_cont_80874300;
}

loc_inl5_return:
{
}

loc_inl5_cont_80874300:
{
    // end of inlined leaf 0x80874300
    goto loc_808805FC;
}

loc_808805D8:
{
    r3 = MemoryInline::FlatRead32((r17 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r4 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_74 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_74 & -16);
    r4_addr_16 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_16);
    r0 = (r4 + -3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r4 = (r4_rot_6 & 134217727);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80874C18u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_808805FC:
{
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    r4 = 0;
    MemoryInline::FlatWrite8((r17 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    MemoryInline::FlatWrite8((r17 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r15 + 8436));
    MemoryInline::FlatWrite32((r17 + 20), r0);
    MemoryInline::FlatWrite8((r17 + 24), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r17 + 25), static_cast<uint8_t>(r30));
    r3 = MemoryInline::FlatRead8((r15 + 7916));
}

loc_80880628:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_808806C4;
    }
}

loc_8088062C:
{
}

loc_80880630:
{
    r6 = (r3 + -8);
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(8))) {
        goto loc_8088069C;
    }
}

loc_80880638:
{
    r0 = (r6 + 7);
    r5 = r17;
    r0_rot_76 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_76 & 536870911);
    ctr = r0;
}

loc_8088064C:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(0))) {
        goto loc_8088069C;
    }
}

loc_80880650:
{
    guest_range_19 = MemoryInline::ResolveRangeHost((r25 + 41), 0, 1u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_19, 0u, (r25 + 41));
    r4 = (r4 + 8);
    guest_range_20 = MemoryInline::ResolveRangeHost((r5 + 27), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_20, 0u, (r5 + 27), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_19, 0u, (r25 + 41));
    MemoryInline::WriteResolved8(guest_range_20, 1u, (r5 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_19, 0u, (r25 + 41));
    MemoryInline::WriteResolved8(guest_range_20, 2u, (r5 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_19, 0u, (r25 + 41));
    MemoryInline::WriteResolved8(guest_range_20, 3u, (r5 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_19, 0u, (r25 + 41));
    MemoryInline::WriteResolved8(guest_range_20, 4u, (r5 + 31), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_19, 0u, (r25 + 41));
    MemoryInline::WriteResolved8(guest_range_20, 5u, (r5 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_19, 0u, (r25 + 41));
    MemoryInline::WriteResolved8(guest_range_20, 6u, (r5 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_19, 0u, (r25 + 41));
    MemoryInline::WriteResolved8(guest_range_20, 7u, (r5 + 34), static_cast<uint8_t>(r0));
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80880650;
    }
}

loc_8088069C:
{
    r0 = (r3 - r4);
    r5 = (r17 + r4);
    ctr = r0;
}

loc_808806AC:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r3))) {
        goto loc_808806C4;
    }
}

loc_808806B0:
{
    r0 = MemoryInline::FlatRead8((r25 + 41));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8((r5 + 27), static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808806B0;
    }
}

loc_808806C4:
{
    MemoryInline::FlatWrite8((r15 + 8458), static_cast<uint8_t>(r31));
}

loc_808806C8:
{
    r4 = MemoryInline::FlatRead8((r15 + 17277));
}

loc_808806D0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_808806E4;
    }
}

loc_808806D4:
{
    r3 = MemoryInline::FlatRead8((r17 + 18));
    r0 = MemoryInline::FlatRead8((r15 + 7916));
}

loc_808806E0:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8088126C;
    }
}

loc_808806E4:
{
}

loc_808806E8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80880708;
    }
}

loc_808806EC:
{
    r3 = MemoryInline::FlatRead32((r17 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r3 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_80 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_80 & -16);
    r3_addr_28 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_28);
}

loc_80880704:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_808808DC;
    }
}

loc_80880708:
{
    r0 = (r18 * 20);
    r4 = r16;
    r3 = (r15 + r0);
    MemoryInline::FlatWrite8((r3 + 2832), static_cast<uint8_t>(r31));
    r5 = MemoryInline::FlatRead32((r15 + 8436));
    r6 = MemoryInline::FlatRead32((r3 + 2828));
}

loc_80880724:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r16))) {
        goto loc_8088072C;
    }
}

loc_80880728:
{
    r4 = r5;
}

loc_8088072C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80880730:
{
    r3 = (r15 + r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8088076C;
    }
}

loc_80880738:
{
    r9 = MemoryInline::FlatRead32((r3 + 2816));
    r5 = (r1 + 396);
    r0 = MemoryInline::FlatRead32((r3 + 2820));
    r6 = 1;
    MemoryInline::FlatWriteRam32((r1 + 400), r0);
    r7 = 1;
    r8 = 1;
    MemoryInline::FlatWriteRam32((r1 + 396), r9);
    r0 = MemoryInline::FlatRead32((r3 + 2824));
    MemoryInline::FlatWriteRam32((r1 + 404), r0);
    r3 = MemoryInline::FlatRead32((r17 + 12));
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
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x808743A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80880810;
}

loc_8088076C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(1));
}

loc_80880770:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808807A8;
    }
}

loc_80880774:
{
    r9 = MemoryInline::FlatRead32((r3 + 2816));
    r5 = (r1 + 384);
    r0 = MemoryInline::FlatRead32((r3 + 2820));
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 388), r0);
    r7 = 1;
    r8 = 1;
    MemoryInline::FlatWriteRam32((r1 + 384), r9);
    r0 = MemoryInline::FlatRead32((r3 + 2824));
    MemoryInline::FlatWriteRam32((r1 + 392), r0);
    r3 = MemoryInline::FlatRead32((r17 + 12));
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
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x808743A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80880810;
}

loc_808807A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(2));
}

loc_808807AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808807E0;
    }
}

loc_808807B0:
{
    r8 = MemoryInline::FlatRead32((r3 + 2816));
    r5 = (r1 + 372);
    r0 = MemoryInline::FlatRead32((r3 + 2820));
    r6 = 1;
    MemoryInline::FlatWriteRam32((r1 + 376), r0);
    r7 = 1;
    MemoryInline::FlatWriteRam32((r1 + 372), r8);
    r0 = MemoryInline::FlatRead32((r3 + 2824));
    MemoryInline::FlatWriteRam32((r1 + 380), r0);
    r3 = MemoryInline::FlatRead32((r17 + 12));
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80874570u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80880810;
}

loc_808807E0:
{
    r8 = MemoryInline::FlatRead32((r3 + 2816));
    r4 = r16;
    r0 = MemoryInline::FlatRead32((r3 + 2820));
    r5 = (r1 + 360);
    MemoryInline::FlatWriteRam32((r1 + 364), r0);
    r6 = 0;
    r7 = 1;
    MemoryInline::FlatWriteRam32((r1 + 360), r8);
    r0 = MemoryInline::FlatRead32((r3 + 2824));
    MemoryInline::FlatWriteRam32((r1 + 368), r0);
    r3 = MemoryInline::FlatRead32((r17 + 12));
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80874570u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80880810:
{
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    r3 = 0;
    MemoryInline::FlatWrite8((r17 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    MemoryInline::FlatWrite8((r17 + 19), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r17 + 20), r16);
    MemoryInline::FlatWrite8((r17 + 24), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r17 + 25), static_cast<uint8_t>(r18));
    r4 = MemoryInline::FlatRead8((r15 + 7916));
}

loc_80880838:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_808808D4;
    }
}

loc_8088083C:
{
}

loc_80880840:
{
    r5 = (r4 + -8);
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(8))) {
        goto loc_808808AC;
    }
}

loc_80880848:
{
    r0 = (r5 + 7);
    r6 = r17;
    r0_rot_85 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_85 & 536870911);
    ctr = r0;
}

loc_8088085C:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(0))) {
        goto loc_808808AC;
    }
}

loc_80880860:
{
    guest_range_21 = MemoryInline::ResolveRangeHost((r25 + 42), 0, 1u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_21, 0u, (r25 + 42));
    r3 = (r3 + 8);
    guest_range_22 = MemoryInline::ResolveRangeHost((r6 + 27), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_22, 0u, (r6 + 27), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_21, 0u, (r25 + 42));
    MemoryInline::WriteResolved8(guest_range_22, 1u, (r6 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_21, 0u, (r25 + 42));
    MemoryInline::WriteResolved8(guest_range_22, 2u, (r6 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_21, 0u, (r25 + 42));
    MemoryInline::WriteResolved8(guest_range_22, 3u, (r6 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_21, 0u, (r25 + 42));
    MemoryInline::WriteResolved8(guest_range_22, 4u, (r6 + 31), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_21, 0u, (r25 + 42));
    MemoryInline::WriteResolved8(guest_range_22, 5u, (r6 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_21, 0u, (r25 + 42));
    MemoryInline::WriteResolved8(guest_range_22, 6u, (r6 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_21, 0u, (r25 + 42));
    MemoryInline::WriteResolved8(guest_range_22, 7u, (r6 + 34), static_cast<uint8_t>(r0));
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80880860;
    }
}

loc_808808AC:
{
    r0 = (r4 - r3);
    r5 = (r17 + r3);
    ctr = r0;
}

loc_808808BC:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r4))) {
        goto loc_808808D4;
    }
}

loc_808808C0:
{
    r0 = MemoryInline::FlatRead8((r25 + 42));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite8((r5 + 27), static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808808C0;
    }
}

loc_808808D4:
{
    MemoryInline::FlatWrite8((r15 + 8458), static_cast<uint8_t>(r31));
    goto loc_8088126C;
}

loc_808808DC:
{
    r3 = MemoryInline::FlatRead8((r17 + 25));
    r0 = MemoryInline::FlatRead8((r15 + 2812));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_808808E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_808808F8;
    }
}

loc_808808EC:
{
    r0 = (r3 * 20);
    r3 = (r15 + r0);
    MemoryInline::FlatWrite8((r3 + 2832), static_cast<uint8_t>(r29));
}

loc_808808F8:
{
    r3 = MemoryInline::FlatRead32((r17 + 12));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80874244u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    r3 = 0;
    MemoryInline::FlatWrite8((r17 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    MemoryInline::FlatWrite8((r17 + 19), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r17 + 20), r16);
    MemoryInline::FlatWrite8((r17 + 24), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r17 + 25), static_cast<uint8_t>(r30));
    r4 = MemoryInline::FlatRead8((r15 + 7916));
}

loc_80880928:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_808809C4;
    }
}

loc_8088092C:
{
}

loc_80880930:
{
    r5 = (r4 + -8);
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(8))) {
        goto loc_8088099C;
    }
}

loc_80880938:
{
    r0 = (r5 + 7);
    r6 = r17;
    r0_rot_81 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_81 & 536870911);
    ctr = r0;
}

loc_8088094C:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(0))) {
        goto loc_8088099C;
    }
}

loc_80880950:
{
    guest_range_23 = MemoryInline::ResolveRangeHost((r25 + 43), 0, 1u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_23, 0u, (r25 + 43));
    r3 = (r3 + 8);
    guest_range_24 = MemoryInline::ResolveRangeHost((r6 + 27), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_24, 0u, (r6 + 27), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_23, 0u, (r25 + 43));
    MemoryInline::WriteResolved8(guest_range_24, 1u, (r6 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_23, 0u, (r25 + 43));
    MemoryInline::WriteResolved8(guest_range_24, 2u, (r6 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_23, 0u, (r25 + 43));
    MemoryInline::WriteResolved8(guest_range_24, 3u, (r6 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_23, 0u, (r25 + 43));
    MemoryInline::WriteResolved8(guest_range_24, 4u, (r6 + 31), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_23, 0u, (r25 + 43));
    MemoryInline::WriteResolved8(guest_range_24, 5u, (r6 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_23, 0u, (r25 + 43));
    MemoryInline::WriteResolved8(guest_range_24, 6u, (r6 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_23, 0u, (r25 + 43));
    MemoryInline::WriteResolved8(guest_range_24, 7u, (r6 + 34), static_cast<uint8_t>(r0));
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80880950;
    }
}

loc_8088099C:
{
    r0 = (r4 - r3);
    r5 = (r17 + r3);
    ctr = r0;
}

loc_808809AC:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r4))) {
        goto loc_808809C4;
    }
}

loc_808809B0:
{
    r0 = MemoryInline::FlatRead8((r25 + 43));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite8((r5 + 27), static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808809B0;
    }
}

loc_808809C4:
{
    MemoryInline::FlatWrite8((r15 + 8458), static_cast<uint8_t>(r31));
    goto loc_8088126C;
}

loc_808809CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r19), static_cast<int32_t>(5));
}

loc_808809D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80880B0C;
    }
}

loc_808809D4:
{
    r0 = MemoryInline::FlatRead8((r28 + -13979));
    r3 = (r1 + 48);
    MemoryInline::FlatWriteRam8((r1 + 52), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 48), r27);
    r12 = MemoryInline::FlatRead32((r27 + 20));
    ctr = r12;
    ctx->lr = 0x808809F0u;
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
    r6 = MemoryInline::FlatRead32((r24 + 8));
    r4 = r3;
    r5 = r17;
    r3 = (r1 + 52);
    r7 = 1;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CCA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead8((r1 + 52));
    r0 = MemoryInline::FlatRead8((r15 + 2812));
    r4 = (r4 * 28);
    MemoryInline::FlatWrite32((r24 + 8), r3);
    r17 = (r15 + r4);
    r3 = MemoryInline::FlatRead8((r17 + 25));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80880A24:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80880A34;
    }
}

loc_80880A28:
{
    r0 = (r3 * 20);
    r3 = (r15 + r0);
    MemoryInline::FlatWrite8((r3 + 2832), static_cast<uint8_t>(r29));
}

loc_80880A34:
{
    r3 = MemoryInline::FlatRead32((r17 + 12));
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80874C18u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    r3 = 0;
    MemoryInline::FlatWrite8((r17 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    MemoryInline::FlatWrite8((r17 + 19), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r17 + 20), r16);
    MemoryInline::FlatWrite8((r17 + 24), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r17 + 25), static_cast<uint8_t>(r30));
    r4 = MemoryInline::FlatRead8((r15 + 7916));
}

loc_80880A68:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80880B04;
    }
}

loc_80880A6C:
{
}

loc_80880A70:
{
    r5 = (r4 + -8);
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(8))) {
        goto loc_80880ADC;
    }
}

loc_80880A78:
{
    r0 = (r5 + 7);
    r6 = r17;
    r0_rot_88 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_88 & 536870911);
    ctr = r0;
}

loc_80880A8C:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(0))) {
        goto loc_80880ADC;
    }
}

loc_80880A90:
{
    guest_range_25 = MemoryInline::ResolveRangeHost((r25 + 44), 0, 1u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_25, 0u, (r25 + 44));
    r3 = (r3 + 8);
    guest_range_26 = MemoryInline::ResolveRangeHost((r6 + 27), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_26, 0u, (r6 + 27), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_25, 0u, (r25 + 44));
    MemoryInline::WriteResolved8(guest_range_26, 1u, (r6 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_25, 0u, (r25 + 44));
    MemoryInline::WriteResolved8(guest_range_26, 2u, (r6 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_25, 0u, (r25 + 44));
    MemoryInline::WriteResolved8(guest_range_26, 3u, (r6 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_25, 0u, (r25 + 44));
    MemoryInline::WriteResolved8(guest_range_26, 4u, (r6 + 31), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_25, 0u, (r25 + 44));
    MemoryInline::WriteResolved8(guest_range_26, 5u, (r6 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_25, 0u, (r25 + 44));
    MemoryInline::WriteResolved8(guest_range_26, 6u, (r6 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_25, 0u, (r25 + 44));
    MemoryInline::WriteResolved8(guest_range_26, 7u, (r6 + 34), static_cast<uint8_t>(r0));
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80880A90;
    }
}

loc_80880ADC:
{
    r0 = (r4 - r3);
    r5 = (r17 + r3);
    ctr = r0;
}

loc_80880AEC:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r4))) {
        goto loc_80880B04;
    }
}

loc_80880AF0:
{
    r0 = MemoryInline::FlatRead8((r25 + 44));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite8((r5 + 27), static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80880AF0;
    }
}

loc_80880B04:
{
    MemoryInline::FlatWrite8((r15 + 8458), static_cast<uint8_t>(r31));
    goto loc_8088126C;
}

loc_80880B0C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r19), static_cast<int32_t>(6));
}

loc_80880B10:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8088126C;
    }
}

loc_80880B14:
{
    r0 = MemoryInline::FlatRead8((r28 + -13979));
    r3 = (r1 + 40);
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 40), r27);
    r12 = MemoryInline::FlatRead32((r27 + 20));
    ctr = r12;
    ctx->lr = 0x80880B30u;
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
    r6 = MemoryInline::FlatRead32((r24 + 8));
    r4 = r3;
    r5 = r17;
    r3 = (r1 + 44);
    r7 = 1;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CCA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32((r1 + 1572));
    r0 = MemoryInline::FlatRead8((r25 + 30));
    MemoryInline::FlatWriteRam8((r1 + 36), static_cast<uint8_t>(r0));
    r0 = r12;
    r19 = MemoryInline::FlatRead8((r1 + 44));
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    MemoryInline::FlatWrite32((r24 + 8), r3);
    r3 = (r1 + 32);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x80880B74u;
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
    r6 = MemoryInline::FlatRead32((r24 + 8));
    r4 = r3;
    r5 = r17;
    r3 = (r1 + 36);
    r7 = 1;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CCA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r1 + 36));
    MemoryInline::FlatWrite32((r24 + 8), r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80880B98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80880D14;
    }
}

loc_80880B9C:
{
    r0 = (r19 * 28);
    r3 = MemoryInline::FlatRead8((r15 + 7916));
    r17 = (r15 + r0);
    r0 = MemoryInline::FlatRead8((r17 + 18));
}

loc_80880BB0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_8088126C;
    }
}

loc_80880BB4:
{
    r0 = MemoryInline::FlatRead8((r17 + 19));
}

loc_80880BBC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_8088126C;
    }
}

loc_80880BC0:
{
    r3 = MemoryInline::FlatRead32((r17 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r4 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_91 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_91 & -16);
    r4_addr_19 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_19);
}

loc_80880BD8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(9))) {
        goto loc_80880CB0;
    }
}

loc_80880BDC:
{
    // inline leaf 0x80874300 (40 guest instruction(s))
}

loc_inl6_0x80874300:
{
    r6 = MemoryInline::FlatRead32((r3 + 360));
    r4 = MemoryInline::FlatRead32((r3 + 348));
    r5 = (r6 + 1);
    r0 = MemoryInline::FlatRead32((r3 + 356));
    r4_subfc_sub_5 = r4;
    r4 = (r5 - r4_subfc_sub_5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r4_subfc_sub_5) ? 1u : 0u) << 29);
    r4_subfe_rb_5 = r4;
    r4_not_5 = ~(r4);
    r4_ca_5 = (xer >> 29) & 1u;
    r4 = (r4_not_5 + r4_subfe_rb_5);
    r4 = (r4 + r4_ca_5);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_5)) + static_cast<uint64_t>(static_cast<uint32_t>(r4_subfe_rb_5)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_5)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5 = (r5 & r4);
}

loc_inl6_0x80874320:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x80874324:
{
    r7 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_92 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r0 = (r0_rot_92 & -16);
    r4 = MemoryInline::FlatRead32((r3 + 368));
    r7_addr_8 = (r7 + r0);
    r0 = MemoryInline::FlatRead32(r7_addr_8);
    r0_rot_93 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_93 & -4);
    r4_addr_20 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_20);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_inl6_0x80874344:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x80874348:
{
    MemoryInline::FlatWrite32((r3 + 360), r5);
    r0_rot_94 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r0 = (r0_rot_94 & -16);
    r6 = 0;
    r5 = -1;
    r7_addr_9 = (r7 + r0);
    MemoryInline::FlatWrite32(r7_addr_9, r6);
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r4 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_95 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_95 & -16);
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32((r4 + 4), r6);
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r4 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_96 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_96 & -16);
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32((r4 + 8), r5);
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r4 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_97 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_97 & -16);
    r5 = MemoryInline::FlatRead32((r3 + 348));
    r3 = (r4 + r0);
    MemoryInline::FlatWrite32((r3 + 12), r5);
    goto loc_inl6_cont_80874300;
}

loc_inl6_return:
{
}

loc_inl6_cont_80874300:
{
    // end of inlined leaf 0x80874300
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    r3 = 0;
    MemoryInline::FlatWrite8((r17 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    MemoryInline::FlatWrite8((r17 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r15 + 8436));
    MemoryInline::FlatWrite32((r17 + 20), r0);
    MemoryInline::FlatWrite8((r17 + 24), static_cast<uint8_t>(r29));
    r0 = MemoryInline::FlatRead8((r15 + 2812));
    MemoryInline::FlatWrite8((r17 + 25), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8((r15 + 7916));
}

loc_80880C10:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80880CAC;
    }
}

loc_80880C14:
{
}

loc_80880C18:
{
    r5 = (r4 + -8);
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(8))) {
        goto loc_80880C84;
    }
}

loc_80880C20:
{
    r0 = (r5 + 7);
    r6 = r17;
    r0_rot_100 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_100 & 536870911);
    ctr = r0;
}

loc_80880C34:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(0))) {
        goto loc_80880C84;
    }
}

loc_80880C38:
{
    guest_range_27 = MemoryInline::ResolveRangeHost((r25 + 45), 0, 1u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_27, 0u, (r25 + 45));
    r3 = (r3 + 8);
    guest_range_28 = MemoryInline::ResolveRangeHost((r6 + 27), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_28, 0u, (r6 + 27), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_27, 0u, (r25 + 45));
    MemoryInline::WriteResolved8(guest_range_28, 1u, (r6 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_27, 0u, (r25 + 45));
    MemoryInline::WriteResolved8(guest_range_28, 2u, (r6 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_27, 0u, (r25 + 45));
    MemoryInline::WriteResolved8(guest_range_28, 3u, (r6 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_27, 0u, (r25 + 45));
    MemoryInline::WriteResolved8(guest_range_28, 4u, (r6 + 31), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_27, 0u, (r25 + 45));
    MemoryInline::WriteResolved8(guest_range_28, 5u, (r6 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_27, 0u, (r25 + 45));
    MemoryInline::WriteResolved8(guest_range_28, 6u, (r6 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_27, 0u, (r25 + 45));
    MemoryInline::WriteResolved8(guest_range_28, 7u, (r6 + 34), static_cast<uint8_t>(r0));
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80880C38;
    }
}

loc_80880C84:
{
    r0 = (r4 - r3);
    r5 = (r17 + r3);
    ctr = r0;
}

loc_80880C94:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r4))) {
        goto loc_80880CAC;
    }
}

loc_80880C98:
{
    r0 = MemoryInline::FlatRead8((r25 + 45));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite8((r5 + 27), static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80880C98;
    }
}

loc_80880CAC:
{
    MemoryInline::FlatWrite8((r15 + 8458), static_cast<uint8_t>(r31));
}

loc_80880CB0:
{
    r0 = MemoryInline::FlatRead32((r17 + 20));
}

loc_80880CB8:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r16))) {
        goto loc_8088126C;
    }
}

loc_80880CBC:
{
    r3 = MemoryInline::FlatRead32((r17 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r3 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_104 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_104 & -16);
    r3_addr_30 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_30);
}

loc_80880CD4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8088126C;
    }
}

loc_80880CD8:
{
    r0 = MemoryInline::FlatRead8((r24 + 20));
    r5 = 0;
    goto loc_80880D04;
}

loc_80880CE4:
{
    r3 = (r5 & 255);
    r22_addr_9 = (r22 + r3);
    r3 = MemoryInline::FlatRead8(r22_addr_9);
    r4 = (r17 + r3);
    r3 = MemoryInline::FlatRead8((r4 + 27));
}

loc_80880CF8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80880D00;
    }
}

loc_80880CFC:
{
    MemoryInline::FlatWrite8((r4 + 27), static_cast<uint8_t>(r31));
}

loc_80880D00:
{
    r5 = (r5 + 1);
}

loc_80880D04:
{
    r3 = (r5 & 255);
}

loc_80880D0C:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_80880CE4;
    }
}

loc_80880D10:
{
    goto loc_8088126C;
}

loc_80880D14:
{
    r3 = 0x808E0000u;
    r12 = MemoryInline::FlatRead32((r1 + 1616));
    r0 = MemoryInline::FlatRead8((r3 + -13962));
    r3 = (r1 + 24);
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r0));
    r0 = r12;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x80880D3Cu;
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
    r6 = MemoryInline::FlatRead32((r24 + 8));
    r4 = r3;
    r5 = r17;
    r3 = (r1 + 28);
    r7 = 1;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CCA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r20 = MemoryInline::FlatRead8((r1 + 28));
    r0 = MemoryInline::FlatRead8((r15 + 2812));
    MemoryInline::FlatWrite32((r24 + 8), r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r20), static_cast<uint32_t>(r0));
}

loc_80880D64:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80881074;
    }
}

loc_80880D68:
{
    r12 = MemoryInline::FlatRead32((r1 + 1580));
    r3 = (r1 + 16);
    r0 = MemoryInline::FlatRead32((r25 + 20));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = r12;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x80880D8Cu;
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
    r6 = MemoryInline::FlatRead32((r24 + 8));
    r4 = r3;
    r5 = r17;
    r3 = (r1 + 20);
    r7 = 4;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052CCA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead8((r15 + 7916));
    MemoryInline::FlatWrite32((r24 + 8), r3);
    r0 = PPC_Divw(static_cast<int32_t>(r19), static_cast<int32_t>(r4));
    r17 = MemoryInline::FlatRead32((r1 + 20));
    r0 = (r0 * r4);
    r0 = (r19 - r0);
    r6 = (r0 & 255);
}

loc_80880DC4:
{
    r0 = (r6 + -1);
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(1))) {
        goto loc_80880DD0;
    }
}

loc_80880DCC:
{
    r0 = (r4 + -1);
}

loc_80880DD0:
{
    r7 = (r0 & 255);
    r3_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_15 & 1);
    goto loc_80881068;
}

loc_80880DDC:
{
    r5 = (r15 + r6);
    r0 = MemoryInline::FlatRead8((r5 + 8028));
}

loc_80880DE8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80881050;
    }
}

loc_80880DEC:
{
    r18_addr_2 = (r18 + r6);
    r3 = MemoryInline::FlatRead8(r18_addr_2);
    r0 = MemoryInline::FlatRead8((r24 + 20));
}

loc_80880DF8:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_8088126C;
    }
}

loc_80880DFC:
{
    r0 = (r19 * 28);
    r16 = (r15 + r0);
    r0 = MemoryInline::FlatRead8((r16 + 18));
}

loc_80880E0C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_8088126C;
    }
}

loc_80880E10:
{
    r0 = MemoryInline::FlatRead8((r16 + 19));
}

loc_80880E18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_8088126C;
    }
}

loc_80880E1C:
{
    r3 = MemoryInline::FlatRead32((r16 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r3 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_106 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_106 & -16);
    r3_addr_31 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_31);
}

loc_80880E34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80880E40;
    }
}

loc_80880E38:
{
}

loc_80880E3C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(9))) {
        goto loc_8088126C;
    }
}

loc_80880E40:
{
    r0 = MemoryInline::FlatRead32((r16 + 20));
}

loc_80880E48:
{
    if ((static_cast<uint32_t>(r17) != static_cast<uint32_t>(r0))) {
        goto loc_80880E58;
    }
}

loc_80880E4C:
{
    r0 = MemoryInline::FlatRead8((r16 + 25));
}

loc_80880E54:
{
    if ((static_cast<uint32_t>(r20) == static_cast<uint32_t>(r0))) {
        goto loc_8088126C;
    }
}

loc_80880E58:
{
    r3 = MemoryInline::FlatRead8((r16 + 25));
    r0 = MemoryInline::FlatRead8((r15 + 2812));
}

loc_80880E64:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_80880E74;
    }
}

loc_80880E68:
{
    r0 = (r3 * 20);
    r3 = (r15 + r0);
    MemoryInline::FlatWrite8((r3 + 2832), static_cast<uint8_t>(r29));
}

loc_80880E74:
{
    r0 = MemoryInline::FlatRead8((r15 + 2812));
}

loc_80880E7C:
{
    if ((static_cast<uint32_t>(r20) >= static_cast<uint32_t>(r0))) {
        goto loc_80880E8C;
    }
}

loc_80880E80:
{
    r0 = (r20 * 20);
    r3 = (r15 + r0);
    MemoryInline::FlatWrite8((r3 + 2832), static_cast<uint8_t>(r31));
}

loc_80880E8C:
{
    r0 = (r20 * 20);
    r3 = (r15 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 2828));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80880E9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80880ED8;
    }
}

loc_80880EA0:
{
    r9 = MemoryInline::FlatRead32((r3 + 2816));
    r4 = r17;
    r0 = MemoryInline::FlatRead32((r3 + 2820));
    r5 = (r1 + 348);
    MemoryInline::FlatWriteRam32((r1 + 352), r0);
    r6 = 1;
    r7 = 0;
    r8 = 0;
    MemoryInline::FlatWriteRam32((r1 + 348), r9);
    r0 = MemoryInline::FlatRead32((r3 + 2824));
    MemoryInline::FlatWriteRam32((r1 + 356), r0);
    r3 = MemoryInline::FlatRead32((r16 + 12));
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
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x808743A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80880F84;
}

loc_80880ED8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80880EDC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80880F18;
    }
}

loc_80880EE0:
{
    r9 = MemoryInline::FlatRead32((r3 + 2816));
    r4 = r17;
    r0 = MemoryInline::FlatRead32((r3 + 2820));
    r5 = (r1 + 336);
    MemoryInline::FlatWriteRam32((r1 + 340), r0);
    r6 = 0;
    r7 = 0;
    r8 = 0;
    MemoryInline::FlatWriteRam32((r1 + 336), r9);
    r0 = MemoryInline::FlatRead32((r3 + 2824));
    MemoryInline::FlatWriteRam32((r1 + 344), r0);
    r3 = MemoryInline::FlatRead32((r16 + 12));
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
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x808743A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80880F84;
}

loc_80880F18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80880F1C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80880F54;
    }
}

loc_80880F20:
{
    r8 = MemoryInline::FlatRead32((r3 + 2816));
    r4 = r17;
    r0 = MemoryInline::FlatRead32((r3 + 2820));
    r5 = (r1 + 324);
    MemoryInline::FlatWriteRam32((r1 + 328), r0);
    r6 = 1;
    r7 = 1;
    MemoryInline::FlatWriteRam32((r1 + 324), r8);
    r0 = MemoryInline::FlatRead32((r3 + 2824));
    MemoryInline::FlatWriteRam32((r1 + 332), r0);
    r3 = MemoryInline::FlatRead32((r16 + 12));
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80874570u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80880F84;
}

loc_80880F54:
{
    r8 = MemoryInline::FlatRead32((r3 + 2816));
    r4 = r17;
    r0 = MemoryInline::FlatRead32((r3 + 2820));
    r5 = (r1 + 312);
    MemoryInline::FlatWriteRam32((r1 + 316), r0);
    r6 = 0;
    r7 = 1;
    MemoryInline::FlatWriteRam32((r1 + 312), r8);
    r0 = MemoryInline::FlatRead32((r3 + 2824));
    MemoryInline::FlatWriteRam32((r1 + 320), r0);
    r3 = MemoryInline::FlatRead32((r16 + 12));
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80874570u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80880F84:
{
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    r3 = 0;
    MemoryInline::FlatWrite8((r16 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    MemoryInline::FlatWrite8((r16 + 19), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r16 + 20), r17);
    MemoryInline::FlatWrite8((r16 + 24), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r16 + 25), static_cast<uint8_t>(r20));
    r4 = MemoryInline::FlatRead8((r15 + 7916));
}

loc_80880FAC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80881048;
    }
}

loc_80880FB0:
{
}

loc_80880FB4:
{
    r5 = (r4 + -8);
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(8))) {
        goto loc_80881020;
    }
}

loc_80880FBC:
{
    r0 = (r5 + 7);
    r6 = r16;
    r0_rot_107 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_107 & 536870911);
    ctr = r0;
}

loc_80880FD0:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(0))) {
        goto loc_80881020;
    }
}

loc_80880FD4:
{
    guest_range_29 = MemoryInline::ResolveRangeHost((r25 + 46), 0, 1u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_29, 0u, (r25 + 46));
    r3 = (r3 + 8);
    guest_range_30 = MemoryInline::ResolveRangeHost((r6 + 27), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_30, 0u, (r6 + 27), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_29, 0u, (r25 + 46));
    MemoryInline::WriteResolved8(guest_range_30, 1u, (r6 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_29, 0u, (r25 + 46));
    MemoryInline::WriteResolved8(guest_range_30, 2u, (r6 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_29, 0u, (r25 + 46));
    MemoryInline::WriteResolved8(guest_range_30, 3u, (r6 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_29, 0u, (r25 + 46));
    MemoryInline::WriteResolved8(guest_range_30, 4u, (r6 + 31), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_29, 0u, (r25 + 46));
    MemoryInline::WriteResolved8(guest_range_30, 5u, (r6 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_29, 0u, (r25 + 46));
    MemoryInline::WriteResolved8(guest_range_30, 6u, (r6 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_29, 0u, (r25 + 46));
    MemoryInline::WriteResolved8(guest_range_30, 7u, (r6 + 34), static_cast<uint8_t>(r0));
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80880FD4;
    }
}

loc_80881020:
{
    r0 = (r4 - r3);
    r5 = (r16 + r3);
    ctr = r0;
}

loc_80881030:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r4))) {
        goto loc_80881048;
    }
}

loc_80881034:
{
    r0 = MemoryInline::FlatRead8((r25 + 46));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite8((r5 + 27), static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80881034;
    }
}

loc_80881048:
{
    MemoryInline::FlatWrite8((r15 + 8458), static_cast<uint8_t>(r31));
    goto loc_8088126C;
}

loc_80881050:
{
    r5 = (r6 + 1);
    r0 = (r5 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r0_rot_110 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_110 & 1);
    r0_not_3 = ~(r0);
    r0_ca_3 = (xer >> 29) & 1u;
    r0 = (r0_not_3 + r3);
    r0 = (r0 + r0_ca_3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_3)) + static_cast<uint64_t>(static_cast<uint32_t>(r3)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_3)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0 = (r5 & r0);
    r6 = (r0 & 255);
}

loc_80881068:
{
}

loc_8088106C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r7))) {
        goto loc_80880DDC;
    }
}

loc_80881070:
{
    goto loc_8088126C;
}

loc_80881074:
{
    r0 = MemoryInline::FlatRead32((r1 + 1620));
    r3 = 0x808E0000u;
    MemoryInline::FlatWriteRam32((r1 + 552), r0);
    r4 = 0x808E0000u;
    r0 = MemoryInline::FlatRead32((r1 + 1624));
    r5 = 0x808E0000u;
    f2.d = MemoryInline::FlatReadFloat32((r3 + -13960));
    r3 = (r1 + 556);
    f1.d = MemoryInline::FlatReadFloat32((r4 + -13956));
    r4 = r17;
    f0.d = MemoryInline::FlatReadFloat32((r5 + -13952));
    MemoryInline::FlatWriteRam32((r1 + 556), r0);
    r5 = MemoryInline::FlatRead32((r24 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 560), f2.d);
    r12 = MemoryInline::FlatRead32((r1 + 556));
    MemoryInline::FlatWriteRamFloat32((r1 + 568), f1.d);
    MemoryInline::FlatWriteRam32((r1 + 564), r0);
    MemoryInline::FlatWriteRamFloat32((r1 + 576), f0.d);
    MemoryInline::FlatWriteRam32((r1 + 572), r0);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x808810CCu;
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
    r12 = MemoryInline::FlatRead32((r1 + 564));
    r5 = r3;
    r3 = (r1 + 564);
    r4 = r17;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x808810E8u;
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
    r12 = MemoryInline::FlatRead32((r1 + 572));
    r5 = r3;
    r3 = (r1 + 572);
    r4 = r17;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80881104u;
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
    MemoryInline::FlatWrite32((r24 + 8), r3);
    r3 = (r1 + 300);
    r4 = (r1 + 552);
    // inline leaf 0x80881974 (7 guest instruction(s))
    f2.d = MemoryInline::FlatReadFloat32((r4 + 24));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80881974
    r0 = (r19 * 28);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 300));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 304));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 308));
    r16 = (r15 + r0);
    r3 = MemoryInline::FlatRead8((r15 + 7916));
    r0 = MemoryInline::FlatRead8((r16 + 18));
    MemoryInline::FlatWriteRamFloat32((r1 + 504), f2.d);
}

loc_80881138:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 508), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 512), f0.d);
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_8088126C;
    }
}

loc_80881144:
{
    r0 = MemoryInline::FlatRead8((r16 + 19));
}

loc_8088114C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_8088126C;
    }
}

loc_80881150:
{
    r3 = MemoryInline::FlatRead32((r16 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r4 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_111 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_111 & -16);
    r4_addr_24 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_24);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
}

loc_80881168:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8088126C;
    }
}

loc_8088116C:
{
    r7 = MemoryInline::FlatRead32((r1 + 504));
    r5 = (r1 + 288);
    r4 = MemoryInline::FlatRead32((r1 + 508));
    r6 = 1;
    r0 = MemoryInline::FlatRead32((r1 + 512));
    r8 = 0;
    MemoryInline::FlatWriteRam32((r1 + 288), r7);
    r7 = 0;
    MemoryInline::FlatWriteRam32((r1 + 292), r4);
    MemoryInline::FlatWriteRam32((r1 + 296), r0);
    r4 = MemoryInline::FlatRead32((r15 + 8436));
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
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x808743A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    r3 = 0;
    MemoryInline::FlatWrite8((r16 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r15 + 7916));
    MemoryInline::FlatWrite8((r16 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r15 + 8436));
    MemoryInline::FlatWrite32((r16 + 20), r0);
    MemoryInline::FlatWrite8((r16 + 24), static_cast<uint8_t>(r29));
    r0 = MemoryInline::FlatRead8((r15 + 2812));
    MemoryInline::FlatWrite8((r16 + 25), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8((r15 + 7916));
}

loc_808811CC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80881268;
    }
}

loc_808811D0:
{
}

loc_808811D4:
{
    r5 = (r4 + -8);
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(8))) {
        goto loc_80881240;
    }
}

loc_808811DC:
{
    r0 = (r5 + 7);
    r6 = r16;
    r0_rot_112 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_112 & 536870911);
    ctr = r0;
}

loc_808811F0:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(0))) {
        goto loc_80881240;
    }
}

loc_808811F4:
{
    guest_range_31 = MemoryInline::ResolveRangeHost((r25 + 47), 0, 1u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_31, 0u, (r25 + 47));
    r3 = (r3 + 8);
    guest_range_32 = MemoryInline::ResolveRangeHost((r6 + 27), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_32, 0u, (r6 + 27), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_31, 0u, (r25 + 47));
    MemoryInline::WriteResolved8(guest_range_32, 1u, (r6 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_31, 0u, (r25 + 47));
    MemoryInline::WriteResolved8(guest_range_32, 2u, (r6 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_31, 0u, (r25 + 47));
    MemoryInline::WriteResolved8(guest_range_32, 3u, (r6 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_31, 0u, (r25 + 47));
    MemoryInline::WriteResolved8(guest_range_32, 4u, (r6 + 31), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_31, 0u, (r25 + 47));
    MemoryInline::WriteResolved8(guest_range_32, 5u, (r6 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_31, 0u, (r25 + 47));
    MemoryInline::WriteResolved8(guest_range_32, 6u, (r6 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_31, 0u, (r25 + 47));
    MemoryInline::WriteResolved8(guest_range_32, 7u, (r6 + 34), static_cast<uint8_t>(r0));
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808811F4;
    }
}

loc_80881240:
{
    r0 = (r4 - r3);
    r5 = (r16 + r3);
    ctr = r0;
}

loc_80881250:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r4))) {
        goto loc_80881268;
    }
}

loc_80881254:
{
    r0 = MemoryInline::FlatRead8((r25 + 47));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite8((r5 + 27), static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80881254;
    }
}

loc_80881268:
{
    MemoryInline::FlatWrite8((r15 + 8458), static_cast<uint8_t>(r31));
}

loc_8088126C:
{
    r0 = MemoryInline::FlatRead8((r24 + 20));
    r4 = 0;
    goto loc_80881290;
}

loc_80881278:
{
    r3 = (r4 & 255);
    r4 = (r4 + 1);
    r22_addr_12 = (r22 + r3);
    r3 = MemoryInline::FlatRead8(r22_addr_12);
    r3_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_18 & -4);
    r3 = (r15 + r3);
    MemoryInline::FlatWrite32((r3 + 17188), r21);
}

loc_80881290:
{
    r3 = (r4 & 255);
}

loc_80881298:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_80881278;
    }
}

loc_8088129C:
{
    MemoryInline::FlatWrite8((r15 + 17261), static_cast<uint8_t>(r31));
}

loc_808812A0:
{
    r3 = MemoryInline::FlatRead8((r1 + 1568));
    r3 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r1 + 1568), static_cast<uint8_t>(r3));
}

loc_808812AC:
{
    r3 = MemoryInline::FlatRead8((r15 + 7916));
    r0 = MemoryInline::FlatRead8((r1 + 1568));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_808812B8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8087F920;
    }
}

loc_808812BC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_33 = MemoryInline::ResolveRangeHost((r1 + 1712), 0, 136u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_33, 112u, (r1 + 1824));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_33, 96u, (r1 + 1808));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_33, 80u, (r1 + 1792));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_33, 64u, (r1 + 1776));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_33, 48u, (r1 + 1760));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_33, 32u, (r1 + 1744));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_33, 16u, (r1 + 1728));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 1712);
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_33, 0u, (r1 + 1712));
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
    r0 = MemoryInline::ReadResolved32(guest_range_33, 132u, (r1 + 1844));
    ctx->lr = r0;
    r1 = (r1 + 1840);
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
// RECOMP_REGISTRATION base 0x8087E468 func_8087E468 preserves=false fpr_mask=0xFF000000
