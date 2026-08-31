#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8011C1B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r27_addic_src_0 = 0;
    uint32_t r27_addic_src_1 = 0;
    uint32_t r27_addic_src_2 = 0;
    uint32_t r27_addic_src_3 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r29_addr_4 = 0;
    uint32_t r29_addr_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;

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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8011C1B4;

loc_8011C1B4:
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
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
}

loc_8011C1CC:
{
    r29 = r3;
    r30 = r4;
    r31 = r5;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8011C2AC;
    }
}

loc_8011C1DC:
{
    r8 = 1;
    r7 = 3;
    r6 = 5;
    r5 = 7;
    r4 = 11;
    r0 = 16;
    MemoryInline::FlatWrite8((r3 + 256), static_cast<uint8_t>(r8));
    r11 = 0;
    r10 = 255;
    MemoryInline::FlatWrite8((r3 + 257), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 258), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 259), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 260), static_cast<uint8_t>(r4));
    ctr = r0;
}

loc_8011C214:
{
    r3_addr_2 = (r3 + r11);
    MemoryInline::FlatWrite8(r3_addr_2, static_cast<uint8_t>(r10));
    r12 = (r3 + r11);
    r9 = (r10 + -1);
    r8 = (r10 + -2);
    MemoryInline::FlatWrite8((r12 + 1), static_cast<uint8_t>(r9));
    r7 = (r10 + -3);
    r6 = (r10 + -4);
    r5 = (r10 + -5);
    MemoryInline::FlatWrite8((r12 + 2), static_cast<uint8_t>(r8));
    r4 = (r10 + -6);
    r0 = (r10 + -7);
    r9 = (r10 + -9);
    MemoryInline::FlatWrite8((r12 + 3), static_cast<uint8_t>(r7));
    r8 = (r10 + -10);
    r7 = (r10 + -11);
    r11 = (r11 + 8);
    MemoryInline::FlatWrite8((r12 + 4), static_cast<uint8_t>(r6));
    r6 = (r10 + -12);
    MemoryInline::FlatWrite8((r12 + 5), static_cast<uint8_t>(r5));
    r5 = (r10 + -13);
    MemoryInline::FlatWrite8((r12 + 6), static_cast<uint8_t>(r4));
    r4 = (r10 + -14);
    MemoryInline::FlatWrite8((r12 + 7), static_cast<uint8_t>(r0));
    r0 = (r10 + -15);
    r10 = (r10 + -8);
    r12 = (r3 + r11);
    r3_addr_3 = (r3 + r11);
    MemoryInline::FlatWrite8(r3_addr_3, static_cast<uint8_t>(r10));
    r11 = (r11 + 8);
    r10 = (r10 + -8);
    MemoryInline::FlatWrite8((r12 + 1), static_cast<uint8_t>(r9));
    MemoryInline::FlatWrite8((r12 + 2), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8((r12 + 3), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r12 + 4), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r12 + 5), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r12 + 6), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r12 + 7), static_cast<uint8_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8011C214;
    }
}

loc_8011C2A8:
{
    goto loc_8011C448;
}

loc_8011C2AC:
{
    r0 = 8;
    r11 = 0;
    ctr = r0;
}

loc_8011C2B8:
{
    r3_addr_5 = (r3 + r11);
    MemoryInline::FlatWrite8(r3_addr_5, static_cast<uint8_t>(r11));
    r10 = (r3 + r11);
    r9 = (r11 + 1);
    r8 = (r11 + 2);
    MemoryInline::FlatWrite8((r10 + 1), static_cast<uint8_t>(r9));
    r7 = (r11 + 3);
    r6 = (r11 + 4);
    r5 = (r11 + 5);
    MemoryInline::FlatWrite8((r10 + 2), static_cast<uint8_t>(r8));
    r4 = (r11 + 6);
    r0 = (r11 + 7);
    r9 = (r11 + 9);
    MemoryInline::FlatWrite8((r10 + 3), static_cast<uint8_t>(r7));
    r8 = (r11 + 10);
    r7 = (r11 + 11);
    MemoryInline::FlatWrite8((r10 + 4), static_cast<uint8_t>(r6));
    r6 = (r11 + 12);
    MemoryInline::FlatWrite8((r10 + 5), static_cast<uint8_t>(r5));
    r5 = (r11 + 13);
    MemoryInline::FlatWrite8((r10 + 6), static_cast<uint8_t>(r4));
    r4 = (r11 + 14);
    r11 = (r11 + 8);
    MemoryInline::FlatWrite8((r10 + 7), static_cast<uint8_t>(r0));
    r10 = (r3 + r11);
    r0 = (r11 + 7);
    r3_addr_6 = (r3 + r11);
    MemoryInline::FlatWrite8(r3_addr_6, static_cast<uint8_t>(r11));
    MemoryInline::FlatWrite8((r10 + 1), static_cast<uint8_t>(r9));
    r9 = (r11 + 9);
    MemoryInline::FlatWrite8((r10 + 2), static_cast<uint8_t>(r8));
    r8 = (r11 + 10);
    MemoryInline::FlatWrite8((r10 + 3), static_cast<uint8_t>(r7));
    r7 = (r11 + 11);
    MemoryInline::FlatWrite8((r10 + 4), static_cast<uint8_t>(r6));
    r6 = (r11 + 12);
    MemoryInline::FlatWrite8((r10 + 5), static_cast<uint8_t>(r5));
    r5 = (r11 + 13);
    MemoryInline::FlatWrite8((r10 + 6), static_cast<uint8_t>(r4));
    r4 = (r11 + 14);
    r11 = (r11 + 8);
    MemoryInline::FlatWrite8((r10 + 7), static_cast<uint8_t>(r0));
    r10 = (r3 + r11);
    r0 = (r11 + 7);
    r3_addr_7 = (r3 + r11);
    MemoryInline::FlatWrite8(r3_addr_7, static_cast<uint8_t>(r11));
    MemoryInline::FlatWrite8((r10 + 1), static_cast<uint8_t>(r9));
    r9 = (r11 + 9);
    MemoryInline::FlatWrite8((r10 + 2), static_cast<uint8_t>(r8));
    r8 = (r11 + 10);
    MemoryInline::FlatWrite8((r10 + 3), static_cast<uint8_t>(r7));
    r7 = (r11 + 11);
    MemoryInline::FlatWrite8((r10 + 4), static_cast<uint8_t>(r6));
    r6 = (r11 + 12);
    MemoryInline::FlatWrite8((r10 + 5), static_cast<uint8_t>(r5));
    r5 = (r11 + 13);
    MemoryInline::FlatWrite8((r10 + 6), static_cast<uint8_t>(r4));
    r4 = (r11 + 14);
    r11 = (r11 + 8);
    MemoryInline::FlatWrite8((r10 + 7), static_cast<uint8_t>(r0));
    r10 = (r3 + r11);
    r0 = (r11 + 7);
    r3_addr_8 = (r3 + r11);
    MemoryInline::FlatWrite8(r3_addr_8, static_cast<uint8_t>(r11));
    r11 = (r11 + 8);
    MemoryInline::FlatWrite8((r10 + 1), static_cast<uint8_t>(r9));
    MemoryInline::FlatWrite8((r10 + 2), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8((r10 + 3), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r10 + 4), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r10 + 5), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r10 + 6), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r10 + 7), static_cast<uint8_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8011C2B8;
    }
}

loc_8011C3CC:
{
    r0 = 0;
    r28 = (r3 + 255);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r27 = 255;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
}

loc_8011C3E0:
{
    r3 = r29;
    r4 = r27;
    r5 = r30;
    r6 = r31;
    r7 = (r1 + 8);
    r8 = (r1 + 12);
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
    InvokeDirectCpu<0x8011C10Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = (r3 & 255);
    r4 = MemoryInline::FlatRead8(r28);
    r29_addr_2 = (r29 + r3);
    r0 = MemoryInline::FlatRead8(r29_addr_2);
    r27_addic_src_2 = r27;
    r27 = (r27_addic_src_2 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r27_addic_src_2)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_8011C40C:
{
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r0));
    r28 = (r28 + -1);
    r29_addr_3 = (r29 + r3);
    MemoryInline::FlatWrite8(r29_addr_3, static_cast<uint8_t>(r4));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8011C3E0;
    }
}

loc_8011C41C:
{
    r5 = MemoryInline::FlatRead8((r29 + 1));
    r4 = MemoryInline::FlatRead8((r29 + 3));
    r3 = MemoryInline::FlatRead8((r29 + 5));
    r0 = MemoryInline::FlatRead8((r29 + 7));
    MemoryInline::FlatWrite8((r29 + 256), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r29 + 257), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r29 + 258), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r29 + 259), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 8));
    r29_addr_4 = (r29 + r0);
    r0 = MemoryInline::FlatRead8(r29_addr_4);
    MemoryInline::FlatWrite8((r29 + 260), static_cast<uint8_t>(r0));
}

loc_8011C448:
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

// RECOMP_GUEST_ABI gpr_read=0xF8001FFB gpr_write=0xF8001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8011C1B4 func_8011C1B4 preserves=true fpr_mask=0x00000000
