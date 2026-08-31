#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80747404(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_80747404;

loc_80747404:
{
    r4 = MemoryInline::FlatRead16((r3 + 44));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r0));
    r0 = (r4 | 4);
    MemoryInline::FlatWrite16((r3 + 44), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 264));
    MemoryInline::FlatWriteFloat32((r3 + 88), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 268));
    MemoryInline::FlatWriteFloat32((r3 + 92), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 272));
    MemoryInline::FlatWriteFloat32((r3 + 96), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 276));
    MemoryInline::FlatWriteFloat32((r3 + 100), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 280));
    MemoryInline::FlatWriteFloat32((r3 + 104), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 284));
    MemoryInline::FlatWriteFloat32((r3 + 108), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 288));
    MemoryInline::FlatWriteFloat32((r3 + 112), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 292));
    MemoryInline::FlatWriteFloat32((r3 + 116), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 296));
    MemoryInline::FlatWriteFloat32((r3 + 120), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 300));
    MemoryInline::FlatWriteFloat32((r3 + 124), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 304));
    MemoryInline::FlatWriteFloat32((r3 + 128), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 308));
    MemoryInline::FlatWriteFloat32((r3 + 132), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 276));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 292));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 308));
    MemoryInline::FlatWriteFloat32((r3 + 48), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 52), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 56), f2.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80747404 func_80747404 preserves=true fpr_mask=0x00000000
