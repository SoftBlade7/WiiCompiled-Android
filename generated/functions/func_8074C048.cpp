#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8074C048(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_stfsx_8074C064_loc_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_8074C048;

loc_8074C048:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r4 = 0x808A0000u;
    r5 = 0x80240000u;
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 * 20);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 11476));
    r5 = (r5 + 28832);
    addr_stfsx_8074C064_loc_0 = (r6 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8074C064_loc_0, f1.d);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 * 20);
    r4 = (r4 + r0);
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r7 = MemoryInline::FlatRead32((r3 + 4));
    r6 = (r0 * 20);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r4 = MemoryInline::FlatRead32(r5);
    r6 = (r7 + r6);
    MemoryInline::FlatWrite32((r6 + 8), r4);
    MemoryInline::FlatWrite32((r6 + 12), r0);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWrite32((r6 + 16), r0);
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x000000F1 gpr_return=0x00000010 fpr_read=0x00000002 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8074C048 func_8074C048 preserves=true fpr_mask=0x00000000
