#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807BC0FC(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_807BC0FC;

loc_807BC0FC:
{
    r0 = 0;
    r4 = 20;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 38u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 4), r4);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 8), r0);
    }
    MemoryInline::WriteResolved8(guest_range_0, 37u, (r3 + 41), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 24), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 16), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 20), r0);
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r3 + 28), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 32), r0);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 36), r0);
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807BC0FC func_807BC0FC preserves=true fpr_mask=0x00000000
