#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8064D804(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_8064D804;

loc_8064D804:
{
    r5 = 0x809C0000u;
    r4 = 0x809C0000u;
    r3 = 0x809C0000u;
    r5 = (r5 + 7920);
    r4 = (r4 + 7440);
    r3 = (r3 + 7016);
    MemoryInline::FlatWriteRam32(r5, r4);
    MemoryInline::FlatWriteRam32((r5 + 4), r3);
    MemoryInline::FlatWriteRam32((r5 + 8), r4);
    MemoryInline::FlatWriteRam32((r5 + 12), r4);
    MemoryInline::FlatWriteRam32((r5 + 16), r4);
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000038 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8064D804 func_8064D804 preserves=true fpr_mask=0x00000000
