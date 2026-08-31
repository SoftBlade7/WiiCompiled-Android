#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80547384(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    goto loc_80547384;

loc_80547384:
{
    r6 = 65536;
    r7 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r6 + -29504);
    r6 = MemoryInline::FlatRead32((r4 + 8));
    r8 = (r5 * r0);
    r5 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 16));
    r3 = (r3 + r8);
    MemoryInline::FlatWrite32((r3 + 56), r7);
    MemoryInline::FlatWrite32((r3 + 60), r6);
    MemoryInline::FlatWrite32((r3 + 64), r5);
    MemoryInline::FlatWrite32((r3 + 68), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x000001E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80547384 func_80547384 preserves=true fpr_mask=0x00000000
