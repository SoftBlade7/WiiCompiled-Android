#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A20BC(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];

    goto loc_801A20BC;

loc_801A20BC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 448u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 404u, (r3 + 408), r4);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 4), r5);
    r11 = 0;
    r11 = (r11 | 36914);
    MemoryInline::WriteResolved32(guest_range_0, 408u, (r3 + 412), r11);
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 124u, (r3 + 128), r0);
    MemoryInline::WriteResolved32(guest_range_0, 136u, (r3 + 140), r0);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 8), r2);
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 52), r13);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 16), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 24), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 28), r0);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 32), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 36), r0);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 40), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 44), r0);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 48), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 56), r0);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 60), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r3 + 64), r0);
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r3 + 68), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r3 + 72), r0);
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r3 + 76), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r3 + 80), r0);
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r3 + 84), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r3 + 88), r0);
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r3 + 92), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r3 + 96), r0);
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r3 + 100), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r3 + 104), r0);
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r3 + 108), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r3 + 112), r0);
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r3 + 116), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r3 + 120), r0);
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r3 + 124), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 416u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 416u, (r3 + 420), r0);
        MemoryInline::WriteResolved32(guest_range_0, 420u, (r3 + 424), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 424u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 424u, (r3 + 428), r0);
        MemoryInline::WriteResolved32(guest_range_0, 428u, (r3 + 432), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 432u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 432u, (r3 + 436), r0);
        MemoryInline::WriteResolved32(guest_range_0, 436u, (r3 + 440), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 440u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 440u, (r3 + 444), r0);
        MemoryInline::WriteResolved32(guest_range_0, 444u, (r3 + 448), r0);
    }
    InvokeDirectCpu<0x801A2098u>(ctx);
    ctx->gpr[0] = r0;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000203C gpr_write=0x00000801 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801A20BC func_801A20BC preserves=true fpr_mask=0x00000000
