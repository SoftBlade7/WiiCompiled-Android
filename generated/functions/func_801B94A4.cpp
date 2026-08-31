#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801B94A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r27_rot_3 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
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
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
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
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_801B94A4;

loc_801B94A4:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80021594 (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021594
    r0 = MemoryInline::FlatRead32((r13 + -24776));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801B94C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B99D4;
    }
}

loc_801B94C4:
{
    r3 = MemoryInline::FlatRead32((r13 + -28544));
    ctx->lr = 0x801B94CCu;
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
    InvokeDirectCpu<0x801A0504u>(ctx);
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
    r13 = ctx->gpr[13];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 1;
    r3 = -872415232;
    MemoryInline::FlatWrite32((r13 + -24776), r0);
    r0 = MemoryInline::FlatRead16((r3 + 8194));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801B94E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B94EC;
    }
}

loc_801B94E4:
{
    r3 = 0;
    ctx->lr = 0x801B94ECu;
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
    InvokeDirectCpu<0x801B9294u>(ctx);
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
    r13 = ctx->gpr[13];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801B94EC:
{
    r4 = 0x802A0000u;
    r29 = 0;
    r3 = (r4 + -9980);
    guest_range_3 = MemoryInline::ResolveRangeHost((r13 + -24728), 0, 128u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 124u, (r13 + -24604), r29);
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 2), 0, 48u, true, false);
    r5 = MemoryInline::ReadResolved16(guest_range_1, 0u, (r3 + 2));
    r30 = -872415232;
    r4 = MemoryInline::FlatRead16((r4 + -9980));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(10));
    r0 = (r0_rot_1 & 64512);
    MemoryInline::WriteResolved32(guest_range_3, 12u, (r13 + -24716), r29);
    r0 = (r4 | r0);
    r4 = (static_cast<int32_t>(r5) >> 6);
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r13 + -24720), r29);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r13 + -24700), r29);
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r13 + -24704), r29);
    }
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r13 + -24728), r29);
    MemoryInline::WriteResolved32(guest_range_3, 16u, (r13 + -24712), r29);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_3, 120u, (r13 + -24608), r29);
        MemoryInline::WriteResolved32(guest_range_3, 116u, (r13 + -24612), r29);
    }
    MemoryInline::FlatWrite16((r30 + 8270), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r3 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite16((r30 + 8268), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 4u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r4 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r3 + 8));
            r5 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r3 + 6));
        }
    }
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(10));
    r0 = (r0_rot_3 & 64512);
    r4 = (static_cast<int32_t>(r4) >> 6);
    r0 = (r5 | r0);
    MemoryInline::FlatWrite16((r30 + 8274), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r3 + 10));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & -16);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite16((r30 + 8272), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 10u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r4 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r3 + 14));
            r5 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r3 + 12));
        }
    }
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(10));
    r0 = (r0_rot_5 & 64512);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(6) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 6);
    r0 = (r5 | r0);
    MemoryInline::FlatWrite16((r30 + 8278), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r3 + 16));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_6 & -16);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite16((r30 + 8276), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r4 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved16(guest_range_1, 18u, (r3 + 20));
            r4 = MemoryInline::ReadResolved16(guest_range_1, 16u, (r3 + 18));
        }
    }
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_7 & -256);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite16((r30 + 8282), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 20u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r4 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved16(guest_range_1, 22u, (r3 + 24));
            r4 = MemoryInline::ReadResolved16(guest_range_1, 20u, (r3 + 22));
        }
    }
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_8 & -256);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite16((r30 + 8280), static_cast<uint16_t>(r0));
    r4 = MemoryInline::ReadResolved16(guest_range_1, 26u, (r3 + 28));
    r0 = 640;
    r5 = MemoryInline::ReadResolved16(guest_range_1, 24u, (r3 + 26));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r4 = (r4_rot_1 & -256);
    r4 = (r5 | r4);
    MemoryInline::FlatWrite16((r30 + 8286), static_cast<uint16_t>(r4));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 28u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r4 = MemoryInline::ReadResolved16(guest_range_1, 30u, (r3 + 32));
            r5 = MemoryInline::ReadResolved16(guest_range_1, 28u, (r3 + 30));
        }
    }
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r4 = (r4_rot_2 & -256);
    r4 = (r5 | r4);
    MemoryInline::FlatWrite16((r30 + 8284), static_cast<uint16_t>(r4));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r4 = MemoryInline::ReadResolved16(guest_range_1, 34u, (r3 + 36));
            r5 = MemoryInline::ReadResolved16(guest_range_1, 32u, (r3 + 34));
        }
    }
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r4 = (r4_rot_3 & -256);
    r4 = (r5 | r4);
    MemoryInline::FlatWrite16((r30 + 8290), static_cast<uint16_t>(r4));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 36u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r4 = MemoryInline::ReadResolved16(guest_range_1, 38u, (r3 + 40));
            r5 = MemoryInline::ReadResolved16(guest_range_1, 36u, (r3 + 38));
        }
    }
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r4 = (r4_rot_4 & -256);
    r4 = (r5 | r4);
    MemoryInline::FlatWrite16((r30 + 8288), static_cast<uint16_t>(r4));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r4 = MemoryInline::ReadResolved16(guest_range_1, 42u, (r3 + 44));
            r5 = MemoryInline::ReadResolved16(guest_range_1, 40u, (r3 + 42));
        }
    }
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r4 = (r4_rot_5 & -256);
    r4 = (r5 | r4);
    MemoryInline::FlatWrite16((r30 + 8294), static_cast<uint16_t>(r4));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 44u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r4 = MemoryInline::ReadResolved16(guest_range_1, 46u, (r3 + 48));
            r5 = MemoryInline::ReadResolved16(guest_range_1, 44u, (r3 + 46));
        }
    }
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r3 = (r3_rot_1 & -256);
    r3 = (r5 | r3);
    MemoryInline::FlatWrite16((r30 + 8292), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r30 + 8304), static_cast<uint16_t>(r0));
    ctx->lr = 0x801B9644u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801B1C38u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWrite16((r13 + -24730), static_cast<uint16_t>(r29));
    r3 = 0x80000000u;
    MemoryInline::FlatWrite16((r13 + -24732), static_cast<uint16_t>(r0));
    r24 = MemoryInline::FlatRead32((r3 + 204));
    r29 = MemoryInline::FlatRead16((r30 + 8194));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead16((r30 + 8300));
    r0 = (r0 & 1);
}

loc_801B966C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801B9678;
    }
}

loc_801B9670:
{
    r27 = 2;
    goto loc_801B968C;
}

loc_801B9678:
{
    r0 = MemoryInline::FlatRead16((r30 + 8194));
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r4 = (r4_rot_6 & 1);
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r27_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r27 = (r27_rot_1 & 1);
}

loc_801B968C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0x80350000u;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r24), static_cast<uint32_t>(5));
}

loc_801B9698:
{
    r3 = (r3 + 2144);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(24));
    r0 = (r0_rot_9 & 3);
    MemoryInline::FlatWriteRam32((r3 + 36), r27);
    MemoryInline::FlatWriteRam32((r3 + 40), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B96BC;
    }
}

loc_801B96AC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r24), static_cast<uint32_t>(1));
}

loc_801B96B0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B96CC;
    }
}

loc_801B96B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801B96B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B96CC;
    }
}

loc_801B96BC:
{
    r3 = 0x80350000u;
    r0 = 5;
    r3 = (r3 + 2144);
    MemoryInline::FlatWriteRam32((r3 + 40), r0);
}

loc_801B96CC:
{
    r30 = 0x80350000u;
    r31 = (r30 + 2144);
    r5 = MemoryInline::FlatRead32((r31 + 40));
    r0 = MemoryInline::FlatRead32((r31 + 36));
    r4 = (r5 + -3);
    r3 = (3 - r5);
    r3 = ~(r4 | r3);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r3) >> 31);
    r3 = (r5 & ~r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & -4);
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801B917Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r7 = 640;
    r8 = MemoryInline::FlatRead32((r31 + 40));
    r4 = 0x80350000u;
    MemoryInline::FlatWriteRam32((r31 + 84), r3);
    r6 = (720 - r7);
    r0 = MemoryInline::FlatRead16((r13 + -24732));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (r4 + 2024);
    MemoryInline::FlatWrite32((r13 + -24660), r3);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & 1);
    MemoryInline::FlatWriteRam16((r4 + 2), static_cast<uint16_t>(r29));
    r5 = (r5 + r6);
    r5 = (static_cast<int32_t>(r5) >> 1);
    r4 = 0;
    MemoryInline::FlatWrite32((r13 + -24664), r8);
    r6 = (r5 + r0);
    r9 = (720 - r7);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(720) >= static_cast<uint32_t>(r7) ? 1u : 0u) << 29);
    MemoryInline::FlatWriteRam16((r31 + 4), static_cast<uint16_t>(r7));
}

loc_801B9744:
{
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & 65534);
    MemoryInline::FlatWriteRam16((r30 + 2144), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam16((r31 + 6), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r31 + 2), static_cast<uint16_t>(r4));
    r7 = MemoryInline::FlatRead16((r3 + 2));
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(r9))) {
        goto loc_801B9764;
    }
}

loc_801B9760:
{
    goto loc_801B976C;
}

loc_801B9764:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r6);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r6) >> 31);
    r9 = (r6 & ~r0);
}

loc_801B976C:
{
    r5 = 0x80350000u;
    r8 = MemoryInline::FlatRead16((r13 + -24730));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r5 = (r5 + 2144);
    r6 = MemoryInline::FlatRead16((r5 + 2));
    r4 = MemoryInline::FlatRead32((r5 + 32));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r6 = (r6 & 1);
    r10 = (r0 + r8);
    MemoryInline::FlatWriteRam16((r5 + 8), static_cast<uint16_t>(r9));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    r4_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r4 = (r4_rot_8 & 134217727);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(r6));
}

loc_801B979C:
{
    r0 = r6;
    r5 = (r4 + 1);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801B97AC;
    }
}

loc_801B97A8:
{
    r0 = r10;
}

loc_801B97AC:
{
    r4 = 0x80350000u;
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r4 = (r4 + 2144);
    r9 = 640;
    r10 = MemoryInline::FlatRead16((r4 + 2));
    r30_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r30 = (r30_rot_1 & -2);
    r7 = MemoryInline::FlatRead16((r4 + 6));
    r26 = (r30 - r6);
    r10 = (static_cast<int32_t>(static_cast<int16_t>(r10)));
    r11 = MemoryInline::FlatRead16((r4 + 2));
    r11 = (r11 << 16);
    r11 = (static_cast<int32_t>(r11) >> 16);
    r27 = (r8 + r10);
    r12 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r12 = (r12 + r27);
    r10 = MemoryInline::FlatRead16((r4 + 6));
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    r11 = (r11 + r8);
    r25 = (r27 - r6);
    r8 = (r12 - r26);
    r10 = (r10 + r27);
    r12 = (0 - r8);
    MemoryInline::FlatWriteRam16((r4 + 10), static_cast<uint16_t>(r0));
    r12 = (r12 & ~r8);
    r24 = (r10 - r26);
    r27 = (static_cast<int32_t>(r12) >> 31);
    r26 = (r11 - r6);
    r10 = (static_cast<int32_t>(r25) >> 31);
    r6 = (0 - r24);
    r12 = (static_cast<int32_t>(r26) >> 31);
    r8 = (r8 & r27);
    r31 = (r25 & r10);
    r6 = (r6 & ~r24);
    r10 = (static_cast<int32_t>(r6) >> 31);
    r30 = (r26 & r12);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r25);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r6 = (static_cast<int32_t>(r25) >> 31);
    r7 = (r7 + r31);
    r0 = (r7 - r8);
    r26 = (r24 & r10);
    r6 = (r25 & r6);
    MemoryInline::FlatWriteRam16((r4 + 12), static_cast<uint16_t>(r0));
    r10 = PPC_Divw(static_cast<int32_t>(r6), static_cast<int32_t>(r5));
    r11 = MemoryInline::FlatRead16((r4 + 28));
    r12 = MemoryInline::FlatRead16((r4 + 24));
    r29 = 0;
    MemoryInline::FlatWriteRam16((r4 + 18), static_cast<uint16_t>(r9));
    r6 = 40;
    r8 = PPC_Divw(static_cast<int32_t>(r30), static_cast<int32_t>(r5));
    r7 = (r11 + r10);
    r0 = 1;
    r5 = PPC_Divw(static_cast<int32_t>(r26), static_cast<int32_t>(r5));
    r8 = (r12 - r8);
    MemoryInline::FlatWriteRam16((r4 + 14), static_cast<uint16_t>(r8));
    r5 = (r7 - r5);
    MemoryInline::FlatWriteRam16((r4 + 16), static_cast<uint16_t>(r5));
    r5 = MemoryInline::FlatRead16((r3 + 2));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & 65534);
    MemoryInline::FlatWriteRam16((r4 + 22), static_cast<uint16_t>(r29));
    MemoryInline::FlatWriteRam16((r4 + 20), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam16((r4 + 24), static_cast<uint16_t>(r29));
    MemoryInline::FlatWriteRam16((r4 + 26), static_cast<uint16_t>(r9));
    r5 = MemoryInline::FlatRead16((r3 + 2));
    r3 = (r13 + -24640);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_3 & 65534);
    MemoryInline::FlatWriteRam32((r4 + 32), r29);
    MemoryInline::FlatWriteRam16((r4 + 28), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam8((r4 + 44), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r4 + 45), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r4 + 46), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r4 + 60), static_cast<uint8_t>(r29));
    MemoryInline::FlatWriteRam32((r4 + 64), r0);
    MemoryInline::FlatWriteRam32((r4 + 68), r29);
    // inline leaf 0x801A98A0 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    MemoryInline::FlatWrite32(r3, r0);
    // end of inlined leaf 0x801A98A0
    r5 = -872415232;
    r4 = 0x801C0000u;
    r0 = MemoryInline::FlatRead16((r5 + 8240));
    r4 = (r4 + -30492);
    r3 = 24;
    r0 = (r0 & 32767);
    MemoryInline::FlatWrite16((r5 + 8240), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r5 + 8244));
    r0 = (r0 & 32767);
    MemoryInline::FlatWrite16((r5 + 8244), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r13 + -24648), r29);
    MemoryInline::FlatWrite32((r13 + -24652), r29);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65F8u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 128;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A69BCu>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0x802A0000u;
    r3 = (r3 + -9744);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A8238u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r5 = MemoryInline::FlatRead32((r13 + -24664));
}

loc_801B9918:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(8))) {
        goto loc_801B9948;
    }
}

loc_801B991C:
{
    r4 = 0x802A0000u;
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r4 = (r4 + -9552);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x801B9934u:
        goto loc_801B9934;
        break;
    default:
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
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_801B9934:
{
    r28 = 0;
}

loc_801B9948:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(1));
}

loc_801B9950:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B9958;
    }
}

loc_801B9954:
{
    goto loc_801B9974;
}

loc_801B9958:
{
    r3 = 65536;
    r4 = 15000;
    r0 = (r3 + 24464);
    MemoryInline::FlatWrite32((r13 + -24760), r4);
    MemoryInline::FlatWrite32((r13 + -24756), r4);
    MemoryInline::FlatWrite32((r13 + -24752), r0);
    goto loc_801B998C;
}

loc_801B9974:
{
    r3 = 131072;
    r4 = 18000;
    r0 = (r3 + -23072);
    MemoryInline::FlatWrite32((r13 + -24760), r4);
    MemoryInline::FlatWrite32((r13 + -24756), r4);
    MemoryInline::FlatWrite32((r13 + -24752), r0);
}

loc_801B998C:
{
    r3 = 0;
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -24748), r3);
    r27 = 1;
    MemoryInline::FlatWrite32((r13 + -24744), r3);
    MemoryInline::FlatWrite32((r13 + -24624), r3);
    MemoryInline::FlatWrite32((r13 + -24764), r0);
    MemoryInline::FlatWrite32((r13 + -24740), r3);
    r0 = MemoryInline::FlatRead32((r13 + -24616));
    ctx->lr = 0x801B99B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801B1DD8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801B99B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B99C0;
    }
}

loc_801B99BC:
{
    r27 = 0;
}

loc_801B99C0:
{
    MemoryInline::FlatWrite32((r13 + -24616), r27);
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r13 + -24620));
    MemoryInline::FlatWrite32((r13 + -24620), r0);
    ctx->lr = 0x801B99D4u;
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
    InvokeDirectCpu<0x801BCD94u>(ctx);
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
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801B99D4:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215E0 (9 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E0
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
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801B94A4 func_801B94A4 preserves=true fpr_mask=0x00000000
