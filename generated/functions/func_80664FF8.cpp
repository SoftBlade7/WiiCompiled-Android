#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80664FF8(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_80664FF8;

loc_80664FF8:
{
    r6 = (r4 * 48);
    r5 = 0;
    r4 = -1;
    r0 = 255;
    r3 = (r3 + r6);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 32), 0, 47u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 32), r5);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 52), r4);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 56), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 60), r5);
    MemoryInline::WriteResolved8(guest_range_0, 44u, (r3 + 76), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 36), r4);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 44), r4);
    MemoryInline::WriteResolved8(guest_range_0, 45u, (r3 + 77), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 40), r4);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 48), r4);
    MemoryInline::WriteResolved8(guest_range_0, 46u, (r3 + 78), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r3 + 64), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 33u, (r3 + 65), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 34u, (r3 + 66), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 35u, (r3 + 67), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 36u, (r3 + 68), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 37u, (r3 + 69), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 38u, (r3 + 70), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 39u, (r3 + 71), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r3 + 72), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 41u, (r3 + 73), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 42u, (r3 + 74), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 43u, (r3 + 75), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80664FF8 func_80664FF8 preserves=true fpr_mask=0x00000000
