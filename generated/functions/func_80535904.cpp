#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80535904(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t r0_addc_right_0 = 0;
    uint32_t r0_addc_right_1 = 0;
    uint32_t r0_addc_right_2 = 0;
    uint32_t r0_addc_right_3 = 0;
    uint32_t r0_adde_left_0 = 0;
    uint32_t r0_adde_left_1 = 0;
    uint32_t r0_adde_left_2 = 0;
    uint32_t r0_adde_left_3 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;

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
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80535904;

loc_80535904:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    r4 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 48), r28);
    r0 = MemoryInline::FlatRead8((r3 + 65));
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80535934:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80535C80;
    }
}

loc_8053593C:
{
    r0 = MemoryInline::FlatRead8((r3 + 64));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80535944:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80535950;
    }
}

loc_80535948:
{
    r30 = 0;
    goto loc_8053597C;
}

loc_80535950:
{
    r4 = 0x80380000u;
    r3 = 0x80890000u;
    r4 = MemoryInline::FlatRead32((r4 + 24576));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 432));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 124));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r4 = r3;
    r3 = (r29 + 40);
    // inline leaf 0x805555CC (23 guest instruction(s))
    r5 = -1293680640;
    r11 = MemoryInline::FlatRead32((r3 + 12));
    r8 = (r5 + -11215);
    r10 = MemoryInline::FlatRead32((r3 + 8));
    r5 = 5308416;
    r6 = 1761804288;
    r0 = (r5 + -28995);
    r7 = (static_cast<uint32_t>((static_cast<uint64_t>(r11) * static_cast<uint64_t>(r8)) >> 32));
    r9 = (r6 + 31154);
    r6 = 0;
    r5 = (r10 * r8);
    r8 = (r11 * r8);
    r7 = (r7 + r5);
    r0_addc_right_1 = r0;
    r0 = (r8 + r0_addc_right_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r8)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_right_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r5 = (r11 * r9);
    r0 = (r7 + r5);
    r0_adde_left_1 = r0;
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_adde_left_1 + r6);
    r0 = (r0 + r0_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_adde_left_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r6)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r4)) >> 32));
    r3 = (r6 * r4);
    r3 = (r0 + r3);
    // end of inlined leaf 0x805555CC
    r30 = r3;
}

loc_8053597C:
{
    r0 = MemoryInline::FlatRead32((r29 + 72));
    r3 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r4 = 0x80380000u;
    r4 = MemoryInline::FlatRead32((r4 + 24576));
    f1.d = MemoryInline::FlatReadFloat64((r3 + 368));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 124));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = PpcFmulsInline(f0.d, f2.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r29 + 68));
}

loc_805359B0:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_805359BC;
    }
}

loc_805359B4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 64), static_cast<uint8_t>(r0));
}

loc_805359BC:
{
    r0 = MemoryInline::FlatRead8((r29 + 64));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805359C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805359D8;
    }
}

loc_805359C8:
{
    r31 = 99;
    r28 = 59;
    r5 = 999;
    goto loc_80535A90;
}

loc_805359D8:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r28 = 0x80890000u;
    r5 = 0x80890000u;
    f4.d = MemoryInline::FlatReadFloat64((r28 + 368));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r4 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 392));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 436));
    f3.d = PpcFmulsInline(f2.d, f3.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f1.d = PPC_Fctiwz(f3.d);
    fctiwzword0 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f1.d);
    r31 = fctiwzword0;
    r0 = (r31 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r5 = 0x80890000u;
    f4.d = MemoryInline::FlatReadFloat64((r28 + 368));
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 396));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 440));
    f3.d = PpcFmulsInline(f2.d, f3.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f1.d = PPC_Fctiwz(f3.d);
    fctiwzword1 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f1.d);
    r28 = fctiwzword1;
    r0 = (r28 & 255);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r5 = (r3 & 65535);
}

loc_80535A90:
{
    r0 = MemoryInline::FlatRead8((r29 + 66));
    r4 = 1;
    MemoryInline::FlatWrite8((r29 + 14), static_cast<uint8_t>(r4));
}

loc_80535AA0:
{
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r31));
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r5));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80535BB8;
    }
}

loc_80535AB0:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r30);
    r3 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat64((r3 + 368));
    r7 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r4 = fctiwzword2;
    r0 = (r4 & 65535);
}

loc_80535AEC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(999))) {
        goto loc_80535B3C;
    }
}

loc_80535AF0:
{
    r3 = (r28 & 255);
    r4 = (r4 + -1000);
    r8 = (r3 + 1);
    r0 = (r8 & 255);
    r4 = (r4 & 65535);
}

loc_80535B08:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(59))) {
        goto loc_80535B18;
    }
}

loc_80535B0C:
{
    r0 = (r8 + -60);
    r7 = 1;
    r8 = (r0 & 255);
}

loc_80535B18:
{
    r0 = MemoryInline::FlatRead16((r29 + 8));
    r7 = (r7 + r0);
    r0 = (r7 & 65535);
}

loc_80535B28:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(999))) {
        goto loc_80535B44;
    }
}

loc_80535B2C:
{
    r7 = 999;
    r8 = 59;
    r4 = 999;
    goto loc_80535B44;
}

loc_80535B3C:
{
    r7 = (r31 & 65535);
    r8 = (r28 & 255);
}

loc_80535B44:
{
    r0 = MemoryInline::FlatRead16((r29 + 36));
    r3 = (r4 & 65535);
    r6 = 0;
    r5 = 0;
    r4 = (r0 - r3);
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_80535B64;
    }
}

loc_80535B5C:
{
    r5 = -1;
    r4 = (r4 + 1000);
}

loc_80535B64:
{
    r0 = MemoryInline::FlatRead8((r29 + 34));
    r3 = (r8 & 255);
    r0 = (r0 - r3);
    r5 = (r5 + r0);
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_80535B80;
    }
}

loc_80535B78:
{
    r6 = -1;
    r5 = (r5 + 60);
}

loc_80535B80:
{
    r0 = MemoryInline::FlatRead16((r29 + 32));
    r3 = (r7 & 65535);
    r0 = (r0 - r3);
    r6 = (r6 + r0);
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(0))) {
        goto loc_80535BA0;
    }
}

loc_80535B94:
{
    r6 = 0;
    r5 = 0;
    r4 = 0;
}

loc_80535BA0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 26), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r29 + 20), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite8((r29 + 22), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite16((r29 + 24), static_cast<uint16_t>(r4));
    goto loc_80535C68;
}

loc_80535BB8:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r30);
    r3 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat64((r3 + 368));
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    r5 = fctiwzword3;
    r0 = (r5 & 65535);
}

loc_80535BF4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(999))) {
        goto loc_80535C58;
    }
}

loc_80535BF8:
{
    r3 = (r28 & 255);
    r4 = (r5 + -1000);
    r3 = (r3 + 1);
    r0 = (r3 & 255);
    r5 = (r4 & 65535);
}

loc_80535C10:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(59))) {
        goto loc_80535C20;
    }
}

loc_80535C14:
{
    r0 = (r3 + -60);
    r6 = 1;
    r3 = (r0 & 255);
}

loc_80535C20:
{
    r0 = MemoryInline::FlatRead16((r29 + 8));
    r6 = (r6 + r0);
    r0 = (r6 & 65535);
}

loc_80535C30:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(999))) {
        goto loc_80535C40;
    }
}

loc_80535C34:
{
    r6 = 999;
    r3 = 59;
    r5 = 999;
}

loc_80535C40:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 26), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r29 + 20), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite8((r29 + 22), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite16((r29 + 24), static_cast<uint16_t>(r5));
    goto loc_80535C68;
}

loc_80535C58:
{
    MemoryInline::FlatWrite8((r29 + 26), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite16((r29 + 20), static_cast<uint16_t>(r31));
    MemoryInline::FlatWrite8((r29 + 22), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite16((r29 + 24), static_cast<uint16_t>(r5));
}

loc_80535C68:
{
    r0 = MemoryInline::FlatRead8((r29 + 64));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80535C70:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80535C80;
    }
}

loc_80535C74:
{
    r3 = MemoryInline::FlatRead32((r29 + 72));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 72), r0);
}

loc_80535C80:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    r28 = MemoryInline::FlatRead32((r1 + 48));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF0000FFB gpr_write=0xF0000FFB gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80535904 func_80535904 preserves=true fpr_mask=0x00000000
