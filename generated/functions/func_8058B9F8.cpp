#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8058B9F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8058B9F8;

loc_8058B9F8:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 6920);
    MemoryInline::FlatWriteRam32((r1 + 72), r30);
    r30 = r3;
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & 1024);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8058BA38:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8058BDB8;
    }
}

loc_8058BA3C:
{
    r0 = MemoryInline::FlatRead16((r3 + 96));
    r0 = (r0 & 1);
}

loc_8058BA44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8058BA50;
    }
}

loc_8058BA48:
{
    f4.d = MemoryInline::FlatReadFloat32((r31 + 104));
    goto loc_8058BA54;
}

loc_8058BA50:
{
    f4.d = MemoryInline::FlatReadFloat32((r31 + 32));
}

loc_8058BA54:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f1.d = PpcFmulsInline(f4.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f1.d);
    f2.d = PpcFmulsInline(f1.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f1.d = PpcFmulsInline(f4.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f1.d);
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 40));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f3.d);
    f2.d = PpcFmulsInline(f3.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8058BA94:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & 1);
}

loc_8058BAA0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8058BAF4;
    }
}

loc_8058BAA4:
{
    r0 = MemoryInline::FlatRead16((r3 + 96));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8058BAAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8058BAB8;
    }
}

loc_8058BAB0:
{
    f31.d = MemoryInline::FlatReadFloat32((r31 + 108));
    goto loc_8058BABC;
}

loc_8058BAB8:
{
    f31.d = MemoryInline::FlatReadFloat32((r31 + 24));
}

loc_8058BABC:
{
    r3 = (r1 + 56);
    ctx->lr = 0x8058BAC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243ADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    SetCRFloatResident(cr, 0, f31.d, f1.d);
}

loc_8058BAC8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8058BAD0;
    }
}

loc_8058BACC:
{
    f1.d = f31.d;
}

loc_8058BAD0:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f0.d);
}

loc_8058BAF4:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f2.d = PpcFmulsInline(f1.d, f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8058BB1C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8058BB28:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8058BB54;
    }
}

loc_8058BB2C:
{
    ctx->lr = 0x8058BB30u;
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
    f0.d = MemoryInline::FlatReadFloat32((r31 + 112));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8058BB38:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8058BB54;
    }
}

loc_8058BB3C:
{
    r3 = r30;
    // inline leaf 0x80590794 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 28));
    // end of inlined leaf 0x80590794
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 256));
    ctr = r12;
    ctx->lr = 0x8058BB54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8058BB54:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 32));
    r3 = r30;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 36));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 40));
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 40), f0.d);
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r5 = r3;
    r3 = (r1 + 56);
    r4 = r3;
    r5 = (r5 + 56);
    // inline leaf 0x805AEBD0 (21 guest instruction(s))
    f5.d = MemoryInline::FlatReadFloat32(r5);
    f4.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f2.d = PpcFmulsInline(f5.d, f4.d);
    f8.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f0.d = PpcFmulsInline(f1.d, f3.d);
    f7.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f8.d, f7.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f0.d));
    f2.d = PpcFmulsInline(f5.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PpcFmulsInline(f8.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f0.d));
    MemoryInline::FlatWriteRamFloat32(r3, f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x805AEBD0
    r3 = r30;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    f1.d = MemoryInline::FlatReadFloat32((r3 + 104));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 104), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 108));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 108), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 112));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 112), f0.d);
    r3 = r30;
    // inline leaf 0x8059084C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 48));
    // end of inlined leaf 0x8059084C
    f1.d = MemoryInline::FlatReadFloat32((r3 + 60));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 60), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 64), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 68));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 68), f0.d);
    r3 = r30;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r0 = MemoryInline::FlatRead16((r30 + 96));
    f31.d = MemoryInline::FlatReadFloat32((r3 + 32));
    r0 = (r0 & 1);
}

loc_8058BC24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8058BC30;
    }
}

loc_8058BC28:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 104));
    goto loc_8058BC34;
}

loc_8058BC30:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 32));
}

loc_8058BC34:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 76));
    r3 = r30;
    f30.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f0.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f30.d));
    MemoryInline::FlatWriteFloat32((r3 + 32), f0.d);
    r3 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8058BC64:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8058BD94;
    }
}

loc_8058BC68:
{
    f30.d = MemoryInline::FlatReadFloat32((r31 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f30.d));
    MemoryInline::FlatWriteFloat32((r30 + 72), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8058BC80:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8058BC90;
    }
}

loc_8058BC84:
{
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    r0 = 1;
    goto loc_8058BC94;
}

loc_8058BC90:
{
    r0 = 0;
}

loc_8058BC94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8058BC98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8058BD94;
    }
}

loc_8058BC9C:
{
    f2.d = MemoryInline::FlatReadFloat32(r31);
    r3 = (r1 + 40);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f3.d = f2.d;
    f4.d = f2.d;
    // inline leaf 0x80239DFC (5 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32(r3, f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f3.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    // end of inlined leaf 0x80239DFC
    f1.d = f30.d;
    r3 = (r1 + 40);
    r4 = (r30 + 44);
    r5 = (r1 + 24);
    ctx->lr = 0x8058BCC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023A5C4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r30;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r4 = r3;
    f10.d = MemoryInline::FlatReadFloat32((r3 + 252));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    r3 = (r1 + 8);
    f31.d = MemoryInline::FlatReadFloat32((r4 + 240));
    f13.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f7.d = PpcFmulsInline(f10.d, f0.d);
    f12.d = MemoryInline::FlatReadFloat32((r4 + 244));
    f5.d = PpcFmulsInline(f31.d, f0.d);
    f11.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f4.d = PpcFmulsInline(f10.d, f13.d);
    f9.d = MemoryInline::FlatReadFloat32((r4 + 248));
    f8.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f6.d = PpcFmulsInline(f31.d, f13.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f3.d = PpcFmulsInline(f12.d, f0.d);
    f2.d = PpcFmulsInline(f10.d, f11.d);
    f1.d = PpcFmulsInline(f9.d, f0.d);
    f0.d = PpcFmulsInline(f10.d, f8.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f6.d));
    f7.d = PpcFmulsInline(f12.d, f11.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f6.d = PpcFmulsInline(f12.d, f8.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f7.d));
    f1.d = PpcFmulsInline(f9.d, f8.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f5.d));
    f4.d = PpcFmulsInline(f9.d, f13.d);
    f2.d = PpcFmulsInline(f31.d, f11.d);
    f6.d = PpcFmulsInline(f9.d, f11.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f3.d = PpcFmulsInline(f31.d, f8.d);
    f0.d = PpcFmulsInline(f12.d, f13.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f1.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f6.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f3.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    // inline leaf 0x80239DFC (5 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32(r3, f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f3.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    // end of inlined leaf 0x80239DFC
    r3 = r30;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 240), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r3 + 244), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r3 + 248), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    MemoryInline::FlatWriteFloat32((r3 + 252), f0.d);
}

loc_8058BD94:
{
    f31.d = MemoryInline::FlatReadFloat32((r30 + 136));
    r3 = r30;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f2.d = MemoryInline::FlatReadFloat32((r3 + 156));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 88));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 156), f0.d);
}

loc_8058BDB8:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r0 = MemoryInline::FlatRead32((r1 + 116));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
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
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8058B9F8 func_8058B9F8 preserves=false fpr_mask=0xC0000000
