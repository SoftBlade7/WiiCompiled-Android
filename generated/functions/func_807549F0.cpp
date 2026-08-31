#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807549F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r29 = ctx->gpr[29];

    goto loc_807549F0;

loc_807549F0:
{
    r3 = r29;
    ctx->lr = 0x807549F8u;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80755C8Cu>(ctx);
    r3 = ctx->gpr[3];
    r29 = ctx->gpr[29];
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80754CD8u>(ctx);
    r3 = ctx->gpr[3];
    r29 = ctx->gpr[29];
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFF7 gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807549F0 func_807549F0 preserves=true fpr_mask=0x00000000
