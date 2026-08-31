#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8086EC5C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_not_0 = 0;
    uint32_t r0_not_1 = 0;
    uint32_t r0_not_2 = 0;
    uint32_t r0_not_3 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r0_subfc_sub_0 = 0;
    uint32_t r0_subfc_sub_1 = 0;
    uint32_t r0_subfc_sub_2 = 0;
    uint32_t r0_subfc_sub_3 = 0;
    uint32_t r0_subfe_rb_0 = 0;
    uint32_t r0_subfe_rb_1 = 0;
    uint32_t r0_subfe_rb_2 = 0;
    uint32_t r0_subfe_rb_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_ca_0 = 0;
    uint32_t r4_not_0 = 0;
    uint32_t r4_subfe_rb_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_ca_0 = 0;
    uint32_t r7_not_0 = 0;
    uint32_t r7_subfe_rb_0 = 0;
    uint32_t r8_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8086EC5C;

loc_8086EC5C:
{
    r8 = MemoryInline::FlatRead32((r3 + 460));
    r0 = (r8 + 1);
    r8 = (r0 & 15);
    MemoryInline::FlatWrite32((r3 + 460), r8);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 60);
    r0 = (r0 - r8);
    r8 = (r3 + r0);
    MemoryInline::FlatWrite8((r8 + 412), static_cast<uint8_t>(r5));
    r8 = MemoryInline::FlatRead32((r3 + 460));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r0 = (r0 - r8);
    r8 = (r3 + r0);
    MemoryInline::FlatWrite8((r8 + 413), static_cast<uint8_t>(r6));
    r8 = MemoryInline::FlatRead32((r3 + 460));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r0 = (r0 - r8);
    r8 = (r3 + r0);
    MemoryInline::FlatWrite8((r8 + 414), static_cast<uint8_t>(r7));
    r7 = MemoryInline::FlatRead32((r3 + 384));
    r0 = MemoryInline::FlatRead32((r3 + 372));
    r10 = (r7 + 1);
    r9 = MemoryInline::FlatRead32((r3 + 460));
    r7 = (r10 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r10) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    r0 = MemoryInline::FlatRead32((r3 + 380));
    r7_subfe_rb_0 = r7;
    r7_not_0 = ~(r7);
    r7_ca_0 = (xer >> 29) & 1u;
    r7 = (r7_not_0 + r7_subfe_rb_0);
    r7 = (r7 + r7_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r7_not_0)) + static_cast<uint64_t>(static_cast<uint32_t>(r7_subfe_rb_0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r7_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r8 = (r8_rot_0 & -4);
    r10 = (r10 & r7);
    r7 = (r8 - r9);
    r7 = (r3 + r7);
}

loc_8086ECD4:
{
    r9 = (r7 + 412);
    if ((static_cast<uint32_t>(r10) == static_cast<uint32_t>(r0))) {
        goto loc_8086ED68;
    }
}

loc_8086ECDC:
{
    MemoryInline::FlatWrite32((r3 + 384), r10);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r7 = MemoryInline::FlatRead32((r3 + 376));
    r8 = 1;
    r7_addr_1 = (r7 + r0);
    MemoryInline::FlatWrite32(r7_addr_1, r8);
    r0 = MemoryInline::FlatRead32((r3 + 384));
    r7 = MemoryInline::FlatRead32((r3 + 376));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & -16);
    r7 = (r7 + r0);
    MemoryInline::FlatWrite32((r7 + 4), r9);
    r0 = MemoryInline::FlatRead32((r3 + 384));
    r7 = MemoryInline::FlatRead32((r3 + 376));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_5 & -16);
    r7 = (r7 + r0);
    MemoryInline::FlatWrite32((r7 + 8), r4);
    r0 = MemoryInline::FlatRead32((r3 + 384));
    r4 = MemoryInline::FlatRead32((r3 + 376));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_6 & -16);
    r7 = MemoryInline::FlatRead32((r3 + 372));
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32((r4 + 12), r7);
    r4 = MemoryInline::FlatRead32((r3 + 380));
    goto loc_8086ED5C;
}

loc_8086ED38:
{
    r7 = MemoryInline::FlatRead32((r3 + 376));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_8 & -16);
    r4 = (r4 + 1);
    r7 = (r7 + r0);
    MemoryInline::FlatWrite32((r7 + 12), r8);
    r0 = MemoryInline::FlatRead32((r3 + 372));
    r0_subfc_sub_2 = r0;
    r0 = (r4 - r0_subfc_sub_2);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0_subfc_sub_2) ? 1u : 0u) << 29);
    r0_subfe_rb_2 = r0;
    r0_not_2 = ~(r0);
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r0_not_2 + r0_subfe_rb_2);
    r0 = (r0 + r0_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_subfe_rb_2)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4 = (r4 & r0);
}

loc_8086ED5C:
{
    r8 = MemoryInline::FlatRead32((r3 + 384));
}

loc_8086ED64:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r8))) {
        goto loc_8086ED38;
    }
}

loc_8086ED68:
{
    r4 = MemoryInline::FlatRead32((r3 + 460));
    r0 = (r4 + 1);
    r4 = (r0 & 15);
    MemoryInline::FlatWrite32((r3 + 460), r4);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & 60);
    r0 = (r0 - r4);
    r4 = (r3 + r0);
    MemoryInline::FlatWrite8((r4 + 412), static_cast<uint8_t>(r5));
    r4 = MemoryInline::FlatRead32((r3 + 460));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r0 = (r0 - r4);
    r4 = (r3 + r0);
    MemoryInline::FlatWrite8((r4 + 413), static_cast<uint8_t>(r6));
    r9 = MemoryInline::FlatRead32((r3 + 384));
    r0 = MemoryInline::FlatRead32((r3 + 372));
    r7 = (r9 + 1);
    r6 = MemoryInline::FlatRead32((r3 + 460));
    r4 = (r7 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    r0 = MemoryInline::FlatRead32((r3 + 380));
    r4_subfe_rb_0 = r4;
    r4_not_0 = ~(r4);
    r4_ca_0 = (xer >> 29) & 1u;
    r4 = (r4_not_0 + r4_subfe_rb_0);
    r4 = (r4 + r4_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_0)) + static_cast<uint64_t>(static_cast<uint32_t>(r4_subfe_rb_0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r5 = (r5_rot_0 & -4);
    r8 = (r7 & r4);
    r4 = (r5 - r6);
    r4 = (r3 + r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(r0));
}

loc_8086EDCC:
{
    r7 = (r4 + 412);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8086EDD4:
{
    r6 = MemoryInline::FlatRead32((r3 + 376));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(4));
    r0 = (r0_rot_12 & -16);
    r4 = MemoryInline::FlatRead32((r3 + 392));
    r6_addr_1 = (r6 + r0);
    r0 = MemoryInline::FlatRead32(r6_addr_1);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    r0 = MemoryInline::FlatRead8((r4 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8086EDF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8086EDF8:
{
    MemoryInline::FlatWrite32((r3 + 384), r8);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(4));
    r0 = (r0_rot_14 & -16);
    r4 = 2;
    r5 = -1;
    r6_addr_2 = (r6 + r0);
    MemoryInline::FlatWrite32(r6_addr_2, r4);
    r0 = MemoryInline::FlatRead32((r3 + 384));
    r4 = MemoryInline::FlatRead32((r3 + 376));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_15 & -16);
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32((r4 + 4), r7);
    r0 = MemoryInline::FlatRead32((r3 + 384));
    r4 = MemoryInline::FlatRead32((r3 + 376));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_16 & -16);
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32((r4 + 8), r5);
    r0 = MemoryInline::FlatRead32((r3 + 384));
    r4 = MemoryInline::FlatRead32((r3 + 376));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_17 & -16);
    r5 = MemoryInline::FlatRead32((r3 + 372));
    r3 = (r4 + r0);
    MemoryInline::FlatWrite32((r3 + 12), r5);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007F9 gpr_write=0x000007F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8086EC5C func_8086EC5C preserves=true fpr_mask=0x00000000
