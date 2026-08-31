#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8064A90C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r29 = ctx->gpr[29];

    goto loc_8064A90C;

loc_8064A90C:
{
    r29 = 1;
    ctx->gpr[29] = r29;
    InvokeDirectCpu<0x8064A918u>(ctx);
    r29 = ctx->gpr[29];
    ctx->gpr[29] = r29;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xDFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8064A90C func_8064A90C preserves=true fpr_mask=0x00000000
