#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80874A44(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r5_addr_0 = 0;
    uint32_t r5_ca_0 = 0;
    uint32_t r5_not_0 = 0;
    uint32_t r5_subfe_rb_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80874A44;

loc_80874A44:
{
    r7 = MemoryInline::FlatRead32((r3 + 772));
    r0 = (r7 + 1);
    r0 = (r0 & 15);
    MemoryInline::FlatWrite32((r3 + 772), r0);
    r0 = (r0 * 24);
    r7 = (r3 + r0);
    MemoryInline::FlatWrite8((r7 + 388), static_cast<uint8_t>(r5));
    r0 = MemoryInline::FlatRead32((r3 + 772));
    r0 = (r0 * 24);
    r5 = (r3 + r0);
    MemoryInline::FlatWrite32((r5 + 392), r6);
    r5 = MemoryInline::FlatRead32((r3 + 360));
    r0 = MemoryInline::FlatRead32((r3 + 348));
    r7 = (r5 + 1);
    r6 = MemoryInline::FlatRead32((r3 + 772));
    r5 = (r7 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    r0 = MemoryInline::FlatRead32((r3 + 356));
    r5_subfe_rb_0 = r5;
    r5_not_0 = ~(r5);
    r5_ca_0 = (xer >> 29) & 1u;
    r5 = (r5_not_0 + r5_subfe_rb_0);
    r5 = (r5 + r5_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_0)) + static_cast<uint64_t>(static_cast<uint32_t>(r5_subfe_rb_0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r8 = (r7 & r5);
    r6 = (r6 * 24);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(r0));
}

loc_80874A98:
{
    r5 = (r3 + r6);
    r7 = (r5 + 388);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80874AA4:
{
    MemoryInline::FlatWrite32((r3 + 360), r8);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & -16);
    r5 = MemoryInline::FlatRead32((r3 + 352));
    r6 = 6;
    r5_addr_0 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_0, r6);
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r5 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r5 = (r5 + r0);
    MemoryInline::FlatWrite32((r5 + 4), r7);
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r5 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r5 = (r5 + r0);
    MemoryInline::FlatWrite32((r5 + 8), r4);
    r0 = MemoryInline::FlatRead32((r3 + 360));
    r4 = MemoryInline::FlatRead32((r3 + 352));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r5 = MemoryInline::FlatRead32((r3 + 348));
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32((r4 + 12), r5);
    r4 = MemoryInline::FlatRead32((r3 + 356));
    goto loc_80874B24;
}

loc_80874B00:
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

loc_80874B24:
{
    r6 = MemoryInline::FlatRead32((r3 + 360));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r6));
}

loc_80874B2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80874B00;
    }
}

loc_80874B30:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000178 gpr_write=0x000001F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80874A44 func_80874A44 preserves=true fpr_mask=0x00000000
