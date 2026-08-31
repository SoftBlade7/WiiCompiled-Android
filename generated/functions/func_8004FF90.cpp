#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004FF90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r11_mdest_0 = 0;
    uint32_t r11_mrot_0 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r4_rot_0 = 0;

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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8004FF90;

loc_8004FF90:
{
    r10_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r10 = (r10_rot_0 & 1);
    r0 = (r4 & 1);
    r4 = (r10 + r4);
    r11 = MemoryInline::FlatRead32(r3);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r4) >> 1);
    r0 = (r0 ^ r10);
    r4 = (r3 * 48);
    r3 = (r0 - r10);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r11 + r4);
    r0 = (r0 + r3);
    r10 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r10 + 143));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004FFC8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8004FFD4;
    }
}

loc_8004FFCC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_8004FFD4:
{
    r3 = MemoryInline::FlatRead8((r10 + 145));
}

loc_8004FFDC:
{
    r0 = MemoryInline::FlatRead8((r10 + 146));
    r11_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r11 = (r11_rot_0 & -65536);
    r4 = MemoryInline::FlatRead8((r10 + 144));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3 = (r3_rot_0 & -256);
    r0 = MemoryInline::FlatRead8((r10 + 147));
    r11_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r11_mrot_0 = (r11_rot_1 & -16777216);
    r11_mdest_0 = (r11 & 16777215);
    r11 = (r11_mdest_0 | r11_mrot_0);
    r11 = (r11 | r3);
    r11 = (r11 | r0);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(16));
    r4 = (r4_rot_0 & 3);
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8005000C;
    }
}

loc_80050004:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(13));
    r0 = (r0_rot_1 & 1);
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r0));
}

loc_8005000C:
{
}

loc_80050010:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_8005001C;
    }
}

loc_80050014:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(10));
    r0 = (r0_rot_3 & 3);
    MemoryInline::FlatWrite32(r9, r0);
}

loc_8005001C:
{
}

loc_80050020:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(14));
    r3 = (r3_rot_1 & 1);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(12));
    r0 = (r0_rot_5 & 3);
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(3))) {
        goto loc_80050040;
    }
}

loc_8005002C:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r4 = 0;
    r3 = (r3 | r0);
    r0 = 0;
    r3 = (r3 + 8);
}

loc_80050040:
{
}

loc_80050044:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8005004C;
    }
}

loc_80050048:
{
    MemoryInline::FlatWrite32(r6, r4);
}

loc_8005004C:
{
}

loc_80050050:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80050058;
    }
}

loc_80050054:
{
    MemoryInline::FlatWrite32(r5, r3);
}

loc_80050058:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8005005C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80050064;
    }
}

loc_80050060:
{
    MemoryInline::FlatWrite32(r7, r0);
}

loc_80050064:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000C19 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8004FF90 func_8004FF90 preserves=true fpr_mask=0x00000000
