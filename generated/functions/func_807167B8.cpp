#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807167B8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_807167B8;

loc_807167B8:
{
    r4 = 0x808D0000u;
    r0 = 0;
    r4 = (r4 + -28440);
    MemoryInline::FlatWrite32(r3, r4);
    r5 = 0x809C0000u;
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r4 = 0x808D0000u;
    r4 = (r4 + -28584);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r5 + 10320), r3);
    MemoryInline::FlatWrite32(r3, r4);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807167B8 func_807167B8 preserves=true fpr_mask=0x00000000
