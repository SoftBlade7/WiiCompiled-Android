#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012B0AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r25_rot_1 = 0;
    uint32_t r25_rot_2 = 0;
    uint32_t r25_rot_3 = 0;
    uint32_t r25_rot_4 = 0;
    uint32_t r26_addr_0 = 0;
    uint32_t r26_addr_1 = 0;
    uint32_t r26_addr_2 = 0;
    uint32_t r26_addr_3 = 0;
    uint32_t r26_addr_4 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r27_addr_3 = 0;
    uint32_t r27_addr_4 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r30_rot_3 = 0;
    uint32_t r30_rot_4 = 0;
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

    goto loc_8012B0AC;

loc_8012B0AC:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r11 = (r1 + 128);
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
    r0 = MemoryInline::FlatRead32((r4 + 60));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8012B0C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012B0D8;
    }
}

loc_8012B0CC:
{
    r0 = (r0 & -3);
    MemoryInline::FlatWrite32((r4 + 60), r0);
    goto loc_8012B2AC;
}

loc_8012B0D8:
{
    r8 = MemoryInline::FlatRead32((r4 + 80));
    r7 = MemoryInline::FlatRead32(r3);
    r6 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_8012B0E8:
{
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 48));
    MemoryInline::FlatWriteRam32((r1 + 72), r7);
    r11 = (128 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(128) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    MemoryInline::FlatWriteRam32((r1 + 76), r6);
    MemoryInline::FlatWriteRam32((r1 + 80), r5);
    MemoryInline::FlatWriteRam32((r1 + 84), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012B12C;
    }
}

loc_8012B10C:
{
    r7 = MemoryInline::FlatRead32(r8);
    r6 = MemoryInline::FlatRead32((r8 + 4));
    r5 = MemoryInline::FlatRead32((r8 + 8));
    r3 = MemoryInline::FlatRead32((r8 + 12));
    MemoryInline::FlatWriteRam32((r1 + 24), r7);
    MemoryInline::FlatWriteRam32((r1 + 28), r6);
    MemoryInline::FlatWriteRam32((r1 + 32), r5);
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
}

loc_8012B12C:
{
    r3 = MemoryInline::FlatRead32((r4 + 84));
}

loc_8012B134:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012B158;
    }
}

loc_8012B138:
{
    r7 = MemoryInline::FlatRead32(r3);
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    MemoryInline::FlatWriteRam32((r1 + 8), r7);
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    MemoryInline::FlatWriteRam32((r1 + 16), r5);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
}

loc_8012B158:
{
    r10 = 0;
    r31 = 0;
    r12 = 4;
}

loc_8012B164:
{
    r3 = r4;
    r5 = (r1 + 56);
    r6 = (r1 + 24);
    r7 = (r1 + 72);
    r8 = (r1 + 40);
    r9 = (r1 + 8);
    ctr = r12;
}

loc_8012B180:
{
    r24 = MemoryInline::FlatRead32((r4 + 16));
    r26 = MemoryInline::FlatRead32(r3);
    r25_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(2));
    r25 = (r25_rot_3 & -4);
    r24 = MemoryInline::FlatRead32((r4 + 80));
    r26_addr_3 = (r26 + r25);
    r25 = MemoryInline::FlatRead32(r26_addr_3);
}

loc_8012B198:
{
    MemoryInline::FlatWrite32(r5, r25);
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_8012B1D4;
    }
}

loc_8012B1A0:
{
    r25 = MemoryInline::FlatRead32(r6);
    r26 = MemoryInline::FlatRead32(r7);
    r24 = MemoryInline::FlatRead32(r25);
    r25 = (r25 + 4);
    r26 = MemoryInline::FlatRead32(r26);
    r27 = MemoryInline::FlatRead32((r3 + 32));
    r24 = (r26 + r24);
    MemoryInline::FlatWrite32(r6, r25);
    r25 = (r0 * r27);
    r24 = (r11 * r24);
    r24 = (r25 + r24);
    MemoryInline::FlatWrite32(r8, r24);
    goto loc_8012B1F0;
}

loc_8012B1D4:
{
    r25 = MemoryInline::FlatRead32(r7);
    r24 = MemoryInline::FlatRead32((r3 + 32));
    r25 = MemoryInline::FlatRead32(r25);
    r24 = (r0 * r24);
    r25 = (r11 * r25);
    r24 = (r25 + r24);
    MemoryInline::FlatWrite32(r8, r24);
}

loc_8012B1F0:
{
    r24 = MemoryInline::FlatRead32(r8);
    r29 = MemoryInline::FlatRead32(r7);
    r24 = (static_cast<int32_t>(r24) >> 7);
    r25 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWrite32((r3 + 32), r24);
    r28 = (r29 + 4);
    r26 = MemoryInline::FlatRead32((r4 + 28));
    r30 = MemoryInline::FlatRead32((r4 + 16));
    r26 = (r26 * r25);
    MemoryInline::FlatWrite32(r7, r28);
    r27 = MemoryInline::FlatRead32(r3);
    r30_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r30 = (r30_rot_3 & -4);
    MemoryInline::FlatWrite32(r8, r24);
    r28 = (static_cast<int32_t>(r26) >> 7);
    r28 = (r24 + r28);
    r27_addr_3 = (r27 + r30);
    MemoryInline::FlatWrite32(r27_addr_3, r28);
    r28 = MemoryInline::FlatRead32((r4 + 52));
    r28 = (r28 * r25);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r28);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(7) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r28 = (static_cast<int32_t>(r28) >> 7);
    MemoryInline::FlatWrite32(r29, r28);
    r28 = MemoryInline::FlatRead32((r4 + 84));
}

loc_8012B248:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8012B268;
    }
}

loc_8012B24C:
{
    r28 = MemoryInline::FlatRead32((r4 + 56));
    r29 = MemoryInline::FlatRead32(r9);
    r28 = (r28 * r25);
    r30 = (r29 + 4);
    MemoryInline::FlatWrite32(r9, r30);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r28);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(7) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r30 = (static_cast<int32_t>(r28) >> 7);
    MemoryInline::FlatWrite32(r29, r30);
}

loc_8012B268:
{
    r3 = (r3 + 4);
    r5 = (r5 + 4);
    r6 = (r6 + 4);
    r7 = (r7 + 4);
    r8 = (r8 + 4);
    r9 = (r9 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8012B180;
    }
}

loc_8012B284:
{
    r5 = MemoryInline::FlatRead32((r4 + 16));
    r3 = MemoryInline::FlatRead32((r4 + 20));
    r5 = (r5 + 1);
}

loc_8012B294:
{
    MemoryInline::FlatWrite32((r4 + 16), r5);
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r3))) {
        goto loc_8012B2A0;
    }
}

loc_8012B29C:
{
    MemoryInline::FlatWrite32((r4 + 16), r31);
}

loc_8012B2A0:
{
    r10 = (r10 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r10), static_cast<uint32_t>(96));
}

loc_8012B2A8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8012B164;
    }
}

loc_8012B2AC:
{
    r11 = (r1 + 128);
    // inline leaf 0x800215E0 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E0
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
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

// RECOMP_GUEST_ABI gpr_read=0xFF001FFB gpr_write=0xFF001FEB gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8012B0AC func_8012B0AC preserves=true fpr_mask=0x00000000
