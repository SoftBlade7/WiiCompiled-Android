#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805B4D24(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_805B4D24;

loc_805B4D24:
{
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 10064));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 116), 0, 228u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 124), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 120), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r3 + 116), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 136), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 132), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 128), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 148), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 144), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 140), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 160), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 156), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 152), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r3 + 172), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r3 + 168), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r3 + 164), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r3 + 184), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r3 + 180), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r3 + 176), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r3 + 196), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r3 + 192), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (r3 + 188), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r3 + 208), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r3 + 204), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (r3 + 200), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 116u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 120u, (r3 + 236), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 116u, (r3 + 232), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 112u, (r3 + 228), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 160u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 164u, (r3 + 280), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 160u, (r3 + 276), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 156u, (r3 + 272), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 172u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 176u, (r3 + 292), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 172u, (r3 + 288), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 168u, (r3 + 284), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 220u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 224u, (r3 + 340), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 220u, (r3 + 336), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 216u, (r3 + 332), f0.d);
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000010 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805B4D24 func_805B4D24 preserves=true fpr_mask=0x00000000
