#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80090FC0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80090FC0;

loc_80090FC0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    // inline leaf 0x8009DE00 (9 guest instruction(s))
    r5 = 0x80270000u;
    r4 = 0;
    r5 = (r5 + 18880);
    r0 = 47;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 393u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r5);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r4);
    }
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r3 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r3 + 9), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x8009DE00
    r4 = 0x80270000u;
    r3 = (r31 + 264);
    r4 = (r4 + 17176);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r31, r4);
    // inline leaf 0x8009E690 (9 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 304u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 304u, (r3 + 40), r0);
        MemoryInline::WriteResolved32(guest_range_0, 308u, (r3 + 44), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 312u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 312u, (r3 + 48), r0);
        MemoryInline::WriteResolved32(guest_range_0, 316u, (r3 + 52), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 320u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 320u, (r3 + 56), r0);
        MemoryInline::WriteResolved32(guest_range_0, 324u, (r3 + 60), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 328u, (r3 + 64), r0);
    // end of inlined leaf 0x8009E690
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 392u, (r31 + 392), static_cast<uint8_t>(r0));
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80090FC0_statefree(uint32_t native_r1, uint32_t native_r3, uint32_t native_r31, uint32_t native_lr)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r1 = native_r1;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;
    uint32_t cached_r5 = 0;
    uint32_t cached_r31 = native_r31;

    uint8_t* guest_range_0 = nullptr;

    goto loc_80090FC0;

loc_80090FC0:
{
    MemoryInline::FlatWriteRam32((cached_r1 + -16), cached_r1);
    cached_r1 = (cached_r1 + -16);
    cached_r0 = native_lr;
    MemoryInline::FlatWriteRam32((cached_r1 + 20), cached_r0);
    MemoryInline::FlatWriteRam32((cached_r1 + 12), cached_r31);
    cached_r31 = cached_r3;
    // inline leaf 0x8009DE00 (9 guest instruction(s))
    cached_r5 = 0x80270000u;
    cached_r4 = 0;
    cached_r5 = (cached_r5 + 18880);
    cached_r0 = 47;
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r3, 0, 393u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r5)) << 32) | static_cast<uint32_t>(cached_r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, cached_r3, cached_r5);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (cached_r3 + 4), cached_r4);
    }
    MemoryInline::WriteResolved8(guest_range_0, 8u, (cached_r3 + 8), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (cached_r3 + 9), static_cast<uint8_t>(cached_r4));
    // end of inlined leaf 0x8009DE00
    cached_r4 = 0x80270000u;
    cached_r3 = (cached_r31 + 264);
    cached_r4 = (cached_r4 + 17176);
    MemoryInline::WriteResolved32(guest_range_0, 0u, cached_r31, cached_r4);
    // inline leaf 0x8009E690 (9 guest instruction(s))
    cached_r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 304u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r0)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 304u, (cached_r3 + 40), cached_r0);
        MemoryInline::WriteResolved32(guest_range_0, 308u, (cached_r3 + 44), cached_r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 312u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r0)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 312u, (cached_r3 + 48), cached_r0);
        MemoryInline::WriteResolved32(guest_range_0, 316u, (cached_r3 + 52), cached_r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 320u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r0)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 320u, (cached_r3 + 56), cached_r0);
        MemoryInline::WriteResolved32(guest_range_0, 324u, (cached_r3 + 60), cached_r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 328u, (cached_r3 + 64), cached_r0);
    // end of inlined leaf 0x8009E690
    cached_r0 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 392u, (cached_r31 + 392), static_cast<uint8_t>(cached_r0));
    cached_r3 = cached_r31;
    cached_r31 = MemoryInline::FlatRead32((cached_r1 + 12));
    cached_r0 = MemoryInline::FlatRead32((cached_r1 + 20));
    native_lr = cached_r0;
    cached_r1 = (cached_r1 + 16);



    return { static_cast<uint64_t>(cached_r1), static_cast<uint64_t>(cached_r31) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80090FC0 symbol=func_80090FC0_statefree gpr_in=0x8000000A gpr_out=0x80000002 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=1


// RECOMP_GUEST_ABI gpr_read=0x8000000A gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80090FC0 func_80090FC0 preserves=true fpr_mask=0x00000000

