#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801EC694(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];

    goto loc_801EC694;

loc_801EC694:
{
    r30 = r4;
    ctx->gpr[30] = r30;
    InvokeDirectCpu<0x801EC6A8u>(ctx);
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    ctx->gpr[30] = r30;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xBFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801EC694 func_801EC694 preserves=true fpr_mask=0x00000000
