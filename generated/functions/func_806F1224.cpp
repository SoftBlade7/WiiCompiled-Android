#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806F1224(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_806F1224;

loc_806F1224:
{
    r5 = 0x808A0000u;
    r0 = 0;
    r5 = (r5 + 2912);
    r4 = 1;
    f3.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 8), 0, 112u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r3 + 8), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 12), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 24), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 20), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 16), f3.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 36), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 32), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 28), f3.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 48), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 44), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 40), f3.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r3 + 60), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r3 + 56), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 52), f3.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 60u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r3 + 72), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r3 + 68), f3.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r3 + 64), f3.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r3 + 76), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (r3 + 80), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r3 + 84), f3.d);
    MemoryInline::WriteResolved8(guest_range_0, 80u, (r3 + 88), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (r3 + 92), f3.d);
    MemoryInline::WriteResolved8(guest_range_0, 88u, (r3 + 96), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 92u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r3 + 100), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 96u, (r3 + 104), f3.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 100u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 100u, (r3 + 108), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 104u, (r3 + 112), f3.d);
    }
    MemoryInline::WriteResolved32(guest_range_0, 108u, (r3 + 116), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000002 fpr_write=0x0000000D fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806F1224 func_806F1224 preserves=true fpr_mask=0x00000000
