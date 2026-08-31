#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800FC9FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_800FC9FC;

loc_800FC9FC:
{
    r0 = 0;
    r3 = 1;
    MemoryInline::FlatWrite32((r4 + 8), r0);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    MemoryInline::FlatWrite32((r4 + 20), r0);
    MemoryInline::FlatWrite32((r4 + 24), r0);
    MemoryInline::FlatWrite32((r4 + 28), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000010 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800FC9FC func_800FC9FC preserves=true fpr_mask=0x00000000
