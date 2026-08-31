#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806D8DE8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_806D8DE8;

loc_806D8DE8:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r0 = 1;
    r4 = 1;
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    r30 = 0x808A0000u;
    r30 = (r30 + 152);
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    r29 = 0x808C0000u;
    r29 = (r29 + 22584);
    MemoryInline::FlatWrite8((r3 + 472), static_cast<uint8_t>(r0));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x806D8E38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = MemoryInline::FlatRead32((r31 + 208));
    r4 = 1;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x806D8E50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = MemoryInline::FlatRead32((r31 + 212));
    r4 = 1;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x806D8E68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = MemoryInline::FlatRead32((r31 + 448));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    f1.d = MemoryInline::FlatReadFloat64((r30 + 184));
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    f4.d = MemoryInline::FlatReadFloat32((r29 + 52));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 192));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 196));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 200));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f4.d));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f2.d = PpcFmulsInline(f3.d, f31.d);
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
    f0.d = MemoryInline::FlatReadFloat32((r29 + 40));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 460), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 44));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_806D8EC4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806D8F40;
    }
}

loc_806D8EC8:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 348));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806D8ED0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806D8F40;
    }
}

loc_806D8ED8:
{
    r0 = MemoryInline::FlatRead16((r31 + 44));
    r3 = MemoryInline::FlatRead32((r31 + 448));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r31 + 468), r3);
    r3 = MemoryInline::FlatRead32((r31 + 208));
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r31 + 60), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 64), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 68), f0.d);
    r0 = MemoryInline::FlatRead16((r3 + 44));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    r0 = (r0 | 8);
    MemoryInline::FlatWrite16((r3 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r3 + 60), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 64), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 68), f0.d);
    r3 = MemoryInline::FlatRead32((r31 + 212));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    r0 = MemoryInline::FlatRead16((r3 + 44));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    r0 = (r0 | 8);
    MemoryInline::FlatWrite16((r3 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r3 + 60), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 64), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 68), f0.d);
    goto loc_806D8FDC;
}

loc_806D8F40:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 464));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 148));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 348));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 464), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806D8F58:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806D8F60;
    }
}

loc_806D8F5C:
{
    MemoryInline::FlatWriteFloat32((r31 + 464), f0.d);
}

loc_806D8F60:
{
    r0 = MemoryInline::FlatRead16((r31 + 44));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 464));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 460));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r31 + 208));
    MemoryInline::FlatWriteFloat32((r31 + 60), f2.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 20));
    MemoryInline::FlatWriteFloat32((r31 + 64), f0.d);
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_806D8F88:
{
    MemoryInline::FlatWriteFloat32((r31 + 68), f2.d);
    r0 = MemoryInline::FlatRead16((r3 + 44));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    r0 = (r0 | 8);
    MemoryInline::FlatWrite16((r3 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r3 + 60), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 64), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 68), f2.d);
    r3 = MemoryInline::FlatRead32((r31 + 212));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    r0 = MemoryInline::FlatRead16((r3 + 44));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f2.d);
    r0 = (r0 | 8);
    MemoryInline::FlatWrite16((r3 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r3 + 60), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 64), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 68), f2.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806D8FDC;
    }
}

loc_806D8FD0:
{
    r3 = r31;
    r4 = 529;
    ctx->lr = 0x806D8FDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808204FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_806D8FDC:
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806D8DE8 func_806D8DE8 preserves=false fpr_mask=0x80000000
