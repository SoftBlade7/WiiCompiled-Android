#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DA934(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r24 = ctx->gpr[24];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r30 = ctx->gpr[30];

    goto loc_801DA934;

loc_801DA934:
{
    r30 = 1;
    r28 = 16;
    r24 = 87;
    ctx->gpr[24] = r24;
    ctx->gpr[28] = r28;
    ctx->gpr[30] = r30;
    InvokeDirectCpu<0x801DAB8Cu>(ctx);
    r24 = ctx->gpr[24];
    r28 = ctx->gpr[28];
    r30 = ctx->gpr[30];
    ctx->gpr[24] = r24;
    ctx->gpr[28] = r28;
    ctx->gpr[30] = r30;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xAEFFFFFF gpr_write=0xFFFF1FFB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x03 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x801DA934 func_801DA934 preserves=true fpr_mask=0x00000000
