#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8014B188(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8014B188;

loc_8014B188:
{
    r3 = r31;
    ctx->lr = 0x8014B190u;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8012EE3Cu>(ctx);
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    InvokeDirectCpu<0x8014B1C8u>(ctx);
    r31 = ctx->gpr[31];
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80000033 gpr_write=0xE000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8014B188 func_8014B188 preserves=true fpr_mask=0x00000000
