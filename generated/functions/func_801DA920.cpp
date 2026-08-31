#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DA920(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r28 = ctx->gpr[28];
    uint32_t r30 = ctx->gpr[30];

    goto loc_801DA920;

loc_801DA920:
{
    r30 = 1;
    r28 = 8;
    ctx->gpr[28] = r28;
    ctx->gpr[30] = r30;
    InvokeDirectCpu<0x801DAB8Cu>(ctx);
    r28 = ctx->gpr[28];
    r30 = ctx->gpr[30];
    ctx->gpr[28] = r28;
    ctx->gpr[30] = r30;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xAFFFFFFF gpr_write=0xFFFF1FFB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x03 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x801DA920 func_801DA920 preserves=true fpr_mask=0x00000000
