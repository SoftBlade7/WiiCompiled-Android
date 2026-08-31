#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801B6F7C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_10 = 0;
    uint32_t r10_rot_11 = 0;
    uint32_t r10_rot_12 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r10_rot_6 = 0;
    uint32_t r10_rot_7 = 0;
    uint32_t r10_rot_8 = 0;
    uint32_t r10_rot_9 = 0;
    uint32_t r12_addc_left_0 = 0;
    uint32_t r12_addc_left_1 = 0;
    uint32_t r12_addc_left_2 = 0;
    uint32_t r12_addc_left_3 = 0;
    uint32_t r12_addc_right_0 = 0;
    uint32_t r12_addc_right_1 = 0;
    uint32_t r12_addc_right_2 = 0;
    uint32_t r12_addc_right_3 = 0;
    uint32_t r12_ca_0 = 0;
    uint32_t r12_ca_1 = 0;
    uint32_t r12_ca_2 = 0;
    uint32_t r12_ca_3 = 0;
    uint32_t r12_ca_4 = 0;
    uint32_t r12_ca_5 = 0;
    uint32_t r12_ca_6 = 0;
    uint32_t r12_ca_7 = 0;
    uint32_t r12_mdest_0 = 0;
    uint32_t r12_mdest_1 = 0;
    uint32_t r12_mdest_2 = 0;
    uint32_t r12_mdest_3 = 0;
    uint32_t r12_mdest_4 = 0;
    uint32_t r12_mdest_5 = 0;
    uint32_t r12_mrot_0 = 0;
    uint32_t r12_mrot_1 = 0;
    uint32_t r12_mrot_2 = 0;
    uint32_t r12_mrot_3 = 0;
    uint32_t r12_mrot_4 = 0;
    uint32_t r12_mrot_5 = 0;
    uint32_t r12_not_0 = 0;
    uint32_t r12_not_1 = 0;
    uint32_t r12_not_2 = 0;
    uint32_t r12_not_3 = 0;
    uint32_t r12_not_4 = 0;
    uint32_t r12_not_5 = 0;
    uint32_t r12_not_6 = 0;
    uint32_t r12_not_7 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r12_rot_5 = 0;
    uint32_t r12_rot_6 = 0;
    uint32_t r12_rot_7 = 0;
    uint32_t r12_rot_8 = 0;
    uint32_t r12_rot_9 = 0;
    uint32_t r20_ca_0 = 0;
    uint32_t r20_ca_1 = 0;
    uint32_t r20_ca_2 = 0;
    uint32_t r20_ca_3 = 0;
    uint32_t r21_ca_0 = 0;
    uint32_t r21_ca_1 = 0;
    uint32_t r21_ca_2 = 0;
    uint32_t r21_ca_3 = 0;
    uint32_t r21_ca_4 = 0;
    uint32_t r21_ca_5 = 0;
    uint32_t r21_not_0 = 0;
    uint32_t r21_not_1 = 0;
    uint32_t r21_not_2 = 0;
    uint32_t r21_not_3 = 0;
    uint32_t r21_not_4 = 0;
    uint32_t r21_rot_0 = 0;
    uint32_t r21_rot_1 = 0;
    uint32_t r21_rot_2 = 0;
    uint32_t r21_rot_3 = 0;
    uint32_t r23_addc_right_0 = 0;
    uint32_t r23_addc_right_1 = 0;
    uint32_t r23_addc_right_2 = 0;
    uint32_t r23_addc_right_3 = 0;
    uint32_t r23_ca_0 = 0;
    uint32_t r23_ca_1 = 0;
    uint32_t r23_ca_2 = 0;
    uint32_t r23_ca_3 = 0;
    uint32_t r23_ca_4 = 0;
    uint32_t r23_mdest_0 = 0;
    uint32_t r23_mdest_1 = 0;
    uint32_t r23_mdest_2 = 0;
    uint32_t r23_mdest_3 = 0;
    uint32_t r23_mrot_0 = 0;
    uint32_t r23_mrot_1 = 0;
    uint32_t r23_mrot_2 = 0;
    uint32_t r23_mrot_3 = 0;
    uint32_t r23_not_0 = 0;
    uint32_t r23_not_1 = 0;
    uint32_t r23_not_2 = 0;
    uint32_t r23_not_3 = 0;
    uint32_t r23_not_4 = 0;
    uint32_t r23_rot_0 = 0;
    uint32_t r23_rot_1 = 0;
    uint32_t r23_rot_2 = 0;
    uint32_t r23_rot_3 = 0;
    uint32_t r23_rot_4 = 0;
    uint32_t r23_rot_5 = 0;
    uint32_t r24_addc_right_0 = 0;
    uint32_t r24_addc_right_1 = 0;
    uint32_t r24_addc_right_2 = 0;
    uint32_t r24_addc_right_3 = 0;
    uint32_t r24_ca_0 = 0;
    uint32_t r24_ca_1 = 0;
    uint32_t r24_ca_2 = 0;
    uint32_t r24_ca_3 = 0;
    uint32_t r24_ca_4 = 0;
    uint32_t r24_ca_5 = 0;
    uint32_t r24_ca_6 = 0;
    uint32_t r24_not_0 = 0;
    uint32_t r24_not_1 = 0;
    uint32_t r24_not_2 = 0;
    uint32_t r24_not_3 = 0;
    uint32_t r24_not_4 = 0;
    uint32_t r28_addc_left_0 = 0;
    uint32_t r28_addc_left_1 = 0;
    uint32_t r28_addc_left_2 = 0;
    uint32_t r28_addc_left_3 = 0;
    uint32_t r3_adde_left_0 = 0;
    uint32_t r3_adde_left_1 = 0;
    uint32_t r3_adde_left_2 = 0;
    uint32_t r3_adde_left_3 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_adde_right_1 = 0;
    uint32_t r3_adde_right_2 = 0;
    uint32_t r3_adde_right_3 = 0;
    uint32_t r3_adde_right_4 = 0;
    uint32_t r3_adde_right_5 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_ca_4 = 0;
    uint32_t r3_ca_5 = 0;
    uint32_t r3_ca_6 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mdest_3 = 0;
    uint32_t r3_mdest_4 = 0;
    uint32_t r3_mdest_5 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_mrot_3 = 0;
    uint32_t r3_mrot_4 = 0;
    uint32_t r3_mrot_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r5_adde_right_0 = 0;
    uint32_t r5_adde_right_1 = 0;
    uint32_t r5_adde_right_2 = 0;
    uint32_t r5_adde_right_3 = 0;
    uint32_t r5_ca_0 = 0;
    uint32_t r5_ca_1 = 0;
    uint32_t r5_ca_2 = 0;
    uint32_t r5_ca_3 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mdest_2 = 0;
    uint32_t r5_mdest_3 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_mrot_2 = 0;
    uint32_t r5_mrot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r6_ca_0 = 0;
    uint32_t r6_ca_1 = 0;
    uint32_t r6_ca_2 = 0;
    uint32_t r6_ca_3 = 0;
    uint32_t r6_ca_4 = 0;
    uint32_t r6_not_0 = 0;
    uint32_t r6_not_1 = 0;
    uint32_t r6_not_2 = 0;
    uint32_t r6_not_3 = 0;
    uint32_t r6_not_4 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r7_adde_left_0 = 0;
    uint32_t r7_adde_left_1 = 0;
    uint32_t r7_adde_left_2 = 0;
    uint32_t r7_adde_left_3 = 0;
    uint32_t r7_ca_0 = 0;
    uint32_t r7_ca_1 = 0;
    uint32_t r7_ca_2 = 0;
    uint32_t r7_ca_3 = 0;
    uint32_t r7_ca_4 = 0;
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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t xer = ctx->xer;

    goto loc_801B6F7C;

loc_801B6F7C:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80021584 (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021584
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801B6F94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B6FA0;
    }
}

loc_801B6F98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801B6F9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B6FA8;
    }
}

loc_801B6FA0:
{
    r3 = 0;
    goto loc_801B73F8;
}

loc_801B6FA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(1));
}

loc_801B6FAC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 80u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r20 = (r4 + 80);
    r12 = (r20 + r5);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B6FD4;
    }
}

loc_801B6FBC:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
    r30 = r3;
    r8 = 1;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r31 = (r3 + r0);
    goto loc_801B6FE0;
}

loc_801B6FD4:
{
    r30 = r3;
    r31 = (r3 + 2);
    r8 = 2;
}

loc_801B6FE0:
{
}

loc_801B6FE4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_801B714C;
    }
}

loc_801B6FE8:
{
    r5 = MemoryInline::FlatRead8(r20);
    r23 = 0x80000000u;
    r11 = 0;
    r3 = 65536;
    r9 = MemoryInline::ReadResolved16(guest_range_1, 72u, (r4 + 72));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(28));
    r0 = (r0_rot_3 & 7);
    r7 = (r5 & 15);
    r10 = MemoryInline::ReadResolved16(guest_range_1, 74u, (r4 + 74));
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_0 & -2);
    r5 = (r20 + 1);
    r27 = (r3 + -32768);
    r25 = (r23 + -1);
    r24 = (r11 ^ -2147483648);
    r6 = 2;
    r26 = 0;
    r22 = -1;
    goto loc_801B713C;
}

loc_801B702C:
{
    r3 = (r6 & 15);
}

loc_801B7030:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801B7048;
    }
}

loc_801B7034:
{
    r3 = MemoryInline::FlatRead8(r5);
    r5 = (r5 + 1);
    r6 = (r6 + 2);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(28));
    r0 = (r0_rot_5 & 7);
    r7 = (r3 & 15);
}

loc_801B7048:
{
    r3 = (r6 & 1);
}

loc_801B704C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801B7064;
    }
}

loc_801B7050:
{
    r3 = MemoryInline::FlatRead8(r5);
    r5 = (r5 + 1);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(28));
    r3 = (r3_rot_2 & -268435456);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(28) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r21 = (static_cast<int32_t>(r3) >> 28);
    goto loc_801B7070;
}

loc_801B7064:
{
    r3 = MemoryInline::FlatRead8(r5);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r3 = (r3_rot_3 & -268435456);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(28) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r21 = (static_cast<int32_t>(r3) >> 28);
}

loc_801B7070:
{
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r12 = (r12_rot_2 & 1020);
    r3 = (r7 & 255);
    r12 = (r4 + r12);
    r28 = (static_cast<int32_t>(static_cast<int16_t>(r10)));
    r10 = MemoryInline::FlatRead16((r12 + 10));
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    r3 = PPC_Slw(static_cast<uint32_t>(r21), static_cast<uint32_t>(r3));
    r12 = MemoryInline::FlatRead16((r12 + 8));
    r12 = (r12 << 16);
    r12 = (static_cast<int32_t>(r12) >> 16);
    r21 = (static_cast<int32_t>(static_cast<int16_t>(r9)));
    r28 = (r28 * r10);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(11));
    r10 = (r10_rot_2 & -2048);
    r6 = (r6 + 1);
    r21 = (r21 * r12);
    r3 = (static_cast<int32_t>(r28) >> 31);
    r12 = (static_cast<int32_t>(r21) >> 31);
    r28_addc_left_2 = r28;
    r28 = (r28_addc_left_2 + r21);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r28_addc_left_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r21)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r21_ca_2 = (xer >> 29) & 1u;
    r21 = (r3 + r12);
    r21 = (r21 + r21_ca_2);
    r3 = (static_cast<int32_t>(r10) >> 31);
    r12 = (r28 + r10);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r28)) + static_cast<uint64_t>(static_cast<uint32_t>(r10)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3_adde_right_2 = r3;
    r3_ca_2 = (xer >> 29) & 1u;
    r3 = (r21 + r3_adde_right_2);
    r3 = (r3 + r3_ca_2);
    r10_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(5));
    r10 = (r10_rot_3 & -32);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(5));
    r3 = (r3_rot_5 & -32);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(5));
    r3_mrot_2 = (r3_rot_6 & 31);
    r3_mdest_2 = (r3 & -32);
    r3 = (r3_mdest_2 | r3_mrot_2);
    r20 = (r10 + r27);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r10)) + static_cast<uint64_t>(static_cast<uint32_t>(r27)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3_adde_left_2 = r3;
    r3_ca_3 = (xer >> 29) & 1u;
    r3 = (r3_adde_left_2 + r26);
    r3 = (r3 + r3_ca_3);
    r12 = (r3 ^ -2147483648);
    r10 = (r25 - r20);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r25) >= static_cast<uint32_t>(r20) ? 1u : 0u) << 29);
    r12_not_2 = ~(r12);
    r12_ca_2 = (xer >> 29) & 1u;
    r12 = (r12_not_2 + r24);
    r12 = (r12 + r12_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r12_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r24)) + (static_cast<uint64_t>(static_cast<uint32_t>(r12_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r12_not_3 = ~(r24);
    r12_ca_3 = (xer >> 29) & 1u;
    r12 = (r12_not_3 + r24);
    r12 = (r12 + r12_ca_3);
    r12 = (0 - r12);
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_801B70F0;
    }
}

loc_801B70E8:
{
    r20 = (r23 + -1);
    r3 = 0;
}

loc_801B70F0:
{
    r10 = (r3 ^ -2147483648);
    r21 = (r22 ^ -2147483648);
    r12 = (r20 - r23);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r20) >= static_cast<uint32_t>(r23) ? 1u : 0u) << 29);
    r21_not_2 = ~(r21);
    r21_ca_3 = (xer >> 29) & 1u;
    r21 = (r21_not_2 + r10);
    r21 = (r21 + r21_ca_3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r21_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r10)) + (static_cast<uint64_t>(static_cast<uint32_t>(r21_ca_3)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r21_not_3 = ~(r10);
    r21_ca_4 = (xer >> 29) & 1u;
    r21 = (r21_not_3 + r10);
    r21 = (r21 + r21_ca_4);
    r21 = (0 - r21);
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_801B7114;
    }
}

loc_801B710C:
{
    r20 = 0x80000000u;
    r3 = -1;
}

loc_801B7114:
{
    r12_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(16));
    r12 = (r12_rot_3 & -1);
    r10 = r9;
    r12_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r12_mrot_2 = (r12_rot_4 & -65536);
    r12_mdest_2 = (r12 & 65535);
    r12 = (r12_mdest_2 | r12_mrot_2);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(16) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r12));
    r9 = r12;
    r31 = (r31 + r8);
    r11 = (r11 + 1);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r12));
    r30 = (r30 + r8);
}

loc_801B713C:
{
    r3 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r11), static_cast<uint32_t>(r3));
}

loc_801B7144:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801B702C;
    }
}

loc_801B7148:
{
    goto loc_801B73F8;
}

loc_801B714C:
{
    r0 = MemoryInline::FlatRead8(r20);
    r26 = 0x80000000u;
    r6 = 0;
    r7 = 65536;
    r3 = MemoryInline::ReadResolved16(guest_range_1, 72u, (r4 + 72));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r10_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r10 = (r10_rot_4 & 7);
    r11 = (r0 & 15);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r5 = MemoryInline::ReadResolved16(guest_range_1, 74u, (r4 + 74));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r8 = (r20 + 1);
    r22 = (r7 + -32768);
    r28 = (r26 + -1);
    r27 = (r6 ^ -2147483648);
    r9 = 2;
    r29 = 0;
    r25 = -1;
    goto loc_801B7298;
}

loc_801B7190:
{
    r7 = (r9 & 15);
}

loc_801B7194:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_801B71AC;
    }
}

loc_801B7198:
{
    r7 = MemoryInline::FlatRead8(r8);
    r8 = (r8 + 1);
    r9 = (r9 + 2);
    r10_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(28));
    r10 = (r10_rot_6 & 7);
    r11 = (r7 & 15);
}

loc_801B71AC:
{
    r7 = (r9 & 1);
}

loc_801B71B0:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_801B71C8;
    }
}

loc_801B71B4:
{
    r7 = MemoryInline::FlatRead8(r8);
    r8 = (r8 + 1);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(28));
    r7 = (r7_rot_2 & -268435456);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(28) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r24 = (static_cast<int32_t>(r7) >> 28);
    goto loc_801B71D4;
}

loc_801B71C8:
{
    r7 = MemoryInline::FlatRead8(r8);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r7 = (r7_rot_3 & -268435456);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(28) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r24 = (static_cast<int32_t>(r7) >> 28);
}

loc_801B71D4:
{
    r21_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r21 = (r21_rot_2 & 1020);
    r7 = (r11 & 255);
    r20 = (r4 + r21);
    r23 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r21 = MemoryInline::FlatRead16((r20 + 10));
    r21 = (r21 << 16);
    r21 = (static_cast<int32_t>(r21) >> 16);
    r5 = PPC_Slw(static_cast<uint32_t>(r24), static_cast<uint32_t>(r7));
    r7 = MemoryInline::FlatRead16((r20 + 8));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r24 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r21 = (r23 * r21);
    r23_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(11));
    r23 = (r23_rot_2 & -2048);
    r9 = (r9 + 1);
    r24 = (r24 * r7);
    r7 = (static_cast<int32_t>(r21) >> 31);
    r5 = (static_cast<int32_t>(r24) >> 31);
    r24_addc_right_2 = r24;
    r24 = (r21 + r24_addc_right_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r21)) + static_cast<uint64_t>(static_cast<uint32_t>(r24_addc_right_2)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r7_adde_left_2 = r7;
    r7_ca_2 = (xer >> 29) & 1u;
    r7 = (r7_adde_left_2 + r5);
    r7 = (r7 + r7_ca_2);
    r5 = (static_cast<int32_t>(r23) >> 31);
    r23_addc_right_2 = r23;
    r23 = (r24 + r23_addc_right_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r24)) + static_cast<uint64_t>(static_cast<uint32_t>(r23_addc_right_2)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5_adde_right_2 = r5;
    r5_ca_2 = (xer >> 29) & 1u;
    r5 = (r7 + r5_adde_right_2);
    r5 = (r5 + r5_ca_2);
    r7_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(5));
    r7 = (r7_rot_5 & -32);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
    r5 = (r5_rot_2 & -32);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(5));
    r5_mrot_2 = (r5_rot_3 & 31);
    r5_mdest_2 = (r5 & -32);
    r5 = (r5_mdest_2 | r5_mrot_2);
    r20 = (r7 + r22);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r7)) + static_cast<uint64_t>(static_cast<uint32_t>(r22)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r7_ca_3 = (xer >> 29) & 1u;
    r7 = (r5 + r29);
    r7 = (r7 + r7_ca_3);
    r23 = (r7 ^ -2147483648);
    r5 = (r28 - r20);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r28) >= static_cast<uint32_t>(r20) ? 1u : 0u) << 29);
    r23_not_2 = ~(r23);
    r23_ca_2 = (xer >> 29) & 1u;
    r23 = (r23_not_2 + r27);
    r23 = (r23 + r23_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r23_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r27)) + (static_cast<uint64_t>(static_cast<uint32_t>(r23_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r23_not_3 = ~(r27);
    r23_ca_3 = (xer >> 29) & 1u;
    r23 = (r23_not_3 + r27);
    r23 = (r23 + r23_ca_3);
    r23 = (0 - r23);
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_801B7254;
    }
}

loc_801B724C:
{
    r20 = (r26 + -1);
    r7 = 0;
}

loc_801B7254:
{
    r5 = (r7 ^ -2147483648);
    r24 = (r25 ^ -2147483648);
    r23 = (r20 - r26);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r20) >= static_cast<uint32_t>(r26) ? 1u : 0u) << 29);
    r24_not_2 = ~(r24);
    r24_ca_2 = (xer >> 29) & 1u;
    r24 = (r24_not_2 + r5);
    r24 = (r24 + r24_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r24_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r5)) + (static_cast<uint64_t>(static_cast<uint32_t>(r24_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r24_not_3 = ~(r5);
    r24_ca_3 = (xer >> 29) & 1u;
    r24 = (r24_not_3 + r5);
    r24 = (r24 + r24_ca_3);
    r24 = (0 - r24);
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_801B7278;
    }
}

loc_801B7270:
{
    r20 = 0x80000000u;
    r7 = -1;
}

loc_801B7278:
{
    r23_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(16));
    r23 = (r23_rot_3 & -1);
    r5 = r3;
    r23_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(16));
    r23_mrot_2 = (r23_rot_4 & -65536);
    r23_mdest_2 = (r23 & 65535);
    r23 = (r23_mdest_2 | r23_mrot_2);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(16) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r7) >> 16);
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r23));
    r3 = r23;
    r31 = (r31 + r0);
    r6 = (r6 + 1);
}

loc_801B7298:
{
    r7 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
}

loc_801B72A0:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r7))) {
        goto loc_801B7190;
    }
}

loc_801B72A4:
{
    r8 = MemoryInline::FlatRead8(r12);
    r29 = 0x80000000u;
    r7 = 0;
    r3 = 65536;
    r5 = MemoryInline::ReadResolved16(guest_range_1, 76u, (r4 + 76));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r10_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(28));
    r10 = (r10_rot_8 & 7);
    r11 = (r8 & 15);
    r6 = MemoryInline::ReadResolved16(guest_range_1, 78u, (r4 + 78));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r8 = (r12 + 1);
    r25 = (r3 + -32768);
    r27 = (r29 + -1);
    r28 = (r7 ^ -2147483648);
    r9 = 2;
    r26 = 0;
    r31 = -1;
    goto loc_801B73EC;
}

loc_801B72E4:
{
    r3 = (r9 & 15);
}

loc_801B72E8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801B7300;
    }
}

loc_801B72EC:
{
    r3 = MemoryInline::FlatRead8(r8);
    r8 = (r8 + 1);
    r9 = (r9 + 2);
    r10_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(28));
    r10 = (r10_rot_10 & 7);
    r11 = (r3 & 15);
}

loc_801B7300:
{
    r3 = (r9 & 1);
}

loc_801B7304:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801B731C;
    }
}

loc_801B7308:
{
    r3 = MemoryInline::FlatRead8(r8);
    r8 = (r8 + 1);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(28));
    r3 = (r3_rot_8 & -268435456);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(28) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r21 = (static_cast<int32_t>(r3) >> 28);
    goto loc_801B7328;
}

loc_801B731C:
{
    r3 = MemoryInline::FlatRead8(r8);
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r3 = (r3_rot_9 & -268435456);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(28) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r21 = (static_cast<int32_t>(r3) >> 28);
}

loc_801B7328:
{
    r12_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r12 = (r12_rot_6 & 1020);
    r3 = (r11 & 255);
    r12 = (r4 + r12);
    r23 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r6 = MemoryInline::FlatRead16((r12 + 42));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r24 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r12 = MemoryInline::FlatRead16((r12 + 40));
    r12 = (r12 << 16);
    r12 = (static_cast<int32_t>(r12) >> 16);
    r3 = PPC_Slw(static_cast<uint32_t>(r21), static_cast<uint32_t>(r3));
    r23 = (r23 * r6);
    r9 = (r9 + 1);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(11));
    r6 = (r6_rot_2 & -2048);
    r12 = (r24 * r12);
    r20 = (static_cast<int32_t>(r23) >> 31);
    r3 = (static_cast<int32_t>(r12) >> 31);
    r12_addc_right_2 = r12;
    r12 = (r23 + r12_addc_right_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r23)) + static_cast<uint64_t>(static_cast<uint32_t>(r12_addc_right_2)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r24_ca_5 = (xer >> 29) & 1u;
    r24 = (r20 + r3);
    r24 = (r24 + r24_ca_5);
    r3 = (static_cast<int32_t>(r6) >> 31);
    r12_addc_left_2 = r12;
    r12 = (r12_addc_left_2 + r6);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r12_addc_left_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r6)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3_adde_right_4 = r3;
    r3_ca_5 = (xer >> 29) & 1u;
    r3 = (r24 + r3_adde_right_4);
    r3 = (r3 + r3_ca_5);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(5));
    r6 = (r6_rot_3 & -32);
    r3_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(5));
    r3 = (r3_rot_11 & -32);
    r3_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(5));
    r3_mrot_4 = (r3_rot_12 & 31);
    r3_mdest_4 = (r3 & -32);
    r3 = (r3_mdest_4 | r3_mrot_4);
    r21 = (r6 + r25);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6)) + static_cast<uint64_t>(static_cast<uint32_t>(r25)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r20_ca_2 = (xer >> 29) & 1u;
    r20 = (r3 + r26);
    r20 = (r20 + r20_ca_2);
    r6 = (r20 ^ -2147483648);
    r3 = (r27 - r21);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r27) >= static_cast<uint32_t>(r21) ? 1u : 0u) << 29);
    r6_not_2 = ~(r6);
    r6_ca_2 = (xer >> 29) & 1u;
    r6 = (r6_not_2 + r28);
    r6 = (r6 + r6_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r28)) + (static_cast<uint64_t>(static_cast<uint32_t>(r6_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r6_not_3 = ~(r28);
    r6_ca_3 = (xer >> 29) & 1u;
    r6 = (r6_not_3 + r28);
    r6 = (r6 + r6_ca_3);
    r6 = (0 - r6);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801B73A8;
    }
}

loc_801B73A0:
{
    r21 = (r29 + -1);
    r20 = 0;
}

loc_801B73A8:
{
    r3 = (r20 ^ -2147483648);
    r12 = (r31 ^ -2147483648);
    r6 = (r21 - r29);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r21) >= static_cast<uint32_t>(r29) ? 1u : 0u) << 29);
    r12_not_5 = ~(r12);
    r12_ca_5 = (xer >> 29) & 1u;
    r12 = (r12_not_5 + r3);
    r12 = (r12 + r12_ca_5);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r12_not_5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3)) + (static_cast<uint64_t>(static_cast<uint32_t>(r12_ca_5)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r12_not_6 = ~(r3);
    r12_ca_6 = (xer >> 29) & 1u;
    r12 = (r12_not_6 + r3);
    r12 = (r12 + r12_ca_6);
    r12 = (0 - r12);
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_801B73CC;
    }
}

loc_801B73C4:
{
    r21 = 0x80000000u;
    r20 = -1;
}

loc_801B73CC:
{
    r12_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(16));
    r12 = (r12_rot_7 & -1);
    r6 = r5;
    r12_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(16));
    r12_mrot_4 = (r12_rot_8 & -65536);
    r12_mdest_4 = (r12 & 65535);
    r12 = (r12_mdest_4 | r12_mrot_4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r20);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(16) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r20) >> 16);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r12));
    r5 = r12;
    r30 = (r30 + r0);
    r7 = (r7 + 1);
}

loc_801B73EC:
{
    r3 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r3));
}

loc_801B73F4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801B72E4;
    }
}

loc_801B73F8:
{
    r11 = (r1 + 64);
    // inline leaf 0x800215D0 (13 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D0
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFF01FFB gpr_write=0xFFF01FEB gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801B6F7C func_801B6F7C preserves=true fpr_mask=0x00000000
