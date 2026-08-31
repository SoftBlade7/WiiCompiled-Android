#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8022FAC4(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_8022FAC4;

loc_8022FAC4:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24960));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r3, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24956));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 8), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 32), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 36), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 40), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r3, f0.d);
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_8022FAC4_statefree_v1(uint32_t native_r2, uint32_t native_r3, PPC_FPR native_f1)
{

    uint32_t cached_r2 = native_r2;
    uint32_t cached_r3 = native_r3;
    PPC_FPR cached_f0 = PPC_FPR{};
    PPC_FPR cached_f1 = PPC_FPR{};

    uint8_t* guest_range_0 = nullptr;

    goto loc_8022FAC4;

loc_8022FAC4:
{
    cached_f1.d = MemoryInline::FlatReadFloat32((cached_r2 + -24960));
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r3, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, cached_r3, cached_f1.d);
    cached_f0.d = MemoryInline::FlatReadFloat32((cached_r2 + -24956));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (cached_r3 + 4), cached_f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (cached_r3 + 8), cached_f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (cached_r3 + 12), cached_f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (cached_r3 + 16), cached_f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (cached_r3 + 24), cached_f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (cached_r3 + 28), cached_f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (cached_r3 + 32), cached_f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (cached_r3 + 36), cached_f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (cached_r3 + 44), cached_f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (cached_r3 + 40), cached_f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (cached_r3 + 20), cached_f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, cached_r3, cached_f0.d);

    return cached_f1.raw;
}


    return cached_f1.raw;
}
// RECOMP_STATE_FREE_ABI address=0x8022FAC4 symbol=func_8022FAC4_statefree_v1 gpr_in=0x0000000C gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000002 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0

extern "C" MKW_PPC_ALWAYS_INLINE_BODY void func_8022FAC4_statefree_v0(uint32_t native_r2, uint32_t native_r3)
{

    uint32_t cached_r2 = native_r2;
    uint32_t cached_r3 = native_r3;
    PPC_FPR cached_f0 = PPC_FPR{};
    PPC_FPR cached_f1 = PPC_FPR{};

    uint8_t* guest_range_0 = nullptr;

    goto loc_8022FAC4;

loc_8022FAC4:
{
    cached_f1.d = MemoryInline::FlatReadFloat32((cached_r2 + -24960));
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r3, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, cached_r3, cached_f1.d);
    cached_f0.d = MemoryInline::FlatReadFloat32((cached_r2 + -24956));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (cached_r3 + 4), cached_f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (cached_r3 + 8), cached_f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (cached_r3 + 12), cached_f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (cached_r3 + 16), cached_f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (cached_r3 + 24), cached_f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (cached_r3 + 28), cached_f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (cached_r3 + 32), cached_f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (cached_r3 + 36), cached_f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (cached_r3 + 44), cached_f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (cached_r3 + 40), cached_f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (cached_r3 + 20), cached_f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, cached_r3, cached_f0.d);

    return;
}

}
// RECOMP_STATE_FREE_ABI address=0x8022FAC4 symbol=func_8022FAC4_statefree_v0 gpr_in=0x0000000C gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_8022FAC4_statefree(uint32_t native_r2, uint32_t native_r3, PPC_FPR native_f0, PPC_FPR native_f1)
{

    uint32_t cached_r2 = native_r2;
    uint32_t cached_r3 = native_r3;
    PPC_FPR cached_f0 = PPC_FPR{};
    PPC_FPR cached_f1 = PPC_FPR{};

    uint8_t* guest_range_0 = nullptr;

    goto loc_8022FAC4;

loc_8022FAC4:
{
    cached_f1.d = MemoryInline::FlatReadFloat32((cached_r2 + -24960));
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r3, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, cached_r3, cached_f1.d);
    cached_f0.d = MemoryInline::FlatReadFloat32((cached_r2 + -24956));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (cached_r3 + 4), cached_f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (cached_r3 + 8), cached_f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (cached_r3 + 12), cached_f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (cached_r3 + 16), cached_f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (cached_r3 + 24), cached_f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (cached_r3 + 28), cached_f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (cached_r3 + 32), cached_f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (cached_r3 + 36), cached_f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (cached_r3 + 44), cached_f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (cached_r3 + 40), cached_f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (cached_r3 + 20), cached_f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, cached_r3, cached_f0.d);

    return { cached_f0.raw, cached_f1.raw };
}

}
// RECOMP_STATE_FREE_ABI address=0x8022FAC4 symbol=func_8022FAC4_statefree gpr_in=0x0000000C gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000003 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8022FAC4 func_8022FAC4 preserves=true fpr_mask=0x00000000

