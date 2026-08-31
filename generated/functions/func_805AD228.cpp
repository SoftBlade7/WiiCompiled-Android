#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805AD228(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_805AD228;

loc_805AD228:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    MemoryInline::FlatWriteRam32((r1 + 92), r31);
    r31 = 0x808B0000u;
    r31 = (r31 + 27800);
    MemoryInline::FlatWriteRam32((r1 + 88), r30);
    r30 = r3;
    ctx->lr = 0x805AD24Cu;
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x805A9C04u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r3 = 0x808B0000u;
    r9 = 0x808B0000u;
    r3 = (r3 + 28080);
    r8 = 0;
    r9 = (r9 + 28112);
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 201u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r30, r3);
    r4 = 0x80240000u;
    r0 = 1;
    MemoryInline::WriteResolved32(guest_range_0, 112u, (r30 + 112), r9);
    r5 = (r31 + 232);
    r3 = (r31 + 244);
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r30 + 116), r8);
    r4 = (r4 + 28832);
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 12u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r30 + 124), r6);
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r30 + 120), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 128u, (r30 + 128), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 136u, (r30 + 136), r6);
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r30 + 132), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 140u, (r30 + 140), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 148u, (r30 + 148), r6);
        MemoryInline::WriteResolved32(guest_range_0, 144u, (r30 + 144), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 152u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_0, 152u, (r30 + 152), r6);
        MemoryInline::WriteResolved32(guest_range_0, 156u, (r30 + 156), r9);
    }
    MemoryInline::WriteResolved32(guest_range_0, 160u, (r30 + 160), r8);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 164u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 168u, (r30 + 168), r6);
        MemoryInline::WriteResolved32(guest_range_0, 164u, (r30 + 164), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 172u, (r30 + 172), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 176u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 180u, (r30 + 180), r6);
        MemoryInline::WriteResolved32(guest_range_0, 176u, (r30 + 176), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 184u, (r30 + 184), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 188u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 192u, (r30 + 192), r6);
        MemoryInline::WriteResolved32(guest_range_0, 188u, (r30 + 188), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 196u, (r30 + 196), r6);
    MemoryInline::WriteResolved8(guest_range_0, 200u, (r30 + 200), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r30 + 76), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r11 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    r10 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 232), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r31 + 232));
            r8 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r5 + 4));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r5 + 8));
            r6 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r31 + 244));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r3 + 4));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r3 + 8));
        }
    }
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 72u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r1 + 44), r12);
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r1 + 48), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r1 + 52), r10);
        MemoryInline::WriteResolved32(guest_range_3, 48u, (r1 + 56), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_3, 52u, (r1 + 60), r8);
        MemoryInline::WriteResolved32(guest_range_3, 56u, (r1 + 64), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_3, 60u, (r1 + 68), r6);
        MemoryInline::WriteResolved32(guest_range_3, 64u, (r1 + 72), r5);
    }
    MemoryInline::WriteResolved32(guest_range_3, 68u, (r1 + 76), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r30 + 116), r30);
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r30 + 120), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 124u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r30 + 124), r5);
        MemoryInline::WriteResolved32(guest_range_0, 128u, (r30 + 128), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 132u, (r30 + 132), r9);
    r6 = (r31 + 256);
    r5 = (r31 + 268);
    r3 = r30;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 136u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 136u, (r30 + 136), r8);
        MemoryInline::WriteResolved32(guest_range_0, 140u, (r30 + 140), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_0, 144u, (r30 + 144), r12);
        MemoryInline::WriteResolved32(guest_range_0, 148u, (r30 + 148), r11);
    }
    MemoryInline::WriteResolved32(guest_range_0, 152u, (r30 + 152), r10);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r11 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    r10 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r31 + 256));
            r8 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r6 + 4));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r6 + 8));
            r6 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r31 + 268));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r5 + 4));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r5 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_0, 172u, (r30 + 172), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 160u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 160u, (r30 + 160), r30);
        MemoryInline::WriteResolved32(guest_range_0, 164u, (r30 + 164), r6);
    }
    MemoryInline::WriteResolved32(guest_range_0, 168u, (r30 + 168), r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 176u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 176u, (r30 + 176), r9);
        MemoryInline::WriteResolved32(guest_range_0, 180u, (r30 + 180), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 184u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_0, 184u, (r30 + 184), r7);
        MemoryInline::WriteResolved32(guest_range_0, 188u, (r30 + 188), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 192u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_0, 192u, (r30 + 192), r11);
        MemoryInline::WriteResolved32(guest_range_0, 196u, (r30 + 196), r10);
    }
    r31 = MemoryInline::FlatRead32((r1 + 92));
    MemoryInline::WriteResolved32(guest_range_3, 32u, (r1 + 40), r0);
    r30 = MemoryInline::FlatRead32((r1 + 88));
    r0 = MemoryInline::FlatRead32((r1 + 100));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + 8), r12);
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r1 + 12), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r1 + 16), r10);
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r1 + 20), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r1 + 24), r8);
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r1 + 28), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r1 + 32), r6);
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r1 + 36), r4);
    }
    ctx->lr = r0;
    r1 = (r1 + 96);
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFC1E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFE fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805AD228 func_805AD228 preserves=true fpr_mask=0x00000000
