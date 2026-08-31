#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A72DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r5 = ctx->gpr[5];

    goto loc_801A72DC;

loc_801A72DC:
{
    r5 = 0;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x801A6FFCu>(ctx);
    r5 = ctx->gpr[5];
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFDF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801A72DC func_801A72DC preserves=true fpr_mask=0x00000000
