#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801BAD10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r31 = ctx->gpr[31];

    goto loc_801BAD10;

loc_801BAD10:
{
    r31 = 0;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x801BAD1Cu>(ctx);
    r31 = ctx->gpr[31];
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801BAD10 func_801BAD10 preserves=true fpr_mask=0x00000000
