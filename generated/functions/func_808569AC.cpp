#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808569AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r5 = ctx->gpr[5];

    goto loc_808569AC;

loc_808569AC:
{
    r5 = 0;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80856B74u>(ctx);
    r5 = ctx->gpr[5];
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0000FDB gpr_write=0xC0000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x808569AC func_808569AC preserves=true fpr_mask=0x00000000
