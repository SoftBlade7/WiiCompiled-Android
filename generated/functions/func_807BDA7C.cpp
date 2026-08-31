#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807BDA7C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_807BDA7C;

loc_807BDA7C:
{
    r4 = 0x809C0000u;
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    r4 = (r4 + 14552);
    MemoryInline::FlatWriteRam32((r4 + 768), r0);
    MemoryInline::FlatWriteRam32((r4 + 772), r0);
    MemoryInline::FlatWriteRam32((r4 + 776), r3);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807BDA7C func_807BDA7C preserves=true fpr_mask=0x00000000
