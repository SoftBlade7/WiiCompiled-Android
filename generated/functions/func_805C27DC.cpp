#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805C27DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r7_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    goto loc_805C27DC;

loc_805C27DC:
{
    r7 = MemoryInline::FlatRead32(r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r8 = r5;
    r5 = r6;
    r7_addr_0 = (r7 + r0);
    MemoryInline::FlatWrite32(r7_addr_0, r8);
    r4 = r3;
    r6 = MemoryInline::FlatRead32((r3 + 4));
    r3 = r8;
    r6_addr_0 = (r6 + r0);
    MemoryInline::FlatWrite32(r6_addr_0, r8);
    // inline leaf 0x8063D398 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 100), r4);
    MemoryInline::FlatWrite32((r3 + 132), r5);
    // end of inlined leaf 0x8063D398
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805C27DC func_805C27DC preserves=true fpr_mask=0x00000000
