#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A1C3C(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_805A1C3C;

loc_805A1C3C:
{
    r4 = 0x80890000u;
    r5 = 0x802A0000u;
    f2.d = MemoryInline::FlatReadFloat32((r4 + 8728));
    r7 = (r5 + 16688);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 76), 0, 126u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r3 + 76), f2.d);
    r0 = 0;
    r6 = 0x802A0000u;
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 16688));
    r5 = (r6 + 16640);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 80), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8968));
    f1.d = MemoryInline::FlatReadFloat32((r7 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 84), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r7 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 88), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 92), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 96), f2.d);
    MemoryInline::WriteResolved16(guest_range_0, 24u, (r3 + 100), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 108), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 116), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 112), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 120), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r3 + 124), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r3 + 128), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r3 + 132), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 74u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 76u, (r3 + 152), r0);
        MemoryInline::WriteResolved16(guest_range_0, 74u, (r3 + 150), r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 72u, (r3 + 148), static_cast<uint16_t>(r0));
    f1.d = MemoryInline::FlatReadFloat32((r6 + 16640));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r3 + 136), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r3 + 140), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r3 + 144), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r3 + 164), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (r3 + 160), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r3 + 156), f2.d);
    MemoryInline::WriteResolved8(guest_range_0, 92u, (r3 + 168), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 116u, (r3 + 192), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 112u, (r3 + 188), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 108u, (r3 + 184), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 120u, (r3 + 196), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 124u, (r3 + 200), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 125u, (r3 + 201), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_805A1C3C_statefree(uint32_t native_r3)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;
    uint32_t cached_r5 = 0;
    uint32_t cached_r6 = 0;
    uint32_t cached_r7 = 0;
    PPC_FPR cached_f0 = PPC_FPR{};
    PPC_FPR cached_f1 = PPC_FPR{};
    PPC_FPR cached_f2 = PPC_FPR{};

    uint8_t* guest_range_0 = nullptr;

    goto loc_805A1C3C;

loc_805A1C3C:
{
    cached_r4 = 0x80890000u;
    cached_r5 = 0x802A0000u;
    cached_f2.d = MemoryInline::FlatReadFloat32((cached_r4 + 8728));
    cached_r7 = (cached_r5 + 16688);
    guest_range_0 = MemoryInline::ResolveRangeHost((cached_r3 + 76), 0, 126u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (cached_r3 + 76), cached_f2.d);
    cached_r0 = 0;
    cached_r6 = 0x802A0000u;
    cached_r4 = 0x80890000u;
    cached_f0.d = MemoryInline::FlatReadFloat32((cached_r5 + 16688));
    cached_r5 = (cached_r6 + 16640);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (cached_r3 + 80), cached_f0.d);
    cached_f0.d = MemoryInline::FlatReadFloat32((cached_r4 + 8968));
    cached_f1.d = MemoryInline::FlatReadFloat32((cached_r7 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (cached_r3 + 84), cached_f1.d);
    cached_f1.d = MemoryInline::FlatReadFloat32((cached_r7 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (cached_r3 + 88), cached_f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (cached_r3 + 92), cached_f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (cached_r3 + 96), cached_f2.d);
    MemoryInline::WriteResolved16(guest_range_0, 24u, (cached_r3 + 100), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved32(guest_range_0, 32u, (cached_r3 + 108), cached_r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (cached_r3 + 116), cached_f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (cached_r3 + 112), cached_f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (cached_r3 + 120), cached_f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (cached_r3 + 124), cached_f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (cached_r3 + 128), cached_f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (cached_r3 + 132), cached_f2.d);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 74u, ((static_cast<uint32_t>(static_cast<uint16_t>(cached_r0)) << 16) | static_cast<uint16_t>(cached_r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 76u, (cached_r3 + 152), cached_r0);
        MemoryInline::WriteResolved16(guest_range_0, 74u, (cached_r3 + 150), cached_r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 72u, (cached_r3 + 148), static_cast<uint16_t>(cached_r0));
    cached_f1.d = MemoryInline::FlatReadFloat32((cached_r6 + 16640));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (cached_r3 + 136), cached_f1.d);
    cached_f1.d = MemoryInline::FlatReadFloat32((cached_r5 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (cached_r3 + 140), cached_f1.d);
    cached_f1.d = MemoryInline::FlatReadFloat32((cached_r5 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (cached_r3 + 144), cached_f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (cached_r3 + 164), cached_f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (cached_r3 + 160), cached_f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (cached_r3 + 156), cached_f2.d);
    MemoryInline::WriteResolved8(guest_range_0, 92u, (cached_r3 + 168), static_cast<uint8_t>(cached_r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(cached_f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(cached_f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 116u, (cached_r3 + 192), cached_f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 112u, (cached_r3 + 188), cached_f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 108u, (cached_r3 + 184), cached_f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 120u, (cached_r3 + 196), cached_f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 124u, (cached_r3 + 200), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 125u, (cached_r3 + 201), static_cast<uint8_t>(cached_r0));



return static_cast<uint64_t>(cached_r7);
}


    return static_cast<uint64_t>(cached_r7);
}
// RECOMP_STATE_FREE_ABI address=0x805A1C3C symbol=func_805A1C3C_statefree gpr_in=0x00000008 gpr_out=0x00000080 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x000000F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805A1C3C func_805A1C3C preserves=true fpr_mask=0x00000000

