#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80730B40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_80730B40;

loc_80730B40:
{
    r5 = 0x808A0000u;
    r6 = 0x808D0000u;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 9864));
    r6 = (r6 + -22924);
    MemoryInline::FlatWrite32(r3, r6);
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000060 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80730B40 func_80730B40 preserves=true fpr_mask=0x00000000
