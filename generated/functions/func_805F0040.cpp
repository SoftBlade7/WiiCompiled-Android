#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805F0040(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;

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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805F0040;

loc_805F0040:
{
    r11 = MemoryInline::FlatRead32((r3 + 60));
    r0 = MemoryInline::FlatRead8((r11 + 13));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805F004C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_805F0050:
{
    r4 = MemoryInline::FlatRead32((r11 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 112));
    r0 = (r0 & r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805F0060:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F0088;
    }
}

loc_805F0064:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_805F0068:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F00A0;
    }
}

loc_805F006C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_805F0070:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F00B8;
    }
}

loc_805F0074:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(8));
}

loc_805F0078:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F00D0;
    }
}

loc_805F007C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(16));
}

loc_805F0080:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F00E8;
    }
}

loc_805F0084:
{
    goto loc_805F0100;
}

loc_805F0088:
{
    r4 = MemoryInline::FlatRead32((r3 + 124));
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 120), r0);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 124), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_805F00A0:
{
    r4 = MemoryInline::FlatRead32((r3 + 124));
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 120), r0);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 124), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_805F00B8:
{
    r4 = MemoryInline::FlatRead32((r3 + 124));
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 120), r0);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 124), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_805F00D0:
{
    r4 = MemoryInline::FlatRead32((r3 + 124));
    r0 = 4;
    MemoryInline::FlatWrite32((r3 + 120), r0);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 124), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_805F00E8:
{
    r4 = MemoryInline::FlatRead32((r3 + 124));
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 120), r0);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 124), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_805F0100:
{
    r4 = 5;
    r10 = MemoryInline::FlatRead32((r3 + 112));
    r0 = 0;
    r9 = 0;
    r6 = 0;
    r5 = 1;
    ctr = r4;
}

loc_805F011C:
{
    r8 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r9));
    r7 = (r10 & r8);
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_805F0148;
    }
}

loc_805F0128:
{
    r7 = MemoryInline::FlatRead32((r11 + 4));
    r7 = (r8 & r7);
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_805F0148;
    }
}

loc_805F0134:
{
    r7 = (r11 + r6);
    r7 = MemoryInline::FlatRead32((r7 + 84));
}

loc_805F0140:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r3))) {
        goto loc_805F0148;
    }
}

loc_805F0144:
{
    r0 = (r0 | r8);
}

loc_805F0148:
{
    r9 = (r9 + 1);
    r6 = (r6 + 92);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805F011C;
    }
}

loc_805F0154:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805F0158:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F0170;
    }
}

loc_805F015C:
{
    r4 = 5;
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 120), r4);
    MemoryInline::FlatWrite32((r3 + 124), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_805F0170:
{
    r6 = MemoryInline::FlatRead32((r3 + 120));
}

loc_805F0178:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(5))) {
        goto loc_805F01E8;
    }
}

loc_805F017C:
{
    r4 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805F0180:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F0190;
    }
}

loc_805F0184:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 120), r0);
    goto loc_805F01DC;
}

loc_805F0190:
{
    r4 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805F0194:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F01A4;
    }
}

loc_805F0198:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 120), r0);
    goto loc_805F01DC;
}

loc_805F01A4:
{
    r4 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805F01A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F01B8;
    }
}

loc_805F01AC:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 120), r0);
    goto loc_805F01DC;
}

loc_805F01B8:
{
    r4 = (r0 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805F01BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F01CC;
    }
}

loc_805F01C0:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r3 + 120), r0);
    goto loc_805F01DC;
}

loc_805F01CC:
{
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805F01D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F01DC;
    }
}

loc_805F01D4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 120), r0);
}

loc_805F01DC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 124), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_805F01E8:
{
}

loc_805F01EC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(1))) {
        goto loc_805F0214;
    }
}

loc_805F01F0:
{
}

loc_805F01F4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(2))) {
        goto loc_805F021C;
    }
}

loc_805F01F8:
{
}

loc_805F01FC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(3))) {
        goto loc_805F0224;
    }
}

loc_805F0200:
{
}

loc_805F0204:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(4))) {
        goto loc_805F022C;
    }
}

loc_805F0208:
{
}

loc_805F020C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_805F0234;
    }
}

loc_805F0210:
{
    goto loc_805F0238;
}

loc_805F0214:
{
    r4 = 0;
    goto loc_805F0238;
}

loc_805F021C:
{
    r4 = 1;
    goto loc_805F0238;
}

loc_805F0224:
{
    r4 = 2;
    goto loc_805F0238;
}

loc_805F022C:
{
    r4 = 3;
    goto loc_805F0238;
}

loc_805F0234:
{
    r4 = 4;
}

loc_805F0238:
{
    r6 = 1;
    r7 = 0;
    r6 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r4));
    r6 = (r0 & r6);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_805F0268;
    }
}

loc_805F024C:
{
    r6 = MemoryInline::FlatRead32((r3 + 124));
    r6 = (r6 + 1);
    MemoryInline::FlatWrite32((r3 + 124), r6);
}

loc_805F025C:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(20))) {
        goto loc_805F026C;
    }
}

loc_805F0260:
{
    r7 = 1;
    goto loc_805F026C;
}

loc_805F0268:
{
    r7 = 1;
}

loc_805F026C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_805F0270:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_805F0274:
{
    r6 = 1717960704;
    r10 = (r4 + 1);
    r9 = (r6 + 26215);
    r7 = 1;
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r9)) * static_cast<int64_t>(static_cast<int32_t>(r10))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r6);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r6 = (static_cast<int32_t>(r6) >> 1);
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r8 = (r8_rot_0 & 1);
    r6 = (r6 + r8);
    r6 = (r6 * 5);
    r8 = (r10 - r6);
    r6 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r8));
    r6 = (r0 & r6);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_805F02B0;
    }
}

loc_805F02A8:
{
    r5 = r8;
    goto loc_805F036C;
}

loc_805F02B0:
{
    r10 = (r4 + 2);
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r9)) * static_cast<int64_t>(static_cast<int32_t>(r10))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r6);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r6 = (static_cast<int32_t>(r6) >> 1);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r8 = (r8_rot_1 & 1);
    r6 = (r6 + r8);
    r6 = (r6 * 5);
    r8 = (r10 - r6);
    r6 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r8));
    r6 = (r0 & r6);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_805F02E0;
    }
}

loc_805F02D8:
{
    r5 = r8;
    goto loc_805F036C;
}

loc_805F02E0:
{
    r10 = (r4 + 3);
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r9)) * static_cast<int64_t>(static_cast<int32_t>(r10))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r6);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r6 = (static_cast<int32_t>(r6) >> 1);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r8 = (r8_rot_2 & 1);
    r6 = (r6 + r8);
    r6 = (r6 * 5);
    r8 = (r10 - r6);
    r6 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r8));
    r6 = (r0 & r6);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_805F0310;
    }
}

loc_805F0308:
{
    r5 = r8;
    goto loc_805F036C;
}

loc_805F0310:
{
    r10 = (r4 + 4);
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r9)) * static_cast<int64_t>(static_cast<int32_t>(r10))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r6);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r6 = (static_cast<int32_t>(r6) >> 1);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r8 = (r8_rot_3 & 1);
    r6 = (r6 + r8);
    r6 = (r6 * 5);
    r8 = (r10 - r6);
    r6 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r8));
    r6 = (r0 & r6);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_805F0340;
    }
}

loc_805F0338:
{
    r5 = r8;
    goto loc_805F036C;
}

loc_805F0340:
{
    r10 = (r4 + 5);
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r9)) * static_cast<int64_t>(static_cast<int32_t>(r10))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r6);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r6 = (static_cast<int32_t>(r6) >> 1);
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r8 = (r8_rot_4 & 1);
    r6 = (r6 + r8);
    r6 = (r6 * 5);
    r8 = (r10 - r6);
    r6 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r8));
    r6 = (r0 & r6);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_805F036C;
    }
}

loc_805F0368:
{
    r5 = r8;
}

loc_805F036C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_805F0370:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F0398;
    }
}

loc_805F0374:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(1));
}

loc_805F0378:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F03A4;
    }
}

loc_805F037C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(2));
}

loc_805F0380:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F03B0;
    }
}

loc_805F0384:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(3));
}

loc_805F0388:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F03BC;
    }
}

loc_805F038C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(4));
}

loc_805F0390:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F03C8;
    }
}

loc_805F0394:
{
    goto loc_805F03D0;
}

loc_805F0398:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 120), r0);
    goto loc_805F03D0;
}

loc_805F03A4:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 120), r0);
    goto loc_805F03D0;
}

loc_805F03B0:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 120), r0);
    goto loc_805F03D0;
}

loc_805F03BC:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r3 + 120), r0);
    goto loc_805F03D0;
}

loc_805F03C8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 120), r0);
}

loc_805F03D0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 124), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
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
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000FF1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x805F0040 func_805F0040 preserves=true fpr_mask=0x00000000
