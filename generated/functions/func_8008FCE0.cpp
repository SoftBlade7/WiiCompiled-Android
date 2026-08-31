#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008FCE0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_8008FCE0;

loc_8008FCE0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28696));
    r7 = 1;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r6 = 60;
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28692));
    r0 = 255;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28656));
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 244u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 240u, (r3 + 240), r31);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 220u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 220u, (r3 + 220), r4);
        MemoryInline::WriteResolved32(guest_range_0, 224u, (r3 + 224), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 228u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 228u, (r3 + 228), r31);
        MemoryInline::WriteResolved32(guest_range_0, 232u, (r3 + 232), r31);
    }
    MemoryInline::WriteResolved8(guest_range_0, 53u, (r3 + 53), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 56u, (r3 + 56), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 57u, (r3 + 57), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 58u, (r3 + 58), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_0, 204u, (r3 + 204), r31);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 196u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 196u, (r3 + 196), r6);
        MemoryInline::WriteResolved32(guest_range_0, 200u, (r3 + 200), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 172u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 172u, (r3 + 172), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 176u, (r3 + 176), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 180u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 180u, (r3 + 180), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 184u, (r3 + 184), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r3 + 60), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 156u, (r3 + 156), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r3 + 64), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r3 + 68), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (r3 + 72), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r3 + 76), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r3 + 80), r31);
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r3 + 84), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r3 + 88), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r3 + 92), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 96u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 96u, (r3 + 96), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 100u, (r3 + 100), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 104u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 104u, (r3 + 104), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 108u, (r3 + 108), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 124u, (r3 + 124), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 140u, (r3 + 140), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 112u, (r3 + 112), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 128u, (r3 + 128), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 144u, (r3 + 144), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 116u, (r3 + 116), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 132u, (r3 + 132), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 148u, (r3 + 148), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 120u, (r3 + 120), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 136u, (r3 + 136), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 152u, (r3 + 152), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 188u, (r3 + 188), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 189u, (r3 + 189), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 190u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_0, 190u, (r3 + 190), r31);
        MemoryInline::WriteResolved16(guest_range_0, 192u, (r3 + 192), r31);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 160u, (r3 + 160), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 164u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 168u, (r3 + 168), r31);
        MemoryInline::WriteResolved32(guest_range_0, 164u, (r3 + 164), r31);
    }
    // inline leaf 0x80091710 (16 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28648));
    r4 = 0;
    r5 = 0x80250000u;
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28652));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    r5 = (r5 + -28384);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 508));
    r0 = 127;
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f1.d);
    MemoryInline::WriteResolved16(guest_range_0, 22u, (r3 + 22), static_cast<uint16_t>(r4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 8), f2.d);
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r3 + 20), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 4), f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r4);
    }
    // end of inlined leaf 0x80091710
    r3 = (r30 + 28);
    // inline leaf 0x80095B40 (9 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28384));
    r4 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28380));
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 192u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r3, f1.d);
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r3 + 12), static_cast<uint8_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r3 + 4), f0.d);
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 8), r0);
    }
    // end of inlined leaf 0x80095B40
    MemoryInline::WriteResolved8(guest_range_1, 24u, (r30 + 52), static_cast<uint8_t>(r31));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 180u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 180u, (r30 + 208), r31);
        MemoryInline::WriteResolved32(guest_range_1, 184u, (r30 + 212), r31);
    }
    MemoryInline::WriteResolved32(guest_range_1, 188u, (r30 + 216), r31);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000003E gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008FCE0 func_8008FCE0 preserves=true fpr_mask=0x00000000
