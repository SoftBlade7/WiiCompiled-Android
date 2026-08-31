#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80196964(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;

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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80196964;

loc_80196964:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r0 = MemoryInline::FlatRead8((r4 + 54));
}

loc_80196994:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_801969A8;
    }
}

loc_80196998:
{
}

loc_8019699C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_801969A8;
    }
}

loc_801969A0:
{
}

loc_801969A4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_80196A48;
    }
}

loc_801969A8:
{
    f4.d = MemoryInline::FlatReadFloat64((r2 + -26496));
    r8 = (r4 + 32);
    f3.d = MemoryInline::FlatReadFloat32((r2 + -26488));
    r9 = (r3 + 232);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -26484));
    r0 = (r3 + 196);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -26480));
    r4 = -1;
    r7 = 1127219200;
    r5 = 0;
}

loc_801969D0:
{
    r6 = MemoryInline::FlatRead16((r8 + 4));
}

loc_801969D8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80196A30;
    }
}

loc_801969DC:
{
    r6 = MemoryInline::FlatRead16(r8);
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    MemoryInline::FlatWriteRam32((r1 + 8), r7);
    r6 = (r6 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 16), r7);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteFloat32(r9, f0.d);
    r6 = MemoryInline::FlatRead16((r8 + 2));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r6 = (r6 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r6);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r9 + 4), f0.d);
    MemoryInline::FlatWrite8((r9 + 8), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r9 + 9), static_cast<uint8_t>(r5));
    goto loc_80196A34;
}

loc_80196A30:
{
    MemoryInline::FlatWrite8((r9 + 8), static_cast<uint8_t>(r4));
}

loc_80196A34:
{
    r9 = (r9 + -12);
    r8 = (r8 + -8);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r9), static_cast<uint32_t>(r0));
}

loc_80196A40:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801969D0;
    }
}

loc_80196A44:
{
    goto loc_80196A64;
}

loc_80196A48:
{
    r5 = (r3 + 232);
    r0 = (r3 + 196);
    r4 = -1;
}

loc_80196A54:
{
    MemoryInline::FlatWrite8((r5 + 8), static_cast<uint8_t>(r4));
    r5 = (r5 + -12);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_80196A60:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80196A54;
    }
}

loc_80196A64:
{
    r7 = (r3 + 232);
    r6 = (r3 + 196);
    r4 = r7;
}

loc_80196A70:
{
    r0 = MemoryInline::FlatRead8((r4 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80196AD0;
    }
}

loc_80196A7C:
{
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1268));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80196A88:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80196AC4;
    }
}

loc_80196A90:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1276));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80196A98:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80196AC4;
    }
}

loc_80196AA0:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1272));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80196AAC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80196AC4;
    }
}

loc_80196AB4:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1280));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80196ABC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80196AD0;
    }
}

loc_80196AC4:
{
    r0 = MemoryInline::FlatRead8((r4 + 8));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r4 + 8), static_cast<uint8_t>(r0));
}

loc_80196AD0:
{
    r4 = (r4 + -12);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r6));
}

loc_80196AD8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80196A70;
    }
}

loc_80196ADC:
{
    r0 = MemoryInline::FlatRead8((r6 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80196B2C;
    }
}

loc_80196AE8:
{
    r5 = (r6 + 12);
}

loc_80196AEC:
{
    r4 = MemoryInline::FlatRead8((r5 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80196B20;
    }
}

loc_80196AF8:
{
    f1.d = MemoryInline::FlatReadFloat32(r6);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80196B04:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80196B20;
    }
}

loc_80196B08:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80196B14:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80196B20;
    }
}

loc_80196B18:
{
    r0 = (r4 | 2);
    MemoryInline::FlatWrite8((r5 + 8), static_cast<uint8_t>(r0));
}

loc_80196B20:
{
    r5 = (r5 + 12);
}

loc_80196B28:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r7))) {
        goto loc_80196AEC;
    }
}

loc_80196B2C:
{
    r6 = (r6 + 12);
}

loc_80196B34:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r7))) {
        goto loc_80196ADC;
    }
}

loc_80196B38:
{
    r0 = 0;
    r5 = (r3 + 232);
    MemoryInline::FlatWrite16((r3 + 268), static_cast<uint16_t>(r0));
    r0 = (r3 + 196);
}

loc_80196B48:
{
    r4 = MemoryInline::FlatRead8((r5 + 8));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80196B60;
    }
}

loc_80196B54:
{
    r4 = MemoryInline::FlatRead16((r3 + 268));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 268), static_cast<uint16_t>(r4));
}

loc_80196B60:
{
    r5 = (r5 + -12);
}

loc_80196B68:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_80196B48;
    }
}

loc_80196B6C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r13 + -29220));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80196B78:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80196C70;
    }
}

loc_80196B80:
{
    r0 = MemoryInline::FlatRead8((r3 + 94));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80196B8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80196B98;
    }
}

loc_80196B90:
{
}

loc_80196B94:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-2))) {
        goto loc_80196BDC;
    }
}

loc_80196B98:
{
    r0 = MemoryInline::FlatRead16((r3 + 268));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80196BA0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80196BB8;
    }
}

loc_80196BA4:
{
    r3 = r31;
    ctx->lr = 0x80196BACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80195E48u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r30 = r3;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80196C74;
    }
}

loc_80196BB8:
{
    r0 = MemoryInline::FlatRead16((r31 + 268));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80196BC0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80196C70;
    }
}

loc_80196BC4:
{
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80196224u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r30 = r3;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80196C74;
    }
}

loc_80196BD8:
{
    goto loc_80196C70;
}

loc_80196BDC:
{
}

loc_80196BE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80196BEC;
    }
}

loc_80196BE4:
{
}

loc_80196BE8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80196C30;
    }
}

loc_80196BEC:
{
    r0 = MemoryInline::FlatRead16((r3 + 268));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80196BF4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80196C0C;
    }
}

loc_80196BF8:
{
    r3 = r31;
    ctx->lr = 0x80196C00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80195C60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r30 = r3;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80196C74;
    }
}

loc_80196C0C:
{
    r0 = MemoryInline::FlatRead16((r31 + 268));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80196C14:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80196C70;
    }
}

loc_80196C18:
{
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80196224u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r30 = r3;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80196C74;
    }
}

loc_80196C2C:
{
    goto loc_80196C70;
}

loc_80196C30:
{
    r0 = MemoryInline::FlatRead16((r3 + 268));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80196C38:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80196C50;
    }
}

loc_80196C3C:
{
    r3 = r31;
    ctx->lr = 0x80196C44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80195C60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r30 = r3;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80196C74;
    }
}

loc_80196C50:
{
    r0 = MemoryInline::FlatRead16((r31 + 268));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80196C58:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80196C70;
    }
}

loc_80196C5C:
{
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80196070u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r30 = r3;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80196C74;
    }
}

loc_80196C70:
{
    r30 = 0;
}

loc_80196C74:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80196D80;
    }
}

loc_80196C7C:
{
    f3.d = MemoryInline::FlatReadFloat32((r31 + 256));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 244));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 260));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 248));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = PpcFmulsInline(f30.d, f30.d);
    f0.d = PpcFmulsInline(f31.d, f31.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26512));
    r0 = MemoryInline::FlatRead16((r31 + 1224));
    f4.d = MemoryInline::FlatReadFloat32((r31 + 176));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 1296));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 180));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80196CC4:
{
    MemoryInline::FlatWriteFloat32((r31 + 1168), f3.d);
    f30.d = PpcFmulsInline(f30.d, f2.d);
    f31.d = PpcFmulsInline(f31.d, f2.d);
    f5.d = PpcFmulsInline(f1.d, f2.d);
    f3.d = PpcFmulsInline(f4.d, f30.d);
    MemoryInline::FlatWriteFloat32((r31 + 1172), f30.d);
    f2.d = PpcFmulsInline(f0.d, f31.d);
    f1.d = PpcFmulsInline(f0.d, f30.d);
    MemoryInline::FlatWriteFloat32((r31 + 1180), f5.d);
    f0.d = PpcFmulsInline(f4.d, f31.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteFloat32((r31 + 1176), f31.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 1200), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 1204), f3.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80196D38;
    }
}

loc_80196D04:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1208));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 1212));
    f2.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r13 + -29224));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80196D20:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80196D38;
    }
}

loc_80196D28:
{
    r0 = 1;
    r30 = 0;
    MemoryInline::FlatWrite8((r31 + 264), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 252), static_cast<uint8_t>(r0));
}

loc_80196D38:
{
    r0 = MemoryInline::FlatRead8((r31 + 94));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80196D40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80196D74;
    }
}

loc_80196D44:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80196D4C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80196D74;
    }
}

loc_80196D50:
{
    r3 = MemoryInline::FlatRead8((r31 + 1226));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(200));
}

loc_80196D58:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80196D68;
    }
}

loc_80196D5C:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1168));
    MemoryInline::FlatWriteFloat32((r31 + 1184), f0.d);
    goto loc_80196D88;
}

loc_80196D68:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 1226), static_cast<uint8_t>(r0));
    goto loc_80196D88;
}

loc_80196D74:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1226), static_cast<uint8_t>(r0));
    goto loc_80196D88;
}

loc_80196D80:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1226), static_cast<uint8_t>(r0));
}

loc_80196D88:
{
    r3 = r31;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    ctx->lr = 0x80196D94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80196398u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r30 = MemoryInline::FlatRead32((r1 + 24));
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE003FFF gpr_write=0xFE001FFB gpr_return=0x00000018 fpr_read=0xF80003FF fpr_write=0xF80003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80196964 func_80196964 preserves=false fpr_mask=0xC0000000
