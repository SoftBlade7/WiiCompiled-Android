#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807BD340(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_807BD340;

loc_807BD340:
{
    r3 = 0x809C0000u;
    r5 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r5 = (r5 + 14520);
    r0 = MemoryInline::FlatRead32((r3 + 32));
    MemoryInline::FlatWriteRam32((r5 + 8), r0);
    r4 = (r0 & 1);
    r3 = (r0 & 3);
    r0 = (r0 & 7);
    MemoryInline::FlatWriteRam32((r5 + 12), r4);
    MemoryInline::FlatWriteRam32((r5 + 16), r3);
    MemoryInline::FlatWriteRam32((r5 + 20), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807BD340 func_807BD340 preserves=true fpr_mask=0x00000000
