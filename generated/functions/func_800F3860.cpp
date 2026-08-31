#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F3860(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t ctr = ctx->ctr;

    goto loc_800F3860;

loc_800F3860:
{
    r4 = 0x802F0000u;
    r12 = MemoryInline::FlatRead32((r4 + 8552));
    ctr = r12;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFEF gpr_write=0x00001010 gpr_return=0x00000010 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x00 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x800F3860 func_800F3860 preserves=true fpr_mask=0x00000000
