#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E6F2C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_10 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r10_rot_6 = 0;
    uint32_t r10_rot_7 = 0;
    uint32_t r10_rot_8 = 0;
    uint32_t r10_rot_9 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_10 = 0;
    uint32_t r8_rot_11 = 0;
    uint32_t r8_rot_12 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint32_t r8_rot_8 = 0;
    uint32_t r8_rot_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801E6F2C;

loc_801E6F2C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r7 = 1900;
    r0 = 1;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_801E6F3C:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801E70BC;
    }
}

loc_801E6F50:
{
    r9 = 1374420992;
}

loc_801E6F54:
{
    r10 = MemoryInline::FlatRead16(r3);
    r0 = r6;
    r11 = 1;
    r12 = 0;
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(30));
    r7 = (r7_rot_2 & -1073741824);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r8 = (r8_rot_2 & 1);
    r7 = (r7 - r8);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r7 = (r7_rot_3 & -1);
    r7 = (r7 + r8);
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_801E6FA0;
    }
}

loc_801E6F7C:
{
    r7 = (r9 + -31457);
    r7 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r7)) * static_cast<int64_t>(static_cast<int32_t>(r10))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r7 = (static_cast<int32_t>(r7) >> 5);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r8 = (r8_rot_3 & 1);
    r7 = (r7 + r8);
    r7 = (r7 * 100);
    r7 = (r10 - r7);
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_801E6FA0;
    }
}

loc_801E6F9C:
{
    r12 = 1;
}

loc_801E6FA0:
{
}

loc_801E6FA4:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_801E6FCC;
    }
}

loc_801E6FA8:
{
    r7 = (r9 + -31457);
    r7 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r7)) * static_cast<int64_t>(static_cast<int32_t>(r10))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(7) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r7 = (static_cast<int32_t>(r7) >> 7);
    r8_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r8 = (r8_rot_5 & 1);
    r7 = (r7 + r8);
    r7 = (r7 * 400);
    r7 = (r10 - r7);
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_801E6FCC;
    }
}

loc_801E6FC8:
{
    r11 = 0;
}

loc_801E6FCC:
{
    r7 = (0 - r11);
    r7 = (r7 | r11);
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_4 & 1);
    r7 = (r7 + 365);
    r6 = (r6 - r7);
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(0))) {
        goto loc_801E6FEC;
    }
}

loc_801E6FE4:
{
    r6 = r0;
    goto loc_801E6FFC;
}

loc_801E6FEC:
{
    r7 = MemoryInline::FlatRead16(r3);
    r0 = (r7 + 1);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    goto loc_801E6F54;
}

loc_801E6FFC:
{
    r9 = 0x80250000u;
    r11 = 1374420992;
    r9 = (r9 + 12488);
}

loc_801E7008:
{
    r0 = MemoryInline::FlatRead8(r4);
    r7 = r6;
}

loc_801E7014:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_801E708C;
    }
}

loc_801E7018:
{
    r31 = MemoryInline::FlatRead16(r3);
    r12 = 0;
    r8_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(30));
    r8 = (r8_rot_8 & -1073741824);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
    r10 = (r10_rot_2 & 1);
    r8 = (r8 - r10);
    r8_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r8 = (r8_rot_9 & -1);
    r8 = (r8 + r10);
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_801E7058;
    }
}

loc_801E7038:
{
    r8 = (r11 + -31457);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r8)) * static_cast<int64_t>(static_cast<int32_t>(r31))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r8);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r8 = (static_cast<int32_t>(r8) >> 5);
    r10_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r10 = (r10_rot_3 & 1);
    r8 = (r8 + r10);
    r8 = (r8 * 100);
    r8 = (r31 - r8);
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_801E7078;
    }
}

loc_801E7058:
{
    r8 = (r11 + -31457);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r8)) * static_cast<int64_t>(static_cast<int32_t>(r31))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r8);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(7) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r8 = (static_cast<int32_t>(r8) >> 7);
    r10_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r10 = (r10_rot_5 & 1);
    r8 = (r8 + r10);
    r8 = (r8 * 400);
    r8 = (r31 - r8);
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_801E707C;
    }
}

loc_801E7078:
{
    r12 = 1;
}

loc_801E707C:
{
}

loc_801E7080:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_801E708C;
    }
}

loc_801E7084:
{
    r6 = (r6 + -29);
    goto loc_801E7098;
}

loc_801E708C:
{
    r8 = (r9 + r0);
    r0 = MemoryInline::FlatRead8((r8 + -1));
    r6 = (r6 - r0);
}

loc_801E7098:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_801E709C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801E70B0;
    }
}

loc_801E70A0:
{
    r7 = MemoryInline::FlatRead8(r4);
    r0 = (r7 + 1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    goto loc_801E7008;
}

loc_801E70B0:
{
    r0 = MemoryInline::FlatRead8(r5);
    r0 = (r0 + r7);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
}

loc_801E70BC:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80001FFB gpr_write=0x80001FC3 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801E6F2C func_801E6F2C preserves=true fpr_mask=0x00000000
