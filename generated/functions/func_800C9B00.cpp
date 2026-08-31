#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800C9B00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_10 = 0;
    uint32_t r0_mdest_11 = 0;
    uint32_t r0_mdest_12 = 0;
    uint32_t r0_mdest_13 = 0;
    uint32_t r0_mdest_14 = 0;
    uint32_t r0_mdest_15 = 0;
    uint32_t r0_mdest_16 = 0;
    uint32_t r0_mdest_17 = 0;
    uint32_t r0_mdest_18 = 0;
    uint32_t r0_mdest_19 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_20 = 0;
    uint32_t r0_mdest_21 = 0;
    uint32_t r0_mdest_22 = 0;
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
    uint32_t r0_mrot_12 = 0;
    uint32_t r0_mrot_13 = 0;
    uint32_t r0_mrot_14 = 0;
    uint32_t r0_mrot_15 = 0;
    uint32_t r0_mrot_16 = 0;
    uint32_t r0_mrot_17 = 0;
    uint32_t r0_mrot_18 = 0;
    uint32_t r0_mrot_19 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_20 = 0;
    uint32_t r0_mrot_21 = 0;
    uint32_t r0_mrot_22 = 0;
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
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r0_subfic_ra_4 = 0;
    uint32_t r0_subfic_ra_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mdest_3 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_mrot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mdest_2 = 0;
    uint32_t r4_mdest_3 = 0;
    uint32_t r4_mdest_4 = 0;
    uint32_t r4_mdest_5 = 0;
    uint32_t r4_mdest_6 = 0;
    uint32_t r4_mdest_7 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_2 = 0;
    uint32_t r4_mrot_3 = 0;
    uint32_t r4_mrot_4 = 0;
    uint32_t r4_mrot_5 = 0;
    uint32_t r4_mrot_6 = 0;
    uint32_t r4_mrot_7 = 0;
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
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mdest_2 = 0;
    uint32_t r5_mdest_3 = 0;
    uint32_t r5_mdest_4 = 0;
    uint32_t r5_mdest_5 = 0;
    uint32_t r5_mdest_6 = 0;
    uint32_t r5_mdest_7 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_mrot_2 = 0;
    uint32_t r5_mrot_3 = 0;
    uint32_t r5_mrot_4 = 0;
    uint32_t r5_mrot_5 = 0;
    uint32_t r5_mrot_6 = 0;
    uint32_t r5_mrot_7 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_stbu_ea_0 = 0;
    uint32_t r5_stbu_ea_1 = 0;
    uint32_t r5_stbu_ea_2 = 0;
    uint32_t r5_stbu_ea_3 = 0;
    uint32_t r5_stbu_ea_4 = 0;
    uint32_t r5_stbu_ea_5 = 0;
    uint32_t r5_stbu_ea_6 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_10 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mdest_3 = 0;
    uint32_t r6_mdest_4 = 0;
    uint32_t r6_mdest_5 = 0;
    uint32_t r6_mdest_6 = 0;
    uint32_t r6_mdest_7 = 0;
    uint32_t r6_mdest_8 = 0;
    uint32_t r6_mdest_9 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_10 = 0;
    uint32_t r6_mrot_2 = 0;
    uint32_t r6_mrot_3 = 0;
    uint32_t r6_mrot_4 = 0;
    uint32_t r6_mrot_5 = 0;
    uint32_t r6_mrot_6 = 0;
    uint32_t r6_mrot_7 = 0;
    uint32_t r6_mrot_8 = 0;
    uint32_t r6_mrot_9 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_10 = 0;
    uint32_t r6_rot_11 = 0;
    uint32_t r6_rot_12 = 0;
    uint32_t r6_rot_13 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r6_rot_8 = 0;
    uint32_t r6_rot_9 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800C9B00;

loc_800C9B00:
{
    MemoryInline::FlatWriteRam32((r1 + -1664), r1);
    r1 = (r1 + -1664);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 1668), r0);
    r11 = (r1 + 1664);
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
}

loc_800C9B18:
{
    r24 = r3;
    r28 = r4;
    r27 = r5;
    r26 = r6;
    r25 = 0;
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_800C9B50;
    }
}

loc_800C9B30:
{
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r4 = -1431633920;
    r0 = (r4 + -21845);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r3)) >> 32));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r0 * 3);
    r0 = (r3 - r0);
    r25 = (r0 & 255);
}

loc_800C9B50:
{
}

loc_800C9B54:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_800C9B7C;
    }
}

loc_800C9B58:
{
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r4 = -1431633920;
    r0 = (r4 + -21845);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r3)) >> 32));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_3 & 2147483647);
    r0 = (r0 * 3);
    r0 = (r3 - r0);
    r0 = (r25 + r0);
    r25 = (r0 & 255);
}

loc_800C9B7C:
{
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r31 = -858980352;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & -8);
    r4 = (r31 + -13107);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r5 = (r5_rot_0 & -4);
    r8 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r3)) >> 32));
    r7 = (r0 + r28);
    r6 = (r5 - r27);
    r0 = MemoryInline::FlatRead16(r24);
    r5 = (r26 + r7);
    r4 = 0x80250000u;
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r8 = (r8_rot_0 & 536870911);
    r29 = (r6 + r5);
    r6 = (r8 * 10);
    r4 = (r4 + -17720);
    r5 = (r29 * 10);
    r3 = (r3 - r6);
    r3 = (r3 + r5);
    r4_addr_0 = (r4 + r3);
    r3 = MemoryInline::FlatRead8(r4_addr_0);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(13));
    r0_mrot_0 = (r0_rot_6 & 57344);
    r0_mdest_0 = (r0 & -57345);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWrite16(r24, static_cast<uint16_t>(r0));
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r4 = (r31 + -13107);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r6 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r3)) >> 32));
    r5 = (r0 - r28);
    r0 = MemoryInline::FlatRead16(r24);
    r4 = 0x80250000u;
    r5 = (r26 + r5);
    r4 = (r4 + -15424);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r6 = (r6_rot_0 & 536870911);
    r6 = (r6 * 10);
    r5 = (r5 * 10);
    r3 = (r3 - r6);
    r3 = (r3 + r5);
    r4_addr_1 = (r4 + r3);
    r3 = MemoryInline::FlatRead8(r4_addr_1);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(10));
    r0_mrot_1 = (r0_rot_8 & 7168);
    r0_mdest_1 = (r0 & -7169);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite16(r24, static_cast<uint16_t>(r0));
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r0 = (r31 + -13107);
    r7 = 0x80250000u;
    r6 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r3)) >> 32));
    r0 = MemoryInline::FlatRead16(r24);
    r7 = (r7 + -15784);
    r4 = r27;
    r5 = r26;
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(28));
    r6 = (r6_rot_1 & 268435455);
    r6 = (r6 * 20);
    r8 = (r3 - r6);
    r3 = r28;
    r6 = (r29 * 20);
    r6 = (r8 + r6);
    r7_addr_0 = (r7 + r6);
    r6 = MemoryInline::FlatRead8(r7_addr_0);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(6));
    r0_mrot_2 = (r0_rot_9 & 960);
    r0_mdest_2 = (r0 & -961);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::FlatWrite16(r24, static_cast<uint16_t>(r0));
    ctx->lr = 0x800C9C5Cu;
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
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CA520u>(ctx);
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
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead16((r24 + 2));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(9));
    r0_mrot_3 = (r0_rot_10 & 65024);
    r0_mdest_3 = (r0 & -65025);
    r0 = (r0_mdest_3 | r0_mrot_3);
    MemoryInline::FlatWrite16((r24 + 2), static_cast<uint16_t>(r0));
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r4 = (r31 + -13107);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r6 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r3)) >> 32));
    r5 = (r0 - r26);
    r0 = MemoryInline::FlatRead16((r24 + 2));
    r4 = 0x80250000u;
    r5 = (r27 + r5);
    r4 = (r4 + -15364);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(28));
    r6 = (r6_rot_2 & 268435455);
    r6 = (r6 * 20);
    r5 = (r5 * 20);
    r3 = (r3 - r6);
    r3 = (r3 + r5);
    r4_addr_2 = (r4 + r3);
    r3 = MemoryInline::FlatRead8(r4_addr_2);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(6));
    r0_mrot_4 = (r0_rot_12 & 448);
    r0_mdest_4 = (r0 & -449);
    r0 = (r0_mdest_4 | r0_mrot_4);
    MemoryInline::FlatWrite16((r24 + 2), static_cast<uint16_t>(r0));
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r4 = 0x80270000u;
    r5 = MemoryInline::FlatRead16((r24 + 2));
    r4 = (r4 + 20600);
    r0 = 432;
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(5));
    r5_mrot_0 = (r5_rot_1 & 32);
    r5_mdest_0 = (r5 & -33);
    r5 = (r5_mdest_0 | r5_mrot_0);
    MemoryInline::FlatWrite16((r24 + 2), static_cast<uint16_t>(r5));
    r5 = (r1 + 735);
    r4 = (r4 + -1);
    ctr = r0;
    // nop
}

loc_800C9CD8:
{
    r3 = MemoryInline::FlatRead8((r4 + 1));
    r4 = (r4 + 2);
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    r5_stbu_ea_2 = (r5 + 2);
    MemoryInline::FlatWrite8(r5_stbu_ea_2, static_cast<uint8_t>(r0));
    r5 = r5_stbu_ea_2;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800C9CD8;
    }
}

loc_800C9CEC:
{
    r23 = 0x80270000u;
    r23 = (r23 + 21464);
    guest_range_1 = MemoryInline::ResolveRangeHost(r23, 0, 18u, true, false);
    r22 = MemoryInline::ReadResolved8(guest_range_1, 0u, r23);
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 68), 0, 18u, false, true);
    MemoryInline::WriteResolved8(guest_range_6, 0u, (r1 + 68), static_cast<uint8_t>(r22));
    r31 = (r29 & 255);
    r21 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r23 + 1));
    r20 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r23 + 2));
    r19 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r23 + 3));
    r18 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r23 + 4));
    r17 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r23 + 5));
    r16 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r23 + 6));
    r12 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r23 + 7));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r23 + 8));
    r10 = MemoryInline::ReadResolved8(guest_range_1, 9u, (r23 + 9));
    r9 = MemoryInline::ReadResolved8(guest_range_1, 10u, (r23 + 10));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 11u, (r23 + 11));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 12u, (r23 + 12));
    r6 = MemoryInline::ReadResolved8(guest_range_1, 13u, (r23 + 13));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 14u, (r23 + 14));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 15u, (r23 + 15));
    r3 = MemoryInline::ReadResolved8(guest_range_1, 16u, (r23 + 16));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 17u, (r23 + 17));
    MemoryInline::WriteResolved8(guest_range_6, 1u, (r1 + 69), static_cast<uint8_t>(r21));
    MemoryInline::WriteResolved8(guest_range_6, 2u, (r1 + 70), static_cast<uint8_t>(r20));
    MemoryInline::WriteResolved8(guest_range_6, 3u, (r1 + 71), static_cast<uint8_t>(r19));
    MemoryInline::WriteResolved8(guest_range_6, 4u, (r1 + 72), static_cast<uint8_t>(r18));
    MemoryInline::WriteResolved8(guest_range_6, 5u, (r1 + 73), static_cast<uint8_t>(r17));
    MemoryInline::WriteResolved8(guest_range_6, 6u, (r1 + 74), static_cast<uint8_t>(r16));
    MemoryInline::WriteResolved8(guest_range_6, 7u, (r1 + 75), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_6, 8u, (r1 + 76), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_6, 9u, (r1 + 77), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_6, 10u, (r1 + 78), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_6, 11u, (r1 + 79), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_6, 12u, (r1 + 80), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_6, 13u, (r1 + 81), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_6, 14u, (r1 + 82), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_6, 15u, (r1 + 83), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_6, 16u, (r1 + 84), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_6, 17u, (r1 + 85), static_cast<uint8_t>(r0));
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r5 = (r1 + 68);
    r4 = (r1 + 736);
    r5_addr_0 = (r5 + r31);
    r7 = MemoryInline::FlatRead8(r5_addr_0);
    r5 = (r31 * 48);
    r0 = MemoryInline::FlatRead32((r24 + 4));
    r6 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r7));
    r6 = (r6 * r7);
    r3 = (r3 - r6);
    r3 = (r3 + r5);
    r4_addr_3 = (r4 + r3);
    r3 = MemoryInline::FlatRead8(r4_addr_3);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(26));
    r0_mrot_5 = (r0_rot_13 & -67108864);
    r0_mdest_5 = (r0 & 67108863);
    r0 = (r0_mdest_5 | r0_mrot_5);
    MemoryInline::FlatWrite32((r24 + 4), r0);
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r5 = -858980352;
    r4 = 0x80250000u;
    r0 = (r5 + -13107);
    r5 = MemoryInline::FlatRead32((r24 + 4));
    r7 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r3)) >> 32));
    r4 = (r4 + -15184);
}

loc_800C9DD8:
{
    r0 = 4;
    r6 = (r26 * 10);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(29));
    r7 = (r7_rot_0 & 536870911);
    r7 = (r7 * 10);
    r3 = (r3 - r7);
    r3 = (r3 + r6);
    r4_addr_4 = (r4 + r3);
    r3 = MemoryInline::FlatRead8(r4_addr_4);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(23));
    r5_mrot_1 = (r5_rot_2 & 58720256);
    r5_mdest_1 = (r5 & -58720257);
    r5 = (r5_mdest_1 | r5_mrot_1);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(19));
    r5_mrot_2 = (r5_rot_3 & 7864320);
    r5_mdest_2 = (r5 & -7864321);
    r5 = (r5_mdest_2 | r5_mrot_2);
    MemoryInline::FlatWrite32((r24 + 4), r5);
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_800C9E34;
    }
}

loc_800C9E04:
{
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(14));
    r5_mrot_3 = (r5_rot_4 & 507904);
    r5_mdest_3 = (r5 & -507905);
    r5 = (r5_mdest_3 | r5_mrot_3);
    r3 = 0x80250000u;
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(6));
    r0 = (r0_rot_14 & 63);
    MemoryInline::FlatWrite32((r24 + 4), r5);
    r3 = (r3 + -17800);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(18));
    r3 = (r3_rot_0 & 31);
    r0_subfic_ra_0 = r0;
    r0 = (28 - r0_subfic_ra_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(28) >= static_cast<uint32_t>(r0_subfic_ra_0) ? 1u : 0u) << 29);
    r0 = (r3 + r0);
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(14));
    r5_mrot_4 = (r5_rot_5 & 507904);
    r5_mdest_4 = (r5 & -507905);
    r5 = (r5_mdest_4 | r5_mrot_4);
    MemoryInline::FlatWrite32((r24 + 4), r5);
    goto loc_800C9E64;
}

loc_800C9E34:
{
    r0 = 3;
    r3 = 0x80250000u;
    r5_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(14));
    r5_mrot_5 = (r5_rot_6 & 507904);
    r5_mdest_5 = (r5 & -507905);
    r5 = (r5_mdest_5 | r5_mrot_5);
    MemoryInline::FlatWrite32((r24 + 4), r5);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(6));
    r0 = (r0_rot_15 & 63);
    r3 = (r3 + -17800);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(18));
    r4 = (r4_rot_1 & 31);
    r0_subfic_ra_1 = r0;
    r0 = (29 - r0_subfic_ra_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(29) >= static_cast<uint32_t>(r0_subfic_ra_1) ? 1u : 0u) << 29);
    r0 = (r4 + r0);
    r5_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(14));
    r5_mrot_6 = (r5_rot_7 & 507904);
    r5_mdest_6 = (r5 & -507905);
    r5 = (r5_mdest_6 | r5_mrot_6);
    MemoryInline::FlatWrite32((r24 + 4), r5);
}

loc_800C9E64:
{
    r3 = MemoryInline::FlatRead32((r24 + 4));
    r31 = 2;
    r0 = (r25 + 12);
    r16 = 0x80270000u;
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(10));
    r3_mrot_0 = (r3_rot_3 & 15360);
    r3_mdest_0 = (r3 & -15361);
    r3 = (r3_mdest_0 | r3_mrot_0);
    r30 = (r29 & 255);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r3_mrot_1 = (r3_rot_4 & 992);
    r3_mdest_1 = (r3 & -993);
    r3 = (r3_mdest_1 | r3_mrot_1);
    MemoryInline::FlatWrite32((r24 + 4), r3);
    r16 = (r16 + 21484);
    guest_range_2 = MemoryInline::ResolveRangeHost(r16, 0, 18u, true, false);
    r17 = MemoryInline::ReadResolved8(guest_range_2, 0u, r16);
    guest_range_7 = MemoryInline::ResolveRangeHost((r1 + 48), 0, 18u, false, true);
    MemoryInline::WriteResolved8(guest_range_7, 0u, (r1 + 48), static_cast<uint8_t>(r17));
    r23 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r16 + 1));
    r22 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r16 + 2));
    r21 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r16 + 3));
    r20 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r16 + 4));
    r19 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r16 + 5));
    r18 = MemoryInline::ReadResolved8(guest_range_2, 6u, (r16 + 6));
    r12 = MemoryInline::ReadResolved8(guest_range_2, 7u, (r16 + 7));
    r11 = MemoryInline::ReadResolved8(guest_range_2, 8u, (r16 + 8));
    r10 = MemoryInline::ReadResolved8(guest_range_2, 9u, (r16 + 9));
    r9 = MemoryInline::ReadResolved8(guest_range_2, 10u, (r16 + 10));
    r8 = MemoryInline::ReadResolved8(guest_range_2, 11u, (r16 + 11));
    r7 = MemoryInline::ReadResolved8(guest_range_2, 12u, (r16 + 12));
    r6 = MemoryInline::ReadResolved8(guest_range_2, 13u, (r16 + 13));
    r5 = MemoryInline::ReadResolved8(guest_range_2, 14u, (r16 + 14));
    r4 = MemoryInline::ReadResolved8(guest_range_2, 15u, (r16 + 15));
    r3 = MemoryInline::ReadResolved8(guest_range_2, 16u, (r16 + 16));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 17u, (r16 + 17));
    MemoryInline::WriteResolved8(guest_range_7, 1u, (r1 + 49), static_cast<uint8_t>(r23));
    MemoryInline::WriteResolved8(guest_range_7, 2u, (r1 + 50), static_cast<uint8_t>(r22));
    MemoryInline::WriteResolved8(guest_range_7, 3u, (r1 + 51), static_cast<uint8_t>(r21));
    MemoryInline::WriteResolved8(guest_range_7, 4u, (r1 + 52), static_cast<uint8_t>(r20));
    MemoryInline::WriteResolved8(guest_range_7, 5u, (r1 + 53), static_cast<uint8_t>(r19));
    MemoryInline::WriteResolved8(guest_range_7, 6u, (r1 + 54), static_cast<uint8_t>(r18));
    MemoryInline::WriteResolved8(guest_range_7, 7u, (r1 + 55), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_7, 8u, (r1 + 56), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_7, 9u, (r1 + 57), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_7, 10u, (r1 + 58), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_7, 11u, (r1 + 59), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_7, 12u, (r1 + 60), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_7, 13u, (r1 + 61), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_7, 14u, (r1 + 62), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_7, 15u, (r1 + 63), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_7, 16u, (r1 + 64), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_7, 17u, (r1 + 65), static_cast<uint8_t>(r0));
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r4 = (r1 + 48);
    r7 = 0x80250000u;
    r4_addr_5 = (r4 + r30);
    r10 = MemoryInline::FlatRead8(r4_addr_5);
    r8 = (r30 * 24);
    r7 = (r7 + -16216);
    r5 = MemoryInline::FlatRead16((r24 + 2));
    r6 = MemoryInline::FlatRead32((r24 + 8));
    r4 = 4;
    r9 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r10));
    r0 = 6;
}

loc_800C9F44:
{
    r9 = (r9 * r10);
    r3 = (r3 - r9);
    r3 = (r3 + r8);
    r7_addr_1 = (r7 + r3);
    r3 = MemoryInline::FlatRead8(r7_addr_1);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r6_mrot_0 = (r6_rot_3 & -134217728);
    r6_mdest_0 = (r6 & 134217727);
    r6 = (r6_mdest_0 | r6_mrot_0);
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(18));
    r6_mrot_1 = (r6_rot_4 & 117440512);
    r6_mdest_1 = (r6 & -117440513);
    r6 = (r6_mdest_1 | r6_mrot_1);
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(20));
    r6_mrot_2 = (r6_rot_5 & 15728640);
    r6_mdest_2 = (r6 & -15728641);
    r6 = (r6_mdest_2 | r6_mrot_2);
    r6_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(15));
    r6_mrot_3 = (r6_rot_6 & 1015808);
    r6_mdest_3 = (r6 & -1015809);
    r6 = (r6_mdest_3 | r6_mrot_3);
    r6_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(11));
    r6_mrot_4 = (r6_rot_7 & 30720);
    r6_mdest_4 = (r6 & -30721);
    r6 = (r6_mdest_4 | r6_mrot_4);
    MemoryInline::FlatWrite32((r24 + 8), r6);
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(2))) {
        goto loc_800C9FA4;
    }
}

loc_800C9F70:
{
    r0 = (r25 + 9);
    r3 = 0x80250000u;
    r6_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r6_mrot_5 = (r6_rot_8 & 1984);
    r6_mdest_5 = (r6 & -1985);
    r6 = (r6_mdest_5 | r6_mrot_5);
    MemoryInline::FlatWrite32((r24 + 8), r6);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(5));
    r0 = (r0_rot_17 & 31);
    r3 = (r3 + -17744);
    r3_addr_3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_3);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(17));
    r4 = (r4_rot_3 & 31);
    r0_subfic_ra_3 = r0;
    r0 = (26 - r0_subfic_ra_3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(26) >= static_cast<uint32_t>(r0_subfic_ra_3) ? 1u : 0u) << 29);
    r0 = (r4 + r0);
    r6_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(15));
    r6_mrot_6 = (r6_rot_9 & 1015808);
    r6_mdest_6 = (r6 & -1015809);
    r6 = (r6_mdest_6 | r6_mrot_6);
    MemoryInline::FlatWrite32((r24 + 8), r6);
    goto loc_800C9FD4;
}

loc_800C9FA4:
{
    r0 = (r25 + 10);
    r3 = 0x80250000u;
    r6_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r6_mrot_7 = (r6_rot_10 & 1984);
    r6_mdest_7 = (r6 & -1985);
    r6 = (r6_mdest_7 | r6_mrot_7);
    MemoryInline::FlatWrite32((r24 + 8), r6);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(5));
    r0 = (r0_rot_18 & 31);
    r3 = (r3 + -17744);
    r3_addr_4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_4);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(17));
    r4 = (r4_rot_4 & 31);
    r0_subfic_ra_4 = r0;
    r0 = (26 - r0_subfic_ra_4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(26) >= static_cast<uint32_t>(r0_subfic_ra_4) ? 1u : 0u) << 29);
    r0 = (r4 + r0);
    r6_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(15));
    r6_mrot_8 = (r6_rot_11 & 1015808);
    r6_mdest_8 = (r6 & -1015809);
    r6 = (r6_mdest_8 | r6_mrot_8);
    MemoryInline::FlatWrite32((r24 + 8), r6);
}

loc_800C9FD4:
{
    r3 = 0x80270000u;
    r0 = 108;
    r3 = (r3 + 21504);
    r5 = (r1 + 87);
    r4 = (r3 + -1);
    ctr = r0;
    // nop
}

loc_800C9FF0:
{
    r3 = MemoryInline::FlatRead8((r4 + 1));
    r4 = (r4 + 2);
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    r5_stbu_ea_4 = (r5 + 2);
    MemoryInline::FlatWrite8(r5_stbu_ea_4, static_cast<uint8_t>(r0));
    r5 = r5_stbu_ea_4;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800C9FF0;
    }
}

loc_800CA004:
{
    r18 = 0x80270000u;
    r18 = (r18 + 21720);
    guest_range_3 = MemoryInline::ResolveRangeHost(r18, 0, 18u, true, false);
    r31 = MemoryInline::ReadResolved8(guest_range_3, 0u, r18);
    guest_range_8 = MemoryInline::ResolveRangeHost((r1 + 28), 0, 18u, false, true);
    MemoryInline::WriteResolved8(guest_range_8, 0u, (r1 + 28), static_cast<uint8_t>(r31));
    r30 = (r29 & 255);
    r26 = MemoryInline::ReadResolved8(guest_range_3, 1u, (r18 + 1));
    r23 = MemoryInline::ReadResolved8(guest_range_3, 2u, (r18 + 2));
    r22 = MemoryInline::ReadResolved8(guest_range_3, 3u, (r18 + 3));
    r21 = MemoryInline::ReadResolved8(guest_range_3, 4u, (r18 + 4));
    r20 = MemoryInline::ReadResolved8(guest_range_3, 5u, (r18 + 5));
    r19 = MemoryInline::ReadResolved8(guest_range_3, 6u, (r18 + 6));
    r12 = MemoryInline::ReadResolved8(guest_range_3, 7u, (r18 + 7));
    r11 = MemoryInline::ReadResolved8(guest_range_3, 8u, (r18 + 8));
    r10 = MemoryInline::ReadResolved8(guest_range_3, 9u, (r18 + 9));
    r9 = MemoryInline::ReadResolved8(guest_range_3, 10u, (r18 + 10));
    r8 = MemoryInline::ReadResolved8(guest_range_3, 11u, (r18 + 11));
    r7 = MemoryInline::ReadResolved8(guest_range_3, 12u, (r18 + 12));
    r6 = MemoryInline::ReadResolved8(guest_range_3, 13u, (r18 + 13));
    r5 = MemoryInline::ReadResolved8(guest_range_3, 14u, (r18 + 14));
    r4 = MemoryInline::ReadResolved8(guest_range_3, 15u, (r18 + 15));
    r3 = MemoryInline::ReadResolved8(guest_range_3, 16u, (r18 + 16));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 17u, (r18 + 17));
    MemoryInline::WriteResolved8(guest_range_8, 1u, (r1 + 29), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_8, 2u, (r1 + 30), static_cast<uint8_t>(r23));
    MemoryInline::WriteResolved8(guest_range_8, 3u, (r1 + 31), static_cast<uint8_t>(r22));
    MemoryInline::WriteResolved8(guest_range_8, 4u, (r1 + 32), static_cast<uint8_t>(r21));
    MemoryInline::WriteResolved8(guest_range_8, 5u, (r1 + 33), static_cast<uint8_t>(r20));
    MemoryInline::WriteResolved8(guest_range_8, 6u, (r1 + 34), static_cast<uint8_t>(r19));
    MemoryInline::WriteResolved8(guest_range_8, 7u, (r1 + 35), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_8, 8u, (r1 + 36), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_8, 9u, (r1 + 37), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_8, 10u, (r1 + 38), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_8, 11u, (r1 + 39), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_8, 12u, (r1 + 40), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_8, 13u, (r1 + 41), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_8, 14u, (r1 + 42), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_8, 15u, (r1 + 43), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_8, 16u, (r1 + 44), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_8, 17u, (r1 + 45), static_cast<uint8_t>(r0));
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r5 = (r1 + 28);
    r4 = (r1 + 88);
    r5_addr_1 = (r5 + r30);
    r7 = MemoryInline::FlatRead8(r5_addr_1);
    r5 = (r30 * 12);
}

loc_800CA0B4:
{
    r0 = MemoryInline::FlatRead16((r24 + 12));
    r6 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r7));
    r6 = (r6 * r7);
    r3 = (r3 - r6);
    r3 = (r3 + r5);
    r4_addr_6 = (r4 + r3);
    r3 = MemoryInline::FlatRead8(r4_addr_6);
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(12));
    r0_mrot_6 = (r0_rot_20 & 61440);
    r0_mdest_6 = (r0 & -61441);
    r0 = (r0_mdest_6 | r0_mrot_6);
    MemoryInline::FlatWrite16((r24 + 12), static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_800CA0EC;
    }
}

loc_800CA0D8:
{
    r3 = 4;
    r0 = (r0 & 65535);
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_7 = (r0_rot_21 & 3840);
    r0_mdest_7 = (r0 & -3841);
    r0 = (r0_mdest_7 | r0_mrot_7);
    MemoryInline::FlatWrite16((r24 + 12), static_cast<uint16_t>(r0));
    goto loc_800CA0FC;
}

loc_800CA0EC:
{
    r3 = 3;
    r0 = (r0 & 65535);
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_8 = (r0_rot_22 & 3840);
    r0_mdest_8 = (r0 & -3841);
    r0 = (r0_mdest_8 | r0_mrot_8);
    MemoryInline::FlatWrite16((r24 + 12), static_cast<uint16_t>(r0));
}

loc_800CA0FC:
{
    r3 = 0x80270000u;
    r0 = (r25 + 9);
    r4 = MemoryInline::FlatRead16((r24 + 12));
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r4_mrot_0 = (r4_rot_6 & 248);
    r4_mdest_0 = (r4 & -249);
    r4 = (r4_mdest_0 | r4_mrot_0);
    r3 = (r3 + 21744);
    MemoryInline::FlatWrite16((r24 + 12), static_cast<uint16_t>(r4));
    r0 = 216;
    r5 = (r1 + 303);
    r4 = (r3 + -1);
    ctr = r0;
    // nop
}

loc_800CA128:
{
    r3 = MemoryInline::FlatRead8((r4 + 1));
    r4 = (r4 + 2);
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    r5_stbu_ea_6 = (r5 + 2);
    MemoryInline::FlatWrite8(r5_stbu_ea_6, static_cast<uint8_t>(r0));
    r5 = r5_stbu_ea_6;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800CA128;
    }
}

loc_800CA13C:
{
    r19 = 0x80270000u;
    r19 = (r19 + 22176);
    guest_range_4 = MemoryInline::ResolveRangeHost(r19, 0, 18u, true, false);
    r20 = MemoryInline::ReadResolved8(guest_range_4, 0u, r19);
    r30 = (r29 & 255);
    guest_range_9 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 18u, false, true);
    MemoryInline::WriteResolved8(guest_range_9, 0u, (r1 + 8), static_cast<uint8_t>(r20));
    r21 = MemoryInline::ReadResolved8(guest_range_4, 1u, (r19 + 1));
    r22 = MemoryInline::ReadResolved8(guest_range_4, 2u, (r19 + 2));
    r23 = MemoryInline::ReadResolved8(guest_range_4, 3u, (r19 + 3));
    r31 = MemoryInline::ReadResolved8(guest_range_4, 4u, (r19 + 4));
    r29 = MemoryInline::ReadResolved8(guest_range_4, 5u, (r19 + 5));
    r26 = MemoryInline::ReadResolved8(guest_range_4, 6u, (r19 + 6));
    r12 = MemoryInline::ReadResolved8(guest_range_4, 7u, (r19 + 7));
    r11 = MemoryInline::ReadResolved8(guest_range_4, 8u, (r19 + 8));
    r10 = MemoryInline::ReadResolved8(guest_range_4, 9u, (r19 + 9));
    r9 = MemoryInline::ReadResolved8(guest_range_4, 10u, (r19 + 10));
    r8 = MemoryInline::ReadResolved8(guest_range_4, 11u, (r19 + 11));
    r7 = MemoryInline::ReadResolved8(guest_range_4, 12u, (r19 + 12));
    r6 = MemoryInline::ReadResolved8(guest_range_4, 13u, (r19 + 13));
    r5 = MemoryInline::ReadResolved8(guest_range_4, 14u, (r19 + 14));
    r4 = MemoryInline::ReadResolved8(guest_range_4, 15u, (r19 + 15));
    r3 = MemoryInline::ReadResolved8(guest_range_4, 16u, (r19 + 16));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 17u, (r19 + 17));
    MemoryInline::WriteResolved8(guest_range_9, 1u, (r1 + 9), static_cast<uint8_t>(r21));
    MemoryInline::WriteResolved8(guest_range_9, 2u, (r1 + 10), static_cast<uint8_t>(r22));
    MemoryInline::WriteResolved8(guest_range_9, 3u, (r1 + 11), static_cast<uint8_t>(r23));
    MemoryInline::WriteResolved8(guest_range_9, 4u, (r1 + 12), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_9, 5u, (r1 + 13), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_9, 6u, (r1 + 14), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_9, 7u, (r1 + 15), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_9, 8u, (r1 + 16), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_9, 9u, (r1 + 17), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_9, 10u, (r1 + 18), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_9, 11u, (r1 + 19), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_9, 12u, (r1 + 20), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_9, 13u, (r1 + 21), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_9, 14u, (r1 + 22), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_9, 15u, (r1 + 23), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_9, 16u, (r1 + 24), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_9, 17u, (r1 + 25), static_cast<uint8_t>(r0));
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r5 = (r1 + 8);
    r4 = (r1 + 304);
    r5_addr_2 = (r5 + r30);
    r7 = MemoryInline::FlatRead8(r5_addr_2);
    r5 = (r30 * 24);
}

loc_800CA1EC:
{
    r0 = MemoryInline::FlatRead16((r24 + 14));
    r6 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r7));
    r6 = (r6 * r7);
    r3 = (r3 - r6);
    r3 = (r3 + r5);
    r4_addr_7 = (r4 + r3);
    r3 = MemoryInline::FlatRead8(r4_addr_7);
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(11));
    r0_mrot_10 = (r0_rot_24 & 63488);
    r0_mdest_10 = (r0 & -63489);
    r0 = (r0_mdest_10 | r0_mrot_10);
    MemoryInline::FlatWrite16((r24 + 14), static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_800CA220;
    }
}

loc_800CA210:
{
    r0 = (r0 & 65535);
    r0 = (r0 & -1537);
    MemoryInline::FlatWrite16((r24 + 14), static_cast<uint16_t>(r0));
    goto loc_800CA248;
}

loc_800CA220:
{
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r4 = -1431633920;
    r0 = MemoryInline::FlatRead16((r24 + 14));
    r4 = (r4 + -21845);
    r4 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r3)) >> 32));
    r4_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r4 = (r4_rot_7 & 2147483647);
    r4 = (r4 * 3);
    r3 = (r3 - r4);
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(9));
    r0_mrot_11 = (r0_rot_25 & 1536);
    r0_mdest_11 = (r0 & -1537);
    r0 = (r0_mdest_11 | r0_mrot_11);
    MemoryInline::FlatWrite16((r24 + 14), static_cast<uint16_t>(r0));
}

loc_800CA248:
{
    r0 = 4;
    r3 = MemoryInline::FlatRead16((r24 + 14));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r3_mrot_2 = (r3_rot_5 & 480);
    r3_mdest_2 = (r3 & -481);
    r3 = (r3_mdest_2 | r3_mrot_2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_800CA258:
{
    r0 = (r25 + 13);
    r3_mrot_3 = (r0 & 31);
    r3_mdest_3 = (r3 & -32);
    r3 = (r3_mdest_3 | r3_mrot_3);
    MemoryInline::FlatWrite16((r24 + 14), static_cast<uint16_t>(r3));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CA3A4;
    }
}

loc_800CA268:
{
    r0 = (r27 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_800CA270:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800CA3A4;
    }
}

loc_800CA274:
{
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r4 = -858980352;
    r0 = (r4 + -13107);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r3)) >> 32));
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_27 & 536870911);
    r0 = (r0 * 10);
    r0 = (r3 - r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_800CA294:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CA3A4;
    }
}

loc_800CA298:
{
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r26 = -1431633920;
    r0 = (r26 + -21845);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r3)) >> 32));
    r0_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_28 & 2147483647);
    r0 = (r0 * 3);
    r0 = (r3 - r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CA2F0;
    }
}

loc_800CA2B8:
{
    r0 = MemoryInline::FlatRead16((r24 + 16));
    r0 = (r0 & -49153);
    MemoryInline::FlatWrite16((r24 + 16), static_cast<uint16_t>(r0));
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r4 = (r26 + -21845);
    r0 = MemoryInline::FlatRead16((r24 + 16));
    r4 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r3)) >> 32));
    r4_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r4 = (r4_rot_9 & 2147483647);
    r4 = (r4 * 3);
    r3 = (r3 - r4);
    r3 = (r3 + 1);
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(12));
    r0_mrot_13 = (r0_rot_29 & 12288);
    r0_mdest_13 = (r0 & -12289);
    r0 = (r0_mdest_13 | r0_mrot_13);
    MemoryInline::FlatWrite16((r24 + 16), static_cast<uint16_t>(r0));
    goto loc_800CA380;
}

loc_800CA2F0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_800CA2F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CA328;
    }
}

loc_800CA2F8:
{
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r4 = (r26 + -21845);
    r0 = MemoryInline::FlatRead16((r24 + 16));
    r4 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r3)) >> 32));
    r4_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r4 = (r4_rot_10 & 2147483647);
    r4 = (r4 * 3);
    r3 = (r3 - r4);
    r3 = (r3 + 1);
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(14));
    r0_mrot_14 = (r0_rot_30 & 49152);
    r0_mdest_14 = (r0 & -49153);
    r0 = (r0_mdest_14 | r0_mrot_14);
    r0 = (r0 & -12289);
    MemoryInline::FlatWrite16((r24 + 16), static_cast<uint16_t>(r0));
    goto loc_800CA380;
}

loc_800CA328:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_800CA32C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CA380;
    }
}

loc_800CA330:
{
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r4 = (r26 + -21845);
    r0 = MemoryInline::FlatRead16((r24 + 16));
    r4 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r3)) >> 32));
    r4_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r4 = (r4_rot_11 & 2147483647);
    r4 = (r4 * 3);
    r3 = (r3 - r4);
    r3 = (r3 + 1);
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(14));
    r0_mrot_15 = (r0_rot_31 & 49152);
    r0_mdest_15 = (r0 & -49153);
    r0 = (r0_mdest_15 | r0_mrot_15);
    MemoryInline::FlatWrite16((r24 + 16), static_cast<uint16_t>(r0));
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r4 = (r26 + -21845);
    r0 = MemoryInline::FlatRead16((r24 + 16));
    r4 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r3)) >> 32));
    r4_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r4 = (r4_rot_12 & 2147483647);
    r4 = (r4 * 3);
    r3 = (r3 - r4);
    r3 = (r3 + 1);
    r0_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(12));
    r0_mrot_16 = (r0_rot_32 & 12288);
    r0_mdest_16 = (r0 & -12289);
    r0 = (r0_mdest_16 | r0_mrot_16);
    MemoryInline::FlatWrite16((r24 + 16), static_cast<uint16_t>(r0));
}

loc_800CA380:
{
    r5 = MemoryInline::FlatRead16((r24 + 2));
    r3 = 4;
    r4 = MemoryInline::FlatRead16((r24 + 16));
    r0 = 10;
    r4_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r4_mrot_1 = (r4_rot_14 & 3584);
    r4_mdest_1 = (r4 & -3585);
    r4 = (r4_mdest_1 | r4_mrot_1);
    r4_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(5));
    r4_mrot_2 = (r4_rot_15 & 480);
    r4_mdest_2 = (r4 & -481);
    r4 = (r4_mdest_2 | r4_mrot_2);
    r4_mrot_3 = (r0 & 31);
    r4_mdest_3 = (r4 & -32);
    r4 = (r4_mdest_3 | r4_mrot_3);
    MemoryInline::FlatWrite16((r24 + 16), static_cast<uint16_t>(r4));
    goto loc_800CA3B0;
}

loc_800CA3A4:
{
    r0 = MemoryInline::FlatRead16((r24 + 16));
    r0 = (r0 & -65536);
    MemoryInline::FlatWrite16((r24 + 16), static_cast<uint16_t>(r0));
}

loc_800CA3B0:
{
    r3 = r27;
    ctx->lr = 0x800CA3B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CA660u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead16((r24 + 18));
    r4_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(12));
    r4_mrot_5 = (r4_rot_17 & 61440);
    r4_mdest_5 = (r4 & -61441);
    r4 = (r4_mdest_5 | r4_mrot_5);
    r0 = MemoryInline::FlatRead16((r24 + 20));
    r5 = 4;
    r4 = (r4 & -3585);
    r3 = (r25 + 10);
    r4_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
    r4_mrot_6 = (r4_rot_18 & 480);
    r4_mdest_6 = (r4 & -481);
    r4 = (r4_mdest_6 | r4_mrot_6);
    r0 = (r0 & -32769);
    r4_mrot_7 = (r3 & 31);
    r4_mdest_7 = (r4 & -32);
    r4 = (r4_mdest_7 | r4_mrot_7);
    MemoryInline::FlatWrite16((r24 + 18), static_cast<uint16_t>(r4));
    r0_rot_36 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(11));
    r0_mrot_19 = (r0_rot_36 & 30720);
    r0_mdest_19 = (r0 & -30721);
    r0 = (r0_mdest_19 | r0_mrot_19);
    MemoryInline::FlatWrite16((r24 + 20), static_cast<uint16_t>(r0));
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r4 = -252641280;
    r0 = MemoryInline::FlatRead16((r24 + 20));
    r4 = (r4 + -3855);
    r4 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r3)) >> 32));
    r4_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(28));
    r4 = (r4_rot_19 & 268435455);
    r4 = (r4 * 17);
    r3 = (r3 - r4);
    r0_rot_37 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(6));
    r0_mrot_20 = (r0_rot_37 & 1984);
    r0_mdest_20 = (r0 & -1985);
    r0 = (r0_mdest_20 | r0_mrot_20);
    MemoryInline::FlatWrite16((r24 + 20), static_cast<uint16_t>(r0));
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r4 = 138543104;
    r0 = 64;
    r4 = (r4 + 4229);
    MemoryInline::FlatWrite8((r24 + 22), static_cast<uint8_t>(r0));
    r7 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r3)) >> 32));
    r6 = MemoryInline::FlatRead16((r24 + 20));
    r4 = 0x80270000u;
    MemoryInline::FlatWrite8((r24 + 23), static_cast<uint8_t>(r0));
    r25 = 0;
    r4 = (r4 + 20584);
    r5 = (r3 - r7);
    r0_rot_38 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r0 = (r0_rot_38 & 2147483647);
    r0 = (r0 + r7);
    r5 = 7;
    r0_rot_39 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_39 & 268435455);
    r0 = (r0 * 31);
    r0 = (r3 - r0);
    r3 = (r24 + 24);
    r6_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r6_mrot_10 = (r6_rot_13 & 62);
    r6_mdest_10 = (r6 & -63);
    r6 = (r6_mdest_10 | r6_mrot_10);
    MemoryInline::FlatWrite16((r24 + 20), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r24 + 24), static_cast<uint16_t>(r25));
    MemoryInline::FlatWrite16((r24 + 26), static_cast<uint16_t>(r25));
    MemoryInline::FlatWrite16((r24 + 28), static_cast<uint16_t>(r25));
    MemoryInline::FlatWrite16((r24 + 30), static_cast<uint16_t>(r25));
    MemoryInline::FlatWrite16((r24 + 32), static_cast<uint16_t>(r25));
    MemoryInline::FlatWrite16((r24 + 34), static_cast<uint16_t>(r25));
    MemoryInline::FlatWrite16((r24 + 36), static_cast<uint16_t>(r25));
    MemoryInline::FlatWrite16((r24 + 38), static_cast<uint16_t>(r25));
    MemoryInline::FlatWrite16((r24 + 40), static_cast<uint16_t>(r25));
    MemoryInline::FlatWrite16((r24 + 42), static_cast<uint16_t>(r25));
    MemoryInline::FlatWrite16((r24 + 44), static_cast<uint16_t>(r25));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800179D0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite16((r24 + 46), static_cast<uint16_t>(r25));
    MemoryInline::FlatWrite16((r24 + 48), static_cast<uint16_t>(r25));
    MemoryInline::FlatWrite16((r24 + 50), static_cast<uint16_t>(r25));
    MemoryInline::FlatWrite16((r24 + 52), static_cast<uint16_t>(r25));
    MemoryInline::FlatWrite16((r24 + 54), static_cast<uint16_t>(r25));
    MemoryInline::FlatWrite16((r24 + 56), static_cast<uint16_t>(r25));
    MemoryInline::FlatWrite16((r24 + 58), static_cast<uint16_t>(r25));
    MemoryInline::FlatWrite16((r24 + 60), static_cast<uint16_t>(r25));
    MemoryInline::FlatWrite16((r24 + 62), static_cast<uint16_t>(r25));
    MemoryInline::FlatWrite16((r24 + 64), static_cast<uint16_t>(r25));
    MemoryInline::FlatWrite16((r24 + 66), static_cast<uint16_t>(r25));
    r0 = MemoryInline::FlatRead16((r24 + 68));
    r0_rot_40 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(15));
    r0_mrot_21 = (r0_rot_40 & 32768);
    r0_mdest_21 = (r0 & -32769);
    r0 = (r0_mdest_21 | r0_mrot_21);
    r0 = (r0 & -32705);
    MemoryInline::FlatWrite16((r24 + 68), static_cast<uint16_t>(r0));
    // inline leaf 0x801AAD74 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x801AAD74
    r4 = -1431633920;
    r0 = MemoryInline::FlatRead16((r24 + 68));
    r4 = (r4 + -21845);
    r11 = (r1 + 1664);
    r4 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r3)) >> 32));
    r4_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
    r4 = (r4_rot_20 & 536870911);
    r4 = (r4 * 12);
    r3 = (r3 - r4);
    r0_rot_41 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0_mrot_22 = (r0_rot_41 & 60);
    r0_mdest_22 = (r0 & -61);
    r0 = (r0_mdest_22 | r0_mrot_22);
    r0 = (r0 & -4);
    MemoryInline::FlatWrite16((r24 + 68), static_cast<uint16_t>(r0));
    // inline leaf 0x800215C0 (17 guest instruction(s))
    guest_range_5 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 0u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 8u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_5, 12u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 16u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_5, 16u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_5, 20u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 24u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_5, 24u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_5, 28u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 32u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_5, 32u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_5, 36u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 40u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_5, 40u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_5, 44u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 48u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_5, 48u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_5, 52u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 56u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_5, 56u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_5, 60u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215C0
    r0 = MemoryInline::FlatRead32((r1 + 1668));
    ctx->lr = r0;
    r1 = (r1 + 1664);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFF07FB gpr_write=0xFFFF1FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800C9B00 func_800C9B00 preserves=true fpr_mask=0x00000000
