#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807381A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807381A4;

loc_807381A4:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 144), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 144);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r4 = MemoryInline::FlatRead32(r3);
    r30 = 0x808A0000u;
    r31 = 0x808D0000u;
    r28 = r3;
    r29 = MemoryInline::FlatRead32(r4);
    r30 = (r30 + 9960);
    r31 = (r31 + -21824);
    r3 = r29;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r27 = r3;
    r3 = r29;
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r9 = MemoryInline::FlatRead32(r3);
    r4 = (r1 + 68);
    r8 = MemoryInline::FlatRead32((r3 + 4));
    r5 = (r1 + 80);
    r7 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r1 + 56);
    r6 = MemoryInline::FlatRead32((r27 + 116));
    r0 = MemoryInline::FlatRead32((r27 + 120));
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRam32((r1 + 80), r6);
    r0 = MemoryInline::FlatRead32((r27 + 124));
    MemoryInline::FlatWriteRam32((r1 + 88), r0);
    r6 = MemoryInline::FlatRead32((r27 + 56));
    r0 = MemoryInline::FlatRead32((r27 + 60));
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    MemoryInline::FlatWriteRam32((r1 + 68), r6);
    r0 = MemoryInline::FlatRead32((r27 + 64));
    MemoryInline::FlatWriteRam32((r1 + 92), r9);
    MemoryInline::FlatWriteRam32((r1 + 96), r8);
    MemoryInline::FlatWriteRam32((r1 + 100), r7);
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    // inline leaf 0x80537830 (19 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f7.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f0.d, f7.d);
    f5.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f3.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f2.d = PpcFmulsInline(f1.d, f7.d);
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32(r3, f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80537830
    r3 = (r1 + 56);
    ctx->lr = 0x80738250u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80243B6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead32((r28 + 4));
    r3 = MemoryInline::FlatRead32((r28 + 8));
}

loc_8073825C:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r28 + 8), r0);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8073827C;
    }
}

loc_80738268:
{
}

loc_8073826C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_807382E0;
    }
}

loc_80738270:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_80738274:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073834C;
    }
}

loc_80738278:
{
    goto loc_80738538;
}

loc_8073827C:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 80));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 88));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 92));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f1.d = std::fabs(f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 & 1);
    r0 = (r0 ^ r3);
    r0 = (r0 - r3);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807382CC;
    }
}

loc_807382C4:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    goto loc_807382D0;
}

loc_807382CC:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 24));
}

loc_807382D0:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
    MemoryInline::FlatWriteFloat32((r28 + 16), f0.d);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r28 + 4), r0);
}

loc_807382E0:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 92));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 100));
    r3 = MemoryInline::FlatRead32((r28 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 12));
    r0 = (r3 + 1);
    f1.d = std::fabs(f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword1;
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r3 = (r3 & 1);
    r3 = (r3 ^ r4);
    r6 = fctiwzword2;
    r3 = (r3 - r4);
    r3 = (r3 + 2);
    MemoryInline::FlatWrite32((r28 + 12), r3);
    r4 = MemoryInline::FlatRead16((r31 + 70));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r5 = MemoryInline::FlatRead16((r31 + 68));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r3 = PPC_Divw(static_cast<int32_t>(r6), static_cast<int32_t>(r4));
    MemoryInline::FlatWrite32((r28 + 4), r0);
    r0 = (r3 * r4);
    r0 = (r6 - r0);
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r28 + 8), r0);
}

loc_8073834C:
{
    r3 = MemoryInline::FlatRead32((r29 + 16));
    r4 = MemoryInline::FlatRead32((r3 + 344));
    r3 = MemoryInline::FlatRead32((r4 + 496));
    f31.d = MemoryInline::FlatReadFloat32((r4 + 512));
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x80590A40 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80590A40
    r0 = MemoryInline::FlatRead32((r3 + 700));
}

loc_8073836C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80738378;
    }
}

loc_80738370:
{
}

loc_80738374:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80738384;
    }
}

loc_80738378:
{
    MemoryInline::FlatWriteFloat32((r3 + 696), f31.d);
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 700), r0);
}

loc_80738384:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 92));
    r5 = 0x809C0000u;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 96));
    r3 = (r1 + 32);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 100));
    r4 = (r1 + 68);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 11232));
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f1.d = MemoryInline::FlatReadFloat32((r1 + 44));
    r3 = (r1 + 20);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r4 = (r1 + 56);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 56));
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f1.d = MemoryInline::FlatReadFloat32((r28 + 16));
    r3 = (r1 + 8);
    r4 = (r1 + 20);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    f1.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = MemoryInline::FlatRead32((r29 + 16));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    r3 = MemoryInline::FlatRead32((r3 + 344));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    r3 = MemoryInline::FlatRead32((r3 + 496));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f3.d);
    r3 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    // inline leaf 0x80590A40 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80590A40
    r0 = MemoryInline::FlatRead32((r3 + 700));
}

loc_8073844C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80738468;
    }
}

loc_80738450:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    MemoryInline::FlatWriteFloat32((r3 + 680), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    MemoryInline::FlatWriteFloat32((r3 + 684), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::FlatWriteFloat32((r3 + 688), f0.d);
}

loc_80738468:
{
    r0 = MemoryInline::FlatRead32((r28 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80738470:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80738538;
    }
}

loc_80738474:
{
    r3 = MemoryInline::FlatRead32((r28 + 12));
    r0 = (r3 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8073847C:
{
    MemoryInline::FlatWrite32((r28 + 12), r0);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807384A0;
    }
}

loc_80738484:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 16));
    r0 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 24));
    MemoryInline::FlatWrite32((r28 + 4), r0);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 16), f0.d);
    goto loc_80738538;
}

loc_807384A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807384E8;
    }
}

loc_807384A4:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 92));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    r3 = MemoryInline::FlatRead16((r31 + 74));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = MemoryInline::FlatRead16((r31 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    f1.d = std::fabs(f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    r5 = fctiwzword3;
    r0 = PPC_Divw(static_cast<int32_t>(r5), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r5 - r0);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r28 + 8), r0);
    goto loc_80738538;
}

loc_807384E8:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 92));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r28 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 24));
    f3.d = std::fabs(f3.d);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    MemoryInline::FlatWriteFloat32((r28 + 16), f1.d);
    r3 = MemoryInline::FlatRead16((r31 + 70));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    f0.d = PPC_Fctiwz(f0.d);
    r4 = MemoryInline::FlatRead16((r31 + 68));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    r5 = fctiwzword4;
    r0 = PPC_Divw(static_cast<int32_t>(r5), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r5 - r0);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r28 + 8), r0);
}

loc_80738538:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 144);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 144));
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800007F gpr_write=0xF8000BFB gpr_return=0x00000018 fpr_read=0x8000001F fpr_write=0x800000FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x807381A4 func_807381A4 preserves=false fpr_mask=0x80000000
