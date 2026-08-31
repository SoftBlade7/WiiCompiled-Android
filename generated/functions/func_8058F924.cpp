#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8058F924(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_8058F924;

loc_8058F924:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r3 = 0x80890000u;
    r4 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 7112));
    r3 = 0x808B0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 7240));
    r4 = 0x80590000u;
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    r3 = (r3 + 25528);
    r5 = 0x809C0000u;
    r4 = (r4 + -1648);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    r5 = (r5 + 6376);
    r7 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r6 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    r0 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWriteRam32((r3 + 4), r7);
    MemoryInline::FlatWriteRam32((r3 + 8), r6);
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    MemoryInline::FlatWriteRam32(r5, r0);
    MemoryInline::FlatWriteRam32((r5 + 4), r4);
    MemoryInline::FlatWriteRam32((r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000002 gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8058F924 func_8058F924 preserves=true fpr_mask=0x00000000
