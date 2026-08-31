#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801B1FBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r4 = ctx->gpr[4];

    goto loc_801B1FBC;

loc_801B1FBC:
{
    r4 = 32;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801B1658u>(ctx);
    r4 = ctx->gpr[4];
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFC03FCA gpr_write=0xFFC01FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801B1FBC func_801B1FBC preserves=true fpr_mask=0x00000000
