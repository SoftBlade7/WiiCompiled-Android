#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80529804(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];

    goto loc_80529804;

loc_80529804:
{
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite32((r3 + 12), r9);
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r10));
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007F8 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80529804 func_80529804 preserves=true fpr_mask=0x00000000
