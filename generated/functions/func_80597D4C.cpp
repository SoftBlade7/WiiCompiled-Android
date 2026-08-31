#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80597D4C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r30_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80597D4C;

loc_80597D4C:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRam32((r1 + 108), r31);
    r31 = 0x808B0000u;
    r31 = (r31 + 25920);
    MemoryInline::FlatWriteRam32((r1 + 104), r30);
    MemoryInline::FlatWriteRam32((r1 + 100), r29);
    r29 = 0;
    MemoryInline::FlatWriteRam32((r1 + 96), r28);
    r28 = r3;
    r4 = MemoryInline::FlatRead32(r3);
    r6 = MemoryInline::FlatRead16((r3 + 64));
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (0 - r6);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r4 = (r4 | r6);
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r30 = (r30_rot_0 & 1);
    r0 = (r0 & 67108864);
}

loc_80597DA0:
{
    r4 = 1;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80597DB8;
    }
}

loc_80597DA8:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r0 & 134217728);
}

loc_80597DB0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80597DB8;
    }
}

loc_80597DB4:
{
    r4 = 0;
}

loc_80597DB8:
{
}

loc_80597DBC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80597FB8;
    }
}

loc_80597DC0:
{
    r3 = MemoryInline::FlatRead16((r3 + 70));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80597DC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80597FB8;
    }
}

loc_80597DCC:
{
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 76), r3);
    r4 = 0x80890000u;
    r3 = r28;
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    f2.d = MemoryInline::FlatReadFloat64((r4 + 8008));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    MemoryInline::FlatWriteRam32((r1 + 84), r6);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 80));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r4 = MemoryInline::FlatRead32((r28 + 24));
    r5 = r3;
    r3 = (r1 + 56);
    r6 = 1;
    r4 = MemoryInline::FlatRead32((r4 + 16));
    r5 = (r5 + 56);
    r4 = (r4 + 28);
    ctx->lr = 0x80597E24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805AE9ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead32(r28);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r5 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r5 & 2097152);
}

loc_80597E34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80597EAC;
    }
}

loc_80597E38:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & -2147483648);
}

loc_80597E40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80597E54;
    }
}

loc_80597E44:
{
    r3 = 671154176;
    r0 = (r3 + -32768);
    r0 = (r5 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80597E5C;
    }
}

loc_80597E54:
{
    r29 = 1;
    goto loc_80597FBC;
}

loc_80597E5C:
{
    r5 = MemoryInline::FlatRead32((r28 + 24));
    r3 = r28;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 56));
    r4 = MemoryInline::FlatRead32((r5 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    r4 = MemoryInline::FlatRead32((r5 + 16));
    f31.d = MemoryInline::FlatReadFloat32((r4 + 44));
    // inline leaf 0x805903AC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // end of inlined leaf 0x805903AC
    f1.d = f31.d;
    r4 = (r1 + 44);
    ctx->lr = 0x80597EA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805A01CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    goto loc_80597FBC;
}

loc_80597EAC:
{
    r3 = MemoryInline::FlatRead32((r28 + 24));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f31.d);
    f1.d = PpcFmulsInline(f1.d, f31.d);
    f0.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & -2147483648);
}

loc_80597EF4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80597F0C;
    }
}

loc_80597EF8:
{
    r3 = 671154176;
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r3 + -32768);
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80597FA0;
    }
}

loc_80597F0C:
{
    r3 = r28;
    // inline leaf 0x8059084C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 48));
    // end of inlined leaf 0x8059084C
    r0 = MemoryInline::FlatRead32((r3 + 44));
    r0 = (r0 & 32768);
}

loc_80597F1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80597FA0;
    }
}

loc_80597F20:
{
    r3 = r28;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r5 = r3;
    r3 = (r1 + 32);
    r4 = r3;
    r5 = (r5 + 104);
    // inline leaf 0x805AEB88 (18 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f5.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f4.d = PpcFmulsInline(f5.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f2.d = PpcFmulsInline(f3.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PpcFmulsInline(f5.d, f0.d);
    MemoryInline::FlatWriteRamFloat32(r3, f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x805AEB88
    r3 = r28;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f3.d = MemoryInline::FlatReadFloat32((r28 + 72));
    r4 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat32((r3 + 104));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 76));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 108));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r28 + 80));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 112));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 7960));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80597F7C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80597FA0;
    }
}

loc_80597F80:
{
    r3 = 0x802A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16640));
    r3 = (r3 + 16640);
    MemoryInline::FlatWriteFloat32((r28 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r28 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r28 + 80), f0.d);
}

loc_80597FA0:
{
    r3 = r28;
    // inline leaf 0x805903AC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // end of inlined leaf 0x805903AC
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8));
    r4 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    InvokeDirectCpu<0x805A014Cu>(ctx);
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    goto loc_80597FBC;
}

loc_80597FB8:
{
    r29 = 1;
}

loc_80597FBC:
{
}

loc_80597FC0:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8059801C;
    }
}

loc_80597FC4:
{
    r3 = MemoryInline::FlatRead32(r28);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r4 & 512);
}

loc_80597FD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80597FE0;
    }
}

loc_80597FD8:
{
    f31.d = MemoryInline::FlatReadFloat32((r31 + 20));
    goto loc_80597FE4;
}

loc_80597FE0:
{
    f31.d = MemoryInline::FlatReadFloat32((r31 + 84));
}

loc_80597FE4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2920));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(15));
}

loc_80597FF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80598004;
    }
}

loc_80597FF8:
{
    r0 = (r4 & 2097152);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80597FFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80598004;
    }
}

loc_80598000:
{
    f31.d = MemoryInline::FlatReadFloat32((r31 + 28));
}

loc_80598004:
{
    r3 = r28;
    // inline leaf 0x805903AC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // end of inlined leaf 0x805903AC
    f2.d = f31.d;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 12));
    r4 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x805A02B8u>(ctx);
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
}

loc_8059801C:
{
    r3 = MemoryInline::FlatRead32(r28);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 512);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8059802C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805980B0;
    }
}

loc_80598030:
{
    r3 = r28;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r5 = MemoryInline::FlatRead32((r3 + 200));
    r4 = MemoryInline::FlatRead32((r3 + 204));
    r0 = MemoryInline::FlatRead32((r3 + 208));
    r3 = r28;
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    MemoryInline::FlatWriteRam32((r1 + 24), r4);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r4 = MemoryInline::FlatRead32((r28 + 24));
    r5 = r3;
    r3 = (r1 + 8);
    r6 = 1;
    r4 = MemoryInline::FlatRead32((r4 + 16));
    r5 = (r5 + 56);
    r4 = (r4 + 28);
    ctx->lr = 0x80598078u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805AE9ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8016));
    r3 = r28;
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    MemoryInline::FlatWriteFloat32((r3 + 200), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteFloat32((r3 + 204), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r3 + 208), f0.d);
}

loc_805980B0:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 132));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 112));
    r31 = MemoryInline::FlatRead32((r1 + 108));
    r30 = MemoryInline::FlatRead32((r1 + 104));
    r29 = MemoryInline::FlatRead32((r1 + 100));
    r28 = MemoryInline::FlatRead32((r1 + 96));
    ctx->lr = r0;
    r1 = (r1 + 128);
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000007F gpr_write=0xF00000FB gpr_return=0x00000018 fpr_read=0x800003FF fpr_write=0x800003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80597D4C func_80597D4C preserves=false fpr_mask=0x80000000
