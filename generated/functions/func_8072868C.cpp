#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8072868C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r4_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t ctr = ctx->ctr;

    goto loc_8072868C;

loc_8072868C:
{
    r4 = 0x808A0000u;
    r5 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 9376));
    r4 = 0x808D0000u;
    r4 = (r4 + -25632);
    MemoryInline::FlatWrite32(r3, r4);
    r0 = 2;
    r6 = r3;
    r7 = 0;
    r4 = -1;
    MemoryInline::FlatWrite32((r3 + 12), r5);
    MemoryInline::FlatWrite32((r3 + 416), r5);
    MemoryInline::FlatWriteFloat32((r3 + 420), f0.d);
    MemoryInline::FlatWrite32((r3 + 4), r5);
    MemoryInline::FlatWrite32((r3 + 8), r5);
    ctr = r0;
}

loc_807286CC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r6 + 16), 0, 192u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r6 + 16), r4);
    r7 = (r7 + 48);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r6 + 20), r4);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r6 + 24), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r6 + 28), r4);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r6 + 32), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r6 + 36), r4);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r6 + 40), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r6 + 44), r4);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r6 + 48), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r6 + 52), r4);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r6 + 56), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r6 + 60), r4);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r6 + 64), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r6 + 68), r4);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r6 + 72), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r6 + 76), r4);
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r6 + 80), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r6 + 84), r4);
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r6 + 88), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r6 + 92), r4);
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r6 + 96), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r6 + 100), r4);
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r6 + 104), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r6 + 108), r4);
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r6 + 112), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r6 + 116), r4);
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r6 + 120), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r6 + 124), r4);
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r6 + 128), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r6 + 132), r4);
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r6 + 136), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 124u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r6 + 140), r4);
        MemoryInline::WriteResolved32(guest_range_0, 128u, (r6 + 144), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r6 + 148), r4);
        MemoryInline::WriteResolved32(guest_range_0, 136u, (r6 + 152), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 140u, (r6 + 156), r4);
        MemoryInline::WriteResolved32(guest_range_0, 144u, (r6 + 160), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 148u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 148u, (r6 + 164), r4);
        MemoryInline::WriteResolved32(guest_range_0, 152u, (r6 + 168), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 156u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 156u, (r6 + 172), r4);
        MemoryInline::WriteResolved32(guest_range_0, 160u, (r6 + 176), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 164u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 164u, (r6 + 180), r4);
        MemoryInline::WriteResolved32(guest_range_0, 168u, (r6 + 184), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 172u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 172u, (r6 + 188), r4);
        MemoryInline::WriteResolved32(guest_range_0, 176u, (r6 + 192), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 180u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 180u, (r6 + 196), r4);
        MemoryInline::WriteResolved32(guest_range_0, 184u, (r6 + 200), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 188u, (r6 + 204), r4);
    r6 = (r6 + 192);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807286CC;
    }
}

loc_80728798:
{
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & -4);
    r0 = -1;
    r4 = (r3 + r4);
    MemoryInline::FlatWrite32((r4 + 16), r0);
    MemoryInline::FlatWrite32((r4 + 20), r0);
    MemoryInline::FlatWrite32((r4 + 24), r0);
    MemoryInline::FlatWrite32((r4 + 28), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x000000F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8072868C func_8072868C preserves=true fpr_mask=0x00000000
