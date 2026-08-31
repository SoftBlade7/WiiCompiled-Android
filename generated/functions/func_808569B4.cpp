#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808569B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r5 = ctx->gpr[5];

    goto loc_808569B4;

loc_808569B4:
{
    r5 = 1;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80856B74u>(ctx);
    r5 = ctx->gpr[5];
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0000FDB gpr_write=0xC0000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x808569B4 func_808569B4 preserves=true fpr_mask=0x00000000
