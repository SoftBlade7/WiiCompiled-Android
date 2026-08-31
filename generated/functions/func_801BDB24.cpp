#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801BDB24(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r11_rot_4 = 0;
    uint32_t r11_rot_5 = 0;
    uint32_t r11_rot_6 = 0;
    uint32_t r11_rot_7 = 0;
    uint32_t r11_rot_8 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r28_rot_3 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r29_rot_3 = 0;
    uint32_t r29_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_10 = 0;
    uint32_t r6_rot_11 = 0;
    uint32_t r6_rot_12 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r6_rot_8 = 0;
    uint32_t r6_rot_9 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801BDB24;

loc_801BDB24:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r6 = MemoryInline::FlatRead32((r3 + 2232));
    r8 = MemoryInline::FlatRead8((r3 + 2242));
}

loc_801BDB44:
{
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(2))) {
        goto loc_801BDD58;
    }
}

loc_801BDB48:
{
    r0 = MemoryInline::FlatRead8((r4 + 41));
    r8 = MemoryInline::FlatRead16(r4);
    r7 = MemoryInline::FlatRead16(r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r6 = (r7 - r8);
    r0 = (r8 - r7);
    r0 = (r6 | r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801BE6B4;
    }
}

loc_801BDB6C:
{
    r6 = MemoryInline::FlatRead8((r5 + 41));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801BE6B4;
    }
}

loc_801BDB78:
{
    r7 = MemoryInline::FlatRead16((r5 + 4));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r6 = MemoryInline::FlatRead16((r4 + 4));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r10 = (r6 - r7);
    if ((static_cast<int32_t>(r10) >= static_cast<int32_t>(0))) {
        goto loc_801BDB8C;
    }
}

loc_801BDB88:
{
    r10 = (r7 - r6);
}

loc_801BDB8C:
{
    r9 = MemoryInline::FlatRead16((r5 + 2));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r6 = (r10 ^ 12);
    r8 = MemoryInline::FlatRead16((r4 + 2));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r7 = (static_cast<int32_t>(r6) >> 1);
    r6 = (r6 & r10);
    r6 = (r7 - r6);
    r11 = (r8 - r9);
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r10 = (r10_rot_1 & 1);
    if ((static_cast<int32_t>(r11) >= static_cast<int32_t>(0))) {
        goto loc_801BDBB4;
    }
}

loc_801BDBB0:
{
    r11 = (r9 - r8);
}

loc_801BDBB4:
{
    r9 = MemoryInline::FlatRead16((r5 + 6));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r6 = (r11 ^ 12);
    r8 = MemoryInline::FlatRead16((r4 + 6));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r7 = (static_cast<int32_t>(r6) >> 1);
    r6 = (r6 & r11);
    r6 = (r7 - r6);
    r11 = (r8 - r9);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_1 & 1);
    if ((static_cast<int32_t>(r11) >= static_cast<int32_t>(0))) {
        goto loc_801BDBDC;
    }
}

loc_801BDBD8:
{
    r11 = (r9 - r8);
}

loc_801BDBDC:
{
    r7 = (r11 ^ 12);
    r6 = (r6 | r10);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r8 = (static_cast<int32_t>(r7) >> 1);
    r7 = (r7 & r11);
    r7 = (r8 - r7);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_1 & 1);
    r6 = (r7 | r6);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801BDC30;
    }
}

loc_801BDBFC:
{
    r6 = MemoryInline::FlatRead16((r3 + 2300));
    r6 = (r6 + 1);
    MemoryInline::FlatWrite16((r3 + 2300), static_cast<uint16_t>(r6));
    r7 = (r6 & 65535);
    r6 = MemoryInline::FlatRead16((r13 + -28472));
}

loc_801BDC14:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(r6))) {
        goto loc_801BDC74;
    }
}

loc_801BDC18:
{
    r6 = 0;
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r3 + 2300), static_cast<uint16_t>(r6));
    r0 = (r0 & 255);
    MemoryInline::FlatWrite16((r3 + 2302), static_cast<uint16_t>(r6));
    goto loc_801BDC74;
}

loc_801BDC30:
{
    r6 = MemoryInline::FlatRead16((r3 + 2302));
    r7 = MemoryInline::FlatRead16((r13 + -28468));
    r8 = (r6 + 1);
    r6 = PPC_Divw(static_cast<int32_t>(r8), static_cast<int32_t>(r7));
    r6 = (r6 * r7);
    r6 = (r8 - r6);
    MemoryInline::FlatWrite16((r3 + 2302), static_cast<uint16_t>(r6));
    r7 = (r6 & 65535);
    r6 = MemoryInline::FlatRead16((r13 + -28468));
    r6 = (r6 + -1);
}

loc_801BDC5C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r6))) {
        goto loc_801BDC74;
    }
}

loc_801BDC60:
{
    r6 = MemoryInline::FlatRead16((r3 + 2300));
}

loc_801BDC68:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801BDC74;
    }
}

loc_801BDC6C:
{
    r6 = (r6 + -1);
    MemoryInline::FlatWrite16((r3 + 2300), static_cast<uint16_t>(r6));
}

loc_801BDC74:
{
    r6 = 4;
    r9 = 0;
    ctr = r6;
}

loc_801BDC80:
{
    r7 = MemoryInline::FlatRead16((r5 + 10));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r6 = MemoryInline::FlatRead16((r4 + 10));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r11 = (r6 - r7);
    if ((static_cast<int32_t>(r11) >= static_cast<int32_t>(0))) {
        goto loc_801BDC94;
    }
}

loc_801BDC90:
{
    r11 = (r7 - r6);
}

loc_801BDC94:
{
    r10 = MemoryInline::FlatRead16((r5 + 8));
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    r6 = (r11 ^ 2);
    r8 = MemoryInline::FlatRead16((r4 + 8));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r7 = (static_cast<int32_t>(r6) >> 1);
    r6 = (r6 & r11);
    r6 = (r7 - r6);
    r12 = (r8 - r10);
    r11_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r11 = (r11_rot_2 & 1);
    if ((static_cast<int32_t>(r12) >= static_cast<int32_t>(0))) {
        goto loc_801BDCBC;
    }
}

loc_801BDCB8:
{
    r12 = (r10 - r8);
}

loc_801BDCBC:
{
    r6 = (r12 ^ 2);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r6);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r7 = (static_cast<int32_t>(r6) >> 1);
    r6 = (r6 & r12);
    r6 = (r7 - r6);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_3 & 1);
    r6 = (r6 | r11);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801BDD04;
    }
}

loc_801BDCD8:
{
    r6 = MemoryInline::FlatRead16((r3 + 2296));
    r6 = (r6 + 1);
    MemoryInline::FlatWrite16((r3 + 2296), static_cast<uint16_t>(r6));
    r7 = (r6 & 65535);
    r6 = MemoryInline::FlatRead16((r13 + -28470));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r6));
}

loc_801BDCF0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801BDD48;
    }
}

loc_801BDCF4:
{
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r3 + 2296), static_cast<uint16_t>(r9));
    r0 = (r0 & 255);
    goto loc_801BDD48;
}

loc_801BDD04:
{
    r6 = MemoryInline::FlatRead16((r3 + 2298));
    r7 = MemoryInline::FlatRead16((r13 + -28466));
    r8 = (r6 + 1);
    r6 = PPC_Divw(static_cast<int32_t>(r8), static_cast<int32_t>(r7));
    r6 = (r6 * r7);
    r6 = (r8 - r6);
    MemoryInline::FlatWrite16((r3 + 2298), static_cast<uint16_t>(r6));
    r7 = (r6 & 65535);
    r6 = MemoryInline::FlatRead16((r13 + -28466));
    r6 = (r6 + -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r6));
}

loc_801BDD30:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801BDD48;
    }
}

loc_801BDD34:
{
    r6 = MemoryInline::FlatRead16((r3 + 2296));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_801BDD3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801BDD48;
    }
}

loc_801BDD40:
{
    r6 = (r6 + -1);
    MemoryInline::FlatWrite16((r3 + 2296), static_cast<uint16_t>(r6));
}

loc_801BDD48:
{
    r5 = (r5 + 8);
    r4 = (r4 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801BDC80;
    }
}

loc_801BDD54:
{
    goto loc_801BE6B4;
}

loc_801BDD58:
{
    r0 = (r6 + -3);
}

loc_801BDD60:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_801BE0E0;
    }
}

loc_801BDD64:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 50u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 41u, (r4 + 41));
    r6 = r4;
    r10 = MemoryInline::ReadResolved16(guest_range_1, 0u, r4);
    r7 = r5;
    guest_range_3 = MemoryInline::ResolveRangeHost(r5, 0, 50u, true, false);
    r9 = MemoryInline::ReadResolved16(guest_range_3, 0u, r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r8 = (r9 - r10);
    r0 = (r10 - r9);
    r0 = (r8 | r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801BE6B4;
    }
}

loc_801BDD90:
{
    r8 = MemoryInline::ReadResolved8(guest_range_3, 41u, (r5 + 41));
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801BE6B4;
    }
}

loc_801BDD9C:
{
    r9 = MemoryInline::ReadResolved16(guest_range_3, 4u, (r5 + 4));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r8 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r4 + 4));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r12 = (r8 - r9);
    if ((static_cast<int32_t>(r12) >= static_cast<int32_t>(0))) {
        goto loc_801BDDB0;
    }
}

loc_801BDDAC:
{
    r12 = (r9 - r8);
}

loc_801BDDB0:
{
    r11 = MemoryInline::ReadResolved16(guest_range_3, 2u, (r5 + 2));
    r11 = (r11 << 16);
    r11 = (static_cast<int32_t>(r11) >> 16);
    r8 = (r12 ^ 12);
    r10 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r4 + 2));
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    r9 = (static_cast<int32_t>(r8) >> 1);
    r8 = (r8 & r12);
    r8 = (r9 - r8);
    r28 = (r10 - r11);
    r12_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r12 = (r12_rot_1 & 1);
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(0))) {
        goto loc_801BDDD8;
    }
}

loc_801BDDD4:
{
    r28 = (r11 - r10);
}

loc_801BDDD8:
{
    r11 = MemoryInline::ReadResolved16(guest_range_3, 6u, (r5 + 6));
    r11 = (r11 << 16);
    r11 = (static_cast<int32_t>(r11) >> 16);
    r8 = (r28 ^ 12);
    r10 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r4 + 6));
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    r9 = (static_cast<int32_t>(r8) >> 1);
    r8 = (r8 & r28);
    r8 = (r9 - r8);
    r28 = (r10 - r11);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_1 & 1);
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(0))) {
        goto loc_801BDE00;
    }
}

loc_801BDDFC:
{
    r28 = (r11 - r10);
}

loc_801BDE00:
{
    r9 = (r28 ^ 12);
    r8 = (r8 | r12);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r9);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r10 = (static_cast<int32_t>(r9) >> 1);
    r9 = (r9 & r28);
    r9 = (r10 - r9);
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_1 & 1);
    r8 = (r9 | r8);
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_801BDE54;
    }
}

loc_801BDE20:
{
    r8 = MemoryInline::FlatRead16((r3 + 2300));
    r8 = (r8 + 1);
    MemoryInline::FlatWrite16((r3 + 2300), static_cast<uint16_t>(r8));
    r9 = (r8 & 65535);
    r8 = MemoryInline::FlatRead16((r13 + -28472));
}

loc_801BDE38:
{
    if ((static_cast<uint32_t>(r9) <= static_cast<uint32_t>(r8))) {
        goto loc_801BDE98;
    }
}

loc_801BDE3C:
{
    r8 = 0;
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r3 + 2300), static_cast<uint16_t>(r8));
    r0 = (r0 & 255);
    MemoryInline::FlatWrite16((r3 + 2302), static_cast<uint16_t>(r8));
    goto loc_801BDE98;
}

loc_801BDE54:
{
    r8 = MemoryInline::FlatRead16((r3 + 2302));
    r9 = MemoryInline::FlatRead16((r13 + -28468));
    r10 = (r8 + 1);
    r8 = PPC_Divw(static_cast<int32_t>(r10), static_cast<int32_t>(r9));
    r8 = (r8 * r9);
    r8 = (r10 - r8);
    MemoryInline::FlatWrite16((r3 + 2302), static_cast<uint16_t>(r8));
    r9 = (r8 & 65535);
    r8 = MemoryInline::FlatRead16((r13 + -28468));
    r8 = (r8 + -1);
}

loc_801BDE80:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(r8))) {
        goto loc_801BDE98;
    }
}

loc_801BDE84:
{
    r8 = MemoryInline::FlatRead16((r3 + 2300));
}

loc_801BDE8C:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_801BDE98;
    }
}

loc_801BDE90:
{
    r8 = (r8 + -1);
    MemoryInline::FlatWrite16((r3 + 2300), static_cast<uint16_t>(r8));
}

loc_801BDE98:
{
    r8 = 4;
    r11 = 0;
    ctr = r8;
}

loc_801BDEA4:
{
    r9 = MemoryInline::FlatRead16((r7 + 10));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r8 = MemoryInline::FlatRead16((r6 + 10));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r28 = (r8 - r9);
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(0))) {
        goto loc_801BDEB8;
    }
}

loc_801BDEB4:
{
    r28 = (r9 - r8);
}

loc_801BDEB8:
{
    r12 = MemoryInline::FlatRead16((r7 + 8));
    r12 = (r12 << 16);
    r12 = (static_cast<int32_t>(r12) >> 16);
    r8 = (r28 ^ 2);
    r10 = MemoryInline::FlatRead16((r6 + 8));
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    r9 = (static_cast<int32_t>(r8) >> 1);
    r8 = (r8 & r28);
    r8 = (r9 - r8);
    r28 = (r10 - r12);
    r29_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r29 = (r29_rot_2 & 1);
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(0))) {
        goto loc_801BDEE0;
    }
}

loc_801BDEDC:
{
    r28 = (r12 - r10);
}

loc_801BDEE0:
{
    r8 = (r28 ^ 2);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r8);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r9 = (static_cast<int32_t>(r8) >> 1);
    r8 = (r8 & r28);
    r8 = (r9 - r8);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_3 & 1);
    r8 = (r8 | r29);
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_801BDF28;
    }
}

loc_801BDEFC:
{
    r8 = MemoryInline::FlatRead16((r3 + 2296));
    r8 = (r8 + 1);
    MemoryInline::FlatWrite16((r3 + 2296), static_cast<uint16_t>(r8));
    r9 = (r8 & 65535);
    r8 = MemoryInline::FlatRead16((r13 + -28470));
}

loc_801BDF14:
{
    if ((static_cast<uint32_t>(r9) <= static_cast<uint32_t>(r8))) {
        goto loc_801BDF6C;
    }
}

loc_801BDF18:
{
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r3 + 2296), static_cast<uint16_t>(r11));
    r0 = (r0 & 255);
    goto loc_801BDF6C;
}

loc_801BDF28:
{
    r8 = MemoryInline::FlatRead16((r3 + 2298));
    r9 = MemoryInline::FlatRead16((r13 + -28466));
    r10 = (r8 + 1);
    r8 = PPC_Divw(static_cast<int32_t>(r10), static_cast<int32_t>(r9));
    r8 = (r8 * r9);
    r8 = (r10 - r8);
    MemoryInline::FlatWrite16((r3 + 2298), static_cast<uint16_t>(r8));
    r9 = (r8 & 65535);
    r8 = MemoryInline::FlatRead16((r13 + -28466));
    r8 = (r8 + -1);
}

loc_801BDF54:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(r8))) {
        goto loc_801BDF6C;
    }
}

loc_801BDF58:
{
    r8 = MemoryInline::FlatRead16((r3 + 2296));
}

loc_801BDF60:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_801BDF6C;
    }
}

loc_801BDF64:
{
    r8 = (r8 + -1);
    MemoryInline::FlatWrite16((r3 + 2296), static_cast<uint16_t>(r8));
}

loc_801BDF6C:
{
    r7 = (r7 + 8);
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801BDEA4;
    }
}

loc_801BDF78:
{
    r7 = MemoryInline::ReadResolved16(guest_range_3, 44u, (r5 + 44));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r6 = MemoryInline::ReadResolved16(guest_range_1, 44u, (r4 + 44));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r10 = (r6 - r7);
    if ((static_cast<int32_t>(r10) >= static_cast<int32_t>(0))) {
        goto loc_801BDF8C;
    }
}

loc_801BDF88:
{
    r10 = (r7 - r6);
}

loc_801BDF8C:
{
    r9 = MemoryInline::ReadResolved16(guest_range_3, 42u, (r5 + 42));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r6 = (r10 ^ 12);
    r8 = MemoryInline::ReadResolved16(guest_range_1, 42u, (r4 + 42));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r7 = (static_cast<int32_t>(r6) >> 1);
    r6 = (r6 & r10);
    r6 = (r7 - r6);
    r11 = (r8 - r9);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r10 = (r10_rot_2 & 1);
    if ((static_cast<int32_t>(r11) >= static_cast<int32_t>(0))) {
        goto loc_801BDFB4;
    }
}

loc_801BDFB0:
{
    r11 = (r9 - r8);
}

loc_801BDFB4:
{
    r9 = MemoryInline::ReadResolved16(guest_range_3, 46u, (r5 + 46));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r6 = (r11 ^ 12);
    r8 = MemoryInline::ReadResolved16(guest_range_1, 46u, (r4 + 46));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r7 = (static_cast<int32_t>(r6) >> 1);
    r6 = (r6 & r11);
    r6 = (r7 - r6);
    r11 = (r8 - r9);
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_4 & 1);
    if ((static_cast<int32_t>(r11) >= static_cast<int32_t>(0))) {
        goto loc_801BDFDC;
    }
}

loc_801BDFD8:
{
    r11 = (r9 - r8);
}

loc_801BDFDC:
{
    r7 = (r11 ^ 12);
    r6 = (r6 | r10);
    r8 = (static_cast<int32_t>(r7) >> 1);
    r7 = (r7 & r11);
    r7 = (r8 - r7);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_2 & 1);
    r6 = (r7 | r6);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801BE030;
    }
}

loc_801BDFFC:
{
    r6 = MemoryInline::FlatRead16((r3 + 2304));
    r6 = (r6 + 1);
    MemoryInline::FlatWrite16((r3 + 2304), static_cast<uint16_t>(r6));
    r7 = (r6 & 65535);
    r6 = MemoryInline::FlatRead16((r13 + -28472));
}

loc_801BE014:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(r6))) {
        goto loc_801BE074;
    }
}

loc_801BE018:
{
    r6 = 0;
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r3 + 2304), static_cast<uint16_t>(r6));
    r0 = (r0 & 255);
    MemoryInline::FlatWrite16((r3 + 2306), static_cast<uint16_t>(r6));
    goto loc_801BE074;
}

loc_801BE030:
{
    r6 = MemoryInline::FlatRead16((r3 + 2306));
    r7 = MemoryInline::FlatRead16((r13 + -28468));
    r8 = (r6 + 1);
    r6 = PPC_Divw(static_cast<int32_t>(r8), static_cast<int32_t>(r7));
    r6 = (r6 * r7);
    r6 = (r8 - r6);
    MemoryInline::FlatWrite16((r3 + 2306), static_cast<uint16_t>(r6));
    r7 = (r6 & 65535);
    r6 = MemoryInline::FlatRead16((r13 + -28468));
    r6 = (r6 + -1);
}

loc_801BE05C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r6))) {
        goto loc_801BE074;
    }
}

loc_801BE060:
{
    r6 = MemoryInline::FlatRead16((r3 + 2304));
}

loc_801BE068:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801BE074;
    }
}

loc_801BE06C:
{
    r6 = (r6 + -1);
    MemoryInline::FlatWrite16((r3 + 2304), static_cast<uint16_t>(r6));
}

loc_801BE074:
{
    r6 = MemoryInline::ReadResolved8(guest_range_3, 48u, (r5 + 48));
    r3 = MemoryInline::ReadResolved8(guest_range_1, 48u, (r4 + 48));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r7 = (r3 - r6);
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(0))) {
        goto loc_801BE090;
    }
}

loc_801BE08C:
{
    r7 = (r6 - r3);
}

loc_801BE090:
{
    r6 = MemoryInline::ReadResolved8(guest_range_3, 49u, (r5 + 49));
    r3 = (r7 ^ 1);
    r5 = MemoryInline::ReadResolved8(guest_range_1, 49u, (r4 + 49));
    r4 = (static_cast<int32_t>(r3) >> 1);
    r3 = (r3 & r7);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r3 = (r4 - r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r7 = (r5 - r6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
    r0 = (r0 | r3);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801BE0C4;
    }
}

loc_801BE0C0:
{
    r7 = (r6 - r5);
}

loc_801BE0C4:
{
    r3 = (r7 ^ 1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r3) >> 1);
    r3 = (r3 & r7);
    r3 = (r4 - r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r0 = (r0 | r3);
    goto loc_801BE6B4;
}

loc_801BE0E0:
{
    r0 = (r6 + -6);
}

loc_801BE0E8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_801BE4A8;
    }
}

loc_801BE0EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(2));
}

loc_801BE0F0:
{
    r6 = r4;
    r7 = r5;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801BE138;
    }
}

loc_801BE0FC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801BE10C;
    }
}

loc_801BE100:
{
}

loc_801BE104:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(1))) {
        goto loc_801BE118;
    }
}

loc_801BE108:
{
    goto loc_801BE138;
}

loc_801BE10C:
{
}

loc_801BE110:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(4))) {
        goto loc_801BE138;
    }
}

loc_801BE114:
{
    goto loc_801BE128;
}

loc_801BE118:
{
    r8 = 16;
    r9 = 32;
    r10 = 8;
    goto loc_801BE144;
}

loc_801BE128:
{
    r8 = 4;
    r9 = 4;
    r10 = 1;
    goto loc_801BE144;
}

loc_801BE138:
{
    r8 = 1;
    r9 = 1;
    r10 = 1;
}

loc_801BE144:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 54u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 41u, (r4 + 41));
    r30 = MemoryInline::ReadResolved16(guest_range_0, 0u, r4);
    guest_range_2 = MemoryInline::ResolveRangeHost(r5, 0, 54u, true, false);
    r12 = MemoryInline::ReadResolved16(guest_range_2, 0u, r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r11 = (r12 - r30);
    r0 = (r30 - r12);
    r0 = (r11 | r0);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801BE6B4;
    }
}

loc_801BE168:
{
    r11 = MemoryInline::ReadResolved8(guest_range_2, 41u, (r5 + 41));
    r11 = (static_cast<int32_t>(static_cast<int8_t>(r11)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r11), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801BE6B4;
    }
}

loc_801BE174:
{
    r12 = MemoryInline::ReadResolved16(guest_range_2, 4u, (r5 + 4));
    r12 = (r12 << 16);
    r12 = (static_cast<int32_t>(r12) >> 16);
    r11 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r4 + 4));
    r11 = (r11 << 16);
    r11 = (static_cast<int32_t>(r11) >> 16);
    r28 = (r11 - r12);
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(0))) {
        goto loc_801BE188;
    }
}

loc_801BE184:
{
    r28 = (r12 - r11);
}

loc_801BE188:
{
    r31 = MemoryInline::ReadResolved16(guest_range_2, 2u, (r5 + 2));
    r31 = (r31 << 16);
    r31 = (static_cast<int32_t>(r31) >> 16);
    r11 = (r28 ^ 12);
    r30 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r4 + 2));
    r30 = (r30 << 16);
    r30 = (static_cast<int32_t>(r30) >> 16);
    r12 = (static_cast<int32_t>(r11) >> 1);
    r11 = (r11 & r28);
    r11 = (r12 - r11);
    r28 = (r30 - r31);
    r29_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r29 = (r29_rot_3 & 1);
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(0))) {
        goto loc_801BE1B0;
    }
}

loc_801BE1AC:
{
    r28 = (r31 - r30);
}

loc_801BE1B0:
{
    r31 = MemoryInline::ReadResolved16(guest_range_2, 6u, (r5 + 6));
    r31 = (r31 << 16);
    r31 = (static_cast<int32_t>(r31) >> 16);
    r11 = (r28 ^ 12);
    r30 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r4 + 6));
    r30 = (r30 << 16);
    r30 = (static_cast<int32_t>(r30) >> 16);
    r12 = (static_cast<int32_t>(r11) >> 1);
    r11 = (r11 & r28);
    r11 = (r12 - r11);
    r28 = (r30 - r31);
    r11_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r11 = (r11_rot_3 & 1);
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(0))) {
        goto loc_801BE1D8;
    }
}

loc_801BE1D4:
{
    r28 = (r31 - r30);
}

loc_801BE1D8:
{
    r12 = (r28 ^ 12);
    r11 = (r11 | r29);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r12);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r30 = (static_cast<int32_t>(r12) >> 1);
    r12 = (r12 & r28);
    r12 = (r30 - r12);
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(1));
    r12 = (r12_rot_2 & 1);
    r11 = (r12 | r11);
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_801BE22C;
    }
}

loc_801BE1F8:
{
    r11 = MemoryInline::FlatRead16((r3 + 2300));
    r11 = (r11 + 1);
    MemoryInline::FlatWrite16((r3 + 2300), static_cast<uint16_t>(r11));
    r12 = (r11 & 65535);
    r11 = MemoryInline::FlatRead16((r13 + -28472));
}

loc_801BE210:
{
    if ((static_cast<uint32_t>(r12) <= static_cast<uint32_t>(r11))) {
        goto loc_801BE270;
    }
}

loc_801BE214:
{
    r11 = 0;
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r3 + 2300), static_cast<uint16_t>(r11));
    r0 = (r0 & 255);
    MemoryInline::FlatWrite16((r3 + 2302), static_cast<uint16_t>(r11));
    goto loc_801BE270;
}

loc_801BE22C:
{
    r11 = MemoryInline::FlatRead16((r3 + 2302));
    r12 = MemoryInline::FlatRead16((r13 + -28468));
    r30 = (r11 + 1);
    r11 = PPC_Divw(static_cast<int32_t>(r30), static_cast<int32_t>(r12));
    r11 = (r11 * r12);
    r11 = (r30 - r11);
    MemoryInline::FlatWrite16((r3 + 2302), static_cast<uint16_t>(r11));
    r12 = (r11 & 65535);
    r11 = MemoryInline::FlatRead16((r13 + -28468));
    r11 = (r11 + -1);
}

loc_801BE258:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(r11))) {
        goto loc_801BE270;
    }
}

loc_801BE25C:
{
    r11 = MemoryInline::FlatRead16((r3 + 2300));
}

loc_801BE264:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_801BE270;
    }
}

loc_801BE268:
{
    r11 = (r11 + -1);
    MemoryInline::FlatWrite16((r3 + 2300), static_cast<uint16_t>(r11));
}

loc_801BE270:
{
    r11 = 4;
    r30 = 0;
    ctr = r11;
}

loc_801BE27C:
{
    r12 = MemoryInline::FlatRead16((r7 + 10));
    r12 = (r12 << 16);
    r12 = (static_cast<int32_t>(r12) >> 16);
    r11 = MemoryInline::FlatRead16((r6 + 10));
    r11 = (r11 << 16);
    r11 = (static_cast<int32_t>(r11) >> 16);
    r28 = (r11 - r12);
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(0))) {
        goto loc_801BE290;
    }
}

loc_801BE28C:
{
    r28 = (r12 - r11);
}

loc_801BE290:
{
    r29 = MemoryInline::FlatRead16((r7 + 8));
    r29 = (r29 << 16);
    r29 = (static_cast<int32_t>(r29) >> 16);
    r11 = (r28 ^ 2);
    r31 = MemoryInline::FlatRead16((r6 + 8));
    r31 = (r31 << 16);
    r31 = (static_cast<int32_t>(r31) >> 16);
    r12 = (static_cast<int32_t>(r11) >> 1);
    r11 = (r11 & r28);
    r11 = (r12 - r11);
    r27 = (r31 - r29);
    r28_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r28 = (r28_rot_2 & 1);
    if ((static_cast<int32_t>(r27) >= static_cast<int32_t>(0))) {
        goto loc_801BE2B8;
    }
}

loc_801BE2B4:
{
    r27 = (r29 - r31);
}

loc_801BE2B8:
{
    r11 = (r27 ^ 2);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r11);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r12 = (static_cast<int32_t>(r11) >> 1);
    r11 = (r11 & r27);
    r11 = (r12 - r11);
    r11_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r11 = (r11_rot_5 & 1);
    r11 = (r11 | r28);
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_801BE300;
    }
}

loc_801BE2D4:
{
    r11 = MemoryInline::FlatRead16((r3 + 2296));
    r11 = (r11 + 1);
    MemoryInline::FlatWrite16((r3 + 2296), static_cast<uint16_t>(r11));
    r12 = (r11 & 65535);
    r11 = MemoryInline::FlatRead16((r13 + -28470));
}

loc_801BE2EC:
{
    if ((static_cast<uint32_t>(r12) <= static_cast<uint32_t>(r11))) {
        goto loc_801BE344;
    }
}

loc_801BE2F0:
{
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r3 + 2296), static_cast<uint16_t>(r30));
    r0 = (r0 & 255);
    goto loc_801BE344;
}

loc_801BE300:
{
    r11 = MemoryInline::FlatRead16((r3 + 2298));
    r12 = MemoryInline::FlatRead16((r13 + -28466));
    r31 = (r11 + 1);
    r11 = PPC_Divw(static_cast<int32_t>(r31), static_cast<int32_t>(r12));
    r11 = (r11 * r12);
    r11 = (r31 - r11);
    MemoryInline::FlatWrite16((r3 + 2298), static_cast<uint16_t>(r11));
    r12 = (r11 & 65535);
    r11 = MemoryInline::FlatRead16((r13 + -28466));
    r11 = (r11 + -1);
}

loc_801BE32C:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(r11))) {
        goto loc_801BE344;
    }
}

loc_801BE330:
{
    r11 = MemoryInline::FlatRead16((r3 + 2296));
}

loc_801BE338:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_801BE344;
    }
}

loc_801BE33C:
{
    r11 = (r11 + -1);
    MemoryInline::FlatWrite16((r3 + 2296), static_cast<uint16_t>(r11));
}

loc_801BE344:
{
    r7 = (r7 + 8);
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801BE27C;
    }
}

loc_801BE350:
{
    r6 = MemoryInline::ReadResolved16(guest_range_2, 44u, (r5 + 44));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r11 = MemoryInline::ReadResolved16(guest_range_0, 42u, (r4 + 42));
    r12 = PPC_Divw(static_cast<int32_t>(r6), static_cast<int32_t>(r8));
    r6 = MemoryInline::ReadResolved16(guest_range_2, 42u, (r5 + 42));
    r3 = MemoryInline::ReadResolved16(guest_range_0, 44u, (r4 + 44));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r7 = (r6 - r11);
    r6 = (r11 - r6);
    r6 = (r7 | r6);
    r7 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r8));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    r0 = (r0 | r3);
    r27 = (r7 - r12);
    if ((static_cast<int32_t>(r27) >= static_cast<int32_t>(0))) {
        goto loc_801BE388;
    }
}

loc_801BE384:
{
    r27 = (r12 - r7);
}

loc_801BE388:
{
    r6 = MemoryInline::ReadResolved16(guest_range_2, 46u, (r5 + 46));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r11 = (r27 ^ 1);
    r3 = MemoryInline::ReadResolved16(guest_range_0, 46u, (r4 + 46));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r7 = (static_cast<int32_t>(r11) >> 1);
    r12 = PPC_Divw(static_cast<int32_t>(r6), static_cast<int32_t>(r8));
    r6 = (r11 & r27);
    r6 = (r7 - r6);
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_5 & 1);
    r0 = (r0 | r6);
    r3 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r8));
    r27 = (r3 - r12);
    if ((static_cast<int32_t>(r27) >= static_cast<int32_t>(0))) {
        goto loc_801BE3BC;
    }
}

loc_801BE3B8:
{
    r27 = (r12 - r3);
}

loc_801BE3BC:
{
    r6 = MemoryInline::ReadResolved16(guest_range_2, 48u, (r5 + 48));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r8 = (r27 ^ 1);
    r3 = MemoryInline::ReadResolved16(guest_range_0, 48u, (r4 + 48));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r7 = (static_cast<int32_t>(r8) >> 1);
    r11 = PPC_Divw(static_cast<int32_t>(r6), static_cast<int32_t>(r9));
    r6 = (r8 & r27);
    r6 = (r7 - r6);
    r6_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_6 & 1);
    r0 = (r0 | r6);
    r3 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r9));
    r12 = (r3 - r11);
    if ((static_cast<int32_t>(r12) >= static_cast<int32_t>(0))) {
        goto loc_801BE3F0;
    }
}

loc_801BE3EC:
{
    r12 = (r11 - r3);
}

loc_801BE3F0:
{
    r6 = MemoryInline::ReadResolved16(guest_range_2, 50u, (r5 + 50));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r8 = (r12 ^ 1);
    r3 = MemoryInline::ReadResolved16(guest_range_0, 50u, (r4 + 50));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r7 = (static_cast<int32_t>(r8) >> 1);
    r11 = PPC_Divw(static_cast<int32_t>(r6), static_cast<int32_t>(r9));
    r6 = (r8 & r12);
    r6 = (r7 - r6);
    r6_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_7 & 1);
    r0 = (r0 | r6);
    r3 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r9));
    r12 = (r3 - r11);
    if ((static_cast<int32_t>(r12) >= static_cast<int32_t>(0))) {
        goto loc_801BE424;
    }
}

loc_801BE420:
{
    r12 = (r11 - r3);
}

loc_801BE424:
{
    r6 = MemoryInline::ReadResolved8(guest_range_2, 52u, (r5 + 52));
    r8 = (r12 ^ 1);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 52u, (r4 + 52));
    r7 = (static_cast<int32_t>(r8) >> 1);
    r9 = PPC_Divw(static_cast<int32_t>(r6), static_cast<int32_t>(r10));
    r6 = (r8 & r12);
    r6 = (r7 - r6);
    r6_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_8 & 1);
    r0 = (r0 | r6);
    r3 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r10));
    r8 = (r3 - r9);
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(0))) {
        goto loc_801BE458;
    }
}

loc_801BE454:
{
    r8 = (r9 - r3);
}

loc_801BE458:
{
    r5 = MemoryInline::ReadResolved8(guest_range_2, 53u, (r5 + 53));
    r7 = (r8 ^ 1);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 53u, (r4 + 53));
    r6 = (static_cast<int32_t>(r7) >> 1);
    r5 = PPC_Divw(static_cast<int32_t>(r5), static_cast<int32_t>(r10));
    r4 = (r7 & r8);
    r4 = (r6 - r4);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r0 = (r0 | r4);
    r3 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r10));
    r6 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801BE48C;
    }
}

loc_801BE488:
{
    r6 = (r5 - r3);
}

loc_801BE48C:
{
    r3 = (r6 ^ 1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r3) >> 1);
    r3 = (r3 & r6);
    r3 = (r4 - r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    r0 = (r0 | r3);
    goto loc_801BE6B4;
}

loc_801BE4A8:
{
    r0 = MemoryInline::FlatRead8((r4 + 41));
    r8 = MemoryInline::FlatRead16(r4);
    r7 = MemoryInline::FlatRead16(r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r6 = (r7 - r8);
    r0 = (r8 - r7);
    r0 = (r6 | r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801BE6B4;
    }
}

loc_801BE4CC:
{
    r6 = MemoryInline::FlatRead8((r5 + 41));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801BE6B4;
    }
}

loc_801BE4D8:
{
    r7 = MemoryInline::FlatRead16((r5 + 4));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r6 = MemoryInline::FlatRead16((r4 + 4));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r10 = (r6 - r7);
    if ((static_cast<int32_t>(r10) >= static_cast<int32_t>(0))) {
        goto loc_801BE4EC;
    }
}

loc_801BE4E8:
{
    r10 = (r7 - r6);
}

loc_801BE4EC:
{
    r9 = MemoryInline::FlatRead16((r5 + 2));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r6 = (r10 ^ 12);
    r8 = MemoryInline::FlatRead16((r4 + 2));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r7 = (static_cast<int32_t>(r6) >> 1);
    r6 = (r6 & r10);
    r6 = (r7 - r6);
    r11 = (r8 - r9);
    r10_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r10 = (r10_rot_3 & 1);
    if ((static_cast<int32_t>(r11) >= static_cast<int32_t>(0))) {
        goto loc_801BE514;
    }
}

loc_801BE510:
{
    r11 = (r9 - r8);
}

loc_801BE514:
{
    r9 = MemoryInline::FlatRead16((r5 + 6));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r6 = (r11 ^ 12);
    r8 = MemoryInline::FlatRead16((r4 + 6));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r7 = (static_cast<int32_t>(r6) >> 1);
    r6 = (r6 & r11);
    r6 = (r7 - r6);
    r11 = (r8 - r9);
    r6_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_9 & 1);
    if ((static_cast<int32_t>(r11) >= static_cast<int32_t>(0))) {
        goto loc_801BE53C;
    }
}

loc_801BE538:
{
    r11 = (r9 - r8);
}

loc_801BE53C:
{
    r7 = (r11 ^ 12);
    r6 = (r6 | r10);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r8 = (static_cast<int32_t>(r7) >> 1);
    r7 = (r7 & r11);
    r7 = (r8 - r7);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_3 & 1);
    r6 = (r7 | r6);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801BE590;
    }
}

loc_801BE55C:
{
    r6 = MemoryInline::FlatRead16((r3 + 2300));
    r6 = (r6 + 1);
    MemoryInline::FlatWrite16((r3 + 2300), static_cast<uint16_t>(r6));
    r7 = (r6 & 65535);
    r6 = MemoryInline::FlatRead16((r13 + -28472));
}

loc_801BE574:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(r6))) {
        goto loc_801BE5D4;
    }
}

loc_801BE578:
{
    r6 = 0;
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r3 + 2300), static_cast<uint16_t>(r6));
    r0 = (r0 & 255);
    MemoryInline::FlatWrite16((r3 + 2302), static_cast<uint16_t>(r6));
    goto loc_801BE5D4;
}

loc_801BE590:
{
    r6 = MemoryInline::FlatRead16((r3 + 2302));
    r7 = MemoryInline::FlatRead16((r13 + -28468));
    r8 = (r6 + 1);
    r6 = PPC_Divw(static_cast<int32_t>(r8), static_cast<int32_t>(r7));
    r6 = (r6 * r7);
    r6 = (r8 - r6);
    MemoryInline::FlatWrite16((r3 + 2302), static_cast<uint16_t>(r6));
    r7 = (r6 & 65535);
    r6 = MemoryInline::FlatRead16((r13 + -28468));
    r6 = (r6 + -1);
}

loc_801BE5BC:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r6))) {
        goto loc_801BE5D4;
    }
}

loc_801BE5C0:
{
    r6 = MemoryInline::FlatRead16((r3 + 2300));
}

loc_801BE5C8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801BE5D4;
    }
}

loc_801BE5CC:
{
    r6 = (r6 + -1);
    MemoryInline::FlatWrite16((r3 + 2300), static_cast<uint16_t>(r6));
}

loc_801BE5D4:
{
    r6 = 4;
    r9 = 0;
    ctr = r6;
}

loc_801BE5E0:
{
    r7 = MemoryInline::FlatRead16((r5 + 10));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r6 = MemoryInline::FlatRead16((r4 + 10));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r11 = (r6 - r7);
    if ((static_cast<int32_t>(r11) >= static_cast<int32_t>(0))) {
        goto loc_801BE5F4;
    }
}

loc_801BE5F0:
{
    r11 = (r7 - r6);
}

loc_801BE5F4:
{
    r10 = MemoryInline::FlatRead16((r5 + 8));
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    r6 = (r11 ^ 2);
    r8 = MemoryInline::FlatRead16((r4 + 8));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r7 = (static_cast<int32_t>(r6) >> 1);
    r6 = (r6 & r11);
    r6 = (r7 - r6);
    r12 = (r8 - r10);
    r11_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r11 = (r11_rot_7 & 1);
    if ((static_cast<int32_t>(r12) >= static_cast<int32_t>(0))) {
        goto loc_801BE61C;
    }
}

loc_801BE618:
{
    r12 = (r10 - r8);
}

loc_801BE61C:
{
    r6 = (r12 ^ 2);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r6);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r7 = (static_cast<int32_t>(r6) >> 1);
    r6 = (r6 & r12);
    r6 = (r7 - r6);
    r6_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_11 & 1);
    r6 = (r6 | r11);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801BE664;
    }
}

loc_801BE638:
{
    r6 = MemoryInline::FlatRead16((r3 + 2296));
    r6 = (r6 + 1);
    MemoryInline::FlatWrite16((r3 + 2296), static_cast<uint16_t>(r6));
    r7 = (r6 & 65535);
    r6 = MemoryInline::FlatRead16((r13 + -28470));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r6));
}

loc_801BE650:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801BE6A8;
    }
}

loc_801BE654:
{
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r3 + 2296), static_cast<uint16_t>(r9));
    r0 = (r0 & 255);
    goto loc_801BE6A8;
}

loc_801BE664:
{
    r6 = MemoryInline::FlatRead16((r3 + 2298));
    r7 = MemoryInline::FlatRead16((r13 + -28466));
    r8 = (r6 + 1);
    r6 = PPC_Divw(static_cast<int32_t>(r8), static_cast<int32_t>(r7));
    r6 = (r6 * r7);
    r6 = (r8 - r6);
    MemoryInline::FlatWrite16((r3 + 2298), static_cast<uint16_t>(r6));
    r7 = (r6 & 65535);
    r6 = MemoryInline::FlatRead16((r13 + -28466));
    r6 = (r6 + -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r6));
}

loc_801BE690:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801BE6A8;
    }
}

loc_801BE694:
{
    r6 = MemoryInline::FlatRead16((r3 + 2296));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_801BE69C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801BE6A8;
    }
}

loc_801BE6A0:
{
    r6 = (r6 + -1);
    MemoryInline::FlatWrite16((r3 + 2296), static_cast<uint16_t>(r6));
}

loc_801BE6A8:
{
    r5 = (r5 + 8);
    r4 = (r4 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801BE5E0;
    }
}

loc_801BE6B4:
{
    r11 = (r1 + 32);
    r3 = (r0 & 255);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF8003FFB gpr_write=0xF8001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801BDB24 func_801BDB24 preserves=true fpr_mask=0x00000000
