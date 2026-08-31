#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8079ED4C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_8079ED4C;

loc_8079ED4C:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r5 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 104));
    r5 = (r5 + 12104);
    r6 = (r0 * 116);
    r4 = MemoryInline::FlatRead32((r3 + 116));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r4 = (r4 | 64);
    MemoryInline::FlatWrite32((r3 + 116), r4);
    r6 = (r5 + r6);
    MemoryInline::FlatWriteFloat32((r3 + 100), f1.d);
    r0 = (r0 * 116);
    r4 = MemoryInline::FlatRead32((r3 + 164));
    MemoryInline::FlatWriteFloat32((r3 + 96), f1.d);
    r5 = (r5 + r0);
    MemoryInline::FlatWriteFloat32((r3 + 92), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 64));
    f2.d = MemoryInline::FlatReadFloat32((r6 + 56));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 184), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 180), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 52));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8079ED4C func_8079ED4C preserves=true fpr_mask=0x00000000
