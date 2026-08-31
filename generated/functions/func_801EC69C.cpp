#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801EC69C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r30 = ctx->gpr[30];

    goto loc_801EC69C;

loc_801EC69C:
{
    r30 = 0x80000000u;
    ctx->gpr[30] = r30;
    InvokeDirectCpu<0x801EC6A8u>(ctx);
    r30 = ctx->gpr[30];
    ctx->gpr[30] = r30;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xBFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801EC69C func_801EC69C preserves=true fpr_mask=0x00000000
