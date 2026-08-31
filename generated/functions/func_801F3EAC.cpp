#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F3EAC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_801F3EAC;

loc_801F3EAC:
{
    r0 = (r3 & 255);
    r3 = 0x80360000u;
    r0 = (r0 * 44);
    r3 = (r3 + -23936);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 1912), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F3EAC func_801F3EAC preserves=true fpr_mask=0x00000000
