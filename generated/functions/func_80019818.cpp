#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80019818(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfdx_800199A4_loc_0 = 0;
    uint32_t addr_lfdx_800199BC_loc_0 = 0;
    uint32_t addr_lfdx_800199E0_loc_0 = 0;
    uint32_t addr_lfdx_800199EC_loc_0 = 0;
    uint32_t addr_lfdx_80019A28_loc_0 = 0;
    uint32_t addr_lfdx_80019A38_loc_0 = 0;
    uint32_t addr_lfdx_80019A48_loc_0 = 0;
    uint32_t addr_lfdx_80019A5C_loc_0 = 0;
    uint32_t addr_lfdx_80019AAC_loc_0 = 0;
    uint32_t addr_lfdx_80019B3C_loc_0 = 0;
    uint32_t addr_lfdx_8001A240_loc_0 = 0;
    uint32_t addr_lfdx_8001A258_loc_0 = 0;
    uint32_t addr_lfdx_8001A270_loc_0 = 0;
    uint32_t addr_lfdx_8001A288_loc_0 = 0;
    uint32_t addr_lfdx_8001A2B8_loc_0 = 0;
    uint32_t addr_lfdx_8001A2C8_loc_0 = 0;
    uint32_t addr_lfdx_8001A2E0_loc_0 = 0;
    uint32_t addr_lfdx_8001A2F0_loc_0 = 0;
    uint32_t addr_lfdx_8001A340_loc_0 = 0;
    uint32_t addr_stfdx_8001A6D0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword10 = 0;
    uint32_t fctiwzword11 = 0;
    uint32_t fctiwzword12 = 0;
    uint32_t fctiwzword13 = 0;
    uint32_t fctiwzword14 = 0;
    uint32_t fctiwzword15 = 0;
    uint32_t fctiwzword16 = 0;
    uint32_t fctiwzword17 = 0;
    uint32_t fctiwzword18 = 0;
    uint32_t fctiwzword19 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword20 = 0;
    uint32_t fctiwzword21 = 0;
    uint32_t fctiwzword22 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t fctiwzword6 = 0;
    uint32_t fctiwzword7 = 0;
    uint32_t fctiwzword8 = 0;
    uint32_t fctiwzword9 = 0;
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
    uint32_t r10_addr_0 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r11_rot_4 = 0;
    uint32_t r11_rot_5 = 0;
    uint32_t r11_rot_6 = 0;
    uint32_t r14_rot_0 = 0;
    uint32_t r14_rot_1 = 0;
    uint32_t r14_rot_2 = 0;
    uint32_t r14_rot_3 = 0;
    uint32_t r14_rot_4 = 0;
    uint32_t r14_rot_5 = 0;
    uint32_t r14_rot_6 = 0;
    uint32_t r15_rot_0 = 0;
    uint32_t r15_rot_1 = 0;
    uint32_t r15_rot_2 = 0;
    uint32_t r15_rot_3 = 0;
    uint32_t r15_rot_4 = 0;
    uint32_t r15_rot_5 = 0;
    uint32_t r15_rot_6 = 0;
    uint32_t r15_rot_7 = 0;
    uint32_t r15_rot_8 = 0;
    uint32_t r18_rot_0 = 0;
    uint32_t r18_rot_1 = 0;
    uint32_t r18_rot_2 = 0;
    uint32_t r18_rot_3 = 0;
    uint32_t r18_rot_4 = 0;
    uint32_t r18_rot_5 = 0;
    uint32_t r20_rot_0 = 0;
    uint32_t r20_rot_1 = 0;
    uint32_t r20_rot_2 = 0;
    uint32_t r20_rot_3 = 0;
    uint32_t r20_rot_4 = 0;
    uint32_t r20_rot_5 = 0;
    uint32_t r20_rot_6 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_10 = 0;
    uint32_t r29_addr_11 = 0;
    uint32_t r29_addr_12 = 0;
    uint32_t r29_addr_13 = 0;
    uint32_t r29_addr_14 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r29_addr_4 = 0;
    uint32_t r29_addr_5 = 0;
    uint32_t r29_addr_6 = 0;
    uint32_t r29_addr_7 = 0;
    uint32_t r29_addr_8 = 0;
    uint32_t r29_addr_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
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
    uint32_t r3_rot_39 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_40 = 0;
    uint32_t r3_rot_41 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
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
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_rot_9 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint32_t r9_rot_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_10 = nullptr;
    uint8_t* guest_range_11 = nullptr;
    uint8_t* guest_range_12 = nullptr;
    uint8_t* guest_range_13 = nullptr;
    uint8_t* guest_range_14 = nullptr;
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
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
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

    goto loc_80019818;

loc_80019818:
{
    guest_range_9 = MemoryInline::ResolveRangeHost((r1 + -880), 0, 888u, false, true);
    MemoryInline::WriteResolved32(guest_range_9, 0u, (r1 + -880), r1);
    r1 = (r1 + -880);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_9, 884u, (r1 + 884), r0);
    r11 = (r1 + 880);
    // inline leaf 0x800214F8 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 0u, (r11 + -72), f23.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 8u, (r11 + -64), f24.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 16u, (r11 + -56), f25.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 24u, (r11 + -48), f26.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 32u, (r11 + -40), f27.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 40u, (r11 + -32), f28.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r11 + -24), f29.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 56u, (r11 + -16), f30.d);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r11 + -8), f31.d);
    // end of inlined leaf 0x800214F8
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 736u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_9, 736u, (r1 + 736), r14);
        MemoryInline::WriteResolved32(guest_range_9, 740u, (r1 + 740), r15);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 744u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_9, 744u, (r1 + 744), r16);
        MemoryInline::WriteResolved32(guest_range_9, 748u, (r1 + 748), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 752u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_9, 752u, (r1 + 752), r18);
        MemoryInline::WriteResolved32(guest_range_9, 756u, (r1 + 756), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 760u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_9, 760u, (r1 + 760), r20);
        MemoryInline::WriteResolved32(guest_range_9, 764u, (r1 + 764), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 768u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_9, 768u, (r1 + 768), r22);
        MemoryInline::WriteResolved32(guest_range_9, 772u, (r1 + 772), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 776u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_9, 776u, (r1 + 776), r24);
        MemoryInline::WriteResolved32(guest_range_9, 780u, (r1 + 780), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 784u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_9, 784u, (r1 + 784), r26);
        MemoryInline::WriteResolved32(guest_range_9, 788u, (r1 + 788), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 792u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_9, 792u, (r1 + 792), r28);
        MemoryInline::WriteResolved32(guest_range_9, 796u, (r1 + 796), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 800u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_9, 800u, (r1 + 800), r30);
        MemoryInline::WriteResolved32(guest_range_9, 804u, (r1 + 804), r31);
    }
    r9 = 715849728;
    r12 = 1127219200;
    r0 = (r5 + -3);
    r10 = 0x80240000u;
    r9 = (r9 + -21845);
    r11_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r11 = (r11_rot_0 & -4);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r9)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r10 = (r10 + 28248);
    r17 = r4;
    r10_addr_0 = (r10 + r11);
    r21 = MemoryInline::FlatRead32(r10_addr_0);
    MemoryInline::WriteResolved32(guest_range_9, 576u, (r1 + 576), r12);
    r16 = r3;
    r0 = (static_cast<int32_t>(r0) >> 2);
    MemoryInline::WriteResolved32(guest_range_9, 584u, (r1 + 584), r12);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    r22 = (r6 + -1);
    r10 = (r0 + r4);
    MemoryInline::WriteResolved32(guest_range_9, 8u, (r1 + 8), r7);
    if ((static_cast<int32_t>(r10) >= static_cast<int32_t>(0))) {
        goto loc_80019880;
    }
}

loc_8001987C:
{
    r10 = 0;
}

loc_80019880:
{
    r0 = (r10 + 1);
    r9 = (r22 + r21);
    r6 = (r0 * 24);
    r7 = (r10 - r22);
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -31512), 0, 64u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 56u, (r2 + -31456));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r19 = (r5 - r6);
    r0 = (r9 + 1);
    r4 = (r8 + r4);
    r5 = (r1 + 416);
    ctr = r0;
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(0))) {
        goto loc_800198E8;
    }
}

loc_800198B0:
{
}

loc_800198B4:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(0))) {
        goto loc_800198C0;
    }
}

loc_800198B8:
{
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 0u, (r2 + -31512));
    goto loc_800198D4;
}

loc_800198C0:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 580), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 576));
    f0.d = (f0.d - f1.d);
}

loc_800198D4:
{
    MemoryInline::FlatWriteFloat64(r5, f0.d);
    r5 = (r5 + 8);
    r4 = (r4 + 4);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800198B0;
    }
}

loc_800198E8:
{
    r0 = (r22 + 1);
    r5 = (r1 + 96);
    r25 = (r22 & -2147483648);
    r12 = (r1 + 416);
    r24 = (r0 & -2147483648);
    r9 = 0;
    r4 = 0x80000000u;
    goto loc_80019ACC;
}

loc_80019908:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r22), static_cast<int32_t>(0));
}

loc_8001990C:
{
    f6.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 0u, (r2 + -31512));
    r7 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80019AC0;
    }
}

loc_80019918:
{
    r0 = (r22 + 1);
    r14 = (r22 + -8);
}

loc_80019924:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_80019A7C;
    }
}

loc_80019928:
{
    r6 = 0;
    r11 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80019944;
    }
}

loc_80019934:
{
    r0 = (r4 + -2);
}

loc_8001993C:
{
    if ((static_cast<int32_t>(r22) > static_cast<int32_t>(r0))) {
        goto loc_80019944;
    }
}

loc_80019940:
{
    r11 = 1;
}

loc_80019944:
{
}

loc_80019948:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_80019970;
    }
}

loc_8001994C:
{
}

loc_80019950:
{
    r0 = 1;
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_80019964;
    }
}

loc_80019958:
{
}

loc_8001995C:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_80019964;
    }
}

loc_80019960:
{
    r0 = 0;
}

loc_80019964:
{
}

loc_80019968:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80019970;
    }
}

loc_8001996C:
{
    r6 = 1;
}

loc_80019970:
{
}

loc_80019974:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80019A7C;
    }
}

loc_80019978:
{
    r11 = (r14 + 8);
    r6 = r16;
    r11_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(29));
    r11 = (r11_rot_2 & 536870911);
    r0 = (r22 + r9);
    ctr = r11;
}

loc_80019990:
{
    if ((static_cast<int32_t>(r14) < static_cast<int32_t>(0))) {
        goto loc_80019A7C;
    }
}

loc_80019994:
{
    r11 = (r0 - r7);
    r14 = (r7 + 1);
    r15_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(3));
    r15 = (r15_rot_3 & -8);
    guest_range_10 = MemoryInline::ResolveRangeHost(r6, 0, 64u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 0u, r6);
    addr_lfdx_800199A4_loc_0 = (r12 + r15);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_800199A4_loc_0);
    r14 = (r0 - r14);
    r15_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r14), static_cast<uint32_t>(3));
    r15 = (r15_rot_4 & -8);
    r11 = (r7 + 2);
    f2.d = (f1.d * f0.d);
    r14 = (r0 - r11);
    addr_lfdx_800199BC_loc_0 = (r12 + r15);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_800199BC_loc_0);
    r15_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r14), static_cast<uint32_t>(3));
    r15 = (r15_rot_5 & -8);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 8u, (r6 + 8));
    r11 = (r7 + 3);
    f3.d = (f1.d * f0.d);
    r14 = (r0 - r11);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 16u, (r6 + 16));
    r14_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r14), static_cast<uint32_t>(3));
    r14 = (r14_rot_3 & -8);
    f6.d = (f6.d + f2.d);
    addr_lfdx_800199E0_loc_0 = (r12 + r15);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_800199E0_loc_0);
    f2.d = (f1.d * f0.d);
    r11 = (r7 + 4);
    addr_lfdx_800199EC_loc_0 = (r12 + r14);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_800199EC_loc_0);
    r11 = (r0 - r11);
    f6.d = (f6.d + f3.d);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 24u, (r6 + 24));
    r18_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(3));
    r18 = (r18_rot_3 & -8);
    f1.d = (f1.d * f0.d);
    r11 = (r7 + 5);
    r14 = (r7 + 6);
    f6.d = (f6.d + f2.d);
    r11 = (r0 - r11);
    r15_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(3));
    r15 = (r15_rot_6 & -8);
    r11 = (r7 + 7);
    f6.d = (f6.d + f1.d);
    r14 = (r0 - r14);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 32u, (r6 + 32));
    addr_lfdx_80019A28_loc_0 = (r12 + r18);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_80019A28_loc_0);
    r11 = (r0 - r11);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 40u, (r6 + 40));
    f5.d = (f2.d * f0.d);
    addr_lfdx_80019A38_loc_0 = (r12 + r15);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_80019A38_loc_0);
    r14_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r14), static_cast<uint32_t>(3));
    r14 = (r14_rot_4 & -8);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 48u, (r6 + 48));
    f4.d = (f1.d * f0.d);
    addr_lfdx_80019A48_loc_0 = (r12 + r14);
    f2.d = MemoryInline::FlatReadFloat64(addr_lfdx_80019A48_loc_0);
    f6.d = (f6.d + f5.d);
    r11_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(3));
    r11 = (r11_rot_4 & -8);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_10, 56u, (r6 + 56));
    f2.d = (f3.d * f2.d);
    addr_lfdx_80019A5C_loc_0 = (r12 + r11);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_80019A5C_loc_0);
    r7 = (r7 + 8);
    f6.d = (f6.d + f4.d);
    r6 = (r6 + 64);
    f0.d = (f1.d * f0.d);
    f6.d = (f6.d + f2.d);
    f6.d = (f6.d + f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80019994;
    }
}

loc_80019A7C:
{
    r0 = (r22 + 1);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r6 = (r6_rot_2 & -8);
    r0 = (r0 - r7);
    r11 = (r22 + r9);
    r6 = (r3 + r6);
    ctr = r0;
}

loc_80019A98:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(r22))) {
        goto loc_80019AC0;
    }
}

loc_80019A9C:
{
    r0 = (r11 - r7);
    f1.d = MemoryInline::FlatReadFloat64(r6);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & -8);
    r6 = (r6 + 8);
    addr_lfdx_80019AAC_loc_0 = (r12 + r0);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_80019AAC_loc_0);
    r7 = (r7 + 1);
    f0.d = (f1.d * f0.d);
    f6.d = (f6.d + f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80019A9C;
    }
}

loc_80019AC0:
{
    MemoryInline::FlatWriteFloat64(r5, f6.d);
    r5 = (r5 + 8);
    r9 = (r9 + 1);
}

loc_80019ACC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(r21));
}

loc_80019AD0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80019908;
    }
}

loc_80019AD4:
{
    r28 = (24 - r19);
    r5 = (0 - r21);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r4 = (r4_rot_2 & -4);
    r0 = (23 - r19);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(23) >= static_cast<uint32_t>(r19) ? 1u : 0u) << 29);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(3));
    r3 = (r3_rot_0 & -8);
    r26 = (r1 + 416);
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 8u, (r2 + -31504));
    r23 = r21;
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 56u, (r2 + -31456));
    r14 = (r5 & -2147483648);
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 16u, (r2 + -31496));
    r27 = (r8 + r4);
    MemoryInline::FlatWriteRam32((r1 + 720), r0);
    r26 = (r26 + r3);
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 32u, (r2 + -31480));
    r29 = (r1 + 16);
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 24u, (r2 + -31488));
    r15 = (r1 + 416);
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 40u, (r2 + -31472));
    r30 = 16777216;
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 48u, (r2 + -31464));
    r31 = 0x80000000u;
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 0u, (r2 + -31512));
}

loc_80019B30:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(3));
    r0 = (r0_rot_6 & -8);
    r3 = (r1 + 96);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_80019B3C:
{
    addr_lfdx_80019B3C_loc_0 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_80019B3C_loc_0);
    r4 = r23;
    r5 = 0;
    r6 = 0;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80019E48;
    }
}

loc_80019B50:
{
}

loc_80019B54:
{
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(8))) {
        goto loc_80019DD8;
    }
}

loc_80019B58:
{
}

loc_80019B5C:
{
    r0 = 0;
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(-1))) {
        goto loc_80019B68;
    }
}

loc_80019B64:
{
    r0 = 1;
}

loc_80019B68:
{
}

loc_80019B6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80019DD8;
    }
}

loc_80019B70:
{
    r0 = (r23 + -1);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(3));
    r7 = (r7_rot_2 & -8);
    r3 = (r1 + 96);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_7 & 536870911);
    r3 = (r3 + r7);
    ctr = r0;
}

loc_80019B8C:
{
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(8))) {
        goto loc_80019DD8;
    }
}

loc_80019B90:
{
    f0.d = (f24.d * f1.d);
    r0 = (r5 + 1);
    r9 = (r5 + 2);
    r8 = (r5 + 3);
    r7 = (r5 + 4);
    guest_range_11 = MemoryInline::ResolveRangeHost((r3 + -64), 0, 64u, true, false);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 56u, (r3 + -8));
    f0.d = PPC_Fctiwz(f0.d);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 48u, (r3 + -16));
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 40u, (r3 + -24));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 592), f0.d);
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r9 = (r9_rot_3 & -4);
    r10 = fctiwzword0;
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r8 = (r8_rot_3 & -4);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 32u, (r3 + -32));
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r7 = (r7_rot_4 & -4);
    r10 = (r10 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 588), r10);
    f5.d = MemoryInline::FlatReadFloat64((r1 + 584));
    f5.d = (f5.d - f25.d);
    f6.d = (f5.d + f4.d);
    f5.d = (f26.d * f5.d);
    f4.d = (f24.d * f6.d);
    f5.d = (f1.d - f5.d);
    f1.d = PPC_Fctiwz(f4.d);
    f4.d = PPC_Fctiwz(f5.d);
    fctiwzword1 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 608), f1.d);
    r10 = fctiwzword1;
    fctiwzword2 = PPC_FprLowWordInline(f4.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 600), f4.d);
    r10 = (r10 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 580), r10);
    r10 = fctiwzword2;
    f1.d = MemoryInline::FlatReadFloat64((r1 + 576));
    r29_addr_3 = (r29 + r6);
    MemoryInline::FlatWrite32(r29_addr_3, r10);
    f1.d = (f1.d - f25.d);
    f4.d = (f1.d + f3.d);
    f3.d = (f26.d * f1.d);
    f1.d = (f24.d * f4.d);
    f3.d = (f6.d - f3.d);
    f1.d = PPC_Fctiwz(f1.d);
    f3.d = PPC_Fctiwz(f3.d);
    fctiwzword3 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 624), f1.d);
    r10 = fctiwzword3;
    fctiwzword4 = PPC_FprLowWordInline(f3.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 616), f3.d);
    r10 = (r10 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 588), r10);
    r10 = fctiwzword4;
    f1.d = MemoryInline::FlatReadFloat64((r1 + 584));
    r29_addr_4 = (r29 + r0);
    MemoryInline::FlatWrite32(r29_addr_4, r10);
    f1.d = (f1.d - f25.d);
    f3.d = (f1.d + f2.d);
    f2.d = (f26.d * f1.d);
    f1.d = (f24.d * f3.d);
    f2.d = (f4.d - f2.d);
    f1.d = PPC_Fctiwz(f1.d);
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword5 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 640), f1.d);
    r0 = fctiwzword5;
    fctiwzword6 = PPC_FprLowWordInline(f2.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 632), f2.d);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 580), r0);
    r0 = fctiwzword6;
    f1.d = MemoryInline::FlatReadFloat64((r1 + 576));
    r29_addr_5 = (r29 + r9);
    MemoryInline::FlatWrite32(r29_addr_5, r0);
    f1.d = (f1.d - f25.d);
    f2.d = (f1.d + f0.d);
    f1.d = (f26.d * f1.d);
    f0.d = (f24.d * f2.d);
    f1.d = (f3.d - f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    f1.d = PPC_Fctiwz(f1.d);
    fctiwzword7 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 656), f0.d);
    r0 = fctiwzword7;
    fctiwzword8 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 648), f1.d);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 588), r0);
    r0 = fctiwzword8;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 584));
    r29_addr_6 = (r29 + r8);
    MemoryInline::FlatWrite32(r29_addr_6, r0);
    f1.d = (f0.d - f25.d);
    f0.d = (f26.d * f1.d);
    f0.d = (f2.d - f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword9 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 664), f0.d);
    r0 = fctiwzword9;
    r29_addr_7 = (r29 + r7);
    MemoryInline::FlatWrite32(r29_addr_7, r0);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 24u, (r3 + -40));
    r8 = (r5 + 5);
    r0 = (r5 + 7);
    r7 = (r5 + 6);
    f5.d = (f1.d + f0.d);
    r9_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r9 = (r9_rot_4 & -4);
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r8 = (r8_rot_4 & -4);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 16u, (r3 + -48));
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 8u, (r3 + -56));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    f3.d = (f24.d * f5.d);
    r3_addr_3 = (r3 + -64);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_11, 0u, r3_addr_3);
    r3 = r3_addr_3;
    r5 = (r5 + 8);
    r6 = (r6 + 32);
    r4 = (r4 + -8);
    f3.d = PPC_Fctiwz(f3.d);
    fctiwzword10 = PPC_FprLowWordInline(f3.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 672), f3.d);
    r7 = fctiwzword10;
    r7 = (r7 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 580), r7);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 576));
    f3.d = (f3.d - f25.d);
    f4.d = (f3.d + f2.d);
    f3.d = (f26.d * f3.d);
    f2.d = (f24.d * f4.d);
    f3.d = (f5.d - f3.d);
    f2.d = PPC_Fctiwz(f2.d);
    f3.d = PPC_Fctiwz(f3.d);
    fctiwzword11 = PPC_FprLowWordInline(f2.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 688), f2.d);
    r7 = fctiwzword11;
    fctiwzword12 = PPC_FprLowWordInline(f3.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 680), f3.d);
    r7 = (r7 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 588), r7);
    r7 = fctiwzword12;
    f2.d = MemoryInline::FlatReadFloat64((r1 + 584));
    r29_addr_8 = (r29 + r9);
    MemoryInline::FlatWrite32(r29_addr_8, r7);
    f2.d = (f2.d - f25.d);
    f3.d = (f2.d + f1.d);
    f2.d = (f26.d * f2.d);
    f1.d = (f24.d * f3.d);
    f2.d = (f4.d - f2.d);
    f1.d = PPC_Fctiwz(f1.d);
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword13 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 704), f1.d);
    r7 = fctiwzword13;
    fctiwzword14 = PPC_FprLowWordInline(f2.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 696), f2.d);
    r7 = (r7 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 580), r7);
    r7 = fctiwzword14;
    f1.d = MemoryInline::FlatReadFloat64((r1 + 576));
    r29_addr_9 = (r29 + r8);
    MemoryInline::FlatWrite32(r29_addr_9, r7);
    f1.d = (f1.d - f25.d);
    f2.d = (f26.d * f1.d);
    f1.d = (f1.d + f0.d);
    f0.d = (f3.d - f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword15 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 712), f0.d);
    r7 = fctiwzword15;
    r29_addr_10 = (r29 + r0);
    MemoryInline::FlatWrite32(r29_addr_10, r7);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80019B90;
    }
}

loc_80019DD8:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & -4);
    r5 = (r1 + 16);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_12 & -8);
    r6 = (r1 + 96);
    r5 = (r5 + r3);
    r6 = (r6 + r0);
    ctr = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80019DF8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80019E48;
    }
}

loc_80019DFC:
{
    f2.d = (f24.d * f1.d);
    r6_addr_3 = (r6 + -8);
    f0.d = MemoryInline::FlatReadFloat64(r6_addr_3);
    r6 = r6_addr_3;
    r4 = (r4 + -1);
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword16 = PPC_FprLowWordInline(f2.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 712), f2.d);
    r0 = fctiwzword16;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 588), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 584));
    f3.d = (f2.d - f25.d);
    f2.d = (f26.d * f3.d);
    f2.d = (f1.d - f2.d);
    f1.d = (f3.d + f0.d);
    f0.d = PPC_Fctiwz(f2.d);
    fctiwzword17 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 704), f0.d);
    r0 = fctiwzword17;
    MemoryInline::FlatWrite32(r5, r0);
    r5 = (r5 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80019DFC;
    }
}

loc_80019E48:
{
    r3 = r19;
    ctx->lr = 0x80019E50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001B1E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f23.d = f1.d;
    f1.d = (f27.d * f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001B658u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = (f28.d * f1.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r19), static_cast<int32_t>(0));
}

loc_80019E64:
{
    r18 = 0;
    f23.d = (f23.d - f0.d);
    f0.d = PPC_Fctiwz(f23.d);
    fctiwzword18 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 712), f0.d);
    r20 = fctiwzword18;
    r0 = (r20 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 580), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 576));
    f0.d = (f0.d - f25.d);
    f23.d = (f23.d - f0.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80019EBC;
    }
}

loc_80019E90:
{
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(2));
    r0 = (r0_rot_14 & -4);
    r4 = (r29 + r0);
    r3 = MemoryInline::FlatRead32((r4 + -4));
    r5 = PPC_Sraw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r28));
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r28));
    r3 = (r3 - r0);
    r0 = MemoryInline::FlatRead32((r1 + 720));
    MemoryInline::FlatWrite32((r4 + -4), r3);
    r20 = (r20 + r5);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(r0) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r18 = PPC_Sraw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    goto loc_80019EE4;
}

loc_80019EBC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80019ED4;
    }
}

loc_80019EC0:
{
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & -4);
    r3 = (r29 + r0);
    r0 = MemoryInline::FlatRead32((r3 + -4));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(23) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r18 = (static_cast<int32_t>(r0) >> 23);
    goto loc_80019EE4;
}

loc_80019ED4:
{
    SetCRFloatResident(cr, 0, f23.d, f29.d);
}

loc_80019ED8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80019EE4;
    }
}

loc_80019EE0:
{
    r18 = 2;
}

loc_80019EE4:
{
}

loc_80019EE8:
{
    if ((static_cast<int32_t>(r18) <= static_cast<int32_t>(0))) {
        goto loc_80019FA0;
    }
}

loc_80019EEC:
{
    r5 = (r1 + 16);
    r4 = (r30 + -1);
    r0 = 0;
    ctr = r23;
}

loc_80019F00:
{
    r20 = (r20 + 1);
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(0))) {
        goto loc_80019F3C;
    }
}

loc_80019F08:
{
}

loc_80019F0C:
{
    r3 = MemoryInline::FlatRead32(r5);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80019F2C;
    }
}

loc_80019F14:
{
}

loc_80019F18:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80019F34;
    }
}

loc_80019F1C:
{
    r0 = (r30 - r3);
    MemoryInline::FlatWrite32(r5, r0);
    r0 = 1;
    goto loc_80019F34;
}

loc_80019F2C:
{
    r3 = (r4 - r3);
    MemoryInline::FlatWrite32(r5, r3);
}

loc_80019F34:
{
    r5 = (r5 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80019F08;
    }
}

loc_80019F3C:
{
}

loc_80019F40:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(1))) {
        goto loc_80019F50;
    }
}

loc_80019F44:
{
}

loc_80019F48:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(2))) {
        goto loc_80019F68;
    }
}

loc_80019F4C:
{
    goto loc_80019F7C;
}

loc_80019F50:
{
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(2));
    r3 = (r3_rot_5 & -4);
    r4 = (r29 + r3);
    r3 = MemoryInline::FlatRead32((r4 + -4));
    r3 = (r3 & 8388607);
    MemoryInline::FlatWrite32((r4 + -4), r3);
    goto loc_80019F7C;
}

loc_80019F68:
{
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(2));
    r3 = (r3_rot_4 & -4);
    r4 = (r29 + r3);
    r3 = MemoryInline::FlatRead32((r4 + -4));
    r3 = (r3 & 4194303);
    MemoryInline::FlatWrite32((r4 + -4), r3);
}

loc_80019F7C:
{
}

loc_80019F80:
{
    if ((static_cast<int32_t>(r18) != static_cast<int32_t>(2))) {
        goto loc_80019FA0;
    }
}

loc_80019F84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80019F88:
{
    f23.d = (f30.d - f23.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80019FA0;
    }
}

loc_80019F90:
{
    f1.d = f30.d;
    r3 = r19;
    ctx->lr = 0x80019F9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001B1E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f23.d = (f23.d - f1.d);
}

loc_80019FA0:
{
    SetCRFloatResident(cr, 0, f31.d, f23.d);
}

loc_80019FA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001A378;
    }
}

loc_80019FA8:
{
    r10 = (r23 + -1);
    r9 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r10), static_cast<int32_t>(r21));
}

loc_80019FB4:
{
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8001A138;
    }
}

loc_80019FB8:
{
    r7 = (r10 - r21);
    r0 = (r21 + 8);
    r8 = (r7 + 1);
}

loc_80019FC8:
{
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(8))) {
        goto loc_8001A104;
    }
}

loc_80019FCC:
{
    r3 = 0;
    r4 = 0;
    r5 = 0;
    r6 = 0;
    r12 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80019FF4;
    }
}

loc_80019FE4:
{
    r11 = (r31 + 1);
}

loc_80019FEC:
{
    if ((static_cast<int32_t>(r21) < static_cast<int32_t>(r11))) {
        goto loc_80019FF4;
    }
}

loc_80019FF0:
{
    r12 = 1;
}

loc_80019FF4:
{
}

loc_80019FF8:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_8001A010;
    }
}

loc_80019FFC:
{
    r12 = (r23 + -1);
    r11 = (r31 + 1);
}

loc_8001A008:
{
    if ((static_cast<int32_t>(r12) < static_cast<int32_t>(r11))) {
        goto loc_8001A010;
    }
}

loc_8001A00C:
{
    r6 = 1;
}

loc_8001A010:
{
}

loc_8001A014:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8001A028;
    }
}

loc_8001A018:
{
    r6 = (r21 + -2147483648);
}

loc_8001A020:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(0))) {
        goto loc_8001A028;
    }
}

loc_8001A024:
{
    r5 = 1;
}

loc_8001A028:
{
}

loc_8001A02C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8001A060;
    }
}

loc_8001A030:
{
    r5 = (r23 + -1);
    r6 = 1;
    r11 = (r5 & -2147483648);
}

loc_8001A040:
{
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(r14))) {
        goto loc_8001A054;
    }
}

loc_8001A044:
{
    r5 = (r7 & -2147483648);
}

loc_8001A04C:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(r5))) {
        goto loc_8001A054;
    }
}

loc_8001A050:
{
    r6 = 0;
}

loc_8001A054:
{
}

loc_8001A058:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8001A060;
    }
}

loc_8001A05C:
{
    r4 = 1;
}

loc_8001A060:
{
}

loc_8001A064:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8001A08C;
    }
}

loc_8001A068:
{
    r4 = (r7 & -2147483648);
}

loc_8001A06C:
{
    r5 = 1;
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8001A080;
    }
}

loc_8001A074:
{
    r4 = (r8 & -2147483648);
}

loc_8001A078:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8001A080;
    }
}

loc_8001A07C:
{
    r5 = 0;
}

loc_8001A080:
{
}

loc_8001A084:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8001A08C;
    }
}

loc_8001A088:
{
    r3 = 1;
}

loc_8001A08C:
{
}

loc_8001A090:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8001A104;
    }
}

loc_8001A094:
{
    r4 = (r10 + 8);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r5 = (r5_rot_2 & -4);
    r4 = (r4 - r0);
    r3 = (r1 + 16);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
    r4 = (r4_rot_4 & 536870911);
    r3 = (r3 + r5);
    ctr = r4;
}

loc_8001A0B4:
{
    if ((static_cast<int32_t>(r10) < static_cast<int32_t>(r0))) {
        goto loc_8001A104;
    }
}

loc_8001A0B8:
{
    guest_range_12 = MemoryInline::ResolveRangeHost((r3 + -28), 0, 32u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_12, 28u, r3);
    r10 = (r10 + -8);
    r0 = MemoryInline::ReadResolved32(guest_range_12, 24u, (r3 + -4));
    r9 = (r9 | r4);
    r4 = MemoryInline::ReadResolved32(guest_range_12, 20u, (r3 + -8));
    r9 = (r9 | r0);
    r0 = MemoryInline::ReadResolved32(guest_range_12, 16u, (r3 + -12));
    r9 = (r9 | r4);
    r4 = MemoryInline::ReadResolved32(guest_range_12, 12u, (r3 + -16));
    r9 = (r9 | r0);
    r0 = MemoryInline::ReadResolved32(guest_range_12, 8u, (r3 + -20));
    r9 = (r9 | r4);
    r4 = MemoryInline::ReadResolved32(guest_range_12, 4u, (r3 + -24));
    r9 = (r9 | r0);
    r0 = MemoryInline::ReadResolved32(guest_range_12, 0u, (r3 + -28));
    r9 = (r9 | r4);
    r3 = (r3 + -32);
    r9 = (r9 | r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8001A0B8;
    }
}

loc_8001A104:
{
    r0 = (r10 + 1);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r3 = (r3_rot_8 & -4);
    r4 = (r1 + 16);
    r0 = (r0 - r21);
    r4 = (r4 + r3);
    ctr = r0;
}

loc_8001A120:
{
    if ((static_cast<int32_t>(r10) < static_cast<int32_t>(r21))) {
        goto loc_8001A138;
    }
}

loc_8001A124:
{
    r0 = MemoryInline::FlatRead32(r4);
    r4 = (r4 + -4);
    r10 = (r10 + -1);
    r9 = (r9 | r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8001A124;
    }
}

loc_8001A138:
{
}

loc_8001A13C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8001A378;
    }
}

loc_8001A140:
{
    r18 = 1;
    goto loc_8001A14C;
}

loc_8001A148:
{
    r18 = (r18 + 1);
}

loc_8001A14C:
{
    r0 = (r21 - r18);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_18 & -4);
    r29_addr_14 = (r29 + r0);
    r0 = MemoryInline::FlatRead32(r29_addr_14);
}

loc_8001A15C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8001A148;
    }
}

loc_8001A160:
{
    r12 = (r23 + 1);
    r7 = (r1 + 96);
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(3));
    r3 = (r3_rot_10 & -8);
    r8 = (r23 + r18);
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r0 = (r0_rot_19 & -4);
    r5 = (r27 + r0);
    r6 = (r26 + r3);
    r7 = (r7 + r3);
    goto loc_8001A368;
}

loc_8001A184:
{
    r0 = MemoryInline::FlatRead32(r5);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r22), static_cast<int32_t>(0));
}

loc_8001A18C:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -31512));
    r11 = 0;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 588), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 584));
    f1.d = (f1.d - f25.d);
    MemoryInline::FlatWriteFloat64(r6, f1.d);
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8001A354;
    }
}

loc_8001A1AC:
{
    r0 = (r22 + 1);
    r3 = (r22 + -8);
}

loc_8001A1B8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_8001A310;
    }
}

loc_8001A1BC:
{
    r4 = 0;
    r9 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8001A1D8;
    }
}

loc_8001A1C8:
{
    r0 = (r31 + -2);
}

loc_8001A1D0:
{
    if ((static_cast<int32_t>(r22) > static_cast<int32_t>(r0))) {
        goto loc_8001A1D8;
    }
}

loc_8001A1D4:
{
    r9 = 1;
}

loc_8001A1D8:
{
}

loc_8001A1DC:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_8001A204;
    }
}

loc_8001A1E0:
{
}

loc_8001A1E4:
{
    r0 = 1;
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_8001A1F8;
    }
}

loc_8001A1EC:
{
}

loc_8001A1F0:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_8001A1F8;
    }
}

loc_8001A1F4:
{
    r0 = 0;
}

loc_8001A1F8:
{
}

loc_8001A1FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8001A204;
    }
}

loc_8001A200:
{
    r4 = 1;
}

loc_8001A204:
{
}

loc_8001A208:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8001A310;
    }
}

loc_8001A20C:
{
    r0 = (r3 + 8);
    r9 = r16;
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_21 & 536870911);
    r10 = (r22 + r12);
    ctr = r0;
}

loc_8001A224:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_8001A310;
    }
}

loc_8001A228:
{
    r0 = (r10 - r11);
    r4 = (r11 + 1);
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_23 & -8);
    r3 = (r11 + 2);
    guest_range_13 = MemoryInline::ResolveRangeHost(r9, 0, 64u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_13, 0u, r9);
    r3 = (r10 - r3);
    addr_lfdx_8001A240_loc_0 = (r15 + r0);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_8001A240_loc_0);
    r4 = (r10 - r4);
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_24 & -8);
    r20 = (r11 + 7);
    f3.d = (f2.d * f1.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_13, 8u, (r9 + 8));
    addr_lfdx_8001A258_loc_0 = (r15 + r0);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_8001A258_loc_0);
    r4 = (r11 + 3);
    r3_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_13 & -8);
    r20 = (r10 - r20);
    f4.d = (f2.d * f1.d);
    r0 = (r10 - r4);
    addr_lfdx_8001A270_loc_0 = (r15 + r3);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_8001A270_loc_0);
    r4 = (r11 + 4);
    f0.d = (f0.d + f3.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_13, 16u, (r9 + 16));
    f3.d = (f2.d * f1.d);
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_25 & -8);
    addr_lfdx_8001A288_loc_0 = (r15 + r0);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_8001A288_loc_0);
    r4 = (r10 - r4);
    f0.d = (f0.d + f4.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_13, 24u, (r9 + 24));
    r3 = (r11 + 5);
    r0 = (r11 + 6);
    f0.d = (f0.d + f3.d);
    r3 = (r10 - r3);
    f2.d = (f2.d * f1.d);
    r4_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r4 = (r4_rot_9 & -8);
    r0 = (r10 - r0);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_13, 32u, (r9 + 32));
    addr_lfdx_8001A2B8_loc_0 = (r15 + r4);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_8001A2B8_loc_0);
    r3_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_14 & -8);
    f6.d = (f3.d * f1.d);
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_26 & -8);
    addr_lfdx_8001A2C8_loc_0 = (r15 + r3);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_8001A2C8_loc_0);
    r20_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(3));
    r20 = (r20_rot_4 & -8);
    f0.d = (f0.d + f2.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_13, 40u, (r9 + 40));
    f5.d = (f2.d * f1.d);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_13, 48u, (r9 + 48));
    addr_lfdx_8001A2E0_loc_0 = (r15 + r0);
    f3.d = MemoryInline::FlatReadFloat64(addr_lfdx_8001A2E0_loc_0);
    r11 = (r11 + 8);
    f0.d = (f0.d + f6.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_13, 56u, (r9 + 56));
    addr_lfdx_8001A2F0_loc_0 = (r15 + r20);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_8001A2F0_loc_0);
    f3.d = (f4.d * f3.d);
    r9 = (r9 + 64);
    f0.d = (f0.d + f5.d);
    f1.d = (f2.d * f1.d);
    f0.d = (f0.d + f3.d);
    f0.d = (f0.d + f1.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8001A228;
    }
}

loc_8001A310:
{
    r4 = (r22 + 1);
    r3_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(3));
    r3 = (r3_rot_16 & -8);
    r4 = (r4 - r11);
    r0 = (r22 + r12);
    r3 = (r16 + r3);
    ctr = r4;
}

loc_8001A32C:
{
    if ((static_cast<int32_t>(r11) > static_cast<int32_t>(r22))) {
        goto loc_8001A354;
    }
}

loc_8001A330:
{
    r4 = (r0 - r11);
    f2.d = MemoryInline::FlatReadFloat64(r3);
    r4_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r4 = (r4_rot_12 & -8);
    r3 = (r3 + 8);
    addr_lfdx_8001A340_loc_0 = (r15 + r4);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_8001A340_loc_0);
    r11 = (r11 + 1);
    f1.d = (f2.d * f1.d);
    f0.d = (f0.d + f1.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8001A330;
    }
}

loc_8001A354:
{
    MemoryInline::FlatWriteFloat64(r7, f0.d);
    r5 = (r5 + 4);
    r6 = (r6 + 8);
    r7 = (r7 + 8);
    r12 = (r12 + 1);
}

loc_8001A368:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(r8));
}

loc_8001A36C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8001A184;
    }
}

loc_8001A370:
{
    r23 = (r23 + r18);
    goto loc_80019B30;
}

loc_8001A378:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -31512));
    SetCRFloatResident(cr, 0, f0.d, f23.d);
}

loc_8001A380:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001A3B8;
    }
}

loc_8001A384:
{
    r23 = (r23 + -1);
    r3 = (r1 + 16);
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(2));
    r0 = (r0_rot_29 & -4);
    r19 = (r19 + -24);
    r3 = (r3 + r0);
    goto loc_8001A3A8;
}

loc_8001A39C:
{
    r3 = (r3 + -4);
    r23 = (r23 + -1);
    r19 = (r19 + -24);
}

loc_8001A3A8:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8001A3B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001A39C;
    }
}

loc_8001A3B4:
{
    goto loc_8001A454;
}

loc_8001A3B8:
{
    f1.d = f23.d;
    r3 = (0 - r19);
    ctx->lr = 0x8001A3C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001B1E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f3.d = MemoryInline::FlatReadFloat64((r2 + -31496));
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_8001A3CC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001A43C;
    }
}

loc_8001A3D4:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -31504));
    r5_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(2));
    r5 = (r5_rot_6 & -4);
    r23 = (r23 + 1);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31456));
    f0.d = (f0.d * f1.d);
    r4 = (r1 + 16);
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(2));
    r0 = (r0_rot_30 & -4);
    r19 = (r19 + 24);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword19 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 712), f0.d);
    r3 = fctiwzword19;
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 580), r3);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 576));
    f0.d = (f0.d - f2.d);
    f2.d = (f3.d * f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    f1.d = (f1.d - f2.d);
    fctiwzword20 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 696), f0.d);
    r3 = fctiwzword20;
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword21 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 704), f0.d);
    r6 = fctiwzword21;
    r4_addr_1 = (r4 + r5);
    MemoryInline::FlatWrite32(r4_addr_1, r6);
    r4_addr_2 = (r4 + r0);
    MemoryInline::FlatWrite32(r4_addr_2, r3);
    goto loc_8001A454;
}

loc_8001A43C:
{
    f0.d = PPC_Fctiwz(f1.d);
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(2));
    r0 = (r0_rot_31 & -4);
    r3 = (r1 + 16);
    fctiwzword22 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 712), f0.d);
    r4 = fctiwzword22;
    r3_addr_6 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_6, r4);
}

loc_8001A454:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31464));
    r3 = r19;
    ctx->lr = 0x8001A460u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001B1E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
}

loc_8001A464:
{
    r3 = r23;
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(0))) {
        goto loc_8001A660;
    }
}

loc_8001A46C:
{
    r0 = (r23 + 1);
}

loc_8001A474:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_8001A604;
    }
}

loc_8001A478:
{
}

loc_8001A47C:
{
    r4 = 0;
    r0 = 0;
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(-1))) {
        goto loc_8001A48C;
    }
}

loc_8001A488:
{
    r0 = 1;
}

loc_8001A48C:
{
}

loc_8001A490:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8001A4BC;
    }
}

loc_8001A494:
{
    r0 = (r23 & -2147483648);
}

loc_8001A498:
{
    r5 = 1;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8001A4B0;
    }
}

loc_8001A4A0:
{
    r0 = (r23 + 1);
    r0 = (r0 & -2147483648);
}

loc_8001A4A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8001A4B0;
    }
}

loc_8001A4AC:
{
    r5 = 0;
}

loc_8001A4B0:
{
}

loc_8001A4B4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8001A4BC;
    }
}

loc_8001A4B8:
{
    r4 = 1;
}

loc_8001A4BC:
{
}

loc_8001A4C0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8001A604;
    }
}

loc_8001A4C4:
{
    r5_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(2));
    r5 = (r5_rot_8 & -4);
    r6 = (r1 + 16);
    r4_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(3));
    r4 = (r4_rot_15 & -8);
    r7 = (r1 + 96);
    r0_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(29));
    r0 = (r0_rot_33 & 536870911);
    r6 = (r6 + r5);
    r7 = (r7 + r4);
    f9.d = MemoryInline::FlatReadFloat64((r2 + -31456));
    f8.d = MemoryInline::FlatReadFloat64((r2 + -31504));
    ctr = r0;
}

loc_8001A4F0:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(8))) {
        goto loc_8001A604;
    }
}

loc_8001A4F4:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r6 + -28), 0, 32u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_2, 28u, r6);
    r3 = (r3 + -8);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r6 + -4));
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 588), r4);
    r4 = (r0 ^ -2147483648);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r6 + -8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 584));
    MemoryInline::FlatWriteRam32((r1 + 580), r4);
    r4 = (r0 ^ -2147483648);
    f0.d = (f0.d - f9.d);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r6 + -12));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 576));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 588), r4);
    f5.d = (f1.d * f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 584));
    f1.d = (f1.d * f8.d);
    MemoryInline::FlatWriteRam32((r1 + 580), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r6 + -16));
    f3.d = (f2.d - f9.d);
    f4.d = (f0.d - f9.d);
    r0 = (r0 ^ -2147483648);
    f7.d = (f1.d * f3.d);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 576));
    MemoryInline::FlatWriteRam32((r1 + 588), r0);
    f1.d = (f1.d * f8.d);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r6 + -20));
    guest_range_3 = MemoryInline::ResolveRangeHost((r7 + -56), 0, 64u, false, true);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 56u, r7, f5.d);
    f3.d = (f2.d - f9.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 584));
    f6.d = (f1.d * f4.d);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 580), r0);
    f1.d = (f1.d * f8.d);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r6 + -24));
    f4.d = (f0.d - f9.d);
    r4 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 588), r4);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r6 + -28));
    f5.d = (f1.d * f3.d);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 576));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 48u, (r7 + -8), f7.d);
    r0 = (r0 ^ -2147483648);
    f1.d = (f1.d * f8.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 584));
    f3.d = (f2.d - f9.d);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 40u, (r7 + -16), f6.d);
    f4.d = (f1.d * f4.d);
    r6 = (r6 + -32);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 32u, (r7 + -24), f5.d);
    f1.d = (f1.d * f8.d);
    MemoryInline::FlatWriteRam32((r1 + 580), r0);
    f2.d = (f0.d - f9.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 576));
    f3.d = (f1.d * f3.d);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 24u, (r7 + -32), f4.d);
    f1.d = (f1.d * f8.d);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 16u, (r7 + -40), f3.d);
    f0.d = (f0.d - f9.d);
    f2.d = (f1.d * f2.d);
    f1.d = (f1.d * f8.d);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 8u, (r7 + -48), f2.d);
    f0.d = (f1.d * f0.d);
    f1.d = (f1.d * f8.d);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 0u, (r7 + -56), f0.d);
    r7 = (r7 + -64);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8001A4F4;
    }
}

loc_8001A604:
{
    r5_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r5 = (r5_rot_10 & -4);
    r6 = (r1 + 16);
    r4_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r4 = (r4_rot_17 & -8);
    r7 = (r1 + 96);
    r0 = (r3 + 1);
    r6 = (r6 + r5);
    r7 = (r7 + r4);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -31456));
    f0.d = MemoryInline::FlatReadFloat64((r2 + -31504));
    ctr = r0;
}

loc_8001A630:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_8001A660;
    }
}

loc_8001A634:
{
    r0 = MemoryInline::FlatRead32(r6);
    r6 = (r6 + -4);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 588), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 584));
    f2.d = (f2.d - f3.d);
    f2.d = (f1.d * f2.d);
    f1.d = (f1.d * f0.d);
    MemoryInline::FlatWriteFloat64(r7, f2.d);
    r7 = (r7 + -8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8001A634;
    }
}

loc_8001A660:
{
    r0 = (r23 + 1);
    r8 = r23;
    r4 = (r1 + 256);
    r3_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(3));
    r3 = (r3_rot_19 & -8);
    r5 = 0x80240000u;
    ctr = r0;
}

loc_8001A67C:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(0))) {
        goto loc_8001A6DC;
    }
}

loc_8001A680:
{
    r6 = (r1 + 96);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31512));
    r6 = (r6 + r3);
    r7 = (r5 + 28264);
    r0 = (r23 - r8);
    r9 = 0;
    goto loc_8001A6B8;
}

loc_8001A69C:
{
    f1.d = MemoryInline::FlatReadFloat64(r7);
    r7 = (r7 + 8);
    f0.d = MemoryInline::FlatReadFloat64(r6);
    r6 = (r6 + 8);
    r9 = (r9 + 1);
    f0.d = (f1.d * f0.d);
    f2.d = (f2.d + f0.d);
}

loc_8001A6B8:
{
}

loc_8001A6BC:
{
    if ((static_cast<int32_t>(r9) > static_cast<int32_t>(r21))) {
        goto loc_8001A6C8;
    }
}

loc_8001A6C0:
{
}

loc_8001A6C4:
{
    if ((static_cast<int32_t>(r9) <= static_cast<int32_t>(r0))) {
        goto loc_8001A69C;
    }
}

loc_8001A6C8:
{
    r0_rot_37 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_37 & -8);
    r3 = (r3 + -8);
    addr_stfdx_8001A6D0_loc_0 = (r4 + r0);
    MemoryInline::FlatWriteFloat64(addr_stfdx_8001A6D0_loc_0, f2.d);
    r8 = (r8 + -1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8001A680;
    }
}

loc_8001A6DC:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r3 + -1);
}

loc_8001A6E8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8001A810;
    }
}

loc_8001A6EC:
{
    r0 = (r3 | r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8001A700;
    }
}

loc_8001A6F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8001A6F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001AA88;
    }
}

loc_8001A6FC:
{
    goto loc_8001AEB0;
}

loc_8001A700:
{
}

loc_8001A704:
{
    f6.d = MemoryInline::FlatReadFloat64((r2 + -31512));
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(0))) {
        goto loc_8001A7F8;
    }
}

loc_8001A70C:
{
    r0 = (r23 + 1);
}

loc_8001A714:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_8001A7CC;
    }
}

loc_8001A718:
{
}

loc_8001A71C:
{
    r3 = 0;
    r0 = 0;
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(-1))) {
        goto loc_8001A72C;
    }
}

loc_8001A728:
{
    r0 = 1;
}

loc_8001A72C:
{
}

loc_8001A730:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8001A75C;
    }
}

loc_8001A734:
{
    r0 = (r23 & -2147483648);
}

loc_8001A738:
{
    r4 = 1;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8001A750;
    }
}

loc_8001A740:
{
    r0 = (r23 + 1);
    r0 = (r0 & -2147483648);
}

loc_8001A748:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8001A750;
    }
}

loc_8001A74C:
{
    r4 = 0;
}

loc_8001A750:
{
}

loc_8001A754:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8001A75C;
    }
}

loc_8001A758:
{
    r3 = 1;
}

loc_8001A75C:
{
}

loc_8001A760:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8001A7CC;
    }
}

loc_8001A764:
{
    r3_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(3));
    r3 = (r3_rot_31 & -8);
    r4 = (r1 + 256);
    r0_rot_49 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(29));
    r0 = (r0_rot_49 & 536870911);
    r4 = (r4 + r3);
    ctr = r0;
}

loc_8001A77C:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(8))) {
        goto loc_8001A7CC;
    }
}

loc_8001A780:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r4 + -56), 0, 64u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 56u, r4);
    r23 = (r23 + -8);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 48u, (r4 + -8));
    f6.d = (f6.d + f1.d);
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 40u, (r4 + -16));
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 32u, (r4 + -24));
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 24u, (r4 + -32));
    f6.d = (f6.d + f0.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 16u, (r4 + -40));
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 8u, (r4 + -48));
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 0u, (r4 + -56));
    r4 = (r4 + -64);
    f6.d = (f6.d + f5.d);
    f6.d = (f6.d + f4.d);
    f6.d = (f6.d + f3.d);
    f6.d = (f6.d + f2.d);
    f6.d = (f6.d + f1.d);
    f6.d = (f6.d + f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8001A780;
    }
}

loc_8001A7CC:
{
    r3_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(3));
    r3 = (r3_rot_33 & -8);
    r4 = (r1 + 256);
    r0 = (r23 + 1);
    r4 = (r4 + r3);
    ctr = r0;
}

loc_8001A7E4:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(0))) {
        goto loc_8001A7F8;
    }
}

loc_8001A7E8:
{
    f0.d = MemoryInline::FlatReadFloat64(r4);
    r4 = (r4 + -8);
    f6.d = (f6.d + f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8001A7E8;
    }
}

loc_8001A7F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r18), static_cast<int32_t>(0));
}

loc_8001A7FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001A804;
    }
}

loc_8001A800:
{
    goto loc_8001A808;
}

loc_8001A804:
{
    f6.d = (-(f6.d));
}

loc_8001A808:
{
    MemoryInline::FlatWriteFloat64(r17, f6.d);
    goto loc_8001AEB0;
}

loc_8001A810:
{
}

loc_8001A814:
{
    f6.d = MemoryInline::FlatReadFloat64((r2 + -31512));
    r5 = r23;
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(0))) {
        goto loc_8001A90C;
    }
}

loc_8001A820:
{
    r0 = (r23 + 1);
}

loc_8001A828:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_8001A8E0;
    }
}

loc_8001A82C:
{
}

loc_8001A830:
{
    r3 = 0;
    r0 = 0;
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(-1))) {
        goto loc_8001A840;
    }
}

loc_8001A83C:
{
    r0 = 1;
}

loc_8001A840:
{
}

loc_8001A844:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8001A870;
    }
}

loc_8001A848:
{
    r0 = (r23 & -2147483648);
}

loc_8001A84C:
{
    r4 = 1;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8001A864;
    }
}

loc_8001A854:
{
    r0 = (r23 + 1);
    r0 = (r0 & -2147483648);
}

loc_8001A85C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8001A864;
    }
}

loc_8001A860:
{
    r4 = 0;
}

loc_8001A864:
{
}

loc_8001A868:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8001A870;
    }
}

loc_8001A86C:
{
    r3 = 1;
}

loc_8001A870:
{
}

loc_8001A874:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8001A8E0;
    }
}

loc_8001A878:
{
    r3_rot_35 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(3));
    r3 = (r3_rot_35 & -8);
    r4 = (r1 + 256);
    r0_rot_52 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(29));
    r0 = (r0_rot_52 & 536870911);
    r4 = (r4 + r3);
    ctr = r0;
}

loc_8001A890:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(8))) {
        goto loc_8001A8E0;
    }
}

loc_8001A894:
{
    guest_range_5 = MemoryInline::ResolveRangeHost((r4 + -56), 0, 64u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 56u, r4);
    r5 = (r5 + -8);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 48u, (r4 + -8));
    f6.d = (f6.d + f1.d);
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 40u, (r4 + -16));
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 32u, (r4 + -24));
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 24u, (r4 + -32));
    f6.d = (f6.d + f0.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 16u, (r4 + -40));
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 8u, (r4 + -48));
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 0u, (r4 + -56));
    r4 = (r4 + -64);
    f6.d = (f6.d + f5.d);
    f6.d = (f6.d + f4.d);
    f6.d = (f6.d + f3.d);
    f6.d = (f6.d + f2.d);
    f6.d = (f6.d + f1.d);
    f6.d = (f6.d + f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8001A894;
    }
}

loc_8001A8E0:
{
    r3_rot_37 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r3 = (r3_rot_37 & -8);
    r4 = (r1 + 256);
    r0 = (r5 + 1);
    r4 = (r4 + r3);
    ctr = r0;
}

loc_8001A8F8:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_8001A90C;
    }
}

loc_8001A8FC:
{
    f0.d = MemoryInline::FlatReadFloat64(r4);
    r4 = (r4 + -8);
    f6.d = (f6.d + f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8001A8FC;
    }
}

loc_8001A90C:
{
}

loc_8001A910:
{
    if ((static_cast<int32_t>(r18) != static_cast<int32_t>(0))) {
        goto loc_8001A91C;
    }
}

loc_8001A914:
{
    f1.d = f6.d;
    goto loc_8001A920;
}

loc_8001A91C:
{
    f1.d = (-(f6.d));
}

loc_8001A920:
{
    f0.d = MemoryInline::FlatReadFloat64((r1 + 256));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r23), static_cast<int32_t>(1));
}

loc_8001A928:
{
    MemoryInline::FlatWriteFloat64(r17, f1.d);
    r8 = 1;
    f6.d = (f0.d - f6.d);
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8001AA70;
    }
}

loc_8001A938:
{
}

loc_8001A93C:
{
    r4 = (r23 + -8);
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(8))) {
        goto loc_8001AA40;
    }
}

loc_8001A944:
{
    r5 = 0;
    r6 = 0;
    r7 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8001A968;
    }
}

loc_8001A954:
{
    r3 = 0x80000000u;
    r0 = (r3 + -2);
}

loc_8001A960:
{
    if ((static_cast<int32_t>(r23) > static_cast<int32_t>(r0))) {
        goto loc_8001A968;
    }
}

loc_8001A964:
{
    r7 = 1;
}

loc_8001A968:
{
}

loc_8001A96C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8001A9A4;
    }
}

loc_8001A970:
{
    r7 = (r23 & -2147483648);
    r3 = 1;
    r0 = (r7 + -2147483648);
}

loc_8001A980:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_8001A998;
    }
}

loc_8001A984:
{
    r0 = (r23 + -1);
    r0 = (r0 & -2147483648);
}

loc_8001A990:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(r0))) {
        goto loc_8001A998;
    }
}

loc_8001A994:
{
    r3 = 0;
}

loc_8001A998:
{
}

loc_8001A99C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8001A9A4;
    }
}

loc_8001A9A0:
{
    r6 = 1;
}

loc_8001A9A4:
{
}

loc_8001A9A8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8001A9D4;
    }
}

loc_8001A9AC:
{
    r0 = (r23 + -1);
    r3 = 1;
    r0 = (r0 & -2147483648);
}

loc_8001A9B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8001A9C8;
    }
}

loc_8001A9BC:
{
    r0 = (r23 & -2147483648);
}

loc_8001A9C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8001A9C8;
    }
}

loc_8001A9C4:
{
    r3 = 0;
}

loc_8001A9C8:
{
}

loc_8001A9CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8001A9D4;
    }
}

loc_8001A9D0:
{
    r5 = 1;
}

loc_8001A9D4:
{
}

loc_8001A9D8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8001AA40;
    }
}

loc_8001A9DC:
{
    r0 = (r4 + 7);
    r3 = (r1 + 264);
    r0_rot_55 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_55 & 536870911);
    ctr = r0;
}

loc_8001A9F0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(1))) {
        goto loc_8001AA40;
    }
}

loc_8001A9F4:
{
    guest_range_6 = MemoryInline::ResolveRangeHost(r3, 0, 64u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 0u, r3);
    r8 = (r8 + 8);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 8u, (r3 + 8));
    f6.d = (f6.d + f1.d);
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 16u, (r3 + 16));
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 24u, (r3 + 24));
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 32u, (r3 + 32));
    f6.d = (f6.d + f0.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 40u, (r3 + 40));
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 48u, (r3 + 48));
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 56u, (r3 + 56));
    r3 = (r3 + 64);
    f6.d = (f6.d + f5.d);
    f6.d = (f6.d + f4.d);
    f6.d = (f6.d + f3.d);
    f6.d = (f6.d + f2.d);
    f6.d = (f6.d + f1.d);
    f6.d = (f6.d + f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8001A9F4;
    }
}

loc_8001AA40:
{
    r0 = (r23 + 1);
    r3_rot_39 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(3));
    r3 = (r3_rot_39 & -8);
    r4 = (r1 + 256);
    r0 = (r0 - r8);
    r4 = (r4 + r3);
    ctr = r0;
}

loc_8001AA5C:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(r23))) {
        goto loc_8001AA70;
    }
}

loc_8001AA60:
{
    f0.d = MemoryInline::FlatReadFloat64(r4);
    r4 = (r4 + 8);
    f6.d = (f6.d + f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8001AA60;
    }
}

loc_8001AA70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r18), static_cast<int32_t>(0));
}

loc_8001AA74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001AA7C;
    }
}

loc_8001AA78:
{
    goto loc_8001AA80;
}

loc_8001AA7C:
{
    f6.d = (-(f6.d));
}

loc_8001AA80:
{
    MemoryInline::FlatWriteFloat64((r17 + 8), f6.d);
    goto loc_8001AEB0;
}

loc_8001AA88:
{
}

loc_8001AA8C:
{
    r5 = r23;
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(0))) {
        goto loc_8001ABBC;
    }
}

loc_8001AA94:
{
}

loc_8001AA98:
{
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(8))) {
        goto loc_8001AB84;
    }
}

loc_8001AA9C:
{
}

loc_8001AAA0:
{
    r0 = 0;
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(-1))) {
        goto loc_8001AAAC;
    }
}

loc_8001AAA8:
{
    r0 = 1;
}

loc_8001AAAC:
{
}

loc_8001AAB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8001AB84;
    }
}

loc_8001AAB4:
{
    r0 = (r23 + -1);
    r3_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(3));
    r3 = (r3_rot_20 & -8);
    r4 = (r1 + 256);
    r0_rot_39 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_39 & 536870911);
    r4 = (r4 + r3);
    ctr = r0;
}

loc_8001AAD0:
{
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(8))) {
        goto loc_8001AB84;
    }
}

loc_8001AAD4:
{
    f0.d = MemoryInline::FlatReadFloat64((r4 + -8));
    r5 = (r5 + -8);
    f1.d = MemoryInline::FlatReadFloat64(r4);
    f2.d = (f0.d + f1.d);
    f0.d = (f0.d - f2.d);
    f0.d = (f1.d + f0.d);
    MemoryInline::FlatWriteFloat64(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r4 + -16));
    f1.d = (f0.d + f2.d);
    f0.d = (f0.d - f1.d);
    f0.d = (f2.d + f0.d);
    MemoryInline::FlatWriteFloat64((r4 + -8), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r4 + -24));
    f2.d = (f0.d + f1.d);
    f0.d = (f0.d - f2.d);
    f0.d = (f1.d + f0.d);
    MemoryInline::FlatWriteFloat64((r4 + -16), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r4 + -32));
    f1.d = (f0.d + f2.d);
    f0.d = (f0.d - f1.d);
    f0.d = (f2.d + f0.d);
    MemoryInline::FlatWriteFloat64((r4 + -24), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r4 + -40));
    f2.d = (f0.d + f1.d);
    f0.d = (f0.d - f2.d);
    f0.d = (f1.d + f0.d);
    MemoryInline::FlatWriteFloat64((r4 + -32), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r4 + -48));
    f1.d = (f0.d + f2.d);
    f0.d = (f0.d - f1.d);
    f0.d = (f2.d + f0.d);
    MemoryInline::FlatWriteFloat64((r4 + -40), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r4 + -56));
    f2.d = (f0.d + f1.d);
    f0.d = (f0.d - f2.d);
    f0.d = (f1.d + f0.d);
    MemoryInline::FlatWriteFloat64((r4 + -48), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r4 + -64));
    f1.d = (f0.d + f2.d);
    f0.d = (f0.d - f1.d);
    f0.d = (f2.d + f0.d);
    MemoryInline::FlatWriteFloat64((r4 + -56), f0.d);
    r4 = (r4 + -64);
    MemoryInline::FlatWriteFloat64(r4, f1.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8001AAD4;
    }
}

loc_8001AB84:
{
    r0_rot_41 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_41 & -8);
    r3 = (r1 + 256);
    r3 = (r3 + r0);
    ctr = r5;
}

loc_8001AB98:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_8001ABBC;
    }
}

loc_8001AB9C:
{
    f0.d = MemoryInline::FlatReadFloat64((r3 + -8));
    f1.d = MemoryInline::FlatReadFloat64(r3);
    f2.d = (f0.d + f1.d);
    f0.d = (f0.d - f2.d);
    f0.d = (f1.d + f0.d);
    MemoryInline::FlatWriteFloat64(r3, f0.d);
    r3 = (r3 + -8);
    MemoryInline::FlatWriteFloat64(r3, f2.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8001AB9C;
    }
}

loc_8001ABBC:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r23), static_cast<int32_t>(1));
}

loc_8001ABC0:
{
    r6 = r23;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8001AD34;
    }
}

loc_8001ABC8:
{
    r0 = (r23 + -1);
}

loc_8001ABD0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_8001ACF8;
    }
}

loc_8001ABD4:
{
    r3 = 0;
    r0 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8001ABE4;
    }
}

loc_8001ABE0:
{
    r0 = 1;
}

loc_8001ABE4:
{
}

loc_8001ABE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8001AC20;
    }
}

loc_8001ABEC:
{
    r5 = (r23 & -2147483648);
    r4 = 1;
    r0 = (r5 + -2147483648);
}

loc_8001ABFC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_8001AC14;
    }
}

loc_8001AC00:
{
    r0 = (r23 + -1);
    r0 = (r0 & -2147483648);
}

loc_8001AC0C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(r0))) {
        goto loc_8001AC14;
    }
}

loc_8001AC10:
{
    r4 = 0;
}

loc_8001AC14:
{
}

loc_8001AC18:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8001AC20;
    }
}

loc_8001AC1C:
{
    r3 = 1;
}

loc_8001AC20:
{
}

loc_8001AC24:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8001ACF8;
    }
}

loc_8001AC28:
{
    r0 = (r23 + -2);
    r3_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(3));
    r3 = (r3_rot_23 & -8);
    r4 = (r1 + 256);
    r0_rot_43 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_43 & 536870911);
    r4 = (r4 + r3);
    ctr = r0;
}

loc_8001AC44:
{
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(9))) {
        goto loc_8001ACF8;
    }
}

loc_8001AC48:
{
    f0.d = MemoryInline::FlatReadFloat64((r4 + -8));
    r6 = (r6 + -8);
    f1.d = MemoryInline::FlatReadFloat64(r4);
    f2.d = (f0.d + f1.d);
    f0.d = (f0.d - f2.d);
    f0.d = (f1.d + f0.d);
    MemoryInline::FlatWriteFloat64(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r4 + -16));
    f1.d = (f0.d + f2.d);
    f0.d = (f0.d - f1.d);
    f0.d = (f2.d + f0.d);
    MemoryInline::FlatWriteFloat64((r4 + -8), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r4 + -24));
    f2.d = (f0.d + f1.d);
    f0.d = (f0.d - f2.d);
    f0.d = (f1.d + f0.d);
    MemoryInline::FlatWriteFloat64((r4 + -16), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r4 + -32));
    f1.d = (f0.d + f2.d);
    f0.d = (f0.d - f1.d);
    f0.d = (f2.d + f0.d);
    MemoryInline::FlatWriteFloat64((r4 + -24), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r4 + -40));
    f2.d = (f0.d + f1.d);
    f0.d = (f0.d - f2.d);
    f0.d = (f1.d + f0.d);
    MemoryInline::FlatWriteFloat64((r4 + -32), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r4 + -48));
    f1.d = (f0.d + f2.d);
    f0.d = (f0.d - f1.d);
    f0.d = (f2.d + f0.d);
    MemoryInline::FlatWriteFloat64((r4 + -40), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r4 + -56));
    f2.d = (f0.d + f1.d);
    f0.d = (f0.d - f2.d);
    f0.d = (f1.d + f0.d);
    MemoryInline::FlatWriteFloat64((r4 + -48), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r4 + -64));
    f1.d = (f0.d + f2.d);
    f0.d = (f0.d - f1.d);
    f0.d = (f2.d + f0.d);
    MemoryInline::FlatWriteFloat64((r4 + -56), f0.d);
    r4 = (r4 + -64);
    MemoryInline::FlatWriteFloat64(r4, f1.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8001AC48;
    }
}

loc_8001ACF8:
{
    r3_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r3 = (r3_rot_25 & -8);
    r4 = (r1 + 256);
    r0 = (r6 + -1);
    r4 = (r4 + r3);
    ctr = r0;
}

loc_8001AD10:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(1))) {
        goto loc_8001AD34;
    }
}

loc_8001AD14:
{
    f0.d = MemoryInline::FlatReadFloat64((r4 + -8));
    f1.d = MemoryInline::FlatReadFloat64(r4);
    f2.d = (f0.d + f1.d);
    f0.d = (f0.d - f2.d);
    f0.d = (f1.d + f0.d);
    MemoryInline::FlatWriteFloat64(r4, f0.d);
    r4 = (r4 + -8);
    MemoryInline::FlatWriteFloat64(r4, f2.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8001AD14;
    }
}

loc_8001AD34:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r23), static_cast<int32_t>(2));
}

loc_8001AD38:
{
    f6.d = MemoryInline::FlatReadFloat64((r2 + -31512));
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8001AE70;
    }
}

loc_8001AD40:
{
    r0 = (r23 + -1);
}

loc_8001AD48:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_8001AE44;
    }
}

loc_8001AD4C:
{
    r3 = 0;
    r4 = 0;
    r0 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8001AD60;
    }
}

loc_8001AD5C:
{
    r0 = 1;
}

loc_8001AD60:
{
}

loc_8001AD64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8001AD9C;
    }
}

loc_8001AD68:
{
    r6 = (r23 & -2147483648);
    r5 = 1;
    r0 = (r6 + -2147483648);
}

loc_8001AD78:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_8001AD90;
    }
}

loc_8001AD7C:
{
    r0 = (r23 + -2);
    r0 = (r0 & -2147483648);
}

loc_8001AD88:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(r0))) {
        goto loc_8001AD90;
    }
}

loc_8001AD8C:
{
    r5 = 0;
}

loc_8001AD90:
{
}

loc_8001AD94:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8001AD9C;
    }
}

loc_8001AD98:
{
    r4 = 1;
}

loc_8001AD9C:
{
}

loc_8001ADA0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8001ADD0;
    }
}

loc_8001ADA4:
{
    r0 = (r23 + -2);
    r4 = 1;
    r0 = (r0 & -2147483648);
}

loc_8001ADB0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8001ADC4;
    }
}

loc_8001ADB4:
{
    r0 = (r23 + -1);
    r0 = (r0 & -2147483648);
}

loc_8001ADBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8001ADC4;
    }
}

loc_8001ADC0:
{
    r4 = 0;
}

loc_8001ADC4:
{
}

loc_8001ADC8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8001ADD0;
    }
}

loc_8001ADCC:
{
    r3 = 1;
}

loc_8001ADD0:
{
}

loc_8001ADD4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8001AE44;
    }
}

loc_8001ADD8:
{
    r0 = (r23 + -2);
    r3_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(3));
    r3 = (r3_rot_27 & -8);
    r4 = (r1 + 256);
    r0_rot_46 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_46 & 536870911);
    r4 = (r4 + r3);
    ctr = r0;
}

loc_8001ADF4:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(10))) {
        goto loc_8001AE44;
    }
}

loc_8001ADF8:
{
    guest_range_7 = MemoryInline::ResolveRangeHost((r4 + -56), 0, 64u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_7, 56u, r4);
    r23 = (r23 + -8);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_7, 48u, (r4 + -8));
    f6.d = (f6.d + f1.d);
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_7, 40u, (r4 + -16));
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_7, 32u, (r4 + -24));
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_7, 24u, (r4 + -32));
    f6.d = (f6.d + f0.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_7, 16u, (r4 + -40));
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_7, 8u, (r4 + -48));
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_7, 0u, (r4 + -56));
    r4 = (r4 + -64);
    f6.d = (f6.d + f5.d);
    f6.d = (f6.d + f4.d);
    f6.d = (f6.d + f3.d);
    f6.d = (f6.d + f2.d);
    f6.d = (f6.d + f1.d);
    f6.d = (f6.d + f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8001ADF8;
    }
}

loc_8001AE44:
{
    r3_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(3));
    r3 = (r3_rot_29 & -8);
    r4 = (r1 + 256);
    r0 = (r23 + -1);
    r4 = (r4 + r3);
    ctr = r0;
}

loc_8001AE5C:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(2))) {
        goto loc_8001AE70;
    }
}

loc_8001AE60:
{
    f0.d = MemoryInline::FlatReadFloat64(r4);
    r4 = (r4 + -8);
    f6.d = (f6.d + f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8001AE60;
    }
}

loc_8001AE70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r18), static_cast<int32_t>(0));
}

loc_8001AE74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001AE90;
    }
}

loc_8001AE78:
{
    f1.d = MemoryInline::FlatReadFloat64((r1 + 256));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 264));
    MemoryInline::FlatWriteFloat64(r17, f1.d);
    MemoryInline::FlatWriteFloat64((r17 + 8), f0.d);
    MemoryInline::FlatWriteFloat64((r17 + 16), f6.d);
    goto loc_8001AEB0;
}

loc_8001AE90:
{
    f2.d = MemoryInline::FlatReadFloat64((r1 + 256));
    f0.d = (-(f6.d));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 264));
    f2.d = (-(f2.d));
    MemoryInline::FlatWriteFloat64((r17 + 16), f0.d);
    f0.d = (-(f1.d));
    MemoryInline::FlatWriteFloat64(r17, f2.d);
    MemoryInline::FlatWriteFloat64((r17 + 8), f0.d);
}

loc_8001AEB0:
{
    r11 = (r1 + 880);
    r3 = (r20 & 7);
    // inline leaf 0x80021544 (10 guest instruction(s))
    guest_range_8 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_8, 0u, (r11 + -72));
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_8, 8u, (r11 + -64));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_8, 16u, (r11 + -56));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_8, 24u, (r11 + -48));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_8, 32u, (r11 + -40));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_8, 40u, (r11 + -32));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_8, 48u, (r11 + -24));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_8, 56u, (r11 + -16));
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_8, 64u, (r11 + -8));
    // end of inlined leaf 0x80021544
    guest_range_14 = MemoryInline::ResolveRangeHost((r1 + 736), 0, 152u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_14, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_14, 0u, (r1 + 736));
            r15 = MemoryInline::ReadResolved32(guest_range_14, 4u, (r1 + 740));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_14, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_14, 8u, (r1 + 744));
            r17 = MemoryInline::ReadResolved32(guest_range_14, 12u, (r1 + 748));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_14, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_14, 16u, (r1 + 752));
            r19 = MemoryInline::ReadResolved32(guest_range_14, 20u, (r1 + 756));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_14, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_14, 24u, (r1 + 760));
            r21 = MemoryInline::ReadResolved32(guest_range_14, 28u, (r1 + 764));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_14, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_14, 32u, (r1 + 768));
            r23 = MemoryInline::ReadResolved32(guest_range_14, 36u, (r1 + 772));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_14, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_14, 40u, (r1 + 776));
            r25 = MemoryInline::ReadResolved32(guest_range_14, 44u, (r1 + 780));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_14, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_14, 48u, (r1 + 784));
            r27 = MemoryInline::ReadResolved32(guest_range_14, 52u, (r1 + 788));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_14, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_14, 56u, (r1 + 792));
            r29 = MemoryInline::ReadResolved32(guest_range_14, 60u, (r1 + 796));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_14, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_14, 64u, (r1 + 800));
            r31 = MemoryInline::ReadResolved32(guest_range_14, 68u, (r1 + 804));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_14, 148u, (r1 + 884));
    ctx->lr = r0;
    r1 = (r1 + 880);
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
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFDFFF gpr_write=0xFFFFDFFB gpr_return=0x00000018 fpr_read=0xFF8003FF fpr_write=0xFF8003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80019818 func_80019818 preserves=false fpr_mask=0x00800000
