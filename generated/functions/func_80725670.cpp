#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8088F334_statefree(uint32_t, uint32_t, uint32_t);
extern "C" void func_8088F334_statefree_v0(uint32_t, uint32_t, uint32_t);

extern "C" void func_80725670(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_80725670;

loc_80725670:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x80510000u;
    r4 = (r31 + 13824);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x808A0000u;
    r30 = (r30 + 8440);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 0x809C0000u;
    r29 = (r29 + 10504);
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 140u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r30);
    r3 = (r29 + 12);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r30 + 56));
    guest_range_1 = MemoryInline::ResolveRangeHost((r29 + 12), 0, 412u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r29 + 12), f1.d);
    r5 = (r29 + 0);
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + -12), 0, 432u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r3 + 4), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r3 + 8), f1.d);
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
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r30);
    r3 = (r29 + 36);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 60u, (r30 + 60));
    r4 = (r31 + 13824);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r29 + 36), f1.d);
    r5 = (r29 + 24);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r3 + 4), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 44u, (r3 + 8), f1.d);
    }
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
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r30);
    r3 = (r29 + 60);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r30 + 64));
    r4 = (r31 + 13824);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r29 + 60), f1.d);
    r5 = (r29 + 48);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 64u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 64u, (r3 + 4), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 68u, (r3 + 8), f1.d);
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
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r30);
    r3 = (r29 + 84);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r30 + 68));
    r4 = (r31 + 13824);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 72u, (r30 + 72));
    r5 = (r29 + 72);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 72u, (r29 + 84), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 88u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 88u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 92u, (r3 + 8), f0.d);
    }
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
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r30);
    r3 = (r29 + 108);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 76u, (r30 + 76));
    r4 = (r31 + 13824);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r30 + 80));
    r5 = (r29 + 96);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 96u, (r29 + 108), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 112u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 112u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 116u, (r3 + 8), f0.d);
    }
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
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 84u, (r30 + 84));
    r3 = (r29 + 132);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 88u, (r30 + 88));
    r4 = (r31 + 13824);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r30 + 80));
    r5 = (r29 + 120);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 120u, (r29 + 132), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 136u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 136u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 140u, (r3 + 8), f0.d);
    }
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
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 92u, (r30 + 92));
    r3 = (r29 + 156);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 88u, (r30 + 88));
    r4 = (r31 + 13824);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r30 + 80));
    r5 = (r29 + 144);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 144u, (r29 + 156), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 160u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 160u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 164u, (r3 + 8), f0.d);
    }
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
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r30);
    r3 = (r29 + 180);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r30 + 68));
    r4 = (r31 + 13824);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 96u, (r30 + 96));
    r5 = (r29 + 168);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 168u, (r29 + 180), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 184u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 184u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 188u, (r3 + 8), f0.d);
    }
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
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 100u, (r30 + 100));
    r3 = (r29 + 204);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r30 + 68));
    r4 = (r31 + 13824);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r30);
    r5 = (r29 + 192);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 192u, (r29 + 204), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 208u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 208u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 212u, (r3 + 8), f0.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 192u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 192u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_2, 196u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 200u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 100u, (r30 + 100));
    r3 = (r29 + 228);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 104u, (r30 + 104));
    r4 = (r31 + 13824);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 108u, (r30 + 108));
    r5 = (r29 + 216);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 216u, (r29 + 228), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 232u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 232u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 236u, (r3 + 8), f0.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 216u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 216u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_2, 220u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 224u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 112u, (r30 + 112));
    r3 = (r29 + 252);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 84u, (r30 + 84));
    r4 = (r31 + 13824);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 116u, (r30 + 116));
    r5 = (r29 + 240);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 240u, (r29 + 252), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 256u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 256u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 260u, (r3 + 8), f0.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 240u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 240u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_2, 244u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 248u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 120u, (r30 + 120));
    r3 = (r29 + 276);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r30 + 68));
    r4 = (r31 + 13824);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r30);
    r5 = (r29 + 264);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 264u, (r29 + 276), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 280u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 280u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 284u, (r3 + 8), f0.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 264u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 264u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_2, 268u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 272u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r30);
    r3 = (r29 + 300);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 124u, (r30 + 124));
    r4 = (r31 + 13824);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 288u, (r29 + 300), f1.d);
    r5 = (r29 + 288);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 304u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 304u, (r3 + 4), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 308u, (r3 + 8), f1.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 288u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 288u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_2, 292u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 296u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r30);
    r3 = (r29 + 324);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 128u, (r30 + 128));
    r4 = (r31 + 13824);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 312u, (r29 + 324), f1.d);
    r5 = (r29 + 312);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 328u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 328u, (r3 + 4), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 332u, (r3 + 8), f1.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 312u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 312u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_2, 316u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 320u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r30);
    r3 = (r29 + 348);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r30 + 68));
    r4 = (r31 + 13824);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 336u, (r29 + 348), f1.d);
    r5 = (r29 + 336);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 352u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 352u, (r3 + 4), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 356u, (r3 + 8), f1.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 336u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 336u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_2, 340u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 344u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r30);
    r3 = (r29 + 372);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 132u, (r30 + 132));
    r4 = (r31 + 13824);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 360u, (r29 + 372), f1.d);
    r5 = (r29 + 360);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 376u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 376u, (r3 + 4), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 380u, (r3 + 8), f1.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 360u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 360u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_2, 364u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 368u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r30);
    r3 = (r29 + 396);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 76u, (r30 + 76));
    r4 = (r31 + 13824);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 136u, (r30 + 136));
    r5 = (r29 + 384);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 384u, (r29 + 396), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 400u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 400u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 404u, (r3 + 8), f0.d);
    }
    // inline leaf 0x8088F334 (7 guest instruction(s))
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 384u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 384u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_2, 388u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 392u, (r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    // end of inlined leaf 0x8088F334
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r30);
    r3 = (r29 + 420);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r30 + 68));
    r4 = (r31 + 13824);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 136u, (r30 + 136));
    r5 = (r29 + 408);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 408u, (r29 + 420), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 424u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 424u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 428u, (r3 + 8), f0.d);
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
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    f2.d = MemoryInline::FlatReadFloat32(r30);
    r3 = (r29 + 444);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 68));
    r4 = (r31 + 13824);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 140));
    r5 = (r29 + 432);
    MemoryInline::FlatWriteRamFloat32((r29 + 444), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
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
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    f2.d = MemoryInline::FlatReadFloat32(r30);
    r3 = (r29 + 468);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 144));
    r4 = (r31 + 13824);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 140));
    r5 = (r29 + 456);
    MemoryInline::FlatWriteRamFloat32((r29 + 468), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
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
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    f2.d = MemoryInline::FlatReadFloat32(r30);
    r3 = (r29 + 492);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 68));
    r4 = (r31 + 13824);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 148));
    r5 = (r29 + 480);
    MemoryInline::FlatWriteRamFloat32((r29 + 492), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8088F334u) && KnownTranslatedCpuCall<0x8088F334u>::kAvailable && !KnownTranslatedCpuCall<0x8088F334u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8088F334u>()) {
        const auto state_free_result_8088F334_7245 = func_8088F334_statefree(r3, r4, r5);
        r6 = static_cast<uint32_t>(state_free_result_8088F334_7245);
    } else {
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
        InvokeDirectCpu<0x8088F334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
// RECOMP_REGISTRATION base 0x80725670 func_80725670 preserves=true fpr_mask=0x00000000
