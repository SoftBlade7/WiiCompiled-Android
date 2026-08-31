#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009DDF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];

    goto loc_8009DDF0;

loc_8009DDF0:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8009DF00u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00001DB gpr_write=0xF00001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8009DDF0 func_8009DDF0 preserves=true fpr_mask=0x00000000
