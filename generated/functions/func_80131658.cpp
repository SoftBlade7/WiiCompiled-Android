#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80131658(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];

    goto loc_80131658;

loc_80131658:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->lr = 0x80131668u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x80150188u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    ctx->lr = 0x8013166Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x80143460u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    ctx->lr = 0x80131670u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x80146D34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    ctx->lr = 0x80131674u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801477B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE0C6 gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80131658 func_80131658 preserves=true fpr_mask=0x00000000
