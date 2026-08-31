#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8016E3C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r10 = ctx->gpr[10];
    uint32_t r12 = ctx->gpr[12];

    goto loc_8016E3C0;

loc_8016E3C0:
{
    r10 = 3;
    r12 = 1;
    ctx->gpr[10] = r10;
    ctx->gpr[12] = r12;
    InvokeDirectCpu<0x8016E424u>(ctx);
    r10 = ctx->gpr[10];
    r12 = ctx->gpr[12];
    ctx->gpr[10] = r10;
    ctx->gpr[12] = r12;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEBFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8016E3C0 func_8016E3C0 preserves=true fpr_mask=0x00000000
