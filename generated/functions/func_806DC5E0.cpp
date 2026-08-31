#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806DC5E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    goto loc_806DC5E0;

loc_806DC5E0:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 888);
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    r30 = 0x808C0000u;
    r30 = (r30 + 23920);
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    r29 = r3;
    ctx->lr = 0x806DC618u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806DCDDCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r30 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 64));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 32));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_806DC628:
{
    f31.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806DC644;
    }
}

loc_806DC634:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 300));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_806DC63C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806DC644;
    }
}

loc_806DC640:
{
    f31.d = f1.d;
}

loc_806DC644:
{
    r3 = MemoryInline::FlatRead32((r29 + 312));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r0 = (r3 ^ -2147483648);
    f1.d = MemoryInline::FlatReadFloat64((r31 + 40));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 68));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 72));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 76));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f2.d = PpcFmulsInline(f3.d, f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
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
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f0.d = PpcFmulsInline(f31.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 300), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 28));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806DC6A0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806DC6F8;
    }
}

loc_806DC6A4:
{
    r5 = MemoryInline::FlatRead32((r29 + 312));
    r4 = 0;
    r3 = 1;
    r0 = MemoryInline::FlatRead16((r29 + 44));
    MemoryInline::FlatWriteFloat32((r29 + 300), f0.d);
    r0 = (r0 | 8);
    MemoryInline::FlatWrite16((r29 + 308), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite8((r29 + 310), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32((r29 + 312), r4);
    MemoryInline::FlatWrite8((r29 + 316), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite32((r29 + 320), r4);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 28));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    MemoryInline::FlatWrite16((r29 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r29 + 60), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 64), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 68), f1.d);
    goto loc_806DC758;
}

loc_806DC6F8:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_806DC6FC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806DC720;
    }
}

loc_806DC700:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 304));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 80));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 304), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 36));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806DC718:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806DC720;
    }
}

loc_806DC71C:
{
    MemoryInline::FlatWriteFloat32((r29 + 304), f0.d);
}

loc_806DC720:
{
    r0 = MemoryInline::FlatRead16((r29 + 44));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 304));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 300));
    r4 = (r0 | 8);
    r3 = MemoryInline::FlatRead32((r29 + 312));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    MemoryInline::FlatWrite16((r29 + 44), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteFloat32((r29 + 60), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 64), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 68), f1.d);
    MemoryInline::FlatWrite32((r29 + 312), r0);
}

loc_806DC758:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 84));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806DC5E0 func_806DC5E0 preserves=false fpr_mask=0x80000000
