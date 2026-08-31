#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8071D6A0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t ctr = ctx->ctr;

    goto loc_8071D6A0;

loc_8071D6A0:
{
    r4 = 0x808A0000u;
    r0 = 8;
    r5 = MemoryInline::FlatRead32((r3 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8328));
    ctr = r0;
}

loc_8071D6B4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 192u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r5 + 8), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r5 + 4), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r5, f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r5 + 20), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r5 + 16), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r5 + 12), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r5 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r5 + 28), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r5 + 24), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r5 + 44), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r5 + 40), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r5 + 36), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r5 + 56), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r5 + 52), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r5 + 48), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r5 + 68), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r5 + 64), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r5 + 60), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r5 + 80), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r5 + 76), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (r5 + 72), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r5 + 92), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r5 + 88), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (r5 + 84), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 100u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 104u, (r5 + 104), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 100u, (r5 + 100), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 96u, (r5 + 96), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 116u, (r5 + 116), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 112u, (r5 + 112), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 108u, (r5 + 108), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 124u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 128u, (r5 + 128), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 124u, (r5 + 124), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 120u, (r5 + 120), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 136u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 140u, (r5 + 140), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 136u, (r5 + 136), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 132u, (r5 + 132), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 148u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 152u, (r5 + 152), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 148u, (r5 + 148), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 144u, (r5 + 144), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 160u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 164u, (r5 + 164), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 160u, (r5 + 160), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 156u, (r5 + 156), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 172u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 176u, (r5 + 176), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 172u, (r5 + 172), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 168u, (r5 + 168), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 184u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 188u, (r5 + 188), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 184u, (r5 + 184), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 180u, (r5 + 180), f0.d);
    r5 = (r5 + 192);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8071D6B4;
    }
}

loc_8071D77C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    MemoryInline::FlatWrite32((r3 + 28), r0);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE void func_8071D6A0_statefree(uint32_t native_r3)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;
    uint32_t cached_r5 = 0;
    PPC_FPR cached_f0 = PPC_FPR{};

    uint32_t cached_ctr = 0;

    uint8_t* guest_range_0 = nullptr;

    goto loc_8071D6A0;

loc_8071D6A0:
{
    cached_r4 = 0x808A0000u;
    cached_r0 = 8;
    cached_r5 = MemoryInline::FlatRead32((cached_r3 + 36));
    cached_f0.d = MemoryInline::FlatReadFloat32((cached_r4 + 8328));
    cached_ctr = cached_r0;
}

loc_8071D6B4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r5, 0, 192u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (cached_r5 + 8), cached_f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (cached_r5 + 4), cached_f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, cached_r5, cached_f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (cached_r5 + 20), cached_f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (cached_r5 + 16), cached_f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (cached_r5 + 12), cached_f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (cached_r5 + 32), cached_f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (cached_r5 + 28), cached_f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (cached_r5 + 24), cached_f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (cached_r5 + 44), cached_f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (cached_r5 + 40), cached_f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (cached_r5 + 36), cached_f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (cached_r5 + 56), cached_f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (cached_r5 + 52), cached_f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (cached_r5 + 48), cached_f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (cached_r5 + 68), cached_f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (cached_r5 + 64), cached_f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (cached_r5 + 60), cached_f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (cached_r5 + 80), cached_f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (cached_r5 + 76), cached_f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (cached_r5 + 72), cached_f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (cached_r5 + 92), cached_f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (cached_r5 + 88), cached_f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (cached_r5 + 84), cached_f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 100u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 104u, (cached_r5 + 104), cached_f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 100u, (cached_r5 + 100), cached_f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 96u, (cached_r5 + 96), cached_f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 116u, (cached_r5 + 116), cached_f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 112u, (cached_r5 + 112), cached_f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 108u, (cached_r5 + 108), cached_f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 124u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 128u, (cached_r5 + 128), cached_f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 124u, (cached_r5 + 124), cached_f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 120u, (cached_r5 + 120), cached_f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 136u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 140u, (cached_r5 + 140), cached_f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 136u, (cached_r5 + 136), cached_f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 132u, (cached_r5 + 132), cached_f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 148u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 152u, (cached_r5 + 152), cached_f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 148u, (cached_r5 + 148), cached_f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 144u, (cached_r5 + 144), cached_f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 160u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 164u, (cached_r5 + 164), cached_f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 160u, (cached_r5 + 160), cached_f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 156u, (cached_r5 + 156), cached_f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 172u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 176u, (cached_r5 + 176), cached_f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 172u, (cached_r5 + 172), cached_f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 168u, (cached_r5 + 168), cached_f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 184u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 188u, (cached_r5 + 188), cached_f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 184u, (cached_r5 + 184), cached_f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 180u, (cached_r5 + 180), cached_f0.d);
    cached_r5 = (cached_r5 + 192);
    cached_ctr = (cached_ctr + -1);
    if ((cached_ctr != 0)) {
        goto loc_8071D6B4;
    }
}

loc_8071D77C:
{
    cached_r0 = 0;
    MemoryInline::FlatWrite32((cached_r3 + 12), cached_r0);
    MemoryInline::FlatWrite32((cached_r3 + 16), cached_r0);
    MemoryInline::FlatWrite32((cached_r3 + 20), cached_r0);
    MemoryInline::FlatWrite32((cached_r3 + 24), cached_r0);
    MemoryInline::FlatWrite32((cached_r3 + 28), cached_r0);
    MemoryInline::FlatWrite32((cached_r3 + 32), cached_r0);

return;
}

}
// RECOMP_STATE_FREE_ABI address=0x8071D6A0 symbol=func_8071D6A0_statefree gpr_in=0x00000008 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8071D6A0 func_8071D6A0 preserves=true fpr_mask=0x00000000

