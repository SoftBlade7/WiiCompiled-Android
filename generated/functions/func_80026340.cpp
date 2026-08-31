#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80026340(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80026340;

loc_80026340:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x80270000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r4 + 8792);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 28), 0, 128u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 28), r4);
    r4 = 20;
    r3 = (r3 + 36);
    // inline leaf 0x800AEF60 (6 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 16u, (r3 + 8), r0);
        MemoryInline::WriteResolved16(guest_range_0, 18u, (r3 + 10), r4);
    }
    // end of inlined leaf 0x800AEF60
    r3 = (r31 + 48);
    r4 = 20;
    // inline leaf 0x800AEF60 (6 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 28u, (r3 + 8), r0);
        MemoryInline::WriteResolved16(guest_range_0, 30u, (r3 + 10), r4);
    }
    // end of inlined leaf 0x800AEF60
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 32u, (r31 + 60), static_cast<uint16_t>(r0));
    r3 = (r31 + 144);
    r4 = 48;
    // inline leaf 0x800AEF60 (6 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 116u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 124u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 124u, (r3 + 8), r0);
        MemoryInline::WriteResolved16(guest_range_0, 126u, (r3 + 10), r4);
    }
    // end of inlined leaf 0x800AEF60
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000000A gpr_write=0x8000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80026340 func_80026340 preserves=true fpr_mask=0x00000000
