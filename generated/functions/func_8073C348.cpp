#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8073C348(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_8073C348;

loc_8073C348:
{
    r4 = MemoryInline::FlatRead32((r4 + 16));
    r0 = MemoryInline::FlatRead32((r3 + 52));
    r5 = MemoryInline::FlatRead32((r4 + 324));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 60));
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r0 = MemoryInline::FlatRead32((r3 + 52));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 20));
    MemoryInline::FlatWrite32((r4 + 4), r3);
    r4 = MemoryInline::FlatRead32((r3 + 52));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 52), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8073C348 func_8073C348 preserves=true fpr_mask=0x00000000
