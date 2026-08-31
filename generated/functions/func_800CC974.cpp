#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CC974(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r7_ca_0 = 0;
    uint32_t r7_ca_1 = 0;
    uint32_t r7_ca_2 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;

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

    goto loc_800CC974;

loc_800CC974:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = (r4 & 3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800CC97C:
{
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CC990;
    }
}

loc_800CC988:
{
    r3 = -1;
    goto loc_800CCB3C;
}

loc_800CC990:
{
    r8 = r3;
    r7 = 0;
    ctr = r4;
}

loc_800CC9A0:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_800CC9BC;
    }
}

loc_800CC9A4:
{
    r0 = MemoryInline::FlatRead8(r8);
}

loc_800CC9AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(42))) {
        goto loc_800CC9B4;
    }
}

loc_800CC9B0:
{
    r7 = (r7 + 6);
}

loc_800CC9B4:
{
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800CC9A4;
    }
}

loc_800CC9BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800CC9C0:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r7) >> 3);
    r7_ca_1 = (xer >> 29) & 1u;
    r7 = (r0 + r7_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0)) + static_cast<uint64_t>(static_cast<uint32_t>(0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r7_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CC9D4;
    }
}

loc_800CC9CC:
{
    r3 = r7;
    goto loc_800CCB3C;
}

loc_800CC9D4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r7));
}

loc_800CC9D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CC9E4;
    }
}

loc_800CC9DC:
{
    r3 = -1;
    goto loc_800CCB3C;
}

loc_800CC9E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800CC9E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CC9FC;
    }
}

loc_800CC9EC:
{
    r0 = 0;
    r3 = 0;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    goto loc_800CCB3C;
}

loc_800CC9FC:
{
    r4 = r5;
    r10 = 0;
    r11 = 63;
    r12 = 62;
    r0 = 4;
}

loc_800CCA10:
{
    r6 = r3;
    r9 = (r1 + 8);
    r30 = 0;
    ctr = r0;
}

loc_800CCA20:
{
    r31 = MemoryInline::FlatRead8(r6);
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
}

loc_800CCA2C:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(65))) {
        goto loc_800CCA44;
    }
}

loc_800CCA30:
{
}

loc_800CCA34:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(90))) {
        goto loc_800CCA44;
    }
}

loc_800CCA38:
{
    r8 = (r31 + -65);
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r8));
    goto loc_800CCAAC;
}

loc_800CCA44:
{
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
}

loc_800CCA4C:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(97))) {
        goto loc_800CCA64;
    }
}

loc_800CCA50:
{
}

loc_800CCA54:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(122))) {
        goto loc_800CCA64;
    }
}

loc_800CCA58:
{
    r8 = (r31 + -71);
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r8));
    goto loc_800CCAAC;
}

loc_800CCA64:
{
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
}

loc_800CCA6C:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(48))) {
        goto loc_800CCA84;
    }
}

loc_800CCA70:
{
}

loc_800CCA74:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(57))) {
        goto loc_800CCA84;
    }
}

loc_800CCA78:
{
    r8 = (r31 + 4);
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r8));
    goto loc_800CCAAC;
}

loc_800CCA84:
{
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
}

loc_800CCA8C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(46))) {
        goto loc_800CCA98;
    }
}

loc_800CCA90:
{
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r12));
    goto loc_800CCAAC;
}

loc_800CCA98:
{
}

loc_800CCA9C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(45))) {
        goto loc_800CCAA8;
    }
}

loc_800CCAA0:
{
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r11));
    goto loc_800CCAAC;
}

loc_800CCAA8:
{
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r10));
}

loc_800CCAAC:
{
    r9 = (r9 + 1);
    r30 = (r30 + 1);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800CCA20;
    }
}

loc_800CCABC:
{
    r9 = MemoryInline::FlatRead8((r1 + 8));
    r6 = (r4 + 1);
    r8 = MemoryInline::FlatRead8((r1 + 9));
    r31 = (r6 - r5);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
    r3 = (r3 + 4);
    r9 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r7));
}

loc_800CCADC:
{
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r8 = (r8_rot_2 & -4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r9);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r6 = (static_cast<int32_t>(r9) >> 4);
    r6 = (r8 | r6);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r6));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CCB38;
    }
}

loc_800CCAF0:
{
    r8 = MemoryInline::FlatRead8((r1 + 10));
    r6 = (r4 + 2);
    r31 = (r6 - r5);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(4));
    r9 = (r9_rot_2 & -16);
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r8);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r6 = (static_cast<int32_t>(r8) >> 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r7));
}

loc_800CCB0C:
{
    r6 = (r9 | r6);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r6));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CCB38;
    }
}

loc_800CCB18:
{
    r6 = MemoryInline::FlatRead8((r1 + 11));
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(6));
    r8 = (r8_rot_3 & -64);
    r6 = (r8 | r6);
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r6));
    r4 = (r4 + 3);
    r31 = (r4 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r7));
}

loc_800CCB34:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800CCA10;
    }
}

loc_800CCB38:
{
    r3 = r31;
}

loc_800CCB3C:
{
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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

// RECOMP_GUEST_ABI gpr_read=0xC0001FFB gpr_write=0xC0001FDB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800CC974 func_800CC974 preserves=true fpr_mask=0x00000000
