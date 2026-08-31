#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8065AF84(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_8065AF84;

loc_8065AF84:
{
    r4 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 128u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r3, static_cast<uint8_t>(r4));
    r0 = 255;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r4);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 56), r4);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r4);
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r3 + 60), r4);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r4);
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r3 + 64), r4);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r4);
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r3 + 68), r4);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r4);
    MemoryInline::WriteResolved32(guest_range_0, 72u, (r3 + 72), r4);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r4);
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r3 + 76), r4);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r4);
    MemoryInline::WriteResolved32(guest_range_0, 80u, (r3 + 80), r4);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r4);
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r3 + 84), r4);
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r4);
    MemoryInline::WriteResolved32(guest_range_0, 88u, (r3 + 88), r4);
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 44), r4);
    MemoryInline::WriteResolved32(guest_range_0, 92u, (r3 + 92), r4);
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 48), r4);
    MemoryInline::WriteResolved32(guest_range_0, 96u, (r3 + 96), r4);
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 52), r4);
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r3 + 100), r4);
    MemoryInline::WriteResolved8(guest_range_0, 104u, (r3 + 104), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r3 + 116), r4);
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r3 + 112), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r3 + 124), r4);
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r3 + 120), r4);
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8065AF84 func_8065AF84 preserves=true fpr_mask=0x00000000
