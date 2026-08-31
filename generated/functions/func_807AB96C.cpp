#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807AB96C(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_807AB96C;

loc_807AB96C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r6 = 0x80240000u;
    r3 = 0x808D0000u;
    r6 = (r6 + 28832);
    r5 = MemoryInline::FlatRead32(r6);
    r3 = (r3 + 8520);
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    r4 = MemoryInline::FlatRead32((r6 + 4));
    r0 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 180u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 4), r5);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 8), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 12), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 32), r5);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 36), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 40), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 60), r5);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r3 + 64), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r3 + 68), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 140u, (r3 + 144), r5);
        MemoryInline::WriteResolved32(guest_range_0, 144u, (r3 + 148), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r3 + 152), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 168u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 168u, (r3 + 172), r5);
        MemoryInline::WriteResolved32(guest_range_0, 172u, (r3 + 176), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 176u, (r3 + 180), r0);
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000002 gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807AB96C func_807AB96C preserves=true fpr_mask=0x00000000
