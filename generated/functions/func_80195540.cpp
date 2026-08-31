#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80195540(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80195540;

loc_80195540:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1188));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1192));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    f8.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26528));
    SetCRFloatResident(cr, 0, f0.d, f8.d);
}

loc_80195588:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801956B0;
    }
}

loc_8019558C:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -26500));
    SetCRFloatResident(cr, 0, f8.d, f2.d);
}

loc_80195594:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801955A0;
    }
}

loc_8019559C:
{
    goto loc_801956B0;
}

loc_801955A0:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1188));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 1192));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f8.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26512));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f8.d));
    SetCRFloatResident(cr, 0, f8.d, f0.d);
}

loc_801955B8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801955C0;
    }
}

loc_801955BC:
{
    f8.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f8.d));
}

loc_801955C0:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 172));
    f6.d = MemoryInline::FlatReadFloat32((r31 + 168));
    f4.d = PpcFmulsInline(f0.d, f10.d);
    f7.d = MemoryInline::FlatReadFloat32((r13 + -29260));
    f5.d = PpcFmulsInline(f6.d, f9.d);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 1208));
    f2.d = PpcFmulsInline(f0.d, f9.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 1212));
    f0.d = PpcFmulsInline(f6.d, f10.d);
    f6.d = PpcFmulsInline(f8.d, f7.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f8.d = PpcFmulsInline(f8.d, f6.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = PpcFmulsInline(f8.d, f2.d);
    f0.d = PpcFmulsInline(f8.d, f0.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = PpcFmulsInline(f31.d, f31.d);
    f0.d = PpcFmulsInline(f30.d, f30.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001BBF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26528));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80195628:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801956B0;
    }
}

loc_8019562C:
{
    f7.d = static_cast<double>(PpcForceSingleValueInline(f31.d / f1.d));
    f5.d = MemoryInline::FlatReadFloat32((r31 + 1216));
    f4.d = MemoryInline::FlatReadFloat32((r31 + 1220));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1292));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f30.d / f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 1208), f7.d);
    MemoryInline::FlatWriteFloat32((r31 + 1212), f6.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f5.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f1.d = MemoryInline::FlatReadFloat32((r13 + -29252));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f1.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 1216), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r13 + -29252));
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 1220), f1.d);
    f1.d = PpcFmulsInline(f3.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80195688:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801956A8;
    }
}

loc_80195690:
{
    r3 = MemoryInline::FlatRead16((r31 + 1224));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80195698:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801956B0;
    }
}

loc_8019569C:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1224), static_cast<uint16_t>(r0));
    goto loc_801956B0;
}

loc_801956A8:
{
    r0 = MemoryInline::FlatRead16((r13 + -29248));
    MemoryInline::FlatWrite16((r31 + 1224), static_cast<uint16_t>(r0));
}

loc_801956B0:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80003FFF gpr_write=0x80001FFB gpr_return=0x00000018 fpr_read=0xC00007FF fpr_write=0xC00007FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80195540 func_80195540 preserves=false fpr_mask=0xC0000000
