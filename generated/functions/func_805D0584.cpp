#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805D0584(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805D0584;

loc_805D0584:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 21036));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805D05A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805D0608;
    }
}

loc_805D05A4:
{
    r4 = MemoryInline::FlatRead32((r3 + 21032));
    r0 = (r4 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(16));
}

loc_805D05B0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805D05BC;
    }
}

loc_805D05B4:
{
    ctx->lr = 0x805D05B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x805D0674u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_805D0608;
}

loc_805D05BC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x805D0CD4u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead8((r31 + 21036));
    r3 = MemoryInline::FlatRead32((r31 + 21032));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805D05CC:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 21032), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805D0608;
    }
}

loc_805D05D8:
{
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16404));
    r0 = (r0 * 28);
    r3 = 0;
    MemoryInline::FlatWrite32((r31 + 21028), r3);
    r3 = (r31 + r0);
    MemoryInline::FlatWriteFloat32((r31 + 84), f0.d);
    r0 = MemoryInline::FlatRead32((r31 + 21024));
    MemoryInline::FlatWrite32((r3 + 20576), r0);
    MemoryInline::FlatWriteFloat32((r3 + 20592), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 20596), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 20600), f0.d);
}

loc_805D0608:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805D0584 func_805D0584 preserves=true fpr_mask=0x00000000
