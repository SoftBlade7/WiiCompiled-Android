#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8073E060(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r6 = ctx->gpr[6];

    goto loc_8073E060;

loc_8073E060:
{
    ctx->lr = 0x8073E064u;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8073E1CCu>(ctx);
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r6 = r3;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8073E1B0u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF00007B gpr_write=0xFF000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8073E060 func_8073E060 preserves=true fpr_mask=0x00000000
