#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DA92C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r30 = ctx->gpr[30];

    goto loc_801DA92C;

loc_801DA92C:
{
    r30 = 1;
    ctx->gpr[30] = r30;
    InvokeDirectCpu<0x801DAB8Cu>(ctx);
    r30 = ctx->gpr[30];
    ctx->gpr[30] = r30;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xBFFFFFFF gpr_write=0xFFFF1FFB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x03 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x801DA92C func_801DA92C preserves=true fpr_mask=0x00000000
