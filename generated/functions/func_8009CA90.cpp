#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009CA90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    goto loc_8009CA90;

loc_8009CA90:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -144), 0, 152u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 148u, (r1 + 148), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 128u, (r1 + 128), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 112u, (r1 + 112), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 96u, (r1 + 96), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 80u, (r1 + 80), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 64u, (r1 + 64), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 48u, (r1 + 48), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 32u, (r1 + 32), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    f0.d = f1.d;
    f1.d = f2.d;
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 28), r31);
    r31 = r5;
    f27.d = f3.d;
    r5 = (r1 + 8);
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r30);
    r30 = r4;
    f28.d = f4.d;
    f29.d = f5.d;
    f30.d = f6.d;
    r4 = (r1 + 12);
    f2.d = f0.d;
    ctx->lr = 0x8009CB0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009CF50u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f5.d = (-(f29.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f6.d = (-(f28.d));
    SetCRFloatResident(cr, 0, f0.d, f5.d);
}

loc_8009CB1C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009CB64;
    }
}

loc_8009CB20:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28184));
    SetCRFloatResident(cr, 0, f2.d, f5.d);
}

loc_8009CB28:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8009CB34;
    }
}

loc_8009CB2C:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -28180));
    goto loc_8009CB5C;
}

loc_8009CB34:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28216));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f5.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28220));
    f2.d = PpcFmulsInline(f5.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28176));
    f3.d = PpcFmulsInline(f0.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f4.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
}

loc_8009CB5C:
{
    f25.d = MemoryInline::FlatReadFloat32((r2 + -28220));
    goto loc_8009CD08;
}

loc_8009CB64:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -28220), 0, 68u, true, false);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r2 + -28172));
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_8009CB6C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009CBAC;
    }
}

loc_8009CB70:
{
    SetCRFloatResident(cr, 0, f5.d, f4.d);
}

loc_8009CB74:
{
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r2 + -28168));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8009CB84;
    }
}

loc_8009CB7C:
{
    f25.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r2 + -28164));
    goto loc_8009CD08;
}

loc_8009CB84:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -28216));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f4.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -28220));
    f1.d = PpcFmulsInline(f5.d, f1.d);
    f2.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    f25.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    goto loc_8009CD08;
}

loc_8009CBAC:
{
    SetCRFloatResident(cr, 0, f0.d, f6.d);
}

loc_8009CBB0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009CBF4;
    }
}

loc_8009CBB4:
{
    SetCRFloatResident(cr, 0, f4.d, f6.d);
}

loc_8009CBB8:
{
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r2 + -28168));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8009CBC8;
    }
}

loc_8009CBC0:
{
    f25.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r2 + -28180));
    goto loc_8009CD08;
}

loc_8009CBC8:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -28216));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f6.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -28220));
    f2.d = PpcFmulsInline(f6.d, f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 60u, (r2 + -28160));
    f3.d = PpcFmulsInline(f0.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f4.d));
    f25.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    goto loc_8009CD08;
}

loc_8009CBF4:
{
    SetCRFloatResident(cr, 0, f0.d, f28.d);
}

loc_8009CBF8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009CC40;
    }
}

loc_8009CBFC:
{
    SetCRFloatResident(cr, 0, f6.d, f28.d);
}

loc_8009CC00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8009CC0C;
    }
}

loc_8009CC04:
{
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -28216));
    goto loc_8009CC38;
}

loc_8009CC0C:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -28220));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f28.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r2 + -28168));
    f2.d = PpcFmulsInline(f6.d, f2.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r2 + -28156));
    f1.d = PpcFmulsInline(f28.d, f1.d);
    f3.d = PpcFmulsInline(f0.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f4.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
}

loc_8009CC38:
{
    f25.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r2 + -28168));
    goto loc_8009CD08;
}

loc_8009CC40:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 60u, (r2 + -28160));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_8009CC48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009CC88;
    }
}

loc_8009CC4C:
{
    SetCRFloatResident(cr, 0, f28.d, f3.d);
}

loc_8009CC50:
{
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -28220));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8009CC60;
    }
}

loc_8009CC58:
{
    f25.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r2 + -28180));
    goto loc_8009CD08;
}

loc_8009CC60:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -28216));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f28.d - f3.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r2 + -28168));
    f1.d = PpcFmulsInline(f28.d, f1.d);
    f2.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    f25.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    goto loc_8009CD08;
}

loc_8009CC88:
{
    SetCRFloatResident(cr, 0, f0.d, f29.d);
}

loc_8009CC8C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009CCCC;
    }
}

loc_8009CC90:
{
    SetCRFloatResident(cr, 0, f3.d, f29.d);
}

loc_8009CC94:
{
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -28220));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8009CCA4;
    }
}

loc_8009CC9C:
{
    f25.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r2 + -28164));
    goto loc_8009CD08;
}

loc_8009CCA4:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -28216));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f29.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r2 + -28168));
    f1.d = PpcFmulsInline(f29.d, f1.d);
    f2.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f4.d));
    f25.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    goto loc_8009CD08;
}

loc_8009CCCC:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r2 + -28176));
    SetCRFloatResident(cr, 0, f29.d, f3.d);
}

loc_8009CCD4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8009CCE0;
    }
}

loc_8009CCD8:
{
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r2 + -28164));
    goto loc_8009CD04;
}

loc_8009CCE0:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -28216));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f3.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -28220));
    f1.d = PpcFmulsInline(f29.d, f1.d);
    f2.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f4.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
}

loc_8009CD04:
{
    f25.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -28220));
}

loc_8009CD08:
{
    f1.d = f29.d;
    ctx->lr = 0x8009CD10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001B590u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f26.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f1.d = f28.d;
    ctx->lr = 0x8009CD1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001B590u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28164));
    f1.d = f29.d;
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f26.d));
    f26.d = PpcFmulsInline(f2.d, f0.d);
    ctx->lr = 0x8009CD34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001B590u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 144u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r1 + 8));
    f31.d = PpcFmulsInline(f31.d, f27.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28220));
    f25.d = PpcFmulsInline(f25.d, f27.d);
    f2.d = (-(f2.d));
    f0.d = PpcFmulsInline(f31.d, f0.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f26.d + f2.d));
    MemoryInline::FlatWriteFloat32(r30, f0.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r1 + 8));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f26.d / f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f2.d = PpcFmulsInline(f25.d, f2.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 120u, (r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 104u, (r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 88u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 72u, (r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 56u, (r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 40u, (r1 + 48));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 24u, (r1 + 32));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r1 + 28));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r1 + 24));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 140u, (r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFDFFF gpr_write=0xFFFFDFFB gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8009CA90 func_8009CA90 preserves=false fpr_mask=0xFE000000
