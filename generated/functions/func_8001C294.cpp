#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001C294(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8001C294;

loc_8001C294:
{
    r3 = r30;
    ctx->lr = 0x8001C29Cu;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x8001DA68u>(ctx);
    r3 = ctx->gpr[3];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r31 = r3;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x8001C330u>(ctx);
    r3 = ctx->gpr[3];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFC6 gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8001C294 func_8001C294 preserves=true fpr_mask=0x00000000
