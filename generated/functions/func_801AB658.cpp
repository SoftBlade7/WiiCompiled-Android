#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801AB658(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];

    goto loc_801AB658;

loc_801AB658:
{
    r3 = 0x80000000u;
    r0 = MemoryInline::FlatRead32((r3 + 12592));
    MemoryInline::FlatWrite32((r13 + -28952), r0);
    r0 = MemoryInline::FlatRead32((r3 + 12596));
    MemoryInline::FlatWrite32((r13 + -25304), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002000 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801AB658 func_801AB658 preserves=true fpr_mask=0x00000000
