#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802402E0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_802402E0;

loc_802402E0:
{
    r8 = 0x80380000u;
    r0 = MemoryInline::FlatRead32((r13 + -27728));
    r8 = (r8 + 17536);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24296));
    r4 = (r8 + 48);
    r7 = (r0 & -4);
    r3 = (r8 + 72);
    r6 = -1;
    r0 = 0;
    r5 = (r8 + 0);
    MemoryInline::FlatWrite32((r13 + -27728), r7);
    MemoryInline::FlatWrite32((r13 + -27724), r6);
    MemoryInline::FlatWrite32((r13 + -23744), r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 8), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r5 + 8), r0);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r5 + 20), r0);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r5 + 32), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r5 + 44), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r8 + 48), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r8 + 72), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r4 + 4), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r3 + 4), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r4 + 8), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (r3 + 8), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r4 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r4 + 16), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r3 + 16), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r4 + 20), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (r3 + 20), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002004 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802402E0 func_802402E0 preserves=true fpr_mask=0x00000000
