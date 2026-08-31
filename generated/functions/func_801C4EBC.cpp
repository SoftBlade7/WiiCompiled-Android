#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801C4EBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_801C5410_loc_0 = 0;
    uint32_t addr_lfsx_801C54F8_loc_0 = 0;
    uint32_t addr_lfsx_801C5500_loc_0 = 0;
    uint32_t addr_lfsx_801C551C_loc_0 = 0;
    uint32_t addr_lfsx_801C5530_loc_0 = 0;
    uint32_t addr_lfsx_801C5534_loc_0 = 0;
    uint32_t addr_lfsx_801C5568_loc_0 = 0;
    uint32_t addr_lfsx_801C5598_loc_0 = 0;
    uint32_t addr_lfsx_801C55BC_loc_0 = 0;
    uint32_t addr_lfsx_801C55D8_loc_0 = 0;
    uint32_t addr_lfsx_801C55F8_loc_0 = 0;
    uint32_t addr_lfsx_801C564C_loc_0 = 0;
    uint32_t addr_lfsx_801C5650_loc_0 = 0;
    uint32_t addr_lfsx_801C5654_loc_0 = 0;
    uint32_t addr_lfsx_801C5658_loc_0 = 0;
    uint32_t addr_lfsx_801C56B4_loc_0 = 0;
    uint32_t addr_lfsx_801C56BC_loc_0 = 0;
    uint32_t addr_lfsx_801C56E0_loc_0 = 0;
    uint32_t addr_lhax_801C539C_loc_0 = 0;
    uint32_t addr_lhax_801C53B0_loc_0 = 0;
    uint32_t addr_lhax_801C5674_loc_0 = 0;
    uint32_t addr_lhax_801C5678_loc_0 = 0;
    uint32_t addr_stfsx_801C53F8_loc_0 = 0;
    uint32_t addr_stfsx_801C5400_loc_0 = 0;
    uint32_t addr_stfsx_801C54B0_loc_0 = 0;
    uint32_t addr_stfsx_801C54D8_loc_0 = 0;
    uint32_t addr_stfsx_801C5524_loc_0 = 0;
    uint32_t addr_stfsx_801C553C_loc_0 = 0;
    uint32_t addr_stfsx_801C5560_loc_0 = 0;
    uint32_t addr_stfsx_801C5574_loc_0 = 0;
    uint32_t addr_stfsx_801C558C_loc_0 = 0;
    uint32_t addr_stfsx_801C55A4_loc_0 = 0;
    uint32_t addr_stfsx_801C55B4_loc_0 = 0;
    uint32_t addr_stfsx_801C55C0_loc_0 = 0;
    uint32_t addr_stfsx_801C55D4_loc_0 = 0;
    uint32_t addr_stfsx_801C55DC_loc_0 = 0;
    uint32_t addr_stfsx_801C55F0_loc_0 = 0;
    uint32_t addr_stfsx_801C5608_loc_0 = 0;
    uint32_t addr_stfsx_801C5624_loc_0 = 0;
    uint32_t addr_stfsx_801C5680_loc_0 = 0;
    uint32_t addr_stfsx_801C56C8_loc_0 = 0;
    uint32_t addr_stfsx_801C56D0_loc_0 = 0;
    uint32_t addr_stfsx_801C56EC_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mdest_6 = 0;
    uint32_t r0_mdest_7 = 0;
    uint32_t r0_mdest_8 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_mrot_6 = 0;
    uint32_t r0_mrot_7 = 0;
    uint32_t r0_mrot_8 = 0;
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
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r16_rot_0 = 0;
    uint32_t r16_rot_1 = 0;
    uint32_t r16_rot_2 = 0;
    uint32_t r16_rot_3 = 0;
    uint32_t r16_rot_4 = 0;
    uint32_t r17_rot_0 = 0;
    uint32_t r17_rot_1 = 0;
    uint32_t r17_rot_2 = 0;
    uint32_t r17_rot_3 = 0;
    uint32_t r19_rot_0 = 0;
    uint32_t r19_rot_1 = 0;
    uint32_t r19_rot_2 = 0;
    uint32_t r19_rot_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r21_rot_0 = 0;
    uint32_t r21_rot_1 = 0;
    uint32_t r21_rot_2 = 0;
    uint32_t r21_rot_3 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_10 = 0;
    uint32_t r27_addr_11 = 0;
    uint32_t r27_addr_12 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r27_addr_3 = 0;
    uint32_t r27_addr_4 = 0;
    uint32_t r27_addr_5 = 0;
    uint32_t r27_addr_6 = 0;
    uint32_t r27_addr_7 = 0;
    uint32_t r27_addr_8 = 0;
    uint32_t r27_addr_9 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r6_subfic_ra_0 = 0;
    uint32_t r6_subfic_ra_1 = 0;
    uint32_t r6_subfic_ra_2 = 0;
    uint32_t r6_subfic_ra_3 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;

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
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801C4EBC;

loc_801C4EBC:
{
    MemoryInline::FlatWriteRam32((r1 + -272), r1);
    r1 = (r1 + -272);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 276), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 256), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 240), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 224), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 208), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    r11 = (r1 + 208);
    // inline leaf 0x80021570 (18 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -68), 0, 68u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r15)) << 32) | static_cast<uint32_t>(r16)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -68), r15);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -64), r16);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -60), r17);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -56), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -52), r19);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -48), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -44), r21);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r11 + -4), r31);
    // end of inlined leaf 0x80021570
    r5 = 0x80350000u;
    r20 = 1127219200;
    r29_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r29 = (r29_rot_0 & -4);
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -26160), 0, 16u, true, false);
    r19 = MemoryInline::ReadResolved16(guest_range_1, 0u, (r2 + -26160));
    r5 = (r5 + 2352);
    r18 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r2 + -26158));
    r5_addr_0 = (r5 + r29);
    r28 = MemoryInline::FlatRead32(r5_addr_0);
    r30 = 0x80350000u;
    r17 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r2 + -26156));
    r31 = 0x802A0000u;
    r16 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r2 + -26154));
    r26 = r3;
    r15 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r2 + -26152));
    r9 = 0;
    r12 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r2 + -26150));
    r8 = 1;
    r11 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r2 + -26148));
    r7 = 2;
    r10 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r2 + -26146));
    r6 = 3;
    r27 = MemoryInline::FlatRead32((r28 + 2420));
    r5 = 530;
    r0 = 636;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801C4F50:
{
    guest_range_5 = MemoryInline::ResolveRangeHost((r28 + 2132), 0, 46u, false, true);
    MemoryInline::WriteResolved16(guest_range_5, 0u, (r28 + 2132), static_cast<uint16_t>(r19));
    r30 = (r30 + 16424);
    r31 = (r31 + -6824);
    MemoryInline::WriteResolved16(guest_range_5, 2u, (r28 + 2134), static_cast<uint16_t>(r15));
    r3 = MemoryInline::FlatRead8((r28 + 2250));
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 124u, false, true);
    MemoryInline::WriteResolved32(guest_range_6, 112u, (r1 + 120), r20);
    MemoryInline::WriteResolved16(guest_range_5, 4u, (r28 + 2136), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved8(guest_range_5, 6u, (r28 + 2138), static_cast<uint8_t>(r9));
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r18)) << 16) | static_cast<uint16_t>(r12)))) {
        MemoryInline::WriteResolved16(guest_range_5, 8u, (r28 + 2140), r18);
        MemoryInline::WriteResolved16(guest_range_5, 10u, (r28 + 2142), r12);
    }
    r3 = MemoryInline::FlatRead8((r28 + 2250));
    MemoryInline::WriteResolved32(guest_range_6, 120u, (r1 + 128), r20);
    MemoryInline::WriteResolved16(guest_range_5, 12u, (r28 + 2144), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved8(guest_range_5, 14u, (r28 + 2146), static_cast<uint8_t>(r8));
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r17)) << 16) | static_cast<uint16_t>(r11)))) {
        MemoryInline::WriteResolved16(guest_range_5, 16u, (r28 + 2148), r17);
        MemoryInline::WriteResolved16(guest_range_5, 18u, (r28 + 2150), r11);
    }
    r3 = MemoryInline::FlatRead8((r28 + 2250));
    MemoryInline::WriteResolved16(guest_range_6, 8u, (r1 + 16), static_cast<uint16_t>(r19));
    MemoryInline::WriteResolved16(guest_range_5, 20u, (r28 + 2152), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved8(guest_range_5, 22u, (r28 + 2154), static_cast<uint8_t>(r7));
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r16)) << 16) | static_cast<uint16_t>(r10)))) {
        MemoryInline::WriteResolved16(guest_range_5, 24u, (r28 + 2156), r16);
        MemoryInline::WriteResolved16(guest_range_5, 26u, (r28 + 2158), r10);
    }
    r3 = MemoryInline::FlatRead8((r28 + 2250));
    MemoryInline::WriteResolved16(guest_range_6, 10u, (r1 + 18), static_cast<uint16_t>(r18));
    MemoryInline::WriteResolved16(guest_range_5, 28u, (r28 + 2160), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved8(guest_range_5, 30u, (r28 + 2162), static_cast<uint8_t>(r6));
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r5)))) {
        MemoryInline::WriteResolved16(guest_range_5, 32u, (r28 + 2164), r5);
        MemoryInline::WriteResolved16(guest_range_5, 34u, (r28 + 2166), r5);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 36u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_5, 36u, (r28 + 2168), r5);
        MemoryInline::WriteResolved16(guest_range_5, 38u, (r28 + 2170), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 40u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_5, 40u, (r28 + 2172), r0);
        MemoryInline::WriteResolved16(guest_range_5, 42u, (r28 + 2174), r0);
    }
    MemoryInline::WriteResolved8(guest_range_5, 45u, (r28 + 2177), static_cast<uint8_t>(r9));
    if (!MemoryInline::WriteResolvedPair16(guest_range_6, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r17)) << 16) | static_cast<uint16_t>(r16)))) {
        MemoryInline::WriteResolved16(guest_range_6, 12u, (r1 + 20), r17);
        MemoryInline::WriteResolved16(guest_range_6, 14u, (r1 + 22), r16);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_6, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r15)) << 16) | static_cast<uint16_t>(r12)))) {
        MemoryInline::WriteResolved16(guest_range_6, 0u, (r1 + 8), r15);
        MemoryInline::WriteResolved16(guest_range_6, 2u, (r1 + 10), r12);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_6, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r11)) << 16) | static_cast<uint16_t>(r10)))) {
        MemoryInline::WriteResolved16(guest_range_6, 4u, (r1 + 12), r11);
        MemoryInline::WriteResolved16(guest_range_6, 6u, (r1 + 14), r10);
    }
    MemoryInline::WriteResolved8(guest_range_5, 44u, (r28 + 2176), static_cast<uint8_t>(r9));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C596C;
    }
}

loc_801C4FF4:
{
    r0 = MemoryInline::FlatRead32((r28 + 2272));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801C4FFC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C5364;
    }
}

loc_801C5000:
{
    r15 = 0;
    r20 = 0x80000000u;
}

loc_801C5008:
{
    r0 = (r15 & 255);
    r3 = 0;
    r16 = (r0 * 11);
    r5 = (r16 + 10);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r16), static_cast<int32_t>(r5));
}

loc_801C501C:
{
    r4 = r16;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C5150;
    }
}

loc_801C5024:
{
    r6 = (r16 + 2);
    r7 = 0;
    r8 = 0;
    r9 = 0;
    r10 = 0;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801C504C;
    }
}

loc_801C503C:
{
    r0 = (r20 + -2);
}

loc_801C5044:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_801C504C;
    }
}

loc_801C5048:
{
    r10 = 1;
}

loc_801C504C:
{
}

loc_801C5050:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_801C5064;
    }
}

loc_801C5054:
{
    r0 = (r20 + -2);
}

loc_801C505C:
{
    if ((static_cast<int32_t>(r16) > static_cast<int32_t>(r0))) {
        goto loc_801C5064;
    }
}

loc_801C5060:
{
    r9 = 1;
}

loc_801C5064:
{
}

loc_801C5068:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_801C507C;
    }
}

loc_801C506C:
{
    r0 = (r16 + -2147483648);
}

loc_801C5074:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_801C507C;
    }
}

loc_801C5078:
{
    r8 = 1;
}

loc_801C507C:
{
}

loc_801C5080:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_801C50B8;
    }
}

loc_801C5084:
{
    r5 = (r16 + 10);
    r0 = (0 - r16);
    r8 = (r5 & -2147483648);
    r0 = (r0 & -2147483648);
    r5 = 1;
}

loc_801C509C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(r0))) {
        goto loc_801C50AC;
    }
}

loc_801C50A0:
{
}

loc_801C50A4:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_801C50AC;
    }
}

loc_801C50A8:
{
    r5 = 0;
}

loc_801C50AC:
{
}

loc_801C50B0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801C50B8;
    }
}

loc_801C50B4:
{
    r7 = 1;
}

loc_801C50B8:
{
}

loc_801C50BC:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_801C5124;
    }
}

loc_801C50C0:
{
    r0 = (r6 + 7);
    r0 = (r0 - r16);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & 536870911);
    ctr = r0;
}

loc_801C50D4:
{
    if ((static_cast<int32_t>(r16) >= static_cast<int32_t>(r6))) {
        goto loc_801C5124;
    }
}

loc_801C50D8:
{
    r6 = (r27 + r4);
    r27_addr_3 = (r27 + r4);
    r5 = MemoryInline::FlatRead8(r27_addr_3);
    r0 = MemoryInline::FlatRead8((r6 + 1));
    r4 = (r4 + 8);
    r3 = (r3 + r5);
    r5 = MemoryInline::FlatRead8((r6 + 2));
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r6 + 3));
    r3 = (r3 + r5);
    r5 = MemoryInline::FlatRead8((r6 + 4));
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r6 + 5));
    r3 = (r3 + r5);
    r5 = MemoryInline::FlatRead8((r6 + 6));
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r6 + 7));
    r3 = (r3 + r5);
    r3 = (r3 + r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801C50D8;
    }
}

loc_801C5124:
{
    r6 = (r16 + 10);
    r5 = (r27 + r4);
    r0 = (r6 - r4);
    ctr = r0;
}

loc_801C5138:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r6))) {
        goto loc_801C5150;
    }
}

loc_801C513C:
{
    r0 = MemoryInline::FlatRead8(r5);
    r4 = (r4 + 1);
    r5 = (r5 + 1);
    r3 = (r3 + r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801C513C;
    }
}

loc_801C5150:
{
    r21 = (r27 + r16);
    r3 = (r3 + 85);
    r0 = MemoryInline::FlatRead8((r21 + 10));
    r3 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_801C5164:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C5348;
    }
}

loc_801C5168:
{
    r3 = (r31 + 196);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
    guest_range_2 = MemoryInline::ResolveRangeHost(r21, 0, 10u, true, false);
    r11 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r21 + 2));
    r8 = 0;
    r7 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r21 + 1));
    r5 = 1;
    r0 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r21 + 4));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & 768);
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r17 = MemoryInline::ReadResolved8(guest_range_2, 6u, (r21 + 6));
    r4 = (r7 | r4);
    r15 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(6));
    r0 = (r0_rot_5 & 768);
    r12 = MemoryInline::ReadResolved8(guest_range_2, 0u, r21);
    r0 = (r15 | r0);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r10 = (767 - r4);
    r7 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r21 + 3));
    r9 = MemoryInline::FlatRead8((r28 + 2250));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r6_subfic_ra_1 = r6;
    r6 = (767 - r6_subfic_ra_1);
    r20 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(8));
    r7 = (r7_rot_1 & 768);
    r0 = 2;
    r15 = 3;
    r3 = MemoryInline::ReadResolved8(guest_range_2, 7u, (r21 + 7));
    r19 = (static_cast<int32_t>(static_cast<int16_t>(r17)));
    r7 = (r20 | r7);
    r17_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r17 = (r17_rot_1 & 768);
    r16 = MemoryInline::ReadResolved8(guest_range_2, 9u, (r21 + 9));
    r19 = (r19 | r17);
    r4 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r21 + 5));
    r17 = (static_cast<int32_t>(static_cast<int16_t>(r16)));
    r16_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(6));
    r16 = (r16_rot_1 & 768);
    r18 = MemoryInline::ReadResolved8(guest_range_2, 8u, (r21 + 8));
    r16 = (r17 | r16);
    r19 = (static_cast<int32_t>(static_cast<int16_t>(r19)));
    r12 = (static_cast<int32_t>(static_cast<int16_t>(r12)));
    r17 = (767 - r19);
    r21_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(4));
    r21 = (r21_rot_1 & 768);
    r11 = (r12 | r21);
    r16 = (static_cast<int32_t>(static_cast<int16_t>(r16)));
    r12 = (767 - r16);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(767) >= static_cast<uint32_t>(r16) ? 1u : 0u) << 29);
    r19 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r4 = (r4_rot_2 & 768);
    r16 = (static_cast<int32_t>(static_cast<int16_t>(r18)));
    r19 = (r19 | r4);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_1 & 768);
    r16 = (r16 | r3);
    r4 = 4;
    guest_range_7 = MemoryInline::ResolveRangeHost((r1 + 88), 0, 31u, false, true);
    MemoryInline::WriteResolved16(guest_range_7, 0u, (r1 + 88), static_cast<uint16_t>(r11));
    r3 = (r1 + 88);
    if (!MemoryInline::WriteResolvedPair16(guest_range_7, 2u, ((static_cast<uint32_t>(static_cast<uint16_t>(r10)) << 16) | static_cast<uint16_t>(r9)))) {
        MemoryInline::WriteResolved16(guest_range_7, 2u, (r1 + 90), r10);
        MemoryInline::WriteResolved16(guest_range_7, 4u, (r1 + 92), r9);
    }
    MemoryInline::WriteResolved8(guest_range_7, 6u, (r1 + 94), static_cast<uint8_t>(r8));
    if (!MemoryInline::WriteResolvedPair16(guest_range_7, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r7)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryInline::WriteResolved16(guest_range_7, 8u, (r1 + 96), r7);
        MemoryInline::WriteResolved16(guest_range_7, 10u, (r1 + 98), r6);
    }
    MemoryInline::WriteResolved16(guest_range_7, 12u, (r1 + 100), static_cast<uint16_t>(r9));
    MemoryInline::WriteResolved8(guest_range_7, 14u, (r1 + 102), static_cast<uint8_t>(r5));
    if (!MemoryInline::WriteResolvedPair16(guest_range_7, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r19)) << 16) | static_cast<uint16_t>(r17)))) {
        MemoryInline::WriteResolved16(guest_range_7, 16u, (r1 + 104), r19);
        MemoryInline::WriteResolved16(guest_range_7, 18u, (r1 + 106), r17);
    }
    MemoryInline::WriteResolved16(guest_range_7, 20u, (r1 + 108), static_cast<uint16_t>(r9));
    MemoryInline::WriteResolved8(guest_range_7, 22u, (r1 + 110), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_7, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r16)) << 16) | static_cast<uint16_t>(r12)))) {
        MemoryInline::WriteResolved16(guest_range_7, 24u, (r1 + 112), r16);
        MemoryInline::WriteResolved16(guest_range_7, 26u, (r1 + 114), r12);
    }
    MemoryInline::WriteResolved16(guest_range_7, 28u, (r1 + 116), static_cast<uint16_t>(r9));
    MemoryInline::WriteResolved8(guest_range_7, 30u, (r1 + 118), static_cast<uint8_t>(r15));
    ctr = r4;
}

loc_801C527C:
{
    r4 = MemoryInline::FlatRead16(r3);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_801C5284:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(512))) {
        goto loc_801C52AC;
    }
}

loc_801C5288:
{
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801C5290:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(384))) {
        goto loc_801C52AC;
    }
}

loc_801C5294:
{
    MemoryInline::FlatWrite16((r28 + 2132), static_cast<uint16_t>(r4));
    r4 = MemoryInline::FlatRead16((r3 + 4));
    MemoryInline::FlatWrite16((r28 + 2134), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 6));
    MemoryInline::FlatWrite16((r28 + 2136), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite8((r28 + 2138), static_cast<uint8_t>(r0));
}

loc_801C52AC:
{
    r4 = MemoryInline::FlatRead16(r3);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_801C52B4:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(512))) {
        goto loc_801C52DC;
    }
}

loc_801C52B8:
{
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801C52C0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(384))) {
        goto loc_801C52DC;
    }
}

loc_801C52C4:
{
    MemoryInline::FlatWrite16((r28 + 2140), static_cast<uint16_t>(r4));
    r4 = MemoryInline::FlatRead16((r3 + 4));
    MemoryInline::FlatWrite16((r28 + 2142), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 6));
    MemoryInline::FlatWrite16((r28 + 2144), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite8((r28 + 2146), static_cast<uint8_t>(r0));
}

loc_801C52DC:
{
    r4 = MemoryInline::FlatRead16(r3);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_801C52E4:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(512))) {
        goto loc_801C530C;
    }
}

loc_801C52E8:
{
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801C52F0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(384))) {
        goto loc_801C530C;
    }
}

loc_801C52F4:
{
    MemoryInline::FlatWrite16((r28 + 2148), static_cast<uint16_t>(r4));
    r4 = MemoryInline::FlatRead16((r3 + 4));
    MemoryInline::FlatWrite16((r28 + 2150), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 6));
    MemoryInline::FlatWrite16((r28 + 2152), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite8((r28 + 2154), static_cast<uint8_t>(r0));
}

loc_801C530C:
{
    r4 = MemoryInline::FlatRead16(r3);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(512));
}

loc_801C5314:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C533C;
    }
}

loc_801C5318:
{
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(384));
}

loc_801C5320:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801C533C;
    }
}

loc_801C5324:
{
    MemoryInline::FlatWrite16((r28 + 2156), static_cast<uint16_t>(r4));
    r4 = MemoryInline::FlatRead16((r3 + 4));
    MemoryInline::FlatWrite16((r28 + 2158), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 6));
    MemoryInline::FlatWrite16((r28 + 2160), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite8((r28 + 2162), static_cast<uint8_t>(r0));
}

loc_801C533C:
{
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801C527C;
    }
}

loc_801C5344:
{
    goto loc_801C5370;
}

loc_801C5348:
{
    r3 = (r31 + 216);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
    r15 = (r15 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r15), static_cast<uint32_t>(2));
}

loc_801C535C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801C5008;
    }
}

loc_801C5360:
{
    goto loc_801C5370;
}

loc_801C5364:
{
    r3 = (r31 + 240);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
}

loc_801C5370:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -26144));
    r21 = (r1 + 72);
    f29.d = MemoryInline::FlatReadFloat64((r2 + -26088));
    r20 = (r1 + 56);
    f30.d = f31.d;
    r17 = (r1 + 16);
    r16 = (r1 + 8);
    r15 = 0;
}

loc_801C5390:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(3));
    r0 = (r0_rot_8 & 2040);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & 510);
    r3 = (r28 + r0);
    addr_lhax_801C539C_loc_0 = (r17 + r5);
    r4 = MemoryInline::FlatRead16(addr_lhax_801C539C_loc_0);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r8 = MemoryInline::FlatRead16((r3 + 2132));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(2));
    r7 = (r7_rot_4 & 1020);
    r9 = MemoryInline::FlatRead16((r3 + 2134));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r3 = (r31 + 308);
    addr_lhax_801C53B0_loc_0 = (r16 + r5);
    r0 = MemoryInline::FlatRead16(addr_lhax_801C53B0_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r6 = (r8 ^ -2147483648);
    r5 = (r9 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 124), r6);
    r4 = (r8 - r4);
    r0 = (r9 - r0);
    MemoryInline::FlatWriteRam32((r1 + 132), r5);
    r4 = (r4 ^ -2147483648);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 120));
    r0 = (r0 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 128));
    MemoryInline::FlatWriteRam32((r1 + 124), r4);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f29.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 120));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 128));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f29.d));
    addr_stfsx_801C53F8_loc_0 = (r21 + r7);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801C53F8_loc_0, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    addr_stfsx_801C5400_loc_0 = (r20 + r7);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801C5400_loc_0, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f1.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
    addr_lfsx_801C5410_loc_0 = (r21 + r7);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_801C5410_loc_0);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(5), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
    r15 = (r15 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r15), static_cast<uint32_t>(4));
}

loc_801C5424:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801C5390;
    }
}

loc_801C5428:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26140));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -26128));
    f30.d = PpcFmulsInline(f30.d, f0.d);
    f31.d = PpcFmulsInline(f31.d, f0.d);
    ctx->gpr[0] = r0;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001B1E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r2 + -26136));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26132));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f30.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    ctx->gpr[0] = r0;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001B1E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    cr = ctx->cr;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -26112));
    f28.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    ctx->gpr[0] = r0;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001B1E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r2 + -26120));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26116));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f31.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    ctx->gpr[0] = r0;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001B1E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    cr = ctx->cr;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    r16_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r16 = (r16_rot_3 & -4);
    f1.d = f28.d;
    r17 = (r30 + 0);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    ctx->lr = 0x801C5494u;
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
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001BB64u>(ctx);
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
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -26104));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26132));
    f1.d = f29.d;
    r15 = (r30 + 16);
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    addr_stfsx_801C54B0_loc_0 = (r17 + r16);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801C54B0_loc_0, f0.d);
    ctx->lr = 0x801C54B8u;
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
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001BB64u>(ctx);
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
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -26104));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26116));
    f1.d = f30.d;
    f2.d = f31.d;
    r3 = (r31 + 328);
    f3.d = PpcFmulsInline(f3.d, f4.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    addr_stfsx_801C54D8_loc_0 = (r15 + r16);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801C54D8_loc_0, f0.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(5), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
    f1.d = f28.d;
    r3 = (r31 + 360);
    f2.d = f29.d;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(5), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
    addr_lfsx_801C54F8_loc_0 = (r17 + r16);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_801C54F8_loc_0);
    r3 = (r31 + 392);
    addr_lfsx_801C5500_loc_0 = (r15 + r16);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_801C5500_loc_0);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(5), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
    f2.d = MemoryInline::FlatReadFloat32((r2 + -26144));
    r21 = (r30 + 32);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    r20 = (r30 + 48);
    addr_lfsx_801C551C_loc_0 = (r17 + r16);
    f4.d = MemoryInline::FlatReadFloat32(addr_lfsx_801C551C_loc_0);
    r3 = (r31 + 420);
    addr_stfsx_801C5524_loc_0 = (r21 + r16);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801C5524_loc_0, f2.d);
    f12.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f4.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    addr_lfsx_801C5530_loc_0 = (r15 + r16);
    f11.d = MemoryInline::FlatReadFloat32(addr_lfsx_801C5530_loc_0);
    addr_lfsx_801C5534_loc_0 = (r21 + r16);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_801C5534_loc_0);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f11.d));
    addr_stfsx_801C553C_loc_0 = (r20 + r16);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801C553C_loc_0, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f12.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 76));
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f12.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f10.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f4.d));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f11.d));
    addr_stfsx_801C5560_loc_0 = (r21 + r16);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801C5560_loc_0, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d));
    addr_lfsx_801C5568_loc_0 = (r21 + r16);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_801C5568_loc_0);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 80));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f9.d));
    addr_stfsx_801C5574_loc_0 = (r20 + r16);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801C5574_loc_0, f3.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f8.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 84));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f4.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f11.d));
    addr_stfsx_801C558C_loc_0 = (r21 + r16);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801C558C_loc_0, f2.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f4.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 68));
    addr_lfsx_801C5598_loc_0 = (r21 + r16);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_801C5598_loc_0);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f11.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f6.d));
    addr_stfsx_801C55A4_loc_0 = (r20 + r16);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801C55A4_loc_0, f7.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f7.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -26140));
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f10.d);
    addr_stfsx_801C55B4_loc_0 = (r21 + r16);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801C55B4_loc_0, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f5.d));
    addr_lfsx_801C55BC_loc_0 = (r21 + r16);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_801C55BC_loc_0);
    addr_stfsx_801C55C0_loc_0 = (r20 + r16);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801C55C0_loc_0, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f9.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    addr_stfsx_801C55D4_loc_0 = (r21 + r16);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801C55D4_loc_0, f1.d);
    addr_lfsx_801C55D8_loc_0 = (r21 + r16);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_801C55D8_loc_0);
    addr_stfsx_801C55DC_loc_0 = (r20 + r16);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801C55DC_loc_0, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f8.d);
    f2.d = PpcFmulsInline(f0.d, f2.d);
    addr_stfsx_801C55F0_loc_0 = (r21 + r16);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801C55F0_loc_0, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f6.d);
    addr_lfsx_801C55F8_loc_0 = (r21 + r16);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_801C55F8_loc_0);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f3.d);
    addr_stfsx_801C5608_loc_0 = (r20 + r16);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801C5608_loc_0, f2.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(5), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26144));
    r22 = (r30 + 64);
    f29.d = MemoryInline::FlatReadFloat64((r2 + -26088));
    r17 = (r1 + 40);
    addr_stfsx_801C5624_loc_0 = (r22 + r16);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801C5624_loc_0, f0.d);
    r23 = (r1 + 56);
    f31.d = MemoryInline::FlatReadFloat32((r2 + -26100));
    r24 = (r1 + 72);
    f30.d = MemoryInline::FlatReadFloat32((r2 + -26096));
    r18 = (r1 + 24);
    r25 = (r1 + 8);
    r26 = (r1 + 16);
    r15 = 0;
}

loc_801C5648:
{
    r19_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(2));
    r19 = (r19_rot_2 & 1020);
    addr_lfsx_801C564C_loc_0 = (r20 + r16);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_801C564C_loc_0);
    addr_lfsx_801C5650_loc_0 = (r23 + r19);
    f3.d = MemoryInline::FlatReadFloat32(addr_lfsx_801C5650_loc_0);
    addr_lfsx_801C5654_loc_0 = (r24 + r19);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_801C5654_loc_0);
    addr_lfsx_801C5658_loc_0 = (r21 + r16);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_801C5658_loc_0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    ctx->gpr[0] = r0;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001B1E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    cr = ctx->cr;
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & 510);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    addr_lhax_801C5674_loc_0 = (r25 + r0);
    r3 = MemoryInline::FlatRead16(addr_lhax_801C5674_loc_0);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    addr_lhax_801C5678_loc_0 = (r26 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_801C5678_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r3 ^ -2147483648);
    addr_stfsx_801C5680_loc_0 = (r17 + r19);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801C5680_loc_0, f0.d);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 124), r3);
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 120));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 128));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f29.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f31.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    ctx->gpr[0] = r0;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001B1E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    cr = ctx->cr;
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    addr_lfsx_801C56B4_loc_0 = (r17 + r19);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_801C56B4_loc_0);
    r15 = (r15 + 1);
    addr_lfsx_801C56BC_loc_0 = (r22 + r16);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_801C56BC_loc_0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r15), static_cast<uint32_t>(4));
}

loc_801C56C4:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    addr_stfsx_801C56C8_loc_0 = (r18 + r19);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801C56C8_loc_0, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    addr_stfsx_801C56D0_loc_0 = (r22 + r16);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801C56D0_loc_0, f0.d);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801C5648;
    }
}

loc_801C56D8:
{
    r4 = (r30 + 64);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26140));
    addr_lfsx_801C56E0_loc_0 = (r4 + r29);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_801C56E0_loc_0);
    r3 = (r31 + 448);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    addr_stfsx_801C56EC_loc_0 = (r4 + r29);
    MemoryInline::FlatWriteFloat32(addr_stfsx_801C56EC_loc_0, f1.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(5), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
    r16 = 0;
    r26 = 0x80000000u;
}

loc_801C5700:
{
    r0 = MemoryInline::FlatRead32((r28 + 2272));
    r3 = (r16 & 255);
    r15 = (r3 * 10);
}

loc_801C5710:
{
    r3 = 0;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801C571C;
    }
}

loc_801C5718:
{
    r15 = (r15 + 22);
}

loc_801C571C:
{
    r5 = (r15 + 9);
    r4 = r15;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r15), static_cast<int32_t>(r5));
}

loc_801C5728:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C5858;
    }
}

loc_801C572C:
{
    r6 = (r15 + 1);
    r7 = 0;
    r8 = 0;
    r9 = 0;
    r10 = 0;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801C5754;
    }
}

loc_801C5744:
{
    r0 = (r26 + -2);
}

loc_801C574C:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_801C5754;
    }
}

loc_801C5750:
{
    r10 = 1;
}

loc_801C5754:
{
}

loc_801C5758:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_801C576C;
    }
}

loc_801C575C:
{
    r0 = (r26 + -2);
}

loc_801C5764:
{
    if ((static_cast<int32_t>(r15) > static_cast<int32_t>(r0))) {
        goto loc_801C576C;
    }
}

loc_801C5768:
{
    r9 = 1;
}

loc_801C576C:
{
}

loc_801C5770:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_801C5784;
    }
}

loc_801C5774:
{
    r0 = (r15 + -2147483648);
}

loc_801C577C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_801C5784;
    }
}

loc_801C5780:
{
    r8 = 1;
}

loc_801C5784:
{
}

loc_801C5788:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_801C57C0;
    }
}

loc_801C578C:
{
    r5 = (r15 + 9);
    r0 = (0 - r15);
    r8 = (r5 & -2147483648);
    r0 = (r0 & -2147483648);
    r5 = 1;
}

loc_801C57A4:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(r0))) {
        goto loc_801C57B4;
    }
}

loc_801C57A8:
{
}

loc_801C57AC:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_801C57B4;
    }
}

loc_801C57B0:
{
    r5 = 0;
}

loc_801C57B4:
{
}

loc_801C57B8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801C57C0;
    }
}

loc_801C57BC:
{
    r7 = 1;
}

loc_801C57C0:
{
}

loc_801C57C4:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_801C582C;
    }
}

loc_801C57C8:
{
    r0 = (r6 + 7);
    r0 = (r0 - r15);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_12 & 536870911);
    ctr = r0;
}

loc_801C57DC:
{
    if ((static_cast<int32_t>(r15) >= static_cast<int32_t>(r6))) {
        goto loc_801C582C;
    }
}

loc_801C57E0:
{
    r6 = (r27 + r4);
    r27_addr_9 = (r27 + r4);
    r5 = MemoryInline::FlatRead8(r27_addr_9);
    r0 = MemoryInline::FlatRead8((r6 + 1));
    r4 = (r4 + 8);
    r3 = (r3 + r5);
    r5 = MemoryInline::FlatRead8((r6 + 2));
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r6 + 3));
    r3 = (r3 + r5);
    r5 = MemoryInline::FlatRead8((r6 + 4));
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r6 + 5));
    r3 = (r3 + r5);
    r5 = MemoryInline::FlatRead8((r6 + 6));
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r6 + 7));
    r3 = (r3 + r5);
    r3 = (r3 + r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801C57E0;
    }
}

loc_801C582C:
{
    r6 = (r15 + 9);
    r5 = (r27 + r4);
    r0 = (r6 - r4);
    ctr = r0;
}

loc_801C5840:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r6))) {
        goto loc_801C5858;
    }
}

loc_801C5844:
{
    r0 = MemoryInline::FlatRead8(r5);
    r4 = (r4 + 1);
    r5 = (r5 + 1);
    r3 = (r3 + r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801C5844;
    }
}

loc_801C5858:
{
    r17 = (r27 + r15);
    r3 = (r3 + 85);
    r0 = MemoryInline::FlatRead8((r17 + 9));
    r3 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_801C586C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C5910;
    }
}

loc_801C5870:
{
    r3 = (r31 + 464);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
    guest_range_3 = MemoryInline::ResolveRangeHost(r17, 0, 9u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_3, 3u, (r17 + 3));
    r3 = MemoryInline::ReadResolved8(guest_range_3, 0u, r17);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_15 & 3);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0_mrot_1 = (r0_rot_16 & 1020);
    r0_mdest_1 = (r0 & -1021);
    r0 = (r0_mdest_1 | r0_mrot_1);
    guest_range_8 = MemoryInline::ResolveRangeHost((r28 + 2164), 0, 14u, false, true);
    MemoryInline::WriteResolved16(guest_range_8, 0u, (r28 + 2164), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 3u, (r17 + 3));
    r3 = MemoryInline::ReadResolved8(guest_range_3, 1u, (r17 + 1));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_17 & 3);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0_mrot_2 = (r0_rot_18 & 1020);
    r0_mdest_2 = (r0 & -1021);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::WriteResolved16(guest_range_8, 2u, (r28 + 2166), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 3u, (r17 + 3));
    r3 = MemoryInline::ReadResolved8(guest_range_3, 2u, (r17 + 2));
    r0 = (r0 & 3);
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0_mrot_3 = (r0_rot_19 & 1020);
    r0_mdest_3 = (r0 & -1021);
    r0 = (r0_mdest_3 | r0_mrot_3);
    MemoryInline::WriteResolved16(guest_range_8, 4u, (r28 + 2168), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 7u, (r17 + 7));
    r3 = MemoryInline::ReadResolved8(guest_range_3, 4u, (r17 + 4));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_20 & 3);
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0_mrot_4 = (r0_rot_21 & 1020);
    r0_mdest_4 = (r0 & -1021);
    r0 = (r0_mdest_4 | r0_mrot_4);
    MemoryInline::WriteResolved16(guest_range_8, 6u, (r28 + 2170), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 7u, (r17 + 7));
    r3 = MemoryInline::ReadResolved8(guest_range_3, 5u, (r17 + 5));
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_22 & 3);
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0_mrot_5 = (r0_rot_23 & 1020);
    r0_mdest_5 = (r0 & -1021);
    r0 = (r0_mdest_5 | r0_mrot_5);
    MemoryInline::WriteResolved16(guest_range_8, 8u, (r28 + 2172), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 7u, (r17 + 7));
    r3 = MemoryInline::ReadResolved8(guest_range_3, 6u, (r17 + 6));
    r0 = (r0 & 3);
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0_mrot_6 = (r0_rot_24 & 1020);
    r0_mdest_6 = (r0 & -1021);
    r0 = (r0_mdest_6 | r0_mrot_6);
    MemoryInline::WriteResolved16(guest_range_8, 10u, (r28 + 2174), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 8u, (r17 + 8));
    r0 = (r0 & 127);
    MemoryInline::WriteResolved8(guest_range_8, 13u, (r28 + 2177), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 8u, (r17 + 8));
    r0 = (r0 & 128);
    MemoryInline::WriteResolved8(guest_range_8, 12u, (r28 + 2176), static_cast<uint8_t>(r0));
    goto loc_801C5928;
}

loc_801C5910:
{
    r3 = (r31 + 480);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
    r16 = (r16 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r16), static_cast<uint32_t>(2));
}

loc_801C5924:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801C5700;
    }
}

loc_801C5928:
{
    r4 = MemoryInline::FlatRead16((r28 + 2164));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = (r31 + 496);
    r5 = MemoryInline::FlatRead16((r28 + 2166));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r28 + 2168));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
    r4 = MemoryInline::FlatRead16((r28 + 2170));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = (r31 + 536);
    r5 = MemoryInline::FlatRead16((r28 + 2172));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r28 + 2174));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
    r4 = MemoryInline::FlatRead8((r28 + 2177));
    r3 = (r31 + 576);
    r5 = MemoryInline::FlatRead8((r28 + 2176));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801CB988u>(ctx);
    r1 = ctx->gpr[1];
}

loc_801C596C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 256));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 240));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 224));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 208);
    f28.d = MemoryInline::FlatReadFloat64((r1 + 208));
    // inline leaf 0x800215BC (18 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost((r11 + -68), 0, 68u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r15 = resolved_pair.first;
            r16 = resolved_pair.second;
        } else {
            r15 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r11 + -68));
            r16 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r11 + -64));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r11 + -60));
            r18 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r11 + -56));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r11 + -52));
            r20 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r11 + -48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 24u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 32u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 40u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_4, 44u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 48u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_4, 48u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_4, 52u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 56u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_4, 56u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_4, 60u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_4, 64u, (r11 + -4));
    // end of inlined leaf 0x800215BC
    r0 = MemoryInline::FlatRead32((r1 + 276));
    ctx->lr = r0;
    r1 = (r1 + 272);
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFDFFF gpr_write=0xFFFFDFFB gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801C4EBC func_801C4EBC preserves=false fpr_mask=0xF0000000
