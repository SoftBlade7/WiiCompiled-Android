#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80136DF8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];

    goto loc_80136DF8;

loc_80136DF8:
{
    r3 = (r1 + 8);
    ctx->lr = 0x80136E00u;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801324DCu>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80136F3Cu>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00020F3 gpr_write=0xF00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80136DF8 func_80136DF8 preserves=true fpr_mask=0x00000000
