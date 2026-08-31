#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806F6838(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806F6838;

loc_806F6838:
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
    f30.d = f1.d;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806F685C:
{
    f31.d = f2.d;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 2976);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806F6894;
    }
}

loc_806F6878:
{
    r5 = 0x808A0000u;
    r4 = 384;
    r5 = (r5 + 3148);
    r3 = (r5 + 266);
    r5 = (r5 + 280);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x806F6894u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80025FB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806F6894:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 84u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r31 + 64));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_806F689C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806F68C0;
    }
}

loc_806F68A0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r31 + 68));
    f1.d = PpcFmulsInline(f30.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    goto loc_806F6930;
}

loc_806F68C0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 72u, (r31 + 72));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_806F68C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806F68D4;
    }
}

loc_806F68CC:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 36));
    goto loc_806F6930;
}

loc_806F68D4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 76u, (r31 + 76));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_806F68DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806F6900;
    }
}

loc_806F68E0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r31 + 52));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r31 + 32));
    f1.d = PpcFmulsInline(f30.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    goto loc_806F6930;
}

loc_806F6900:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r31 + 80));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_806F6908:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806F6914;
    }
}

loc_806F690C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    goto loc_806F6930;
}

loc_806F6914:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r31 + 68));
    f1.d = PpcFmulsInline(f30.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 60u, (r31 + 60));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
}

loc_806F6930:
{
    r3 = 0x809C0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8928));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PpcFmulsInline(f1.d, f31.d);
    MemoryInline::FlatWriteFloat32(r30, f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE7FE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806F6838 func_806F6838 preserves=false fpr_mask=0xC0000000
