#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80616C24(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80616C24;

loc_80616C24:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -128), 0, 136u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 132u, (r1 + 132), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 112u, (r1 + 112), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 96u, (r1 + 96), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolved32(guest_range_0, 92u, (r1 + 92), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 30360);
    MemoryInline::WriteResolved32(guest_range_0, 88u, (r1 + 88), r30);
    r30 = r3;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r29);
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r1 + 80), r28);
    }
    r4 = MemoryInline::FlatRead32((r3 + 384));
    r0 = (r4 + -2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80616C68:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80616DFC;
    }
}

loc_80616C6C:
{
    f30.d = MemoryInline::FlatReadFloat32((r3 + 416));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 424));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8022F860u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 428));
    f31.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 424));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8022F86Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r30 + 428));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 420));
    f3.d = PpcFmulsInline(f2.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 416));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f31.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 76));
    r3 = MemoryInline::FlatRead32((r30 + 396));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteFloat32((r30 + 420), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 416), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 44), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 48), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 52), f0.d);
    r0 = MemoryInline::FlatRead32((r30 + 384));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f3.d);
}

loc_80616CC8:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80616DC0;
    }
}

loc_80616CDC:
{
    r3 = MemoryInline::FlatRead32((r30 + 100));
    r28 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80616CE8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80616CF4;
    }
}

loc_80616CEC:
{
    r28 = 0;
    goto loc_80616D48;
}

loc_80616CF4:
{
    r29 = 0x809C0000u;
    r29 = (r29 + 7544);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80616D44;
    }
}

loc_80616D00:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x80616D14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80616D2C;
}

loc_80616D18:
{
}

loc_80616D1C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r29))) {
        goto loc_80616D28;
    }
}

loc_80616D20:
{
    r0 = 1;
    goto loc_80616D38;
}

loc_80616D28:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80616D2C:
{
}

loc_80616D30:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80616D18;
    }
}

loc_80616D34:
{
    r0 = 0;
}

loc_80616D38:
{
}

loc_80616D3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80616D44;
    }
}

loc_80616D40:
{
    goto loc_80616D48;
}

loc_80616D44:
{
    r28 = 0;
}

loc_80616D48:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 80));
    SetCRFloatResident(cr, 0, f30.d, f1.d);
}

loc_80616D50:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80616DFC;
    }
}

loc_80616D54:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 416));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80616D5C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80616DFC;
    }
}

loc_80616D64:
{
    r0 = MemoryInline::FlatRead8((r28 + 7205));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80616D6C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80616DAC;
    }
}

loc_80616D70:
{
    r0 = MemoryInline::FlatRead32((r28 + 7028));
    r4 = 33;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80616D7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80616D8C;
    }
}

loc_80616D80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80616D84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80616D94;
    }
}

loc_80616D88:
{
    goto loc_80616D98;
}

loc_80616D8C:
{
    r4 = 34;
    goto loc_80616D98;
}

loc_80616D94:
{
    r4 = 35;
}

loc_80616D98:
{
    r3 = r30;
    r5 = -1;
    ctx->lr = 0x80616DA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8063D74Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 7205), static_cast<uint8_t>(r0));
}

loc_80616DAC:
{
    r3 = r30;
    r4 = 36;
    r5 = -1;
    ctx->lr = 0x80616DBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8063D74Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80616DFC;
}

loc_80616DC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80616DC4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80616DFC;
    }
}

loc_80616DC8:
{
    r0 = MemoryInline::FlatRead8((r30 + 433));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80616DD0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80616DFC;
    }
}

loc_80616DD4:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 416));
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r30 + 372));
    f0.d = PPC_Fctiwz(f0.d);
    r4 = (r4 + 37);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f0.d);
    r5 = fctiwzword0;
    ctx->lr = 0x80616DF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8063D74Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 433), static_cast<uint8_t>(r0));
}

loc_80616DFC:
{
    r0 = MemoryInline::FlatRead32((r30 + 384));
}

loc_80616E04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80616E14;
    }
}

loc_80616E08:
{
}

loc_80616E0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80616E4C;
    }
}

loc_80616E10:
{
    goto loc_80616E6C;
}

loc_80616E14:
{
    r3 = 0x809C0000u;
    f2.d = MemoryInline::FlatReadFloat32((r30 + 400));
    r3 = (r3 + 7552);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 416));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 24));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = (-(f1.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80616E34:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80616E6C;
    }
}

loc_80616E38:
{
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_80616E3C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80616E6C;
    }
}

loc_80616E40:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r30 + 384), r0);
    goto loc_80616E6C;
}

loc_80616E4C:
{
    r3 = MemoryInline::FlatRead32((r30 + 396));
    r0 = MemoryInline::FlatRead8((r3 + 184));
}

loc_80616E58:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80616E6C;
    }
}

loc_80616E5C:
{
    r3 = 0;
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 384), r3);
    MemoryInline::FlatWrite8((r30 + 128), static_cast<uint8_t>(r0));
}

loc_80616E6C:
{
    r3 = MemoryInline::FlatRead32((r30 + 384));
    r0 = (r3 + -2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80616E78:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80617048;
    }
}

loc_80616E7C:
{
    r3 = (r1 + 8);
    r4 = (r30 + 400);
    r5 = (r30 + 416);
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
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    ctx->lr = 0x80616E98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8022F8E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 424));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 84));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 52));
    goto loc_80616EB0;
}

loc_80616EAC:
{
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
}

loc_80616EB0:
{
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_80616EB4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80616EAC;
    }
}

loc_80616EBC:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 88));
    goto loc_80616ECC;
}

loc_80616EC8:
{
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
}

loc_80616ECC:
{
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_80616ED0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80616EC8;
    }
}

loc_80616ED4:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 92));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_80616EDC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80616FA4;
    }
}

loc_80616EE0:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 96));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_80616EE8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80616FA4;
    }
}

loc_80616EEC:
{
    r3 = 0x809C0000u;
    r3 = (r3 + 7552);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 40));
    SetCRFloatResident(cr, 0, f3.d, f2.d);
}

loc_80616EFC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80616F10;
    }
}

loc_80616F00:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 424));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 424), f0.d);
    goto loc_80616F28;
}

loc_80616F10:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80616F24;
    }
}

loc_80616F14:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 424));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 424), f0.d);
    goto loc_80616F28;
}

loc_80616F24:
{
    MemoryInline::FlatWriteFloat32((r30 + 424), f1.d);
}

loc_80616F28:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    r3 = (r3 + 7552);
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 48));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80616F4C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80616F74;
    }
}

loc_80616F50:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 428));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 428), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 32));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80616F68:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80617048;
    }
}

loc_80616F6C:
{
    MemoryInline::FlatWriteFloat32((r30 + 428), f0.d);
    goto loc_80617048;
}

loc_80616F74:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 44));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80616F7C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80617048;
    }
}

loc_80616F80:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 428));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 428), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 28));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80616F98:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80617048;
    }
}

loc_80616F9C:
{
    MemoryInline::FlatWriteFloat32((r30 + 428), f0.d);
    goto loc_80617048;
}

loc_80616FA4:
{
    r0 = MemoryInline::FlatRead8((r30 + 432));
}

loc_80616FAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80616FCC;
    }
}

loc_80616FB0:
{
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 424));
    r3 = (r3 + 7552);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 424), f0.d);
    goto loc_80616FE4;
}

loc_80616FCC:
{
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 424));
    r3 = (r3 + 7552);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 424), f0.d);
}

loc_80616FE4:
{
    r3 = (r1 + 40);
    ctx->lr = 0x80616FECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->xer = xer;
    InvokeDirectCpu<0x80555464u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1.d = MemoryInline::FlatReadFloat32((r31 + 20));
    r3 = (r1 + 40);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->xer = xer;
    InvokeDirectCpu<0x805556A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 100));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80617000:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80617014;
    }
}

loc_80617004:
{
    r0 = MemoryInline::FlatRead8((r30 + 432));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    MemoryInline::FlatWrite8((r30 + 432), static_cast<uint8_t>(r0));
}

loc_80617014:
{
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 428));
    r3 = (r3 + 7552);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 428), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 32));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80617034:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8061703C;
    }
}

loc_80617038:
{
    MemoryInline::FlatWriteFloat32((r30 + 428), f0.d);
}

loc_8061703C:
{
    r3 = (r1 + 40);
    r4 = -1;
    ctx->lr = 0x80617048u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80555538u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80617048:
{
    r0 = MemoryInline::FlatRead32((r30 + 384));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80617050:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80617080;
    }
}

loc_80617054:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r30 + 396));
    r3 = (r3 + 7552);
    r0 = MemoryInline::FlatRead8((r3 + 108));
    r3 = MemoryInline::FlatRead8((r4 + 184));
    r3 = (r3 - r0);
    r0 = (0 - r3);
    r0 = (r0 & ~r3);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 31);
    r0 = (r3 & r0);
    MemoryInline::FlatWrite8((r4 + 184), static_cast<uint8_t>(r0));
}

loc_80617080:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 96));
    r31 = MemoryInline::FlatRead32((r1 + 92));
    r30 = MemoryInline::FlatRead32((r1 + 88));
    r29 = MemoryInline::FlatRead32((r1 + 84));
    r0 = MemoryInline::FlatRead32((r1 + 132));
    r28 = MemoryInline::FlatRead32((r1 + 80));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80616C24 func_80616C24 preserves=false fpr_mask=0xC0000000
