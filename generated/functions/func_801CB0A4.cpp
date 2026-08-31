#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801CB0A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r10_rot_6 = 0;
    uint32_t r10_rot_7 = 0;
    uint32_t r10_rot_8 = 0;
    uint32_t r10_rot_9 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r11_rot_4 = 0;
    uint32_t r11_rot_5 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint32_t r8_rot_8 = 0;
    uint32_t r8_rot_9 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_10 = 0;
    uint32_t r9_rot_11 = 0;
    uint32_t r9_rot_12 = 0;
    uint32_t r9_rot_13 = 0;
    uint32_t r9_rot_14 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint32_t r9_rot_6 = 0;
    uint32_t r9_rot_7 = 0;
    uint32_t r9_rot_8 = 0;
    uint32_t r9_rot_9 = 0;

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

    goto loc_801CB0A4;

loc_801CB0A4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r8 = 0x80350000u;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801CB0B0:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r8 = (r8 + 2352);
    r7 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r8_addr_0 = (r8 + r0);
    r0 = MemoryInline::FlatRead32(r8_addr_0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801CB354;
    }
}

loc_801CB0CC:
{
}

loc_801CB0D0:
{
    r3 = (r5 + 65536);
    r3 = (r3 + -8);
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(8))) {
        goto loc_801CB2FC;
    }
}

loc_801CB0DC:
{
    r8 = (r3 & 65535);
    r3 = (r8 + 7);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r3 = (r3_rot_1 & 536870911);
    ctr = r3;
}

loc_801CB0F0:
{
    if ((static_cast<uint32_t>(r8) <= static_cast<uint32_t>(0))) {
        goto loc_801CB2FC;
    }
}

loc_801CB0F4:
{
    r30 = (r7 & 65535);
    r3 = (r7 + 1);
    r11 = (r6 + r30);
    r8 = (r7 + 2);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(29));
    r10 = (r10_rot_2 & -536870912);
    r9 = (r3 & 65535);
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r12 = (r12_rot_2 & 1);
    r3 = (r4 + r30);
    r10 = (r10 - r12);
    r11 = (r6 + r9);
    r10_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(3));
    r10 = (r10_rot_3 & -1);
    r9 = (r8 & 65535);
    r10 = (r10 + r12);
    r8 = (r7 + 3);
    r12 = (r10 & 255);
    r31 = MemoryInline::FlatRead8(r3);
    r30 = (r0 + r12);
    r10 = (r6 + r9);
    r12 = MemoryInline::FlatRead8((r30 + 2348));
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(29));
    r9 = (r9_rot_2 & -536870912);
    r11_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r11 = (r11_rot_2 & 1);
    r30 = MemoryInline::FlatRead8((r30 + 2340));
    r9 = (r9 - r11);
    r12 = (r31 ^ r12);
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(3));
    r9 = (r9_rot_3 & -1);
    r8 = (r8 & 65535);
    r12 = (r30 + r12);
    r9 = (r9 + r11);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r12));
    r9 = (r9 & 255);
    r8 = (r6 + r8);
    r30 = (r0 + r9);
    r12 = MemoryInline::FlatRead8((r3 + 1));
    r9_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(29));
    r9 = (r9_rot_4 & -536870912);
    r10_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r10 = (r10_rot_4 & 1);
    r11 = MemoryInline::FlatRead8((r30 + 2348));
    r9 = (r9 - r10);
    r9_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(3));
    r9 = (r9_rot_5 & -1);
    r31 = MemoryInline::FlatRead8((r30 + 2340));
    r9 = (r9 + r10);
    r11 = (r12 ^ r11);
    r11 = (r31 + r11);
    r10_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r10 = (r10_rot_5 & 1);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r11));
    r9 = (r9 & 255);
    r30 = (r0 + r9);
    r9_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r9 = (r9_rot_6 & -536870912);
    r8 = (r7 + 4);
    r9 = (r9 - r10);
    r12 = MemoryInline::FlatRead8((r3 + 2));
    r9_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(3));
    r9 = (r9_rot_7 & -1);
    r8 = (r8 & 65535);
    r11 = MemoryInline::FlatRead8((r30 + 2348));
    r9 = (r9 + r10);
    r31 = MemoryInline::FlatRead8((r30 + 2340));
    r8 = (r6 + r8);
    r10 = (r12 ^ r11);
    r11 = (r9 & 255);
    r10 = (r31 + r10);
    r9_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r9 = (r9_rot_8 & -536870912);
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r10));
    r30 = (r0 + r11);
    r10_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r10 = (r10_rot_6 & 1);
    r8 = (r7 + 5);
    r9 = (r9 - r10);
    r12 = MemoryInline::FlatRead8((r3 + 3));
    r9_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(3));
    r9 = (r9_rot_9 & -1);
    r11 = MemoryInline::FlatRead8((r30 + 2348));
    r8 = (r8 & 65535);
    r31 = MemoryInline::FlatRead8((r30 + 2340));
    r10 = (r9 + r10);
    r9 = (r6 + r8);
    r8 = (r12 ^ r11);
    r11 = (r10 & 255);
    r10 = (r31 + r8);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(29));
    r8 = (r8_rot_2 & -536870912);
    r9_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_10 & 1);
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r10));
    r12 = (r0 + r11);
    r8 = (r8 - r9);
    r10 = MemoryInline::FlatRead8((r12 + 2348));
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(3));
    r8 = (r8_rot_3 & -1);
    r11 = MemoryInline::FlatRead8((r3 + 4));
    r8 = (r8 + r9);
    r12 = MemoryInline::FlatRead8((r12 + 2340));
    r9 = (r11 ^ r10);
    r9 = (r12 + r9);
    r10 = (r8 & 255);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r9));
    r8 = (r7 + 6);
    r30 = (r0 + r10);
    r9 = (r8 & 65535);
    r12 = MemoryInline::FlatRead8((r3 + 5));
    r10 = (r6 + r9);
    r8 = (r7 + 7);
    r9_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(29));
    r9 = (r9_rot_11 & -536870912);
    r31 = MemoryInline::FlatRead8((r30 + 2340));
    r11_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r11 = (r11_rot_3 & 1);
    r10 = MemoryInline::FlatRead8((r30 + 2348));
    r9 = (r9 - r11);
    r8 = (r8 & 65535);
    r12 = (r12 ^ r10);
    r7 = (r7 + 8);
    r10_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(3));
    r10 = (r10_rot_7 & -1);
    r9 = (r6 + r8);
    r12 = (r31 + r12);
    r8 = (r10 + r11);
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r12));
    r10 = (r8 & 255);
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(29));
    r8 = (r8_rot_4 & -536870912);
    r9_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_12 & 1);
    r12 = (r0 + r10);
    r11 = MemoryInline::FlatRead8((r3 + 6));
    r8 = (r8 - r9);
    r10 = MemoryInline::FlatRead8((r12 + 2348));
    r8_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(3));
    r8 = (r8_rot_5 & -1);
    r12 = MemoryInline::FlatRead8((r12 + 2340));
    r8 = (r8 + r9);
    r9 = (r11 ^ r10);
    r9 = (r12 + r9);
    r8 = (r8 & 255);
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r9));
    r10 = (r0 + r8);
    r8 = MemoryInline::FlatRead8((r10 + 2348));
    r9 = MemoryInline::FlatRead8((r3 + 7));
    r10 = MemoryInline::FlatRead8((r10 + 2340));
    r8 = (r9 ^ r8);
    r8 = (r10 + r8);
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r8));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801CB0F4;
    }
}

loc_801CB2FC:
{
    r8 = (r7 & 65535);
    r3 = (r5 - r8);
    ctr = r3;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(r5));
}

loc_801CB30C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CB354;
    }
}

loc_801CB310:
{
    r9 = (r7 & 65535);
    r7 = (r7 + 1);
    r8 = (r6 + r9);
    r4_addr_2 = (r4 + r9);
    r5 = MemoryInline::FlatRead8(r4_addr_2);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r3 = (r3_rot_4 & -536870912);
    r8_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_8 & 1);
    r3 = (r3 - r8);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_5 & -1);
    r3 = (r3 + r8);
    r3 = (r3 & 255);
    r8 = (r0 + r3);
    r3 = MemoryInline::FlatRead8((r8 + 2348));
    r8 = MemoryInline::FlatRead8((r8 + 2340));
    r3 = (r5 ^ r3);
    r3 = (r8 + r3);
    r4_addr_3 = (r4 + r9);
    MemoryInline::FlatWrite8(r4_addr_3, static_cast<uint8_t>(r3));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801CB310;
    }
}

loc_801CB354:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0001FFB gpr_write=0xC0001FAB gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801CB0A4 func_801CB0A4 preserves=true fpr_mask=0x00000000
