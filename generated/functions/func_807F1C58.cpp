#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807F1C58(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_807F1C58;

loc_807F1C58:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x805A0000u;
    r5 = 0x80510000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 0;
    r4 = (r4 + 8112);
    r5 = (r5 + 13824);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r6 = 12;
    r7 = 12;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r3 = (r3 + 32);
    ctx->lr = 0x807F1C94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x80020FF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    r4 = 0x808B0000u;
    r3 = r31;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -25288));
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 32), 0, 144u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r31 + 40), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r31 + 36), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r31 + 32), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r31 + 52), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r31 + 48), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r31 + 44), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r31 + 64), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r31 + 60), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r31 + 56), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r31 + 76), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r31 + 72), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r31 + 68), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r31 + 88), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r31 + 84), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r31 + 80), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r31 + 100), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 64u, (r31 + 96), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r31 + 92), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r31 + 112), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r31 + 108), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (r31 + 104), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r31 + 124), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r31 + 120), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (r31 + 116), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 100u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 104u, (r31 + 136), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 100u, (r31 + 132), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 96u, (r31 + 128), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 116u, (r31 + 148), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 112u, (r31 + 144), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 108u, (r31 + 140), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 124u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 128u, (r31 + 160), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 124u, (r31 + 156), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 120u, (r31 + 152), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 136u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 140u, (r31 + 172), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 136u, (r31 + 168), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 132u, (r31 + 164), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFF0E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807F1C58 func_807F1C58 preserves=true fpr_mask=0x00000000
