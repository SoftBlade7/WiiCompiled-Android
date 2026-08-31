#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004FDA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r9_mdest_0 = 0;
    uint32_t r9_mrot_0 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8004FDA0;

loc_8004FDA0:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (r0 + r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 * 48);
    r8 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r8 + 138));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004FDC0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8004FDCC;
    }
}

loc_8004FDC4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_8004FDCC:
{
    r0 = (r4 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004FDD0:
{
    r3 = MemoryInline::FlatRead8((r8 + 140));
    r0 = MemoryInline::FlatRead8((r8 + 141));
    r4 = MemoryInline::FlatRead8((r8 + 139));
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r9 = (r9_rot_0 & -65536);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3 = (r3_rot_0 & -256);
    r0 = MemoryInline::FlatRead8((r8 + 142));
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r9_mrot_0 = (r9_rot_1 & -16777216);
    r9_mdest_0 = (r9 & 16777215);
    r9 = (r9_mdest_0 | r9_mrot_0);
    r9 = (r9 | r3);
    r9 = (r9 | r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004FE18;
    }
}

loc_8004FDF8:
{
    r3 = 0x80240000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(15));
    r0 = (r0_rot_1 & 28);
    r3 = (r3 + 29760);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(17));
    r4 = (r4_rot_0 & 7);
    r3_addr_0 = (r3 + r0);
    r8 = MemoryInline::FlatRead32(r3_addr_0);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(14));
    r0 = (r0_rot_2 & 1);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(20));
    r3 = (r3_rot_1 & 7);
    goto loc_8004FE34;
}

loc_8004FE18:
{
    r3 = 0x80240000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(27));
    r0 = (r0_rot_3 & 28);
    r3 = (r3 + 29760);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(29));
    r4 = (r4_rot_1 & 7);
    r3_addr_1 = (r3 + r0);
    r8 = MemoryInline::FlatRead32(r3_addr_1);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(26));
    r0 = (r0_rot_4 & 1);
    r3 = (r9 & 7);
}

loc_8004FE34:
{
}

loc_8004FE38:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8004FE40;
    }
}

loc_8004FE3C:
{
    MemoryInline::FlatWrite32(r5, r4);
}

loc_8004FE40:
{
}

loc_8004FE44:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8004FE4C;
    }
}

loc_8004FE48:
{
    MemoryInline::FlatWrite32(r7, r8);
}

loc_8004FE4C:
{
}

loc_8004FE50:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8004FE58;
    }
}

loc_8004FE54:
{
    r3 = 255;
}

loc_8004FE58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8004FE5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004FE64;
    }
}

loc_8004FE60:
{
    MemoryInline::FlatWrite32(r6, r3);
}

loc_8004FE64:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x00000319 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8004FDA0 func_8004FDA0 preserves=true fpr_mask=0x00000000
