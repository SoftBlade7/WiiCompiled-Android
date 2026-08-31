#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D76E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807D76E8;

loc_807D76E8:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 1008));
}

loc_807D7714:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807D7730;
    }
}

loc_807D7718:
{
    r0 = MemoryInline::FlatRead8((r3 + 1009));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D7720:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D7730;
    }
}

loc_807D7724:
{
    r3 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 29696));
    goto loc_807D77B4;
}

loc_807D7730:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    r5 = 0x808A0000u;
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    f31.d = MemoryInline::FlatReadFloat32((r5 + 29696));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 28));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 44));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    r0 = MemoryInline::FlatRead8((r3 + 1008));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D7758:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D7774;
    }
}

loc_807D775C:
{
    r3 = r30;
    r4 = r31;
    r5 = (r1 + 8);
    r6 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807D77D4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f1.d));
}

loc_807D7774:
{
    r0 = MemoryInline::FlatRead8((r30 + 1009));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807D777C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D7798;
    }
}

loc_807D7780:
{
    r3 = r30;
    r4 = r31;
    r5 = (r1 + 8);
    r6 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807D77D4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f1.d));
}

loc_807D7798:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = f31.d;
    MemoryInline::FlatWriteFloat32((r31 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r31 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r31 + 44), f0.d);
}

loc_807D77B4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 52));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0000FFB gpr_write=0xC0000FFB gpr_return=0x00000018 fpr_read=0x8000003F fpr_write=0x800000FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807D76E8 func_807D76E8 preserves=false fpr_mask=0x80000000
