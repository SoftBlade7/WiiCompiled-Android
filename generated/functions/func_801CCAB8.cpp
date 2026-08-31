#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801CCAB8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];

    goto loc_801CCAB8;

loc_801CCAB8:
{
    r3 = 0;
    r4 = 0;
    ctx->lr = 0x801CCAC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801349B8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r0 = 2;
    MemoryInline::FlatWrite8((r29 + 13), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    InvokeDirectCpu<0x801CCBA8u>(ctx);
    r0 = ctx->gpr[0];
    r29 = ctx->gpr[29];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00020E3 gpr_write=0xF00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801CCAB8 func_801CCAB8 preserves=true fpr_mask=0x00000000
