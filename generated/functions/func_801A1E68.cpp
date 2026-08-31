#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A1E68(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];

    goto loc_801A1E68;

loc_801A1E68:
{
    r5 = (r3 + 0);
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x801A1D40u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000028 gpr_return=0x00000008 fpr_read=0xFFFFFFFF fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801A1E68 func_801A1E68 preserves=true fpr_mask=0x00000000
