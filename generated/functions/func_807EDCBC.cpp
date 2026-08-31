#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807EDCBC(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_807EDCBC;

loc_807EDCBC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x80510000u;
    r4 = (r31 + 13824);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x808B0000u;
    r30 = (r30 + -27040);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 0x809C0000u;
    r29 = (r29 + 16408);
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 64), 0, 436u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 416u, (r30 + 480));
    r3 = (r29 + 12);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 420u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 420u, (r30 + 484));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 424u, (r30 + 488));
        }
    }
    r5 = (r29 + 0);
    guest_range_1 = MemoryInline::ResolveRangeHost(r29, 0, 84u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r29 + 12), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 4), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 8), f0.d);
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r30 + 64));
    r3 = (r29 + 36);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 428u, (r30 + 492));
    r4 = (r31 + 13824);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 424u, (r30 + 488));
    r5 = (r29 + 24);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r29 + 36), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r3 + 4), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r3 + 8), f0.d);
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r30 + 64));
    r3 = (r29 + 60);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 432u, (r30 + 496));
    r4 = (r31 + 13824);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 424u, (r30 + 488));
    r5 = (r29 + 48);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 60u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 60u, (r29 + 60), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 64u, (r3 + 4), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r3 + 8), f0.d);
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 48u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    r4 = 0x809C0000u;
    r3 = 0x809C0000u;
    r4 = (r4 + 16400);
    MemoryInline::WriteResolved32(guest_range_1, 72u, (r29 + 72), r4);
    r3 = (r3 + 7812);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r29 + 76), r4);
        MemoryInline::WriteResolved32(guest_range_1, 80u, (r29 + 80), r3);
    }
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0000002 gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807EDCBC func_807EDCBC preserves=true fpr_mask=0x00000000
