#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E3040(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r27 = ctx->gpr[27];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800E3040;

loc_800E3040:
{
    r31 = 6;
    r27 = -10;
    ctx->gpr[27] = r27;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x800E306Cu>(ctx);
    r27 = ctx->gpr[27];
    r31 = ctx->gpr[31];
    ctx->gpr[27] = r27;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x77FFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800E3040 func_800E3040 preserves=true fpr_mask=0x00000000
