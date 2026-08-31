#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8071C6CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_8071C6CC;

loc_8071C6CC:
{
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r4 = 0x808A0000u;
    r0 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8276));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r5 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r5 + 16), f0.d);
    MemoryInline::FlatWrite32((r5 + 24), r0);
    MemoryInline::FlatWriteFloat32((r5 + 20), f1.d);
    MemoryInline::FlatWrite32((r5 + 28), r0);
    MemoryInline::FlatWrite8((r5 + 40), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 16), f0.d);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    MemoryInline::FlatWriteFloat32((r3 + 20), f1.d);
    MemoryInline::FlatWrite32((r3 + 28), r0);
    MemoryInline::FlatWrite8((r3 + 40), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8071C6CC func_8071C6CC preserves=true fpr_mask=0x00000000
