#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80243BE8(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_80243BE8;

loc_80243BE8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -24232), 0, 12u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -24232));
    r5 = (r13 + -23688);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = (r13 + -23688);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x80010000u;
    r4 = (r31 + -25728);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = 0x80380000u;
    r30 = (r30 + 19312);
    MemoryInline::FlatWriteFloat32((r5 + 4), f0.d);
    r5 = (r30 + 0);
    MemoryInline::FlatWriteFloat32((r13 + -23688), f0.d);
    // inline leaf 0x80021338 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -27476));
    guest_range_1 = MemoryInline::ResolveRangeHost(r5, 0, 132u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r5 + 8), r3);
    MemoryInline::FlatWrite32((r13 + -27476), r5);
    // end of inlined leaf 0x80021338
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -24224));
    r6 = (r13 + -23680);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -24232));
    r4 = (r31 + -25728);
    MemoryInline::FlatWriteFloat32((r13 + -23680), f1.d);
    r5 = (r30 + 12);
    r3 = (r13 + -23680);
    MemoryInline::FlatWriteFloat32((r6 + 4), f0.d);
    // inline leaf 0x80021338 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -27476));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r5 + 8), r3);
    MemoryInline::FlatWrite32((r13 + -27476), r5);
    // end of inlined leaf 0x80021338
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -24232));
    r6 = (r13 + -23672);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -24224));
    r4 = (r31 + -25728);
    MemoryInline::FlatWriteFloat32((r13 + -23672), f1.d);
    r5 = (r30 + 24);
    r3 = (r13 + -23672);
    MemoryInline::FlatWriteFloat32((r6 + 4), f0.d);
    // inline leaf 0x80021338 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -27476));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r5 + 8), r3);
    MemoryInline::FlatWrite32((r13 + -27476), r5);
    // end of inlined leaf 0x80021338
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -24232));
    r3 = (r30 + 48);
    r31 = 0x80010000u;
    MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r30 + 48), f0.d);
    r5 = (r30 + 36);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r3 + 4), f0.d);
    r4 = (r31 + -25792);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 56u, (r3 + 8), f0.d);
    // inline leaf 0x80021338 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -27476));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 36u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r5 + 8), r3);
    MemoryInline::FlatWrite32((r13 + -27476), r5);
    // end of inlined leaf 0x80021338
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -24224));
    r3 = (r30 + 72);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -24232));
    r4 = (r31 + -25792);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 72u, (r30 + 72), f1.d);
    r5 = (r30 + 60);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r3 + 4), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 80u, (r3 + 8), f0.d);
    }
    // inline leaf 0x80021338 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -27476));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 60u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r5 + 8), r3);
    MemoryInline::FlatWrite32((r13 + -27476), r5);
    // end of inlined leaf 0x80021338
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -24232));
    r3 = (r30 + 96);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -24224));
    r4 = (r31 + -25792);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 96u, (r30 + 96), f1.d);
    r5 = (r30 + 84);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 100u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 100u, (r3 + 4), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 104u, (r3 + 8), f1.d);
    }
    // inline leaf 0x80021338 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -27476));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 84u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 92u, (r5 + 8), r3);
    MemoryInline::FlatWrite32((r13 + -27476), r5);
    // end of inlined leaf 0x80021338
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -24232));
    r3 = (r30 + 120);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -24224));
    r4 = (r31 + -25792);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 120u, (r30 + 120), f1.d);
    r5 = (r30 + 108);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 124u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 124u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 128u, (r3 + 8), f0.d);
    }
    // inline leaf 0x80021338 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -27476));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 108u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_1, 112u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 116u, (r5 + 8), r3);
    MemoryInline::FlatWrite32((r13 + -27476), r5);
    // end of inlined leaf 0x80021338
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0002006 gpr_write=0xC000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80243BE8 func_80243BE8 preserves=true fpr_mask=0x00000000
