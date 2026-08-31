#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80096B48(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80096B48;

loc_80096B48:
{
    MemoryInline::FlatWrite8((r31 + 107), static_cast<uint8_t>(r6));
    InvokeDirectCpu<0x8009716Cu>(ctx);
    r31 = ctx->gpr[31];
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80000042 gpr_write=0xFE000803 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80096B48 func_80096B48 preserves=true fpr_mask=0x00000000
