#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E0D60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r22_rot_0 = 0;
    uint32_t r22_rot_1 = 0;
    uint32_t r22_rot_2 = 0;
    uint32_t r22_rot_3 = 0;
    uint32_t r22_rot_4 = 0;
    uint32_t r22_rot_5 = 0;
    uint32_t r23_rot_0 = 0;
    uint32_t r23_rot_1 = 0;
    uint32_t r23_rot_10 = 0;
    uint32_t r23_rot_2 = 0;
    uint32_t r23_rot_3 = 0;
    uint32_t r23_rot_4 = 0;
    uint32_t r23_rot_5 = 0;
    uint32_t r23_rot_6 = 0;
    uint32_t r23_rot_7 = 0;
    uint32_t r23_rot_8 = 0;
    uint32_t r23_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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

    goto loc_801E0D60;

loc_801E0D60:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80021588 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -44), r21);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -4), r31);
    // end of inlined leaf 0x80021588
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E0D78:
{
    r27 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E0D88;
    }
}

loc_801E0D80:
{
    r3 = -3;
    goto loc_801E1074;
}

loc_801E0D88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_801E0D8C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E0D98;
    }
}

loc_801E0D90:
{
    r3 = -3;
    goto loc_801E1074;
}

loc_801E0D98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_801E0D9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E0DA8;
    }
}

loc_801E0DA0:
{
    r3 = -8;
    goto loc_801E1074;
}

loc_801E0DA8:
{
}

loc_801E0DAC:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_801E0DB8;
    }
}

loc_801E0DB0:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r8, r0);
}

loc_801E0DB8:
{
}

loc_801E0DBC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801E0DC8;
    }
}

loc_801E0DC0:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r5, r0);
}

loc_801E0DC8:
{
    r26 = 0;
    r29 = 0;
    r28 = 0;
    r31 = 61;
    r12 = 1717960704;
    r11 = 13;
    r0 = 10;
    r10 = 0x80000000u;
    goto loc_801E1050;
}

loc_801E0DEC:
{
    r21 = MemoryInline::FlatRead8(r6);
    r25 = 0;
    r22 = (static_cast<int32_t>(static_cast<int8_t>(r21)));
}

loc_801E0DFC:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(33))) {
        goto loc_801E0E20;
    }
}

loc_801E0E00:
{
}

loc_801E0E04:
{
    if ((static_cast<int32_t>(r22) > static_cast<int32_t>(126))) {
        goto loc_801E0E20;
    }
}

loc_801E0E08:
{
}

loc_801E0E0C:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(61))) {
        goto loc_801E0E20;
    }
}

loc_801E0E10:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r21));
    r23 = 1;
    r24 = 1;
    goto loc_801E0F20;
}

loc_801E0E20:
{
    r22 = (r28 + 1);
}

loc_801E0E28:
{
    if ((static_cast<uint32_t>(r22) >= static_cast<uint32_t>(r7))) {
        goto loc_801E0E5C;
    }
}

loc_801E0E2C:
{
    r22 = (static_cast<int32_t>(static_cast<int8_t>(r21)));
}

loc_801E0E34:
{
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(13))) {
        goto loc_801E0E5C;
    }
}

loc_801E0E38:
{
    r22 = MemoryInline::FlatRead8((r6 + 1));
}

loc_801E0E40:
{
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(10))) {
        goto loc_801E0E5C;
    }
}

loc_801E0E44:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r21));
    r23 = 2;
    r24 = 1;
    r22 = MemoryInline::FlatRead8((r6 + 1));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r22));
    goto loc_801E0F20;
}

loc_801E0E5C:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r31));
    r22 = MemoryInline::FlatRead8(r6);
    r30 = (static_cast<int32_t>(r22) >> 4);
}

loc_801E0E6C:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(10))) {
        goto loc_801E0E98;
    }
}

loc_801E0E70:
{
    r22 = (r12 + 26215);
    r22 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r22)) * static_cast<int64_t>(static_cast<int32_t>(r30))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r22);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r22 = (static_cast<int32_t>(r22) >> 2);
    r23_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(1));
    r23 = (r23_rot_2 & 1);
    r22 = (r22 + r23);
    r22 = (r22 * 10);
    r22 = (r30 - r22);
    r22 = (r22 + 65);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r22));
    goto loc_801E0EBC;
}

loc_801E0E98:
{
    r22 = (r12 + 26215);
    r22 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r22)) * static_cast<int64_t>(static_cast<int32_t>(r30))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r22);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r22 = (static_cast<int32_t>(r22) >> 2);
    r23_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(1));
    r23 = (r23_rot_3 & 1);
    r22 = (r22 + r23);
    r22 = (r22 * 10);
    r22 = (r30 - r22);
    r22 = (r22 + 48);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r22));
}

loc_801E0EBC:
{
    r22 = MemoryInline::FlatRead8(r6);
    r30 = (r22 & 15);
}

loc_801E0EC8:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(10))) {
        goto loc_801E0EF4;
    }
}

loc_801E0ECC:
{
    r22 = (r12 + 26215);
    r22 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r22)) * static_cast<int64_t>(static_cast<int32_t>(r30))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r22);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r22 = (static_cast<int32_t>(r22) >> 2);
    r23_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(1));
    r23 = (r23_rot_5 & 1);
    r22 = (r22 + r23);
    r22 = (r22 * 10);
    r22 = (r30 - r22);
    r22 = (r22 + 65);
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r22));
    goto loc_801E0F18;
}

loc_801E0EF4:
{
    r22 = (r12 + 26215);
    r22 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r22)) * static_cast<int64_t>(static_cast<int32_t>(r30))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r22);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r22 = (static_cast<int32_t>(r22) >> 2);
    r23_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(1));
    r23 = (r23_rot_6 & 1);
    r22 = (r22 + r23);
    r22 = (r22 * 10);
    r22 = (r30 - r22);
    r22 = (r22 + 48);
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r22));
}

loc_801E0F18:
{
    r23 = 1;
    r24 = 3;
}

loc_801E0F20:
{
}

loc_801E0F24:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_801E0F3C;
    }
}

loc_801E0F28:
{
    r22 = (r26 + r24);
}

loc_801E0F30:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(75))) {
        goto loc_801E0F3C;
    }
}

loc_801E0F34:
{
    r25 = 1;
    r24 = (r24 + 3);
}

loc_801E0F3C:
{
    r22 = (r29 + r24);
}

loc_801E0F44:
{
    if ((static_cast<uint32_t>(r22) < static_cast<uint32_t>(r4))) {
        goto loc_801E0F50;
    }
}

loc_801E0F48:
{
    r27 = -8;
    goto loc_801E1058;
}

loc_801E0F50:
{
}

loc_801E0F54:
{
    r29 = (r29 + r24);
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_801E0F74;
    }
}

loc_801E0F5C:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r31));
    r26 = 0;
    r24 = (r24 + -3);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r11));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    r3 = (r3 + 3);
}

loc_801E0F74:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r24), static_cast<int32_t>(0));
}

loc_801E0F78:
{
    r26 = (r26 + r24);
    r25 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_801E1048;
    }
}

loc_801E0F84:
{
}

loc_801E0F88:
{
    r21 = (r24 + -8);
    if ((static_cast<int32_t>(r24) <= static_cast<int32_t>(8))) {
        goto loc_801E1018;
    }
}

loc_801E0F90:
{
    r30 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_801E0FA8;
    }
}

loc_801E0F98:
{
    r22 = (r10 + -2);
}

loc_801E0FA0:
{
    if ((static_cast<int32_t>(r24) > static_cast<int32_t>(r22))) {
        goto loc_801E0FA8;
    }
}

loc_801E0FA4:
{
    r30 = 1;
}

loc_801E0FA8:
{
}

loc_801E0FAC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_801E1018;
    }
}

loc_801E0FB0:
{
    r22 = (r21 + 7);
    r30 = (r1 + 8);
    r22_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(29));
    r22 = (r22_rot_2 & 536870911);
    ctr = r22;
}

loc_801E0FC4:
{
    if ((static_cast<int32_t>(r21) <= static_cast<int32_t>(0))) {
        goto loc_801E1018;
    }
}

loc_801E0FC8:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r30, 0, 8u, true, false);
    r22 = MemoryInline::ReadResolved8(guest_range_2, 0u, r30);
    r25 = (r25 + 8);
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, r3, static_cast<uint8_t>(r22));
    r22 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r30 + 1));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r3 + 1), static_cast<uint8_t>(r22));
    r22 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r30 + 2));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r3 + 2), static_cast<uint8_t>(r22));
    r22 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r30 + 3));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r3 + 3), static_cast<uint8_t>(r22));
    r22 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r30 + 4));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r3 + 4), static_cast<uint8_t>(r22));
    r22 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r30 + 5));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r3 + 5), static_cast<uint8_t>(r22));
    r22 = MemoryInline::ReadResolved8(guest_range_2, 6u, (r30 + 6));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r3 + 6), static_cast<uint8_t>(r22));
    r22 = MemoryInline::ReadResolved8(guest_range_2, 7u, (r30 + 7));
    r30 = (r30 + 8);
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r3 + 7), static_cast<uint8_t>(r22));
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801E0FC8;
    }
}

loc_801E1018:
{
    r21 = (r1 + 8);
    r30 = (r24 - r25);
    r21 = (r21 + r25);
    ctr = r30;
}

loc_801E102C:
{
    if ((static_cast<int32_t>(r25) >= static_cast<int32_t>(r24))) {
        goto loc_801E1048;
    }
}

loc_801E1030:
{
    r22 = MemoryInline::FlatRead8(r21);
    r21 = (r21 + 1);
    r25 = (r25 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r22));
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801E1030;
    }
}

loc_801E1048:
{
    r28 = (r28 + r23);
    r6 = (r6 + r23);
}

loc_801E1050:
{
}

loc_801E1054:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r7))) {
        goto loc_801E0DEC;
    }
}

loc_801E1058:
{
}

loc_801E105C:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_801E1064;
    }
}

loc_801E1060:
{
    MemoryInline::FlatWrite32(r8, r28);
}

loc_801E1064:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801E1068:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E1070;
    }
}

loc_801E106C:
{
    MemoryInline::FlatWrite32(r5, r29);
}

loc_801E1070:
{
    r3 = r27;
}

loc_801E1074:
{
    r11 = (r1 + 64);
    // inline leaf 0x800215D4 (12 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -4));
    // end of inlined leaf 0x800215D4
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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

// RECOMP_GUEST_ABI gpr_read=0xFFE01FFB gpr_write=0xFFE01C4B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801E0D60 func_801E0D60 preserves=true fpr_mask=0x00000000
