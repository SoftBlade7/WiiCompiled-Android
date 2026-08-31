#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066410C(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];

    goto loc_8066410C;

loc_8066410C:
{
    r0 = 1;
    r7 = MemoryInline::FlatRead32((r3 + 4));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r8 = ~(r0 | r0);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r9 = (r4 * 48);
    r6 = 0;
    r4 = (r7 & r8);
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r7 = (r0 & r8);
    r4 = (r5 & r8);
    MemoryInline::FlatWrite32((r3 + 8), r4);
    r5 = (r3 + r9);
    r4 = -1;
    r0 = 255;
    MemoryInline::FlatWrite32((r3 + 12), r7);
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 32), 0, 47u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r5 + 32), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r5 + 52), r4);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r5 + 56), r6);
    }
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r5 + 60), r6);
    MemoryInline::WriteResolved8(guest_range_0, 44u, (r5 + 76), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r5 + 36), r4);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r5 + 44), r4);
    MemoryInline::WriteResolved8(guest_range_0, 45u, (r5 + 77), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r5 + 40), r4);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r5 + 48), r4);
    MemoryInline::WriteResolved8(guest_range_0, 46u, (r5 + 78), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r5 + 64), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 33u, (r5 + 65), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 34u, (r5 + 66), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 35u, (r5 + 67), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 36u, (r5 + 68), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 37u, (r5 + 69), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 38u, (r5 + 70), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 39u, (r5 + 71), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r5 + 72), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 41u, (r5 + 73), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 42u, (r5 + 74), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 43u, (r5 + 75), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x000003F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8066410C func_8066410C preserves=true fpr_mask=0x00000000
