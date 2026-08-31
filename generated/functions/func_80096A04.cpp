#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80096A04(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r28 = ctx->gpr[28];

    goto loc_80096A04;

loc_80096A04:
{
    r3 = r28;
    r4 = r25;
    ctx->lr = 0x80096A10u;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8009BD00u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r25 = ctx->gpr[25];
    r28 = ctx->gpr[28];
    InvokeDirectCpu<0x8009716Cu>(ctx);
    r25 = ctx->gpr[25];
    r28 = ctx->gpr[28];
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFE7 gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80096A04 func_80096A04 preserves=true fpr_mask=0x00000000
