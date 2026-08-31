#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801956D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;

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
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    goto loc_801956D4;

loc_801956D4:
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
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1188));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1192));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f30.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = f30.d;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1196));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f29.d = (-(f0.d));
    f0.d = PpcFmulsInline(f29.d, f29.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26528));
    SetCRFloatResident(cr, 0, f0.d, f5.d);
}

loc_80195740:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801957CC;
    }
}

loc_80195744:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -26500));
    SetCRFloatResident(cr, 0, f5.d, f1.d);
}

loc_8019574C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80195758;
    }
}

loc_80195754:
{
    goto loc_801957CC;
}

loc_80195758:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f31.d / f5.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26512));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f29.d / f5.d));
    SetCRFloatResident(cr, 0, f5.d, f0.d);
}

loc_80195768:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80195770;
    }
}

loc_8019576C:
{
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
}

loc_80195770:
{
    f0.d = MemoryInline::FlatReadFloat32((r13 + -29260));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 84));
    f4.d = PpcFmulsInline(f5.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 88));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f1.d));
    f5.d = PpcFmulsInline(f5.d, f4.d);
    f2.d = PpcFmulsInline(f5.d, f2.d);
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = PpcFmulsInline(f31.d, f31.d);
    f0.d = PpcFmulsInline(f30.d, f30.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26528));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_801957B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801957CC;
    }
}

loc_801957BC:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d / f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f30.d / f2.d));
    MemoryInline::FlatWriteFloat32((r31 + 84), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 88), f0.d);
}

loc_801957CC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 32));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80003FFF gpr_write=0x80001FFB gpr_return=0x00000018 fpr_read=0xE000003F fpr_write=0xE000003F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801956D4 func_801956D4 preserves=false fpr_mask=0xE0000000
