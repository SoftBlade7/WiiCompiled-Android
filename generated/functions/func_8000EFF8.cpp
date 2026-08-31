#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8000EFF8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t ctr = ctx->ctr;

    goto loc_8000EFF8;

loc_8000EFF8:
{
    r6 = 0x80270000u;
    r6 = (r6 + 4424);
    r6 = MemoryInline::FlatRead32((r6 + 56));
    r12 = MemoryInline::FlatRead32((r6 + 32));
    ctr = r12;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFBF gpr_write=0x00001040 gpr_return=0x00000000 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x00 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x8000EFF8 func_8000EFF8 preserves=true fpr_mask=0x00000000
