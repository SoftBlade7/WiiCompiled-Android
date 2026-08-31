#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005E680(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_8005E680;

loc_8005E680:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29616));
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 28));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8005E6B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005E740;
    }
}

loc_8005E6B4:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 28));
    f1.d = MemoryInline::FlatReadFloat32((r13 + -32480));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 24));
    f3.d = PpcFmulsInline(f2.d, f1.d);
    r12 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    ctr = r12;
    ctx->lr = 0x8005E6DCu;
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
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
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
    r0 = MemoryInline::FlatRead32((r29 + 52));
    MemoryInline::FlatWriteFloat32((r29 + 24), f1.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8005E6E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005E740;
    }
}

loc_8005E6EC:
{
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    r31 = 0;
    r30 = 0;
    goto loc_8005E734;
}

loc_8005E6FC:
{
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r3_addr_2 = (r3 + r30);
    r3 = MemoryInline::FlatRead16(r3_addr_2);
    r0 = (r3 & 32768);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8005E708:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8005E72C;
    }
}

loc_8005E70C:
{
    r5 = (r3 & 16383);
    f1.d = f31.d;
    r0 = (r5 * 536);
    r4 = MemoryInline::FlatRead32((r29 + 52));
    r6 = MemoryInline::FlatRead32((r29 + 48));
    r3 = (r29 + 44);
    r4 = (r4 + r0);
    ctx->lr = 0x8005E72Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80056DA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
}

loc_8005E72C:
{
    r30 = (r30 + 2);
    r31 = (r31 + 1);
}

loc_8005E734:
{
    r0 = MemoryInline::FlatRead32((r29 + 16));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
}

loc_8005E73C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8005E6FC;
    }
}

loc_8005E740:
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
// RECOMP_REGISTRATION base 0x8005E680 func_8005E680 preserves=false fpr_mask=0x80000000
