#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80226F14(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80226F14;

loc_80226F14:
{
    r4 = (r2 + -25692);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25248));
    r7 = MemoryInline::FlatRead8((r2 + -25692));
    r8 = 0;
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r0 = 2;
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r4 = MemoryInline::FlatRead8((r4 + 3));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 25u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r3 + 28), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 4), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 5), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 6), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 7), static_cast<uint8_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 20), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 16), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 12), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 8), f0.d);
    }
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 24), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x000001F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80226F14 func_80226F14 preserves=true fpr_mask=0x00000000
