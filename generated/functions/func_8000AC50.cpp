#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8000AC50(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r6_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8000AC50;

loc_8000AC50:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    r3 = 0x80240000u;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r3 = (r3 + 24124);
    r3 = (r3 + 250);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r5 = MemoryInline::FlatRead32((r31 + 164));
    r4 = MemoryInline::FlatRead32((r31 + 156));
    r0 = (r5 + 1023);
    r5 = MemoryInline::FlatRead32((r31 + 160));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(22));
    r6 = (r6_rot_0 & 4194303);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8000AC94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A25D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r29 = 0;
    r30 = 1;
    MemoryInline::FlatWrite32((r31 + 88), r29);
    MemoryInline::FlatWrite32((r31 + 100), r29);
    MemoryInline::FlatWrite32((r31 + 104), r29);
    MemoryInline::FlatWrite32((r31 + 92), r30);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801B1BE4u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8000ACB8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000ACC4;
    }
}

loc_8000ACBC:
{
    MemoryInline::FlatWrite32((r31 + 88), r30);
    goto loc_8000ACC8;
}

loc_8000ACC4:
{
    MemoryInline::FlatWrite32((r31 + 88), r29);
}

loc_8000ACC8:
{
    ctx->lr = 0x8000ACCCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B1D84u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 255);
}

loc_8000ACD4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8000ACE4;
    }
}

loc_8000ACD8:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 100), r0);
    goto loc_8000ACEC;
}

loc_8000ACE4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 100), r0);
}

loc_8000ACEC:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801B1CACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8000ACF8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000AD08;
    }
}

loc_8000ACFC:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 104), r0);
    goto loc_8000AD10;
}

loc_8000AD08:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 104), r0);
}

loc_8000AD10:
{
    ctx->lr = 0x8000AD14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B1D0Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 255);
}

loc_8000AD18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8000AD48;
    }
}

loc_8000AD1C:
{
}

loc_8000AD20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8000AD58;
    }
}

loc_8000AD24:
{
}

loc_8000AD28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8000AD68;
    }
}

loc_8000AD2C:
{
}

loc_8000AD30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8000AD78;
    }
}

loc_8000AD34:
{
}

loc_8000AD38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8000AD88;
    }
}

loc_8000AD3C:
{
}

loc_8000AD40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_8000AD98;
    }
}

loc_8000AD44:
{
    goto loc_8000ADAC;
}

loc_8000AD48:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 96), r0);
    MemoryInline::FlatWrite32((r31 + 92), r0);
    goto loc_8000ADB8;
}

loc_8000AD58:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 96), r0);
    MemoryInline::FlatWrite32((r31 + 92), r0);
    goto loc_8000ADB8;
}

loc_8000AD68:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r31 + 96), r0);
    MemoryInline::FlatWrite32((r31 + 92), r0);
    goto loc_8000ADB8;
}

loc_8000AD78:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r31 + 96), r0);
    MemoryInline::FlatWrite32((r31 + 92), r0);
    goto loc_8000ADB8;
}

loc_8000AD88:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r31 + 96), r0);
    MemoryInline::FlatWrite32((r31 + 92), r0);
    goto loc_8000ADB8;
}

loc_8000AD98:
{
    r3 = 6;
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 96), r3);
    MemoryInline::FlatWrite32((r31 + 92), r0);
    goto loc_8000ADB8;
}

loc_8000ADAC:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 96), r0);
    MemoryInline::FlatWrite32((r31 + 92), r0);
}

loc_8000ADB8:
{
    r4 = MemoryInline::FlatRead32((r31 + 92));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8000ADC0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000ADE4;
    }
}

loc_8000ADC4:
{
    r3 = 0x80240000u;
    r3 = (r3 + 24124);
    r3 = (r3 + 295);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8000ADD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A25D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 96), r0);
    MemoryInline::FlatWrite32((r31 + 92), r0);
}

loc_8000ADE4:
{
    r29 = 1;
    ctx->lr = 0x8000ADECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801BACD8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_8000ADF0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8000ADFC;
    }
}

loc_8000ADF4:
{
}

loc_8000ADF8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(5))) {
        goto loc_8000AE00;
    }
}

loc_8000ADFC:
{
    r29 = 1;
}

loc_8000AE00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8000AE04:
{
    MemoryInline::FlatWrite32((r31 + 108), r29);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000AE18;
    }
}

loc_8000AE0C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(1));
}

loc_8000AE10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000AE28;
    }
}

loc_8000AE14:
{
    goto loc_8000AE3C;
}

loc_8000AE18:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32656));
    MemoryInline::FlatWriteFloat32((r31 + 116), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 120), f0.d);
    goto loc_8000AE48;
}

loc_8000AE28:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -32656));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32648));
    MemoryInline::FlatWriteFloat32((r31 + 116), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 120), f0.d);
    goto loc_8000AE48;
}

loc_8000AE3C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32656));
    MemoryInline::FlatWriteFloat32((r31 + 116), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 120), f0.d);
}

loc_8000AE48:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -32644));
    r3 = (r31 + 248);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 116));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 124), f0.d);
    ctx->lr = 0x8000AE60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B2074u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_8000AE64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000AE88;
    }
}

loc_8000AE68:
{
    r3 = 0x80240000u;
    r3 = (r3 + 24124);
    r3 = (r3 + 356);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8000AE7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A25D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = -1;
    MemoryInline::FlatWrite32((r31 + 248), r0);
    goto loc_8000AEA8;
}

loc_8000AE88:
{
    r3 = 0x80240000u;
    r4 = MemoryInline::FlatRead32((r31 + 248));
    r3 = (r3 + 24124);
    r5 = MemoryInline::FlatRead16((r31 + 4348));
    r6 = MemoryInline::FlatRead16((r31 + 4350));
    r3 = (r3 + 392);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8000AEA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A25D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8000AEA8:
{
    r4 = MemoryInline::FlatRead32((r31 + 248));
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 132), r0);
    r0 = (r4 + 65536);
}

loc_8000AEBC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_8000AEC8;
    }
}

loc_8000AEC0:
{
    r0 = 0;
    goto loc_8000AED8;
}

loc_8000AEC8:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r3 = (r3_rot_1 & 255);
    r0 = (r3 + -65);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
}

loc_8000AED8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000AEDC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000AF0C;
    }
}

loc_8000AEE0:
{
    r0 = (r4 + 65536);
}

loc_8000AEE8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_8000AEF4;
    }
}

loc_8000AEEC:
{
    r0 = 0;
    goto loc_8000AF04;
}

loc_8000AEF4:
{
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r3 = (r3_rot_3 & 255);
    r0 = (r3 + -95);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_3 & 134217727);
}

loc_8000AF04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000AF08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000AF14;
    }
}

loc_8000AF0C:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r31 + 132), r0);
}

loc_8000AF14:
{
    r3 = 0x80240000u;
    r4 = MemoryInline::FlatRead32((r31 + 132));
    r3 = (r3 + 24124);
    r3 = (r3 + 460);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8000AF2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A25D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r13 + -27704));
    r3 = r31;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -32640));
    r4 = MemoryInline::FlatRead32((r4 + 80));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32636));
    MemoryInline::FlatWriteFloat32((r4 + 80), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -32632));
    MemoryInline::FlatWriteFloat32((r4 + 84), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32628));
    MemoryInline::FlatWriteFloat32((r4 + 88), f1.d);
    MemoryInline::FlatWriteFloat32((r4 + 92), f0.d);
    ctx->lr = 0x8000AF5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000A8F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8000AC50 func_8000AC50 preserves=true fpr_mask=0x00000000
