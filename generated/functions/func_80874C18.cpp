#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80874C18(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_ca_0 = 0;
    uint32_t r4_not_0 = 0;
    uint32_t r4_subfc_sub_0 = 0;
    uint32_t r4_subfe_rb_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_ca_0 = 0;
    uint32_t r5_not_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_subfc_sub_0 = 0;
    uint32_t r5_subfe_rb_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80874C18;

loc_80874C18:
{
    r6 = MemoryInline::FlatRead32((r3 + 360));
    r5 = MemoryInline::FlatRead32((r3 + 348));
    r7 = (r6 + 1);
    r0 = MemoryInline::FlatRead32((r3 + 356));
    r5_subfc_sub_0 = r5;
    r5 = (r7 - r5_subfc_sub_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r5_subfc_sub_0) ? 1u : 0u) << 29);
    r5_subfe_rb_0 = r5;
    r5_not_0 = ~(r5);
    r5_ca_0 = (xer >> 29) & 1u;
    r5 = (r5_not_0 + r5_subfe_rb_0);
    r5 = (r5 + r5_ca_0);
    r7 = (r7 & r5);
}

loc_80874C38:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r0))) {
        goto loc_80874CDC;
    }
}

loc_80874C3C:
{
    r5 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r6 = MemoryInline::FlatRead32((r3 + 368));
}

loc_80874C4C:
{
    r5_addr_1 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_1);
    r0 = 4;
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -4);
    r6_addr_1 = (r6 + r5);
    r5 = MemoryInline::FlatRead32(r6_addr_1);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80874C64;
    }
}

loc_80874C60:
{
    r0 = 5;
}

loc_80874C64:
{
    r5_addr_2 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_2);
}

loc_80874C6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80874CDC;
    }
}

loc_80874C70:
{
}

loc_80874C74:
{
    MemoryInline::FlatWrite32((r3 + 360), r7);
    r7 = 4;
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80874C84;
    }
}

loc_80874C80:
{
    r7 = 5;
}

loc_80874C84:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 348), 0, 16u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 360));
    r6 = 0;
    r4 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 352));
    r5 = -1;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r4_addr_1 = (r4 + r0);
    MemoryInline::FlatWrite32(r4_addr_1, r7);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 360));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 352));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32((r4 + 4), r6);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 360));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 352));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & -16);
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32((r4 + 8), r5);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 360));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 352));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_5 & -16);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 348));
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32((r4 + 12), r5);
}

loc_80874CDC:
{
    r6 = MemoryInline::FlatRead32((r3 + 360));
    r4 = MemoryInline::FlatRead32((r3 + 348));
    r5 = (r6 + 1);
    r0 = MemoryInline::FlatRead32((r3 + 356));
    r4_subfc_sub_0 = r4;
    r4 = (r5 - r4_subfc_sub_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r4_subfc_sub_0) ? 1u : 0u) << 29);
    r4_subfe_rb_0 = r4;
    r4_not_0 = ~(r4);
    r4_ca_0 = (xer >> 29) & 1u;
    r4 = (r4_not_0 + r4_subfe_rb_0);
    r4 = (r4 + r4_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_0)) + static_cast<uint64_t>(static_cast<uint32_t>(r4_subfe_rb_0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5 = (r5 & r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_80874CFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80874D00:
{
    r7 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r0 = (r0_rot_7 & -16);
    r4 = MemoryInline::FlatRead32((r3 + 368));
    r7_addr_1 = (r7 + r0);
    r0 = MemoryInline::FlatRead32(r7_addr_1);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r4_addr_3 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_3);
    r0 = MemoryInline::FlatRead8(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80874D20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80874D24:
{
    MemoryInline::FlatWrite32((r3 + 360), r5);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r0 = (r0_rot_9 & -16);
    r6 = 0;
    r5 = -1;
    r7_addr_2 = (r7 + r0);
    MemoryInline::FlatWrite32(r7_addr_2, r6);
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r4 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_10 & -16);
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32((r4 + 4), r6);
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r4 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_11 & -16);
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32((r4 + 8), r5);
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r4 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_12 & -16);
    r5 = MemoryInline::FlatRead32((r3 + 348));
    r3 = (r4 + r0);
    MemoryInline::FlatWrite32((r3 + 12), r5);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
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
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80874C18 func_80874C18 preserves=true fpr_mask=0x00000000
