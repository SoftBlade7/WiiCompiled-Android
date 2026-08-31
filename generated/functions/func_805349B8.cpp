#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805349B8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805349B8;

loc_805349B8:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r31 = 0;
    MemoryInline::FlatWrite8((r3 + 40), static_cast<uint8_t>(r31));
    r5 = MemoryInline::FlatRead32((r3 + 56));
    r6 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r6 + -10448));
    r29 = r3;
    r0 = (r5 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805349E8:
{
    r30 = MemoryInline::FlatRead32((r4 + 20));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80534C60;
    }
}

loc_805349F0:
{
    r0 = (r5 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805349F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80534C60;
    }
}

loc_805349F8:
{
    r4 = MemoryInline::FlatRead16((r3 + 36));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r5 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 36), static_cast<uint16_t>(r5));
    r4 = MemoryInline::FlatRead32((r6 + -10448));
    r0 = MemoryInline::FlatRead8((r4 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80534A10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80534C60;
    }
}

loc_80534A14:
{
    r0 = MemoryInline::FlatRead8((r3 + 38));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80534A20:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80534C60;
    }
}

loc_80534A24:
{
    r28 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r29 + 8));
    r3 = MemoryInline::FlatRead32((r28 + 6392));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x80590100
    // inline leaf 0x80590224 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = (r3 + 24);
    // end of inlined leaf 0x80590224
    r27 = r3;
    r3 = MemoryInline::FlatRead32((r28 + 6392));
    r4 = MemoryInline::FlatRead8((r29 + 8));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // end of inlined leaf 0x80590100
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r4 = 0x809C0000u;
    r5 = r3;
    r3 = MemoryInline::FlatRead32((r4 + -10520));
    r6 = r27;
    r4 = MemoryInline::FlatRead16((r29 + 10));
    ctx->lr = 0x80534A64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80511E7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r5 = 0x808B0000u;
    r4 = 1127219200;
    r5 = (r5 + 11588);
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    r5 = (r3 & 65535);
    r3 = 0x80890000u;
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r31));
    r6 = 0;
    f2.d = MemoryInline::FlatReadFloat64((r3 + 368));
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r31));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r31));
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r31));
    r0 = MemoryInline::FlatRead16((r30 + 12));
    MemoryInline::FlatWriteRam32((r1 + 28), r5);
    MemoryInline::FlatWriteRam32((r1 + 24), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteRam32((r1 + 32), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f0.d);
    r5 = fctiwzword0;
    r0 = (r5 & 65535);
}

loc_80534AD0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(999))) {
        goto loc_80534B34;
    }
}

loc_80534AD4:
{
    r3 = MemoryInline::FlatRead8((r30 + 10));
    r0 = (r5 + -1000);
    r5 = (r0 & 65535);
    r3 = (r3 + 1);
    r0 = (r3 & 255);
}

loc_80534AEC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(59))) {
        goto loc_80534AFC;
    }
}

loc_80534AF0:
{
    r0 = (r3 + -60);
    r6 = 1;
    r3 = (r0 & 255);
}

loc_80534AFC:
{
    r0 = MemoryInline::FlatRead16((r30 + 8));
    r6 = (r6 + r0);
    r0 = (r6 & 65535);
}

loc_80534B0C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(999))) {
        goto loc_80534B1C;
    }
}

loc_80534B10:
{
    r6 = 999;
    r3 = 59;
    r5 = 999;
}

loc_80534B1C:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r5));
    goto loc_80534B50;
}

loc_80534B34:
{
    r4 = MemoryInline::FlatRead8((r30 + 10));
    r0 = 1;
    r3 = MemoryInline::FlatRead16((r30 + 8));
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r5));
}

loc_80534B50:
{
    r3 = MemoryInline::FlatRead8((r29 + 38));
    r4 = MemoryInline::FlatRead32((r29 + 60));
    r3 = (r3 + -1);
    r0 = MemoryInline::FlatRead16((r1 + 12));
    r3 = (r3 * 12);
    r4 = (r4 + r3);
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 14));
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 16));
    MemoryInline::FlatWrite16((r4 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 18));
    MemoryInline::FlatWrite8((r4 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 64));
}

loc_80534B8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80534BA8;
    }
}

loc_80534B90:
{
    r3 = 65536;
    r0 = 0;
    r3 = (r3 + -1);
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r4 + 8), static_cast<uint16_t>(r0));
}

loc_80534BA8:
{
    r3 = 0x809C0000u;
    r4 = 3;
    r5 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r5 + 2960));
    r0 = (r0 & 4);
}

loc_80534BBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80534BD8;
    }
}

loc_80534BC0:
{
    r4 = MemoryInline::FlatRead8((r5 + 2957));
    r0 = (r4 + 255);
    r0 = (r0 & 255);
}

loc_80534BD0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8))) {
        goto loc_80534BD8;
    }
}

loc_80534BD4:
{
    r4 = 3;
}

loc_80534BD8:
{
    r3 = MemoryInline::FlatRead8((r29 + 38));
    r0 = (r4 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80534BE4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80534C58;
    }
}

loc_80534BE8:
{
    r0 = MemoryInline::FlatRead8((r29 + 8));
    r0 = (r0 * 240);
    r3 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80534BFC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80534C10;
    }
}

loc_80534C00:
{
    r0 = MemoryInline::FlatRead32((r29 + 56));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r29 + 56), r0);
    goto loc_80534C60;
}

loc_80534C10:
{
    r3 = r29;
    r4 = (r1 + 8);
    r5 = 0;
    r6 = 1;
    ctx->lr = 0x80534C24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x805347F4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r30 + 64));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80534C2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80534C60;
    }
}

loc_80534C30:
{
    r5 = MemoryInline::FlatRead32((r29 + 64));
    r0 = 1;
    r4 = 99;
    r3 = 59;
    MemoryInline::FlatWrite8((r5 + 10), static_cast<uint8_t>(r0));
    r0 = 999;
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite16((r5 + 8), static_cast<uint16_t>(r0));
    goto loc_80534C60;
}

loc_80534C58:
{
    r0 = MemoryInline::FlatRead16((r29 + 36));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite8((r29 + 38), static_cast<uint8_t>(r0));
}

loc_80534C60:
{
    r11 = (r1 + 80);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805349B8 func_805349B8 preserves=true fpr_mask=0x00000000
