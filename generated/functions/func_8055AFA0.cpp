#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8055AFA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_8055AFA0;

loc_8055AFA0:
{
    r6 = 0x808B0000u;
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r6 = (r6 + 18400);
    f0.d = PpcFmulsInline(f1.d, f1.d);
    MemoryInline::FlatWrite32(r3, r6);
    MemoryInline::FlatWrite32((r3 + 8), r5);
    r4 = MemoryInline::FlatRead32((r4 + 72));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r4 = MemoryInline::FlatRead32((r4 + 72));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000050 gpr_return=0x00000010 fpr_read=0x00000002 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8055AFA0 func_8055AFA0 preserves=true fpr_mask=0x00000000
