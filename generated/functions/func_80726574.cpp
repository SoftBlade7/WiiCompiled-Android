#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80726574(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;

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
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_80726574;

loc_80726574:
{
    MemoryInline::FlatWriteRam32((r1 + -272), r1);
    r1 = (r1 + -272);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 276), r0);
    r11 = (r1 + 272);
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
    r16 = r4;
    r31 = (r31 + -26392);
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
    r5 = 0x808D0000u;
    r3 = 0x808D0000u;
    r5 = (r5 + -26180);
    r0 = 0;
    r3 = (r3 + -26096);
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 52), 0, 280u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r30 + 52), r5);
    r4 = 0x80240000u;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r30 + 56), r3);
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r30 + 60), r0);
    }
    r4 = (r4 + 28832);
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 12u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r30 + 68), r5);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r30 + 64), r6);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r30 + 72), r5);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r30 + 80), r5);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r30 + 76), r6);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r30 + 84), r5);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r30 + 92), r5);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r30 + 88), r6);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r30 + 96), r5);
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r30 + 100), r3);
    }
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r30 + 104), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r30 + 112), r5);
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r30 + 108), r6);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 64u, (r30 + 116), r5);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r30 + 124), r5);
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r30 + 120), r6);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 76u, (r30 + 128), r5);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 84u, (r30 + 136), r5);
        MemoryInline::WriteResolved32(guest_range_1, 80u, (r30 + 132), r6);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r30 + 140), r5);
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r30 + 144), r3);
    }
    MemoryInline::WriteResolved32(guest_range_1, 96u, (r30 + 148), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r30 + 156), r5);
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r30 + 152), r6);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 108u, (r30 + 160), r5);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 116u, (r30 + 168), r5);
        MemoryInline::WriteResolved32(guest_range_1, 112u, (r30 + 164), r6);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 120u, (r30 + 172), r5);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 124u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 128u, (r30 + 180), r5);
        MemoryInline::WriteResolved32(guest_range_1, 124u, (r30 + 176), r6);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 132u, (r30 + 184), r5);
        MemoryInline::WriteResolved32(guest_range_1, 136u, (r30 + 188), r3);
    }
    r6 = 0x808A0000u;
    r5 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r6 + 9152));
    MemoryInline::WriteResolved32(guest_range_1, 140u, (r30 + 192), r0);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 9156));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 148u, (r30 + 200), r5);
        MemoryInline::WriteResolved32(guest_range_1, 144u, (r30 + 196), r6);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 152u, (r30 + 204), r5);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 156u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 160u, (r30 + 212), r5);
        MemoryInline::WriteResolved32(guest_range_1, 156u, (r30 + 208), r6);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 164u, (r30 + 216), r5);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 168u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 172u, (r30 + 224), r5);
        MemoryInline::WriteResolved32(guest_range_1, 168u, (r30 + 220), r6);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 176u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 176u, (r30 + 228), r5);
        MemoryInline::WriteResolved32(guest_range_1, 180u, (r30 + 232), r3);
    }
    MemoryInline::WriteResolved32(guest_range_1, 184u, (r30 + 236), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r3 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 188u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 192u, (r30 + 244), r3);
        MemoryInline::WriteResolved32(guest_range_1, 188u, (r30 + 240), r5);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 196u, (r30 + 248), r3);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r3 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 200u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 204u, (r30 + 256), r3);
        MemoryInline::WriteResolved32(guest_range_1, 200u, (r30 + 252), r5);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 208u, (r30 + 260), r3);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r3 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 212u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 216u, (r30 + 268), r3);
        MemoryInline::WriteResolved32(guest_range_1, 212u, (r30 + 264), r5);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 220u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r16)))) {
        MemoryInline::WriteResolved32(guest_range_1, 220u, (r30 + 272), r3);
        MemoryInline::WriteResolved32(guest_range_1, 224u, (r30 + 276), r16);
    }
    MemoryInline::WriteResolved32(guest_range_1, 228u, (r30 + 280), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 236u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 240u, (r30 + 292), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 236u, (r30 + 288), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 232u, (r30 + 284), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 248u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 252u, (r30 + 304), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 248u, (r30 + 300), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 244u, (r30 + 296), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 260u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 264u, (r30 + 316), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 260u, (r30 + 312), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 256u, (r30 + 308), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 268u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 268u, (r30 + 320), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 272u, (r30 + 324), f0.d);
    }
    MemoryInline::WriteResolved32(guest_range_1, 276u, (r30 + 328), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r10 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 180u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_5, 144u, (r1 + 152), r11);
        MemoryInline::WriteResolved32(guest_range_5, 148u, (r1 + 156), r10);
    }
    MemoryInline::WriteResolved32(guest_range_5, 152u, (r1 + 160), r0);
    r3 = (r31 + 44);
    r9 = (r31 + 56);
    guest_range_3 = MemoryInline::ResolveRangeHost((r31 + 44), 0, 148u, true, false);
    r16 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r31 + 44));
    r8 = (r31 + 68);
    guest_range_6 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 152u, true, false);
    r17 = MemoryInline::ReadResolved32(guest_range_6, 0u, (r3 + 4));
    r7 = (r31 + 80);
    r18 = MemoryInline::ReadResolved32(guest_range_6, 4u, (r3 + 8));
    r6 = (r31 + 92);
    r19 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r31 + 56));
    r5 = (r31 + 104);
    r20 = MemoryInline::ReadResolved32(guest_range_6, 12u, (r9 + 4));
    r3 = (r31 + 116);
    r21 = MemoryInline::ReadResolved32(guest_range_6, 16u, (r9 + 8));
    r15 = (r31 + 128);
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r30 + 72), r21);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r30 + 60), r30);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r30 + 64), r19);
    }
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r30 + 68), r20);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r30 + 76), r16);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r30 + 80), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r30 + 84), r18);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r30 + 88), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r30 + 92), r10);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r30 + 96), r0);
    }
    r22 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r31 + 68));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 24u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_6, 24u, (r8 + 4));
            r24 = MemoryInline::ReadResolved32(guest_range_6, 28u, (r8 + 8));
        }
    }
    r25 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r31 + 80));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 36u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_6, 36u, (r7 + 4));
            r27 = MemoryInline::ReadResolved32(guest_range_6, 40u, (r7 + 8));
        }
    }
    r28 = MemoryInline::ReadResolved32(guest_range_3, 48u, (r31 + 92));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 48u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_6, 48u, (r6 + 4));
            r12 = MemoryInline::ReadResolved32(guest_range_6, 52u, (r6 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_1, 64u, (r30 + 116), r12);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r30 + 104), r30);
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r30 + 108), r28);
    }
    MemoryInline::WriteResolved32(guest_range_1, 60u, (r30 + 112), r29);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r30 + 120), r25);
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r30 + 124), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r30 + 128), r27);
        MemoryInline::WriteResolved32(guest_range_1, 80u, (r30 + 132), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_1, 84u, (r30 + 136), r23);
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r30 + 140), r24);
    }
    r11 = MemoryInline::ReadResolved32(guest_range_3, 60u, (r31 + 104));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 60u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r10 = MemoryInline::ReadResolved32(guest_range_6, 60u, (r5 + 4));
            r9 = MemoryInline::ReadResolved32(guest_range_6, 64u, (r5 + 8));
        }
    }
    r8 = MemoryInline::ReadResolved32(guest_range_3, 72u, (r31 + 116));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 72u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_6, 72u, (r3 + 4));
            r6 = MemoryInline::ReadResolved32(guest_range_6, 76u, (r3 + 8));
        }
    }
    r3 = MemoryInline::ReadResolved32(guest_range_3, 84u, (r31 + 128));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 84u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_6, 84u, (r15 + 4));
            r0 = MemoryInline::ReadResolved32(guest_range_6, 88u, (r15 + 8));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 156u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_5, 156u, (r1 + 164), r16);
        MemoryInline::WriteResolved32(guest_range_5, 160u, (r1 + 168), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 164u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_5, 164u, (r1 + 172), r18);
        MemoryInline::WriteResolved32(guest_range_5, 168u, (r1 + 176), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 172u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_5, 172u, (r1 + 180), r20);
        MemoryInline::WriteResolved32(guest_range_5, 176u, (r1 + 184), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_5, 108u, (r1 + 116), r22);
        MemoryInline::WriteResolved32(guest_range_5, 112u, (r1 + 120), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_5, 116u, (r1 + 124), r24);
        MemoryInline::WriteResolved32(guest_range_5, 120u, (r1 + 128), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 124u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_5, 124u, (r1 + 132), r26);
        MemoryInline::WriteResolved32(guest_range_5, 128u, (r1 + 136), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_5, 132u, (r1 + 140), r28);
        MemoryInline::WriteResolved32(guest_range_5, 136u, (r1 + 144), r29);
    }
    MemoryInline::WriteResolved32(guest_range_5, 140u, (r1 + 148), r12);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_5, 72u, (r1 + 80), r11);
        MemoryInline::WriteResolved32(guest_range_5, 76u, (r1 + 84), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_5, 80u, (r1 + 88), r9);
        MemoryInline::WriteResolved32(guest_range_5, 84u, (r1 + 92), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_5, 88u, (r1 + 96), r7);
        MemoryInline::WriteResolved32(guest_range_5, 92u, (r1 + 100), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_5, 96u, (r1 + 104), r3);
        MemoryInline::WriteResolved32(guest_range_5, 100u, (r1 + 108), r5);
    }
    MemoryInline::WriteResolved32(guest_range_5, 104u, (r1 + 112), r0);
    MemoryInline::WriteResolved32(guest_range_1, 100u, (r30 + 152), r3);
    r19 = (r31 + 140);
    r18 = (r31 + 152);
    r17 = (r31 + 164);
    MemoryInline::WriteResolved32(guest_range_1, 96u, (r30 + 148), r30);
    r16 = (r31 + 176);
    r12 = (r31 + 188);
    r3 = r30;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r30 + 156), r5);
        MemoryInline::WriteResolved32(guest_range_1, 108u, (r30 + 160), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_1, 112u, (r30 + 164), r8);
        MemoryInline::WriteResolved32(guest_range_1, 116u, (r30 + 168), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_1, 120u, (r30 + 172), r6);
        MemoryInline::WriteResolved32(guest_range_1, 124u, (r30 + 176), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_1, 128u, (r30 + 180), r10);
        MemoryInline::WriteResolved32(guest_range_1, 132u, (r30 + 184), r9);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r25 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    r24 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    r23 = MemoryInline::ReadResolved32(guest_range_3, 96u, (r31 + 140));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 96u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_6, 96u, (r19 + 4));
            r21 = MemoryInline::ReadResolved32(guest_range_6, 100u, (r19 + 8));
        }
    }
    r19 = MemoryInline::ReadResolved32(guest_range_6, 108u, (r18 + 4));
    r20 = MemoryInline::ReadResolved32(guest_range_3, 108u, (r31 + 152));
    r18 = MemoryInline::ReadResolved32(guest_range_6, 112u, (r18 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 152u, (r30 + 204), r18);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_1, 140u, (r30 + 192), r30);
        MemoryInline::WriteResolved32(guest_range_1, 144u, (r30 + 196), r20);
    }
    MemoryInline::WriteResolved32(guest_range_1, 148u, (r30 + 200), r19);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 156u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_1, 156u, (r30 + 208), r23);
        MemoryInline::WriteResolved32(guest_range_1, 160u, (r30 + 212), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 164u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_1, 164u, (r30 + 216), r21);
        MemoryInline::WriteResolved32(guest_range_1, 168u, (r30 + 220), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 172u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_1, 172u, (r30 + 224), r25);
        MemoryInline::WriteResolved32(guest_range_1, 176u, (r30 + 228), r24);
    }
    r11 = MemoryInline::ReadResolved32(guest_range_3, 120u, (r31 + 164));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 120u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r10 = MemoryInline::ReadResolved32(guest_range_6, 120u, (r17 + 4));
            r9 = MemoryInline::ReadResolved32(guest_range_6, 124u, (r17 + 8));
        }
    }
    r8 = MemoryInline::ReadResolved32(guest_range_3, 132u, (r31 + 176));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 132u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_6, 132u, (r16 + 4));
            r6 = MemoryInline::ReadResolved32(guest_range_6, 136u, (r16 + 8));
        }
    }
    r5 = MemoryInline::ReadResolved32(guest_range_3, 144u, (r31 + 188));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 144u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_6, 144u, (r12 + 4));
            r0 = MemoryInline::ReadResolved32(guest_range_6, 148u, (r12 + 8));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_5, 36u, (r1 + 44), r26);
        MemoryInline::WriteResolved32(guest_range_5, 40u, (r1 + 48), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_5, 44u, (r1 + 52), r24);
        MemoryInline::WriteResolved32(guest_range_5, 48u, (r1 + 56), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_5, 52u, (r1 + 60), r22);
        MemoryInline::WriteResolved32(guest_range_5, 56u, (r1 + 64), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_5, 60u, (r1 + 68), r20);
        MemoryInline::WriteResolved32(guest_range_5, 64u, (r1 + 72), r19);
    }
    MemoryInline::WriteResolved32(guest_range_5, 68u, (r1 + 76), r18);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_5, 0u, (r1 + 8), r11);
        MemoryInline::WriteResolved32(guest_range_5, 4u, (r1 + 12), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_5, 8u, (r1 + 16), r9);
        MemoryInline::WriteResolved32(guest_range_5, 12u, (r1 + 20), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_5, 16u, (r1 + 24), r7);
        MemoryInline::WriteResolved32(guest_range_5, 20u, (r1 + 28), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_5, 24u, (r1 + 32), r5);
        MemoryInline::WriteResolved32(guest_range_5, 28u, (r1 + 36), r4);
    }
    MemoryInline::WriteResolved32(guest_range_5, 32u, (r1 + 40), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 184u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 184u, (r30 + 236), r30);
        MemoryInline::WriteResolved32(guest_range_1, 188u, (r30 + 240), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 192u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 192u, (r30 + 244), r4);
        MemoryInline::WriteResolved32(guest_range_1, 196u, (r30 + 248), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 200u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_1, 200u, (r30 + 252), r8);
        MemoryInline::WriteResolved32(guest_range_1, 204u, (r30 + 256), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 208u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_1, 208u, (r30 + 260), r6);
        MemoryInline::WriteResolved32(guest_range_1, 212u, (r30 + 264), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 216u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_1, 216u, (r30 + 268), r10);
        MemoryInline::WriteResolved32(guest_range_1, 220u, (r30 + 272), r9);
    }
    // inline leaf 0x8074AFB4 (6 guest instruction(s))
    r4 = (r3 + 8);
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r3 = 1;
    // end of inlined leaf 0x8074AFB4
    r11 = (r1 + 272);
    r3 = r30;
    // inline leaf 0x800215BC (18 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost((r11 + -68), 0, 68u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r15 = resolved_pair.first;
            r16 = resolved_pair.second;
        } else {
            r15 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r11 + -68));
            r16 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r11 + -64));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r11 + -60));
            r18 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r11 + -56));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r11 + -52));
            r20 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r11 + -48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 24u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 32u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 40u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_4, 44u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 48u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_4, 48u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_4, 52u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 56u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_4, 56u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_4, 60u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_4, 64u, (r11 + -4));
    // end of inlined leaf 0x800215BC
    r0 = MemoryInline::FlatRead32((r1 + 276));
    ctx->lr = r0;
    r1 = (r1 + 272);
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
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFF801A gpr_write=0xFFFF9FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80726574 func_80726574 preserves=true fpr_mask=0x00000000
