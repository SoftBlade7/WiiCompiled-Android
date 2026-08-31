#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80650F28(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r14 = ctx->gpr[14];

    goto loc_80650F28;

loc_80650F28:
{
    r3 = MemoryInline::FlatRead32((r14 + -10456));
    r0 = 7;
    MemoryInline::FlatWrite32((r3 + 5984), r0);
    r3 = MemoryInline::FlatRead32((r14 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 6016));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r3 + 6016), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80650F84u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r14 = ctx->gpr[14];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFF6 gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80650F28 func_80650F28 preserves=true fpr_mask=0x00000000
