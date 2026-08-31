#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80171770(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80171770;

loc_80171770:
{
    MemoryInline::FlatWrite32((r3 + -32768), r5);
    MemoryInline::FlatWrite8((r3 + -32768), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + -32768), r4);
    MemoryInline::FlatWrite8((r3 + -32768), static_cast<uint8_t>(r0));
    r5 = -1358036992;
    r4 = -1290928128;
    r5 = (r5 + -25600);
    MemoryInline::FlatWrite32((r3 + -32768), r5);
    r4 = (r4 + -9216);
    MemoryInline::FlatWrite8((r3 + -32768), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + -32768), r4);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r1 = (r1 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0xC0000032 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80171770 func_80171770 preserves=true fpr_mask=0x00000000
