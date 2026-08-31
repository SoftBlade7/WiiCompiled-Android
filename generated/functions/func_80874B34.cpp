#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80874B34(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_not_0 = 0;
    uint32_t r0_not_1 = 0;
    uint32_t r0_not_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_subfc_sub_0 = 0;
    uint32_t r0_subfc_sub_1 = 0;
    uint32_t r0_subfc_sub_2 = 0;
    uint32_t r0_subfe_rb_0 = 0;
    uint32_t r0_subfe_rb_1 = 0;
    uint32_t r0_subfe_rb_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_ca_0 = 0;
    uint32_t r4_not_0 = 0;
    uint32_t r4_subfe_rb_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80874B34;

loc_80874B34:
{
    r5 = MemoryInline::FlatRead32((r3 + 772));
    r0 = (r5 + 1);
    r0 = (r0 & 15);
    MemoryInline::FlatWrite32((r3 + 772), r0);
    r0 = (r0 * 24);
    r5 = (r3 + r0);
    MemoryInline::FlatWrite8((r5 + 388), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r3 + 360));
    r0 = MemoryInline::FlatRead32((r3 + 348));
    r6 = (r4 + 1);
    r5 = MemoryInline::FlatRead32((r3 + 772));
    r4 = (r6 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    r0 = MemoryInline::FlatRead32((r3 + 356));
    r4_subfe_rb_0 = r4;
    r4_not_0 = ~(r4);
    r4_ca_0 = (xer >> 29) & 1u;
    r4 = (r4_not_0 + r4_subfe_rb_0);
    r4 = (r4 + r4_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_not_0)) + static_cast<uint64_t>(static_cast<uint32_t>(r4_subfe_rb_0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r6 = (r6 & r4);
    r5 = (r5 * 24);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_80874B78:
{
    r4 = (r3 + r5);
    r7 = (r4 + 388);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80874B84:
{
    r4 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & -16);
    MemoryInline::FlatWrite32((r3 + 360), r6);
    r6 = 7;
    r5 = -1;
    r4_addr_0 = (r4 + r0);
    MemoryInline::FlatWrite32(r4_addr_0, r6);
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r4 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32((r4 + 4), r7);
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r4 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32((r4 + 8), r5);
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r4 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r5 = MemoryInline::FlatRead32((r3 + 348));
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32((r4 + 12), r5);
    r4 = MemoryInline::FlatRead32((r3 + 356));
    goto loc_80874C08;
}

loc_80874BE4:
{
    r5 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_5 & -16);
    r4 = (r4 + 1);
    r5 = (r5 + r0);
    MemoryInline::FlatWrite32((r5 + 12), r6);
    r0 = MemoryInline::FlatRead32((r3 + 348));
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

loc_80874C08:
{
    r6 = MemoryInline::FlatRead32((r3 + 360));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r6));
}

loc_80874C10:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80874BE4;
    }
}

loc_80874C14:
{
    ctx->gpr[0] = r0;
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
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x000000F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80874B34 func_80874B34 preserves=true fpr_mask=0x00000000
