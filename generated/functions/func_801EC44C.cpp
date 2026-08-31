#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801EC44C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r18 = ctx->gpr[18];

    goto loc_801EC44C;

loc_801EC44C:
{
    r18 = 0;
    ctx->gpr[18] = r18;
    InvokeDirectCpu<0x801EC470u>(ctx);
    r18 = ctx->gpr[18];
    ctx->gpr[18] = r18;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFBFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801EC44C func_801EC44C preserves=true fpr_mask=0x00000000
