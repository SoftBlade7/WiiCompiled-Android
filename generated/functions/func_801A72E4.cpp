#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A72E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_801A72E4;

loc_801A72E4:
{
    r0 = 0;
    r3 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r3 + 12492), r0);
    MemoryInline::FlatWriteRam32((r3 + 12488), r0);
    MemoryInline::FlatWriteRam32((r3 + 12496), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801A72E4 func_801A72E4 preserves=true fpr_mask=0x00000000
