#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800BC6F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800BC6F0;

loc_800BC6F0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x800BC420 (7 guest instruction(s))
}

loc_inl0_0x800BC420:
{
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl0_0x800BC428:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_0x800BC434;
    }
}

loc_inl0_0x800BC42C:
{
    r3 = 0;
    goto loc_inl0_cont_800BC420;
}

loc_inl0_0x800BC434:
{
    r3 = (r3 + 192);
}

loc_inl0_cont_800BC420:
{
    // end of inlined leaf 0x800BC420
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 168u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 0u, r3, r0);
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r3 + 2), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r0);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 8), r0);
        MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 10), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r0);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 16u, (r3 + 16), r0);
        MemoryInline::WriteResolved16(guest_range_0, 18u, (r3 + 18), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r0);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 24u, (r3 + 24), r0);
        MemoryInline::WriteResolved16(guest_range_0, 26u, (r3 + 26), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r0);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 32u, (r3 + 32), r0);
        MemoryInline::WriteResolved16(guest_range_0, 34u, (r3 + 34), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r0);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 40u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 40u, (r3 + 40), r0);
        MemoryInline::WriteResolved16(guest_range_0, 42u, (r3 + 42), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 44), r0);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 48u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 48u, (r3 + 48), r0);
        MemoryInline::WriteResolved16(guest_range_0, 50u, (r3 + 50), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 52), r0);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 56u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 56u, (r3 + 56), r0);
        MemoryInline::WriteResolved16(guest_range_0, 58u, (r3 + 58), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r3 + 60), r0);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 64u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 64u, (r3 + 64), r0);
        MemoryInline::WriteResolved16(guest_range_0, 66u, (r3 + 66), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r3 + 68), r0);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 72u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 72u, (r3 + 72), r0);
        MemoryInline::WriteResolved16(guest_range_0, 74u, (r3 + 74), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r3 + 76), r0);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 80u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 80u, (r3 + 80), r0);
        MemoryInline::WriteResolved16(guest_range_0, 82u, (r3 + 82), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r3 + 84), r0);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 88u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 88u, (r3 + 88), r0);
        MemoryInline::WriteResolved16(guest_range_0, 90u, (r3 + 90), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 92u, (r3 + 92), r0);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 96u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 96u, (r3 + 96), r0);
        MemoryInline::WriteResolved16(guest_range_0, 98u, (r3 + 98), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r3 + 100), r0);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 104u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 104u, (r3 + 104), r0);
        MemoryInline::WriteResolved16(guest_range_0, 106u, (r3 + 106), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 108u, (r3 + 108), r0);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 112u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 112u, (r3 + 112), r0);
        MemoryInline::WriteResolved16(guest_range_0, 114u, (r3 + 114), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r3 + 116), r0);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 120u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 120u, (r3 + 120), r0);
        MemoryInline::WriteResolved16(guest_range_0, 122u, (r3 + 122), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 124u, (r3 + 124), r0);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 128u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 128u, (r3 + 128), r0);
        MemoryInline::WriteResolved16(guest_range_0, 130u, (r3 + 130), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 132u, (r3 + 132), r0);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 136u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 136u, (r3 + 136), r0);
        MemoryInline::WriteResolved16(guest_range_0, 138u, (r3 + 138), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 140u, (r3 + 140), r0);
        MemoryInline::WriteResolved32(guest_range_0, 144u, (r3 + 144), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 148u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 148u, (r3 + 148), r0);
        MemoryInline::WriteResolved32(guest_range_0, 152u, (r3 + 152), r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 156u, (r3 + 156), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 160u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 160u, (r3 + 160), r0);
        MemoryInline::WriteResolved32(guest_range_0, 164u, (r3 + 164), r0);
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002002 gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800BC6F0 func_800BC6F0 preserves=true fpr_mask=0x00000000
