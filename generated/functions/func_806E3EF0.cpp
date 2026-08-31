#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806E3EF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t ctr = ctx->ctr;

    goto loc_806E3EF0;

loc_806E3EF0:
{
    f2.d = MemoryInline::FlatReadFloat32(r4);
    r0 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWrite32((r3 + 176), r0);
    MemoryInline::FlatWriteFloat32((r3 + 228), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 232), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 236), f0.d);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 144));
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFE gpr_write=0x00001001 gpr_return=0x00000000 fpr_read=0xFFFFFFF8 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0x00 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x806E3EF0 func_806E3EF0 preserves=true fpr_mask=0x00000000
