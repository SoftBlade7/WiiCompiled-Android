#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8073B874(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_8073B874;

loc_8073B874:
{
    r5 = 0x808D0000u;
    r4 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r5 + -20456));
    MemoryInline::FlatWriteFloat32((r3 + 48), f0.d);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 10164));
    MemoryInline::FlatWriteFloat32((r3 + 44), f0.d);
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000038 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8073B874 func_8073B874 preserves=true fpr_mask=0x00000000
