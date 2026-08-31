#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80097094(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];

    goto loc_80097094;

loc_80097094:
{
    r0 = (r29 & 65535);
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x8009716Cu>(ctx);
    r0 = ctx->gpr[0];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    ctx->gpr[0] = r0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x60000002 gpr_write=0xFE000803 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80097094 func_80097094 preserves=true fpr_mask=0x00000000
