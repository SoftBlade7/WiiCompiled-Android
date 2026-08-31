#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80873DC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];

    goto loc_80873DC0;

loc_80873DC0:
{
    r10 = (r4 * 28);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r8 = MemoryInline::FlatRead32(r5);
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r9 = (r0 + r10);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWrite32(r9, r8);
    r5 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWrite32((r9 + 4), r4);
    r4 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite32((r9 + 8), r0);
    r0 = MemoryInline::FlatRead32((r6 + 8));
    r6 = MemoryInline::FlatRead32((r3 + 8));
    r6 = (r6 + r10);
    MemoryInline::FlatWrite32((r6 + 12), r5);
    MemoryInline::FlatWrite32((r6 + 16), r4);
    MemoryInline::FlatWrite32((r6 + 20), r0);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r0 + r10);
    MemoryInline::FlatWrite32((r3 + 24), r7);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F8 gpr_write=0x00000779 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80873DC0 func_80873DC0 preserves=true fpr_mask=0x00000000
