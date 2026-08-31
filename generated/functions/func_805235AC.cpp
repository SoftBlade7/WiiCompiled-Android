#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805235AC(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_805235AC;

loc_805235AC:
{
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 198), 0, 712u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 0u, (r3 + 198), r0);
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r3 + 200), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 236u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 236u, (r3 + 434), r0);
        MemoryInline::WriteResolved16(guest_range_0, 238u, (r3 + 436), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 472u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 472u, (r3 + 670), r0);
        MemoryInline::WriteResolved16(guest_range_0, 474u, (r3 + 672), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 708u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 708u, (r3 + 906), r0);
        MemoryInline::WriteResolved16(guest_range_0, 710u, (r3 + 908), r0);
    }
    ctx->gpr[0] = r0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805235AC func_805235AC preserves=true fpr_mask=0x00000000
