#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A2068(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_blrl_801A2080_loc_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];

    goto loc_801A2068;

loc_801A2068:
{
    r0 = ctx->lr;
    r9 = r1;
    MemoryInline::FlatWrite32((r8 + -8), r9);
    r8 = (r8 + -8);
    r1 = r8;
    MemoryInline::FlatWriteRam32((r9 + 4), r0);
    ctx->lr = r7;
    addr_blrl_801A2080_loc_0 = ctx->lr;
    ctx->lr = 0x801A2084u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    InvokeIndirectCpu(addr_blrl_801A2080_loc_0, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r5 = MemoryInline::FlatRead32(r1);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    ctx->lr = r0;
    r1 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFDFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801A2068 func_801A2068 preserves=true fpr_mask=0x00000000
