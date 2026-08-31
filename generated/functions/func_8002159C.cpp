#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8002159C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8002159C;

loc_8002159C:
{
    MemoryInline::FlatWrite32((r11 + -24), r26);
    MemoryInline::FlatWrite32((r11 + -20), r27);
    MemoryInline::FlatWrite32((r11 + -16), r28);
    MemoryInline::FlatWrite32((r11 + -12), r29);
    MemoryInline::FlatWrite32((r11 + -8), r30);
    MemoryInline::FlatWrite32((r11 + -4), r31);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC000800 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8002159C func_8002159C preserves=true fpr_mask=0x00000000
