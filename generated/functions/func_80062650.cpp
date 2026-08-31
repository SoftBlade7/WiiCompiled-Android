#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80062650(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_8 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
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
    uint32_t r3_rot_6 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint8_t mkw_fifo_burst_0[15];

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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80062650;

loc_80062650:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r4 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80062674:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80062844;
    }
}

loc_80062678:
{
    r0 = MemoryInline::FlatRead32((r13 + -27316));
}

loc_80062680:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8006268C;
    }
}

loc_80062684:
{
    r0 = 1;
    goto loc_80062694;
}

loc_8006268C:
{
    MemoryInline::FlatWrite32((r13 + -27316), r4);
    r0 = 0;
}

loc_80062694:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80062698:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80062844;
    }
}

loc_8006269C:
{
    r9 = 0x802C0000u;
    r8 = (r9 + -32704);
    r3 = MemoryInline::FlatRead32((r8 + 8));
    r0 = (r3 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800626AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80062728;
    }
}

loc_800626B0:
{
    r0 = (r3 & 3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_800626B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80062728;
    }
}

loc_800626BC:
{
    r5 = MemoryInline::FlatRead32((r8 + 4));
    r3 = -33030144;
    r7 = -872349696;
    r4 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    r0 = (r3 + -961);
    r3 = (r2 + -29528);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    r3_addr_1 = (r3 + r5);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(14));
    r5 = (r5_rot_1 & -16384);
    r3 = MemoryInline::FlatRead8((r8 + 2));
    r0 = MemoryInline::FlatRead8((r8 + 1));
    r4 = (r3 + -1);
    r6 = MemoryInline::FlatRead8((r8 + 3));
    r3 = MemoryInline::FlatRead8((r9 + -32704));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r6 = (r6_rot_1 & -65536);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(10));
    r4 = (r4_rot_1 & -1024);
    r0 = (r3 | r0);
    r3 = (r6 | r5);
    r0 = (r4 | r0);
    r0 = (r3 | r0);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    r0 = MemoryInline::FlatRead32((r8 + 8));
    r0 = (r0 | 1);
    MemoryInline::FlatWriteRam32((r8 + 8), r0);
}

loc_80062728:
{
    r4 = MemoryInline::FlatRead8((r13 + -27328));
    r0 = 0;
    r3 = r31;
    MemoryInline::FlatWrite8((r13 + -27328), static_cast<uint8_t>(r0));
    ctx->lr = 0x8006273Cu;
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80050340u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x802C0000u;
    r6 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead32((r3 + -32692));
    r0 = (r0 & 2);
}

loc_8006274C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80062774;
    }
}

loc_80062750:
{
    r4 = (r3 + -32692);
    r3 = MemoryInline::FlatRead32((r6 + 16));
    r0 = MemoryInline::FlatRead32((r4 + 100));
}

loc_80062760:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80062774;
    }
}

loc_80062764:
{
    r3 = MemoryInline::FlatRead32((r6 + 20));
    r0 = MemoryInline::FlatRead32((r4 + 104));
}

loc_80062770:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8006279C;
    }
}

loc_80062774:
{
    r5 = 0x802C0000u;
    r3 = MemoryInline::FlatRead32((r6 + 16));
    r4 = (r5 + -32692);
    r0 = MemoryInline::FlatRead32((r5 + -32692));
    MemoryInline::FlatWriteRam32((r4 + 100), r3);
    r0 = (r0 | 2);
    r3 = MemoryInline::FlatRead32((r6 + 20));
    r0 = (r0 & -2);
    MemoryInline::FlatWriteRam32((r4 + 104), r3);
    MemoryInline::FlatWriteRam32((r5 + -32692), r0);
}

loc_8006279C:
{
    r3 = 0x802C0000u;
    r4 = 0x802C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -32692));
    r29 = MemoryInline::FlatRead8((r4 + -32704));
    r0 = (r5 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800627B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80062844;
    }
}

loc_800627B4:
{
    r0 = (r5 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800627B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80062844;
    }
}

loc_800627BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_800627C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80062844;
    }
}

loc_800627C4:
{
    r31 = (r3 + -32692);
    r30 = 0;
    goto loc_80062828;
}

loc_800627D0:
{
    r3 = (r30 & 255);
    r7 = (r31 + r3);
    r0 = MemoryInline::FlatRead8((r7 + 100));
}

loc_800627E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_80062824;
    }
}

loc_800627E4:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 1020);
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
    r5 = (r5_rot_4 & 2040);
    r4 = (r31 + r0);
    r6 = 0;
    r10 = (r31 + r5);
    r4 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWrite16((r10 + 36), static_cast<uint16_t>(r4));
    r5 = 0;
    r8 = 0;
    r9 = 0;
    r0 = MemoryInline::FlatRead8((r7 + 100));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r7 = (r31 + r0);
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
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(17));
    r5 = (r5_rot_5 & 33423360);
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
    r5_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(17));
    r5 = (r5_rot_6 & 33423360);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(16));
    r3 = (r3_rot_4 & 16711680);
    mkw_fifo_burst_0[10] = static_cast<uint8_t>(r11);
    r3 = (r4 | r3);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_6 & -16777216);
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

loc_80062824:
{
    r30 = (r30 + 1);
}

loc_80062828:
{
    r0 = (r30 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r29));
}

loc_80062830:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800627D0;
    }
}

loc_80062834:
{
    r3 = 0x802C0000u;
    r0 = MemoryInline::FlatRead32((r3 + -32692));
    r0 = (r0 | 1);
    MemoryInline::FlatWriteRam32((r3 + -32692), r0);
}

loc_80062844:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80062650 func_80062650 preserves=true fpr_mask=0x00000000
