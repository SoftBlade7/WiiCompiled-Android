#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DA914(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];

    goto loc_801DA914;

loc_801DA914:
{
    r30 = 1;
    r29 = 1;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    InvokeDirectCpu<0x801DAB8Cu>(ctx);
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x9FFFFFFF gpr_write=0xFFFF1FFB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x03 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x801DA914 func_801DA914 preserves=true fpr_mask=0x00000000
