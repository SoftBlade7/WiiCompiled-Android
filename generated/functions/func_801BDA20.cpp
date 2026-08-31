#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801BDA20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801BDA20;

loc_801BDA20:
{
    r5 = 0x80350000u;
    r4 = 1717960704;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & -4);
    r0 = 100;
    r5 = (r5 + 2352);
    r4 = (r4 + 26215);
    r5_addr_0 = (r5 + r3);
    r7 = MemoryInline::FlatRead32(r5_addr_0);
    r3 = MemoryInline::FlatRead16((r7 + 2436));
    r6 = MemoryInline::FlatRead8((r7 + 2435));
    r3 = (r3 * 100);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r5 = (r5_rot_0 & -8);
    r5 = (r5 + r6);
    r5 = (r5 & 65535);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(31));
    r3 = (r3_rot_1 & 65535);
    r5 = (r5 + r3);
    r3 = (r5 & 65535);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r3))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r3) >> 2);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    r3 = (r3 + r4);
    r5 = (r3 & 65535);
}

loc_801BDA78:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(100))) {
        goto loc_801BDA80;
    }
}

loc_801BDA7C:
{
    r0 = r5;
}

loc_801BDA80:
{
    MemoryInline::FlatWrite8((r7 + 2435), static_cast<uint8_t>(r0));
    r4 = 0;
    r3 = (r0 & 65535);
    MemoryInline::FlatWrite16((r7 + 2436), static_cast<uint16_t>(r4));
    r0 = MemoryInline::FlatRead8((r7 + 2253));
}

loc_801BDA98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801BDADC;
    }
}

loc_801BDA9C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(85));
}

loc_801BDAA0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801BDAB0;
    }
}

loc_801BDAA4:
{
    MemoryInline::FlatWrite8((r7 + 2253), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r7 + 2254), static_cast<uint8_t>(r4));
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

loc_801BDAB0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(80));
}

loc_801BDAB4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_801BDAB8:
{
    r3 = MemoryInline::FlatRead8((r7 + 2254));
    r3 = (r3 + 1);
    r0 = (r3 & 255);
    MemoryInline::FlatWrite8((r7 + 2254), static_cast<uint8_t>(r3));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
}

loc_801BDACC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_801BDAD0:
{
    MemoryInline::FlatWrite8((r7 + 2253), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r7 + 2254), static_cast<uint8_t>(r4));
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

loc_801BDADC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(75));
}

loc_801BDAE0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801BDAF4;
    }
}

loc_801BDAE4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r7 + 2253), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r7 + 2254), static_cast<uint8_t>(r4));
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

loc_801BDAF4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(80));
}

loc_801BDAF8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_801BDAFC:
{
    r3 = MemoryInline::FlatRead8((r7 + 2254));
    r3 = (r3 + 1);
    r0 = (r3 & 255);
    MemoryInline::FlatWrite8((r7 + 2254), static_cast<uint8_t>(r3));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_801BDB10:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_801BDB14:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r7 + 2253), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r7 + 2254), static_cast<uint8_t>(r4));
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

// RECOMP_GUEST_ABI gpr_read=0x000000B9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801BDA20 func_801BDA20 preserves=true fpr_mask=0x00000000
