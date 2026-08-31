#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806E6B58(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_806E6B58;

loc_806E6B58:
{
    r4 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 2164));
    MemoryInline::FlatWriteFloat32((r3 + 244), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 252), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 256), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 264), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 268), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 272), f0.d);
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000010 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806E6B58 func_806E6B58 preserves=true fpr_mask=0x00000000
