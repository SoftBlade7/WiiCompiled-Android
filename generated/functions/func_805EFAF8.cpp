#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805EFAF8(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_805EFAF8;

loc_805EFAF8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    // inline leaf 0x8022F710 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x8022F710
    r3 = 0x80890000u;
    r5 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 23712));
    r3 = 0x808C0000u;
    r0 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 8), 0, 120u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r31 + 16), f0.d);
    r3 = (r3 + -26080);
    r4 = -1;
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r31 + 8), r3);
    r3 = r31;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r31 + 20), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r31 + 24), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r31 + 28), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r31 + 32), f0.d);
    }
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r31 + 48), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 104u, (r31 + 112), r0);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r31 + 12), r5);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r31 + 36), r5);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r31 + 40), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r31 + 52), r5);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r31 + 56), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r31 + 60), r5);
    MemoryInline::WriteResolved8(guest_range_0, 108u, (r31 + 116), static_cast<uint8_t>(r5));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r31 + 120), r5);
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r31 + 124), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r31 + 64), r5);
    MemoryInline::WriteResolved8(guest_range_0, 92u, (r31 + 100), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r31 + 68), r5);
    MemoryInline::WriteResolved8(guest_range_0, 93u, (r31 + 101), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r31 + 72), r5);
    MemoryInline::WriteResolved8(guest_range_0, 94u, (r31 + 102), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r31 + 76), r5);
    MemoryInline::WriteResolved8(guest_range_0, 95u, (r31 + 103), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved32(guest_range_0, 72u, (r31 + 80), r5);
    MemoryInline::WriteResolved8(guest_range_0, 96u, (r31 + 104), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r31 + 84), r5);
    MemoryInline::WriteResolved8(guest_range_0, 97u, (r31 + 105), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved32(guest_range_0, 80u, (r31 + 88), r5);
    MemoryInline::WriteResolved8(guest_range_0, 98u, (r31 + 106), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r31 + 92), r5);
    MemoryInline::WriteResolved8(guest_range_0, 99u, (r31 + 107), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved32(guest_range_0, 88u, (r31 + 96), r5);
    MemoryInline::WriteResolved8(guest_range_0, 100u, (r31 + 108), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r31 + 44), r4);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000000A gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805EFAF8 func_805EFAF8 preserves=true fpr_mask=0x00000000
