#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8079D8BC(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_8079D8BC;

loc_8079D8BC:
{
    r4 = 0x808A0000u;
    r5 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 20992));
    r6 = 0x808D0000u;
    r4 = 65536;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 316u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r3 + 116), r5);
    r6 = (r6 + 6640);
    r0 = (r4 + -1);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r3 + 120), r5);
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r3 + 124), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 212u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_0, 212u, (r3 + 212), r5);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 216u, (r3 + 216), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 220u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 220u, (r3 + 220), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 224u, (r3 + 224), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 228u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 228u, (r3 + 228), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 232u, (r3 + 232), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 236u, (r3 + 236), f0.d);
    MemoryInline::WriteResolved32(guest_range_0, 304u, (r3 + 304), r5);
    MemoryInline::WriteResolved32(guest_range_0, 312u, (r3 + 312), r5);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 156u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 160u, (r3 + 160), r5);
        MemoryInline::WriteResolved32(guest_range_0, 156u, (r3 + 156), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 168u, (r3 + 168), r5);
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r3 + 12), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_8079D8BC_statefree(uint32_t native_r3)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;
    uint32_t cached_r5 = 0;
    uint32_t cached_r6 = 0;
    PPC_FPR cached_f0 = PPC_FPR{};

    uint8_t* guest_range_0 = nullptr;

    goto loc_8079D8BC;

loc_8079D8BC:
{
    cached_r4 = 0x808A0000u;
    cached_r5 = 0;
    cached_f0.d = MemoryInline::FlatReadFloat32((cached_r4 + 20992));
    cached_r6 = 0x808D0000u;
    cached_r4 = 65536;
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r3, 0, 316u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 116u, (cached_r3 + 116), cached_r5);
    cached_r6 = (cached_r6 + 6640);
    cached_r0 = (cached_r4 + -1);
    MemoryInline::WriteResolved32(guest_range_0, 0u, cached_r3, cached_r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r5)) << 32) | static_cast<uint32_t>(cached_r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 120u, (cached_r3 + 120), cached_r5);
        MemoryInline::WriteResolved32(guest_range_0, 124u, (cached_r3 + 124), cached_r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 212u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r5)) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_0, 212u, (cached_r3 + 212), cached_r5);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 216u, (cached_r3 + 216), cached_f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 220u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 220u, (cached_r3 + 220), cached_f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 224u, (cached_r3 + 224), cached_f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 228u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 228u, (cached_r3 + 228), cached_f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 232u, (cached_r3 + 232), cached_f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 236u, (cached_r3 + 236), cached_f0.d);
    MemoryInline::WriteResolved32(guest_range_0, 304u, (cached_r3 + 304), cached_r5);
    MemoryInline::WriteResolved32(guest_range_0, 312u, (cached_r3 + 312), cached_r5);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 156u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r5)) << 32) | static_cast<uint32_t>(cached_r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 160u, (cached_r3 + 160), cached_r5);
        MemoryInline::WriteResolved32(guest_range_0, 156u, (cached_r3 + 156), cached_r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 168u, (cached_r3 + 168), cached_r5);
    MemoryInline::WriteResolved16(guest_range_0, 12u, (cached_r3 + 12), static_cast<uint16_t>(cached_r0));


return { static_cast<uint64_t>(cached_r5), static_cast<uint64_t>(cached_r6) };
}

}
// RECOMP_STATE_FREE_ABI address=0x8079D8BC symbol=func_8079D8BC_statefree gpr_in=0x00000008 gpr_out=0x00000060 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8079D8BC func_8079D8BC preserves=true fpr_mask=0x00000000

