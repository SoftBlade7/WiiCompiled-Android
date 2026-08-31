#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80096C30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80096C30;

loc_80096C30:
{
    r0 = (r6 & 255);
    MemoryInline::FlatWrite16((r31 + 114), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x8009716Cu>(ctx);
    r0 = ctx->gpr[0];
    r31 = ctx->gpr[31];
    ctx->gpr[0] = r0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80000042 gpr_write=0xFE000803 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80096C30 func_80096C30 preserves=true fpr_mask=0x00000000
