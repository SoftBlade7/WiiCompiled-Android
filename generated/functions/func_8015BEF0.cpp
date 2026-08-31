#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015BEF0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_8015BEF0;

loc_8015BEF0:
{
    r6 = 0;
    r5 = 3;
    r0 = 8;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 21u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r4);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r6);
    }
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r3 + 17), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r3 + 18), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r6);
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r3 + 16), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r3 + 19), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r3 + 20), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r6);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000061 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8015BEF0 func_8015BEF0 preserves=true fpr_mask=0x00000000
