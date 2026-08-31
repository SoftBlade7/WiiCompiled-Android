#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80104604(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r7 = ctx->gpr[7];

    goto loc_80104604;

loc_80104604:
{
    ctx->lr = 0x80104608u;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80101810u>(ctx);
    r3 = ctx->gpr[3];
    r7 = ctx->gpr[7];
    r7 = r3;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80104624u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[7] = r7;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80104604 func_80104604 preserves=true fpr_mask=0x00000000
