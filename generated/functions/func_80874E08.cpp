#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80874E08(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r1_psq_tmp_0 = 0;

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
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80874E08;

loc_80874E08:
{
    MemoryInline::FlatWriteRam32((r1 + -208), r1);
    r1 = (r1 + -208);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 192), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 188), r31);
    r31 = 0x808E0000u;
    r31 = (r31 + -14920);
    MemoryInline::FlatWriteRam32((r1 + 184), r30);
    r30 = 0;
    MemoryInline::FlatWriteRam32((r1 + 180), r29);
    r29 = r3;
    r4 = MemoryInline::FlatRead32((r4 + 17200));
    r0 = MemoryInline::FlatRead32((r4 + 80));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80874E48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80874EB0;
    }
}

loc_80874E4C:
{
    f31.d = MemoryInline::FlatReadFloat32((r3 + 52));
    // inline leaf 0x8082B3EC (5 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 17200));
    r3 = MemoryInline::FlatRead32((r3 + 80));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 52));
    // end of inlined leaf 0x8082B3EC
    f0.d = MemoryInline::FlatReadFloat32((r31 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80874E60:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80874EB0;
    }
}

loc_80874E64:
{
    r3 = (r1 + 104);
    r4 = (r29 + 192);
    // inline leaf 0x805147D4 (10 guest instruction(s))
    f2.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f2.d = (-(f2.d));
    f1.d = (-(f1.d));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    // end of inlined leaf 0x805147D4
    f1.d = MemoryInline::FlatReadFloat32((r31 + 44));
    r3 = (r1 + 92);
    r4 = (r1 + 104);
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
    r4 = 0x809C0000u;
    r3 = (r1 + 80);
    r4 = (r4 + 18600);
    r5 = (r1 + 92);
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
    f2.d = MemoryInline::FlatReadFloat32((r1 + 80));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 88));
    MemoryInline::FlatWriteRamFloat32((r1 + 164), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 168), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 172), f0.d);
    goto loc_80874EF8;
}

loc_80874EB0:
{
    r3 = (r1 + 68);
    r4 = (r29 + 192);
    // inline leaf 0x805147D4 (10 guest instruction(s))
    f2.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f2.d = (-(f2.d));
    f1.d = (-(f1.d));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    // end of inlined leaf 0x805147D4
    f1.d = MemoryInline::FlatReadFloat32((r31 + 40));
    r3 = (r1 + 56);
    r4 = (r1 + 68);
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
    r4 = 0x809C0000u;
    r3 = (r1 + 44);
    r4 = (r4 + 18600);
    r5 = (r1 + 56);
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
    f2.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::FlatWriteRamFloat32((r1 + 164), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 168), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 172), f0.d);
}

loc_80874EF8:
{
    r6 = MemoryInline::FlatRead32((r29 + 192));
    r3 = (r1 + 20);
    r0 = MemoryInline::FlatRead32((r29 + 196));
    r4 = (r29 + 192);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r5 = (r1 + 164);
    MemoryInline::FlatWriteRam32((r1 + 32), r6);
    r0 = MemoryInline::FlatRead32((r29 + 200));
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
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
    f1.d = MemoryInline::FlatReadFloat32((r31 + 12));
    r3 = (r1 + 152);
    r4 = (r1 + 32);
    r5 = (r1 + 20);
    ctx->lr = 0x80874F34u;
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
    InvokeDirectCpu<0x8086C098u>(ctx);
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
    f1.d = MemoryInline::FlatReadFloat32((r1 + 152));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 156));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 160));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x80874F58u;
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
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80874F60:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80874F8C;
    }
}

loc_80874F64:
{
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 152));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 156));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 160));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 152), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 156), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 160), f0.d);
}

loc_80874F8C:
{
    r3 = (r1 + 140);
    r4 = (r29 + 204);
    r5 = (r1 + 152);
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
    r3 = 0x809C0000u;
    r9 = MemoryInline::FlatRead32((r29 + 380));
    r0 = MemoryInline::FlatRead32((r29 + 384));
    r6 = 1693188096;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 20));
    r4 = (r1 + 140);
    r3 = MemoryInline::FlatRead32((r3 + 12100));
    r5 = (r29 + 204);
    r6 = (r6 + -8193);
    r7 = (r29 + 232);
    r8 = (r29 + 324);
    r9 = (r0 - r9);
    ctx->lr = 0x80874FD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    ctx->fpr[8] = f8;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8078F784u>(ctx);
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
    f8 = ctx->fpr[8];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80874FD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80875310;
    }
}

loc_80874FD8:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 16));
    r3 = (r1 + 128);
    r4 = (r29 + 256);
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
    f7.d = MemoryInline::FlatReadFloat32((r1 + 128));
    r3 = 0x808B0000u;
    f5.d = MemoryInline::FlatReadFloat32((r1 + 132));
    f1.d = PpcFmulsInline(f7.d, f7.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 136));
    f0.d = PpcFmulsInline(f5.d, f5.d);
    f8.d = MemoryInline::FlatReadFloat32((r1 + 140));
    f6.d = MemoryInline::FlatReadFloat32((r1 + 144));
    f2.d = PpcFmulsInline(f3.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8900));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f7.d));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 148));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 140), f7.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80875030:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 144), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 148), f1.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80875044:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80875190;
    }
}

loc_80875048:
{
    r5 = MemoryInline::FlatRead32((r1 + 128));
    r3 = (r1 + 116);
    r4 = MemoryInline::FlatRead32((r1 + 132));
    r0 = MemoryInline::FlatRead32((r1 + 136));
    MemoryInline::FlatWriteRam32((r1 + 116), r5);
    MemoryInline::FlatWriteRam32((r1 + 120), r4);
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    ctx->lr = 0x80875068u;
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
    f3.d = MemoryInline::FlatReadFloat32((r1 + 116));
    r3 = 0x808B0000u;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 152));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 120));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 156));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 124));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 160));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8896));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_808750A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_808750E4;
    }
}

loc_808750A4:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f1.d));
    r3 = (r1 + 8);
    r4 = (r1 + 116);
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
    f1.d = MemoryInline::FlatReadFloat32((r1 + 152));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 156));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 160));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 152), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 156), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 160), f0.d);
}

loc_808750E4:
{
    r3 = 552075264;
    r4 = MemoryInline::FlatRead32((r29 + 324));
    r0 = (r3 + 4095);
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80875158;
    }
}

loc_808750F8:
{
    r0 = (r4 & 30);
}

loc_808750FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8087512C;
    }
}

loc_80875100:
{
    f3.d = MemoryInline::FlatReadFloat32((r31 + 36));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 152));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 156));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 160));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 152), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 156), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 160), f0.d);
    goto loc_80875190;
}

loc_8087512C:
{
    f3.d = MemoryInline::FlatReadFloat32((r31 + 32));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 152));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 156));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 160));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 152), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 156), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 160), f0.d);
    goto loc_80875190;
}

loc_80875158:
{
    r3 = -804192256;
    r0 = (r3 + -4096);
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80875190;
    }
}

loc_80875168:
{
    f3.d = MemoryInline::FlatReadFloat32((r31 + 28));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 152));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 156));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 160));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 152), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 156), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 160), f0.d);
}

loc_80875190:
{
    r3 = MemoryInline::FlatRead32((r29 + 324));
    r0 = (r3 & 65536);
}

loc_80875198:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808751F0;
    }
}

loc_8087519C:
{
    r5 = 0x802A0000u;
    f2.d = MemoryInline::FlatReadFloat32((r29 + 192));
    r4 = (r5 + 16688);
    f3.d = MemoryInline::FlatReadFloat32((r5 + 16688));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r3 = 0x808B0000u;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 196));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r29 + 200));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8896));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_808751DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_808751E8;
    }
}

loc_808751E0:
{
    r30 = 2;
    goto loc_80875310;
}

loc_808751E8:
{
    r30 = 1;
    goto loc_80875310;
}

loc_808751F0:
{
    r0 = (r3 & 67108864);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808751F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80875208;
    }
}

loc_808751F8:
{
    r3 = (r29 + 324);
    r4 = 67108864;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BD96Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    goto loc_8087520C;
}

loc_80875208:
{
    r3 = 0;
}

loc_8087520C:
{
}

loc_80875210:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80875234;
    }
}

loc_80875214:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 15324));
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_80875228:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80875234;
    }
}

loc_8087522C:
{
    r30 = 1;
    goto loc_80875310;
}

loc_80875234:
{
    r3 = 552075264;
    r4 = MemoryInline::FlatRead32((r29 + 324));
    r0 = (r3 + 4095);
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808752FC;
    }
}

loc_80875248:
{
    r0 = (r4 & 1024);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8087524C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80875258;
    }
}

loc_80875250:
{
    r30 = 2;
    goto loc_80875310;
}

loc_80875258:
{
    r0 = (r4 & 512);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8087525C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80875268;
    }
}

loc_80875260:
{
    r30 = 2;
    goto loc_80875310;
}

loc_80875268:
{
    r0 = (r4 & 536870912);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8087526C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80875280;
    }
}

loc_80875270:
{
    r3 = (r29 + 324);
    r4 = 536870912;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BD96Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    goto loc_80875284;
}

loc_80875280:
{
    r3 = 0;
}

loc_80875284:
{
}

loc_80875288:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_808752AC;
    }
}

loc_8087528C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 15324));
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_4 & 7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_808752A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808752AC;
    }
}

loc_808752A4:
{
    r30 = 2;
    goto loc_80875310;
}

loc_808752AC:
{
    r0 = MemoryInline::FlatRead32((r29 + 324));
    r0 = (r0 & 536870912);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808752B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808752C8;
    }
}

loc_808752B8:
{
    r3 = (r29 + 324);
    r4 = 536870912;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BD96Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    goto loc_808752CC;
}

loc_808752C8:
{
    r3 = 0;
}

loc_808752CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808752D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808752F4;
    }
}

loc_808752D4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 15324));
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_6 & 7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_808752E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808752F4;
    }
}

loc_808752EC:
{
    r30 = 2;
    goto loc_80875310;
}

loc_808752F4:
{
    r30 = 3;
    goto loc_80875310;
}

loc_808752FC:
{
    r3 = -804192256;
    r0 = (r3 + -4096);
    r0 = (r4 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80875310;
    }
}

loc_8087530C:
{
    r30 = 4;
}

loc_80875310:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 152));
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteFloat32((r29 + 192), f0.d);
    r0 = MemoryInline::FlatRead16((r29 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 156));
    MemoryInline::FlatWriteFloat32((r29 + 196), f0.d);
    r0 = (r0 | 1);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 228));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 160));
    MemoryInline::FlatWriteFloat32((r29 + 200), f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 140));
    MemoryInline::FlatWriteFloat32((r29 + 204), f2.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 144));
    MemoryInline::FlatWriteFloat32((r29 + 208), f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 148));
    MemoryInline::FlatWriteFloat32((r29 + 212), f0.d);
    MemoryInline::FlatWrite16((r29 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r29 + 48), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 52), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 56), f0.d);
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2920));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(36));
}

loc_80875370:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808753E4;
    }
}

loc_80875374:
{
    f2.d = PpcFmulsInline(f2.d, f2.d);
    r3 = 0x808B0000u;
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8896));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_8087538C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808753B0;
    }
}

loc_80875394:
{
    r3 = 0x808B0000u;
    r5 = 0x808B0000u;
    r3 = (r3 + 22260);
    r4 = 627;
    r5 = (r5 + 22224);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x808753B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    ctx->fpr[8] = f8;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80026050u>(ctx);
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
    f8 = ctx->fpr[8];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_808753B0:
{
    r3 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8896));
    SetCRFloatResident(cr, 0, f31.d, f1.d);
}

loc_808753BC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808753C8;
    }
}

loc_808753C4:
{
    goto loc_808753D4;
}

loc_808753C8:
{
    f1.d = f31.d;
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28972));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28968));
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, f1.d, f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f1.d = PpcFmulsInline(f31.d, f1.d);
}

loc_808753D4:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 108));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_808753DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_808753E4;
    }
}

loc_808753E0:
{
    r30 = 2;
}

loc_808753E4:
{
    r3 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat32((r29 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8896));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_808753F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_808753FC;
    }
}

loc_808753F8:
{
    r30 = 1;
}

loc_808753FC:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 17200));
    r0 = MemoryInline::FlatRead32((r3 + 80));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8087540C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8087542C;
    }
}

loc_80875410:
{
    f31.d = MemoryInline::FlatReadFloat32((r29 + 52));
    // inline leaf 0x8082B3EC (5 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 17200));
    r3 = MemoryInline::FlatRead32((r3 + 80));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 52));
    // end of inlined leaf 0x8082B3EC
    f0.d = MemoryInline::FlatReadFloat32((r31 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80875424:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8087542C;
    }
}

loc_80875428:
{
    r30 = 1;
}

loc_8087542C:
{
    r3 = r30;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 192));
    r31 = MemoryInline::FlatRead32((r1 + 188));
    r30 = MemoryInline::FlatRead32((r1 + 184));
    r29 = MemoryInline::FlatRead32((r1 + 180));
    r0 = MemoryInline::FlatRead32((r1 + 212));
    ctx->lr = r0;
    r1 = (r1 + 208);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    ctx->fpr[8] = f8;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80874E08 func_80874E08 preserves=false fpr_mask=0x80000000
