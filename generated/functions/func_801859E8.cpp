#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801859E8(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];

    goto loc_801859E8;

loc_801859E8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x80250000u;
    r6 = 0x80290000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r7 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 11096));
    r8 = (r3 + 20);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r9 = (r3 + 32);
    r0 = MemoryInline::FlatRead8((r4 + 9));
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r6 = (r6 + -16928);
    r30 = r3;
    r5 = 16;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 209u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r7);
    r4 = (r4 + 12);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r7);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r7);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r7);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r7);
    }
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r7);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r8);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r9);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r3 + 76), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r3 + 80), f0.d);
    }
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r7);
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r7);
    MemoryInline::WriteResolved8(guest_range_0, 208u, (r3 + 208), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 204u, (r3 + 204), static_cast<uint8_t>(r0));
    r3 = (r3 + 180);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x800131E0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r3 = (r30 + 196);
    r4 = (r31 + 28);
    r5 = 8;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x800131E0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 8), 0, 68u, true, false);
    r4 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r31 + 10));
    r3 = r30;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 28u);
        if (resolved_pair.valid) {
            f9.d = PpcBitCastToFloatInline(resolved_pair.first);
            f8.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f9.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r31 + 36));
            f8.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r31 + 40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 36u);
        if (resolved_pair.valid) {
            f7.d = PpcBitCastToFloatInline(resolved_pair.first);
            f6.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f7.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r31 + 44));
            f6.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r31 + 48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 44u);
        if (resolved_pair.valid) {
            f5.d = PpcBitCastToFloatInline(resolved_pair.first);
            f4.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 44u, (r31 + 52));
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 48u, (r31 + 56));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 52u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 52u, (r31 + 60));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 56u, (r31 + 64));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 60u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 60u, (r31 + 68));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 64u, (r31 + 72));
        }
    }
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r31 + 8));
    guest_range_2 = MemoryInline::ResolveRangeHost((r30 + 44), 0, 164u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f9.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r30 + 44), f9.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r30 + 48), f8.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f6.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r30 + 52), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r30 + 56), f6.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r30 + 60), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r30 + 64), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r30 + 68), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r30 + 72), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r30 + 76), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r30 + 80), f0.d);
    }
    MemoryInline::WriteResolved8(guest_range_2, 161u, (r30 + 205), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 162u, (r30 + 206), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 163u, (r30 + 207), static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
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
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000001A gpr_write=0xC00003FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x000003FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801859E8 func_801859E8 preserves=true fpr_mask=0x00000000
