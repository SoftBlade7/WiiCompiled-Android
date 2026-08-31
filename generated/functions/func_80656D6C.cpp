#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80656D6C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_80656D6C;

loc_80656D6C:
{
    r5 = (r4 * 12);
    r4 = 0;
    r0 = 1;
    r3 = (r3 + r5);
    MemoryInline::FlatWrite32((r3 + 9708), r4);
    MemoryInline::FlatWrite8((r3 + 9712), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 9713), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 9714), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 9715), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 9716), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 9717), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80656D6C func_80656D6C preserves=true fpr_mask=0x00000000
