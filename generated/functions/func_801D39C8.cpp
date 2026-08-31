#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801D39C8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;

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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801D39C8;

loc_801D39C8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
}

loc_801D39D0:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801D39E4;
    }
}

loc_801D39DC:
{
    r0 = -1;
    MemoryInline::FlatWrite32(r6, r0);
}

loc_801D39E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r5));
}

loc_801D39E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D3BAC;
    }
}

loc_801D39EC:
{
}

loc_801D39F0:
{
    r10 = -1;
    r30 = 0;
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(1024))) {
        goto loc_801D3A08;
    }
}

loc_801D39FC:
{
    r31 = r4;
    r12 = 0;
    goto loc_801D3A64;
}

loc_801D3A08:
{
    r0 = (r4 + -1024);
    r12 = MemoryInline::FlatRead32((r3 + 52));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(9) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r8 = (static_cast<int32_t>(r0) >> 9);
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_801D3A5C;
    }
}

loc_801D3A18:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
}

loc_801D3A1C:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801D3A50;
    }
}

loc_801D3A24:
{
    r12 = MemoryInline::FlatRead32(r12);
    r12 = MemoryInline::FlatRead32(r12);
    r12 = MemoryInline::FlatRead32(r12);
    r12 = MemoryInline::FlatRead32(r12);
    r12 = MemoryInline::FlatRead32(r12);
    r12 = MemoryInline::FlatRead32(r12);
    r12 = MemoryInline::FlatRead32(r12);
    r12 = MemoryInline::FlatRead32(r12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D3A24;
    }
}

loc_801D3A48:
{
    r8 = (r8 & 7);
}

loc_801D3A4C:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_801D3A5C;
    }
}

loc_801D3A50:
{
    ctr = r8;
}

loc_801D3A54:
{
    r12 = MemoryInline::FlatRead32(r12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D3A54;
    }
}

loc_801D3A5C:
{
    r0 = (r4 + -1024);
    r31 = (r0 & 511);
}

loc_801D3A64:
{
    r0 = (r5 - r4);
    r8 = 1;
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r5));
}

loc_801D3A74:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D3BAC;
    }
}

loc_801D3A78:
{
}

loc_801D3A7C:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_801D3AA8;
    }
}

loc_801D3A80:
{
}

loc_801D3A84:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(1024))) {
        goto loc_801D3A9C;
    }
}

loc_801D3A88:
{
    r9 = (r3 + r31);
    r31 = (r31 + 1);
    r0 = MemoryInline::FlatRead8((r9 + 56));
    r11 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    goto loc_801D3AC4;
}

loc_801D3A9C:
{
    r12 = MemoryInline::FlatRead32((r3 + 52));
    r31 = 0;
    goto loc_801D3AB8;
}

loc_801D3AA8:
{
}

loc_801D3AAC:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(512))) {
        goto loc_801D3AB8;
    }
}

loc_801D3AB0:
{
    r31 = 0;
    r12 = MemoryInline::FlatRead32(r12);
}

loc_801D3AB8:
{
    r9 = (r12 + r31);
    r31 = (r31 + 1);
    r11 = MemoryInline::FlatRead8((r9 + 4));
}

loc_801D3AC4:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r11)));
}

loc_801D3ACC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(58))) {
        goto loc_801D3AE8;
    }
}

loc_801D3AD0:
{
}

loc_801D3AD4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801D3AE8;
    }
}

loc_801D3AD8:
{
    r0 = MemoryInline::FlatRead32(r6);
}

loc_801D3AE0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_801D3AE8;
    }
}

loc_801D3AE4:
{
    MemoryInline::FlatWrite32(r6, r4);
}

loc_801D3AE8:
{
}

loc_801D3AEC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_801D3B30;
    }
}

loc_801D3AF0:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r11)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_801D3AF8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D3B28;
    }
}

loc_801D3AFC:
{
    r3 = (r5 + -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_801D3B04:
{
    r5 = (r4 - r3);
    r0 = (r4 + 1);
    r3 = (r3 - r4);
    r3 = ~(r5 | r3);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r3) >> 31);
    r10 = (r0 & ~r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D3B28;
    }
}

loc_801D3B20:
{
    r0 = 2;
    MemoryInline::FlatWrite32(r7, r0);
}

loc_801D3B28:
{
    r3 = r10;
    goto loc_801D3BB0;
}

loc_801D3B30:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r11)));
}

loc_801D3B38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_801D3B68;
    }
}

loc_801D3B3C:
{
    r9 = (r5 + -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_801D3B44:
{
    r10 = (r4 - r9);
    r0 = (r4 + 1);
    r9 = (r9 - r4);
    r30 = 1;
    r9 = ~(r10 | r9);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r9);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r9 = (static_cast<int32_t>(r9) >> 31);
    r10 = (r0 & ~r9);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D3B68;
    }
}

loc_801D3B64:
{
    MemoryInline::FlatWrite32(r7, r8);
}

loc_801D3B68:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r11)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_801D3B70:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D3BA4;
    }
}

loc_801D3B74:
{
    r3 = (r5 + -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_801D3B7C:
{
    r5 = (r4 - r3);
    r0 = (r4 + 1);
    r3 = (r3 - r4);
    r3 = ~(r5 | r3);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r3) >> 31);
    r3 = (r0 & ~r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D3BB0;
    }
}

loc_801D3B98:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r7, r0);
    goto loc_801D3BB0;
}

loc_801D3BA4:
{
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801D3A78;
    }
}

loc_801D3BAC:
{
    r3 = -1;
}

loc_801D3BB0:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0001FFB gpr_write=0xC0001F3B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801D39C8 func_801D39C8 preserves=true fpr_mask=0x00000000
