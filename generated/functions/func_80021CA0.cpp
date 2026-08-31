#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80021CA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_not_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_subfc_sub_0 = 0;
    uint32_t r3_subfe_rb_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r7_ca_0 = 0;
    uint32_t r7_not_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_subfc_sub_0 = 0;
    uint32_t r7_subfe_rb_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80021CA0;

loc_80021CA0:
{
    r7 = 0x802A0000u;
    r0 = MemoryInline::FlatRead32((r7 + 27768));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80021CAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80021CB0:
{
    r8 = (r7 + 27768);
    r7 = 400;
    r9 = MemoryInline::FlatRead16((r8 + 8));
    r7_subfc_sub_0 = r7;
    r7 = (r9 - r7_subfc_sub_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r9) >= static_cast<uint32_t>(r7_subfc_sub_0) ? 1u : 0u) << 29);
    r7_subfe_rb_0 = r7;
    r7_not_0 = ~(r7);
    r7_ca_0 = (xer >> 29) & 1u;
    r7 = (r7_not_0 + r7_subfe_rb_0);
    r7 = (r7 + r7_ca_0);
    r7 = (r7 + 2);
}

loc_80021CCC:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(2))) {
        goto loc_80021CD8;
    }
}

loc_80021CD0:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & -2);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & -2);
}

loc_80021CD8:
{
    r7 = (r3 + r5);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r5 = (r5_rot_3 & 1);
}

loc_80021CE4:
{
    r5 = (r5 + -1);
    r8 = (r3 & r5);
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(r9))) {
        goto loc_80021CF4;
    }
}

loc_80021CF0:
{
    r9 = r7;
}

loc_80021CF4:
{
    r7 = 0x802A0000u;
    r3 = 300;
    r7 = (r7 + 27768);
    r5 = (r9 - r8);
    r11 = MemoryInline::FlatRead16((r7 + 10));
    r3_subfc_sub_0 = r3;
    r3 = (r11 - r3_subfc_sub_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r11) >= static_cast<uint32_t>(r3_subfc_sub_0) ? 1u : 0u) << 29);
    r3_subfe_rb_0 = r3;
    r3_not_0 = ~(r3);
    r3_ca_0 = (xer >> 29) & 1u;
    r3 = (r3_not_0 + r3_subfe_rb_0);
    r3 = (r3 + r3_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_0)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_subfe_rb_0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3 = (r3 + 2);
}

loc_80021D18:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_80021D24;
    }
}

loc_80021D1C:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & -2);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_1 & -2);
}

loc_80021D24:
{
    r6 = (r4 + r6);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
}

loc_80021D30:
{
    r3 = (r3 + -1);
    r10 = (r4 & r3);
    if ((static_cast<int32_t>(r6) > static_cast<int32_t>(r11))) {
        goto loc_80021D40;
    }
}

loc_80021D3C:
{
    r11 = r6;
}

loc_80021D40:
{
    r9 = 0x802A0000u;
    r6 = (r11 - r10);
    r9 = (r9 + 27768);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r7 = (r7_rot_0 & -2);
    r4 = MemoryInline::FlatRead16((r9 + 12));
    r11 = 0;
    r3 = 4224;
    r8 = (r4 * r10);
    r4 = 0x80000000u;
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_0 & -2);
    r0 = (r0 + r8);
    r10 = (r7 + r0);
    goto loc_80021E24;
}

loc_80021D78:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80021D7C:
{
    r12 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80021E10;
    }
}

loc_80021D84:
{
}

loc_80021D88:
{
    r7 = (r5 + -8);
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(8))) {
        goto loc_80021DF0;
    }
}

loc_80021D90:
{
    r8 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80021DA8;
    }
}

loc_80021D98:
{
    r0 = (r4 + -2);
}

loc_80021DA0:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_80021DA8;
    }
}

loc_80021DA4:
{
    r8 = 1;
}

loc_80021DA8:
{
}

loc_80021DAC:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80021DF0;
    }
}

loc_80021DB0:
{
    r0 = (r7 + 7);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & 536870911);
    ctr = r0;
}

loc_80021DC0:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(0))) {
        goto loc_80021DF0;
    }
}

loc_80021DC4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r10, 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, r10, static_cast<uint16_t>(r3));
    r12 = (r12 + 8);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 2u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r10 + 2), r3);
        MemoryInline::WriteResolved16(guest_range_0, 4u, (r10 + 4), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 6u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 6u, (r10 + 6), r3);
        MemoryInline::WriteResolved16(guest_range_0, 8u, (r10 + 8), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 10u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 10u, (r10 + 10), r3);
        MemoryInline::WriteResolved16(guest_range_0, 12u, (r10 + 12), r3);
    }
    MemoryInline::WriteResolved16(guest_range_0, 14u, (r10 + 14), static_cast<uint16_t>(r3));
    r10 = (r10 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80021DC4;
    }
}

loc_80021DF0:
{
    r0 = (r5 - r12);
    ctr = r0;
}

loc_80021DFC:
{
    if ((static_cast<int32_t>(r12) >= static_cast<int32_t>(r5))) {
        goto loc_80021E10;
    }
}

loc_80021E00:
{
    MemoryInline::FlatWrite16(r10, static_cast<uint16_t>(r3));
    r10 = (r10 + 2);
    r12 = (r12 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80021E00;
    }
}

loc_80021E10:
{
    r0 = MemoryInline::FlatRead16((r9 + 12));
    r11 = (r11 + 1);
    r0 = (r0 - r5);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r10 = (r10 + r0);
}

loc_80021E24:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r11), static_cast<int32_t>(r6));
}

loc_80021E28:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80021D78;
    }
}

loc_80021E2C:
{
    ctx->gpr[0] = r0;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001FF9 gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80021CA0 func_80021CA0 preserves=true fpr_mask=0x00000000
