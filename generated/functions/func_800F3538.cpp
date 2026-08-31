#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F3538(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_10 = 0;
    uint32_t r4_addr_11 = 0;
    uint32_t r4_addr_12 = 0;
    uint32_t r4_addr_13 = 0;
    uint32_t r4_addr_14 = 0;
    uint32_t r4_addr_15 = 0;
    uint32_t r4_addr_16 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_addr_9 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mdest_3 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_2 = 0;
    uint32_t r6_mrot_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_3 = 0;
    uint32_t r8_addr_4 = 0;
    uint32_t r8_addr_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800F3538;

loc_800F3538:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r6 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_800F3544:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800F3550;
    }
}

loc_800F3548:
{
    r3 = 0;
    goto loc_800F383C;
}

loc_800F3550:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_800F3558:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F3574;
    }
}

loc_800F355C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800F357C;
    }
}

loc_800F3560:
{
}

loc_800F3564:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_800F356C;
    }
}

loc_800F3568:
{
    goto loc_800F357C;
}

loc_800F356C:
{
    r5 = (r2 + -27452);
    goto loc_800F3580;
}

loc_800F3574:
{
    r5 = (r2 + -27448);
    goto loc_800F3580;
}

loc_800F357C:
{
    r5 = (r2 + -27456);
}

loc_800F3580:
{
}

loc_800F3584:
{
    r7 = 3;
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(3))) {
        goto loc_800F3590;
    }
}

loc_800F358C:
{
    r7 = r6;
}

loc_800F3590:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_800F3594:
{
    r8 = MemoryInline::FlatRead32(r3);
    r9 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_800F366C;
    }
}

loc_800F35A0:
{
}

loc_800F35A4:
{
    r10 = (r7 + -8);
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(8))) {
        goto loc_800F3638;
    }
}

loc_800F35AC:
{
    r11 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_800F35C8;
    }
}

loc_800F35B4:
{
    r6 = 0x80000000u;
    r0 = (r6 + -2);
}

loc_800F35C0:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(r0))) {
        goto loc_800F35C8;
    }
}

loc_800F35C4:
{
    r11 = 1;
}

loc_800F35C8:
{
}

loc_800F35CC:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_800F3638;
    }
}

loc_800F35D0:
{
    r0 = (r10 + 7);
    r6 = (r1 + 8);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_800F35E4:
{
    if ((static_cast<int32_t>(r10) <= static_cast<int32_t>(0))) {
        goto loc_800F3638;
    }
}

loc_800F35E8:
{
    r8_addr_2 = (r8 + r9);
    r0 = MemoryInline::FlatRead8(r8_addr_2);
    r10 = (r8 + r9);
    r9 = (r9 + 8);
    guest_range_0 = MemoryInline::ResolveRangeHost(r6, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r6, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r10 + 1));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r6 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r10 + 2));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r6 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r10 + 3));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r6 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r10 + 4));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r6 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r10 + 5));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r6 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r10 + 6));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r6 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r10 + 7));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r6 + 7), static_cast<uint8_t>(r0));
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800F35E8;
    }
}

loc_800F3638:
{
    r10 = (r1 + 8);
    r0 = (r7 - r9);
    r10 = (r10 + r9);
    r6 = (r8 + r9);
    ctr = r0;
}

loc_800F3650:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(r7))) {
        goto loc_800F366C;
    }
}

loc_800F3654:
{
    r0 = MemoryInline::FlatRead8(r6);
    r9 = (r9 + 1);
    r6 = (r6 + 1);
    MemoryInline::FlatWrite8(r10, static_cast<uint8_t>(r0));
    r10 = (r10 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800F3654;
    }
}

loc_800F366C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(3));
}

loc_800F3670:
{
    r8 = (r1 + 8);
    r8 = (r8 + r9);
    r6 = (3 - r9);
    r7 = 0;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800F36D0;
    }
}

loc_800F3684:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r0 = (r0_rot_4 & 536870911);
}

loc_800F3688:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F36C0;
    }
}

loc_800F3690:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r8, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r8, static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r8 + 1), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r8 + 2), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r8 + 3), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r8 + 4), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r8 + 5), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r8 + 6), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r8 + 7), static_cast<uint8_t>(r7));
    r8 = (r8 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800F3690;
    }
}

loc_800F36B8:
{
    r6 = (r6 & 7);
}

loc_800F36BC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800F36D0;
    }
}

loc_800F36C0:
{
    ctr = r6;
}

loc_800F36C4:
{
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r7));
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800F36C4;
    }
}

loc_800F36D0:
{
    r6 = MemoryInline::FlatRead8((r1 + 8));
    r0 = 2;
    r8 = 0;
    r6 = (static_cast<int32_t>(r6) >> 2);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead8((r1 + 9));
    r7 = MemoryInline::FlatRead8((r1 + 8));
    r6 = (static_cast<int32_t>(r6) >> 4);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(4));
    r6_mrot_1 = (r6_rot_1 & 48);
    r6_mdest_1 = (r6 & -49);
    r6 = (r6_mdest_1 | r6_mrot_1);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead8((r1 + 10));
    r7 = MemoryInline::FlatRead8((r1 + 9));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r6);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(6) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r6 = (static_cast<int32_t>(r6) >> 6);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r6_mrot_2 = (r6_rot_2 & 60);
    r6_mdest_2 = (r6 & -61);
    r6 = (r6_mdest_2 | r6_mrot_2);
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead8((r1 + 10));
    r6 = (r6 & 63);
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r6));
    r7 = MemoryInline::FlatRead32(r3);
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r7 = (r7 + 3);
    r6 = (r6 + -3);
    MemoryInline::FlatWrite32(r3, r7);
    MemoryInline::FlatWrite32((r3 + 4), r6);
    ctr = r0;
}

loc_800F3734:
{
    r4_addr_2 = (r4 + r8);
    r6 = MemoryInline::FlatRead8(r4_addr_2);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_800F3740:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(25))) {
        goto loc_800F3750;
    }
}

loc_800F3744:
{
    r0 = (r6 + 65);
    r4_addr_3 = (r4 + r8);
    MemoryInline::FlatWrite8(r4_addr_3, static_cast<uint8_t>(r0));
    goto loc_800F379C;
}

loc_800F3750:
{
}

loc_800F3754:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(51))) {
        goto loc_800F3764;
    }
}

loc_800F3758:
{
    r0 = (r6 + 71);
    r4_addr_4 = (r4 + r8);
    MemoryInline::FlatWrite8(r4_addr_4, static_cast<uint8_t>(r0));
    goto loc_800F379C;
}

loc_800F3764:
{
}

loc_800F3768:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(61))) {
        goto loc_800F3778;
    }
}

loc_800F376C:
{
    r0 = (r6 + -4);
    r4_addr_5 = (r4 + r8);
    MemoryInline::FlatWrite8(r4_addr_5, static_cast<uint8_t>(r0));
    goto loc_800F379C;
}

loc_800F3778:
{
}

loc_800F377C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(62))) {
        goto loc_800F378C;
    }
}

loc_800F3780:
{
    r0 = MemoryInline::FlatRead8(r5);
    r4_addr_6 = (r4 + r8);
    MemoryInline::FlatWrite8(r4_addr_6, static_cast<uint8_t>(r0));
    goto loc_800F379C;
}

loc_800F378C:
{
}

loc_800F3790:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(63))) {
        goto loc_800F379C;
    }
}

loc_800F3794:
{
    r0 = MemoryInline::FlatRead8((r5 + 1));
    r4_addr_7 = (r4 + r8);
    MemoryInline::FlatWrite8(r4_addr_7, static_cast<uint8_t>(r0));
}

loc_800F379C:
{
    r8 = (r8 + 1);
    r4_addr_9 = (r4 + r8);
    r6 = MemoryInline::FlatRead8(r4_addr_9);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_800F37AC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(25))) {
        goto loc_800F37BC;
    }
}

loc_800F37B0:
{
    r0 = (r6 + 65);
    r4_addr_10 = (r4 + r8);
    MemoryInline::FlatWrite8(r4_addr_10, static_cast<uint8_t>(r0));
    goto loc_800F3808;
}

loc_800F37BC:
{
}

loc_800F37C0:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(51))) {
        goto loc_800F37D0;
    }
}

loc_800F37C4:
{
    r0 = (r6 + 71);
    r4_addr_11 = (r4 + r8);
    MemoryInline::FlatWrite8(r4_addr_11, static_cast<uint8_t>(r0));
    goto loc_800F3808;
}

loc_800F37D0:
{
}

loc_800F37D4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(61))) {
        goto loc_800F37E4;
    }
}

loc_800F37D8:
{
    r0 = (r6 + -4);
    r4_addr_12 = (r4 + r8);
    MemoryInline::FlatWrite8(r4_addr_12, static_cast<uint8_t>(r0));
    goto loc_800F3808;
}

loc_800F37E4:
{
}

loc_800F37E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(62))) {
        goto loc_800F37F8;
    }
}

loc_800F37EC:
{
    r0 = MemoryInline::FlatRead8(r5);
    r4_addr_13 = (r4 + r8);
    MemoryInline::FlatWrite8(r4_addr_13, static_cast<uint8_t>(r0));
    goto loc_800F3808;
}

loc_800F37F8:
{
}

loc_800F37FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(63))) {
        goto loc_800F3808;
    }
}

loc_800F3800:
{
    r0 = MemoryInline::FlatRead8((r5 + 1));
    r4_addr_14 = (r4 + r8);
    MemoryInline::FlatWrite8(r4_addr_14, static_cast<uint8_t>(r0));
}

loc_800F3808:
{
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800F3734;
    }
}

loc_800F3810:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F3818:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800F3838;
    }
}

loc_800F381C:
{
    r0 = MemoryInline::FlatRead8((r5 + 2));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-2));
}

loc_800F382C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F3838;
    }
}

loc_800F3830:
{
    r0 = MemoryInline::FlatRead8((r5 + 2));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
}

loc_800F3838:
{
    r3 = 1;
}

loc_800F383C:
{
    r1 = (r1 + 16);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFF gpr_write=0x00000FEB gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800F3538 func_800F3538 preserves=true fpr_mask=0x00000000
