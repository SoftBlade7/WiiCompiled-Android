#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008DF60(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_8008DF60;

loc_8008DF60:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28716));
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28720));
    r0 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 200u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 8), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 12), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 16), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 20), f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 24), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 28), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 32), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 36), f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 40), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 44), r4);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 48), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r3 + 52), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r3 + 56), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r3 + 60), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (r3 + 76), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r3 + 92), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r3 + 64), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r3 + 80), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r3 + 96), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r3 + 68), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r3 + 84), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 96u, (r3 + 100), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r3 + 72), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (r3 + 88), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 100u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 100u, (r3 + 104), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 104u, (r3 + 108), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 108u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 108u, (r3 + 112), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 112u, (r3 + 116), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 116u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 116u, (r3 + 120), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 120u, (r3 + 124), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 124u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 124u, (r3 + 128), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 128u, (r3 + 132), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 132u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 132u, (r3 + 136), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 136u, (r3 + 140), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 140u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 140u, (r3 + 144), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 144u, (r3 + 148), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 148u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 148u, (r3 + 152), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 152u, (r3 + 156), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 156u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 156u, (r3 + 160), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 160u, (r3 + 164), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 164u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 164u, (r3 + 168), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 168u, (r3 + 172), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 172u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 172u, (r3 + 176), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 176u, (r3 + 180), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 180u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 180u, (r3 + 184), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 184u, (r3 + 188), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 188u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 188u, (r3 + 192), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 192u, (r3 + 196), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 196u, (r3 + 200), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_8008DF60_statefree(uint32_t native_r2, uint32_t native_r3)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r2 = native_r2;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;
    PPC_FPR cached_f0 = PPC_FPR{};
    PPC_FPR cached_f1 = PPC_FPR{};

    uint8_t* guest_range_0 = nullptr;

    goto loc_8008DF60;

loc_8008DF60:
{
    cached_f0.d = MemoryInline::FlatReadFloat32((cached_r2 + -28716));
    cached_r4 = 0;
    cached_f1.d = MemoryInline::FlatReadFloat32((cached_r2 + -28720));
    cached_r0 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost((cached_r3 + 4), 0, 200u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (cached_r3 + 4), cached_f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (cached_r3 + 8), cached_f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (cached_r3 + 12), cached_f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (cached_r3 + 16), cached_f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | static_cast<uint32_t>(cached_r4)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (cached_r3 + 20), cached_f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (cached_r3 + 24), cached_r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (cached_r3 + 28), cached_r0);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (cached_r3 + 32), cached_f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | static_cast<uint32_t>(cached_r4)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (cached_r3 + 36), cached_f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (cached_r3 + 40), cached_r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r4)) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (cached_r3 + 44), cached_r4);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (cached_r3 + 48), cached_f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (cached_r3 + 52), cached_f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (cached_r3 + 56), cached_f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (cached_r3 + 60), cached_f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (cached_r3 + 76), cached_f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (cached_r3 + 92), cached_f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (cached_r3 + 64), cached_f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (cached_r3 + 80), cached_f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (cached_r3 + 96), cached_f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (cached_r3 + 68), cached_f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (cached_r3 + 84), cached_f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 96u, (cached_r3 + 100), cached_f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (cached_r3 + 72), cached_f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (cached_r3 + 88), cached_f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 100u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 100u, (cached_r3 + 104), cached_f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 104u, (cached_r3 + 108), cached_f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 108u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 108u, (cached_r3 + 112), cached_f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 112u, (cached_r3 + 116), cached_f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 116u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 116u, (cached_r3 + 120), cached_f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 120u, (cached_r3 + 124), cached_f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 124u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 124u, (cached_r3 + 128), cached_f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 128u, (cached_r3 + 132), cached_f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 132u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 132u, (cached_r3 + 136), cached_f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 136u, (cached_r3 + 140), cached_f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 140u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 140u, (cached_r3 + 144), cached_f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 144u, (cached_r3 + 148), cached_f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 148u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 148u, (cached_r3 + 152), cached_f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 152u, (cached_r3 + 156), cached_f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 156u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 156u, (cached_r3 + 160), cached_f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 160u, (cached_r3 + 164), cached_f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 164u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 164u, (cached_r3 + 168), cached_f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 168u, (cached_r3 + 172), cached_f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 172u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 172u, (cached_r3 + 176), cached_f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 176u, (cached_r3 + 180), cached_f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 180u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 180u, (cached_r3 + 184), cached_f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 184u, (cached_r3 + 188), cached_f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 188u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 188u, (cached_r3 + 192), cached_f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 192u, (cached_r3 + 196), cached_f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 196u, (cached_r3 + 200), cached_f0.d);


    return static_cast<uint64_t>(cached_r4);
}


    return static_cast<uint64_t>(cached_r4);
}
// RECOMP_STATE_FREE_ABI address=0x8008DF60 symbol=func_8008DF60_statefree gpr_in=0x0000000C gpr_out=0x00000010 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008DF60 func_8008DF60 preserves=true fpr_mask=0x00000000

