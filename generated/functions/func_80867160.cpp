#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80867160(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    goto loc_80867160;

loc_80867160:
{
    r5 = (r5 - r4);
    r7 = 0;
    r5 = (r5 + 1);
    r8 = -1;
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 24), r4);
    MemoryInline::FlatWrite32((r3 + 28), r8);
    MemoryInline::FlatWrite32((r3 + 32), r7);
    MemoryInline::FlatWrite16((r3 + 36), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite8((r3 + 38), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 39), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 40), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x000001A1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80867160 func_80867160 preserves=true fpr_mask=0x00000000
