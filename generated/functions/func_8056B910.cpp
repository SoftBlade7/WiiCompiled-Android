#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8056B910(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8056B910;

loc_8056B910:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r5 = 0x809C0000u;
    r5 = (r5 + 6344);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x80890000u;
    r30 = (r30 + 5824);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 16));
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 16), f0.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8056B960:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8056B970;
    }
}

loc_8056B964:
{
    MemoryInline::FlatWriteFloat32((r3 + 16), f2.d);
    r0 = 1;
    goto loc_8056B974;
}

loc_8056B970:
{
    r0 = 0;
}

loc_8056B974:
{
}

loc_8056B978:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056B984;
    }
}

loc_8056B97C:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 16));
    MemoryInline::FlatWriteFloat32((r3 + 16), f0.d);
}

loc_8056B984:
{
    r4 = MemoryInline::FlatRead16((r3 + 32));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r6 = MemoryInline::FlatRead16((r5 + 12));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r4 = (r4 + 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    MemoryInline::FlatWrite16((r3 + 32), static_cast<uint16_t>(r4));
}

loc_8056B99C:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r0))) {
        goto loc_8056B9A4;
    }
}

loc_8056B9A0:
{
    MemoryInline::FlatWrite16((r3 + 32), static_cast<uint16_t>(r6));
}

loc_8056B9A4:
{
    r6 = MemoryInline::FlatRead16((r5 + 12));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r4 = MemoryInline::FlatRead16((r3 + 32));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r6 + -100);
}

loc_8056B9B4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_8056B9CC;
    }
}

loc_8056B9B8:
{
    r4 = 1;
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 30), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite16((r3 + 28), static_cast<uint16_t>(r0));
    goto loc_8056B9E0;
}

loc_8056B9CC:
{
    r0 = (r6 + -10);
}

loc_8056B9D4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_8056B9E0;
    }
}

loc_8056B9D8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 31), static_cast<uint8_t>(r0));
}

loc_8056B9E0:
{
    r0 = MemoryInline::FlatRead8((r3 + 31));
}

loc_8056B9E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056B9F4;
    }
}

loc_8056B9EC:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 20));
    goto loc_8056B9F8;
}

loc_8056B9F4:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 24));
}

loc_8056B9F8:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 24));
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 24), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8056BA0C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8056BA18;
    }
}

loc_8056BA10:
{
    MemoryInline::FlatWriteFloat32((r3 + 24), f0.d);
    goto loc_8056BA28;
}

loc_8056BA18:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 16));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8056BA20:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8056BA28;
    }
}

loc_8056BA24:
{
    MemoryInline::FlatWriteFloat32((r3 + 24), f0.d);
}

loc_8056BA28:
{
    r4 = MemoryInline::FlatRead32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 16));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r3 = (r4 + 4);
    r3 = (r3 + r0);
    ctx->lr = 0x8056BA40u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80053110u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r0 = MemoryInline::FlatRead8((r31 + 30));
    f31.d = MemoryInline::FlatReadFloat32((r31 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8056BA50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056BAA0;
    }
}

loc_8056BA54:
{
    r3 = MemoryInline::FlatRead16((r31 + 28));
    r4 = (r1 + 8);
    r0 = (r3 + 2000);
    MemoryInline::FlatWrite16((r31 + 28), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    // psq_load w=1 quant=3 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 3u>(ctx, r4));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 28));
    f1.d = PpcFmulsInline(f0.d, PPC_PsToScalarInline(f1.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
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
    cr = ctx->cr;
    f3.d = (-(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 36));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f31.d = PpcFmulsInline(f31.d, f0.d);
}

loc_8056BAA0:
{
    f1.d = f31.d;
    r3 = (r31 + 20);
    r4 = (r1 + 12);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x805AEE14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    r3 = r31;
    // inline leaf 0x80590A40 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80590A40
    r29 = r3;
    r30 = 0;
    r28 = r29;
    goto loc_8056BAE8;
}

loc_8056BAC8:
{
    r12 = MemoryInline::FlatRead32((r31 + 12));
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r28 + 216));
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x8056BAE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r28 = (r28 + 4);
    r30 = (r30 + 1);
}

loc_8056BAE8:
{
    r0 = MemoryInline::FlatRead32((r29 + 240));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_8056BAF0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8056BAC8;
    }
}

loc_8056BAF4:
{
    r3 = r31;
    // inline leaf 0x8059069C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // end of inlined leaf 0x8059069C
    r12 = MemoryInline::FlatRead32((r3 + 12));
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x8056BB0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r29 = 0;
    goto loc_8056BB34;
}

loc_8056BB14:
{
    r3 = r31;
    r4 = r29;
    // inline leaf 0x805906B4 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // end of inlined leaf 0x805906B4
    r12 = MemoryInline::FlatRead32((r3 + 12));
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x8056BB30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r29 = (r29 + 1);
}

loc_8056BB34:
{
    r3 = r31;
    // inline leaf 0x805902DC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead16((r3 + 12));
    // end of inlined leaf 0x805902DC
    r0 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r0));
}

loc_8056BB44:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8056BB14;
    }
}

loc_8056BB48:
{
    r29 = 0;
    goto loc_8056BB70;
}

loc_8056BB50:
{
    r3 = r31;
    r4 = r29;
    // inline leaf 0x805906DC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    // end of inlined leaf 0x805906DC
    r12 = MemoryInline::FlatRead32((r3 + 12));
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x8056BB6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r29 = (r29 + 1);
}

loc_8056BB70:
{
    r3 = r31;
    // inline leaf 0x805902EC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead16((r3 + 14));
    // end of inlined leaf 0x805902EC
    r0 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r0));
}

loc_8056BB80:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8056BB50;
    }
}

loc_8056BB84:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 52));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8056B910 func_8056B910 preserves=false fpr_mask=0x80000000
