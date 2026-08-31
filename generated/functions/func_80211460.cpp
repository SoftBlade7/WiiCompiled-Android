#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80211460(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_80211460;

loc_80211460:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    // inline leaf 0x80213260 (15 guest instruction(s))
    r4 = 9240576;
    r7 = 0;
    r0 = (r4 + -24576);
    r6 = 4;
    r5 = 3;
    r4 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r7);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r6);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r7);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r7);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r4);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r0);
    }
    // end of inlined leaf 0x80213260
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25944));
    r3 = 131072;
    r0 = (r3 + 22528);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -25952));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -25948));
    r3 = 32;
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 32), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r31 + 32), r3);
    r3 = r31;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 52u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r31 + 84), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 56u, (r31 + 88), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r31 + 36), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r31 + 52), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r31 + 68), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r31 + 40), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r31 + 56), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r31 + 72), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r31 + 44), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r31 + 60), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r31 + 76), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r31 + 48), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r31 + 64), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r31 + 80), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r31 + 92), r0);
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r31 + 96), r0);
    }
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r31 + 100), r0);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000000E gpr_write=0x800000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80211460 func_80211460 preserves=true fpr_mask=0x00000000
