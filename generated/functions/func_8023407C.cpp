#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023407C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r27_rot_0 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_10 = 0;
    uint32_t r8_addr_11 = 0;
    uint32_t r8_addr_12 = 0;
    uint32_t r8_addr_13 = 0;
    uint32_t r8_addr_14 = 0;
    uint32_t r8_addr_15 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_3 = 0;
    uint32_t r8_addr_4 = 0;
    uint32_t r8_addr_5 = 0;
    uint32_t r8_addr_6 = 0;
    uint32_t r8_addr_7 = 0;
    uint32_t r8_addr_8 = 0;
    uint32_t r8_addr_9 = 0;

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
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8023407C;

loc_8023407C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r3 = (r3_rot_0 & -8);
    r0 = 4;
    r9 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r27);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r28_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r28 = (r28_rot_0 & -4);
    r31 = (r6 * 6);
    r27_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r27 = (r27_rot_0 & -2);
    r29 = (r28 - r6);
    r30 = (r28 + r6);
    r12 = (r3 - r6);
    r10 = 0;
    ctr = r0;
}

loc_802340B0:
{
    r5_addr_2 = (r5 + r9);
    r11 = MemoryInline::FlatRead8(r5_addr_2);
    r8 = (r5 + r9);
    r3 = (r4 + r10);
    r9 = (r9 + 1);
    r0 = (r11 + -128);
    r4_addr_2 = (r4 + r10);
    MemoryInline::FlatWrite32(r4_addr_2, r0);
    r10 = (r10 + 4);
    r8_addr_2 = (r8 + r6);
    r11 = MemoryInline::FlatRead8(r8_addr_2);
    r0 = (r11 + -128);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    r8_addr_3 = (r8 + r27);
    r11 = MemoryInline::FlatRead8(r8_addr_3);
    r0 = (r11 + -128);
    MemoryInline::FlatWrite32((r3 + 64), r0);
    r8_addr_4 = (r8 + r29);
    r11 = MemoryInline::FlatRead8(r8_addr_4);
    r0 = (r11 + -128);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    r8_addr_5 = (r8 + r28);
    r11 = MemoryInline::FlatRead8(r8_addr_5);
    r0 = (r11 + -128);
    MemoryInline::FlatWrite32((r3 + 128), r0);
    r8_addr_6 = (r8 + r30);
    r11 = MemoryInline::FlatRead8(r8_addr_6);
    r0 = (r11 + -128);
    MemoryInline::FlatWrite32((r3 + 160), r0);
    r8_addr_7 = (r8 + r31);
    r11 = MemoryInline::FlatRead8(r8_addr_7);
    r0 = (r11 + -128);
    MemoryInline::FlatWrite32((r3 + 192), r0);
    r8_addr_8 = (r8 + r12);
    r11 = MemoryInline::FlatRead8(r8_addr_8);
    r8 = (r5 + r9);
    r0 = (r11 + -128);
    MemoryInline::FlatWrite32((r3 + 224), r0);
    r3 = (r4 + r10);
    r5_addr_3 = (r5 + r9);
    r11 = MemoryInline::FlatRead8(r5_addr_3);
    r9 = (r9 + 1);
    r0 = (r11 + -128);
    r4_addr_3 = (r4 + r10);
    MemoryInline::FlatWrite32(r4_addr_3, r0);
    r10 = (r10 + 4);
    r8_addr_9 = (r8 + r6);
    r11 = MemoryInline::FlatRead8(r8_addr_9);
    r0 = (r11 + -128);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    r8_addr_10 = (r8 + r27);
    r11 = MemoryInline::FlatRead8(r8_addr_10);
    r0 = (r11 + -128);
    MemoryInline::FlatWrite32((r3 + 64), r0);
    r8_addr_11 = (r8 + r29);
    r11 = MemoryInline::FlatRead8(r8_addr_11);
    r0 = (r11 + -128);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    r8_addr_12 = (r8 + r28);
    r11 = MemoryInline::FlatRead8(r8_addr_12);
    r0 = (r11 + -128);
    MemoryInline::FlatWrite32((r3 + 128), r0);
    r8_addr_13 = (r8 + r30);
    r11 = MemoryInline::FlatRead8(r8_addr_13);
    r0 = (r11 + -128);
    MemoryInline::FlatWrite32((r3 + 160), r0);
    r8_addr_14 = (r8 + r31);
    r11 = MemoryInline::FlatRead8(r8_addr_14);
    r0 = (r11 + -128);
    MemoryInline::FlatWrite32((r3 + 192), r0);
    r8_addr_15 = (r8 + r12);
    r11 = MemoryInline::FlatRead8(r8_addr_15);
    r0 = (r11 + -128);
    MemoryInline::FlatWrite32((r3 + 224), r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802340B0;
    }
}

loc_80234194:
{
    r0 = 8;
    r3 = r4;
    ctr = r0;
}

loc_802341A0:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r5 = MemoryInline::FlatRead32(r3);
    r6 = MemoryInline::FlatRead32((r3 + 24));
    r28 = (r5 + r0);
    r8 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r5 - r0);
    r9 = MemoryInline::FlatRead32((r3 + 20));
    r5 = (r8 - r6);
    r10 = MemoryInline::FlatRead32((r3 + 8));
    r11 = MemoryInline::FlatRead32((r3 + 16));
    r8 = (r8 + r6);
    r12 = MemoryInline::FlatRead32((r3 + 12));
    r30 = (r10 - r9);
    r27 = (r5 + r0);
    r9 = (r10 + r9);
    r29 = (r12 + r11);
    r6 = (r12 - r11);
    r5 = (r30 + r5);
    r12 = (r8 + r9);
    r10 = (r6 + r30);
    r31 = (r28 - r29);
    r30 = (r8 - r9);
    r11 = (r28 + r29);
    r8 = (r30 + r31);
    r6 = (r10 - r27);
    r9 = (r11 + r12);
    MemoryInline::FlatWrite32(r3, r9);
    r9 = (r11 - r12);
    r8 = (r8 * 181);
    MemoryInline::FlatWrite32((r3 + 16), r9);
    r11 = (static_cast<int32_t>(r8) >> 8);
    r8 = (r6 * 98);
    r6 = (r31 + r11);
    MemoryInline::FlatWrite32((r3 + 8), r6);
    r9 = (r31 - r11);
    MemoryInline::FlatWrite32((r3 + 24), r9);
    r6 = (r10 * 139);
    r9 = (static_cast<int32_t>(r8) >> 8);
    r8 = (static_cast<int32_t>(r6) >> 8);
    r6 = (r27 * 334);
    r8 = (r9 + r8);
    r6 = (static_cast<int32_t>(r6) >> 8);
    r5 = (r5 * 181);
    r6 = (r9 + r6);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r5);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r5 = (static_cast<int32_t>(r5) >> 8);
    r10 = (r0 - r5);
    r9 = (r0 + r5);
    r0 = (r10 + r8);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    r0 = (r10 - r8);
    r5 = (r9 + r6);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r0 = (r9 - r6);
    MemoryInline::FlatWrite32((r3 + 4), r5);
    MemoryInline::FlatWrite32((r3 + 28), r0);
    r3 = (r3 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802341A0;
    }
}

loc_80234284:
{
    r0 = 8;
    r3 = r4;
    ctr = r0;
}

loc_80234290:
{
    r0 = MemoryInline::FlatRead32((r3 + 224));
    r5 = MemoryInline::FlatRead32(r3);
    r6 = MemoryInline::FlatRead32((r3 + 192));
    r8 = MemoryInline::FlatRead32((r3 + 32));
    r27 = (r5 + r0);
    r28 = (r5 - r0);
    r9 = MemoryInline::FlatRead32((r3 + 160));
    r5 = (r8 - r6);
    r10 = MemoryInline::FlatRead32((r3 + 64));
    r11 = MemoryInline::FlatRead32((r3 + 128));
    r8 = (r8 + r6);
    r12 = MemoryInline::FlatRead32((r3 + 96));
    r29 = (r10 - r9);
    r9 = (r10 + r9);
    r0 = (r5 + r28);
    r10 = (r12 + r11);
    r6 = (r12 - r11);
    r11 = (r6 + r29);
    r5 = (r29 + r5);
    r12 = (r27 - r10);
    r10 = (r27 + r10);
    r6 = (r11 - r0);
    r29 = (r8 - r9);
    r27 = (r8 + r9);
    r8 = (r29 + r12);
    r9 = (r10 + r27);
    MemoryInline::FlatWrite32(r3, r9);
    r9 = (r10 - r27);
    r8 = (r8 * 181);
    MemoryInline::FlatWrite32((r3 + 128), r9);
    r10 = (static_cast<int32_t>(r8) >> 8);
    r8 = (r6 * 98);
    r6 = (r12 + r10);
    MemoryInline::FlatWrite32((r3 + 64), r6);
    r9 = (r12 - r10);
    r6 = (r11 * 139);
    MemoryInline::FlatWrite32((r3 + 192), r9);
    r8 = (static_cast<int32_t>(r8) >> 8);
    r6 = (static_cast<int32_t>(r6) >> 8);
    r0 = (r0 * 334);
    r9 = (r8 + r6);
    r6 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r5 * 181);
    r6 = (r8 + r6);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 8);
    r5 = (r28 - r0);
    r8 = (r28 + r0);
    r0 = (r5 + r9);
    MemoryInline::FlatWrite32((r3 + 160), r0);
    r0 = (r5 - r9);
    r5 = (r8 + r6);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    r0 = (r8 - r6);
    MemoryInline::FlatWrite32((r3 + 32), r5);
    MemoryInline::FlatWrite32((r3 + 224), r0);
    r3 = (r3 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80234290;
    }
}

loc_80234374:
{
    r0 = 8;
    r6 = 0;
    ctr = r0;
}

loc_80234380:
{
    r4_addr_5 = (r4 + r6);
    r8 = MemoryInline::FlatRead32(r4_addr_5);
    r5 = (r7 + r6);
    r7_addr_2 = (r7 + r6);
    r0 = MemoryInline::FlatRead32(r7_addr_2);
    r3 = (r4 + r6);
    r8 = (r8 * r0);
    r0 = (r8 + 16384);
    r0 = (static_cast<int32_t>(r0) >> 15);
    r4_addr_6 = (r4 + r6);
    MemoryInline::FlatWrite32(r4_addr_6, r0);
    r6 = (r6 + 4);
    r8 = MemoryInline::FlatRead32((r3 + 32));
    r0 = MemoryInline::FlatRead32((r5 + 32));
    r8 = (r8 * r0);
    r0 = (r8 + 16384);
    r0 = (static_cast<int32_t>(r0) >> 15);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    r8 = MemoryInline::FlatRead32((r3 + 64));
    r0 = MemoryInline::FlatRead32((r5 + 64));
    r8 = (r8 * r0);
    r0 = (r8 + 16384);
    r0 = (static_cast<int32_t>(r0) >> 15);
    MemoryInline::FlatWrite32((r3 + 64), r0);
    r8 = MemoryInline::FlatRead32((r3 + 96));
    r0 = MemoryInline::FlatRead32((r5 + 96));
    r8 = (r8 * r0);
    r0 = (r8 + 16384);
    r0 = (static_cast<int32_t>(r0) >> 15);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    r8 = MemoryInline::FlatRead32((r3 + 128));
    r0 = MemoryInline::FlatRead32((r5 + 128));
    r8 = (r8 * r0);
    r0 = (r8 + 16384);
    r0 = (static_cast<int32_t>(r0) >> 15);
    MemoryInline::FlatWrite32((r3 + 128), r0);
    r8 = MemoryInline::FlatRead32((r3 + 160));
    r0 = MemoryInline::FlatRead32((r5 + 160));
    r8 = (r8 * r0);
    r0 = (r8 + 16384);
    r0 = (static_cast<int32_t>(r0) >> 15);
    MemoryInline::FlatWrite32((r3 + 160), r0);
    r8 = MemoryInline::FlatRead32((r3 + 192));
    r0 = MemoryInline::FlatRead32((r5 + 192));
    r8 = (r8 * r0);
    r0 = (r8 + 16384);
    r0 = (static_cast<int32_t>(r0) >> 15);
    MemoryInline::FlatWrite32((r3 + 192), r0);
    r8 = MemoryInline::FlatRead32((r3 + 224));
    r0 = MemoryInline::FlatRead32((r5 + 224));
    r5 = (r8 * r0);
    r0 = (r5 + 16384);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(15) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 15);
    MemoryInline::FlatWrite32((r3 + 224), r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80234380;
    }
}

loc_80234450:
{
    r27 = MemoryInline::FlatRead32((r1 + 12));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF80010F2 gpr_write=0xF8001F6B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8023407C func_8023407C preserves=true fpr_mask=0x00000000
