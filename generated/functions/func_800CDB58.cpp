#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CDB58(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r31 = ctx->gpr[31];

    goto loc_800CDB58;

loc_800CDB58:
{
    r31 = (r31 + -800);
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x800CDBE0u>(ctx);
    r31 = ctx->gpr[31];
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0002002 gpr_write=0xE000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800CDB58 func_800CDB58 preserves=true fpr_mask=0x00000000
