#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015BF24(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r10_addic_src_0 = 0;
    uint32_t r10_addic_src_1 = 0;
    uint32_t r10_addic_src_2 = 0;
    uint32_t r10_addic_src_3 = 0;
    uint32_t r10_addic_src_4 = 0;
    uint32_t r10_addic_src_5 = 0;
    uint32_t r5_addic_src_0 = 0;
    uint32_t r5_addic_src_1 = 0;
    uint32_t r5_addic_src_2 = 0;
    uint32_t r5_addic_src_3 = 0;
    uint32_t r5_addic_src_4 = 0;
    uint32_t r5_addic_src_5 = 0;
    uint32_t r5_addic_src_6 = 0;
    uint32_t r5_addic_src_7 = 0;
    uint32_t r7_mdest_0 = 0;
    uint32_t r7_mdest_1 = 0;
    uint32_t r7_mdest_2 = 0;
    uint32_t r7_mdest_3 = 0;
    uint32_t r7_mdest_4 = 0;
    uint32_t r7_mdest_5 = 0;
    uint32_t r7_mdest_6 = 0;
    uint32_t r7_mrot_0 = 0;
    uint32_t r7_mrot_1 = 0;
    uint32_t r7_mrot_2 = 0;
    uint32_t r7_mrot_3 = 0;
    uint32_t r7_mrot_4 = 0;
    uint32_t r7_mrot_5 = 0;
    uint32_t r7_mrot_6 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_10 = 0;
    uint32_t r7_rot_11 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r7_rot_8 = 0;
    uint32_t r7_rot_9 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;

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

    goto loc_8015BF24;

loc_8015BF24:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r0 = MemoryInline::FlatRead8((r3 + 19));
}

loc_8015BF34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8015C070;
    }
}

loc_8015BF38:
{
}

loc_8015BF3C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_8015BF74;
    }
}

loc_8015BF40:
{
    r6 = MemoryInline::FlatRead8(r4);
    r0 = (r6 & 240);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(16));
}

loc_8015BF4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015BF58;
    }
}

loc_8015BF50:
{
    r3 = -1;
    goto loc_8015C2D4;
}

loc_8015BF58:
{
    r0 = (r6 & 15);
}

loc_8015BF5C:
{
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8015BF74;
    }
}

loc_8015BF64:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8015BF68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015BF74;
    }
}

loc_8015BF6C:
{
    r3 = -1;
    goto loc_8015C2D4;
}

loc_8015BF74:
{
    r11 = MemoryInline::FlatRead32((r3 + 8));
    r10 = r5;
    r9 = r4;
    r12 = 0;
    r6 = 0;
    goto loc_8015C024;
}

loc_8015BF8C:
{
    r7 = MemoryInline::FlatRead8((r3 + 19));
    r0 = (r7 + -1);
    r7 = (r0 & 255);
    MemoryInline::FlatWrite8((r3 + 19), static_cast<uint8_t>(r0));
}

loc_8015BFA0:
{
    if ((static_cast<uint32_t>(r7) > static_cast<uint32_t>(3))) {
        goto loc_8015BFC4;
    }
}

loc_8015BFA4:
{
    r0 = (3 - r7);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(3) >= static_cast<uint32_t>(r7) ? 1u : 0u) << 29);
    r7 = MemoryInline::FlatRead8(r9);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r8 = MemoryInline::FlatRead32((r3 + 4));
    r0 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r0));
    r0 = (r8 | r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_8015BFE8;
}

loc_8015BFC4:
{
}

loc_8015BFC8:
{
    if ((static_cast<uint32_t>(r7) > static_cast<uint32_t>(6))) {
        goto loc_8015BFE8;
    }
}

loc_8015BFCC:
{
    r0 = (6 - r7);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(6) >= static_cast<uint32_t>(r7) ? 1u : 0u) << 29);
    r7 = MemoryInline::FlatRead8(r9);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & -8);
    r8 = MemoryInline::FlatRead32((r3 + 4));
    r0 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r0));
    r0 = (r8 | r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
}

loc_8015BFE8:
{
    r0 = MemoryInline::FlatRead8((r3 + 19));
    r9 = (r9 + 1);
    r12 = (r12 + 1);
}

loc_8015BFF8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_8015C00C;
    }
}

loc_8015BFFC:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8015C004:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8015C00C;
    }
}

loc_8015C008:
{
    MemoryInline::FlatWrite8((r3 + 19), static_cast<uint8_t>(r6));
}

loc_8015C00C:
{
    r10_addic_src_2 = r10;
    r10 = (r10_addic_src_2 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r10_addic_src_2)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_8015C010:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8015C024;
    }
}

loc_8015C014:
{
    r0 = MemoryInline::FlatRead8((r3 + 19));
}

loc_8015C01C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8015C024;
    }
}

loc_8015C020:
{
    goto loc_8015C048;
}

loc_8015C024:
{
    r0 = MemoryInline::FlatRead8((r3 + 19));
}

loc_8015C02C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8015BF8C;
    }
}

loc_8015C030:
{
}

loc_8015C034:
{
    if ((static_cast<int32_t>(r11) <= static_cast<int32_t>(0))) {
        goto loc_8015C048;
    }
}

loc_8015C038:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8015C040:
{
    if ((static_cast<int32_t>(r11) >= static_cast<int32_t>(r0))) {
        goto loc_8015C048;
    }
}

loc_8015C044:
{
    MemoryInline::FlatWrite32((r3 + 4), r11);
}

loc_8015C048:
{
    r5 = (r5 - r12);
    r4 = (r4 + r12);
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8015C070;
    }
}

loc_8015C054:
{
    r0 = MemoryInline::FlatRead8((r3 + 19));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8015C05C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015C068;
    }
}

loc_8015C060:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8015C2D4;
}

loc_8015C068:
{
    r3 = -1;
    goto loc_8015C2D4;
}

loc_8015C070:
{
    r0 = 0;
    r6 = 1;
    r11 = 3;
    r8 = 8;
    goto loc_8015C2A8;
}

loc_8015C088:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8015C08C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015C098;
    }
}

loc_8015C090:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8015C2D4;
}

loc_8015C098:
{
    r7 = MemoryInline::FlatRead8((r3 + 17));
    r7 = (r7 & 128);
}

loc_8015C0A0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8015C1BC;
    }
}

loc_8015C0A4:
{
    r9 = MemoryInline::FlatRead8(r4);
    r5 = (r5 + -1);
    r7 = MemoryInline::FlatRead32(r3);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r9));
    r9 = (r7 + 1);
    r7 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32(r3, r9);
    r7 = (r7 + -1);
    MemoryInline::FlatWrite32((r3 + 4), r7);
    goto loc_8015C254;
}

loc_8015C0D4:
{
    r9 = MemoryInline::FlatRead8((r3 + 16));
    r7 = MemoryInline::FlatRead8((r3 + 20));
    r9 = (r9 + -1);
}

loc_8015C0E4:
{
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r9));
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8015C104;
    }
}

loc_8015C0EC:
{
    r7 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r0));
    r7 = (r7 + 48);
    MemoryInline::FlatWrite32((r3 + 12), r7);
    goto loc_8015C1AC;
}

loc_8015C104:
{
    r7 = (r9 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(1));
}

loc_8015C10C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015C17C;
    }
}

loc_8015C110:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8015C120;
    }
}

loc_8015C114:
{
}

loc_8015C118:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(0))) {
        goto loc_8015C198;
    }
}

loc_8015C11C:
{
    goto loc_8015C1AC;
}

loc_8015C120:
{
}

loc_8015C124:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(3))) {
        goto loc_8015C1AC;
    }
}

loc_8015C128:
{
    r7 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r9 = (static_cast<int32_t>(r7) >> 4);
    MemoryInline::FlatWrite32((r3 + 12), r7);
}

loc_8015C13C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(1))) {
        goto loc_8015C150;
    }
}

loc_8015C140:
{
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(16));
    r7 = (r7_rot_4 & 983040);
    r7 = (r7 + 4368);
    MemoryInline::FlatWrite32((r3 + 12), r7);
    goto loc_8015C1AC;
}

loc_8015C150:
{
}

loc_8015C154:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8015C16C;
    }
}

loc_8015C158:
{
    r7_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r7 = (r7_rot_5 & 3840);
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r6));
    r7 = (r7 + 272);
    MemoryInline::FlatWrite32((r3 + 12), r7);
    goto loc_8015C1AC;
}

loc_8015C16C:
{
    r7 = (r7 + 16);
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 12), r7);
    goto loc_8015C1AC;
}

loc_8015C17C:
{
    r7 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    r9 = MemoryInline::FlatRead32((r3 + 12));
    r7_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r7 = (r7_rot_6 & -256);
    r7 = (r9 + r7);
    MemoryInline::FlatWrite32((r3 + 12), r7);
    goto loc_8015C1AC;
}

loc_8015C198:
{
    r7 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    r9 = MemoryInline::FlatRead32((r3 + 12));
    r7 = (r9 + r7);
    MemoryInline::FlatWrite32((r3 + 12), r7);
}

loc_8015C1AC:
{
    r5_addic_src_4 = r5;
    r5 = (r5_addic_src_4 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_addic_src_4)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8015C1B0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015C1BC;
    }
}

loc_8015C1B4:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8015C2D4;
}

loc_8015C1BC:
{
    r7 = MemoryInline::FlatRead8((r3 + 16));
}

loc_8015C1C4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8015C0D4;
    }
}

loc_8015C1C8:
{
    r10 = MemoryInline::FlatRead32((r3 + 12));
    r5 = (r5 + -1);
    r12 = MemoryInline::FlatRead32((r3 + 4));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r10);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r9 = (static_cast<int32_t>(r10) >> 4);
    r7 = MemoryInline::FlatRead8(r4);
}

loc_8015C1E0:
{
    r7_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(8));
    r7_mrot_3 = (r7_rot_8 & 3840);
    r7_mdest_3 = (r7 & -3841);
    r7 = (r7_mdest_3 | r7_mrot_3);
    MemoryInline::FlatWrite32((r3 + 12), r9);
    r31 = (r7 + 1);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r11));
    if ((static_cast<int32_t>(r9) <= static_cast<int32_t>(r12))) {
        goto loc_8015C248;
    }
}

loc_8015C1F8:
{
    r7 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8015C200:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015C20C;
    }
}

loc_8015C204:
{
    r3 = -4;
    goto loc_8015C2D4;
}

loc_8015C20C:
{
    MemoryInline::FlatWrite32((r3 + 12), r12);
    goto loc_8015C248;
}

loc_8015C214:
{
    r9 = MemoryInline::FlatRead32(r3);
    r7 = (r9 - r31);
    r7 = MemoryInline::FlatRead8(r7);
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r7));
    r10 = MemoryInline::FlatRead32(r3);
    r9 = MemoryInline::FlatRead32((r3 + 4));
    r7 = MemoryInline::FlatRead32((r3 + 12));
    r10 = (r10 + 1);
    r9 = (r9 + -1);
    MemoryInline::FlatWrite32(r3, r10);
    r7 = (r7 + -1);
    MemoryInline::FlatWrite32((r3 + 4), r9);
    MemoryInline::FlatWrite32((r3 + 12), r7);
}

loc_8015C248:
{
    r7 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8015C250:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(0))) {
        goto loc_8015C214;
    }
}

loc_8015C254:
{
    r7 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8015C25C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8015C2B4;
    }
}

loc_8015C260:
{
    r9 = MemoryInline::FlatRead8((r3 + 17));
    r7 = MemoryInline::FlatRead8((r3 + 18));
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_3 & 254);
    r7 = (r7 + -1);
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r9));
    MemoryInline::FlatWrite8((r3 + 18), static_cast<uint8_t>(r7));
}

loc_8015C278:
{
    r7 = MemoryInline::FlatRead8((r3 + 18));
}

loc_8015C280:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8015C088;
    }
}

loc_8015C284:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8015C288:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015C294;
    }
}

loc_8015C28C:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8015C2D4;
}

loc_8015C294:
{
    r7 = MemoryInline::FlatRead8(r4);
    r5 = (r5 + -1);
    MemoryInline::FlatWrite8((r3 + 18), static_cast<uint8_t>(r8));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r7));
}

loc_8015C2A8:
{
    r7 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8015C2B0:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(0))) {
        goto loc_8015C278;
    }
}

loc_8015C2B4:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8015C2BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015C2D0;
    }
}

loc_8015C2C0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(32));
}

loc_8015C2C4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8015C2D0;
    }
}

loc_8015C2C8:
{
    r3 = -3;
    goto loc_8015C2D4;
}

loc_8015C2D0:
{
    r3 = 0;
}

loc_8015C2D4:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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

// RECOMP_GUEST_ABI gpr_read=0x80001FFB gpr_write=0x80001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8015BF24 func_8015BF24 preserves=true fpr_mask=0x00000000
