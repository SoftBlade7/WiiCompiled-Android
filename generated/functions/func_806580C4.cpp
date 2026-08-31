#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806580C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r5_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];

    goto loc_806580C4;

loc_806580C4:
{
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r5 = (r5_rot_0 & 1020);
    r4 = (r3 + r5);
    r0 = MemoryInline::FlatRead32((r4 + 10092));
    r0 = (r0 * 48);
    r0 = (r3 + r0);
    r3 = (r0 + r5);
    r3 = MemoryInline::FlatRead32((r3 + 240));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 32u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
            r10 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 4));
        }
    }
    r9 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 8));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r8 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 12));
    r10 = MemoryInline::FlatRead32((r10 + 8));
    r4 = MemoryInline::FlatRead32((r9 + 8));
    r9 = (r0 + r10);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r3 + 16));
    r9 = (r9 + r4);
    r0 = MemoryInline::FlatRead32((r8 + 8));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 20u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 20));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 24));
        }
    }
    r9 = (r9 + r0);
    r4 = MemoryInline::FlatRead32((r7 + 8));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 28));
    r9 = (r9 + r4);
    r0 = MemoryInline::FlatRead32((r6 + 8));
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r9 = (r9 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r9 = (r9 + r4);
    r3 = (r9 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x000007F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806580C4 func_806580C4 preserves=true fpr_mask=0x00000000
