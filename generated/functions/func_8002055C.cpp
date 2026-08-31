#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8002055C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    goto loc_8002055C;

loc_8002055C:
{
    r5 = 1;
    r0 = MemoryInline::FlatRead32((r4 + 504));
    r6 = (r7 + 25556);
    r8 = 0;
    MemoryInline::FlatWrite32((r6 + 4), r8);
    r0 = (r0 | 1024);
    MemoryInline::FlatWrite32((r6 + 8), r3);
    MemoryInline::FlatWrite32((r7 + 25556), r5);
    MemoryInline::FlatWrite32((r4 + 504), r0);
}

loc_80020588:
{
    r4 = 0x802A0000u;
    r4 = (r4 + 25556);
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r4 + 8), r0);
    r3 = 0;
    // inline leaf 0x8002083C (4 guest instruction(s))
    r4 = 0x802A0000u;
    r4 = (r4 + 25744);
    MemoryInline::FlatWriteRam32((r4 + 152), r3);
    // end of inlined leaf 0x8002083C
    r3 = 0;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000009A gpr_write=0x0000017B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8002055C func_8002055C preserves=true fpr_mask=0x00000000
