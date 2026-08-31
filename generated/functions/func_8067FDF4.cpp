#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8067FDF4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_8067FDF4;

loc_8067FDF4:
{
    r0 = MemoryInline::FlatRead32(r4);
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    r0 = (r0 | 64);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r4 + 8), f2.d);
    MemoryInline::FlatWriteFloat32((r4 + 12), f1.d);
    MemoryInline::FlatWriteFloat32((r4 + 16), f0.d);
    MemoryInline::FlatWrite32(r4, r0);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000030 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8067FDF4 func_8067FDF4 preserves=true fpr_mask=0x00000000
