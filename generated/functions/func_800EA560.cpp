#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800EA560(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800EA560;

loc_800EA560:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x800F4114 (13 guest instruction(s))
}

loc_inl0_0x800F4114:
{
    r3 = 0x802F0000u;
    r3 = (r3 + 9232);
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_inl0_0x800F4124:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x800F4130;
    }
}

loc_inl0_0x800F4128:
{
    r3 = 1;
    goto loc_inl0_cont_800F4114;
}

loc_inl0_0x800F4130:
{
    r0 = MemoryInline::FlatRead32(r3);
    r3 = 0;
}

loc_inl0_0x800F413C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x800F4140:
{
    r3 = 2;
    goto loc_inl0_cont_800F4114;
}

loc_inl0_return:
{
}

loc_inl0_cont_800F4114:
{
    // end of inlined leaf 0x800F4114
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_800EA574:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800EA580;
    }
}

loc_800EA578:
{
    r3 = 0;
    ctx->lr = 0x800EA580u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3F2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800EA580:
{
    ctx->lr = 0x800EA584u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800CD4A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800EA560 func_800EA560 preserves=true fpr_mask=0x00000000
