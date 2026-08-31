#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8014AD38(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];

    goto loc_8014AD38;

loc_8014AD38:
{
    r0 = 1;
    r5 = MemoryInline::FlatRead32((r28 + 16));
    MemoryInline::FlatWrite32((r28 + 4), r0);
    r7 = 0x80150000u;
    r4 = MemoryInline::FlatRead32((r28 + 48));
    r3 = (r5 + 42);
    r5 = MemoryInline::FlatRead16((r5 + 40));
    r7 = (r7 + -15212);
    r4 = MemoryInline::FlatRead16((r4 + 2));
    r6 = 1;
    ctx->lr = 0x8014AD64u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x8013FB48u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x8014AEF4u>(ctx);
    r0 = ctx->gpr[0];
    r28 = ctx->gpr[28];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFF06 gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8014AD38 func_8014AD38 preserves=true fpr_mask=0x00000000
