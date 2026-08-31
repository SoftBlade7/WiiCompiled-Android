#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8064FD70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];

    goto loc_8064FD70;

loc_8064FD70:
{
    r3 = 2;
    ctx->lr = 0x8064FD78u;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8065FE8Cu>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8064FD84u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFF7 gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8064FD70 func_8064FD70 preserves=true fpr_mask=0x00000000
