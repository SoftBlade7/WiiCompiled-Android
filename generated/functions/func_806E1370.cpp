#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806E1370(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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

    goto loc_806E1370;

loc_806E1370:
{
    MemoryInline::FlatWriteRam32((r1 + -288), r1);
    r1 = (r1 + -288);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 292), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 272), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r4 = (r1 + 24);
    r5 = (r1 + 32);
    MemoryInline::FlatWriteRam32((r1 + 268), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 1648);
    MemoryInline::FlatWriteRam32((r1 + 264), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 260), r29);
    r29 = 0x808C0000u;
    r29 = (r29 + 26600);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 248));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 240));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 232));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 224));
    r3 = (r1 + 16);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    // inline leaf 0x8051201C (9 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051201C
    f4.d = MemoryInline::FlatReadFloat32(r31);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f4.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_806E1410:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806E144C;
    }
}

loc_806E1414:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 284));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 208));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80085180u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f31.d = f1.d;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = PpcFmulsInline(f2.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->lr = 0x806E1440u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f0.d = (-(f1.d));
    f31.d = PpcFmulsInline(f0.d, f31.d);
    goto loc_806E147C;
}

loc_806E144C:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 284));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 208));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80085180u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f31.d = f1.d;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = PpcFmulsInline(f2.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->lr = 0x806E1478u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f31.d = PpcFmulsInline(f1.d, f31.d);
}

loc_806E147C:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 284));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 208));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80085110u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    r0 = MemoryInline::FlatRead8((r30 + 320));
    f4.d = (-(f0.d));
    f3.d = MemoryInline::FlatReadFloat32((r29 + 24));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 288));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806E14A4:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 212));
    f1.d = PpcFmulsInline(f4.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 288), f1.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806E14D4;
    }
}

loc_806E14C4:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 284));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 284), f0.d);
    goto loc_806E1518;
}

loc_806E14D4:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 284));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 208));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80085110u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 48));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 324));
    f3.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 216));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 284));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    MemoryInline::FlatWriteFloat32((r30 + 324), f3.d);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 52));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 324), f2.d);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 284), f0.d);
}

loc_806E1518:
{
    r5 = MemoryInline::FlatRead32((r30 + 32));
    r3 = (r1 + 136);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    r4 = MemoryInline::FlatRead32((r5 + 36));
    r0 = MemoryInline::FlatRead32((r5 + 40));
    MemoryInline::FlatWriteRam32((r1 + 140), r0);
    MemoryInline::FlatWriteRam32((r1 + 136), r4);
    r0 = MemoryInline::FlatRead32((r5 + 44));
    MemoryInline::FlatWriteRam32((r1 + 144), r0);
    MemoryInline::FlatWriteRamFloat32((r1 + 140), f0.d);
    ctx->lr = 0x806E1544u;
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
    f1.d = MemoryInline::FlatReadFloat32((r30 + 284));
    r3 = (r1 + 200);
    r4 = (r1 + 136);
    ctx->lr = 0x806E1554u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    InvokeDirectCpu<0x802303BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = 0x802A0000u;
    r5 = 0x802A0000u;
    r4 = (r3 + 16640);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 16640));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r3 = (r1 + 124);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r4 = (r1 + 200);
    MemoryInline::FlatWriteRamFloat32((r1 + 212), f2.d);
    r5 = (r5 + 16688);
    MemoryInline::FlatWriteRamFloat32((r1 + 228), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 244), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    InvokeDirectCpu<0x802303F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    r0 = MemoryInline::FlatRead8((r30 + 320));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806E1590:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806E15F0;
    }
}

loc_806E1594:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 192));
    r3 = (r1 + 76);
    r4 = (r30 + 256);
    r5 = (r1 + 124);
    ctx->lr = 0x806E15A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x806E1248u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    r3 = (r1 + 64);
    MemoryInline::FlatWriteFloat32((r30 + 256), f0.d);
    r4 = (r30 + 268);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 192));
    r5 = (r1 + 136);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 80));
    MemoryInline::FlatWriteFloat32((r30 + 260), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 84));
    MemoryInline::FlatWriteFloat32((r30 + 264), f0.d);
    ctx->lr = 0x806E15D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x806E1248u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    MemoryInline::FlatWriteFloat32((r30 + 268), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 68));
    MemoryInline::FlatWriteFloat32((r30 + 272), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    MemoryInline::FlatWriteFloat32((r30 + 276), f0.d);
    goto loc_806E1620;
}

loc_806E15F0:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 124));
    MemoryInline::FlatWriteFloat32((r30 + 256), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 128));
    MemoryInline::FlatWriteFloat32((r30 + 260), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 132));
    MemoryInline::FlatWriteFloat32((r30 + 264), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 136));
    MemoryInline::FlatWriteFloat32((r30 + 268), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 140));
    MemoryInline::FlatWriteFloat32((r30 + 272), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 144));
    MemoryInline::FlatWriteFloat32((r30 + 276), f0.d);
}

loc_806E1620:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    r3 = (r30 + 256);
    MemoryInline::FlatWriteFloat32((r30 + 272), f0.d);
    ctx->lr = 0x806E1630u;
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
    r3 = (r30 + 268);
    ctx->lr = 0x806E1638u;
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
    r3 = (r1 + 112);
    r4 = (r30 + 256);
    r5 = (r30 + 268);
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
    r3 = (r1 + 112);
    ctx->lr = 0x806E1650u;
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
    f2.d = MemoryInline::FlatReadFloat32((r1 + 112));
    r4 = 0x802A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 116));
    r6 = (r4 + 16640);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 120));
    r0 = 0;
    MemoryInline::FlatWriteRamFloat32((r1 + 152), f2.d);
    r3 = (r1 + 88);
    f3.d = MemoryInline::FlatReadFloat32((r4 + 16640));
    r4 = (r1 + 152);
    MemoryInline::FlatWriteRamFloat32((r1 + 168), f1.d);
    r5 = (r1 + 100);
    f2.d = MemoryInline::FlatReadFloat32((r6 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 184), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 256));
    MemoryInline::FlatWriteRamFloat32((r1 + 156), f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f4.d = MemoryInline::FlatReadFloat32((r30 + 260));
    MemoryInline::FlatWriteRamFloat32((r1 + 172), f4.d);
    f4.d = MemoryInline::FlatReadFloat32((r30 + 264));
    MemoryInline::FlatWriteRamFloat32((r1 + 188), f4.d);
    f4.d = MemoryInline::FlatReadFloat32((r30 + 268));
    MemoryInline::FlatWriteRamFloat32((r1 + 160), f4.d);
    f4.d = MemoryInline::FlatReadFloat32((r30 + 272));
    MemoryInline::FlatWriteRamFloat32((r1 + 176), f4.d);
    f4.d = MemoryInline::FlatReadFloat32((r30 + 276));
    MemoryInline::FlatWriteRamFloat32((r1 + 192), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 164), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 180), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 196), f1.d);
    r6 = MemoryInline::FlatRead16((r30 + 44));
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r0));
    r0 = (r6 | 4);
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r0));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 152));
    MemoryInline::FlatWriteFloat32((r30 + 88), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 156));
    MemoryInline::FlatWriteFloat32((r30 + 92), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 160));
    MemoryInline::FlatWriteFloat32((r30 + 96), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 164));
    MemoryInline::FlatWriteFloat32((r30 + 100), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 168));
    MemoryInline::FlatWriteFloat32((r30 + 104), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 172));
    MemoryInline::FlatWriteFloat32((r30 + 108), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 176));
    MemoryInline::FlatWriteFloat32((r30 + 112), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 180));
    MemoryInline::FlatWriteFloat32((r30 + 116), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 184));
    MemoryInline::FlatWriteFloat32((r30 + 120), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 188));
    MemoryInline::FlatWriteFloat32((r30 + 124), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 192));
    MemoryInline::FlatWriteFloat32((r30 + 128), f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r30 + 48));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 52));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 56));
    MemoryInline::FlatWriteFloat32((r30 + 100), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 116), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 132), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 20));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    InvokeDirectCpu<0x802303F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r3 = (r1 + 52);
    r5 = (r1 + 100);
    r4 = (r4 + 24);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    r3 = (r1 + 40);
    r4 = (r1 + 52);
    r5 = (r1 + 88);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    r0 = MemoryInline::FlatRead16((r30 + 44));
    r3 = r30;
    f4.d = MemoryInline::FlatReadFloat32((r1 + 48));
    r4 = 701;
    f5.d = MemoryInline::FlatReadFloat32((r1 + 44));
    r0 = (r0 | 1);
    f6.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 224));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 228));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 232));
    MemoryInline::FlatWrite16((r30 + 44), static_cast<uint16_t>(r0));
    f1.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteFloat32((r30 + 48), f6.d);
    MemoryInline::FlatWriteFloat32((r30 + 52), f5.d);
    MemoryInline::FlatWriteFloat32((r30 + 56), f4.d);
    MemoryInline::FlatWriteFloat32((r30 + 240), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 244), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 248), f0.d);
    ctx->lr = 0x806E17D0u;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8082051Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 292));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 272));
    r31 = MemoryInline::FlatRead32((r1 + 268));
    r30 = MemoryInline::FlatRead32((r1 + 264));
    r29 = MemoryInline::FlatRead32((r1 + 260));
    ctx->lr = r0;
    r1 = (r1 + 288);
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEF9F gpr_write=0xE000107B gpr_return=0x00000018 fpr_read=0xFFFFF01E fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x806E1370 func_806E1370 preserves=false fpr_mask=0x80000000
