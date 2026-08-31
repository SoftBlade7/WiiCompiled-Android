#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8088F334_statefree(uint32_t, uint32_t, uint32_t);
extern "C" void func_8088F334_statefree_v0(uint32_t, uint32_t, uint32_t);

extern "C" void func_8082BE14(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_8082BE14;

loc_8082BE14:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x80510000u;
    r4 = (r31 + 13824);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 0x808B0000u;
    r29 = (r29 + -14432);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = 0x809C0000u;
    r28 = (r28 + 17208);
    guest_range_0 = MemoryInline::ResolveRangeHost(r29, 0, 176u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 96u, (r29 + 96));
    r30 = (r28 + 192);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r29);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 100u, (r29 + 100));
    r3 = r30;
    guest_range_2 = MemoryInline::ResolveRangeHost(r28, 0, 196u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 192u, (r28 + 192), f2.d);
    r5 = (r28 + 0);
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 4), 0, 188u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r30 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r30 + 8), f0.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 96u, (r29 + 96));
    r3 = (r30 + 12);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r29);
    r4 = (r31 + 13824);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 100u, (r29 + 100));
    r5 = (r28 + 12);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r30 + 12), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r30 + 16), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r30 + 20), f0.d);
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 12u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 20u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 96u, (r29 + 96));
    r3 = (r30 + 24);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r29);
    r4 = (r31 + 13824);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 100u, (r29 + 100));
    r5 = (r28 + 24);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r30 + 24), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r30 + 28), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r30 + 32), f0.d);
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 32u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 104u, (r29 + 104));
    r3 = (r30 + 36);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 108u, (r29 + 108));
    r4 = (r31 + 13824);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 112u, (r29 + 112));
    r5 = (r28 + 36);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r30 + 36), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r30 + 40), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r30 + 44), f0.d);
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 36u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 44u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 120u, (r29 + 120));
    r3 = (r30 + 48);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 116u, (r29 + 116));
    r4 = (r31 + 13824);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r30 + 48), f1.d);
    r5 = (r28 + 48);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r30 + 52), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r30 + 56), f0.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 48u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_2, 52u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 56u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 116u, (r29 + 116));
    r3 = (r30 + 60);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 120u, (r29 + 120));
    r4 = (r31 + 13824);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 124u, (r29 + 124));
    r5 = (r28 + 60);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 56u, (r30 + 60), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 60u, (r30 + 64), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 64u, (r30 + 68), f0.d);
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 60u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_2, 64u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 68u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 128u, (r29 + 128));
    r3 = (r30 + 72);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 132u, (r29 + 132));
    r4 = (r31 + 13824);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 136u, (r29 + 136));
    r5 = (r28 + 72);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 68u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r30 + 72), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 72u, (r30 + 76), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r30 + 80), f0.d);
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 72u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_2, 76u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 80u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 128u, (r29 + 128));
    r3 = (r30 + 84);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 136u, (r29 + 136));
    r4 = (r31 + 13824);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 140u, (r29 + 140));
    r5 = (r28 + 84);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 80u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 80u, (r30 + 84), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 84u, (r30 + 88), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 88u, (r30 + 92), f0.d);
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 84u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_2, 88u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 92u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 144u, (r29 + 144));
    r3 = (r30 + 96);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 148u, (r29 + 148));
    r4 = (r31 + 13824);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 120u, (r29 + 120));
    r5 = (r28 + 96);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 92u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 92u, (r30 + 96), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 96u, (r30 + 100), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 100u, (r30 + 104), f0.d);
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 96u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_2, 100u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 104u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 104u, (r29 + 104));
    r3 = (r30 + 108);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 108u, (r29 + 108));
    r4 = (r31 + 13824);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 152u, (r29 + 152));
    r5 = (r28 + 108);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 104u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 104u, (r30 + 108), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 108u, (r30 + 112), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 112u, (r30 + 116), f0.d);
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 108u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_2, 112u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 116u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 128u, (r29 + 128));
    r3 = (r30 + 120);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 156u, (r29 + 156));
    r4 = (r31 + 13824);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 160u, (r29 + 160));
    r5 = (r28 + 120);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 116u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 116u, (r30 + 120), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 120u, (r30 + 124), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 124u, (r30 + 128), f0.d);
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 120u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_2, 124u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 128u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 128u, (r29 + 128));
    r3 = (r30 + 132);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 132u, (r29 + 132));
    r4 = (r31 + 13824);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 164u, (r29 + 164));
    r5 = (r28 + 132);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 128u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 128u, (r30 + 132), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 132u, (r30 + 136), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 136u, (r30 + 140), f0.d);
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 132u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_2, 136u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 140u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 116u, (r29 + 116));
    r3 = (r30 + 144);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r29);
    r4 = (r31 + 13824);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 168u, (r29 + 168));
    r5 = (r28 + 144);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 140u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 140u, (r30 + 144), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 144u, (r30 + 148), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 148u, (r30 + 152), f0.d);
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 144u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_2, 148u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 152u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 104u, (r29 + 104));
    r3 = (r30 + 156);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 108u, (r29 + 108));
    r4 = (r31 + 13824);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 124u, (r29 + 124));
    r5 = (r28 + 156);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 152u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 152u, (r30 + 156), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 156u, (r30 + 160), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 160u, (r30 + 164), f0.d);
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 156u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 156u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_2, 160u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 164u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 144u, (r29 + 144));
    r3 = (r30 + 168);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 172u, (r29 + 172));
    r4 = (r31 + 13824);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 160u, (r29 + 160));
    r5 = (r28 + 168);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 164u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 164u, (r30 + 168), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 168u, (r30 + 172), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 172u, (r30 + 176), f0.d);
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 168u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 168u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_2, 172u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 176u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 132u, (r29 + 132));
    r3 = (r30 + 180);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 144u, (r29 + 144));
    r4 = (r31 + 13824);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 176u, (r30 + 180), f1.d);
    r5 = (r28 + 180);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 180u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 180u, (r30 + 184), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 184u, (r30 + 188), f0.d);
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
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
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    r8 = 0x802A0000u;
    r8 = (r8 + 16640);
    r7 = MemoryInline::FlatRead32(r8);
    r3 = (r28 + 396);
    MemoryInline::FlatWriteRam32((r28 + 396), r7);
    r6 = MemoryInline::FlatRead32((r8 + 4));
    r4 = (r31 + 13824);
    r0 = MemoryInline::FlatRead32((r8 + 8));
    r5 = (r28 + 384);
    MemoryInline::FlatWriteRam32((r3 + 4), r6);
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8088F334u) && KnownTranslatedCpuCall<0x8088F334u>::kAvailable && !KnownTranslatedCpuCall<0x8088F334u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8088F334u>()) {
        const auto state_free_result_8088F334_5FFA = func_8088F334_statefree(r3, r4, r5);
        r6 = static_cast<uint32_t>(state_free_result_8088F334_5FFA);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
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
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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

// RECOMP_GUEST_ABI gpr_read=0xF0000002 gpr_write=0xF00001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8082BE14 func_8082BE14 preserves=true fpr_mask=0x00000000
