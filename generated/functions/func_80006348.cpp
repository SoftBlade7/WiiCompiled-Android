#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80006348(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80006348;

loc_80006348:
{
    r0 = ctx->msr;
    r0 = (r0 | 8192);
    ctx->msr = r0;
    r31 = ctx->lr;
    InvokeDirectCpu<0x801A04A0u>(ctx);
    ctx->lr = 0x80006360u;
    ctx->gpr[0] = r0;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x8019F1A8u>(ctx);
    r0 = ctx->gpr[0];
    r31 = ctx->gpr[31];
    InvokeDirectCpu<0x801A1AE4u>(ctx);
    ctx->lr = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x7FFFFFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80006348 func_80006348 preserves=true fpr_mask=0x00000000
