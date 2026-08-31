#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CF668(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800CF668;

loc_800CF668:
{
    r31 = 6;
    r3 = -50;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x800CF6A0u>(ctx);
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x7FFFFFF7 gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800CF668 func_800CF668 preserves=true fpr_mask=0x00000000
