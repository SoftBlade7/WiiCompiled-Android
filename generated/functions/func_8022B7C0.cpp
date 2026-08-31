#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8022B7C0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];

    goto loc_8022B7C0;

loc_8022B7C0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    f2.d = MemoryInline::FlatReadFloat32((r2 + -25096));
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25088));
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 44), r31);
    r31 = r3;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -25092));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r1 + 8), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r1 + 12), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r1 + 16), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r1 + 20), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r1 + 24), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r1 + 28), f0.d);
    }
    MemoryInline::FlatWriteFloat32((r3 + 20), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 24), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 28), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 16), f2.d);
    ctx->lr = 0x8022B814u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x8022C1BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r5 = (r2 + -25692);
    r4 = (r2 + -25696);
    guest_range_2 = MemoryInline::ResolveRangeHost((r2 + -25696), 0, 632u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 600u, (r2 + -25096));
    r3 = 0;
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 624u, (r2 + -25072));
    r12 = 1633;
    r11 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r2 + -25692));
    r0 = 1;
    r10 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r5 + 1));
    r9 = MemoryInline::ReadResolved8(guest_range_2, 6u, (r5 + 2));
    r8 = MemoryInline::ReadResolved8(guest_range_2, 7u, (r5 + 3));
    r7 = MemoryInline::ReadResolved8(guest_range_2, 0u, (r2 + -25696));
    r6 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r4 + 1));
    r5 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r4 + 2));
    r4 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r4 + 3));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 616u);
        if (resolved_pair.valid) {
            f4.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 616u, (r2 + -25080));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 620u, (r2 + -25076));
        }
    }
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 628u, (r2 + -25068));
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 44), 0, 76u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 74u, (r31 + 118), static_cast<uint16_t>(r12));
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r31 + 44), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r31 + 45), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r31 + 46), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r31 + 47), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r31 + 60), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r31 + 61), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r31 + 62), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r31 + 63), static_cast<uint8_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r31 + 48), f4.d);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r31 + 52), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r31 + 64), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r31 + 68), f3.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r31 + 72), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r31 + 76), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r31 + 104), r3);
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r31 + 108), r3);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r31 + 112), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r31 + 92), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r31 + 80), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r31 + 96), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r31 + 84), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r31 + 100), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r31 + 88), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000000E gpr_write=0x80001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8022B7C0 func_8022B7C0 preserves=true fpr_mask=0x00000000
