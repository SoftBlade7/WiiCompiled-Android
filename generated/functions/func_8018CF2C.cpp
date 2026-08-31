#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8018CF2C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    goto loc_8018CF2C;

loc_8018CF2C:
{
    r5 = 0x80290000u;
    r4 = 0x80290000u;
    r5 = (r5 + -11480);
    r7 = 0x80290000u;
    MemoryInline::FlatWrite32(r3, r5);
    r4 = (r4 + -11568);
    r0 = 0;
    r7 = (r7 + -11584);
    r6 = MemoryInline::FlatRead32(r7);
    r5 = MemoryInline::FlatRead32((r7 + 4));
    MemoryInline::FlatWrite32((r3 + 4), r6);
    MemoryInline::FlatWrite32((r3 + 8), r5);
    r5 = MemoryInline::FlatRead32((r7 + 8));
    MemoryInline::FlatWrite32((r3 + 12), r5);
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x000000F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8018CF2C func_8018CF2C preserves=true fpr_mask=0x00000000
