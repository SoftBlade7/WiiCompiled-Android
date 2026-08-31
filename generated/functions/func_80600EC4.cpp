#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80600EC4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r31 = ctx->gpr[31];

    goto loc_80600EC4;

loc_80600EC4:
{
    r31 = 6317;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80600EFCu>(ctx);
    r31 = ctx->gpr[31];
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x7FFFEFC6 gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFE cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80600EC4 func_80600EC4 preserves=true fpr_mask=0x00000000
