#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801265A4(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];

    goto loc_801265A4;

loc_801265A4:
{
    r4 = 0x802F0000u;
    r3 = 65536;
    r0 = (r3 + -32768);
    r5 = 0;
    r4 = (r4 + 29504);
    r3 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -26400), 0, 28u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r13 + -26384), r5);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r13 + -26376), r5);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r13 + -26380), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r13 + -26392), r3);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 6u, (r13 + -26394), r0);
        MemoryInline::WriteResolved16(guest_range_0, 4u, (r13 + -26396), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r13 + -26398), r0);
        MemoryInline::WriteResolved16(guest_range_0, 0u, (r13 + -26400), r0);
    }
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002000 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801265A4 func_801265A4 preserves=true fpr_mask=0x00000000
