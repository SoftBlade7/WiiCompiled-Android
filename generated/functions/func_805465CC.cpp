#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805465CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    goto loc_805465CC;

loc_805465CC:
{
    r7 = (r3 + 65536);
    r8 = MemoryInline::FlatRead16((r4 + 4));
    r6 = MemoryInline::FlatRead8((r4 + 6));
    r3 = MemoryInline::FlatRead16((r4 + 8));
    r0 = MemoryInline::FlatRead8((r4 + 10));
    MemoryInline::FlatWrite16((r7 + -28076), static_cast<uint16_t>(r8));
    MemoryInline::FlatWrite8((r7 + -28074), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite16((r7 + -28072), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r7 + -28070), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r7 + -28068), r5);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x000001C9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805465CC func_805465CC preserves=true fpr_mask=0x00000000
