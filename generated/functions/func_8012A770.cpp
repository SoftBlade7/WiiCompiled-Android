#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012A770(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r20_addr_0 = 0;
    uint32_t r20_addr_1 = 0;
    uint32_t r20_addr_2 = 0;
    uint32_t r20_addr_3 = 0;
    uint32_t r21_addr_0 = 0;
    uint32_t r21_addr_1 = 0;
    uint32_t r21_addr_2 = 0;
    uint32_t r21_addr_3 = 0;
    uint32_t r22_addr_0 = 0;
    uint32_t r22_addr_1 = 0;
    uint32_t r22_addr_2 = 0;
    uint32_t r22_addr_3 = 0;
    uint32_t r22_rot_0 = 0;
    uint32_t r22_rot_1 = 0;
    uint32_t r22_rot_2 = 0;
    uint32_t r22_rot_3 = 0;
    uint32_t r22_rot_4 = 0;
    uint32_t r23_addr_0 = 0;
    uint32_t r23_addr_1 = 0;
    uint32_t r23_addr_2 = 0;
    uint32_t r23_addr_3 = 0;
    uint32_t r23_addr_4 = 0;
    uint32_t r23_addr_5 = 0;
    uint32_t r23_rot_0 = 0;
    uint32_t r23_rot_1 = 0;
    uint32_t r23_rot_2 = 0;
    uint32_t r23_rot_3 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r26_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8012A770;

loc_8012A770:
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
    r0 = MemoryInline::FlatRead32((r4 + 52));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8012A78C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012A79C;
    }
}

loc_8012A790:
{
    r0 = (r0 & -3);
    MemoryInline::FlatWrite32((r4 + 52), r0);
    goto loc_8012A9D0;
}

loc_8012A79C:
{
    r6 = MemoryInline::FlatRead32((r4 + 72));
    r10 = MemoryInline::FlatRead32((r4 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8012A7A8:
{
    r11 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r3 + 4));
    r24 = (128 - r10);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(128) >= static_cast<uint32_t>(r10) ? 1u : 0u) << 29);
    r31 = MemoryInline::FlatRead32((r3 + 8));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012A7C8;
    }
}

loc_8012A7BC:
{
    r3 = MemoryInline::FlatRead32(r6);
    r5 = MemoryInline::FlatRead32((r6 + 4));
    r6 = MemoryInline::FlatRead32((r6 + 8));
}

loc_8012A7C8:
{
    r20 = MemoryInline::FlatRead32((r4 + 76));
}

loc_8012A7D0:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_8012A7E0;
    }
}

loc_8012A7D4:
{
    r7 = MemoryInline::FlatRead32(r20);
    r8 = MemoryInline::FlatRead32((r20 + 4));
    r9 = MemoryInline::FlatRead32((r20 + 8));
}

loc_8012A7E0:
{
    r25 = 96;
    r0 = 0;
    ctr = r25;
}

loc_8012A7EC:
{
    r21 = MemoryInline::FlatRead32((r4 + 12));
    r20 = MemoryInline::FlatRead32((r4 + 72));
    r23_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(2));
    r23 = (r23_rot_2 & -4);
    r22 = MemoryInline::FlatRead32(r4);
    r21 = MemoryInline::FlatRead32((r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r20), static_cast<int32_t>(0));
}

loc_8012A804:
{
    r20 = MemoryInline::FlatRead32((r4 + 8));
    r22_addr_2 = (r22 + r23);
    r30 = MemoryInline::FlatRead32(r22_addr_2);
    r21_addr_2 = (r21 + r23);
    r29 = MemoryInline::FlatRead32(r21_addr_2);
    r20_addr_2 = (r20 + r23);
    r28 = MemoryInline::FlatRead32(r20_addr_2);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012A87C;
    }
}

loc_8012A818:
{
    r20 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + 4);
    r22 = MemoryInline::FlatRead32(r11);
    r23 = MemoryInline::FlatRead32(r31);
    r20 = (r22 + r20);
    r22 = MemoryInline::FlatRead32(r6);
    r27 = MemoryInline::FlatRead32((r4 + 28));
    r20 = (r24 * r20);
    r22 = (r23 + r22);
    r21 = MemoryInline::FlatRead32(r5);
    r25 = MemoryInline::FlatRead32(r12);
    r5 = (r5 + 4);
    r6 = (r6 + 4);
    r26 = (r25 + r21);
    r21 = MemoryInline::FlatRead32((r4 + 36));
    r23 = (r10 * r27);
    r25 = MemoryInline::FlatRead32((r4 + 32));
    r27 = (r20 + r23);
    r26 = (r24 * r26);
    r23 = (r10 * r25);
    r22 = (r24 * r22);
    r26 = (r26 + r23);
    r21 = (r10 * r21);
    r25 = (r22 + r21);
    goto loc_8012A8B8;
}

loc_8012A87C:
{
    r21 = MemoryInline::FlatRead32(r11);
    r26 = MemoryInline::FlatRead32((r4 + 28));
    r25 = MemoryInline::FlatRead32(r12);
    r27 = (r24 * r21);
    r23 = MemoryInline::FlatRead32((r4 + 32));
    r22 = MemoryInline::FlatRead32(r31);
    r21 = MemoryInline::FlatRead32((r4 + 36));
    r26 = (r10 * r26);
    r25 = (r24 * r25);
    r27 = (r27 + r26);
    r23 = (r10 * r23);
    r22 = (r24 * r22);
    r26 = (r25 + r23);
    r21 = (r10 * r21);
    r25 = (r22 + r21);
}

loc_8012A8B8:
{
    r21 = MemoryInline::FlatRead32((r4 + 24));
    r27 = (static_cast<int32_t>(r27) >> 7);
    r26 = (static_cast<int32_t>(r26) >> 7);
    r22 = MemoryInline::FlatRead32((r4 + 12));
    r21 = (r30 * r21);
    r25 = (static_cast<int32_t>(r25) >> 7);
    MemoryInline::FlatWrite32((r4 + 28), r27);
    r22_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(2));
    r22 = (r22_rot_2 & -4);
    r23 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r4 + 32), r26);
    r21 = (static_cast<int32_t>(r21) >> 7);
    MemoryInline::FlatWrite32((r4 + 36), r25);
    r27 = (r27 + r21);
    r23_addr_2 = (r23 + r22);
    MemoryInline::FlatWrite32(r23_addr_2, r27);
    r23 = MemoryInline::FlatRead32((r4 + 24));
    r22 = MemoryInline::FlatRead32((r4 + 12));
    r27 = (r29 * r23);
    r23 = MemoryInline::FlatRead32((r4 + 4));
    r22_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(2));
    r22 = (r22_rot_3 & -4);
    r27 = (static_cast<int32_t>(r27) >> 7);
    r26 = (r26 + r27);
    r23_addr_3 = (r23 + r22);
    MemoryInline::FlatWrite32(r23_addr_3, r26);
    r22 = MemoryInline::FlatRead32((r4 + 24));
    r27 = MemoryInline::FlatRead32((r4 + 12));
    r22 = (r28 * r22);
    r23 = MemoryInline::FlatRead32((r4 + 8));
    r26_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r26 = (r26_rot_2 & -4);
    r27 = (r27 + 1);
    r22 = (static_cast<int32_t>(r22) >> 7);
    r25 = (r25 + r22);
    r23_addr_4 = (r23 + r26);
    MemoryInline::FlatWrite32(r23_addr_4, r25);
    r25 = MemoryInline::FlatRead32((r4 + 16));
    MemoryInline::FlatWrite32((r4 + 12), r27);
}

loc_8012A940:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(r25))) {
        goto loc_8012A948;
    }
}

loc_8012A944:
{
    MemoryInline::FlatWrite32((r4 + 12), r0);
}

loc_8012A948:
{
    r25 = MemoryInline::FlatRead32((r4 + 44));
    r25 = (r30 * r25);
    r25 = (static_cast<int32_t>(r25) >> 7);
    MemoryInline::FlatWrite32(r11, r25);
    r11 = (r11 + 4);
    r25 = MemoryInline::FlatRead32((r4 + 44));
    r25 = (r29 * r25);
    r25 = (static_cast<int32_t>(r25) >> 7);
    MemoryInline::FlatWrite32(r12, r25);
    r12 = (r12 + 4);
    r25 = MemoryInline::FlatRead32((r4 + 44));
    r25 = (r28 * r25);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r25);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(7) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r25 = (static_cast<int32_t>(r25) >> 7);
    MemoryInline::FlatWrite32(r31, r25);
    r31 = (r31 + 4);
    r25 = MemoryInline::FlatRead32((r4 + 76));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_8012A98C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012A9CC;
    }
}

loc_8012A990:
{
    r25 = MemoryInline::FlatRead32((r4 + 48));
    r25 = (r30 * r25);
    r25 = (static_cast<int32_t>(r25) >> 7);
    MemoryInline::FlatWrite32(r7, r25);
    r7 = (r7 + 4);
    r25 = MemoryInline::FlatRead32((r4 + 48));
    r25 = (r29 * r25);
    r25 = (static_cast<int32_t>(r25) >> 7);
    MemoryInline::FlatWrite32(r8, r25);
    r8 = (r8 + 4);
    r25 = MemoryInline::FlatRead32((r4 + 48));
    r25 = (r28 * r25);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r25);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(7) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r25 = (static_cast<int32_t>(r25) >> 7);
    MemoryInline::FlatWrite32(r9, r25);
    r9 = (r9 + 4);
}

loc_8012A9CC:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8012A7EC;
    }
}

loc_8012A9D0:
{
    r11 = (r1 + 64);
    // inline leaf 0x800215D0 (13 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -4));
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFF01FFB gpr_write=0xFFF01FEB gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8012A770 func_8012A770 preserves=true fpr_mask=0x00000000
