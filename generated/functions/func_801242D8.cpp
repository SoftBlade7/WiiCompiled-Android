#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801242D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_blrl_80124310_loc_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r31 = ctx->gpr[31];

    goto loc_801242D8;

loc_801242D8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r1;
    r31 = r3;
    r5 = 0x80380000u;
    r5 = (r5 + 25720);
    MemoryInline::FlatWriteRam32(r5, r1);
    r5 = 0x80380000u;
    r5 = (r5 + 25724);
    r1 = MemoryInline::FlatRead32(r5);
    r1 = (r1 + -8);
    ctx->lr = r31;
    addr_blrl_80124310_loc_0 = ctx->lr;
    ctx->lr = 0x80124314u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[10] = r10;
    ctx->gpr[31] = r31;
    InvokeIndirectCpu(addr_blrl_80124310_loc_0, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r10 = ctx->gpr[10];
    r31 = ctx->gpr[31];
    r5 = 0x80380000u;
    r5 = (r5 + 25720);
    r1 = MemoryInline::FlatRead32(r5);
    r10 = r1;
    r31 = MemoryInline::FlatRead32((r10 + 12));
    r10 = MemoryInline::FlatRead32(r1);
    r0 = MemoryInline::FlatRead32((r10 + 4));
    r1 = r10;
    ctx->lr = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[10] = r10;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFDE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801242D8 func_801242D8 preserves=true fpr_mask=0x00000000
