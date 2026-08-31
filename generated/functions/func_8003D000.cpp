#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8003D000(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8003D000;

loc_8003D000:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 84u, (r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_2, 52u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_2, 56u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_2, 60u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_2, 64u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_2, 68u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_2, 72u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_2, 76u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 184), 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 184));
    r25 = r3;
    r28 = r4;
    r26 = r5;
}

loc_8003D028:
{
    r27 = r6;
    r29 = 0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8003D04C;
    }
}

loc_8003D034:
{
    r0 = MemoryInline::FlatRead8((r4 + 32));
    MemoryInline::FlatWriteRam8((r1 + 24), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 33));
    MemoryInline::FlatWriteRam8((r1 + 25), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 34));
    MemoryInline::FlatWriteRam8((r1 + 26), static_cast<uint8_t>(r0));
}

loc_8003D04C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 185));
}

loc_8003D054:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8003D070;
    }
}

loc_8003D058:
{
    r0 = MemoryInline::FlatRead8((r4 + 36));
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 37));
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 38));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r0));
}

loc_8003D070:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 186));
}

loc_8003D078:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8003D094;
    }
}

loc_8003D07C:
{
    r0 = MemoryInline::FlatRead8((r4 + 40));
    MemoryInline::FlatWriteRam8((r1 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 41));
    MemoryInline::FlatWriteRam8((r1 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 42));
    MemoryInline::FlatWriteRam8((r1 + 34), static_cast<uint8_t>(r0));
}

loc_8003D094:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 187));
}

loc_8003D09C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8003D0B8;
    }
}

loc_8003D0A0:
{
    r0 = MemoryInline::FlatRead8((r4 + 44));
    MemoryInline::FlatWriteRam8((r1 + 36), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 45));
    MemoryInline::FlatWriteRam8((r1 + 37), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 46));
    MemoryInline::FlatWriteRam8((r1 + 38), static_cast<uint8_t>(r0));
}

loc_8003D0B8:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 188));
    r0 = 255;
}

loc_8003D0C4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8003D0EC;
    }
}

loc_8003D0C8:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 189));
}

loc_8003D0D0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8003D0EC;
    }
}

loc_8003D0D4:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 190));
}

loc_8003D0DC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8003D0EC;
    }
}

loc_8003D0E0:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 191));
}

loc_8003D0E8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8003D104;
    }
}

loc_8003D0EC:
{
    r3 = MemoryInline::FlatRead8((r5 + 113));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8003D0F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003D104;
    }
}

loc_8003D0F8:
{
    r3 = r28;
    ctx->lr = 0x8003D100u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800331F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = r3;
}

loc_8003D104:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r25 + 184), 0, 8u, true, false);
    r3 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r25 + 188));
}

loc_8003D10C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8003D15C;
    }
}

loc_8003D110:
{
    r5 = MemoryInline::FlatRead8((r28 + 228));
    r4 = MemoryInline::FlatRead8((r28 + 35));
}

loc_8003D11C:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(255))) {
        goto loc_8003D13C;
    }
}

loc_8003D120:
{
    r3 = MemoryInline::FlatRead32((r28 + 200));
    r6 = MemoryInline::FlatRead8((r3 + 136));
}

loc_8003D12C:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r6))) {
        goto loc_8003D13C;
    }
}

loc_8003D130:
{
    r3 = (r4 * r5);
    r3 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r6));
    r4 = (r3 & 255);
}

loc_8003D13C:
{
    r3 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 27), static_cast<uint8_t>(r4));
}

loc_8003D148:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(255))) {
        goto loc_8003D15C;
    }
}

loc_8003D14C:
{
    r3 = (r4 * r3);
    r3 = (r3 + 128);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r3) >> 8);
    MemoryInline::FlatWriteRam8((r1 + 27), static_cast<uint8_t>(r3));
}

loc_8003D15C:
{
    r3 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r25 + 189));
}

loc_8003D164:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8003D1B4;
    }
}

loc_8003D168:
{
    r5 = MemoryInline::FlatRead8((r28 + 228));
    r4 = MemoryInline::FlatRead8((r28 + 39));
}

loc_8003D174:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(255))) {
        goto loc_8003D194;
    }
}

loc_8003D178:
{
    r3 = MemoryInline::FlatRead32((r28 + 200));
    r6 = MemoryInline::FlatRead8((r3 + 136));
}

loc_8003D184:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r6))) {
        goto loc_8003D194;
    }
}

loc_8003D188:
{
    r3 = (r4 * r5);
    r3 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r6));
    r4 = (r3 & 255);
}

loc_8003D194:
{
    r3 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 31), static_cast<uint8_t>(r4));
}

loc_8003D1A0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(255))) {
        goto loc_8003D1B4;
    }
}

loc_8003D1A4:
{
    r3 = (r4 * r3);
    r3 = (r3 + 128);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r3) >> 8);
    MemoryInline::FlatWriteRam8((r1 + 31), static_cast<uint8_t>(r3));
}

loc_8003D1B4:
{
    r3 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r25 + 190));
}

loc_8003D1BC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8003D20C;
    }
}

loc_8003D1C0:
{
    r5 = MemoryInline::FlatRead8((r28 + 228));
    r4 = MemoryInline::FlatRead8((r28 + 43));
}

loc_8003D1CC:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(255))) {
        goto loc_8003D1EC;
    }
}

loc_8003D1D0:
{
    r3 = MemoryInline::FlatRead32((r28 + 200));
    r6 = MemoryInline::FlatRead8((r3 + 136));
}

loc_8003D1DC:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r6))) {
        goto loc_8003D1EC;
    }
}

loc_8003D1E0:
{
    r3 = (r4 * r5);
    r3 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r6));
    r4 = (r3 & 255);
}

loc_8003D1EC:
{
    r3 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 35), static_cast<uint8_t>(r4));
}

loc_8003D1F8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(255))) {
        goto loc_8003D20C;
    }
}

loc_8003D1FC:
{
    r3 = (r4 * r3);
    r3 = (r3 + 128);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r3) >> 8);
    MemoryInline::FlatWriteRam8((r1 + 35), static_cast<uint8_t>(r3));
}

loc_8003D20C:
{
    r3 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r25 + 191));
}

loc_8003D214:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8003D264;
    }
}

loc_8003D218:
{
    r5 = MemoryInline::FlatRead8((r28 + 228));
    r4 = MemoryInline::FlatRead8((r28 + 47));
}

loc_8003D224:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(255))) {
        goto loc_8003D244;
    }
}

loc_8003D228:
{
    r3 = MemoryInline::FlatRead32((r28 + 200));
    r6 = MemoryInline::FlatRead8((r3 + 136));
}

loc_8003D234:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r6))) {
        goto loc_8003D244;
    }
}

loc_8003D238:
{
    r3 = (r4 * r5);
    r3 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r6));
    r4 = (r3 & 255);
}

loc_8003D244:
{
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 39), static_cast<uint8_t>(r4));
}

loc_8003D250:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_8003D264;
    }
}

loc_8003D254:
{
    r3 = (r4 * r0);
    r0 = (r3 + 128);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWriteRam8((r1 + 39), static_cast<uint8_t>(r0));
}

loc_8003D264:
{
    r3 = MemoryInline::FlatRead32((r28 + 200));
    r0 = MemoryInline::FlatRead8((r3 + 108));
}

loc_8003D270:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8003D2F8;
    }
}

loc_8003D274:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r25 + 184));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8003D27C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003D2A4;
    }
}

loc_8003D280:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r25 + 185));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8003D288:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003D2A4;
    }
}

loc_8003D28C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r25 + 188));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8003D294:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003D2A4;
    }
}

loc_8003D298:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r25 + 189));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8003D2A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003D2B4;
    }
}

loc_8003D2A4:
{
    r4 = r28;
    r5 = (r1 + 24);
    r6 = (r1 + 28);
    ctx->lr = 0x8003D2B4u;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80035510u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8003D2B4:
{
    r0 = MemoryInline::FlatRead8((r25 + 186));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8003D2BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003D2E4;
    }
}

loc_8003D2C0:
{
    r0 = MemoryInline::FlatRead8((r25 + 187));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8003D2C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003D2E4;
    }
}

loc_8003D2CC:
{
    r0 = MemoryInline::FlatRead8((r25 + 190));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8003D2D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003D2E4;
    }
}

loc_8003D2D8:
{
    r0 = MemoryInline::FlatRead8((r25 + 191));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8003D2E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003D2F8;
    }
}

loc_8003D2E4:
{
    r3 = MemoryInline::FlatRead32((r28 + 200));
    r4 = r28;
    r5 = (r1 + 32);
    r6 = (r1 + 36);
    ctx->lr = 0x8003D2F8u;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80035510u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8003D2F8:
{
    r30 = r25;
    r28 = 0;
    r31 = 0;
}

loc_8003D304:
{
    r3 = (r26 + r28);
    MemoryInline::FlatWriteRam32((r1 + 20), r31);
    r4 = MemoryInline::FlatRead8((r3 + 97));
}

loc_8003D314:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8003D324;
    }
}

loc_8003D318:
{
    r0 = MemoryInline::FlatRead8((r3 + 105));
}

loc_8003D320:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8003D578;
    }
}

loc_8003D324:
{
}

loc_8003D328:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_8003D358;
    }
}

loc_8003D32C:
{
}

loc_8003D330:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_8003D374;
    }
}

loc_8003D334:
{
}

loc_8003D338:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(5))) {
        goto loc_8003D390;
    }
}

loc_8003D33C:
{
}

loc_8003D340:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(3))) {
        goto loc_8003D3DC;
    }
}

loc_8003D344:
{
}

loc_8003D348:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(4))) {
        goto loc_8003D3F8;
    }
}

loc_8003D34C:
{
}

loc_8003D350:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(6))) {
        goto loc_8003D414;
    }
}

loc_8003D354:
{
    goto loc_8003D45C;
}

loc_8003D358:
{
    r5 = MemoryInline::FlatRead8((r1 + 24));
    r4 = MemoryInline::FlatRead8((r1 + 25));
    r0 = MemoryInline::FlatRead8((r1 + 26));
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r0));
    goto loc_8003D45C;
}

loc_8003D374:
{
    r5 = MemoryInline::FlatRead8((r1 + 28));
    r4 = MemoryInline::FlatRead8((r1 + 29));
    r0 = MemoryInline::FlatRead8((r1 + 30));
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r0));
    goto loc_8003D45C;
}

loc_8003D390:
{
    r4 = MemoryInline::FlatRead8((r1 + 24));
    r0 = MemoryInline::FlatRead8((r1 + 28));
    r6 = MemoryInline::FlatRead8((r1 + 25));
    r7 = (r4 * r0);
    r5 = MemoryInline::FlatRead8((r1 + 29));
    r4 = MemoryInline::FlatRead8((r1 + 26));
    r0 = MemoryInline::FlatRead8((r1 + 30));
    r5 = (r6 * r5);
    r6 = (r7 + 128);
    r6 = (static_cast<int32_t>(r6) >> 8);
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r6));
    r4 = (r4 * r0);
    r0 = (r5 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r0));
    r0 = (r4 + 128);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r0));
    goto loc_8003D45C;
}

loc_8003D3DC:
{
    r5 = MemoryInline::FlatRead8((r1 + 32));
    r4 = MemoryInline::FlatRead8((r1 + 33));
    r0 = MemoryInline::FlatRead8((r1 + 34));
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r0));
    goto loc_8003D45C;
}

loc_8003D3F8:
{
    r5 = MemoryInline::FlatRead8((r1 + 36));
    r4 = MemoryInline::FlatRead8((r1 + 37));
    r0 = MemoryInline::FlatRead8((r1 + 38));
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r0));
    goto loc_8003D45C;
}

loc_8003D414:
{
    r4 = MemoryInline::FlatRead8((r1 + 32));
    r0 = MemoryInline::FlatRead8((r1 + 36));
    r6 = MemoryInline::FlatRead8((r1 + 33));
    r7 = (r4 * r0);
    r5 = MemoryInline::FlatRead8((r1 + 37));
    r4 = MemoryInline::FlatRead8((r1 + 34));
    r0 = MemoryInline::FlatRead8((r1 + 38));
    r5 = (r6 * r5);
    r6 = (r7 + 128);
    r6 = (static_cast<int32_t>(r6) >> 8);
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r6));
    r4 = (r4 * r0);
    r0 = (r5 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r0));
    r0 = (r4 + 128);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r0));
}

loc_8003D45C:
{
    r0 = MemoryInline::FlatRead8((r3 + 105));
}

loc_8003D464:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8003D494;
    }
}

loc_8003D468:
{
}

loc_8003D46C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8003D4A0;
    }
}

loc_8003D470:
{
}

loc_8003D474:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8003D4AC;
    }
}

loc_8003D478:
{
}

loc_8003D47C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8003D4C8;
    }
}

loc_8003D480:
{
}

loc_8003D484:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8003D4D4;
    }
}

loc_8003D488:
{
}

loc_8003D48C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_8003D4E0;
    }
}

loc_8003D490:
{
    goto loc_8003D4F8;
}

loc_8003D494:
{
    r0 = MemoryInline::FlatRead8((r1 + 27));
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r0));
    goto loc_8003D4F8;
}

loc_8003D4A0:
{
    r0 = MemoryInline::FlatRead8((r1 + 31));
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r0));
    goto loc_8003D4F8;
}

loc_8003D4AC:
{
    r3 = MemoryInline::FlatRead8((r1 + 27));
    r0 = MemoryInline::FlatRead8((r1 + 31));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r0));
    goto loc_8003D4F8;
}

loc_8003D4C8:
{
    r0 = MemoryInline::FlatRead8((r1 + 35));
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r0));
    goto loc_8003D4F8;
}

loc_8003D4D4:
{
    r0 = MemoryInline::FlatRead8((r1 + 39));
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r0));
    goto loc_8003D4F8;
}

loc_8003D4E0:
{
    r3 = MemoryInline::FlatRead8((r1 + 35));
    r0 = MemoryInline::FlatRead8((r1 + 39));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r0));
}

loc_8003D4F8:
{
}

loc_8003D4FC:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_8003D540;
    }
}

loc_8003D500:
{
    r3 = MemoryInline::FlatRead8((r1 + 20));
    r0 = MemoryInline::FlatRead8((r30 + 148));
}

loc_8003D50C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8003D540;
    }
}

loc_8003D510:
{
    r3 = MemoryInline::FlatRead8((r1 + 21));
    r0 = MemoryInline::FlatRead8((r30 + 149));
}

loc_8003D51C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8003D540;
    }
}

loc_8003D520:
{
    r3 = MemoryInline::FlatRead8((r1 + 22));
    r0 = MemoryInline::FlatRead8((r30 + 150));
}

loc_8003D52C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8003D540;
    }
}

loc_8003D530:
{
    r3 = MemoryInline::FlatRead8((r1 + 23));
    r0 = MemoryInline::FlatRead8((r30 + 151));
}

loc_8003D53C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8003D578;
    }
}

loc_8003D540:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r3 = (r28 + 1);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r4 = (r1 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171E10u>(ctx);
    r0 = MemoryInline::FlatRead8((r1 + 20));
    r29 = 1;
    MemoryInline::FlatWrite8((r30 + 148), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 21));
    MemoryInline::FlatWrite8((r30 + 149), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 22));
    MemoryInline::FlatWrite8((r30 + 150), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 23));
    MemoryInline::FlatWrite8((r30 + 151), static_cast<uint8_t>(r0));
}

loc_8003D578:
{
    r28 = (r28 + 1);
    r30 = (r30 + 4);
}

loc_8003D584:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(3))) {
        goto loc_8003D304;
    }
}

loc_8003D588:
{
    r30 = 0;
    r31 = 0;
}

loc_8003D590:
{
    r3 = (r26 + r30);
    MemoryInline::FlatWriteRam32((r1 + 16), r31);
    r4 = MemoryInline::FlatRead8((r3 + 100));
}

loc_8003D5A0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8003D5B0;
    }
}

loc_8003D5A4:
{
    r0 = MemoryInline::FlatRead8((r3 + 108));
}

loc_8003D5AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8003D804;
    }
}

loc_8003D5B0:
{
}

loc_8003D5B4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_8003D5E4;
    }
}

loc_8003D5B8:
{
}

loc_8003D5BC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_8003D600;
    }
}

loc_8003D5C0:
{
}

loc_8003D5C4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(5))) {
        goto loc_8003D61C;
    }
}

loc_8003D5C8:
{
}

loc_8003D5CC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(3))) {
        goto loc_8003D668;
    }
}

loc_8003D5D0:
{
}

loc_8003D5D4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(4))) {
        goto loc_8003D684;
    }
}

loc_8003D5D8:
{
}

loc_8003D5DC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(6))) {
        goto loc_8003D6A0;
    }
}

loc_8003D5E0:
{
    goto loc_8003D6E8;
}

loc_8003D5E4:
{
    r5 = MemoryInline::FlatRead8((r1 + 24));
    r4 = MemoryInline::FlatRead8((r1 + 25));
    r0 = MemoryInline::FlatRead8((r1 + 26));
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    goto loc_8003D6E8;
}

loc_8003D600:
{
    r5 = MemoryInline::FlatRead8((r1 + 28));
    r4 = MemoryInline::FlatRead8((r1 + 29));
    r0 = MemoryInline::FlatRead8((r1 + 30));
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    goto loc_8003D6E8;
}

loc_8003D61C:
{
    r4 = MemoryInline::FlatRead8((r1 + 24));
    r0 = MemoryInline::FlatRead8((r1 + 28));
    r6 = MemoryInline::FlatRead8((r1 + 25));
    r7 = (r4 * r0);
    r5 = MemoryInline::FlatRead8((r1 + 29));
    r4 = MemoryInline::FlatRead8((r1 + 26));
    r0 = MemoryInline::FlatRead8((r1 + 30));
    r5 = (r6 * r5);
    r6 = (r7 + 128);
    r6 = (static_cast<int32_t>(r6) >> 8);
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r6));
    r4 = (r4 * r0);
    r0 = (r5 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r0));
    r0 = (r4 + 128);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    goto loc_8003D6E8;
}

loc_8003D668:
{
    r5 = MemoryInline::FlatRead8((r1 + 32));
    r4 = MemoryInline::FlatRead8((r1 + 33));
    r0 = MemoryInline::FlatRead8((r1 + 34));
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    goto loc_8003D6E8;
}

loc_8003D684:
{
    r5 = MemoryInline::FlatRead8((r1 + 36));
    r4 = MemoryInline::FlatRead8((r1 + 37));
    r0 = MemoryInline::FlatRead8((r1 + 38));
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    goto loc_8003D6E8;
}

loc_8003D6A0:
{
    r4 = MemoryInline::FlatRead8((r1 + 32));
    r0 = MemoryInline::FlatRead8((r1 + 36));
    r6 = MemoryInline::FlatRead8((r1 + 33));
    r7 = (r4 * r0);
    r5 = MemoryInline::FlatRead8((r1 + 37));
    r4 = MemoryInline::FlatRead8((r1 + 34));
    r0 = MemoryInline::FlatRead8((r1 + 38));
    r5 = (r6 * r5);
    r6 = (r7 + 128);
    r6 = (static_cast<int32_t>(r6) >> 8);
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r6));
    r4 = (r4 * r0);
    r0 = (r5 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r0));
    r0 = (r4 + 128);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
}

loc_8003D6E8:
{
    r0 = MemoryInline::FlatRead8((r3 + 108));
}

loc_8003D6F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8003D720;
    }
}

loc_8003D6F4:
{
}

loc_8003D6F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8003D72C;
    }
}

loc_8003D6FC:
{
}

loc_8003D700:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8003D738;
    }
}

loc_8003D704:
{
}

loc_8003D708:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8003D754;
    }
}

loc_8003D70C:
{
}

loc_8003D710:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8003D760;
    }
}

loc_8003D714:
{
}

loc_8003D718:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_8003D76C;
    }
}

loc_8003D71C:
{
    goto loc_8003D784;
}

loc_8003D720:
{
    r0 = MemoryInline::FlatRead8((r1 + 27));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
    goto loc_8003D784;
}

loc_8003D72C:
{
    r0 = MemoryInline::FlatRead8((r1 + 31));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
    goto loc_8003D784;
}

loc_8003D738:
{
    r3 = MemoryInline::FlatRead8((r1 + 27));
    r0 = MemoryInline::FlatRead8((r1 + 31));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
    goto loc_8003D784;
}

loc_8003D754:
{
    r0 = MemoryInline::FlatRead8((r1 + 35));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
    goto loc_8003D784;
}

loc_8003D760:
{
    r0 = MemoryInline::FlatRead8((r1 + 39));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
    goto loc_8003D784;
}

loc_8003D76C:
{
    r3 = MemoryInline::FlatRead8((r1 + 35));
    r0 = MemoryInline::FlatRead8((r1 + 39));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
}

loc_8003D784:
{
}

loc_8003D788:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_8003D7CC;
    }
}

loc_8003D78C:
{
    r3 = MemoryInline::FlatRead8((r1 + 16));
    r0 = MemoryInline::FlatRead8((r25 + 160));
}

loc_8003D798:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8003D7CC;
    }
}

loc_8003D79C:
{
    r3 = MemoryInline::FlatRead8((r1 + 17));
    r0 = MemoryInline::FlatRead8((r25 + 161));
}

loc_8003D7A8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8003D7CC;
    }
}

loc_8003D7AC:
{
    r3 = MemoryInline::FlatRead8((r1 + 18));
    r0 = MemoryInline::FlatRead8((r25 + 162));
}

loc_8003D7B8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8003D7CC;
    }
}

loc_8003D7BC:
{
    r3 = MemoryInline::FlatRead8((r1 + 19));
    r0 = MemoryInline::FlatRead8((r25 + 163));
}

loc_8003D7C8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8003D804;
    }
}

loc_8003D7CC:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r3 = r30;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80171ED4u>(ctx);
    r0 = MemoryInline::FlatRead8((r1 + 16));
    r29 = 1;
    MemoryInline::FlatWrite8((r25 + 160), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 17));
    MemoryInline::FlatWrite8((r25 + 161), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 18));
    MemoryInline::FlatWrite8((r25 + 162), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 19));
    MemoryInline::FlatWrite8((r25 + 163), static_cast<uint8_t>(r0));
}

loc_8003D804:
{
    r30 = (r30 + 1);
    r25 = (r25 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(4));
}

loc_8003D810:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8003D590;
    }
}

loc_8003D814:
{
    r11 = (r1 + 80);
    r3 = r29;
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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

// RECOMP_GUEST_ABI gpr_read=0xFE001FFF gpr_write=0xFE001FFB gpr_return=0x00000018 fpr_read=0x00001F7F fpr_write=0x00001F7F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8003D000 func_8003D000 preserves=true fpr_mask=0x00000000
