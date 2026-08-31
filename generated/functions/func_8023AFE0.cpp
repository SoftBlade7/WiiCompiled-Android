#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023AFE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_8023AFE0;

loc_8023AFE0:
{
    MemoryInline::FlatWrite32((r3 + 20), r4);
    InvokeDirectCpu<0x8023B064u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8023AFE0 func_8023AFE0 preserves=true fpr_mask=0x00000000
