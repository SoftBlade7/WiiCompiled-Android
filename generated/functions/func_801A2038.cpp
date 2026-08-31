#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A2038(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_blrl_801A2050_loc_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_801A2038;

loc_801A2038:
{
    r0 = ctx->lr;
    r5 = r1;
    MemoryInline::FlatWrite32((r4 + -8), r5);
    r4 = (r4 + -8);
    r1 = r4;
    MemoryInline::FlatWriteRam32((r5 + 4), r0);
    ctx->lr = r3;
    addr_blrl_801A2050_loc_0 = ctx->lr;
    ctx->lr = 0x801A2054u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeIndirectCpu(addr_blrl_801A2050_loc_0, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r5 = MemoryInline::FlatRead32(r1);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    ctx->lr = r0;
    r1 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFDE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801A2038 func_801A2038 preserves=true fpr_mask=0x00000000
