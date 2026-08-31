#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805B78D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    goto loc_805B78D0;

loc_805B78D0:
{
    r0 = MemoryInline::FlatRead32(r4);
    f8.d = MemoryInline::FlatReadFloat32(r5);
    f7.d = MemoryInline::FlatReadFloat32((r5 + 4));
    r0 = (r0 | 1);
    f6.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f5.d = MemoryInline::FlatReadFloat32(r6);
    f4.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r6 + 8));
    f2.d = MemoryInline::FlatReadFloat32(r7);
    f1.d = MemoryInline::FlatReadFloat32((r7 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r7 + 8));
    MemoryInline::FlatWriteFloat32((r4 + 64), f8.d);
    MemoryInline::FlatWriteFloat32((r4 + 68), f7.d);
    MemoryInline::FlatWriteFloat32((r4 + 72), f6.d);
    MemoryInline::FlatWriteFloat32((r4 + 52), f5.d);
    MemoryInline::FlatWriteFloat32((r4 + 56), f4.d);
    MemoryInline::FlatWriteFloat32((r4 + 60), f3.d);
    MemoryInline::FlatWriteFloat32((r4 + 16), f2.d);
    MemoryInline::FlatWriteFloat32((r4 + 20), f1.d);
    MemoryInline::FlatWriteFloat32((r4 + 24), f0.d);
    MemoryInline::FlatWrite32(r4, r0);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F0 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x000001FF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805B78D0 func_805B78D0 preserves=true fpr_mask=0x00000000
