#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80524A58(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_80524A58;

loc_80524A58:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 148), 0, 17u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 148));
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + 4), 0, 17u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r4 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r3 + 150));
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r4 + 6), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 152));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r4 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 156));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r4 + 12), f0.d);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r3 + 160));
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r4 + 16), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r3 + 161));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r4 + 17), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r3 + 162));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r4 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 15u, (r3 + 163));
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r4 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 16u, (r3 + 164));
    r0 = (r0 | 128);
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r4 + 20), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80524A58 func_80524A58 preserves=true fpr_mask=0x00000000
