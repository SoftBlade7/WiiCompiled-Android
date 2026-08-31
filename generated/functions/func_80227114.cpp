#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80227114(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_80227114;

loc_80227114:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 25u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 4u);
        if (resolved_pair.valid) {
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 8));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 12u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 16));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 20));
        }
    }
    r9 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 4));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 5));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 6));
    r6 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 7));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 24));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 24u, (r3 + 28));
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + 16), 0, 22u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r4 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r4 + 20), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r4 + 24), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r4 + 28), f3.d);
    }
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r4 + 32), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r4 + 33), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r4 + 34), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r4 + 35), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r4 + 36), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r4 + 37), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x000003E1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80227114 func_80227114 preserves=true fpr_mask=0x00000000
