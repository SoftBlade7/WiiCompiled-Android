#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008E170(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r7 = ctx->gpr[7];

    goto loc_8008E170;

loc_8008E170:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 28), 0, 228u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 196u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 196u, (r3 + 224), r7);
        MemoryInline::WriteResolved32(guest_range_0, 200u, (r3 + 228), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 204u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 204u, (r3 + 232), r7);
        MemoryInline::WriteResolved32(guest_range_0, 208u, (r3 + 236), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 212u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 212u, (r3 + 240), r7);
        MemoryInline::WriteResolved32(guest_range_0, 216u, (r3 + 244), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 220u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 220u, (r3 + 248), r7);
        MemoryInline::WriteResolved32(guest_range_0, 224u, (r3 + 252), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 28), r7);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 32), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 36), r7);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 40), r7);
    }
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 44), r7);
    MemoryInline::WriteResolved8(guest_range_0, 113u, (r3 + 141), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 112u, (r3 + 140), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 72), r5);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000B9 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008E170 func_8008E170 preserves=true fpr_mask=0x00000000
