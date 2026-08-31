#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023FF24(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_8023FF24;

loc_8023FF24:
{
    r5 = 0x802A0000u;
    r4 = 1;
    r0 = 16;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 72u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r3, static_cast<uint8_t>(r4));
    r5 = (r5 + 16192);
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r3 + 68), r5);
    r5 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r3 + 2), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r5);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r5);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r5);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r5);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r5);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 44), r5);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 48), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 52), r5);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 56), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r3 + 60), r5);
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r3 + 64), r5);
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_8023FF24_statefree(uint32_t native_r3)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;
    uint32_t cached_r5 = 0;

    uint8_t* guest_range_0 = nullptr;

    goto loc_8023FF24;

loc_8023FF24:
{
    cached_r5 = 0x802A0000u;
    cached_r4 = 1;
    cached_r0 = 16;
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r3, 0, 72u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, cached_r3, static_cast<uint8_t>(cached_r4));
    cached_r5 = (cached_r5 + 16192);
    MemoryInline::WriteResolved32(guest_range_0, 68u, (cached_r3 + 68), cached_r5);
    cached_r5 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 2u, (cached_r3 + 2), static_cast<uint16_t>(cached_r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r5)) << 32) | static_cast<uint32_t>(cached_r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (cached_r3 + 4), cached_r5);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (cached_r3 + 8), cached_r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r5)) << 32) | static_cast<uint32_t>(cached_r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (cached_r3 + 12), cached_r5);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (cached_r3 + 16), cached_r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r5)) << 32) | static_cast<uint32_t>(cached_r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (cached_r3 + 20), cached_r5);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (cached_r3 + 24), cached_r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r5)) << 32) | static_cast<uint32_t>(cached_r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (cached_r3 + 28), cached_r5);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (cached_r3 + 32), cached_r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r5)) << 32) | static_cast<uint32_t>(cached_r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (cached_r3 + 36), cached_r5);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (cached_r3 + 40), cached_r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r5)) << 32) | static_cast<uint32_t>(cached_r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (cached_r3 + 44), cached_r5);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (cached_r3 + 48), cached_r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r5)) << 32) | static_cast<uint32_t>(cached_r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (cached_r3 + 52), cached_r5);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (cached_r3 + 56), cached_r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r5)) << 32) | static_cast<uint32_t>(cached_r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 60u, (cached_r3 + 60), cached_r5);
        MemoryInline::WriteResolved32(guest_range_0, 64u, (cached_r3 + 64), cached_r5);
    }

return { static_cast<uint64_t>(cached_r4), static_cast<uint64_t>(cached_r5) };
}

}
// RECOMP_STATE_FREE_ABI address=0x8023FF24 symbol=func_8023FF24_statefree gpr_in=0x00000008 gpr_out=0x00000030 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8023FF24 func_8023FF24 preserves=true fpr_mask=0x00000000

