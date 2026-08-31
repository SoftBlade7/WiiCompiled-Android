#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015322C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];

    goto loc_8015322C;

loc_8015322C:
{
    r3 = r5;
    ctx->lr = 0x80153234u;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8012EE3Cu>(ctx);
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801532E4u>(ctx);
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE7F7 gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8015322C func_8015322C preserves=true fpr_mask=0x00000000
