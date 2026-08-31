#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009AFB0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_8009AFB0;

loc_8009AFB0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28276));
    r5 = 255;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r6 = 127;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28280));
    r7 = 64;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0;
    r8 = 1;
    r4 = 2;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r0 = 60;
    r30 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 8), 0, 193u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r3 + 8), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 12), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 20), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 28), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 36), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 40), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 44), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 48), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r3 + 64), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 52), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r3 + 68), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r3 + 56), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r3 + 72), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r3 + 60), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r3 + 76), f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r3 + 80), r31);
    }
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r3 + 84), r31);
    MemoryInline::WriteResolved8(guest_range_0, 81u, (r3 + 89), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 82u, (r3 + 90), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 80u, (r3 + 88), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 108u, (r3 + 116), static_cast<uint8_t>(r31));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 124u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r3 + 132), r31);
        MemoryInline::WriteResolved32(guest_range_0, 128u, (r3 + 136), r31);
    }
    MemoryInline::WriteResolved8(guest_range_0, 179u, (r3 + 187), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved32(guest_range_0, 112u, (r3 + 120), r31);
    MemoryInline::WriteResolved8(guest_range_0, 116u, (r3 + 124), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 117u, (r3 + 125), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 118u, (r3 + 126), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 119u, (r3 + 127), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 120u, (r3 + 128), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 156u, (r3 + 164), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 157u, (r3 + 165), static_cast<uint8_t>(r6));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 158u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_0, 158u, (r3 + 166), r31);
        MemoryInline::WriteResolved16(guest_range_0, 160u, (r3 + 168), r31);
    }
    MemoryInline::WriteResolved8(guest_range_0, 162u, (r3 + 170), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 163u, (r3 + 171), static_cast<uint8_t>(r31));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 164u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_0, 164u, (r3 + 172), r31);
        MemoryInline::WriteResolved16(guest_range_0, 166u, (r3 + 174), r31);
    }
    MemoryInline::WriteResolved8(guest_range_0, 168u, (r3 + 176), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 169u, (r3 + 177), static_cast<uint8_t>(r31));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 170u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_0, 170u, (r3 + 178), r31);
        MemoryInline::WriteResolved16(guest_range_0, 172u, (r3 + 180), r31);
    }
    MemoryInline::WriteResolved8(guest_range_0, 174u, (r3 + 182), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 177u, (r3 + 185), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 175u, (r3 + 183), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 182u, (r3 + 190), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 183u, (r3 + 191), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 184u, (r3 + 192), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 185u, (r3 + 193), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 186u, (r3 + 194), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 188u, (r3 + 196), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 189u, (r3 + 197), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 190u, (r3 + 198), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 191u, (r3 + 199), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 192u, (r3 + 200), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 176u, (r3 + 184), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 180u, (r3 + 188), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 181u, (r3 + 189), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 152u, (r3 + 160), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 178u, (r3 + 186), static_cast<uint8_t>(r31));
    r3 = (r3 + 140);
    // inline leaf 0x80095B40 (9 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28384));
    r4 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28380));
    r0 = 0;
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    // end of inlined leaf 0x80095B40
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 156), 0, 80u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r30 + 156), static_cast<uint8_t>(r31));
    r0 = -1;
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 48u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 48u, (r30 + 204), r0);
        MemoryInline::WriteResolved16(guest_range_1, 50u, (r30 + 206), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 52u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 52u, (r30 + 208), r0);
        MemoryInline::WriteResolved16(guest_range_1, 54u, (r30 + 210), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 56u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 56u, (r30 + 212), r0);
        MemoryInline::WriteResolved16(guest_range_1, 58u, (r30 + 214), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 60u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 60u, (r30 + 216), r0);
        MemoryInline::WriteResolved16(guest_range_1, 62u, (r30 + 218), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 64u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 64u, (r30 + 220), r0);
        MemoryInline::WriteResolved16(guest_range_1, 66u, (r30 + 222), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 68u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 68u, (r30 + 224), r0);
        MemoryInline::WriteResolved16(guest_range_1, 70u, (r30 + 226), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 72u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 72u, (r30 + 228), r0);
        MemoryInline::WriteResolved16(guest_range_1, 74u, (r30 + 230), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 76u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 76u, (r30 + 232), r0);
        MemoryInline::WriteResolved16(guest_range_1, 78u, (r30 + 234), r0);
    }
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

// RECOMP_GUEST_ABI gpr_read=0xC000000E gpr_write=0xC00001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009AFB0 func_8009AFB0 preserves=true fpr_mask=0x00000000
