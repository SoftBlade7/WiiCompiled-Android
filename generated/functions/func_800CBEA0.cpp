#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CBEA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800CBEA0;

loc_800CBEA0:
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
    r27 = r3;
    // inline leaf 0x800BC370 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x800BC370
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800CBEC0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CBECC;
    }
}

loc_800CBEC4:
{
    r3 = 1;
    goto loc_800CBF90;
}

loc_800CBECC:
{
    // inline leaf 0x800BC3E0 (7 guest instruction(s))
}

loc_inl2_0x800BC3E0:
{
    r3 = MemoryInline::FlatRead32((r13 + -26984));
}

loc_inl2_0x800BC3E8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800BC3F4;
    }
}

loc_inl2_0x800BC3EC:
{
    r3 = 0;
    goto loc_inl2_cont_800BC3E0;
}

loc_inl2_0x800BC3F4:
{
    r3 = (r3 + 16);
}

loc_inl2_cont_800BC3E0:
{
    // end of inlined leaf 0x800BC3E0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800CBED4:
{
    r30 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CBEE4;
    }
}

loc_800CBEDC:
{
    r3 = 1;
    goto loc_800CBF90;
}

loc_800CBEE4:
{
    // inline leaf 0x800BC3E0 (7 guest instruction(s))
}

loc_inl3_0x800BC3E0:
{
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl3_0x800BC3E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl3_0x800BC3F4;
    }
}

loc_inl3_0x800BC3EC:
{
    r3 = 0;
    goto loc_inl3_cont_800BC3E0;
}

loc_inl3_0x800BC3F4:
{
    r3 = (r3 + 16);
}

loc_inl3_cont_800BC3E0:
{
    // end of inlined leaf 0x800BC3E0
    r29 = MemoryInline::FlatRead32(r3);
    r3 = 131072;
    r5 = (r3 + -3616);
    r4 = 0;
    r3 = (r29 + 4);
    ctx->lr = 0x800CBF00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 1380843520;
    r0 = -1;
    r4 = (r3 + 20292);
    MemoryInline::FlatWrite32(r29, r4);
    r3 = (r3 + 18500);
    r28 = (r29 + 7432);
    r4 = MemoryInline::FlatRead32((r29 + 7404));
    r31 = 0;
    r4 = (r4 | -2147483648);
    MemoryInline::FlatWrite32((r29 + 7404), r4);
    MemoryInline::FlatWrite32((r29 + 7424), r3);
    MemoryInline::FlatWrite16((r29 + 7428), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r29 + 7430), static_cast<uint16_t>(r0));
}

loc_800CBF34:
{
    r3 = r28;
    r4 = 0;
    r5 = 12;
    ctx->lr = 0x800CBF44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead16((r28 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r31 = (r31 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(10000));
}

loc_800CBF50:
{
    r0 = (r0 | 32767);
    MemoryInline::FlatWrite16((r28 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r28 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 | 32767);
    MemoryInline::FlatWrite16((r28 + 10), static_cast<uint16_t>(r0));
    r28 = (r28 + 12);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800CBF34;
    }
}

loc_800CBF6C:
{
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    r0 = MemoryInline::FlatRead8((r3 + 6972));
    r31 = (r0 & 2);
    // inline leaf 0x800BC470 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    // end of inlined leaf 0x800BC470
    MemoryInline::FlatWrite8((r3 + 6972), static_cast<uint8_t>(r31));
    r3 = 0x800D0000u;
    r3 = (r3 + -16848);
    MemoryInline::FlatWrite32((r30 + 8), r27);
    ctx->lr = 0x800CBF90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C0420u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800CBF90:
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
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800CBEA0 func_800CBEA0 preserves=true fpr_mask=0x00000000
