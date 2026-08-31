#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80234A54(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_80234A54;

loc_80234A54:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24888));
    r4 = 0x802A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24884));
    r4 = (r4 + 15284);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r4);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r0);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r0);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r0);
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 24), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 28), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 32), f0.d);
    }
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_80234A54_statefree_v0(uint32_t native_r1, uint32_t native_r2, uint32_t native_r3)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r1 = native_r1;
    uint32_t cached_r2 = native_r2;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;
    PPC_FPR cached_f0 = PPC_FPR{};
    PPC_FPR cached_f1 = PPC_FPR{};

    uint8_t* guest_range_0 = nullptr;

    goto loc_80234A54;

loc_80234A54:
{
    MemoryInline::FlatWriteRam32((cached_r1 + -32), cached_r1);
    cached_r1 = (cached_r1 + -32);
    cached_r0 = 0;
    cached_f1.d = MemoryInline::FlatReadFloat32((cached_r2 + -24888));
    cached_r4 = 0x802A0000u;
    cached_f0.d = MemoryInline::FlatReadFloat32((cached_r2 + -24884));
    cached_r4 = (cached_r4 + 15284);
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r3, 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (cached_r3 + 36), cached_r4);
    MemoryInline::WriteResolved32(guest_range_0, 0u, cached_r3, cached_r0);
    MemoryInline::FlatWriteRam32((cached_r1 + 16), cached_r0);
    MemoryInline::FlatWriteRam32((cached_r1 + 20), cached_r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r0)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (cached_r3 + 4), cached_r0);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (cached_r3 + 8), cached_r0);
    }
    MemoryInline::FlatWriteRam32((cached_r1 + 8), cached_r0);
    MemoryInline::FlatWriteRam32((cached_r1 + 12), cached_r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r0)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (cached_r3 + 12), cached_r0);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (cached_r3 + 16), cached_r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (cached_r3 + 20), cached_f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (cached_r3 + 24), cached_f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (cached_r3 + 28), cached_f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (cached_r3 + 32), cached_f0.d);
    }
    cached_r1 = (cached_r1 + 32);


    return static_cast<uint64_t>(cached_r1);
}


    return static_cast<uint64_t>(cached_r1);
}
// RECOMP_STATE_FREE_ABI address=0x80234A54 symbol=func_80234A54_statefree_v0 gpr_in=0x0000000E gpr_out=0x00000002 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80234A54_statefree(uint32_t native_r1, uint32_t native_r2, uint32_t native_r3, PPC_FPR native_f1)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r1 = native_r1;
    uint32_t cached_r2 = native_r2;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;
    PPC_FPR cached_f0 = PPC_FPR{};
    PPC_FPR cached_f1 = PPC_FPR{};

    uint8_t* guest_range_0 = nullptr;

    goto loc_80234A54;

loc_80234A54:
{
    MemoryInline::FlatWriteRam32((cached_r1 + -32), cached_r1);
    cached_r1 = (cached_r1 + -32);
    cached_r0 = 0;
    cached_f1.d = MemoryInline::FlatReadFloat32((cached_r2 + -24888));
    cached_r4 = 0x802A0000u;
    cached_f0.d = MemoryInline::FlatReadFloat32((cached_r2 + -24884));
    cached_r4 = (cached_r4 + 15284);
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r3, 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (cached_r3 + 36), cached_r4);
    MemoryInline::WriteResolved32(guest_range_0, 0u, cached_r3, cached_r0);
    MemoryInline::FlatWriteRam32((cached_r1 + 16), cached_r0);
    MemoryInline::FlatWriteRam32((cached_r1 + 20), cached_r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r0)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (cached_r3 + 4), cached_r0);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (cached_r3 + 8), cached_r0);
    }
    MemoryInline::FlatWriteRam32((cached_r1 + 8), cached_r0);
    MemoryInline::FlatWriteRam32((cached_r1 + 12), cached_r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r0)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (cached_r3 + 12), cached_r0);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (cached_r3 + 16), cached_r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (cached_r3 + 20), cached_f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (cached_r3 + 24), cached_f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (cached_r3 + 28), cached_f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (cached_r3 + 32), cached_f0.d);
    }
    cached_r1 = (cached_r1 + 32);


    return { static_cast<uint64_t>(cached_r1), cached_f1.raw };
}

}
// RECOMP_STATE_FREE_ABI address=0x80234A54 symbol=func_80234A54_statefree gpr_in=0x0000000E gpr_out=0x00000002 fpr_in=0x00000000 fpr_out=0x00000002 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x00000013 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80234A54 func_80234A54 preserves=true fpr_mask=0x00000000

