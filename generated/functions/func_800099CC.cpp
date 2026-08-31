#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800099CC(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_800099CC;

loc_800099CC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x80270000u;
    r6 = 0x80270000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r4 + 3116);
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -32680), 0, 8u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -32680));
    r6 = (r6 + 3056);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r7 = 0;
    r0 = 1;
    r31 = 0x80010000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = 0x802A0000u;
    r30 = (r30 + 16512);
    guest_range_1 = MemoryInline::ResolveRangeHost(r30, 0, 248u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r30, r4);
    r8 = (r30 + 0);
    r3 = (r30 + 128);
    r4 = 1507328;
    r5 = (r4 + 28672);
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r8 + 52), r5);
    r4 = 524288;
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r8 + 56), r4);
    r4 = (r31 + -25792);
    r5 = (r30 + 116);
    MemoryInline::WriteResolved32(guest_range_1, 60u, (r8 + 60), r7);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r30, r6);
    MemoryInline::WriteResolved8(guest_range_1, 104u, (r8 + 104), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 105u, (r8 + 105), static_cast<uint8_t>(r7));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 128u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 128u, (r30 + 128), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 132u, (r3 + 4), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 136u, (r3 + 8), f0.d);
    // inline leaf 0x80021338 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -27476));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 116u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_1, 120u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 124u, (r5 + 8), r3);
    MemoryInline::FlatWrite32((r13 + -27476), r5);
    // end of inlined leaf 0x80021338
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -32676));
    r3 = (r30 + 152);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -32680));
    r4 = (r31 + -25792);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 152u, (r30 + 152), f1.d);
    r5 = (r30 + 140);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 156u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 156u, (r3 + 4), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 160u, (r3 + 8), f0.d);
    }
    // inline leaf 0x80021338 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -27476));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 140u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_1, 144u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 148u, (r5 + 8), r3);
    MemoryInline::FlatWrite32((r13 + -27476), r5);
    // end of inlined leaf 0x80021338
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -32680));
    r3 = (r30 + 176);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -32676));
    r4 = (r31 + -25792);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 176u, (r30 + 176), f1.d);
    r5 = (r30 + 164);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 180u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 180u, (r3 + 4), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 184u, (r3 + 8), f1.d);
    }
    // inline leaf 0x80021338 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -27476));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 164u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 164u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_1, 168u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 172u, (r5 + 8), r3);
    MemoryInline::FlatWrite32((r13 + -27476), r5);
    // end of inlined leaf 0x80021338
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -32680));
    r3 = (r30 + 200);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -32676));
    r4 = (r31 + -25792);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 200u, (r30 + 200), f1.d);
    r5 = (r30 + 188);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 204u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 204u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 208u, (r3 + 8), f0.d);
    }
    // inline leaf 0x80021338 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -27476));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 188u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 188u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_1, 192u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 196u, (r5 + 8), r3);
    MemoryInline::FlatWrite32((r13 + -27476), r5);
    // end of inlined leaf 0x80021338
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -32680));
    r3 = (r13 + -27696);
    r31 = 0x80010000u;
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    r4 = (r31 + -25728);
    r5 = (r30 + 212);
    MemoryInline::FlatWriteFloat32((r13 + -27696), f0.d);
    r3 = (r13 + -27696);
    // inline leaf 0x80021338 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -27476));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 212u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 212u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_1, 216u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 220u, (r5 + 8), r3);
    MemoryInline::FlatWrite32((r13 + -27476), r5);
    // end of inlined leaf 0x80021338
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -32676));
    r6 = (r13 + -27688);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -32680));
    r4 = (r31 + -25728);
    MemoryInline::FlatWriteFloat32((r13 + -27688), f1.d);
    r5 = (r30 + 224);
    r3 = (r13 + -27688);
    MemoryInline::FlatWriteFloat32((r6 + 4), f0.d);
    // inline leaf 0x80021338 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -27476));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 224u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 224u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_1, 228u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 232u, (r5 + 8), r3);
    MemoryInline::FlatWrite32((r13 + -27476), r5);
    // end of inlined leaf 0x80021338
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -32680));
    r6 = (r13 + -27680);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -32676));
    r4 = (r31 + -25728);
    MemoryInline::FlatWriteFloat32((r13 + -27680), f1.d);
    r5 = (r30 + 236);
    r3 = (r13 + -27680);
    MemoryInline::FlatWriteFloat32((r6 + 4), f0.d);
    // inline leaf 0x80021338 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -27476));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 236u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 236u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_1, 240u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 244u, (r5 + 8), r3);
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
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0002006 gpr_write=0xC00001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800099CC func_800099CC preserves=true fpr_mask=0x00000000
