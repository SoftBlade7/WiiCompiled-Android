#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808368D0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_808368D0;

loc_808368D0:
{
    r6 = MemoryInline::FlatRead32(r4);
    r7 = 0x808E0000u;
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r7 = (r7 + -29352);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r4 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 76u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r7);
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r3 + 28), static_cast<uint8_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 32), f1.d);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r5);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 44), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r3 + 48), f1.d);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 52), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 56), r5);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r3 + 60), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r3 + 64), r6);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r3 + 68), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 72u, (r3 + 72), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x000000F1 gpr_return=0x00000010 fpr_read=0x00000002 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808368D0 func_808368D0 preserves=true fpr_mask=0x00000000
