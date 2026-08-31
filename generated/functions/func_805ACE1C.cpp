#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805ACE1C(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_805ACE1C;

loc_805ACE1C:
{
    r0 = 0;
    r4 = 0x80890000u;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 440), 0, 72u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r3 + 440), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 9336));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 464), f0.d);
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r3 + 442), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 468), f0.d);
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r3 + 444), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 472), f0.d);
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r3 + 446), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 476), f0.d);
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 448), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 480), f0.d);
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 450), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 484), f0.d);
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r3 + 452), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r3 + 488), f0.d);
    MemoryInline::WriteResolved16(guest_range_0, 14u, (r3 + 454), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r3 + 492), f0.d);
    MemoryInline::WriteResolved16(guest_range_0, 16u, (r3 + 456), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r3 + 496), f0.d);
    MemoryInline::WriteResolved16(guest_range_0, 18u, (r3 + 458), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r3 + 500), f0.d);
    MemoryInline::WriteResolved16(guest_range_0, 20u, (r3 + 460), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r3 + 504), f0.d);
    MemoryInline::WriteResolved16(guest_range_0, 22u, (r3 + 462), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r3 + 508), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805ACE1C func_805ACE1C preserves=true fpr_mask=0x00000000
