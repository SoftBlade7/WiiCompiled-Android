#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8014B3FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r29 = ctx->gpr[29];

    goto loc_8014B3FC;

loc_8014B3FC:
{
    r3 = r29;
    ctx->lr = 0x8014B404u;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8014F7D0u>(ctx);
    r3 = ctx->gpr[3];
    r29 = ctx->gpr[29];
    InvokeDirectCpu<0x8014B410u>(ctx);
    r29 = ctx->gpr[29];
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFF7 gpr_write=0xFE0018FB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8014B3FC func_8014B3FC preserves=true fpr_mask=0x00000000
