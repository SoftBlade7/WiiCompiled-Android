#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A5810(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r31_rot_3 = 0;
    uint32_t r31_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r7_mdest_0 = 0;
    uint32_t r7_mdest_1 = 0;
    uint32_t r7_mdest_2 = 0;
    uint32_t r7_mdest_3 = 0;
    uint32_t r7_mrot_0 = 0;
    uint32_t r7_mrot_1 = 0;
    uint32_t r7_mrot_2 = 0;
    uint32_t r7_mrot_3 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801A5810;

loc_801A5810:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x8002159C (7 guest instruction(s))
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
    // end of inlined leaf 0x8002159C
    r5 = MemoryInline::FlatRead32((r3 + 12));
    r30 = (r3 + 16);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r8 = 0;
    r29 = (r3 + r5);
    r9 = MemoryInline::FlatRead32((r3 + 8));
    r11 = 0;
    r5 = 0x80000000u;
}

loc_801A5844:
{
}

loc_801A5848:
{
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_801A5858;
    }
}

loc_801A584C:
{
    r12 = MemoryInline::FlatRead32(r30);
    r11 = 32;
    r30 = (r30 + 4);
}

loc_801A5858:
{
    r6 = (r12 & -2147483648);
}

loc_801A585C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801A5874;
    }
}

loc_801A5860:
{
    r6 = MemoryInline::FlatRead8(r29);
    r29 = (r29 + 1);
    r4_addr_2 = (r4 + r8);
    MemoryInline::FlatWrite8(r4_addr_2, static_cast<uint8_t>(r6));
    r8 = (r8 + 1);
    goto loc_801A598C;
}

loc_801A5874:
{
    r7 = (r3 + r9);
    r3_addr_2 = (r3 + r9);
    r6 = MemoryInline::FlatRead8(r3_addr_2);
    r7 = MemoryInline::FlatRead8((r7 + 1));
    r9 = (r9 + 2);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r7_mrot_2 = (r7_rot_2 & 65280);
    r7_mdest_2 = (r7 & -65281);
    r7 = (r7_mdest_2 | r7_mrot_2);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(12) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r10 = (static_cast<int32_t>(r7) >> 12);
    r6 = (r7 & 4095);
    r7 = (r8 - r6);
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_801A58A8;
    }
}

loc_801A5898:
{
    r6 = MemoryInline::FlatRead8(r29);
    r29 = (r29 + 1);
    r10 = (r6 + 18);
    goto loc_801A58AC;
}

loc_801A58A8:
{
    r10 = (r10 + 2);
}

loc_801A58AC:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r10), static_cast<int32_t>(0));
}

loc_801A58B0:
{
    r6 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_801A598C;
    }
}

loc_801A58B8:
{
}

loc_801A58BC:
{
    r27 = (r10 + -8);
    if ((static_cast<int32_t>(r10) <= static_cast<int32_t>(8))) {
        goto loc_801A5958;
    }
}

loc_801A58C4:
{
    r28 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_801A58DC;
    }
}

loc_801A58CC:
{
    r26 = (r5 + -2);
}

loc_801A58D4:
{
    if ((static_cast<int32_t>(r10) > static_cast<int32_t>(r26))) {
        goto loc_801A58DC;
    }
}

loc_801A58D8:
{
    r28 = 1;
}

loc_801A58DC:
{
}

loc_801A58E0:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_801A5958;
    }
}

loc_801A58E4:
{
    r31 = (r27 + 7);
    r28 = (r4 + r8);
    r31_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(29));
    r31 = (r31_rot_2 & 536870911);
    ctr = r31;
}

loc_801A58F8:
{
    if ((static_cast<int32_t>(r27) <= static_cast<int32_t>(0))) {
        goto loc_801A5958;
    }
}

loc_801A58FC:
{
    r26 = (r4 + r7);
    r27 = (r8 + r4);
    r31 = MemoryInline::FlatRead8((r26 + -1));
    r8 = (r8 + 8);
    r6 = (r6 + 8);
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r31));
    r28 = (r28 + 8);
    r4_addr_4 = (r4 + r7);
    r31 = MemoryInline::FlatRead8(r4_addr_4);
    r7 = (r7 + 8);
    MemoryInline::FlatWrite8((r27 + 1), static_cast<uint8_t>(r31));
    r31 = MemoryInline::FlatRead8((r26 + 1));
    MemoryInline::FlatWrite8((r27 + 2), static_cast<uint8_t>(r31));
    r31 = MemoryInline::FlatRead8((r26 + 2));
    MemoryInline::FlatWrite8((r27 + 3), static_cast<uint8_t>(r31));
    r31 = MemoryInline::FlatRead8((r26 + 3));
    MemoryInline::FlatWrite8((r27 + 4), static_cast<uint8_t>(r31));
    r31 = MemoryInline::FlatRead8((r26 + 4));
    MemoryInline::FlatWrite8((r27 + 5), static_cast<uint8_t>(r31));
    r31 = MemoryInline::FlatRead8((r26 + 5));
    MemoryInline::FlatWrite8((r27 + 6), static_cast<uint8_t>(r31));
    r31 = MemoryInline::FlatRead8((r26 + 6));
    MemoryInline::FlatWrite8((r27 + 7), static_cast<uint8_t>(r31));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801A58FC;
    }
}

loc_801A5958:
{
    r31 = (r10 - r6);
    r28 = (r4 + r8);
    ctr = r31;
}

loc_801A5968:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r10))) {
        goto loc_801A598C;
    }
}

loc_801A596C:
{
    r10 = (r4 + r7);
    r6 = (r6 + 1);
    r10 = MemoryInline::FlatRead8((r10 + -1));
    r8 = (r8 + 1);
    r7 = (r7 + 1);
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r10));
    r28 = (r28 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801A596C;
    }
}

loc_801A598C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(r0));
}

loc_801A5990:
{
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(1));
    r12 = (r12_rot_2 & -2);
    r11 = (r11 + -1);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801A5844;
    }
}

loc_801A599C:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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

// RECOMP_GUEST_ABI gpr_read=0xFC001FFB gpr_write=0xFC001FE3 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801A5810 func_801A5810 preserves=true fpr_mask=0x00000000
