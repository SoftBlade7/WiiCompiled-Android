#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80735948(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;

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
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80735948;

loc_80735948:
{
    MemoryInline::FlatWriteRam32((r1 + -448), r1);
    r1 = (r1 + -448);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 452), r0);
    r11 = (r1 + 448);
    // inline leaf 0x80021570 (18 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -68), 0, 68u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r15)) << 32) | static_cast<uint32_t>(r16)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -68), r15);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -64), r16);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -60), r17);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -56), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -52), r19);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -48), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -44), r21);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r11 + -4), r31);
    // end of inlined leaf 0x80021570
    r31 = 0x808D0000u;
    r30 = r3;
    r17 = r4;
    r31 = (r31 + -21824);
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
    InvokeDirectCpu<0x8074AE2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r3 = 0x808D0000u;
    r5 = 0x808D0000u;
    r3 = (r3 + -20800);
    r16 = 0;
    r5 = (r5 + -20648);
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 52), 0, 473u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r30 + 52), r3);
    r4 = 0x80240000u;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r16)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r30 + 56), r5);
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r30 + 60), r16);
    }
    r4 = (r4 + 28832);
    guest_range_3 = MemoryInline::ResolveRangeHost(r4, 0, 12u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r30 + 68), r0);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r30 + 64), r3);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r30 + 72), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r30 + 80), r0);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r30 + 76), r3);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r30 + 84), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r30 + 92), r0);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r30 + 88), r3);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r30 + 96), r0);
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r30 + 100), r5);
    }
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r30 + 104), r16);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r30 + 112), r0);
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r30 + 108), r3);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 64u, (r30 + 116), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r30 + 124), r0);
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r30 + 120), r3);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 76u, (r30 + 128), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 84u, (r30 + 136), r0);
        MemoryInline::WriteResolved32(guest_range_1, 80u, (r30 + 132), r3);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r30 + 140), r0);
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r30 + 144), r5);
    }
    MemoryInline::WriteResolved32(guest_range_1, 96u, (r30 + 148), r16);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r30 + 156), r0);
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r30 + 152), r3);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 108u, (r30 + 160), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 116u, (r30 + 168), r0);
        MemoryInline::WriteResolved32(guest_range_1, 112u, (r30 + 164), r3);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 120u, (r30 + 172), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 124u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 128u, (r30 + 180), r0);
        MemoryInline::WriteResolved32(guest_range_1, 124u, (r30 + 176), r3);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 132u, (r30 + 184), r0);
        MemoryInline::WriteResolved32(guest_range_1, 136u, (r30 + 188), r5);
    }
    r3 = 0x808B0000u;
    r3 = (r3 + 28224);
    MemoryInline::WriteResolved32(guest_range_1, 140u, (r30 + 192), r16);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 148u, (r30 + 200), r0);
        MemoryInline::WriteResolved32(guest_range_1, 144u, (r30 + 196), r6);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 152u, (r30 + 204), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 156u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 160u, (r30 + 212), r0);
        MemoryInline::WriteResolved32(guest_range_1, 156u, (r30 + 208), r6);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 164u, (r30 + 216), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 168u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 172u, (r30 + 224), r0);
        MemoryInline::WriteResolved32(guest_range_1, 168u, (r30 + 220), r6);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 176u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 176u, (r30 + 228), r0);
        MemoryInline::WriteResolved32(guest_range_1, 180u, (r30 + 232), r5);
    }
    MemoryInline::WriteResolved32(guest_range_1, 184u, (r30 + 236), r16);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 188u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 192u, (r30 + 244), r0);
        MemoryInline::WriteResolved32(guest_range_1, 188u, (r30 + 240), r6);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 196u, (r30 + 248), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 200u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 204u, (r30 + 256), r0);
        MemoryInline::WriteResolved32(guest_range_1, 200u, (r30 + 252), r6);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 208u, (r30 + 260), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 212u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 216u, (r30 + 268), r0);
        MemoryInline::WriteResolved32(guest_range_1, 212u, (r30 + 264), r6);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 220u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 220u, (r30 + 272), r0);
        MemoryInline::WriteResolved32(guest_range_1, 224u, (r30 + 276), r5);
    }
    MemoryInline::WriteResolved32(guest_range_1, 228u, (r30 + 280), r16);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 232u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 236u, (r30 + 288), r0);
        MemoryInline::WriteResolved32(guest_range_1, 232u, (r30 + 284), r6);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 240u, (r30 + 292), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 244u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 248u, (r30 + 300), r0);
        MemoryInline::WriteResolved32(guest_range_1, 244u, (r30 + 296), r6);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 252u, (r30 + 304), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 256u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 260u, (r30 + 312), r0);
        MemoryInline::WriteResolved32(guest_range_1, 256u, (r30 + 308), r6);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 264u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 264u, (r30 + 316), r0);
        MemoryInline::WriteResolved32(guest_range_1, 268u, (r30 + 320), r3);
    }
    MemoryInline::WriteResolved32(guest_range_1, 268u, (r30 + 320), r5);
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 9964));
    r3 = 8;
    MemoryInline::WriteResolved32(guest_range_1, 272u, (r30 + 324), r16);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 276u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 280u, (r30 + 332), r0);
        MemoryInline::WriteResolved32(guest_range_1, 276u, (r30 + 328), r6);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 284u, (r30 + 336), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 288u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 292u, (r30 + 344), r0);
        MemoryInline::WriteResolved32(guest_range_1, 288u, (r30 + 340), r6);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 296u, (r30 + 348), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 300u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 304u, (r30 + 356), r0);
        MemoryInline::WriteResolved32(guest_range_1, 300u, (r30 + 352), r6);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 308u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 308u, (r30 + 360), r0);
        MemoryInline::WriteResolved32(guest_range_1, 312u, (r30 + 364), r5);
    }
    MemoryInline::WriteResolved32(guest_range_1, 316u, (r30 + 368), r16);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 320u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 324u, (r30 + 376), r0);
        MemoryInline::WriteResolved32(guest_range_1, 320u, (r30 + 372), r6);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 328u, (r30 + 380), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 332u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 336u, (r30 + 388), r0);
        MemoryInline::WriteResolved32(guest_range_1, 332u, (r30 + 384), r6);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 340u, (r30 + 392), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 344u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 348u, (r30 + 400), r0);
        MemoryInline::WriteResolved32(guest_range_1, 344u, (r30 + 396), r6);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 352u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 352u, (r30 + 404), r0);
        MemoryInline::WriteResolved32(guest_range_1, 356u, (r30 + 408), r5);
    }
    MemoryInline::WriteResolved32(guest_range_1, 360u, (r30 + 412), r16);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 364u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 368u, (r30 + 420), r0);
        MemoryInline::WriteResolved32(guest_range_1, 364u, (r30 + 416), r6);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 372u, (r30 + 424), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 376u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 380u, (r30 + 432), r0);
        MemoryInline::WriteResolved32(guest_range_1, 376u, (r30 + 428), r6);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 384u, (r30 + 436), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 388u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 392u, (r30 + 444), r0);
        MemoryInline::WriteResolved32(guest_range_1, 388u, (r30 + 440), r6);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 396u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 396u, (r30 + 448), r0);
        MemoryInline::WriteResolved32(guest_range_1, 400u, (r30 + 452), r5);
    }
    MemoryInline::WriteResolved32(guest_range_1, 404u, (r30 + 456), r16);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 408u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 412u, (r30 + 464), r0);
        MemoryInline::WriteResolved32(guest_range_1, 408u, (r30 + 460), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 416u, (r30 + 468), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 420u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 424u, (r30 + 476), r0);
        MemoryInline::WriteResolved32(guest_range_1, 420u, (r30 + 472), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 428u, (r30 + 480), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 432u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 436u, (r30 + 488), r0);
        MemoryInline::WriteResolved32(guest_range_1, 432u, (r30 + 484), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 440u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_1, 440u, (r30 + 492), r0);
        MemoryInline::WriteResolved32(guest_range_1, 444u, (r30 + 496), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 448u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r16)))) {
        MemoryInline::WriteResolved32(guest_range_1, 448u, (r30 + 500), r16);
        MemoryInline::WriteResolved32(guest_range_1, 452u, (r30 + 504), r16);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 456u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_1, 456u, (r30 + 508), r16);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 460u, (r30 + 512), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 464u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r16)))) {
        MemoryInline::WriteResolved32(guest_range_1, 464u, (r30 + 516), r16);
        MemoryInline::WriteResolved32(guest_range_1, 468u, (r30 + 520), r16);
    }
    MemoryInline::WriteResolved8(guest_range_1, 472u, (r30 + 524), static_cast<uint8_t>(r16));
    ctx->lr = 0x80735CE8u;
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
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
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
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80735CEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80735CF8;
    }
}

loc_80735CF0:
{
    MemoryInline::FlatWriteRam32(r3, r16);
    MemoryInline::FlatWriteRam32((r3 + 4), r16);
}

loc_80735CF8:
{
    MemoryInline::FlatWrite32((r30 + 500), r3);
    r3 = 20;
    ctx->lr = 0x80735D04u;
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
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
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
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80735D08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80735D28;
    }
}

loc_80735D0C:
{
    MemoryInline::FlatWriteRam32(r3, r17);
    r0 = 0;
    r4 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 9968));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    MemoryInline::FlatWriteRamFloat32((r3 + 16), f0.d);
}

loc_80735D28:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r30 + 60), 0, 464u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 460u, (r30 + 520), r3);
    r8 = (r31 + 100);
    r7 = (r31 + 112);
    r4 = 0x80240000u;
    r4 = (r4 + 28832);
    guest_range_4 = MemoryInline::ResolveRangeHost(r4, 0, 12u, true, false);
    r16 = MemoryInline::ReadResolved32(guest_range_4, 0u, r4);
    r6 = (r31 + 124);
    guest_range_5 = MemoryInline::ResolveRangeHost((r31 + 100), 0, 292u, true, false);
    r19 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r31 + 100));
    r5 = (r31 + 136);
    r17 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r4 + 4));
    r3 = (r31 + 148);
    r18 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r4 + 8));
    r15 = (r31 + 160);
    guest_range_7 = MemoryInline::ResolveRangeHost((r8 + 4), 0, 296u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 0u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_7, 0u, (r8 + 4));
            r28 = MemoryInline::ReadResolved32(guest_range_7, 4u, (r8 + 8));
        }
    }
    r27 = MemoryInline::ReadResolved32(guest_range_5, 12u, (r31 + 112));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 12u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_7, 12u, (r7 + 4));
            r25 = MemoryInline::ReadResolved32(guest_range_7, 16u, (r7 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_2, 12u, (r30 + 72), r25);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, (r30 + 60), r30);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r30 + 64), r27);
    }
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r30 + 68), r26);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r30 + 76), r19);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r30 + 80), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r16)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r30 + 84), r28);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r30 + 88), r16);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r30 + 92), r17);
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r30 + 96), r18);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_4, 0u, r4);
            r23 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r4 + 4));
        }
    }
    r22 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r4 + 8));
    r21 = MemoryInline::ReadResolved32(guest_range_5, 24u, (r31 + 124));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_7, 24u, (r6 + 4));
            r12 = MemoryInline::ReadResolved32(guest_range_7, 28u, (r6 + 8));
        }
    }
    r11 = MemoryInline::ReadResolved32(guest_range_5, 36u, (r31 + 136));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 36u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r10 = MemoryInline::ReadResolved32(guest_range_7, 36u, (r5 + 4));
            r9 = MemoryInline::ReadResolved32(guest_range_7, 40u, (r5 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_2, 56u, (r30 + 116), r9);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_2, 44u, (r30 + 104), r30);
        MemoryInline::WriteResolved32(guest_range_2, 48u, (r30 + 108), r11);
    }
    MemoryInline::WriteResolved32(guest_range_2, 52u, (r30 + 112), r10);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_2, 60u, (r30 + 120), r21);
        MemoryInline::WriteResolved32(guest_range_2, 64u, (r30 + 124), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_2, 68u, (r30 + 128), r12);
        MemoryInline::WriteResolved32(guest_range_2, 72u, (r30 + 132), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_2, 76u, (r30 + 136), r23);
        MemoryInline::WriteResolved32(guest_range_2, 80u, (r30 + 140), r22);
    }
    r8 = MemoryInline::ReadResolved32(guest_range_5, 48u, (r31 + 148));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 48u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_7, 48u, (r3 + 4));
            r6 = MemoryInline::ReadResolved32(guest_range_7, 52u, (r3 + 8));
        }
    }
    r5 = MemoryInline::ReadResolved32(guest_range_5, 60u, (r31 + 160));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 60u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_7, 60u, (r15 + 4));
            r0 = MemoryInline::ReadResolved32(guest_range_7, 64u, (r15 + 8));
        }
    }
    guest_range_8 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 360u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 324u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_8, 324u, (r1 + 332), r16);
        MemoryInline::WriteResolved32(guest_range_8, 328u, (r1 + 336), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 332u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_8, 332u, (r1 + 340), r18);
        MemoryInline::WriteResolved32(guest_range_8, 336u, (r1 + 344), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 340u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_8, 340u, (r1 + 348), r29);
        MemoryInline::WriteResolved32(guest_range_8, 344u, (r1 + 352), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 348u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_8, 348u, (r1 + 356), r27);
        MemoryInline::WriteResolved32(guest_range_8, 352u, (r1 + 360), r26);
    }
    MemoryInline::WriteResolved32(guest_range_8, 356u, (r1 + 364), r25);
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 288u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_8, 288u, (r1 + 296), r24);
        MemoryInline::WriteResolved32(guest_range_8, 292u, (r1 + 300), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 296u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_8, 296u, (r1 + 304), r22);
        MemoryInline::WriteResolved32(guest_range_8, 300u, (r1 + 308), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 304u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_8, 304u, (r1 + 312), r20);
        MemoryInline::WriteResolved32(guest_range_8, 308u, (r1 + 316), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 312u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_8, 312u, (r1 + 320), r11);
        MemoryInline::WriteResolved32(guest_range_8, 316u, (r1 + 324), r10);
    }
    MemoryInline::WriteResolved32(guest_range_8, 320u, (r1 + 328), r9);
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 252u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_8, 252u, (r1 + 260), r8);
        MemoryInline::WriteResolved32(guest_range_8, 256u, (r1 + 264), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 260u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_8, 260u, (r1 + 268), r6);
        MemoryInline::WriteResolved32(guest_range_8, 264u, (r1 + 272), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 268u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_8, 268u, (r1 + 276), r3);
        MemoryInline::WriteResolved32(guest_range_8, 272u, (r1 + 280), r0);
    }
    r9 = (r31 + 172);
    r20 = MemoryInline::ReadResolved32(guest_range_5, 72u, (r31 + 172));
    r12 = MemoryInline::ReadResolved32(guest_range_7, 72u, (r9 + 4));
    r21 = (r31 + 184);
    r11 = MemoryInline::ReadResolved32(guest_range_7, 76u, (r9 + 8));
    r19 = (r31 + 196);
    MemoryInline::WriteResolved32(guest_range_2, 100u, (r30 + 160), r11);
    r18 = (r31 + 208);
    r17 = (r31 + 220);
    r16 = (r31 + 232);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_2, 88u, (r30 + 148), r30);
        MemoryInline::WriteResolved32(guest_range_2, 92u, (r30 + 152), r20);
    }
    MemoryInline::WriteResolved32(guest_range_2, 96u, (r30 + 156), r12);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 104u, (r30 + 164), r5);
        MemoryInline::WriteResolved32(guest_range_2, 108u, (r30 + 168), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_2, 112u, (r30 + 172), r0);
        MemoryInline::WriteResolved32(guest_range_2, 116u, (r30 + 176), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_2, 120u, (r30 + 180), r7);
        MemoryInline::WriteResolved32(guest_range_2, 124u, (r30 + 184), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r10 = MemoryInline::ReadResolved32(guest_range_4, 0u, r4);
            r9 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r4 + 4));
        }
    }
    r8 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r4 + 8));
    r7 = MemoryInline::ReadResolved32(guest_range_5, 84u, (r31 + 184));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 84u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_7, 84u, (r21 + 4));
            r26 = MemoryInline::ReadResolved32(guest_range_7, 88u, (r21 + 8));
        }
    }
    r25 = MemoryInline::ReadResolved32(guest_range_5, 96u, (r31 + 196));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 96u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_7, 96u, (r19 + 4));
            r23 = MemoryInline::ReadResolved32(guest_range_7, 100u, (r19 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_2, 144u, (r30 + 204), r23);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_2, 132u, (r30 + 192), r30);
        MemoryInline::WriteResolved32(guest_range_2, 136u, (r30 + 196), r25);
    }
    MemoryInline::WriteResolved32(guest_range_2, 140u, (r30 + 200), r24);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 148u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_2, 148u, (r30 + 208), r7);
        MemoryInline::WriteResolved32(guest_range_2, 152u, (r30 + 212), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 156u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_2, 156u, (r30 + 216), r26);
        MemoryInline::WriteResolved32(guest_range_2, 160u, (r30 + 220), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 164u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_2, 164u, (r30 + 224), r9);
        MemoryInline::WriteResolved32(guest_range_2, 168u, (r30 + 228), r8);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_5, 108u, (r31 + 208));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 108u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_7, 108u, (r18 + 4));
            r0 = MemoryInline::ReadResolved32(guest_range_7, 112u, (r18 + 8));
        }
    }
    r19 = MemoryInline::ReadResolved32(guest_range_5, 120u, (r31 + 220));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 120u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_7, 120u, (r17 + 4));
            r21 = MemoryInline::ReadResolved32(guest_range_7, 124u, (r17 + 8));
        }
    }
    r17 = MemoryInline::ReadResolved32(guest_range_7, 132u, (r16 + 4));
    r18 = MemoryInline::ReadResolved32(guest_range_5, 132u, (r31 + 232));
    r16 = MemoryInline::ReadResolved32(guest_range_7, 136u, (r16 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 276u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_8, 276u, (r1 + 284), r20);
        MemoryInline::WriteResolved32(guest_range_8, 280u, (r1 + 288), r12);
    }
    MemoryInline::WriteResolved32(guest_range_8, 284u, (r1 + 292), r11);
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 216u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_8, 216u, (r1 + 224), r10);
        MemoryInline::WriteResolved32(guest_range_8, 220u, (r1 + 228), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 224u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_8, 224u, (r1 + 232), r8);
        MemoryInline::WriteResolved32(guest_range_8, 228u, (r1 + 236), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 232u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_8, 232u, (r1 + 240), r6);
        MemoryInline::WriteResolved32(guest_range_8, 236u, (r1 + 244), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 240u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_8, 240u, (r1 + 248), r25);
        MemoryInline::WriteResolved32(guest_range_8, 244u, (r1 + 252), r24);
    }
    MemoryInline::WriteResolved32(guest_range_8, 248u, (r1 + 256), r23);
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 180u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_8, 180u, (r1 + 188), r5);
        MemoryInline::WriteResolved32(guest_range_8, 184u, (r1 + 192), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 188u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_8, 188u, (r1 + 196), r0);
        MemoryInline::WriteResolved32(guest_range_8, 192u, (r1 + 200), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 196u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_8, 196u, (r1 + 204), r22);
        MemoryInline::WriteResolved32(guest_range_8, 200u, (r1 + 208), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 204u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_8, 204u, (r1 + 212), r18);
        MemoryInline::WriteResolved32(guest_range_8, 208u, (r1 + 216), r17);
    }
    MemoryInline::WriteResolved32(guest_range_8, 212u, (r1 + 220), r16);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 176u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_2, 176u, (r30 + 236), r30);
        MemoryInline::WriteResolved32(guest_range_2, 180u, (r30 + 240), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 184u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r16)))) {
        MemoryInline::WriteResolved32(guest_range_2, 184u, (r30 + 244), r17);
        MemoryInline::WriteResolved32(guest_range_2, 188u, (r30 + 248), r16);
    }
    MemoryInline::WriteResolved32(guest_range_2, 192u, (r30 + 252), r19);
    r6 = (r31 + 244);
    r19 = (r31 + 256);
    r18 = (r31 + 268);
    MemoryInline::WriteResolved32(guest_range_2, 196u, (r30 + 256), r22);
    r17 = (r31 + 280);
    r16 = (r31 + 292);
    r12 = (r31 + 304);
    MemoryInline::WriteResolved32(guest_range_2, 200u, (r30 + 260), r21);
    r11 = (r31 + 316);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 204u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 204u, (r30 + 264), r5);
        MemoryInline::WriteResolved32(guest_range_2, 208u, (r30 + 268), r3);
    }
    MemoryInline::WriteResolved32(guest_range_2, 212u, (r30 + 272), r0);
    r10 = MemoryInline::ReadResolved32(guest_range_5, 144u, (r31 + 244));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 144u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_7, 144u, (r6 + 4));
            r8 = MemoryInline::ReadResolved32(guest_range_7, 148u, (r6 + 8));
        }
    }
    r7 = MemoryInline::ReadResolved32(guest_range_5, 156u, (r31 + 256));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 156u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_7, 156u, (r19 + 4));
            r5 = MemoryInline::ReadResolved32(guest_range_7, 160u, (r19 + 8));
        }
    }
    r3 = MemoryInline::ReadResolved32(guest_range_5, 168u, (r31 + 268));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 168u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_7, 168u, (r18 + 4));
            r26 = MemoryInline::ReadResolved32(guest_range_7, 172u, (r18 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_2, 232u, (r30 + 292), r26);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 220u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 220u, (r30 + 280), r30);
        MemoryInline::WriteResolved32(guest_range_2, 224u, (r30 + 284), r3);
    }
    MemoryInline::WriteResolved32(guest_range_2, 228u, (r30 + 288), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 236u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_2, 236u, (r30 + 296), r7);
        MemoryInline::WriteResolved32(guest_range_2, 240u, (r30 + 300), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 244u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_2, 244u, (r30 + 304), r5);
        MemoryInline::WriteResolved32(guest_range_2, 248u, (r30 + 308), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 252u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_2, 252u, (r30 + 312), r9);
        MemoryInline::WriteResolved32(guest_range_2, 256u, (r30 + 316), r8);
    }
    r25 = MemoryInline::ReadResolved32(guest_range_5, 180u, (r31 + 280));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 180u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_7, 180u, (r17 + 4));
            r23 = MemoryInline::ReadResolved32(guest_range_7, 184u, (r17 + 8));
        }
    }
    r22 = MemoryInline::ReadResolved32(guest_range_5, 192u, (r31 + 292));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 192u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_7, 192u, (r16 + 4));
            r20 = MemoryInline::ReadResolved32(guest_range_7, 196u, (r16 + 8));
        }
    }
    r19 = MemoryInline::ReadResolved32(guest_range_5, 204u, (r31 + 304));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 204u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r16 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_7, 204u, (r12 + 4));
            r16 = MemoryInline::ReadResolved32(guest_range_7, 208u, (r12 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_2, 276u, (r30 + 336), r16);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 264u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_2, 264u, (r30 + 324), r30);
        MemoryInline::WriteResolved32(guest_range_2, 268u, (r30 + 328), r19);
    }
    MemoryInline::WriteResolved32(guest_range_2, 272u, (r30 + 332), r17);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 280u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_2, 280u, (r30 + 340), r22);
        MemoryInline::WriteResolved32(guest_range_2, 284u, (r30 + 344), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 288u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_2, 288u, (r30 + 348), r20);
        MemoryInline::WriteResolved32(guest_range_2, 292u, (r30 + 352), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 296u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_2, 296u, (r30 + 356), r24);
        MemoryInline::WriteResolved32(guest_range_2, 300u, (r30 + 360), r23);
    }
    r12 = MemoryInline::ReadResolved32(guest_range_7, 216u, (r11 + 4));
    r18 = MemoryInline::ReadResolved32(guest_range_5, 216u, (r31 + 316));
    r11 = MemoryInline::ReadResolved32(guest_range_7, 220u, (r11 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_8, 144u, (r1 + 152), r10);
        MemoryInline::WriteResolved32(guest_range_8, 148u, (r1 + 156), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 152u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_8, 152u, (r1 + 160), r8);
        MemoryInline::WriteResolved32(guest_range_8, 156u, (r1 + 164), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 160u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_8, 160u, (r1 + 168), r6);
        MemoryInline::WriteResolved32(guest_range_8, 164u, (r1 + 172), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 168u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_8, 168u, (r1 + 176), r3);
        MemoryInline::WriteResolved32(guest_range_8, 172u, (r1 + 180), r0);
    }
    MemoryInline::WriteResolved32(guest_range_8, 176u, (r1 + 184), r26);
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_8, 108u, (r1 + 116), r25);
        MemoryInline::WriteResolved32(guest_range_8, 112u, (r1 + 120), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_8, 116u, (r1 + 124), r23);
        MemoryInline::WriteResolved32(guest_range_8, 120u, (r1 + 128), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 124u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_8, 124u, (r1 + 132), r21);
        MemoryInline::WriteResolved32(guest_range_8, 128u, (r1 + 136), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_8, 132u, (r1 + 140), r19);
        MemoryInline::WriteResolved32(guest_range_8, 136u, (r1 + 144), r17);
    }
    MemoryInline::WriteResolved32(guest_range_8, 140u, (r1 + 148), r16);
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_8, 72u, (r1 + 80), r18);
        MemoryInline::WriteResolved32(guest_range_8, 76u, (r1 + 84), r12);
    }
    MemoryInline::WriteResolved32(guest_range_8, 80u, (r1 + 88), r11);
    r3 = (r31 + 328);
    r7 = (r31 + 340);
    r20 = MemoryInline::ReadResolved32(guest_range_5, 228u, (r31 + 328));
    r6 = (r31 + 352);
    r21 = MemoryInline::ReadResolved32(guest_range_7, 228u, (r3 + 4));
    r5 = (r31 + 364);
    r22 = MemoryInline::ReadResolved32(guest_range_7, 232u, (r3 + 8));
    r17 = (r31 + 376);
    r23 = MemoryInline::ReadResolved32(guest_range_5, 240u, (r31 + 340));
    r16 = (r31 + 388);
    r24 = MemoryInline::ReadResolved32(guest_range_7, 240u, (r7 + 4));
    r3 = r30;
    r25 = MemoryInline::ReadResolved32(guest_range_7, 244u, (r7 + 8));
    MemoryInline::WriteResolved32(guest_range_2, 320u, (r30 + 380), r25);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 308u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_2, 308u, (r30 + 368), r30);
        MemoryInline::WriteResolved32(guest_range_2, 312u, (r30 + 372), r23);
    }
    MemoryInline::WriteResolved32(guest_range_2, 316u, (r30 + 376), r24);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 324u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_2, 324u, (r30 + 384), r20);
        MemoryInline::WriteResolved32(guest_range_2, 328u, (r30 + 388), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 332u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_2, 332u, (r30 + 392), r22);
        MemoryInline::WriteResolved32(guest_range_2, 336u, (r30 + 396), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 340u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_2, 340u, (r30 + 400), r12);
        MemoryInline::WriteResolved32(guest_range_2, 344u, (r30 + 404), r11);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_4, 0u, r4);
            r27 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r4 + 4));
        }
    }
    r28 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r4 + 8));
    r29 = MemoryInline::ReadResolved32(guest_range_5, 252u, (r31 + 352));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 252u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_7, 252u, (r6 + 4));
            r11 = MemoryInline::ReadResolved32(guest_range_7, 256u, (r6 + 8));
        }
    }
    r10 = MemoryInline::ReadResolved32(guest_range_5, 264u, (r31 + 364));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 264u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_7, 264u, (r5 + 4));
            r8 = MemoryInline::ReadResolved32(guest_range_7, 268u, (r5 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_2, 364u, (r30 + 424), r8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 352u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_2, 352u, (r30 + 412), r30);
        MemoryInline::WriteResolved32(guest_range_2, 356u, (r30 + 416), r10);
    }
    MemoryInline::WriteResolved32(guest_range_2, 360u, (r30 + 420), r9);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 368u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_2, 368u, (r30 + 428), r29);
        MemoryInline::WriteResolved32(guest_range_2, 372u, (r30 + 432), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 376u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_2, 376u, (r30 + 436), r11);
        MemoryInline::WriteResolved32(guest_range_2, 380u, (r30 + 440), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 384u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_2, 384u, (r30 + 444), r27);
        MemoryInline::WriteResolved32(guest_range_2, 388u, (r30 + 448), r28);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_4, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r4 + 4));
        }
    }
    r5 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r4 + 8));
    r4 = MemoryInline::ReadResolved32(guest_range_5, 276u, (r31 + 376));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 276u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_7, 276u, (r17 + 4));
            r19 = MemoryInline::ReadResolved32(guest_range_7, 280u, (r17 + 8));
        }
    }
    r17 = MemoryInline::ReadResolved32(guest_range_7, 288u, (r16 + 4));
    r18 = MemoryInline::ReadResolved32(guest_range_5, 288u, (r31 + 388));
    r16 = MemoryInline::ReadResolved32(guest_range_7, 292u, (r16 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_8, 84u, (r1 + 92), r20);
        MemoryInline::WriteResolved32(guest_range_8, 88u, (r1 + 96), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_8, 92u, (r1 + 100), r22);
        MemoryInline::WriteResolved32(guest_range_8, 96u, (r1 + 104), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_8, 100u, (r1 + 108), r24);
        MemoryInline::WriteResolved32(guest_range_8, 104u, (r1 + 112), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_8, 36u, (r1 + 44), r26);
        MemoryInline::WriteResolved32(guest_range_8, 40u, (r1 + 48), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_8, 44u, (r1 + 52), r28);
        MemoryInline::WriteResolved32(guest_range_8, 48u, (r1 + 56), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_8, 52u, (r1 + 60), r12);
        MemoryInline::WriteResolved32(guest_range_8, 56u, (r1 + 64), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_8, 60u, (r1 + 68), r10);
        MemoryInline::WriteResolved32(guest_range_8, 64u, (r1 + 72), r9);
    }
    MemoryInline::WriteResolved32(guest_range_8, 68u, (r1 + 76), r8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_8, 0u, (r1 + 8), r7);
        MemoryInline::WriteResolved32(guest_range_8, 4u, (r1 + 12), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_8, 8u, (r1 + 16), r5);
        MemoryInline::WriteResolved32(guest_range_8, 12u, (r1 + 20), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_8, 16u, (r1 + 24), r0);
        MemoryInline::WriteResolved32(guest_range_8, 20u, (r1 + 28), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_8, 24u, (r1 + 32), r18);
        MemoryInline::WriteResolved32(guest_range_8, 28u, (r1 + 36), r17);
    }
    MemoryInline::WriteResolved32(guest_range_8, 32u, (r1 + 40), r16);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 396u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_2, 396u, (r30 + 456), r30);
        MemoryInline::WriteResolved32(guest_range_2, 400u, (r30 + 460), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 404u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r16)))) {
        MemoryInline::WriteResolved32(guest_range_2, 404u, (r30 + 464), r17);
        MemoryInline::WriteResolved32(guest_range_2, 408u, (r30 + 468), r16);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 412u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 412u, (r30 + 472), r4);
        MemoryInline::WriteResolved32(guest_range_2, 416u, (r30 + 476), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 420u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_2, 420u, (r30 + 480), r19);
        MemoryInline::WriteResolved32(guest_range_2, 424u, (r30 + 484), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 428u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_2, 428u, (r30 + 488), r6);
        MemoryInline::WriteResolved32(guest_range_2, 432u, (r30 + 492), r5);
    }
    // inline leaf 0x8074AFB4 (6 guest instruction(s))
    r4 = (r3 + 8);
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r3 = 1;
    // end of inlined leaf 0x8074AFB4
    r11 = (r1 + 448);
    r3 = r30;
    // inline leaf 0x800215BC (18 guest instruction(s))
    guest_range_6 = MemoryInline::ResolveRangeHost((r11 + -68), 0, 68u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 0u);
        if (resolved_pair.valid) {
            r15 = resolved_pair.first;
            r16 = resolved_pair.second;
        } else {
            r15 = MemoryInline::ReadResolved32(guest_range_6, 0u, (r11 + -68));
            r16 = MemoryInline::ReadResolved32(guest_range_6, 4u, (r11 + -64));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 8u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_6, 8u, (r11 + -60));
            r18 = MemoryInline::ReadResolved32(guest_range_6, 12u, (r11 + -56));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 16u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_6, 16u, (r11 + -52));
            r20 = MemoryInline::ReadResolved32(guest_range_6, 20u, (r11 + -48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 24u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_6, 24u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_6, 28u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 32u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_6, 32u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_6, 36u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 40u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_6, 40u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_6, 44u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 48u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_6, 48u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_6, 52u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 56u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_6, 56u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_6, 60u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_6, 64u, (r11 + -4));
    // end of inlined leaf 0x800215BC
    r0 = MemoryInline::FlatRead32((r1 + 452));
    ctx->lr = r0;
    r1 = (r1 + 448);
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
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFDF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80735948 func_80735948 preserves=true fpr_mask=0x00000000
