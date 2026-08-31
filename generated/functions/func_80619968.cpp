#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80619968(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80619968;

loc_80619968:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x809C0000u;
    r31 = (r31 + 7552);
    r3 = (r31 + 0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80616844u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = 0x809C0000u;
    r0 = (r31 + 116);
    r3 = (r3 + 7812);
    MemoryInline::FlatWriteRam32((r31 + 116), r3);
    MemoryInline::FlatWriteRam32((r31 + 120), r0);
    MemoryInline::FlatWriteRam32((r31 + 124), r0);
    MemoryInline::FlatWriteRam32((r31 + 128), r3);
    MemoryInline::FlatWriteRam32((r31 + 132), r3);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80000002 gpr_write=0x800001FB gpr_return=0x00000018 fpr_read=0xF8000000 fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80619968 func_80619968 preserves=true fpr_mask=0x00000000
