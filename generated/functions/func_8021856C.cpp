#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8021856C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
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

    goto loc_8021856C;

loc_8021856C:
{
    MemoryInline::FlatWriteRam32((r1 + -5184), r1);
    r1 = (r1 + -5184);
    r0 = ctx->lr;
}

loc_80218578:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 5148), 0, 44u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 40u, (r1 + 5188), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + 5148), r23);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r1 + 5152), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 5156), r25);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r1 + 5160), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r1 + 5164), r27);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r1 + 5168), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r1 + 5172), r29);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r1 + 5176), r30);
    }
    MemoryInline::WriteResolved32(guest_range_2, 32u, (r1 + 5180), r31);
    r24 = r3;
    r27 = MemoryInline::FlatRead8((r1 + 5195));
    r25 = r6;
    r26 = r7;
    r23 = r10;
    r31 = 0;
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(115))) {
        goto loc_802185A4;
    }
}

loc_8021859C:
{
}

loc_802185A0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(83))) {
        goto loc_802185A8;
    }
}

loc_802185A4:
{
    r31 = 1;
}

loc_802185A8:
{
}

loc_802185AC:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_802185B8;
    }
}

loc_802185B0:
{
    r30 = MemoryInline::FlatRead16(r3);
    goto loc_802185BC;
}

loc_802185B8:
{
    r30 = MemoryInline::FlatRead16((r3 + 2));
}

loc_802185BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_802185C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802185CC;
    }
}

loc_802185C4:
{
    r29 = MemoryInline::FlatRead16((r3 + 2));
    goto loc_802185D0;
}

loc_802185CC:
{
    r29 = MemoryInline::FlatRead16(r3);
}

loc_802185D0:
{
    r3 = r4;
    r5 = r30;
    r6 = r25;
    r7 = r26;
    r28_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(31));
    r28 = (r28_rot_0 & 32767);
    r4 = (r1 + 1040);
    ctx->lr = 0x802185ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    InvokeDirectCpu<0x80217ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r10 = ctx->gpr[10];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_802185F0:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_80218854;
    }
}

loc_802185F4:
{
    r5 = r28;
    r6 = (r1 + 16);
    r4 = (r1 + 1040);
    r7 = 0;
    ctr = r30;
}

loc_8021860C:
{
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(0))) {
        goto loc_8021869C;
    }
}

loc_80218610:
{
}

loc_80218614:
{
    r0 = (r7 - r28);
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r28))) {
        goto loc_80218620;
    }
}

loc_8021861C:
{
    r0 = r5;
}

loc_80218620:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
}

loc_80218628:
{
    r4_addr_2 = (r4 + r0);
    r3 = MemoryInline::FlatRead8(r4_addr_2);
    r0 = (r7 - r28);
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r3));
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r28))) {
        goto loc_8021863C;
    }
}

loc_80218638:
{
    r0 = r5;
}

loc_8021863C:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
}

loc_80218644:
{
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 1));
    r0 = (r7 - r28);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r3));
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r28))) {
        goto loc_8021865C;
    }
}

loc_80218658:
{
    r0 = r5;
}

loc_8021865C:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
}

loc_80218664:
{
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 2));
    r0 = (r7 - r28);
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r3));
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r28))) {
        goto loc_8021867C;
    }
}

loc_80218678:
{
    r0 = r5;
}

loc_8021867C:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r5 = (r5 + 1);
    r3 = (r4 + r0);
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead8((r3 + 3));
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r0));
    r6 = (r6 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80218610;
    }
}

loc_8021869C:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_802186A0:
{
    r5 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80218854;
    }
}

loc_802186A8:
{
}

loc_802186AC:
{
    r6 = (r30 + -8);
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(8))) {
        goto loc_80218804;
    }
}

loc_802186B4:
{
    r4 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_802186D0;
    }
}

loc_802186BC:
{
    r3 = 0x80000000u;
    r0 = (r3 + -2);
}

loc_802186C8:
{
    if ((static_cast<int32_t>(r30) > static_cast<int32_t>(r0))) {
        goto loc_802186D0;
    }
}

loc_802186CC:
{
    r4 = 1;
}

loc_802186D0:
{
}

loc_802186D4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80218804;
    }
}

loc_802186D8:
{
    r0 = (r6 + 7);
    r3 = (r1 + 16);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_7 & 536870911);
    r4 = (r1 + 1040);
    ctr = r0;
}

loc_802186F0:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(0))) {
        goto loc_80218804;
    }
}

loc_802186F4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r3);
    r5 = (r5 + 8);
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r4, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r4 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r4 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r4 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 4));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r4 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r4 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 6));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r4 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 7));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r4 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r3 + 8));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r4 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r3 + 9));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r4 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r3 + 10));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r4 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r3 + 11));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r4 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r3 + 12));
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r4 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r3 + 13));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r4 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r3 + 14));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r4 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 15u, (r3 + 15));
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r4 + 15), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 16u, (r3 + 16));
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r4 + 16), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 17u, (r3 + 17));
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r4 + 17), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 18u, (r3 + 18));
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r4 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 19u, (r3 + 19));
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r4 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 20u, (r3 + 20));
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r4 + 20), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 21u, (r3 + 21));
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r4 + 21), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 22u, (r3 + 22));
    MemoryInline::WriteResolved8(guest_range_1, 22u, (r4 + 22), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 23u, (r3 + 23));
    MemoryInline::WriteResolved8(guest_range_1, 23u, (r4 + 23), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 24u, (r3 + 24));
    MemoryInline::WriteResolved8(guest_range_1, 24u, (r4 + 24), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 25u, (r3 + 25));
    MemoryInline::WriteResolved8(guest_range_1, 25u, (r4 + 25), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 26u, (r3 + 26));
    MemoryInline::WriteResolved8(guest_range_1, 26u, (r4 + 26), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 27u, (r3 + 27));
    MemoryInline::WriteResolved8(guest_range_1, 27u, (r4 + 27), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 28u, (r3 + 28));
    MemoryInline::WriteResolved8(guest_range_1, 28u, (r4 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 29u, (r3 + 29));
    MemoryInline::WriteResolved8(guest_range_1, 29u, (r4 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 30u, (r3 + 30));
    MemoryInline::WriteResolved8(guest_range_1, 30u, (r4 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 31u, (r3 + 31));
    r3 = (r3 + 32);
    MemoryInline::WriteResolved8(guest_range_1, 31u, (r4 + 31), static_cast<uint8_t>(r0));
    r4 = (r4 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802186F4;
    }
}

loc_80218804:
{
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r6 = (r6_rot_1 & -4);
    r3 = (r1 + 16);
    r4 = (r1 + 1040);
    r0 = (r30 - r5);
    r3 = (r3 + r6);
    r4 = (r4 + r6);
    ctr = r0;
}

loc_80218824:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r30))) {
        goto loc_80218854;
    }
}

loc_80218828:
{
    r0 = MemoryInline::FlatRead8(r3);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 1));
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 2));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 3));
    r3 = (r3 + 4);
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r0));
    r4 = (r4 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80218828;
    }
}

loc_80218854:
{
    r0 = (0 - r27);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_8021885C:
{
    r0 = (r0 | r27);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 31);
    r0 = (r25 & ~r0);
    r28 = (r0 & 65535);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80218874;
    }
}

loc_80218870:
{
    r26 = r30;
}

loc_80218874:
{
    r25 = (r26 & 65535);
    goto loc_80218918;
}

loc_8021887C:
{
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & 262140);
    r26 = (r1 + 1040);
    r26 = (r26 + r0);
    r27 = 0;
    goto loc_80218908;
}

loc_80218890:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80218894:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802188D0;
    }
}

loc_80218898:
{
    r9 = MemoryInline::FlatRead8(r26);
    r3 = r24;
    r8 = MemoryInline::FlatRead8((r26 + 1));
    r4 = (r28 & 65535);
    r7 = MemoryInline::FlatRead8((r26 + 2));
    r5 = (r27 & 65535);
    r0 = MemoryInline::FlatRead8((r26 + 3));
    r6 = (r1 + 12);
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
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
    InvokeDirectCpu<0x80218AE0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80218904;
}

loc_802188D0:
{
    r9 = MemoryInline::FlatRead8(r26);
    r3 = r24;
    r8 = MemoryInline::FlatRead8((r26 + 1));
    r4 = (r27 & 65535);
    r7 = MemoryInline::FlatRead8((r26 + 2));
    r5 = (r28 & 65535);
    r0 = MemoryInline::FlatRead8((r26 + 3));
    r6 = (r1 + 8);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
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
    InvokeDirectCpu<0x80218AE0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80218904:
{
    r27 = (r27 + 1);
}

loc_80218908:
{
    r0 = (r27 & 65535);
}

loc_80218910:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r29))) {
        goto loc_80218890;
    }
}

loc_80218914:
{
    r28 = (r28 + 1);
}

loc_80218918:
{
    r0 = (r28 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r25));
}

loc_80218920:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8021887C;
    }
}

loc_80218924:
{
    r3 = MemoryInline::FlatRead16(r24);
    r6 = 0;
    r4 = MemoryInline::FlatRead16((r24 + 2));
    r7 = 1;
    r5 = MemoryInline::FlatRead8((r24 + 5));
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80170614u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r24 + 12));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A162Cu>(ctx);
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 5148), 0, 44u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r1 + 5148));
            r24 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r1 + 5152));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r1 + 5156));
            r26 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r1 + 5160));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r1 + 5164));
            r28 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r1 + 5168));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r1 + 5172));
            r30 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r1 + 5176));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r1 + 5180));
    r0 = MemoryInline::ReadResolved32(guest_range_3, 40u, (r1 + 5188));
    ctx->lr = r0;
    r1 = (r1 + 5184);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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

// RECOMP_GUEST_ABI gpr_read=0xFF801FFF gpr_write=0xFF801FFB gpr_return=0x00000018 fpr_read=0x00000FFF fpr_write=0x00000FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8021856C func_8021856C preserves=true fpr_mask=0x00000000
