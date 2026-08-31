#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A77F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_805A77F0;

loc_805A77F0:
{
    r4 = MemoryInline::FlatRead16((r3 + 128));
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r4 + -1);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 * 12);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 160));
    r3 = (r3 + r0);
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 164));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 168));
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805A77F0 func_805A77F0 preserves=true fpr_mask=0x00000000
