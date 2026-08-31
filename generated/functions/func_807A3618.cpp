#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A3618(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_807A3618;

loc_807A3618:
{
    r4 = 0x808A0000u;
    r5 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 20992));
    r0 = (r5 | 64);
    MemoryInline::FlatWrite32((r3 + 116), r5);
    MemoryInline::FlatWrite32((r3 + 120), r5);
    MemoryInline::FlatWrite32((r3 + 176), r5);
    MemoryInline::FlatWrite32((r3 + 124), r0);
    MemoryInline::FlatWriteFloat32((r3 + 80), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 84), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 88), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807A3618 func_807A3618 preserves=true fpr_mask=0x00000000
