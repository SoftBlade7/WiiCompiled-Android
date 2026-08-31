#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80844564(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_80844564;

loc_80844564:
{
    r4 = 0x808B0000u;
    r0 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -10640));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 2476), 0, 2794u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r3 + 2497), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r3 + 2476), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 417u, (r3 + 2893), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 396u, (r3 + 2872), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 813u, (r3 + 3289), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 792u, (r3 + 3268), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 1209u, (r3 + 3685), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 1188u, (r3 + 3664), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 1605u, (r3 + 4081), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 1584u, (r3 + 4060), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 2001u, (r3 + 4477), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 1980u, (r3 + 4456), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 2397u, (r3 + 4873), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 2376u, (r3 + 4852), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 2793u, (r3 + 5269), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 2772u, (r3 + 5248), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80844564 func_80844564 preserves=true fpr_mask=0x00000000
