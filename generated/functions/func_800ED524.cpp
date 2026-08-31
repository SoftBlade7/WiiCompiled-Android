#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800ED524(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];

    goto loc_800ED524;

loc_800ED524:
{
    r0 = 22;
    r3 = MemoryInline::FlatRead32((r13 + -26820));
    MemoryInline::FlatWrite32((r13 + -26816), r0);
    r3 = MemoryInline::FlatRead32((r3 + 23008));
    ctx->lr = 0x800ED538u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801D92B8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r13 = ctx->gpr[13];
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x800ED5A8u>(ctx);
    r0 = ctx->gpr[0];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFF6 gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800ED524 func_800ED524 preserves=true fpr_mask=0x00000000
