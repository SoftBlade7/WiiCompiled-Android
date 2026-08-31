#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8053B98C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r7_subfic_ra_0 = 0;
    uint32_t r7_subfic_ra_1 = 0;
    uint32_t r7_subfic_ra_2 = 0;
    uint32_t r9_rot_0 = 0;

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

    goto loc_8053B98C;

loc_8053B98C:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 510);
    r6 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 188));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053B99C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_return;
    }
}

loc_8053B9A0:
{
    r8 = 0x809C0000u;
    r11 = MemoryInline::FlatRead16((r3 + 276));
    r11 = (r11 << 16);
    r11 = (static_cast<int32_t>(r11) >> 16);
    r9 = MemoryInline::FlatRead32((r8 + -10448));
    r8 = 65536;
    r7 = 0x80010000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r10 = MemoryInline::FlatRead32((r9 + 32));
    r9 = (r7 + -32767);
    r7 = (r3 + r0);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & 2040);
    r9 = (static_cast<uint32_t>((static_cast<uint64_t>(r9) * static_cast<uint64_t>(r10)) >> 32));
    r7 = MemoryInline::FlatRead32((r7 + 68));
    r8 = (r8 + -1);
    r5 = (r7 + r0);
    r0 = MemoryInline::FlatRead16((r5 + 4));
}

loc_8053B9E0:
{
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(17));
    r9 = (r9_rot_0 & 131071);
    r5 = (r9 * r8);
    r5 = (r10 - r5);
    r5 = (r5 & 65535);
    r7 = (r0 - r5);
    if ((static_cast<int32_t>(r11) >= static_cast<int32_t>(0))) {
        goto loc_8053B9FC;
    }
}

loc_8053B9F8:
{
    r7 = (r7 - r11);
}

loc_8053B9FC:
{
}

loc_8053BA00:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(70))) {
        goto loc_8053BA34;
    }
}

loc_8053BA04:
{
    r7_subfic_ra_0 = r7;
    r7 = (70 - r7_subfic_ra_0);
    r5 = 1717960704;
    r0 = (r7 + 9);
    r5 = (r5 + 26215);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r5)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 2);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_0 & 1);
    r7 = (r0 + r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(3));
}

loc_8053BA28:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8053BA70;
    }
}

loc_8053BA2C:
{
    r7 = 3;
    goto loc_8053BA70;
}

loc_8053BA34:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(130));
}

loc_8053BA38:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8053BA6C;
    }
}

loc_8053BA3C:
{
    r5 = 1717960704;
    r0 = (r7 + -121);
    r5 = (r5 + 26215);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r5)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 2);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & 1);
    r0 = (r0 + r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8053BA5C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8053BA64;
    }
}

loc_8053BA60:
{
    r0 = 3;
}

loc_8053BA64:
{
    r7 = (0 - r0);
    goto loc_8053BA70;
}

loc_8053BA6C:
{
    r7 = 0;
}

loc_8053BA70:
{
    r5 = MemoryInline::FlatRead32((r3 + 64));
    r0 = 90;
    r5 = (r5 + r4);
    MemoryInline::FlatWrite8((r5 + 16), static_cast<uint8_t>(r7));
    r3 = MemoryInline::FlatRead32((r3 + 64));
    r4 = (r3 + r4);
    r3 = MemoryInline::FlatRead8((r4 + 28));
    r3 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    MemoryInline::FlatWrite8((r4 + 28), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite16((r6 + 188), static_cast<uint16_t>(r0));
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
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000FF9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8053B98C func_8053B98C preserves=true fpr_mask=0x00000000
