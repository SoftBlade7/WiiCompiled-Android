#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8071CFD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_8071CFD0;

loc_8071CFD0:
{
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8276));
    r0 = 0;
    r4 = MemoryInline::FlatRead32((r5 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r4 + 16), f0.d);
    MemoryInline::FlatWrite32((r4 + 24), r0);
    MemoryInline::FlatWriteFloat32((r4 + 20), f1.d);
    MemoryInline::FlatWrite32((r4 + 28), r0);
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r5 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r4 + 16), f0.d);
    MemoryInline::FlatWrite32((r4 + 24), r0);
    MemoryInline::FlatWriteFloat32((r4 + 20), f1.d);
    MemoryInline::FlatWrite32((r4 + 28), r0);
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 16), f1.d);
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
// RECOMP_REGISTRATION base 0x8071CFD0 func_8071CFD0 preserves=true fpr_mask=0x00000000
