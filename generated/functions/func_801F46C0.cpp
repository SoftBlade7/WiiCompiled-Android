#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F46C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

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
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801F46C0;

loc_801F46C0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    MemoryInline::FlatWrite32(r4, r5);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
}

loc_801F46DC:
{
    r0 = MemoryInline::FlatRead16(r3);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(9) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 9);
    r12 = (r0 * r8);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F46F8;
    }
}

loc_801F46EC:
{
    r0 = PPC_Divwu(static_cast<uint32_t>(r7), static_cast<uint32_t>(r12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_801F46F4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801F470C;
    }
}

loc_801F46F8:
{
}

loc_801F46FC:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_801F4714;
    }
}

loc_801F4700:
{
    r0 = PPC_Divwu(static_cast<uint32_t>(r7), static_cast<uint32_t>(r12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_801F4708:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801F4714;
    }
}

loc_801F470C:
{
    r3 = 30;
    goto loc_801F4928;
}

loc_801F4714:
{
    r0 = PPC_Divwu(static_cast<uint32_t>(r7), static_cast<uint32_t>(r12));
}

loc_801F471C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801F4780;
    }
}

loc_801F4720:
{
    r0 = MemoryInline::FlatRead16(r5);
    r4 = 0;
    r3 = -1;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(0));
}

loc_801F4730:
{
    r0 = (r0 & 65532);
    guest_range_2 = MemoryInline::ResolveRangeHost(r5, 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r5 + 36), r5);
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r5 + 32), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r5 + 4), r6);
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r5 + 8), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r5 + 12), r4);
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r5 + 16), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r5 + 20), r8);
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r5 + 24), r3);
    }
    MemoryInline::WriteResolved16(guest_range_2, 2u, (r5 + 2), static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved32(guest_range_2, 28u, (r5 + 28), r4);
    MemoryInline::WriteResolved16(guest_range_2, 0u, r5, static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F4770;
    }
}

loc_801F4764:
{
    r0 = (r0 | 4);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    goto loc_801F4778;
}

loc_801F4770:
{
    r0 = (r0 & -5);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
}

loc_801F4778:
{
    r3 = 0;
    goto loc_801F4928;
}

loc_801F4780:
{
    r3 = (r0 * r12);
    r30 = 0;
    r0 = MemoryInline::FlatRead16(r5);
    r29 = -1;
}

loc_801F4794:
{
    guest_range_3 = MemoryInline::ResolveRangeHost(r5, 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 4u, (r5 + 4), r6);
    r28 = (r0 & 65532);
    r11 = (r7 - r3);
    r0 = (r7 - r11);
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r5 + 8), r6);
    r10 = (r0 - r12);
    r3 = (r10 * 40);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r5 + 12), r30);
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r5 + 16), r30);
    }
    r4 = (r5 + r3);
    r0 = (r12 * 40);
    MemoryInline::WriteResolved32(guest_range_3, 20u, (r5 + 20), r8);
    MemoryInline::WriteResolved32(guest_range_3, 36u, (r5 + 36), r4);
    r3 = (r5 + r0);
    MemoryInline::WriteResolved32(guest_range_3, 32u, (r5 + 32), r3);
    MemoryInline::WriteResolved32(guest_range_3, 24u, (r5 + 24), r29);
    MemoryInline::WriteResolved16(guest_range_3, 2u, (r5 + 2), static_cast<uint16_t>(r30));
    MemoryInline::WriteResolved32(guest_range_3, 28u, (r5 + 28), r30);
    MemoryInline::WriteResolved16(guest_range_3, 0u, r5, static_cast<uint16_t>(r28));
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_801F47F0;
    }
}

loc_801F47E4:
{
    r28 = (r28 | 4);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r28));
    goto loc_801F47F8;
}

loc_801F47F0:
{
    r28 = (r28 & -5);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r28));
}

loc_801F47F8:
{
    r26_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(9));
    r26 = (r26_rot_1 & -512);
    r25 = r12;
    r29 = 0;
    r30 = -1;
    r27 = (r6 + r26);
    goto loc_801F488C;
}

loc_801F4810:
{
    r28 = (r25 - r12);
    r31 = (r25 + r12);
    r28 = (r28 * 40);
}

loc_801F4820:
{
    r31 = (r31 * 40);
    r28 = (r5 + r28);
    MemoryInline::FlatWrite32((r3 + 36), r28);
    r31 = (r5 + r31);
    MemoryInline::FlatWrite32((r3 + 32), r31);
    MemoryInline::FlatWrite32((r3 + 4), r27);
    MemoryInline::FlatWrite32((r3 + 8), r27);
    MemoryInline::FlatWrite32((r3 + 12), r29);
    MemoryInline::FlatWrite32((r3 + 16), r29);
    MemoryInline::FlatWrite32((r3 + 20), r8);
    MemoryInline::FlatWrite32((r3 + 24), r30);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r29));
    MemoryInline::FlatWrite32((r3 + 28), r29);
    r31 = MemoryInline::FlatRead16(r3);
    r31 = (r31 & 65532);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r31));
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_801F4874;
    }
}

loc_801F4864:
{
    r31 = MemoryInline::FlatRead16(r3);
    r31 = (r31 | 4);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r31));
    goto loc_801F4880;
}

loc_801F4874:
{
    r31 = MemoryInline::FlatRead16(r3);
    r31 = (r31 & -5);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r31));
}

loc_801F4880:
{
    r3 = (r3 + r0);
    r27 = (r27 + r26);
    r25 = (r25 + r12);
}

loc_801F488C:
{
}

loc_801F4890:
{
    if ((static_cast<uint32_t>(r25) < static_cast<uint32_t>(r10))) {
        goto loc_801F4810;
    }
}

loc_801F4894:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r10 = (r7 - r11);
    r0 = (0 - r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(0));
}

loc_801F48A4:
{
    r0 = (r0 - r11);
    r11 = (r10 - r12);
    r10 = (r0 + r7);
    r3 = 0;
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(9));
    r7 = (r7_rot_1 & -512);
    r0 = -1;
    r9 = (r6 + r7);
    r12 = (r11 * 40);
    r7 = (r10 * 40);
    r6 = (r5 + r12);
    r7 = (r5 + r7);
    guest_range_0 = MemoryInline::ResolveRangeHost((r6 + 2), 0, 38u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 30u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 34u, (r6 + 36), r7);
        MemoryInline::WriteResolved32(guest_range_0, 30u, (r6 + 32), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 2u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_0, 2u, (r6 + 4), r9);
        MemoryInline::WriteResolved32(guest_range_0, 6u, (r6 + 8), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 10u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 10u, (r6 + 12), r3);
        MemoryInline::WriteResolved32(guest_range_0, 14u, (r6 + 16), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 18u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 18u, (r6 + 20), r8);
        MemoryInline::WriteResolved32(guest_range_0, 22u, (r6 + 24), r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r6 + 2), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 26u, (r6 + 28), r3);
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 & 65532);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F4918;
    }
}

loc_801F4908:
{
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 | 4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    goto loc_801F4924;
}

loc_801F4918:
{
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 & -5);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
}

loc_801F4924:
{
    r3 = 0;
}

loc_801F4928:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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

// RECOMP_GUEST_ABI gpr_read=0xFE001FFB gpr_write=0xFE001EDB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801F46C0 func_801F46C0 preserves=true fpr_mask=0x00000000
