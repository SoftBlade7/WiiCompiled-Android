#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801D9A6C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r5 = ctx->gpr[5];

    goto loc_801D9A6C;

loc_801D9A6C:
{
    r5 = 2;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x801D9884u>(ctx);
    r5 = ctx->gpr[5];
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFDF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801D9A6C func_801D9A6C preserves=true fpr_mask=0x00000000
