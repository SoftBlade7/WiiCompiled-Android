#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8008AE30_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" void func_8008B040(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
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
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
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
    uint32_t xer = ctx->xer;

    goto loc_8008B040;

loc_8008B040:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r11 = (r1 + 128);
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
    r17 = r3;
    r18 = r4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead32(r17);
    r16 = r3;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8008B06C:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_8008B07C;
    }
}

loc_8008B070:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0;
    goto loc_8008B648;
}

loc_8008B07C:
{
    r0 = MemoryInline::FlatRead8((r17 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8008B084:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008B0A8;
    }
}

loc_8008B088:
{
    r3 = 0;
    if (((cr & 0x02000000u) != 0)) {
        goto loc_8008B0A0;
    }
}

loc_8008B090:
{
    r0 = MemoryInline::FlatRead16((r4 + 56));
}

loc_8008B098:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8008B0A0;
    }
}

loc_8008B09C:
{
    r3 = 1;
}

loc_8008B0A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8008B0A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008B110;
    }
}

loc_8008B0A8:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r18, 0, 24u, true, false);
    r20 = MemoryInline::ReadResolved16(guest_range_1, 0u, r18);
    r0 = 0;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 2u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r18 + 2));
            r12 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r18 + 4));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 6u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r18 + 6));
            r10 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r18 + 8));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 10u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r18 + 10));
            r8 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r18 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 14u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r18 + 14));
            r6 = MemoryInline::ReadResolved16(guest_range_1, 16u, (r18 + 16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 18u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved16(guest_range_1, 18u, (r18 + 18));
            r4 = MemoryInline::ReadResolved16(guest_range_1, 20u, (r18 + 20));
        }
    }
    r3 = MemoryInline::ReadResolved16(guest_range_1, 22u, (r18 + 22));
    guest_range_5 = MemoryInline::ResolveRangeHost((r17 + 28), 0, 26u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 2u, ((static_cast<uint32_t>(static_cast<uint16_t>(r20)) << 16) | static_cast<uint16_t>(r19)))) {
        MemoryInline::WriteResolved16(guest_range_5, 2u, (r17 + 30), r20);
        MemoryInline::WriteResolved16(guest_range_5, 4u, (r17 + 32), r19);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 6u, ((static_cast<uint32_t>(static_cast<uint16_t>(r12)) << 16) | static_cast<uint16_t>(r11)))) {
        MemoryInline::WriteResolved16(guest_range_5, 6u, (r17 + 34), r12);
        MemoryInline::WriteResolved16(guest_range_5, 8u, (r17 + 36), r11);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 10u, ((static_cast<uint32_t>(static_cast<uint16_t>(r10)) << 16) | static_cast<uint16_t>(r9)))) {
        MemoryInline::WriteResolved16(guest_range_5, 10u, (r17 + 38), r10);
        MemoryInline::WriteResolved16(guest_range_5, 12u, (r17 + 40), r9);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 14u, ((static_cast<uint32_t>(static_cast<uint16_t>(r8)) << 16) | static_cast<uint16_t>(r7)))) {
        MemoryInline::WriteResolved16(guest_range_5, 14u, (r17 + 42), r8);
        MemoryInline::WriteResolved16(guest_range_5, 16u, (r17 + 44), r7);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 18u, ((static_cast<uint32_t>(static_cast<uint16_t>(r6)) << 16) | static_cast<uint16_t>(r5)))) {
        MemoryInline::WriteResolved16(guest_range_5, 18u, (r17 + 46), r6);
        MemoryInline::WriteResolved16(guest_range_5, 20u, (r17 + 48), r5);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_5, 22u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_5, 22u, (r17 + 50), r4);
        MemoryInline::WriteResolved16(guest_range_5, 24u, (r17 + 52), r3);
    }
    MemoryInline::WriteResolved8(guest_range_5, 0u, (r17 + 28), static_cast<uint8_t>(r0));
}

loc_8008B110:
{
    r3 = r17;
    r4 = r18;
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x8008AE30u) && KnownTranslatedCpuCall<0x8008AE30u>::kAvailable && !KnownTranslatedCpuCall<0x8008AE30u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8008AE30u>()) {
        const auto state_free_result_8008AE30_2C9E = func_8008AE30_statefree(r3, r4, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_8008AE30_2C9E);
    } else {
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8008AE30u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r4 = MemoryInline::FlatRead16((r17 + 30));
    r19 = r3;
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r4));
    guest_range_2 = MemoryInline::ResolveRangeHost(r18, 0, 24u, true, false);
    r5 = MemoryInline::ReadResolved16(guest_range_2, 0u, r18);
    r0 = MemoryInline::FlatRead16((r17 + 32));
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
}

loc_8008B138:
{
    guest_range_6 = MemoryInline::ResolveRangeHost((r17 + 34), 0, 20u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_6, 0u, (r17 + 34));
    guest_range_7 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 38u, false, true);
    MemoryInline::WriteResolved16(guest_range_7, 24u, (r1 + 40), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_6, 2u, (r17 + 36));
    MemoryInline::WriteResolved16(guest_range_7, 0u, (r1 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_6, 4u, (r17 + 38));
    MemoryInline::WriteResolved16(guest_range_7, 4u, (r1 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_6, 6u, (r17 + 40));
    MemoryInline::WriteResolved16(guest_range_7, 28u, (r1 + 44), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_6, 8u, (r17 + 42));
    MemoryInline::WriteResolved16(guest_range_7, 8u, (r1 + 24), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_6, 10u, (r17 + 44));
    MemoryInline::WriteResolved16(guest_range_7, 12u, (r1 + 28), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_6, 12u, (r17 + 46));
    MemoryInline::WriteResolved16(guest_range_7, 32u, (r1 + 48), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_6, 14u, (r17 + 48));
    MemoryInline::WriteResolved16(guest_range_7, 16u, (r1 + 32), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_6, 16u, (r17 + 50));
    MemoryInline::WriteResolved16(guest_range_7, 20u, (r1 + 36), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_6, 18u, (r17 + 52));
    MemoryInline::WriteResolved16(guest_range_7, 36u, (r1 + 52), static_cast<uint16_t>(r0));
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r5))) {
        goto loc_8008B194;
    }
}

loc_8008B18C:
{
    r31 = 0;
    goto loc_8008B1B0;
}

loc_8008B194:
{
    r3 = 715849728;
    r0 = (r5 - r4);
    r3 = (r3 + -21845);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 4);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r31 = (r0 + r3);
}

loc_8008B1B0:
{
    r4 = MemoryInline::ReadResolved16(guest_range_2, 2u, (r18 + 2));
    r0 = MemoryInline::FlatRead16((r17 + 32));
}

loc_8008B1BC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_8008B1C8;
    }
}

loc_8008B1C0:
{
    r30 = 0;
    goto loc_8008B1E4;
}

loc_8008B1C8:
{
    r3 = 715849728;
    r0 = (r4 - r0);
    r3 = (r3 + -21845);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 4);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    r30 = (r0 + r3);
}

loc_8008B1E4:
{
    r4 = MemoryInline::ReadResolved16(guest_range_2, 4u, (r18 + 4));
    r0 = MemoryInline::FlatRead16((r17 + 34));
}

loc_8008B1F0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_8008B1FC;
    }
}

loc_8008B1F4:
{
    r29 = 0;
    goto loc_8008B218;
}

loc_8008B1FC:
{
    r3 = 715849728;
    r0 = (r4 - r0);
    r3 = (r3 + -21845);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 4);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    r29 = (r0 + r3);
}

loc_8008B218:
{
    r4 = MemoryInline::ReadResolved16(guest_range_2, 6u, (r18 + 6));
    r0 = MemoryInline::FlatRead16((r17 + 36));
}

loc_8008B224:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_8008B230;
    }
}

loc_8008B228:
{
    r28 = 0;
    goto loc_8008B24C;
}

loc_8008B230:
{
    r3 = 715849728;
    r0 = (r4 - r0);
    r3 = (r3 + -21845);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 4);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_7 & 1);
    r28 = (r0 + r3);
}

loc_8008B24C:
{
    r4 = MemoryInline::ReadResolved16(guest_range_2, 8u, (r18 + 8));
    r0 = MemoryInline::FlatRead16((r17 + 38));
}

loc_8008B258:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_8008B264;
    }
}

loc_8008B25C:
{
    r27 = 0;
    goto loc_8008B280;
}

loc_8008B264:
{
    r3 = 715849728;
    r0 = (r4 - r0);
    r3 = (r3 + -21845);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 4);
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_9 & 1);
    r27 = (r0 + r3);
}

loc_8008B280:
{
    r4 = MemoryInline::ReadResolved16(guest_range_2, 10u, (r18 + 10));
    r0 = MemoryInline::FlatRead16((r17 + 40));
}

loc_8008B28C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_8008B298;
    }
}

loc_8008B290:
{
    r26 = 0;
    goto loc_8008B2B4;
}

loc_8008B298:
{
    r3 = 715849728;
    r0 = (r4 - r0);
    r3 = (r3 + -21845);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 4);
    r3_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_11 & 1);
    r26 = (r0 + r3);
}

loc_8008B2B4:
{
    r4 = MemoryInline::ReadResolved16(guest_range_2, 12u, (r18 + 12));
    r0 = MemoryInline::FlatRead16((r17 + 42));
}

loc_8008B2C0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_8008B2CC;
    }
}

loc_8008B2C4:
{
    r25 = 0;
    goto loc_8008B2E8;
}

loc_8008B2CC:
{
    r3 = 715849728;
    r0 = (r4 - r0);
    r3 = (r3 + -21845);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 4);
    r3_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_13 & 1);
    r25 = (r0 + r3);
}

loc_8008B2E8:
{
    r4 = MemoryInline::ReadResolved16(guest_range_2, 14u, (r18 + 14));
    r0 = MemoryInline::FlatRead16((r17 + 44));
}

loc_8008B2F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_8008B300;
    }
}

loc_8008B2F8:
{
    r24 = 0;
    goto loc_8008B31C;
}

loc_8008B300:
{
    r3 = 715849728;
    r0 = (r4 - r0);
    r3 = (r3 + -21845);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 4);
    r3_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_15 & 1);
    r24 = (r0 + r3);
}

loc_8008B31C:
{
    r4 = MemoryInline::ReadResolved16(guest_range_2, 16u, (r18 + 16));
    r0 = MemoryInline::FlatRead16((r17 + 46));
}

loc_8008B328:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_8008B334;
    }
}

loc_8008B32C:
{
    r23 = 0;
    goto loc_8008B350;
}

loc_8008B334:
{
    r3 = 715849728;
    r0 = (r4 - r0);
    r3 = (r3 + -21845);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 4);
    r3_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_17 & 1);
    r23 = (r0 + r3);
}

loc_8008B350:
{
    r4 = MemoryInline::ReadResolved16(guest_range_2, 18u, (r18 + 18));
    r0 = MemoryInline::FlatRead16((r17 + 48));
}

loc_8008B35C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_8008B368;
    }
}

loc_8008B360:
{
    r22 = 0;
    goto loc_8008B384;
}

loc_8008B368:
{
    r3 = 715849728;
    r0 = (r4 - r0);
    r3 = (r3 + -21845);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 4);
    r3_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_19 & 1);
    r22 = (r0 + r3);
}

loc_8008B384:
{
    r4 = MemoryInline::ReadResolved16(guest_range_2, 20u, (r18 + 20));
    r0 = MemoryInline::FlatRead16((r17 + 50));
}

loc_8008B390:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_8008B39C;
    }
}

loc_8008B394:
{
    r21 = 0;
    goto loc_8008B3B8;
}

loc_8008B39C:
{
    r3 = 715849728;
    r0 = (r4 - r0);
    r3 = (r3 + -21845);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 4);
    r3_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_21 & 1);
    r21 = (r0 + r3);
}

loc_8008B3B8:
{
    r4 = MemoryInline::ReadResolved16(guest_range_2, 22u, (r18 + 22));
    r0 = MemoryInline::FlatRead16((r17 + 52));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_8008B3C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008B3D0;
    }
}

loc_8008B3C8:
{
    r20 = 0;
    goto loc_8008B3EC;
}

loc_8008B3D0:
{
    r3 = 715849728;
    r0 = (r4 - r0);
    r3 = (r3 + -21845);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 4);
    r3_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_23 & 1);
    r20 = (r0 + r3);
}

loc_8008B3EC:
{
    guest_range_8 = MemoryInline::ResolveRangeHost((r1 + 10), 0, 46u, false, true);
    MemoryInline::WriteResolved16(guest_range_8, 0u, (r1 + 10), static_cast<uint16_t>(r31));
    r3 = r17;
    r4 = (r1 + 8);
    r5 = 0;
    MemoryInline::WriteResolved16(guest_range_8, 4u, (r1 + 14), static_cast<uint16_t>(r30));
    MemoryInline::WriteResolved16(guest_range_8, 32u, (r1 + 42), static_cast<uint16_t>(r29));
    MemoryInline::WriteResolved16(guest_range_8, 8u, (r1 + 18), static_cast<uint16_t>(r28));
    MemoryInline::WriteResolved16(guest_range_8, 12u, (r1 + 22), static_cast<uint16_t>(r27));
    MemoryInline::WriteResolved16(guest_range_8, 36u, (r1 + 46), static_cast<uint16_t>(r26));
    MemoryInline::WriteResolved16(guest_range_8, 16u, (r1 + 26), static_cast<uint16_t>(r25));
    MemoryInline::WriteResolved16(guest_range_8, 20u, (r1 + 30), static_cast<uint16_t>(r24));
    MemoryInline::WriteResolved16(guest_range_8, 40u, (r1 + 50), static_cast<uint16_t>(r23));
    MemoryInline::WriteResolved16(guest_range_8, 24u, (r1 + 34), static_cast<uint16_t>(r22));
    MemoryInline::WriteResolved16(guest_range_8, 28u, (r1 + 38), static_cast<uint16_t>(r21));
    MemoryInline::WriteResolved16(guest_range_8, 44u, (r1 + 54), static_cast<uint16_t>(r20));
    ctx->lr = 0x8008B42Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8008BFE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    guest_range_3 = MemoryInline::ResolveRangeHost(r18, 0, 24u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_3, 0u, r18);
}

loc_8008B434:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008B440;
    }
}

loc_8008B438:
{
}

loc_8008B43C:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8008B448;
    }
}

loc_8008B440:
{
    MemoryInline::FlatWrite16((r17 + 30), static_cast<uint16_t>(r0));
    goto loc_8008B458;
}

loc_8008B448:
{
    r0 = (r31 * 96);
    r3 = MemoryInline::FlatRead16((r17 + 30));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r17 + 30), static_cast<uint16_t>(r0));
}

loc_8008B458:
{
    r0 = MemoryInline::ReadResolved16(guest_range_3, 2u, (r18 + 2));
}

loc_8008B460:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008B46C;
    }
}

loc_8008B464:
{
}

loc_8008B468:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_8008B474;
    }
}

loc_8008B46C:
{
    MemoryInline::FlatWrite16((r17 + 32), static_cast<uint16_t>(r0));
    goto loc_8008B484;
}

loc_8008B474:
{
    r0 = (r30 * 96);
    r3 = MemoryInline::FlatRead16((r17 + 32));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r17 + 32), static_cast<uint16_t>(r0));
}

loc_8008B484:
{
    r0 = MemoryInline::ReadResolved16(guest_range_3, 4u, (r18 + 4));
}

loc_8008B48C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008B498;
    }
}

loc_8008B490:
{
}

loc_8008B494:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_8008B4A0;
    }
}

loc_8008B498:
{
    MemoryInline::FlatWrite16((r17 + 34), static_cast<uint16_t>(r0));
    goto loc_8008B4B0;
}

loc_8008B4A0:
{
    r0 = (r29 * 96);
    r3 = MemoryInline::FlatRead16((r17 + 34));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r17 + 34), static_cast<uint16_t>(r0));
}

loc_8008B4B0:
{
    r0 = MemoryInline::ReadResolved16(guest_range_3, 6u, (r18 + 6));
}

loc_8008B4B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008B4C4;
    }
}

loc_8008B4BC:
{
}

loc_8008B4C0:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_8008B4CC;
    }
}

loc_8008B4C4:
{
    MemoryInline::FlatWrite16((r17 + 36), static_cast<uint16_t>(r0));
    goto loc_8008B4DC;
}

loc_8008B4CC:
{
    r0 = (r28 * 96);
    r3 = MemoryInline::FlatRead16((r17 + 36));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r17 + 36), static_cast<uint16_t>(r0));
}

loc_8008B4DC:
{
    r0 = MemoryInline::ReadResolved16(guest_range_3, 8u, (r18 + 8));
}

loc_8008B4E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008B4F0;
    }
}

loc_8008B4E8:
{
}

loc_8008B4EC:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_8008B4F8;
    }
}

loc_8008B4F0:
{
    MemoryInline::FlatWrite16((r17 + 38), static_cast<uint16_t>(r0));
    goto loc_8008B508;
}

loc_8008B4F8:
{
    r0 = (r27 * 96);
    r3 = MemoryInline::FlatRead16((r17 + 38));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r17 + 38), static_cast<uint16_t>(r0));
}

loc_8008B508:
{
    r0 = MemoryInline::ReadResolved16(guest_range_3, 10u, (r18 + 10));
}

loc_8008B510:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008B51C;
    }
}

loc_8008B514:
{
}

loc_8008B518:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_8008B524;
    }
}

loc_8008B51C:
{
    MemoryInline::FlatWrite16((r17 + 40), static_cast<uint16_t>(r0));
    goto loc_8008B534;
}

loc_8008B524:
{
    r0 = (r26 * 96);
    r3 = MemoryInline::FlatRead16((r17 + 40));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r17 + 40), static_cast<uint16_t>(r0));
}

loc_8008B534:
{
    r0 = MemoryInline::ReadResolved16(guest_range_3, 12u, (r18 + 12));
}

loc_8008B53C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008B548;
    }
}

loc_8008B540:
{
}

loc_8008B544:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_8008B550;
    }
}

loc_8008B548:
{
    MemoryInline::FlatWrite16((r17 + 42), static_cast<uint16_t>(r0));
    goto loc_8008B560;
}

loc_8008B550:
{
    r0 = (r25 * 96);
    r3 = MemoryInline::FlatRead16((r17 + 42));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r17 + 42), static_cast<uint16_t>(r0));
}

loc_8008B560:
{
    r0 = MemoryInline::ReadResolved16(guest_range_3, 14u, (r18 + 14));
}

loc_8008B568:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008B574;
    }
}

loc_8008B56C:
{
}

loc_8008B570:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(0))) {
        goto loc_8008B57C;
    }
}

loc_8008B574:
{
    MemoryInline::FlatWrite16((r17 + 44), static_cast<uint16_t>(r0));
    goto loc_8008B58C;
}

loc_8008B57C:
{
    r0 = (r24 * 96);
    r3 = MemoryInline::FlatRead16((r17 + 44));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r17 + 44), static_cast<uint16_t>(r0));
}

loc_8008B58C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_3, 16u, (r18 + 16));
}

loc_8008B594:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008B5A0;
    }
}

loc_8008B598:
{
}

loc_8008B59C:
{
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_8008B5A8;
    }
}

loc_8008B5A0:
{
    MemoryInline::FlatWrite16((r17 + 46), static_cast<uint16_t>(r0));
    goto loc_8008B5B8;
}

loc_8008B5A8:
{
    r0 = (r23 * 96);
    r3 = MemoryInline::FlatRead16((r17 + 46));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r17 + 46), static_cast<uint16_t>(r0));
}

loc_8008B5B8:
{
    r0 = MemoryInline::ReadResolved16(guest_range_3, 18u, (r18 + 18));
}

loc_8008B5C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008B5CC;
    }
}

loc_8008B5C4:
{
}

loc_8008B5C8:
{
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(0))) {
        goto loc_8008B5D4;
    }
}

loc_8008B5CC:
{
    MemoryInline::FlatWrite16((r17 + 48), static_cast<uint16_t>(r0));
    goto loc_8008B5E4;
}

loc_8008B5D4:
{
    r0 = (r22 * 96);
    r3 = MemoryInline::FlatRead16((r17 + 48));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r17 + 48), static_cast<uint16_t>(r0));
}

loc_8008B5E4:
{
    r0 = MemoryInline::ReadResolved16(guest_range_3, 20u, (r18 + 20));
}

loc_8008B5EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008B5F8;
    }
}

loc_8008B5F0:
{
}

loc_8008B5F4:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(0))) {
        goto loc_8008B600;
    }
}

loc_8008B5F8:
{
    MemoryInline::FlatWrite16((r17 + 50), static_cast<uint16_t>(r0));
    goto loc_8008B610;
}

loc_8008B600:
{
    r0 = (r21 * 96);
    r3 = MemoryInline::FlatRead16((r17 + 50));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r17 + 50), static_cast<uint16_t>(r0));
}

loc_8008B610:
{
    r0 = MemoryInline::ReadResolved16(guest_range_3, 22u, (r18 + 22));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8008B618:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008B624;
    }
}

loc_8008B61C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r20), static_cast<int32_t>(0));
}

loc_8008B620:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008B62C;
    }
}

loc_8008B624:
{
    MemoryInline::FlatWrite16((r17 + 52), static_cast<uint16_t>(r0));
    goto loc_8008B63C;
}

loc_8008B62C:
{
    r0 = (r20 * 96);
    r3 = MemoryInline::FlatRead16((r17 + 52));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r17 + 52), static_cast<uint16_t>(r0));
}

loc_8008B63C:
{
    r3 = r16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r19;
}

loc_8008B648:
{
    r11 = (r1 + 128);
    // inline leaf 0x800215C0 (17 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 24u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 32u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 40u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_4, 44u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 48u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_4, 48u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_4, 52u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 56u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_4, 56u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_4, 60u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215C0
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
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFF1FFB gpr_write=0xFFFF1FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8008B040 func_8008B040 preserves=true fpr_mask=0x00000000
