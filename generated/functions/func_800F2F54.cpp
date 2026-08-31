#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F2F54(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_10 = 0;
    uint32_t r27_rot_11 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r27_rot_3 = 0;
    uint32_t r27_rot_4 = 0;
    uint32_t r27_rot_5 = 0;
    uint32_t r27_rot_6 = 0;
    uint32_t r27_rot_7 = 0;
    uint32_t r27_rot_8 = 0;
    uint32_t r27_rot_9 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r28_addr_4 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_10 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r31_rot_3 = 0;
    uint32_t r31_rot_4 = 0;
    uint32_t r31_rot_5 = 0;
    uint32_t r31_rot_6 = 0;
    uint32_t r31_rot_7 = 0;
    uint32_t r31_rot_8 = 0;
    uint32_t r31_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint32_t r7_addr_5 = 0;
    uint32_t r7_addr_6 = 0;
    uint32_t r7_addr_7 = 0;
    uint32_t r7_addr_8 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint32_t r9_rot_6 = 0;
    uint32_t r9_rot_7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800F2F54;

loc_800F2F54:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(2));
}

loc_800F2F6C:
{
    r28 = r4;
    r29 = r6;
    r11 = 0;
    r30 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F2F98;
    }
}

loc_800F2F80:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800F2FA0;
    }
}

loc_800F2F84:
{
}

loc_800F2F88:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(1))) {
        goto loc_800F2F90;
    }
}

loc_800F2F8C:
{
    goto loc_800F2FA0;
}

loc_800F2F90:
{
    r10 = (r2 + -27452);
    goto loc_800F2FA4;
}

loc_800F2F98:
{
    r10 = (r2 + -27448);
    goto loc_800F2FA4;
}

loc_800F2FA0:
{
    r10 = (r2 + -27456);
}

loc_800F2FA4:
{
}

loc_800F2FA8:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(0))) {
        goto loc_800F2FC8;
    }
}

loc_800F2FAC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_800F2FB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F2FBC;
    }
}

loc_800F2FB4:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r6, r0);
}

loc_800F2FBC:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    goto loc_800F3260;
}

loc_800F2FC8:
{
    r12 = r3;
    r7 = (r1 + 8);
    r0 = 63;
    r8 = 62;
    goto loc_800F3178;
}

loc_800F2FDC:
{
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
}

loc_800F2FE4:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(48))) {
        goto loc_800F3010;
    }
}

loc_800F2FE8:
{
}

loc_800F2FEC:
{
    if ((static_cast<int32_t>(r27) > static_cast<int32_t>(57))) {
        goto loc_800F3010;
    }
}

loc_800F2FF0:
{
    r27_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(30));
    r27 = (r27_rot_2 & -1073741824);
    r31_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r31 = (r31_rot_2 & 1);
    r27 = (r27 - r31);
    r9 = (r9 + 4);
    r27_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r27 = (r27_rot_3 & -1);
    r27 = (r27 + r31);
    r7_addr_2 = (r7 + r27);
    MemoryInline::FlatWrite8(r7_addr_2, static_cast<uint8_t>(r9));
    goto loc_800F3110;
}

loc_800F3010:
{
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
}

loc_800F3018:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(97))) {
        goto loc_800F3044;
    }
}

loc_800F301C:
{
}

loc_800F3020:
{
    if ((static_cast<int32_t>(r27) > static_cast<int32_t>(122))) {
        goto loc_800F3044;
    }
}

loc_800F3024:
{
    r27_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(30));
    r27 = (r27_rot_4 & -1073741824);
    r31_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r31 = (r31_rot_3 & 1);
    r27 = (r27 - r31);
    r9 = (r9 + -71);
    r27_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r27 = (r27_rot_5 & -1);
    r27 = (r27 + r31);
    r7_addr_3 = (r7 + r27);
    MemoryInline::FlatWrite8(r7_addr_3, static_cast<uint8_t>(r9));
    goto loc_800F3110;
}

loc_800F3044:
{
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
}

loc_800F304C:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(65))) {
        goto loc_800F3078;
    }
}

loc_800F3050:
{
}

loc_800F3054:
{
    if ((static_cast<int32_t>(r27) > static_cast<int32_t>(90))) {
        goto loc_800F3078;
    }
}

loc_800F3058:
{
    r27_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(30));
    r27 = (r27_rot_6 & -1073741824);
    r31_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r31 = (r31_rot_4 & 1);
    r27 = (r27 - r31);
    r9 = (r9 + -65);
    r27_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r27 = (r27_rot_7 & -1);
    r27 = (r27 + r31);
    r7_addr_4 = (r7 + r27);
    MemoryInline::FlatWrite8(r7_addr_4, static_cast<uint8_t>(r9));
    goto loc_800F3110;
}

loc_800F3078:
{
    r31 = MemoryInline::FlatRead8(r10);
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
    r9 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
}

loc_800F3088:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(r27))) {
        goto loc_800F30A8;
    }
}

loc_800F308C:
{
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(30));
    r9 = (r9_rot_2 & -1073741824);
    r27_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r27 = (r27_rot_8 & 1);
    r9 = (r9 - r27);
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r9 = (r9_rot_3 & -1);
    r27 = (r9 + r27);
    r7_addr_5 = (r7 + r27);
    MemoryInline::FlatWrite8(r7_addr_5, static_cast<uint8_t>(r8));
    goto loc_800F3110;
}

loc_800F30A8:
{
    r9 = MemoryInline::FlatRead8((r10 + 1));
    r9 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
}

loc_800F30B4:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(r27))) {
        goto loc_800F30D4;
    }
}

loc_800F30B8:
{
    r9_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(30));
    r9 = (r9_rot_4 & -1073741824);
    r27_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r27 = (r27_rot_9 & 1);
    r9 = (r9 - r27);
    r9_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r9 = (r9_rot_5 & -1);
    r27 = (r9 + r27);
    r7_addr_6 = (r7 + r27);
    MemoryInline::FlatWrite8(r7_addr_6, static_cast<uint8_t>(r0));
    goto loc_800F3110;
}

loc_800F30D4:
{
    r3_addr_1 = (r3 + r11);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    r3 = MemoryInline::FlatRead8((r10 + 2));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_800F30E8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_800F3198;
    }
}

loc_800F30EC:
{
}

loc_800F30F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F3198;
    }
}

loc_800F30F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_800F30F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F3104;
    }
}

loc_800F30FC:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r6, r0);
}

loc_800F3104:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    goto loc_800F3260;
}

loc_800F3110:
{
}

loc_800F3114:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(3))) {
        goto loc_800F3170;
    }
}

loc_800F3118:
{
    r31 = MemoryInline::FlatRead8((r1 + 8));
    r9 = (r4 + r30);
    r27 = MemoryInline::FlatRead8((r1 + 9));
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
    r31_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r31 = (r31_rot_6 & -4);
    r27 = (static_cast<int32_t>(r27) >> 4);
    r27 = (r31 | r27);
    r4_addr_2 = (r4 + r30);
    MemoryInline::FlatWrite8(r4_addr_2, static_cast<uint8_t>(r27));
    r30 = (r30 + 3);
    r27 = MemoryInline::FlatRead8((r1 + 10));
    r31 = MemoryInline::FlatRead8((r1 + 9));
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
    r31_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(4));
    r31 = (r31_rot_7 & 240);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r27);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r27 = (static_cast<int32_t>(r27) >> 2);
    r27 = (r31 | r27);
    MemoryInline::FlatWrite8((r9 + 1), static_cast<uint8_t>(r27));
    r31 = MemoryInline::FlatRead8((r1 + 10));
    r27 = MemoryInline::FlatRead8((r1 + 11));
    r31_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(6));
    r31 = (r31_rot_8 & 192);
    r27 = (r31 | r27);
    MemoryInline::FlatWrite8((r9 + 2), static_cast<uint8_t>(r27));
}

loc_800F3170:
{
    r11 = (r11 + 1);
    r12 = (r12 + 1);
}

loc_800F3178:
{
}

loc_800F317C:
{
    if ((static_cast<int32_t>(r11) >= static_cast<int32_t>(r5))) {
        goto loc_800F3198;
    }
}

loc_800F3180:
{
    r9 = MemoryInline::FlatRead8(r12);
    r27 = MemoryInline::FlatRead8((r10 + 2));
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
    r27 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
}

loc_800F3194:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(r31))) {
        goto loc_800F2FDC;
    }
}

loc_800F3198:
{
}

loc_800F319C:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_800F3254;
    }
}

loc_800F31A0:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(30));
    r0 = (r0_rot_1 & -1073741824);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 - r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -1);
    r31 = (r0 + r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F3254;
    }
}

loc_800F31B8:
{
    r4 = MemoryInline::FlatRead8((r10 + 2));
    r3 = (r1 + 8);
    r3 = (r3 + r31);
    r5 = (4 - r31);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(4) >= static_cast<uint32_t>(r31) ? 1u : 0u) << 29);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    ctx->lr = 0x800F31D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F31D4:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(2))) {
        goto loc_800F31F8;
    }
}

loc_800F31D8:
{
    r3 = MemoryInline::FlatRead8((r1 + 8));
    r0 = MemoryInline::FlatRead8((r1 + 9));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & -4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 4);
    r0 = (r3 | r0);
    r28_addr_1 = (r28 + r30);
    MemoryInline::FlatWrite8(r28_addr_1, static_cast<uint8_t>(r0));
}

loc_800F31F8:
{
}

loc_800F31FC:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(3))) {
        goto loc_800F3220;
    }
}

loc_800F3200:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
    r3 = (r28 + r30);
    r4 = MemoryInline::FlatRead8((r1 + 9));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r4 = (r4_rot_1 & 240);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 2);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
}

loc_800F3220:
{
}

loc_800F3224:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(4))) {
        goto loc_800F3240;
    }
}

loc_800F3228:
{
    r4 = MemoryInline::FlatRead8((r1 + 10));
    r3 = (r28 + r30);
    r0 = MemoryInline::FlatRead8((r1 + 11));
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(6));
    r4 = (r4_rot_3 & 192);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
}

loc_800F3240:
{
}

loc_800F3244:
{
    r0 = (r30 + 1);
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(3))) {
        goto loc_800F3250;
    }
}

loc_800F324C:
{
    r0 = (r30 + 2);
}

loc_800F3250:
{
    r30 = r0;
}

loc_800F3254:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_800F3258:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F3260;
    }
}

loc_800F325C:
{
    MemoryInline::FlatWrite32(r29, r30);
}

loc_800F3260:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF8001FFF gpr_write=0xF8001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800F2F54 func_800F2F54 preserves=true fpr_mask=0x00000000
