#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800636C0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r12_rot_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint8_t mkw_fifo_burst_0[15];

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
    uint32_t xer = ctx->xer;

    goto loc_800636C0;

loc_800636C0:
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
    r0 = MemoryInline::FlatRead32(r3);
    r31 = 0x802C0000u;
    r30 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800636E4:
{
    r31 = (r31 + -32704);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006384C;
    }
}

loc_800636EC:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r27 = MemoryInline::FlatRead8(r31);
    r0 = (r3 & 2);
}

loc_800636F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80063788;
    }
}

loc_800636FC:
{
    r0 = (r3 & 1);
}

loc_80063700:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80063788;
    }
}

loc_80063704:
{
}

loc_80063708:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80063788;
    }
}

loc_8006370C:
{
    r29 = (r31 + 12);
    r28 = 0;
    goto loc_80063770;
}

loc_80063718:
{
    r3 = (r28 & 255);
    r7 = (r29 + r3);
    r0 = MemoryInline::FlatRead8((r7 + 100));
}

loc_80063728:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_8006376C;
    }
}

loc_8006372C:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(3));
    r5 = (r5_rot_2 & 2040);
    r4 = (r29 + r0);
    r6 = 0;
    r10 = (r29 + r5);
    r4 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWrite16((r10 + 36), static_cast<uint16_t>(r4));
    r5 = 0;
    r8 = 0;
    r9 = 0;
    r0 = MemoryInline::FlatRead8((r7 + 100));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r7 = (r29 + r0);
    r7 = MemoryInline::FlatRead16((r7 + 6));
    MemoryInline::FlatWrite16((r10 + 38), static_cast<uint16_t>(r7));
    // inline leaf 0x80060670 (28 guest instruction(s))
    r10 = -872349696;
    r11 = 97;
    mkw_fifo_burst_0[0] = static_cast<uint8_t>(r11);
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r12 = (r12_rot_2 & -2);
    r3 = -33292288;
    r4 = (r4 + -1);
    r0 = (r3 + -1);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[1] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[2] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[3] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[4] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(16));
    r3 = (r3_rot_2 & 16711680);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(17));
    r5 = (r5_rot_3 & 33423360);
    r4 = (r4 | r3);
    r0 = (r12 + 48);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r3 = (r3_rot_3 & -16777216);
    mkw_fifo_burst_0[5] = static_cast<uint8_t>(r11);
    r4 = (r5 | r4);
    r0 = (r12 + 49);
    r3 = (r4 | r3);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r3);
        mkw_fifo_burst_0[6] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[7] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[8] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[9] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r4 = (r7 + -1);
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(17));
    r5 = (r5_rot_4 & 33423360);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(16));
    r3 = (r3_rot_4 & 16711680);
    mkw_fifo_burst_0[10] = static_cast<uint8_t>(r11);
    r3 = (r4 | r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_4 & -16777216);
    r3 = (r5 | r3);
    r0 = (r3 | r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[11] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[12] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[13] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[14] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 15u);
    // end of inlined leaf 0x80060670
}

loc_8006376C:
{
    r28 = (r28 + 1);
}

loc_80063770:
{
    r0 = (r28 & 255);
}

loc_80063778:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r27))) {
        goto loc_80063718;
    }
}

loc_8006377C:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r0 = (r0 | 1);
    MemoryInline::FlatWriteRam32((r31 + 12), r0);
}

loc_80063788:
{
    r29 = (r31 + 0);
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r3 & 4);
}

loc_80063794:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800637C8;
    }
}

loc_80063798:
{
    r0 = (r3 & 3);
}

loc_800637A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_800637C8;
    }
}

loc_800637A4:
{
    r3 = MemoryInline::FlatRead8(r31);
    r4 = MemoryInline::FlatRead8((r29 + 1));
    r5 = MemoryInline::FlatRead8((r29 + 2));
    r6 = MemoryInline::FlatRead8((r29 + 3));
    r7 = MemoryInline::FlatRead32((r29 + 4));
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
    InvokeDirectCpu<0x800605C0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r0 | 3);
    MemoryInline::FlatWriteRam32((r29 + 8), r0);
}

loc_800637C8:
{
    r6 = MemoryInline::FlatRead32(r30);
    r5 = 0;
    r0 = MemoryInline::FlatRead32((r31 + 516));
    r3 = MemoryInline::FlatRead32((r6 + 12));
}

loc_800637DC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80063808;
    }
}

loc_800637E0:
{
    r4 = (r31 + 516);
    r3 = MemoryInline::FlatRead32((r6 + 16));
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_800637F0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80063808;
    }
}

loc_800637F4:
{
    r3 = MemoryInline::FlatRead32((r6 + 20));
    r0 = MemoryInline::FlatRead32((r4 + 8));
}

loc_80063800:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80063808;
    }
}

loc_80063804:
{
    r5 = 1;
}

loc_80063808:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8006380C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80063818;
    }
}

loc_80063810:
{
    r5 = 1;
    goto loc_80063838;
}

loc_80063818:
{
    r4 = MemoryInline::FlatRead32((r6 + 12));
    r3 = (r31 + 516);
    r0 = MemoryInline::FlatRead32((r6 + 16));
    r5 = 0;
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    MemoryInline::FlatWriteRam32((r31 + 516), r4);
    r0 = MemoryInline::FlatRead32((r6 + 20));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
}

loc_80063838:
{
    r4 = MemoryInline::FlatRead8((r13 + -27328));
    r0 = 0;
    r3 = r30;
    MemoryInline::FlatWrite8((r13 + -27328), static_cast<uint8_t>(r0));
    ctx->lr = 0x8006384Cu;
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
    InvokeDirectCpu<0x8004F8E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8006384C:
{
    r11 = (r1 + 32);
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF803FFF gpr_write=0xFF801FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x000003FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800636C0 func_800636C0 preserves=true fpr_mask=0x00000000
