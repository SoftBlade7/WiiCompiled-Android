#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801045E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r7 = ctx->gpr[7];

    goto loc_801045E0;

loc_801045E0:
{
    ctx->lr = 0x801045E4u;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x801009FCu>(ctx);
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
// RECOMP_REGISTRATION base 0x801045E0 func_801045E0 preserves=true fpr_mask=0x00000000
