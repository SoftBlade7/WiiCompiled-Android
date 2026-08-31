#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80197DD8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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

    goto loc_80197DD8;

loc_80197DD8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 32u, (r1 + 32), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r4 = 0x80340000u;
    r0 = (r3 * 1336);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r31);
    r4 = (r4 + 22496);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r30);
    r31 = (r4 + r0);
    r4 = (r1 + 8);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r29);
    r29 = r3;
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801C0990u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80197E24:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_80198068;
    }
}

loc_80197E28:
{
    r28 = MemoryInline::FlatRead8((r31 + 270));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(16));
}

loc_80197E30:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80197E38;
    }
}

loc_80197E34:
{
    r28 = 0;
}

loc_80197E38:
{
    r0 = (r28 * 56);
    r3 = r29;
    r4 = (r31 + r0);
    r30 = (r4 + 272);
    r4 = r30;
    ctx->lr = 0x80197E50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801C128Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801C0B54u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite8((r30 + 54), static_cast<uint8_t>(r3));
    r0 = (r28 + 1);
    MemoryInline::FlatWrite8((r31 + 270), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r31 + 271));
}

loc_80197E6C:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(16))) {
        goto loc_80197E78;
    }
}

loc_80197E70:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 271), static_cast<uint8_t>(r0));
}

loc_80197E78:
{
    r0 = MemoryInline::FlatRead8((r31 + 1316));
}

loc_80197E80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80197F38;
    }
}

loc_80197E84:
{
    r0 = MemoryInline::FlatRead8((r31 + 1317));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80197E8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80197EB0;
    }
}

loc_80197E90:
{
    ctx->lr = 0x80197E94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801BF714u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80197E9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80197EA8;
    }
}

loc_80197EA0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26440));
    goto loc_80197EB4;
}

loc_80197EA8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26436));
    goto loc_80197EB4;
}

loc_80197EB0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26528));
}

loc_80197EB4:
{
    f30.d = MemoryInline::FlatReadFloat32((r2 + -26512));
    f2.d = (-(f0.d));
    f31.d = MemoryInline::FlatReadFloat32((r2 + -26504));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -26528));
    f1.d = PpcFmulsInline(f30.d, f30.d);
    f0.d = PpcFmulsInline(f31.d, f31.d);
    MemoryInline::FlatWriteFloat32((r31 + 184), f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 188), f2.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 184));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26528));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80197EEC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80197EF8;
    }
}

loc_80197EF0:
{
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f2.d));
    goto loc_80197EFC;
}

loc_80197EF8:
{
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f2.d));
}

loc_80197EFC:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 188));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26528));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80197F08:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80197F14;
    }
}

loc_80197F0C:
{
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f1.d));
    goto loc_80197F18;
}

loc_80197F14:
{
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f1.d));
}

loc_80197F18:
{
    SetCRFloatResident(cr, 0, f30.d, f31.d);
}

loc_80197F1C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80197F24;
    }
}

loc_80197F20:
{
    goto loc_80197F28;
}

loc_80197F24:
{
    f30.d = f31.d;
}

loc_80197F28:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f30.d));
    r0 = 0;
    MemoryInline::FlatWriteFloat32((r31 + 192), f0.d);
    MemoryInline::FlatWrite8((r31 + 1316), static_cast<uint8_t>(r0));
}

loc_80197F38:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_80197F40:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(251))) {
        goto loc_80197F68;
    }
}

loc_80197F44:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80197F48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80197F84;
    }
}

loc_80197F4C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80197F5C;
    }
}

loc_80197F50:
{
}

loc_80197F54:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80197F7C;
    }
}

loc_80197F58:
{
    goto loc_80198068;
}

loc_80197F5C:
{
}

loc_80197F60:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_80198068;
    }
}

loc_80197F64:
{
    goto loc_80197F8C;
}

loc_80197F68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(255));
}

loc_80197F6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80197F7C;
    }
}

loc_80197F70:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80198068;
    }
}

loc_80197F74:
{
}

loc_80197F78:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(253))) {
        goto loc_80198068;
    }
}

loc_80197F7C:
{
    r28 = 0;
    goto loc_80197F90;
}

loc_80197F84:
{
    r28 = 2;
    goto loc_80197F90;
}

loc_80197F8C:
{
    r28 = 4;
}

loc_80197F90:
{
    r0 = MemoryInline::FlatRead8((r31 + 1312));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80197F98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80197FA0;
    }
}

loc_80197F9C:
{
    r28 = (r28 + 1);
}

loc_80197FA0:
{
    r3 = r29;
    ctx->lr = 0x80197FA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801C32A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80197FAC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80197FB8;
    }
}

loc_80197FB0:
{
    r4 = MemoryInline::FlatRead8((r31 + 1313));
    goto loc_80197FBC;
}

loc_80197FB8:
{
    r4 = 0;
}

loc_80197FBC:
{
    r3 = 0x80290000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = (r3 + -5660);
    r28 = (r3 + r0);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
}

loc_80197FD4:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_80198050;
    }
}

loc_80197FD8:
{
    r0 = MemoryInline::FlatRead32((r31 + 1240));
}

loc_80197FE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80198014;
    }
}

loc_80197FE4:
{
    r0 = MemoryInline::FlatRead8((r31 + 1314));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80197FEC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80198014;
    }
}

loc_80197FF0:
{
    r0 = 1;
    r3 = r29;
    MemoryInline::FlatWrite8((r31 + 1314), static_cast<uint8_t>(r0));
    r4 = 0;
    r12 = MemoryInline::FlatRead32((r31 + 1240));
    ctr = r12;
    ctx->lr = 0x8019800Cu;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1315), static_cast<uint8_t>(r0));
}

loc_80198014:
{
    r0 = MemoryInline::FlatRead8((r31 + 1311));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8019801C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80198068;
    }
}

loc_80198020:
{
    r0 = 1;
    r5 = 0x801A0000u;
    MemoryInline::FlatWrite8((r31 + 1311), static_cast<uint8_t>(r0));
    r3 = r29;
    r4 = MemoryInline::FlatRead8(r28);
    r5 = (r5 + -32592);
    ctx->lr = 0x8019803Cu;
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
    InvokeDirectCpu<0x801C3318u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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

loc_80198040:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80198068;
    }
}

loc_80198044:
{
    r0 = MemoryInline::FlatRead8(r28);
    MemoryInline::FlatWrite8((r31 + 1313), static_cast<uint8_t>(r0));
    goto loc_80198068;
}

loc_80198050:
{
    r4 = MemoryInline::FlatRead8((r28 + 1));
    r0 = MemoryInline::FlatRead8((r30 + 54));
}

loc_8019805C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r4))) {
        goto loc_80198068;
    }
}

loc_80198060:
{
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801C0B9Cu>(ctx);
    r3 = ctx->gpr[3];
}

loc_80198068:
{
    r12 = MemoryInline::FlatRead32((r31 + 1304));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_80198070:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80198080;
    }
}

loc_80198074:
{
    r3 = r29;
    ctr = r12;
    ctx->lr = 0x80198080u;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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

loc_80198080:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80197DD8 func_80197DD8 preserves=false fpr_mask=0xC0000000
