#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805F03DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lhax_805F03F0_loc_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];

    goto loc_805F03DC;

loc_805F03DC:
{
    r0 = MemoryInline::FlatRead32((r3 + 120));
    r9 = 0x80890000u;
    r9 = (r9 + 23744);
    r0 = (r0 * 24);
    r10 = (r9 + r0);
    addr_lhax_805F03F0_loc_0 = (r9 + r0);
    r8 = MemoryInline::FlatRead16(addr_lhax_805F03F0_loc_0);
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r7 = MemoryInline::FlatRead16((r10 + 2));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r6 = MemoryInline::FlatRead16((r10 + 4));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r0 = MemoryInline::FlatRead16((r10 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r8));
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r4 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 120));
    r0 = (r0 * 24);
    r7 = (r9 + r0);
    r6 = MemoryInline::FlatRead16((r7 + 8));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r4 = MemoryInline::FlatRead16((r7 + 10));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = MemoryInline::FlatRead16((r7 + 12));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r7 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r5 + 6), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x000007D9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805F03DC func_805F03DC preserves=true fpr_mask=0x00000000
