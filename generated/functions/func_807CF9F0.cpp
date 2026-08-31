#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807CF9F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
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

    goto loc_807CF9F0;

loc_807CF9F0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 26416);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r5 = MemoryInline::FlatRead32((r3 + 108));
    r3 = MemoryInline::FlatRead32((r5 + 40));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80557234u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_807CFA34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D0530;
    }
}

loc_807CFA38:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 262144);
}

loc_807CFA48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CFB3C;
    }
}

loc_807CFA4C:
{
    r4 = MemoryInline::FlatRead32((r29 + 1196));
}

loc_807CFA54:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_807CFB1C;
    }
}

loc_807CFA58:
{
    r3 = MemoryInline::FlatRead32((r29 + 712));
}

loc_807CFA60:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_807CFB1C;
    }
}

loc_807CFA64:
{
    r0 = MemoryInline::FlatRead32((r29 + 52));
}

loc_807CFA6C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_807CFB1C;
    }
}

loc_807CFA70:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 2824u, true, false);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2508u, (r31 + 2508));
    r3 = (r3 ^ -2147483648);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 2544u, (r31 + 2544));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_807CFA98:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807CFAA8;
    }
}

loc_807CFAA0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2708u, (r31 + 2708));
    goto loc_807CFAC0;
}

loc_807CFAA8:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2816u, (r31 + 2816));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2708u, (r31 + 2708));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
}

loc_807CFAC0:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2708u, (r31 + 2708));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807CFAC8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807CFAD0;
    }
}

loc_807CFACC:
{
    goto loc_807CFAE4;
}

loc_807CFAD0:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2820u, (r31 + 2820));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807CFAD8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CFAE0;
    }
}

loc_807CFADC:
{
    goto loc_807CFAE4;
}

loc_807CFAE0:
{
    f1.d = f0.d;
}

loc_807CFAE4:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_807CFAEC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(6))) {
        goto loc_807CFB1C;
    }
}

loc_807CFAF0:
{
}

loc_807CFAF4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_807CFB00;
    }
}

loc_807CFAF8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 17), static_cast<uint8_t>(r0));
}

loc_807CFB00:
{
    r3 = 0;
    MemoryInline::FlatWrite32((r4 + 4), r3);
    r0 = 1;
    MemoryInline::FlatWrite32(r4, r3);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    MemoryInline::FlatWriteFloat32((r4 + 12), f1.d);
    MemoryInline::FlatWrite8((r4 + 16), static_cast<uint8_t>(r3));
}

loc_807CFB1C:
{
    r0 = MemoryInline::FlatRead32((r29 + 712));
}

loc_807CFB24:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(60))) {
        goto loc_807CFB30;
    }
}

loc_807CFB28:
{
    r0 = 40;
    MemoryInline::FlatWrite32((r29 + 52), r0);
}

loc_807CFB30:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 712), r0);
    goto loc_807CFB48;
}

loc_807CFB3C:
{
    r3 = MemoryInline::FlatRead32((r29 + 712));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 712), r0);
}

loc_807CFB48:
{
    r5 = MemoryInline::FlatRead16((r29 + 250));
    r4 = MemoryInline::FlatRead32((r29 + 52));
    r3 = MemoryInline::FlatRead32((r29 + 44));
}

loc_807CFB58:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r29 + 52), r0);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r29 + 44), r0);
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(40))) {
        goto loc_807CFBEC;
    }
}

loc_807CFB6C:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 16);
}

loc_807CFB7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CFBEC;
    }
}

loc_807CFB80:
{
    r0 = MemoryInline::FlatRead8((r29 + 248));
    r5 = 29;
    r4 = 41;
    r3 = 27;
}

loc_807CFB94:
{
    MemoryInline::FlatWrite16((r29 + 64), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r29 + 66), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r29 + 68), static_cast<uint16_t>(r3));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CFBB0;
    }
}

loc_807CFBA4:
{
    r3 = MemoryInline::FlatRead32((r29 + 108));
    // inline leaf 0x8055F27C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r0 = MemoryInline::FlatRead16((r3 + 56));
    r3 = (r0 & 1);
    // end of inlined leaf 0x8055F27C
    goto loc_807CFBB4;
}

loc_807CFBB0:
{
    r3 = 0;
}

loc_807CFBB4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807CFBB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CFBC4;
    }
}

loc_807CFBBC:
{
    r3 = 0;
    goto loc_807CFBD8;
}

loc_807CFBC4:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 2656));
    r3 = r29;
    r4 = 29;
    r5 = 1;
    ctx->lr = 0x807CFBD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x807CC018u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
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
}

loc_807CFBD8:
{
}

loc_807CFBDC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807CFD54;
    }
}

loc_807CFBE0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 44), r0);
    goto loc_807CFD54;
}

loc_807CFBEC:
{
    r0 = MemoryInline::FlatRead16((r29 + 66));
}

loc_807CFBF4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(41))) {
        goto loc_807CFD54;
    }
}

loc_807CFBF8:
{
}

loc_807CFBFC:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(6))) {
        goto loc_807CFC40;
    }
}

loc_807CFC00:
{
}

loc_807CFC04:
{
    r0 = 0;
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(8))) {
        goto loc_807CFC18;
    }
}

loc_807CFC0C:
{
}

loc_807CFC10:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(10))) {
        goto loc_807CFC18;
    }
}

loc_807CFC14:
{
    r0 = 1;
}

loc_807CFC18:
{
}

loc_807CFC1C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CFC40;
    }
}

loc_807CFC20:
{
}

loc_807CFC24:
{
    r0 = 0;
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(27))) {
        goto loc_807CFC38;
    }
}

loc_807CFC2C:
{
}

loc_807CFC30:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(28))) {
        goto loc_807CFC38;
    }
}

loc_807CFC34:
{
    r0 = 1;
}

loc_807CFC38:
{
}

loc_807CFC3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CFD54;
    }
}

loc_807CFC40:
{
    r0 = MemoryInline::FlatRead32((r29 + 44));
    r6 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CFC4C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CFC80;
    }
}

loc_807CFC50:
{
    r0 = 30;
    MemoryInline::FlatWrite16((r29 + 64), static_cast<uint16_t>(r0));
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r29 + 32));
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x807CFC6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    r0 = 28;
    MemoryInline::FlatWrite16((r29 + 66), static_cast<uint16_t>(r3));
    r6 = 1;
    MemoryInline::FlatWrite16((r29 + 68), static_cast<uint16_t>(r0));
    goto loc_807CFCF8;
}

loc_807CFC80:
{
    r4 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r29 + 712));
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & 524288);
}

loc_807CFC94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CFCA0;
    }
}

loc_807CFC98:
{
    r0 = 20;
    goto loc_807CFCB0;
}

loc_807CFCA0:
{
}

loc_807CFCA4:
{
    r0 = 3;
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(4))) {
        goto loc_807CFCB0;
    }
}

loc_807CFCAC:
{
    r0 = 20;
}

loc_807CFCB0:
{
}

loc_807CFCB4:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_807CFCF8;
    }
}

loc_807CFCB8:
{
    r0 = MemoryInline::FlatRead32((r29 + 52));
}

loc_807CFCC0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_807CFCF8;
    }
}

loc_807CFCC4:
{
    r0 = MemoryInline::FlatRead8((r29 + 180));
}

loc_807CFCCC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CFCF8;
    }
}

loc_807CFCD0:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & 16);
}

loc_807CFCD8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CFCF8;
    }
}

loc_807CFCDC:
{
    r4 = 29;
    r3 = 41;
    r0 = 27;
    MemoryInline::FlatWrite16((r29 + 64), static_cast<uint16_t>(r4));
    r6 = 1;
    MemoryInline::FlatWrite16((r29 + 66), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r29 + 68), static_cast<uint16_t>(r0));
}

loc_807CFCF8:
{
}

loc_807CFCFC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_807CFD54;
    }
}

loc_807CFD00:
{
    r0 = MemoryInline::FlatRead8((r29 + 248));
    r30 = MemoryInline::FlatRead16((r29 + 64));
}

loc_807CFD0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807CFD1C;
    }
}

loc_807CFD10:
{
    r3 = MemoryInline::FlatRead32((r29 + 108));
    // inline leaf 0x8055F27C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r0 = MemoryInline::FlatRead16((r3 + 56));
    r3 = (r0 & 1);
    // end of inlined leaf 0x8055F27C
    goto loc_807CFD20;
}

loc_807CFD1C:
{
    r3 = 0;
}

loc_807CFD20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807CFD24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CFD30;
    }
}

loc_807CFD28:
{
    r3 = 0;
    goto loc_807CFD44;
}

loc_807CFD30:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 2660));
    r3 = r29;
    r4 = r30;
    r5 = 1;
    ctx->lr = 0x807CFD44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x807CC018u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
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
}

loc_807CFD44:
{
}

loc_807CFD48:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807CFD54;
    }
}

loc_807CFD4C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 44), r0);
}

loc_807CFD54:
{
    r0 = MemoryInline::FlatRead16((r29 + 66));
    r30 = 0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(41));
}

loc_807CFD60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CFDB8;
    }
}

loc_807CFD64:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 1088);
}

loc_807CFD74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807CFD84;
    }
}

loc_807CFD78:
{
    r3 = 196608;
    r0 = (r3 + 19392);
    MemoryInline::FlatWrite32((r29 + 48), r0);
}

loc_807CFD84:
{
    r3 = MemoryInline::FlatRead32((r29 + 716));
    r0 = MemoryInline::FlatRead32((r29 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_807CFD90:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CFDB8;
    }
}

loc_807CFD94:
{
    r3 = r29;
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4 = 0x809C0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r3 = MemoryInline::FlatRead32((r4 + 8656));
    r3 = MemoryInline::FlatRead32((r3 + 104));
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctx->lr = 0x807CFDB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x8069C1BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
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
    r30 = 1;
}

loc_807CFDB8:
{
    r3 = MemoryInline::FlatRead32((r29 + 108));
    r4 = MemoryInline::FlatRead16((r29 + 64));
    r3 = MemoryInline::FlatRead32((r3 + 40));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80557234u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_807CFDD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D0530;
    }
}

loc_807CFDD4:
{
    r4 = MemoryInline::FlatRead16((r29 + 66));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(41));
}

loc_807CFDDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CFE0C;
    }
}

loc_807CFDE0:
{
    r3 = MemoryInline::FlatRead32((r29 + 108));
    r3 = MemoryInline::FlatRead32((r3 + 40));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80557234u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_807CFDF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807CFE0C;
    }
}

loc_807CFDF8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_807CFDFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D0530;
    }
}

loc_807CFE00:
{
    r0 = 41;
    MemoryInline::FlatWrite16((r29 + 66), static_cast<uint16_t>(r0));
    goto loc_807D0530;
}

loc_807CFE0C:
{
    r3 = MemoryInline::FlatRead32((r29 + 108));
    r4 = MemoryInline::FlatRead16((r29 + 68));
    r3 = MemoryInline::FlatRead32((r3 + 40));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80557234u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_807CFE24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D0530;
    }
}

loc_807CFE28:
{
    r0 = MemoryInline::FlatRead16((r29 + 66));
}

loc_807CFE30:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(41))) {
        goto loc_807CFE60;
    }
}

loc_807CFE34:
{
    r0 = MemoryInline::FlatRead32((r29 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CFE3C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CFE60;
    }
}

loc_807CFE40:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 44), r0);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r29 + 32));
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x807CFE5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    MemoryInline::FlatWrite16((r29 + 66), static_cast<uint16_t>(r3));
}

loc_807CFE60:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_807CFE64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D0028;
    }
}

loc_807CFE68:
{
    r3 = MemoryInline::FlatRead32((r29 + 108));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    // end of inlined leaf 0x80557340
    r12 = MemoryInline::FlatRead32(r3);
    r30 = r3;
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x807CFE8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    r12 = MemoryInline::FlatRead32(r30);
    f31.d = f1.d;
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x807CFEA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_807CFEA8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CFEB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CFFC8;
    }
}

loc_807CFEB8:
{
    r30 = MemoryInline::FlatRead16((r29 + 66));
    r3 = MemoryInline::FlatRead32((r29 + 12));
    r4 = r30;
    ctx->lr = 0x807CFEC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x808654A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
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
    r3 = MemoryInline::FlatRead32((r29 + 108));
    r4 = r30;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80557234u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_807CFEE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CFFDC;
    }
}

loc_807CFEE4:
{
}

loc_807CFEE8:
{
    r0 = 0;
    if ((static_cast<uint32_t>(r30) <= static_cast<uint32_t>(7))) {
        goto loc_807CFF00;
    }
}

loc_807CFEF0:
{
}

loc_807CFEF4:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(20))) {
        goto loc_807CFF04;
    }
}

loc_807CFEF8:
{
}

loc_807CFEFC:
{
    if ((static_cast<uint32_t>(r30) > static_cast<uint32_t>(40))) {
        goto loc_807CFF04;
    }
}

loc_807CFF00:
{
    r0 = 1;
}

loc_807CFF04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CFF08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CFF14;
    }
}

loc_807CFF0C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 728), r0);
}

loc_807CFF14:
{
    r0 = MemoryInline::FlatRead16((r29 + 250));
    r4 = r30;
    MemoryInline::FlatWrite16((r29 + 252), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r29 + 108));
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 4));
    ctx->lr = 0x807CFF34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x805573CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
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
    r3 = MemoryInline::FlatRead32((r29 + 740));
    r4 = 255;
    r0 = 0;
    MemoryInline::FlatWrite16((r29 + 456), static_cast<uint16_t>(r4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807CFF48:
{
    MemoryInline::FlatWrite16((r29 + 458), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite8((r29 + 248), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r29 + 250), static_cast<uint16_t>(r30));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CFF68;
    }
}

loc_807CFF58:
{
    r12 = MemoryInline::FlatRead32((r3 + 12));
    r12 = MemoryInline::FlatRead32((r12 + 48));
    ctr = r12;
    ctx->lr = 0x807CFF68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
}

loc_807CFF68:
{
    r3 = MemoryInline::FlatRead16((r29 + 252));
    r0 = 0;
}

loc_807CFF74:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(21))) {
        goto loc_807CFF80;
    }
}

loc_807CFF78:
{
}

loc_807CFF7C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(23))) {
        goto loc_807CFF84;
    }
}

loc_807CFF80:
{
    r0 = 1;
}

loc_807CFF84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CFF88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807CFFDC;
    }
}

loc_807CFF8C:
{
    r3 = MemoryInline::FlatRead16((r29 + 250));
    r0 = 0;
}

loc_807CFF98:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(21))) {
        goto loc_807CFFA4;
    }
}

loc_807CFF9C:
{
}

loc_807CFFA0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(23))) {
        goto loc_807CFFA8;
    }
}

loc_807CFFA4:
{
    r0 = 1;
}

loc_807CFFA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807CFFAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807CFFDC;
    }
}

loc_807CFFB0:
{
    r3 = r29;
    r4 = 1;
    r5 = 0;
    r6 = 1;
    ctx->lr = 0x807CFFC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x80591050u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
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
    goto loc_807CFFDC;
}

loc_807CFFC8:
{
    r4 = MemoryInline::FlatRead16((r29 + 66));
    r3 = r29;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 2824));
    r5 = 1;
    ctx->lr = 0x807CFFDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x807CC018u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
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
}

loc_807CFFDC:
{
    r3 = r29;
    r4 = 3;
    r5 = 1;
    r6 = 1;
    ctx->lr = 0x807CFFF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x80591044u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
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
    r3 = 41;
    MemoryInline::FlatWrite16((r29 + 66), static_cast<uint16_t>(r3));
    r3 = (r3 + 65536);
    r0 = (r3 + -31);
    r0 = (r0 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_807D0008:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807D0018;
    }
}

loc_807D000C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 76), static_cast<uint8_t>(r0));
    goto loc_807D0028;
}

loc_807D0018:
{
    r0 = MemoryInline::FlatRead8((r29 + 76));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_5 & 134217727);
    MemoryInline::FlatWrite8((r29 + 76), static_cast<uint8_t>(r0));
}

loc_807D0028:
{
    r3 = MemoryInline::FlatRead16((r29 + 250));
    r0 = 0;
}

loc_807D0034:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(31))) {
        goto loc_807D0044;
    }
}

loc_807D0038:
{
}

loc_807D003C:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(39))) {
        goto loc_807D0044;
    }
}

loc_807D0040:
{
    r0 = 1;
}

loc_807D0044:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D0048:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D0074;
    }
}

loc_807D004C:
{
    r3 = MemoryInline::FlatRead32((r29 + 108));
    r4 = 0;
    f31.d = MemoryInline::FlatReadFloat32((r29 + 72));
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3_addr_5 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    // end of inlined leaf 0x80557340
    r12 = MemoryInline::FlatRead32(r3);
    f1.d = f31.d;
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x807D0074u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
}

loc_807D0074:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 2048);
}

loc_807D0084:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807D0098;
    }
}

loc_807D0088:
{
    r3 = MemoryInline::FlatRead32((r29 + 720));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 720), r0);
    goto loc_807D00A0;
}

loc_807D0098:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 720), r0);
}

loc_807D00A0:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 2048);
}

loc_807D00B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807D00F0;
    }
}

loc_807D00B4:
{
    r0 = MemoryInline::FlatRead32((r29 + 716));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_807D00BC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807D00FC;
    }
}

loc_807D00C0:
{
    r0 = MemoryInline::FlatRead32((r29 + 724));
}

loc_807D00C8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(10))) {
        goto loc_807D00F0;
    }
}

loc_807D00CC:
{
    r4 = MemoryInline::FlatRead16((r29 + 250));
    r0 = 0;
}

loc_807D00D8:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(27))) {
        goto loc_807D00E8;
    }
}

loc_807D00DC:
{
}

loc_807D00E0:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(40))) {
        goto loc_807D00E8;
    }
}

loc_807D00E4:
{
    r0 = 1;
}

loc_807D00E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D00EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D00FC;
    }
}

loc_807D00F0:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 4096);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D00F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D04A4;
    }
}

loc_807D00FC:
{
    r0 = 41;
    MemoryInline::FlatWrite16((r29 + 66), static_cast<uint16_t>(r0));
    r3 = r29;
    r4 = 3;
    r5 = 0;
    r6 = 1;
    ctx->lr = 0x807D0118u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x80591050u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
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
    r3 = MemoryInline::FlatRead16((r29 + 250));
    r0 = 0;
}

loc_807D0124:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(31))) {
        goto loc_807D0134;
    }
}

loc_807D0128:
{
}

loc_807D012C:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(40))) {
        goto loc_807D0134;
    }
}

loc_807D0130:
{
    r0 = 1;
}

loc_807D0134:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D0138:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D0300;
    }
}

loc_807D013C:
{
    r3 = MemoryInline::FlatRead32((r29 + 108));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3_addr_7 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_7);
    // end of inlined leaf 0x80557340
    r12 = MemoryInline::FlatRead32(r3);
    r30 = r3;
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x807D0160u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    r12 = MemoryInline::FlatRead32(r30);
    f31.d = f1.d;
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x807D0178u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_807D017C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_10 & 1);
}

loc_807D0188:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807D02C0;
    }
}

loc_807D018C:
{
    r0 = MemoryInline::FlatRead8((r29 + 248));
    r30 = MemoryInline::FlatRead16((r29 + 68));
}

loc_807D0198:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807D01A8;
    }
}

loc_807D019C:
{
    r3 = MemoryInline::FlatRead32((r29 + 108));
    // inline leaf 0x8055F27C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r0 = MemoryInline::FlatRead16((r3 + 56));
    r3 = (r0 & 1);
    // end of inlined leaf 0x8055F27C
    goto loc_807D01AC;
}

loc_807D01A8:
{
    r3 = 0;
}

loc_807D01AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807D01B0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D04A4;
    }
}

loc_807D01B4:
{
    r3 = MemoryInline::FlatRead32((r29 + 12));
    r4 = r30;
    ctx->lr = 0x807D01C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x808654A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
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
    r3 = MemoryInline::FlatRead32((r29 + 108));
    r4 = r30;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80557234u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_807D01D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D04A4;
    }
}

loc_807D01DC:
{
}

loc_807D01E0:
{
    r0 = 0;
    if ((static_cast<uint32_t>(r30) <= static_cast<uint32_t>(7))) {
        goto loc_807D01F8;
    }
}

loc_807D01E8:
{
}

loc_807D01EC:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(20))) {
        goto loc_807D01FC;
    }
}

loc_807D01F0:
{
}

loc_807D01F4:
{
    if ((static_cast<uint32_t>(r30) > static_cast<uint32_t>(40))) {
        goto loc_807D01FC;
    }
}

loc_807D01F8:
{
    r0 = 1;
}

loc_807D01FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D0200:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D020C;
    }
}

loc_807D0204:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 728), r0);
}

loc_807D020C:
{
    r0 = MemoryInline::FlatRead16((r29 + 250));
    r4 = r30;
    MemoryInline::FlatWrite16((r29 + 252), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r29 + 108));
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 4));
    ctx->lr = 0x807D022Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x805573CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
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
    r3 = MemoryInline::FlatRead32((r29 + 740));
    r4 = 255;
    r0 = 0;
    MemoryInline::FlatWrite16((r29 + 456), static_cast<uint16_t>(r4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807D0240:
{
    MemoryInline::FlatWrite16((r29 + 458), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite8((r29 + 248), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r29 + 250), static_cast<uint16_t>(r30));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D0260;
    }
}

loc_807D0250:
{
    r12 = MemoryInline::FlatRead32((r3 + 12));
    r12 = MemoryInline::FlatRead32((r12 + 48));
    ctr = r12;
    ctx->lr = 0x807D0260u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
}

loc_807D0260:
{
    r3 = MemoryInline::FlatRead16((r29 + 252));
    r0 = 0;
}

loc_807D026C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(21))) {
        goto loc_807D0278;
    }
}

loc_807D0270:
{
}

loc_807D0274:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(23))) {
        goto loc_807D027C;
    }
}

loc_807D0278:
{
    r0 = 1;
}

loc_807D027C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D0280:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D04A4;
    }
}

loc_807D0284:
{
    r3 = MemoryInline::FlatRead16((r29 + 250));
    r0 = 0;
}

loc_807D0290:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(21))) {
        goto loc_807D029C;
    }
}

loc_807D0294:
{
}

loc_807D0298:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(23))) {
        goto loc_807D02A0;
    }
}

loc_807D029C:
{
    r0 = 1;
}

loc_807D02A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D02A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D04A4;
    }
}

loc_807D02A8:
{
    r3 = r29;
    r4 = 1;
    r5 = 0;
    r6 = 1;
    ctx->lr = 0x807D02BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x80591050u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
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
    goto loc_807D04A4;
}

loc_807D02C0:
{
    r0 = MemoryInline::FlatRead8((r29 + 248));
    r30 = MemoryInline::FlatRead16((r29 + 68));
}

loc_807D02CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807D02DC;
    }
}

loc_807D02D0:
{
    r3 = MemoryInline::FlatRead32((r29 + 108));
    // inline leaf 0x8055F27C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r0 = MemoryInline::FlatRead16((r3 + 56));
    r3 = (r0 & 1);
    // end of inlined leaf 0x8055F27C
    goto loc_807D02E0;
}

loc_807D02DC:
{
    r3 = 0;
}

loc_807D02E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807D02E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D04A4;
    }
}

loc_807D02E8:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 2660));
    r3 = r29;
    r4 = r30;
    r5 = 1;
    ctx->lr = 0x807D02FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x807CC018u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
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
    goto loc_807D04A4;
}

loc_807D0300:
{
    r0 = MemoryInline::FlatRead16((r29 + 66));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(41));
}

loc_807D0308:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D04A4;
    }
}

loc_807D030C:
{
    r0 = MemoryInline::FlatRead16((r29 + 64));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_807D0314:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D04A4;
    }
}

loc_807D0318:
{
    r3 = MemoryInline::FlatRead32((r29 + 108));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3_addr_8 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_8);
    // end of inlined leaf 0x80557340
    r12 = MemoryInline::FlatRead32(r3);
    r30 = r3;
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x807D033Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    r12 = MemoryInline::FlatRead32(r30);
    f31.d = f1.d;
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x807D0354u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_807D0358:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_12 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D0364:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D049C;
    }
}

loc_807D0368:
{
    r0 = MemoryInline::FlatRead8((r29 + 248));
    r30 = MemoryInline::FlatRead16((r29 + 68));
}

loc_807D0374:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807D0384;
    }
}

loc_807D0378:
{
    r3 = MemoryInline::FlatRead32((r29 + 108));
    // inline leaf 0x8055F27C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r0 = MemoryInline::FlatRead16((r3 + 56));
    r3 = (r0 & 1);
    // end of inlined leaf 0x8055F27C
    goto loc_807D0388;
}

loc_807D0384:
{
    r3 = 0;
}

loc_807D0388:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807D038C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D04A4;
    }
}

loc_807D0390:
{
    r3 = MemoryInline::FlatRead32((r29 + 12));
    r4 = r30;
    ctx->lr = 0x807D039Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x808654A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
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
    r3 = MemoryInline::FlatRead32((r29 + 108));
    r4 = r30;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80557234u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_807D03B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D04A4;
    }
}

loc_807D03B8:
{
}

loc_807D03BC:
{
    r0 = 0;
    if ((static_cast<uint32_t>(r30) <= static_cast<uint32_t>(7))) {
        goto loc_807D03D4;
    }
}

loc_807D03C4:
{
}

loc_807D03C8:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(20))) {
        goto loc_807D03D8;
    }
}

loc_807D03CC:
{
}

loc_807D03D0:
{
    if ((static_cast<uint32_t>(r30) > static_cast<uint32_t>(40))) {
        goto loc_807D03D8;
    }
}

loc_807D03D4:
{
    r0 = 1;
}

loc_807D03D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D03DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D03E8;
    }
}

loc_807D03E0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 728), r0);
}

loc_807D03E8:
{
    r0 = MemoryInline::FlatRead16((r29 + 250));
    r4 = r30;
    MemoryInline::FlatWrite16((r29 + 252), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r29 + 108));
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 4));
    ctx->lr = 0x807D0408u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x805573CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
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
    r3 = MemoryInline::FlatRead32((r29 + 740));
    r4 = 255;
    r0 = 0;
    MemoryInline::FlatWrite16((r29 + 456), static_cast<uint16_t>(r4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807D041C:
{
    MemoryInline::FlatWrite16((r29 + 458), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite8((r29 + 248), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r29 + 250), static_cast<uint16_t>(r30));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D043C;
    }
}

loc_807D042C:
{
    r12 = MemoryInline::FlatRead32((r3 + 12));
    r12 = MemoryInline::FlatRead32((r12 + 48));
    ctr = r12;
    ctx->lr = 0x807D043Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
}

loc_807D043C:
{
    r3 = MemoryInline::FlatRead16((r29 + 252));
    r0 = 0;
}

loc_807D0448:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(21))) {
        goto loc_807D0454;
    }
}

loc_807D044C:
{
}

loc_807D0450:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(23))) {
        goto loc_807D0458;
    }
}

loc_807D0454:
{
    r0 = 1;
}

loc_807D0458:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D045C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D04A4;
    }
}

loc_807D0460:
{
    r3 = MemoryInline::FlatRead16((r29 + 250));
    r0 = 0;
}

loc_807D046C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(21))) {
        goto loc_807D0478;
    }
}

loc_807D0470:
{
}

loc_807D0474:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(23))) {
        goto loc_807D047C;
    }
}

loc_807D0478:
{
    r0 = 1;
}

loc_807D047C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D0480:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D04A4;
    }
}

loc_807D0484:
{
    r3 = r29;
    r4 = 1;
    r5 = 0;
    r6 = 1;
    ctx->lr = 0x807D0498u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x80591050u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
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
    goto loc_807D04A4;
}

loc_807D049C:
{
    r3 = r29;
    ctx->lr = 0x807D04A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x807D1A60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
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
}

loc_807D04A4:
{
    r3 = MemoryInline::FlatRead16((r29 + 250));
    r30 = 0;
    r0 = 0;
}

loc_807D04B4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(27))) {
        goto loc_807D04C0;
    }
}

loc_807D04B8:
{
}

loc_807D04BC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(28))) {
        goto loc_807D04C4;
    }
}

loc_807D04C0:
{
    r0 = 1;
}

loc_807D04C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D04C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D0520;
    }
}

loc_807D04CC:
{
    r3 = MemoryInline::FlatRead32((r29 + 108));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // inline leaf 0x80557340 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_14 & -4);
    r3_addr_10 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_10);
    // end of inlined leaf 0x80557340
    r12 = MemoryInline::FlatRead32(r3);
    r31 = r3;
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x807D04F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    r12 = MemoryInline::FlatRead32(r31);
    f31.d = f1.d;
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x807D0508u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_807D050C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_15 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D0518:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D0520;
    }
}

loc_807D051C:
{
    r30 = 1;
}

loc_807D0520:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_807D0524:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D0530;
    }
}

loc_807D0528:
{
    r3 = r29;
    ctx->lr = 0x807D0530u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x807D1A60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
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
}

loc_807D0530:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 52));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
// RECOMP_REGISTRATION base 0x807CF9F0 func_807CF9F0 preserves=false fpr_mask=0x80000000
