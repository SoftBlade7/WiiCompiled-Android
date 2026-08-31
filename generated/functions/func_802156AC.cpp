#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802156AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r24_addr_0 = 0;
    uint32_t r24_addr_1 = 0;
    uint32_t r24_addr_2 = 0;
    uint32_t r24_addr_3 = 0;
    uint32_t r24_addr_4 = 0;
    uint32_t r24_addr_5 = 0;
    uint32_t r25_addr_0 = 0;
    uint32_t r25_addr_1 = 0;
    uint32_t r25_addr_10 = 0;
    uint32_t r25_addr_11 = 0;
    uint32_t r25_addr_12 = 0;
    uint32_t r25_addr_13 = 0;
    uint32_t r25_addr_14 = 0;
    uint32_t r25_addr_15 = 0;
    uint32_t r25_addr_2 = 0;
    uint32_t r25_addr_3 = 0;
    uint32_t r25_addr_4 = 0;
    uint32_t r25_addr_5 = 0;
    uint32_t r25_addr_6 = 0;
    uint32_t r25_addr_7 = 0;
    uint32_t r25_addr_8 = 0;
    uint32_t r25_addr_9 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r27_rot_3 = 0;
    uint32_t r27_rot_4 = 0;
    uint32_t r27_rot_5 = 0;
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

    goto loc_802156AC;

loc_802156AC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    r6 = (static_cast<int32_t>(r5) >> 16);
    r10 = 89;
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 68), r0);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r5);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r5) >> 8);
    r9 = 97;
    r8 = 122;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 32), r24);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 40), r26);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 44), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r1 + 48), r28);
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r1 + 56), r30);
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r1 + 60), r31);
    }
    r31 = 0;
    r7 = 49;
    r24 = r3;
    r25 = r4;
    r26 = r5;
    r30 = 0;
    r27 = 128;
    r29 = 16;
    r28 = 17;
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 17u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r4, static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r4 + 1), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r4 + 2), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r4 + 3), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r4 + 4), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r4 + 5), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r4 + 6), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r4 + 7), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r4 + 16), static_cast<uint8_t>(r31));
    goto loc_8021585C;
}

loc_8021571C:
{
    r3 = r24;
    r4 = r30;
    r5 = r26;
    r6 = (r1 + 20);
    r7 = (r1 + 16);
    ctx->lr = 0x80215734u;
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
    InvokeDirectCpu<0x8021587Cu>(ctx);
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
    r0 = MemoryInline::FlatRead32((r1 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8021573C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80215828;
    }
}

loc_80215740:
{
    r3 = r24;
    r5 = r26;
    r4 = (r30 + 1);
    r6 = (r1 + 12);
    r7 = (r1 + 8);
    ctx->lr = 0x80215758u;
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
    InvokeDirectCpu<0x8021587Cu>(ctx);
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
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r3 + 1);
}

loc_80215768:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_802157B0;
    }
}

loc_8021576C:
{
    r25_addr_2 = (r25 + r29);
    r3 = MemoryInline::FlatRead8(r25_addr_2);
    r24_addr_2 = (r24 + r30);
    r0 = MemoryInline::FlatRead8(r24_addr_2);
    r30 = (r30 + 1);
    r3 = (r3 | r27);
    r25_addr_3 = (r25 + r29);
    MemoryInline::FlatWrite8(r25_addr_3, static_cast<uint8_t>(r3));
    r27_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(31));
    r27 = (r27_rot_2 & 127);
}

loc_80215784:
{
    r25_addr_4 = (r25 + r28);
    MemoryInline::FlatWrite8(r25_addr_4, static_cast<uint8_t>(r0));
    r28 = (r28 + 1);
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_802157A0;
    }
}

loc_80215790:
{
    r25_addr_5 = (r25 + r28);
    MemoryInline::FlatWrite8(r25_addr_5, static_cast<uint8_t>(r31));
    r29 = r28;
    r27 = 128;
    r28 = (r28 + 1);
}

loc_802157A0:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
}

loc_802157B0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r4 = MemoryInline::FlatRead32((r1 + 16));
    r3 = (r30 - r0);
    r3 = (r3 + -1);
}

loc_802157C4:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(18))) {
        goto loc_802157F8;
    }
}

loc_802157CC:
{
    r0 = (r4 + -2);
    r4 = (r25 + r28);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r0 = (r0_rot_2 & -4096);
    r0 = (r3 | r0);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 8);
    r25_addr_8 = (r25 + r28);
    MemoryInline::FlatWrite8(r25_addr_8, static_cast<uint8_t>(r0));
    r28 = (r28 + 2);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    goto loc_8021581C;
}

loc_802157F8:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r3) >> 8);
    r25_addr_9 = (r25 + r28);
    MemoryInline::FlatWrite8(r25_addr_9, static_cast<uint8_t>(r0));
    r4 = (r25 + r28);
    r28 = (r28 + 3);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r0 = (r3 + -18);
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
}

loc_8021581C:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r30 = (r30 + r0);
    goto loc_80215844;
}

loc_80215828:
{
    r25_addr_11 = (r25 + r29);
    r3 = MemoryInline::FlatRead8(r25_addr_11);
    r24_addr_4 = (r24 + r30);
    r0 = MemoryInline::FlatRead8(r24_addr_4);
    r30 = (r30 + 1);
    r3 = (r3 | r27);
    r25_addr_12 = (r25 + r29);
    MemoryInline::FlatWrite8(r25_addr_12, static_cast<uint8_t>(r3));
    r25_addr_13 = (r25 + r28);
    MemoryInline::FlatWrite8(r25_addr_13, static_cast<uint8_t>(r0));
    r28 = (r28 + 1);
}

loc_80215844:
{
    r27_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(31));
    r27 = (r27_rot_5 & 127);
}

loc_80215848:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_8021585C;
    }
}

loc_8021584C:
{
    r25_addr_15 = (r25 + r28);
    MemoryInline::FlatWrite8(r25_addr_15, static_cast<uint8_t>(r31));
    r29 = r28;
    r27 = 128;
    r28 = (r28 + 1);
}

loc_8021585C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r26));
}

loc_80215860:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8021571C;
    }
}

loc_80215864:
{
    r3 = r28;
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 32), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r1 + 32));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r1 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r1 + 40));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r1 + 44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r1 + 48));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r1 + 52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r1 + 56));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r1 + 60));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
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

// RECOMP_GUEST_ABI gpr_read=0xFF801FFB gpr_write=0xFF801FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802156AC func_802156AC preserves=true fpr_mask=0x00000000
