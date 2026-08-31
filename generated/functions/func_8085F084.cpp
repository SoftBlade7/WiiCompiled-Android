#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8085F084(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_8085F084;

loc_8085F084:
{
    r4 = 0x809C0000u;
    r3 = 0x809C0000u;
    r4 = (r4 + 18192);
    r0 = (r4 + 0);
    r3 = (r3 + 18160);
    MemoryInline::FlatWriteRam32(r4, r3);
    MemoryInline::FlatWriteRam32((r4 + 12), r0);
    MemoryInline::FlatWriteRam32((r4 + 16), r0);
    MemoryInline::FlatWriteRam32((r4 + 20), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8085F084 func_8085F084 preserves=true fpr_mask=0x00000000
