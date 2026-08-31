#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A94D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r8_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    goto loc_805A94D8;

loc_805A94D8:
{
    r0 = MemoryInline::FlatRead8((r3 + 39));
    r7 = 0;
    r6 = MemoryInline::FlatRead32((r3 + 20));
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r8 = (r8_rot_0 & 1020);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5 = (r5_rot_0 & -4);
    r0 = 1;
    r6_addr_0 = (r6 + r5);
    r5 = MemoryInline::FlatRead32(r6_addr_0);
    MemoryInline::FlatWrite8((r5 + 830), static_cast<uint8_t>(r7));
    r5 = MemoryInline::FlatRead32((r3 + 20));
    r5_addr_0 = (r5 + r8);
    r5 = MemoryInline::FlatRead32(r5_addr_0);
    MemoryInline::FlatWrite8((r5 + 830), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r3 + 20));
    r5_addr_1 = (r5 + r8);
    r6 = MemoryInline::FlatRead32(r5_addr_1);
    r5 = MemoryInline::FlatRead32((r6 + 140));
    r0 = MemoryInline::FlatRead32((r6 + 144));
    MemoryInline::FlatWrite32((r5 + 108), r0);
    r6 = MemoryInline::FlatRead32((r3 + 20));
    r5 = MemoryInline::FlatRead32((r3 + 24));
    r6_addr_1 = (r6 + r8);
    r0 = MemoryInline::FlatRead32(r6_addr_1);
    MemoryInline::FlatWrite32(r5, r0);
    MemoryInline::FlatWrite8((r3 + 39), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x000001E1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805A94D8 func_805A94D8 preserves=true fpr_mask=0x00000000
