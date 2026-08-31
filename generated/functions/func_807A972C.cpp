#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A972C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_807A99DC_loc_0 = 0;
    uint32_t addr_lfsx_807A99E4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_10 = 0;
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
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
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
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807A972C;

loc_807A972C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8002158C (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002158C
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 16), 0, 48u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 16), r0);
    r4 = 0x809C0000u;
    r24 = r3;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 24), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 28), r0);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 32), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 36), r0);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 40), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 44), r0);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r3 + 48), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r3 + 52), r0);
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r3 + 56), r0);
    }
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r3 + 60), r0);
    r0 = MemoryInline::FlatRead8((r4 + 14523));
}

loc_807A9784:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807A981C;
    }
}

loc_807A9788:
{
    r4 = 0x809C0000u;
    r8 = r24;
    r4 = MemoryInline::FlatRead8((r4 + 14520));
    r9 = 0;
    r5 = 0x809C0000u;
    r0 = 2;
    ctr = r4;
}

loc_807A97A8:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_807A9954;
    }
}

loc_807A97AC:
{
    r4 = MemoryInline::FlatRead16((r3 + 4));
    r6 = MemoryInline::FlatRead32((r5 + -10456));
    r4 = (r4 & 255);
    r4 = (r4 * 240);
    r4 = (r6 + r4);
    r7 = MemoryInline::FlatRead32((r4 + 244));
}

loc_807A97C8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(2))) {
        goto loc_807A97D4;
    }
}

loc_807A97CC:
{
    r4 = 0;
    goto loc_807A9800;
}

loc_807A97D4:
{
    r4 = (r9 & 255);
    r4 = (r4 * 240);
    r4 = (r6 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 244));
}

loc_807A97E8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_807A97F4;
    }
}

loc_807A97EC:
{
    r4 = 0;
    goto loc_807A9800;
}

loc_807A97F4:
{
    r4 = (r4 - r7);
    r4 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r4 = (r4_rot_2 & 134217727);
}

loc_807A9800:
{
}

loc_807A9804:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_807A980C;
    }
}

loc_807A9808:
{
    MemoryInline::FlatWrite32((r8 + 16), r0);
}

loc_807A980C:
{
    r8 = (r8 + 4);
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807A97AC;
    }
}

loc_807A9818:
{
    goto loc_807A9954;
}

loc_807A981C:
{
    r27 = 0x809C0000u;
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r3 = MemoryInline::FlatRead32((r27 + -10448));
    r26 = 1;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r30 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r31 = 0x809C0000u;
    r29 = 0x809C0000u;
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r28 = MemoryInline::FlatRead8((r3 + 32));
}

loc_807A9848:
{
    r4 = MemoryInline::FlatRead32((r27 + -10448));
    r3 = (r26 & 255);
    r0 = MemoryInline::FlatRead8((r29 + 14525));
    r4 = MemoryInline::FlatRead32((r4 + 24));
}

loc_807A985C:
{
    r3 = (r4 + r3);
    r25 = MemoryInline::FlatRead8((r3 + -1));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807A98C0;
    }
}

loc_807A9868:
{
    r0 = MemoryInline::FlatRead16((r24 + 4));
    r4 = MemoryInline::FlatRead32((r30 + -10456));
    r0 = (r0 & 255);
    r0 = (r0 * 240);
    r3 = (r4 + r0);
    r5 = MemoryInline::FlatRead32((r3 + 244));
}

loc_807A9884:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(2))) {
        goto loc_807A9890;
    }
}

loc_807A9888:
{
    r0 = 0;
    goto loc_807A98B8;
}

loc_807A9890:
{
    r0 = (r25 * 240);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 244));
}

loc_807A98A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_807A98AC;
    }
}

loc_807A98A4:
{
    r0 = 0;
    goto loc_807A98B8;
}

loc_807A98AC:
{
    r0 = (r0 - r5);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_3 & 134217727);
}

loc_807A98B8:
{
}

loc_807A98BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807A9944;
    }
}

loc_807A98C0:
{
    r3 = MemoryInline::FlatRead32((r31 + 13848));
    r0 = (r25 * 584);
    r23 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r22 = (r3 + r0);
    r3 = r22;
    // inline leaf 0x80591314 (12 guest instruction(s))
}

loc_inl1_0x80591314:
{
    r4 = MemoryInline::FlatRead32(r3);
    r3 = 1;
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & 2);
}

loc_inl1_0x80591328:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8059132C:
{
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r4 & 524288);
    r0_mrot_2 = (r4 & 24576);
    r0_mdest_2 = (r0 & -24577);
    r0 = (r0_mdest_2 | r0_mrot_2);
}

loc_inl1_0x80591338:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8059133C:
{
    r3 = 0;
    goto loc_inl1_cont_80591314;
}

loc_inl1_return:
{
}

loc_inl1_cont_80591314:
{
    // end of inlined leaf 0x80591314
}

loc_807A98E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_807A9918;
    }
}

loc_807A98E4:
{
    r0 = MemoryInline::FlatRead32((r22 + 576));
}

loc_807A98EC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_807A9918;
    }
}

loc_807A98F0:
{
    r3 = MemoryInline::FlatRead32(r22);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r3 & -2147483648);
    r0_mrot_5 = (r3 & 16);
    r0_mdest_5 = (r0 & -17);
    r0 = (r0_mdest_5 | r0_mrot_5);
}

loc_807A9904:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807A9918;
    }
}

loc_807A9908:
{
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r3 & 134217728);
    r0_mrot_6 = (r3 & 32768);
    r0_mdest_6 = (r0 & -32769);
    r0 = (r0_mdest_6 | r0_mrot_6);
}

loc_807A9914:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807A991C;
    }
}

loc_807A9918:
{
    r23 = 1;
}

loc_807A991C:
{
}

loc_807A9920:
{
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_807A9944;
    }
}

loc_807A9924:
{
    r3 = (r26 & 65535);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r3 + -1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r3) >> 2);
    r3 = (r24 + r0);
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r4 + r0_ca_2);
    r0_subfic_ra_2 = r0;
    r0 = (3 - r0_subfic_ra_2);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(3) >= static_cast<uint32_t>(r0_subfic_ra_2) ? 1u : 0u) << 29);
    MemoryInline::FlatWrite32((r3 + 16), r0);
}

loc_807A9944:
{
    r26 = (r26 + 1);
    r0 = (r26 & 65535);
}

loc_807A9950:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r28))) {
        goto loc_807A9848;
    }
}

loc_807A9954:
{
    r3 = 0x809C0000u;
    r28 = 0x808A0000u;
    r27 = 0x808A0000u;
    r26 = MemoryInline::FlatRead8((r3 + 14520));
    r31 = r24;
    r28 = (r28 + 22624);
    r27 = (r27 + 22636);
    r25 = 0;
    r30 = 0x809C0000u;
    r29 = 0x809C0000u;
    goto loc_807A99F4;
}

loc_807A9980:
{
    r3 = MemoryInline::FlatRead32((r30 + 6392));
    r4 = r25;
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    // end of inlined leaf 0x80590100
    r22 = r3;
    // inline leaf 0x80590DE0 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x80590DE0
}

loc_807A9998:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807A99EC;
    }
}

loc_807A999C:
{
    r0 = MemoryInline::FlatRead32((r31 + 16));
}

loc_807A99A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807A99EC;
    }
}

loc_807A99A8:
{
    r3 = r22;
    // inline leaf 0x80590E04 (9 guest instruction(s))
}

loc_inl4_0x80590E04:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl4_0x80590E10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl4_0x80590E20;
    }
}

loc_inl4_0x80590E14:
{
    r3 = MemoryInline::FlatRead32((r3 + 140));
    r3 = MemoryInline::FlatRead32((r3 + 104));
    goto loc_inl4_cont_80590E04;
}

loc_inl4_0x80590E20:
{
    r3 = -1;
}

loc_inl4_cont_80590E04:
{
    // end of inlined leaf 0x80590E04
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_3 & -4);
    r0 = (r25 & 255);
    r3 = (r24 + r3);
    r23 = MemoryInline::FlatRead32((r3 + 68));
    r0 = (r0 * 240);
    MemoryInline::FlatWrite16((r23 + 14), static_cast<uint16_t>(r25));
    r3 = MemoryInline::FlatRead32((r29 + -10456));
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 52));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8081CD3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    addr_lfsx_807A99DC_loc_0 = (r28 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_807A99DC_loc_0);
    MemoryInline::FlatWriteFloat32((r23 + 200), f0.d);
    addr_lfsx_807A99E4_loc_0 = (r27 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_807A99E4_loc_0);
    MemoryInline::FlatWriteFloat32((r23 + 204), f0.d);
}

loc_807A99EC:
{
    r31 = (r31 + 4);
    r25 = (r25 + 1);
}

loc_807A99F4:
{
}

loc_807A99F8:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(r26))) {
        goto loc_807A9980;
    }
}

loc_807A99FC:
{
    r22 = r24;
    r26 = 0;
    r25 = 3;
    goto loc_807A9A34;
}

loc_807A9A0C:
{
    r23 = MemoryInline::FlatRead32((r22 + 68));
    r0 = MemoryInline::FlatRead16((r23 + 14));
}

loc_807A9A18:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_807A9A2C;
    }
}

loc_807A9A1C:
{
    r3 = MemoryInline::FlatRead32((r23 + 4));
    r4 = MemoryInline::FlatRead32((r23 + 8));
    // inline leaf 0x8055CCF8 (6 guest instruction(s))
    r0 = 65536;
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = (r5 & ~r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x8055CCF8
    MemoryInline::FlatWrite32(r23, r25);
}

loc_807A9A2C:
{
    r22 = (r22 + 4);
    r26 = (r26 + 1);
}

loc_807A9A34:
{
    r0 = MemoryInline::FlatRead32(r24);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(r0));
}

loc_807A9A3C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807A9A0C;
    }
}

loc_807A9A40:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215D8 (11 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFC003FB gpr_write=0xFFC00BFB gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x807A972C func_807A972C preserves=true fpr_mask=0x00000000
