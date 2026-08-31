#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80560C34(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_stbux_80560C70_loc_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    goto loc_80560C34;

loc_80560C34:
{
    r6 = MemoryInline::FlatRead32((r3 + 20));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r4 = (r4_rot_0 & 2040);
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r5 = MemoryInline::FlatRead32((r6 + 16));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & 2040);
    r7 = (r5 + r4);
    r5_addr_0 = (r5 + r4);
    r5 = MemoryInline::FlatRead8(r5_addr_0);
    MemoryInline::FlatWrite8((r3 + 76), static_cast<uint8_t>(r5));
    r4 = MemoryInline::FlatRead8((r7 + 1));
    MemoryInline::FlatWrite8((r3 + 77), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r7 + 2));
    MemoryInline::FlatWrite8((r3 + 78), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r7 + 3));
    MemoryInline::FlatWrite8((r3 + 79), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r6 + 16));
    addr_stbux_80560C70_loc_0 = (r4 + r0);
    MemoryInline::FlatWrite8(addr_stbux_80560C70_loc_0, static_cast<uint8_t>(r5));
    r4 = addr_stbux_80560C70_loc_0;
    r0 = MemoryInline::FlatRead8((r3 + 77));
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 78));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 79));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x000000F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80560C34 func_80560C34 preserves=true fpr_mask=0x00000000
