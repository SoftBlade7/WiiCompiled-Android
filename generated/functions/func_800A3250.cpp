#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A3250(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r9 = ctx->gpr[9];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_800A3250;

loc_800A3250:
{
    r6 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 92u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r6);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28088));
    r4 = 0x80000000u;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28084));
    r5 = 1;
    r7 = (r3 + 4);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r6);
    r0 = (r4 + -1);
    r8 = (r3 + 16);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r6);
    r9 = (r3 + 28);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r6);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r6);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r7);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r8);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r6);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r9);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 44), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r3 + 48), f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 52), r5);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r3 + 56), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r3 + 76), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 60u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r3 + 60), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r3 + 64), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r3 + 68), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (r3 + 72), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r3 + 80), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (r3 + 84), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r3 + 88), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x000003F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800A3250 func_800A3250 preserves=true fpr_mask=0x00000000
