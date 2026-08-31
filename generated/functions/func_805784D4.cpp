#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805784D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805784D4;

loc_805784D4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 6656);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r5;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r4;
    // inline leaf 0x80590874 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590874
    f1.d = MemoryInline::FlatReadFloat32((r3 + 24));
    r8 = 0x802A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 16));
    r6 = 0x802A0000u;
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 60u, true, false);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    r4 = 0x802A0000u;
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 36), f7.d);
    r9 = 0x808B0000u;
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    MemoryInline::FlatWriteFloat32((r30 + 20), f0.d);
    r7 = (r8 + 16688);
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    r5 = (r6 + 16712);
    r3 = (r4 + 16640);
    r0 = 0;
    MemoryInline::FlatWriteFloat32((r30 + 24), f0.d);
}

loc_80578550:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 32), 0, 168u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r30 + 40), f7.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r30 + 32), f7.d);
    f0.d = MemoryInline::FlatReadFloat32((r9 + 23028));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r30 + 44), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r30 + 48), f7.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r30 + 52), f6.d);
    f2.d = MemoryInline::FlatReadFloat32((r8 + 16688));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r30 + 68), f2.d);
    f1.d = MemoryInline::FlatReadFloat32((r7 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r30 + 72), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r7 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r30 + 76), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r30 + 56), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r30 + 60), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r30 + 64), f0.d);
    f5.d = MemoryInline::FlatReadFloat32((r6 + 16712));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 96u, (r30 + 128), f5.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 100u, (r30 + 132), f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d));
    f3.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 104u, (r30 + 136), f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 84u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 84u, (r30 + 116), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 88u, (r30 + 120), f4.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 92u, (r30 + 124), f3.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 72u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 72u, (r30 + 104), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r30 + 108), f4.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 80u, (r30 + 112), f3.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 60u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 60u, (r30 + 92), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 64u, (r30 + 96), f4.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r30 + 100), f3.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r30 + 80), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r30 + 84), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 56u, (r30 + 88), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16640));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 108u, (r30 + 140), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 112u, (r30 + 144), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 116u, (r30 + 148), f0.d);
    MemoryInline::WriteResolved8(guest_range_1, 120u, (r30 + 152), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 124u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 124u, (r30 + 156), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 128u, (r30 + 160), f7.d);
    }
    f0.d = MemoryInline::FlatReadFloat32((r6 + 16712));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 132u, (r30 + 164), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 136u, (r30 + 168), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 140u, (r30 + 172), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 144u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 148u, (r30 + 180), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 144u, (r30 + 176), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 152u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f6.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 152u, (r30 + 184), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 156u, (r30 + 188), f6.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 160u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f6.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 160u, (r30 + 192), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 164u, (r30 + 196), f6.d);
    }
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_8057863C;
    }
}

loc_80578638:
{
    MemoryInline::FlatWrite16((r30 + 200), static_cast<uint16_t>(r0));
}

loc_8057863C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 204), r0);
    r6 = 0x802A0000u;
    r4 = 0x802A0000u;
    MemoryInline::FlatWrite32((r30 + 208), r0);
    r5 = (r6 + 16688);
    r3 = (r4 + 16712);
}

loc_8057865C:
{
    f0.d = MemoryInline::FlatReadFloat32((r6 + 16688));
    guest_range_2 = MemoryInline::ResolveRangeHost((r30 + 212), 0, 144u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r30 + 212), f0.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r30 + 216), f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r30 + 220), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r31 + 12));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 16712));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r30 + 224), f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r30 + 228), f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r30 + 232), f3.d);
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r30 + 236), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r30 + 240), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r30 + 244), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r30 + 248), f1.d);
    MemoryInline::WriteResolved16(guest_range_2, 40u, (r30 + 252), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 42u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 44u, (r30 + 256), r0);
        MemoryInline::WriteResolved16(guest_range_2, 42u, (r30 + 254), r0);
    }
    MemoryInline::WriteResolved16(guest_range_2, 46u, (r30 + 258), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 48u, (r30 + 260), f1.d);
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 56u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 56u, (r30 + 268), r0);
        MemoryInline::WriteResolved16(guest_range_2, 58u, (r30 + 270), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 60u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 60u, (r30 + 272), r0);
        MemoryInline::WriteResolved16(guest_range_2, 62u, (r30 + 274), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 64u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 64u, (r30 + 276), r0);
        MemoryInline::WriteResolved16(guest_range_2, 66u, (r30 + 278), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 72u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 72u, (r30 + 284), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 76u, (r30 + 288), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 84u, (r30 + 296), f0.d);
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 88u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 88u, (r30 + 300), r0);
        MemoryInline::WriteResolved16(guest_range_2, 90u, (r30 + 302), r0);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 108u, (r30 + 320), f1.d);
    MemoryInline::WriteResolved16(guest_range_2, 116u, (r30 + 328), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 120u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 120u, (r30 + 332), r0);
        MemoryInline::WriteResolved16(guest_range_2, 122u, (r30 + 334), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 124u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 124u, (r30 + 336), r0);
        MemoryInline::WriteResolved16(guest_range_2, 126u, (r30 + 338), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 132u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 132u, (r30 + 344), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 136u, (r30 + 348), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 140u, (r30 + 352), f2.d);
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_8057877C;
    }
}

loc_80578710:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r31 + 56));
    r4 = 0x802A0000u;
    guest_range_3 = MemoryInline::ResolveRangeHost((r30 + 356), 0, 68u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, (r30 + 356), f2.d);
    r3 = (r4 + 16640);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r30 + 360), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r30 + 364), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r30 + 368), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r30 + 372), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r30 + 376), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r30 + 380), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r30 + 384), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r30 + 388), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 36u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_3, 36u, (r30 + 392), r0);
        MemoryInline::WriteResolved16(guest_range_3, 38u, (r30 + 394), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 40u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_3, 40u, (r30 + 396), r0);
        MemoryInline::WriteResolved16(guest_range_3, 42u, (r30 + 398), r0);
    }
    MemoryInline::WriteResolved8(guest_range_3, 44u, (r30 + 400), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 46u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_3, 46u, (r30 + 402), r0);
        MemoryInline::WriteResolved16(guest_range_3, 48u, (r30 + 404), r0);
    }
    MemoryInline::WriteResolved8(guest_range_3, 50u, (r30 + 406), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 52u, (r30 + 408), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16640));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 56u, (r30 + 412), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 60u, (r30 + 416), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 64u, (r30 + 420), f0.d);
}

loc_8057877C:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    r29 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 24));
    r3 = (r30 + 464);
    f3.d = f2.d;
    guest_range_4 = MemoryInline::ResolveRangeHost((r30 + 344), 0, 254u, false, true);
    MemoryInline::WriteResolved16(guest_range_4, 80u, (r30 + 424), static_cast<uint16_t>(r29));
    f4.d = f2.d;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 82u, ((static_cast<uint32_t>(static_cast<uint16_t>(r29)) << 16) | static_cast<uint16_t>(r29)))) {
        MemoryInline::WriteResolved16(guest_range_4, 82u, (r30 + 426), r29);
        MemoryInline::WriteResolved16(guest_range_4, 84u, (r30 + 428), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 88u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 88u, (r30 + 432), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 92u, (r30 + 436), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 96u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 96u, (r30 + 440), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 100u, (r30 + 444), f0.d);
    }
    MemoryInline::WriteResolved32(guest_range_4, 104u, (r30 + 448), r29);
    MemoryInline::WriteResolved16(guest_range_4, 108u, (r30 + 452), static_cast<uint16_t>(r29));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 112u, (r30 + 456), f2.d);
    MemoryInline::WriteResolved16(guest_range_4, 116u, (r30 + 460), static_cast<uint16_t>(r29));
    // inline leaf 0x80239DFC (5 guest instruction(s))
    MemoryInline::WriteResolvedFloat32(guest_range_4, 132u, (r3 + 12), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 120u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 120u, r3, f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 124u, (r3 + 4), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_4, 128u, (r3 + 8), f4.d);
    // end of inlined leaf 0x80239DFC
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    r7 = 0x802A0000u;
    MemoryInline::WriteResolvedFloat32(guest_range_4, 136u, (r30 + 480), f1.d);
    r5 = 0x802A0000u;
    r6 = (r7 + 16640);
    r3 = MemoryInline::FlatRead32((r30 + 600));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 140u, (r30 + 484), f1.d);
    r4 = (r5 + 16688);
    guest_range_5 = MemoryInline::ResolveRangeHost((r7 + 16640), 0, 12u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 0u, (r7 + 16640));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 144u, (r30 + 488), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 4u, (r6 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 148u, (r30 + 492), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 8u, (r6 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 152u, (r30 + 496), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 0u, (r7 + 16640));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 156u, (r30 + 500), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 4u, (r6 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 160u, (r30 + 504), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 8u, (r6 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 164u, (r30 + 508), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 16688));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 168u, (r30 + 512), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 172u, (r30 + 516), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 176u, (r30 + 520), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 0u, (r7 + 16640));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 180u, (r30 + 524), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 4u, (r6 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 184u, (r30 + 528), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 8u, (r6 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 188u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 188u, (r30 + 532), f0.d);
        MemoryInline::WriteResolved32(guest_range_4, 192u, (r30 + 536), r29);
    }
    MemoryInline::WriteResolved16(guest_range_4, 196u, (r30 + 540), static_cast<uint16_t>(r29));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r30 + 344), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 200u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 204u, (r30 + 548), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 200u, (r30 + 544), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 208u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 208u, (r30 + 552), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 212u, (r30 + 556), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_4, 216u, (r30 + 560), f1.d);
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 220u, ((static_cast<uint32_t>(static_cast<uint16_t>(r29)) << 16) | static_cast<uint16_t>(r29)))) {
        MemoryInline::WriteResolved16(guest_range_4, 220u, (r30 + 564), r29);
        MemoryInline::WriteResolved16(guest_range_4, 222u, (r30 + 566), r29);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 224u, ((static_cast<uint32_t>(static_cast<uint16_t>(r29)) << 16) | static_cast<uint16_t>(r29)))) {
        MemoryInline::WriteResolved16(guest_range_4, 224u, (r30 + 568), r29);
        MemoryInline::WriteResolved16(guest_range_4, 226u, (r30 + 570), r29);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_4, 228u, ((static_cast<uint32_t>(static_cast<uint16_t>(r29)) << 16) | static_cast<uint16_t>(r29)))) {
        MemoryInline::WriteResolved16(guest_range_4, 228u, (r30 + 572), r29);
        MemoryInline::WriteResolved16(guest_range_4, 230u, (r30 + 574), r29);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_4, 232u, (r30 + 576), f1.d);
    MemoryInline::WriteResolved16(guest_range_4, 236u, (r30 + 580), static_cast<uint16_t>(r29));
    MemoryInline::WriteResolved32(guest_range_4, 240u, (r30 + 584), r29);
    MemoryInline::WriteResolved16(guest_range_4, 244u, (r30 + 588), static_cast<uint16_t>(r29));
    MemoryInline::WriteResolved32(guest_range_4, 248u, (r30 + 592), r29);
    MemoryInline::WriteResolved16(guest_range_4, 252u, (r30 + 596), static_cast<uint16_t>(r29));
    ctx->lr = 0x8057889Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x80575AE8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r3 = MemoryInline::FlatRead32((r30 + 604));
    // inline leaf 0x805741B0 (6 guest instruction(s))
    r0 = 0;
    r4 = -1;
    MemoryInline::FlatWrite32((r3 + 112), r4);
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r3 + 18), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x805741B0
    f0.d = MemoryInline::FlatReadFloat32(r31);
    r3 = r30;
    MemoryInline::FlatWriteFloat32((r30 + 648), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 652), f0.d);
    MemoryInline::FlatWrite16((r30 + 656), static_cast<uint16_t>(r29));
    // inline leaf 0x80590ED8 (8 guest instruction(s))
}

loc_inl3_0x80590ED8:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl3_0x80590EE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x80590EE8:
{
    r0 = MemoryInline::FlatRead16((r3 + 820));
    r0 = (r0 & -65);
    MemoryInline::FlatWrite16((r3 + 820), static_cast<uint16_t>(r0));
    goto loc_inl3_cont_80590ED8;
}

loc_inl3_return:
{
}

loc_inl3_cont_80590ED8:
{
    // end of inlined leaf 0x80590ED8
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
    ctx->gpr[9] = r9;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00003FB gpr_write=0xF00003FB gpr_return=0x00000018 fpr_read=0x000000C0 fpr_write=0x000000FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805784D4 func_805784D4 preserves=true fpr_mask=0x00000000
