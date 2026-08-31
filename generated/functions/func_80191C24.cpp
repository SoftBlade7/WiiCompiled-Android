#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80191C24(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80191C24;

loc_80191C24:
{
    r0 = MemoryInline::FlatRead32((r3 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80191C2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80191C30:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80191C44;
    }
}

loc_80191C34:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80191C38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80191C50;
    }
}

loc_80191C3C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80191CA8;
    }
}

loc_80191C40:
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

loc_80191C44:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80191C48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_80191C4C:
{
    goto loc_80191D10;
}

loc_80191C50:
{
    r5 = MemoryInline::FlatRead32((r3 + 56));
    r0 = 6488064;
    r4 = MemoryInline::FlatRead32((r3 + 60));
    r4 = (r5 + r4);
}

loc_80191C64:
{
    MemoryInline::FlatWrite32((r3 + 56), r4);
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_80191C78;
    }
}

loc_80191C6C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 52), r0);
    goto loc_80191C90;
}

loc_80191C78:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(16) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 16);
    r4 = 0x80290000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4 = (r4 + -7272);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_1);
    MemoryInline::FlatWrite32((r3 + 52), r0);
}

loc_80191C90:
{
    r0 = MemoryInline::FlatRead32((r3 + 52));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80191C98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80191C9C:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 48), r0);
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

loc_80191CA8:
{
    r4 = MemoryInline::FlatRead32((r3 + 52));
    r0 = MemoryInline::FlatRead32((r3 + 64));
    r5 = MemoryInline::FlatRead32((r3 + 68));
    r0 = (r4 + r0);
}

loc_80191CBC:
{
    MemoryInline::FlatWrite32((r3 + 52), r0);
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r5))) {
        goto loc_80191CD0;
    }
}

loc_80191CC4:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 52), r5);
    MemoryInline::FlatWrite32((r3 + 48), r0);
}

loc_80191CD0:
{
    r4 = MemoryInline::FlatRead32((r3 + 52));
    r0 = -47185920;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80191CDC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_return;
    }
}

loc_80191CE0:
{
    r4 = MemoryInline::FlatRead8((r3 + 12));
    r7 = 4;
    r0 = MemoryInline::FlatRead8((r3 + 13));
    r6 = 0;
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
    r4 = (r4_rot_0 & -512);
    MemoryInline::FlatWrite32((r3 + 48), r7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r5 + r4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 1032), r6);
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

loc_80191D10:
{
    r4 = MemoryInline::FlatRead32((r3 + 52));
    r0 = -47185920;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80191D1C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80191D2C;
    }
}

loc_80191D20:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r3 + 48), r0);
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

loc_80191D2C:
{
    r0 = MemoryInline::FlatRead32((r3 + 72));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r3 + 52), r0);
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

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80191C24 func_80191C24 preserves=true fpr_mask=0x00000000
