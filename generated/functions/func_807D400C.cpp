#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8088F334_statefree(uint32_t, uint32_t, uint32_t);
extern "C" void func_8088F334_statefree_v0(uint32_t, uint32_t, uint32_t);

extern "C" void func_807D400C(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_807D400C;

loc_807D400C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 11;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x80510000u;
    r4 = (r30 + 13824);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 0x808A0000u;
    r29 = (r29 + 26416);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = 0x809C0000u;
    r28 = (r28 + 15384);
    guest_range_0 = MemoryInline::ResolveRangeHost(r29, 0, 2892u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2680u, (r29 + 2680));
    r3 = (r28 + 16);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2860u, (r29 + 2860));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2828u, (r29 + 2828));
    r5 = (r28 + 4);
    guest_range_1 = MemoryInline::ResolveRangeHost(r28, 0, 372u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r28, r0);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r28 + 16), f2.d);
    guest_range_4 = MemoryInline::ResolveRangeHost((r3 + -12), 0, 388u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 16u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 20u, (r3 + 8), f0.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_4, 0u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_4, 4u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_4, 8u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2860u, (r29 + 2860));
    r3 = (r28 + 40);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2864u, (r29 + 2864));
    r4 = (r30 + 13824);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2868u, (r29 + 2868));
    r5 = (r28 + 28);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r28 + 40), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 40u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 44u, (r3 + 8), f0.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_4, 24u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_4, 28u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_4, 32u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2732u, (r29 + 2732));
    r3 = (r28 + 64);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 64u, (r28 + 64), f0.d);
    r4 = (r30 + 13824);
    r5 = (r28 + 52);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 64u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 64u, (r3 + 4), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 68u, (r3 + 8), f0.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_4, 48u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_4, 52u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_4, 56u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r29 + 4));
    r3 = (r28 + 88);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 88u, (r28 + 88), f0.d);
    r4 = (r30 + 13824);
    r5 = (r28 + 76);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 88u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 88u, (r3 + 4), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 92u, (r3 + 8), f0.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_4, 72u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_4, 76u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_4, 80u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r29 + 4));
    r3 = (r28 + 112);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 112u, (r28 + 112), f0.d);
    r4 = (r30 + 13824);
    r5 = (r28 + 100);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 112u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 112u, (r3 + 4), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 116u, (r3 + 8), f0.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_4, 96u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_4, 100u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_4, 104u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    r31 = (r28 + 176);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 2872u);
        if (resolved_pair.valid) {
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2876u, (r29 + 2876));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2872u, (r29 + 2872));
        }
    }
    r3 = r31;
    MemoryInline::WriteResolvedFloat32(guest_range_1, 176u, (r28 + 176), f1.d);
    r4 = (r30 + 13824);
    r5 = (r28 + 124);
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 4), 0, 44u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r31 + 4), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r31 + 8), f0.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_4, 120u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_4, 124u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_4, 128u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2872u, (r29 + 2872));
    r3 = (r31 + 12);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r29);
    r4 = (r30 + 13824);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2876u, (r29 + 2876));
    r5 = (r28 + 136);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r31 + 12), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r31 + 16), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r31 + 20), f0.d);
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_4, 132u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_4, 136u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_4, 140u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2872u, (r29 + 2872));
    r3 = (r31 + 24);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r29);
    r4 = (r30 + 13824);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2876u, (r29 + 2876));
    r5 = (r28 + 148);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r31 + 24), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r31 + 28), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r31 + 32), f0.d);
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_4, 144u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_4, 148u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_4, 152u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2880u, (r29 + 2880));
    r3 = (r31 + 36);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r29);
    r4 = (r30 + 13824);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2884u, (r29 + 2884));
    r5 = (r28 + 160);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r31 + 36), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r31 + 40), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r31 + 44), f0.d);
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 156u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_4, 156u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_4, 160u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_4, 164u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    r31 = (r28 + 272);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r29 + 4));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2780u, (r29 + 2780));
    r3 = r31;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2660u, (r29 + 2660));
    r4 = (r30 + 13824);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 272u, (r28 + 272), f2.d);
    r5 = (r28 + 224);
    guest_range_3 = MemoryInline::ResolveRangeHost((r31 + 4), 0, 44u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, (r31 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r31 + 8), f0.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 220u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_4, 220u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_4, 224u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_4, 228u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2824u, (r29 + 2824));
    r3 = (r31 + 12);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2672u, (r29 + 2672));
    r4 = (r30 + 13824);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r31 + 12), f1.d);
    r5 = (r28 + 236);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r31 + 16), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r31 + 20), f0.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 232u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_4, 232u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_4, 236u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_4, 240u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2888u, (r29 + 2888));
    r3 = (r31 + 24);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r31 + 24), f0.d);
    r4 = (r30 + 13824);
    r5 = (r28 + 248);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r31 + 28), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r31 + 32), f0.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 244u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_4, 244u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_4, 248u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_4, 252u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2668u, (r29 + 2668));
    r3 = (r31 + 36);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2888u, (r29 + 2888));
    r4 = (r30 + 13824);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r31 + 36), f1.d);
    r5 = (r28 + 260);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 36u, (r31 + 40), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 40u, (r31 + 44), f0.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 256u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_4, 256u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_4, 260u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_4, 264u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    r31 = (r28 + 368);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2672u, (r29 + 2672));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2660u, (r29 + 2660));
    r3 = r31;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2648u, (r29 + 2648));
    r4 = (r30 + 13824);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 368u, (r28 + 368), f2.d);
    r5 = (r28 + 320);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 368u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 368u, (r31 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 372u, (r31 + 8), f0.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 316u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_4, 316u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_4, 320u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_4, 324u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2648u, (r29 + 2648));
    r3 = (r31 + 12);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 2732u, (r29 + 2732));
    r4 = (r30 + 13824);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 376u, (r31 + 12), f1.d);
    r5 = (r28 + 332);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 380u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 380u, (r31 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 384u, (r31 + 20), f1.d);
    }
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8088F334u) && KnownTranslatedCpuCall<0x8088F334u>::kAvailable && !KnownTranslatedCpuCall<0x8088F334u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8088F334u>()) {
        func_8088F334_statefree_v0(r3, r4, r5);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x8088F334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    f2.d = MemoryInline::FlatReadFloat32((r29 + 2660));
    r3 = (r31 + 24);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 2732));
    r4 = (r30 + 13824);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 2824));
    r5 = (r28 + 344);
    MemoryInline::FlatWriteRamFloat32((r31 + 24), f2.d);
    MemoryInline::FlatWriteRamFloat32((r31 + 28), f1.d);
    MemoryInline::FlatWriteRamFloat32((r31 + 32), f0.d);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8088F334u) && KnownTranslatedCpuCall<0x8088F334u>::kAvailable && !KnownTranslatedCpuCall<0x8088F334u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8088F334u>()) {
        func_8088F334_statefree_v0(r3, r4, r5);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x8088F334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    f2.d = MemoryInline::FlatReadFloat32((r29 + 2892));
    r3 = (r31 + 36);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 2732));
    r4 = (r30 + 13824);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 2660));
    r5 = (r28 + 356);
    MemoryInline::FlatWriteRamFloat32((r31 + 36), f2.d);
    MemoryInline::FlatWriteRamFloat32((r31 + 40), f1.d);
    MemoryInline::FlatWriteRamFloat32((r31 + 44), f0.d);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8088F334u) && KnownTranslatedCpuCall<0x8088F334u>::kAvailable && !KnownTranslatedCpuCall<0x8088F334u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8088F334u>()) {
        const auto state_free_result_8088F334_5F69 = func_8088F334_statefree(r3, r4, r5);
        r6 = static_cast<uint32_t>(state_free_result_8088F334_5F69);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x8088F334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF0000002 gpr_write=0xF000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807D400C func_807D400C preserves=true fpr_mask=0x00000000
