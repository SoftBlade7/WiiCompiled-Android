#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80598BDC(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_80598BDC;

loc_80598BDC:
{
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x80599F54 (19 guest instruction(s))
    r6 = MemoryInline::FlatRead32((r3 + 16));
    r5 = 0x80890000u;
    r4 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat32((r5 + 8056));
    f1.d = MemoryInline::FlatReadFloat32((r6 + 12));
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8040));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 36), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 44), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 40), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r3 + 36), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 48), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r3 + 52), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 56), f1.d);
    MemoryInline::WriteResolved16(guest_range_0, 18u, (r3 + 54), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 68), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 64), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 60), f0.d);
    // end of inlined leaf 0x80599F54
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80598BDC func_80598BDC preserves=true fpr_mask=0x00000000
