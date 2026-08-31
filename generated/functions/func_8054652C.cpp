#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8054652C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_8054652C;

loc_8054652C:
{
    r6 = (r5 * 20);
    r0 = (r3 + 65536);
    r5 = MemoryInline::FlatRead16((r4 + 4));
    r3 = (r0 + r6);
    MemoryInline::FlatWrite16((r3 + -28276), static_cast<uint16_t>(r5));
    r0 = MemoryInline::FlatRead8((r4 + 6));
    MemoryInline::FlatWrite8((r3 + -28274), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 8));
    MemoryInline::FlatWrite16((r3 + -28272), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 10));
    MemoryInline::FlatWrite8((r3 + -28270), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWrite32((r3 + -28268), r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
    MemoryInline::FlatWrite32((r3 + -28264), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8054652C func_8054652C preserves=true fpr_mask=0x00000000
