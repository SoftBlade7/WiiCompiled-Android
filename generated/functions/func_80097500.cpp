#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80097500(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r6 = ctx->gpr[6];

    goto loc_80097500;

loc_80097500:
{
    r6 = 248;
    r3 = (r3 + 8);
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x80095850u>(ctx);
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00001BB gpr_write=0xF00001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80097500 func_80097500 preserves=true fpr_mask=0x00000000
