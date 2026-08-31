#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80679080(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r7 = ctx->gpr[7];

    goto loc_80679080;

loc_80679080:
{
    r7 = 0;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x8067909Cu>(ctx);
    r7 = ctx->gpr[7];
    ctx->gpr[7] = r7;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFF7F gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80679080 func_80679080 preserves=true fpr_mask=0x00000000
