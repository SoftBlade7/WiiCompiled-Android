#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008E0E0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_8008E0E0;

loc_8008E0E0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28708));
    r8 = 0x80270000u;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28712));
    r8 = (r8 + 17016);
    r6 = -1;
    r0 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 256u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r8);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r7);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r7);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r7);
    }
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r7);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r3 + 48), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r3 + 52), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r3 + 56), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r3 + 60), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r3 + 64), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r3 + 68), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r3 + 76), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r3 + 80), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (r3 + 84), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r3 + 88), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 92u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r3 + 92), f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r3 + 96), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r3 + 100), r7);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 104u, (r3 + 104), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 108u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 108u, (r3 + 108), f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r3 + 112), r7);
    }
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r3 + 116), r7);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_0, 144u, (r3 + 144), r6);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 148u, (r3 + 148), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 152u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 152u, (r3 + 152), f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 156u, (r3 + 156), r7);
    }
    MemoryInline::WriteResolved32(guest_range_0, 160u, (r3 + 160), r7);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 224u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 224u, (r3 + 224), r7);
        MemoryInline::WriteResolved32(guest_range_0, 228u, (r3 + 228), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 232u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 232u, (r3 + 232), r7);
        MemoryInline::WriteResolved32(guest_range_0, 236u, (r3 + 236), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 240u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 240u, (r3 + 240), r7);
        MemoryInline::WriteResolved32(guest_range_0, 244u, (r3 + 244), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 248u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 248u, (r3 + 248), r7);
        MemoryInline::WriteResolved32(guest_range_0, 252u, (r3 + 252), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r7);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r7);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r7);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 44), r7);
    MemoryInline::WriteResolved8(guest_range_0, 141u, (r3 + 141), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 140u, (r3 + 140), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 72u, (r3 + 72), r5);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003C gpr_write=0x000001C1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008E0E0 func_8008E0E0 preserves=true fpr_mask=0x00000000
