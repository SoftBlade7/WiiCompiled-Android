#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805F5FA4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    goto loc_805F5FA4;

loc_805F5FA4:
{
    r8 = 0x80380000u;
    r7 = (r3 + r4);
    r8 = MemoryInline::FlatRead32((r8 + 24576));
    r4 = (r5 * 36);
    r0 = MemoryInline::FlatRead8((r7 + 6480));
    r7 = MemoryInline::FlatRead32((r8 + 88));
    r5 = (r0 * 324);
    r0 = (r7 * 3240);
    r0 = (r3 + r0);
    r0 = (r5 + r0);
    r3 = (r6 * 12);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x000001B9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805F5FA4 func_805F5FA4 preserves=true fpr_mask=0x00000000
