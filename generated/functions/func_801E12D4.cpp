#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E12D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r9 = ctx->gpr[9];

    goto loc_801E12D4;

loc_801E12D4:
{
    r9 = 0;
    ctx->gpr[9] = r9;
    InvokeDirectCpu<0x801E0D60u>(ctx);
    ctx->gpr[9] = r9;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFE01DFB gpr_write=0xFFE01E4B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801E12D4 func_801E12D4 preserves=true fpr_mask=0x00000000
