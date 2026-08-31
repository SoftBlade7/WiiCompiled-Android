#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807838A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];

    goto loc_807838A8;

loc_807838A8:
{
    r0 = MemoryInline::FlatRead32((r4 + 2920));
    MemoryInline::FlatWrite32((r30 + 40), r0);
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x807838BCu>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    ctx->gpr[0] = r0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807838A8 func_807838A8 preserves=true fpr_mask=0x00000000
