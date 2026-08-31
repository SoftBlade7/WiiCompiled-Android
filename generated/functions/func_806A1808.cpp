#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806A1808(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_806A1808;

loc_806A1808:
{
    r5 = 1;
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 21), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite16((r3 + 24), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r3 + 22), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000021 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806A1808 func_806A1808 preserves=true fpr_mask=0x00000000
