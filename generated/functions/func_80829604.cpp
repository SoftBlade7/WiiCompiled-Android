#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80829604(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_80829604;

loc_80829604:
{
    r3 = 0x808B0000u;
    r4 = 0x808B0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -14572));
    r6 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + -14624));
    r3 = (r6 + 17188);
    r4 = 0x80510000u;
    r5 = 0x809C0000u;
    MemoryInline::FlatWriteRamFloat32((r6 + 17188), f1.d);
    r4 = (r4 + 13824);
    r5 = (r5 + 17176);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f1.d);
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    MemoryInline::FlatWriteRam32(r5, r0);
    MemoryInline::FlatWriteRam32((r5 + 4), r4);
    MemoryInline::FlatWriteRam32((r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80829604 func_80829604 preserves=true fpr_mask=0x00000000
