#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80675F6C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
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

    goto loc_80675F6C;

loc_80675F6C:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    r5 = MemoryInline::FlatRead32((r4 + 2032));
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80675F80:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 44u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + 20), r21);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r1 + 24), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 28), r23);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 36), r25);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 40), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 44), r27);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 48), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 52), r29);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 56), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 60), r31);
    r21 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80675FA4;
    }
}

loc_80675F8C:
{
    r0 = MemoryInline::FlatRead32((r4 + 2036));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80675F94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80675FA4;
    }
}

loc_80675F98:
{
    r0 = (r5 + r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(48128));
}

loc_80675FA0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80675FB0;
    }
}

loc_80675FA4:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_806760BC;
}

loc_80675FB0:
{
    r4_addr_0 = (r4 + r5);
    r7 = MemoryInline::FlatRead32(r4_addr_0);
    r0 = (r5 + 4);
    r26 = (r4 + r0);
    r6 = 1172832256;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r5 = 65536;
    r23 = (r0 + r26);
    r4 = 274857984;
    MemoryInline::FlatWrite32(r3, r7);
    r27 = r21;
    r25 = r23;
    r24 = (r3 + 24);
    r29 = (r6 + -19853);
    r31 = (r5 + -5536);
    r30 = (r4 + 19923);
    r22 = 0;
    r28 = 1;
    goto loc_806760B0;
}

loc_80675FF8:
{
    r0 = MemoryInline::FlatRead8((r23 + 83));
    r3 = r24;
    MemoryInline::FlatWrite32((r27 + 4), r0);
    r4 = (r25 + 4);
    r0 = MemoryInline::FlatRead32(r26);
    r5 = 76;
    MemoryInline::FlatWrite32((r27 + 20), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32(r23);
    r26 = (r26 + 4);
    r4 = MemoryInline::FlatRead8((r23 + 80));
    r25 = (r25 + 128);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r29)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    guest_range_1 = MemoryInline::ResolveRangeHost((r27 + 12), 0, 101u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 88u, (r27 + 100), r4);
    r4 = MemoryInline::FlatRead8((r23 + 81));
    r24 = (r24 + 112);
    MemoryInline::WriteResolved32(guest_range_1, 92u, (r27 + 104), r4);
    r22 = (r22 + 1);
    r5 = (static_cast<int32_t>(r3) >> 14);
    r7 = MemoryInline::FlatRead8((r23 + 82));
    r3 = (static_cast<int32_t>(r3) >> 14);
    r6 = MemoryInline::FlatRead8((r23 + 84));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    MemoryInline::WriteResolved32(guest_range_1, 96u, (r27 + 108), r7);
    r3 = (r3 + r4);
    r23 = (r23 + 128);
    r3 = (r3 * r31);
    MemoryInline::WriteResolved8(guest_range_1, 100u, (r27 + 112), static_cast<uint8_t>(r6));
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r4 = (r4_rot_3 & 1);
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r27 + 18), static_cast<uint8_t>(r28));
    r4 = (r5 + r4);
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r27 + 12), static_cast<uint16_t>(r4));
    r3 = (r0 - r3);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r30)) * static_cast<int64_t>(static_cast<int32_t>(r3))) >> 32));
    r4 = (static_cast<int32_t>(r3) >> 6);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r30)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & 1);
    r4 = (r4 + r5);
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r27 + 14), static_cast<uint8_t>(r4));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(6) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r3) >> 6);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_4 & 1);
    r3 = (r3 + r4);
    r3 = (r3 * 1000);
    r0 = (r0 - r3);
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r27 + 16), static_cast<uint16_t>(r0));
    r27 = (r27 + 112);
}

loc_806760B0:
{
    r0 = MemoryInline::FlatRead32(r21);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(r0));
}

loc_806760B8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80675FF8;
    }
}

loc_806760BC:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 52u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r1 + 20));
            r22 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r1 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r1 + 28));
            r24 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r1 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r1 + 36));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r1 + 40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r1 + 44));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r1 + 48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r1 + 52));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r1 + 56));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r1 + 60));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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

// RECOMP_GUEST_ABI gpr_read=0xFFE000FB gpr_write=0xFFE000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80675F6C func_80675F6C preserves=true fpr_mask=0x00000000
