#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805B4B54(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];

    goto loc_805B4B54;

loc_805B4B54:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 10064);
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 16u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    f3.d = f2.d;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    f4.d = f2.d;
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 104), 0, 136u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r3 + 112), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r3 + 108), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r3 + 104), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 124), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 120), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r3 + 116), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r3 + 136), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r3 + 132), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r3 + 128), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r3 + 148), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r3 + 144), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r3 + 140), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 52u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 56u, (r3 + 160), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r3 + 156), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r3 + 152), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 64u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r3 + 172), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 64u, (r3 + 168), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 60u, (r3 + 164), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 80u, (r3 + 184), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r3 + 180), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 72u, (r3 + 176), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 88u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 92u, (r3 + 196), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 88u, (r3 + 192), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 84u, (r3 + 188), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 100u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 104u, (r3 + 208), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 100u, (r3 + 204), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 96u, (r3 + 200), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 112u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 116u, (r3 + 220), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 112u, (r3 + 216), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 108u, (r3 + 212), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 120u, (r3 + 224), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 128u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 132u, (r3 + 236), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 128u, (r3 + 232), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 124u, (r3 + 228), f2.d);
    r3 = (r3 + 240);
    // inline leaf 0x80239DFC (5 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 88u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r3 + 12), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, r3, f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r3 + 4), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r3 + 8), f4.d);
    // end of inlined leaf 0x80239DFC
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    r3 = (r30 + 256);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    f3.d = f2.d;
    f4.d = f2.d;
    // inline leaf 0x80239DFC (5 guest instruction(s))
    MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r3 + 12), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, r3, f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r3 + 4), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r3 + 8), f4.d);
    // end of inlined leaf 0x80239DFC
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    r3 = (r30 + 296);
    guest_range_2 = MemoryInline::ResolveRangeHost((r30 + 272), 0, 164u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r30 + 280), f2.d);
    f3.d = f2.d;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    f4.d = f2.d;
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r30 + 276), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r30 + 272), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r30 + 292), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r30 + 288), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r30 + 284), f2.d);
    // inline leaf 0x80239DFC (5 guest instruction(s))
    MemoryInline::WriteResolvedFloat32(guest_range_3, 68u, (r3 + 12), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 56u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 56u, r3, f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 60u, (r3 + 4), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 64u, (r3 + 8), f4.d);
    // end of inlined leaf 0x80239DFC
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    r3 = (r30 + 312);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    f3.d = f2.d;
    f4.d = f2.d;
    // inline leaf 0x80239DFC (5 guest instruction(s))
    MemoryInline::WriteResolvedFloat32(guest_range_3, 84u, (r3 + 12), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 72u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 72u, r3, f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 76u, (r3 + 4), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 80u, (r3 + 8), f4.d);
    // end of inlined leaf 0x80239DFC
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    r0 = 0;
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    r5 = 1;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    r4 = 0x802A0000u;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r31 + 12));
    r3 = (r4 + 16688);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 56u, (r30 + 328), f3.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 64u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 68u, (r30 + 340), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 64u, (r30 + 336), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 60u, (r30 + 332), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 72u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 72u, (r30 + 344), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 76u, (r30 + 348), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 80u, (r30 + 352), f2.d);
    MemoryInline::WriteResolved8(guest_range_2, 96u, (r30 + 368), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 97u, (r30 + 369), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 98u, (r30 + 370), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 99u, (r30 + 371), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 100u, (r30 + 372), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 104u, (r30 + 376), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16688));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 112u, (r30 + 384), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 116u, (r30 + 388), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 120u, (r30 + 392), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 108u, (r30 + 380), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 128u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 132u, (r30 + 404), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 128u, (r30 + 400), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 124u, (r30 + 396), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 140u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 144u, (r30 + 416), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 140u, (r30 + 412), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 136u, (r30 + 408), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 148u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 148u, (r30 + 420), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 152u, (r30 + 424), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 156u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 156u, (r30 + 428), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 160u, (r30 + 432), f1.d);
    }
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000000A gpr_write=0xC000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805B4B54 func_805B4B54 preserves=true fpr_mask=0x00000000
