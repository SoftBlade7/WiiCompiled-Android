#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80607B40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    goto loc_80607B40;

loc_80607B40:
{
    MemoryInline::FlatWrite32((r3 + 424), r4);
    MemoryInline::FlatWrite32((r3 + 428), r5);
    MemoryInline::FlatWrite16((r3 + 432), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r3 + 434), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite32((r3 + 436), r8);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F8 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80607B40 func_80607B40 preserves=true fpr_mask=0x00000000
