#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80666748(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_80666748;

loc_80666748:
{
    r4 = 0x809C0000u;
    r3 = 0x809C0000u;
    r4 = (r4 + 8480);
    r3 = (r3 + 7440);
    MemoryInline::FlatWriteRam32(r4, r3);
    MemoryInline::FlatWriteRam32((r4 + 4), r3);
    MemoryInline::FlatWriteRam32((r4 + 8), r3);
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000018 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80666748 func_80666748 preserves=true fpr_mask=0x00000000
