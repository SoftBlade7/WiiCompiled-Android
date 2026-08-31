#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80729350(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

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
    uint32_t r14 = ctx->gpr[14];
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

    goto loc_80729350;

loc_80729350:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -192), 0, 200u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 196u, (r1 + 196), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_2, 120u, (r1 + 120), r14);
        MemoryInline::WriteResolved32(guest_range_2, 124u, (r1 + 124), r15);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_2, 128u, (r1 + 128), r16);
        MemoryInline::WriteResolved32(guest_range_2, 132u, (r1 + 132), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 136u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_2, 136u, (r1 + 136), r18);
        MemoryInline::WriteResolved32(guest_range_2, 140u, (r1 + 140), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_2, 144u, (r1 + 144), r20);
        MemoryInline::WriteResolved32(guest_range_2, 148u, (r1 + 148), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 152u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_2, 152u, (r1 + 152), r22);
        MemoryInline::WriteResolved32(guest_range_2, 156u, (r1 + 156), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 160u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_2, 160u, (r1 + 160), r24);
        MemoryInline::WriteResolved32(guest_range_2, 164u, (r1 + 164), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 168u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_2, 168u, (r1 + 168), r26);
        MemoryInline::WriteResolved32(guest_range_2, 172u, (r1 + 172), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 176u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 176u, (r1 + 176), r28);
        MemoryInline::WriteResolved32(guest_range_2, 180u, (r1 + 180), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 184u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 184u, (r1 + 184), r30);
        MemoryInline::WriteResolved32(guest_range_2, 188u, (r1 + 188), r31);
    }
    r31 = 0x808D0000u;
    r30 = r3;
    r15 = r4;
    r31 = (r31 + -25592);
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
    r6 = 0x808D0000u;
    r3 = (r3 + -25480);
    r0 = 0;
    r6 = (r6 + -25424);
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 52), 0, 152u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r30 + 52), r3);
    r4 = 0x80240000u;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r30 + 56), r6);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r30 + 60), r0);
    }
    r4 = (r4 + 28832);
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 12u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r3 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r30 + 68), r3);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r30 + 64), r5);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r30 + 72), r3);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r3 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r30 + 80), r3);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r30 + 76), r5);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r30 + 84), r3);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r3 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r30 + 92), r3);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r30 + 88), r5);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r30 + 96), r3);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r30 + 100), r6);
    }
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r30 + 104), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r3 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r30 + 112), r3);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r30 + 108), r5);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r30 + 116), r3);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r3 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r30 + 124), r3);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r30 + 120), r5);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r30 + 128), r3);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r3 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r30 + 136), r3);
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r30 + 132), r5);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r30 + 140), r3);
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r30 + 144), r6);
    }
    MemoryInline::WriteResolved32(guest_range_0, 96u, (r30 + 148), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r3 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r30 + 156), r3);
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r30 + 152), r5);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 108u, (r30 + 160), r3);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r3 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r30 + 168), r3);
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r30 + 164), r5);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 120u, (r30 + 172), r3);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r3 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 124u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 128u, (r30 + 180), r3);
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r30 + 176), r5);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 132u, (r30 + 184), r3);
    MemoryInline::WriteResolved8(guest_range_0, 136u, (r30 + 188), static_cast<uint8_t>(r0));
    r8 = (r31 + 36);
    r7 = (r31 + 48);
    r6 = (r31 + 60);
    MemoryInline::WriteResolved32(guest_range_0, 140u, (r30 + 192), r0);
    r5 = (r31 + 72);
    r14 = (r31 + 84);
    r16 = (r31 + 96);
    MemoryInline::WriteResolved32(guest_range_0, 144u, (r30 + 196), r15);
    r3 = r30;
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r30 + 200), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r18 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    r19 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    guest_range_3 = MemoryInline::ResolveRangeHost((r31 + 36), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r31 + 36));
            r21 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r8 + 4));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r8 + 8));
            r23 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r31 + 48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r7 + 4));
            r25 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r7 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r30 + 72), r25);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r30 + 60), r30);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r30 + 64), r23);
    }
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r30 + 68), r24);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r30 + 76), r20);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r30 + 80), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r30 + 84), r22);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r30 + 88), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r30 + 92), r18);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r30 + 96), r19);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r27 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    r28 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r31 + 60));
            r12 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r6 + 4));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 32u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r6 + 8));
            r10 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r31 + 72));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 40u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_3, 40u, (r5 + 4));
            r8 = MemoryInline::ReadResolved32(guest_range_3, 44u, (r5 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r30 + 116), r8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r30 + 104), r30);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r30 + 108), r10);
    }
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r30 + 112), r9);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r30 + 120), r29);
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r30 + 124), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r30 + 128), r11);
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r30 + 132), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r30 + 136), r27);
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r30 + 140), r28);
    }
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
    r5 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 48u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_3, 48u, (r31 + 84));
            r0 = MemoryInline::ReadResolved32(guest_range_3, 52u, (r14 + 4));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 56u);
        if (resolved_pair.valid) {
            r15 = resolved_pair.first;
            r14 = resolved_pair.second;
        } else {
            r15 = MemoryInline::ReadResolved32(guest_range_3, 56u, (r14 + 8));
            r14 = MemoryInline::ReadResolved32(guest_range_3, 60u, (r31 + 96));
        }
    }
    r31 = (r31 + 96);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 64u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_3, 64u, (r16 + 4));
            r31 = MemoryInline::ReadResolved32(guest_range_3, 68u, (r31 + 8));
        }
    }
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 108u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_4, 72u, (r1 + 80), r17);
        MemoryInline::WriteResolved32(guest_range_4, 76u, (r1 + 84), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_4, 80u, (r1 + 88), r19);
        MemoryInline::WriteResolved32(guest_range_4, 84u, (r1 + 92), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_4, 88u, (r1 + 96), r21);
        MemoryInline::WriteResolved32(guest_range_4, 92u, (r1 + 100), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_4, 96u, (r1 + 104), r23);
        MemoryInline::WriteResolved32(guest_range_4, 100u, (r1 + 108), r24);
    }
    MemoryInline::WriteResolved32(guest_range_4, 104u, (r1 + 112), r25);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_4, 36u, (r1 + 44), r26);
        MemoryInline::WriteResolved32(guest_range_4, 40u, (r1 + 48), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_4, 44u, (r1 + 52), r28);
        MemoryInline::WriteResolved32(guest_range_4, 48u, (r1 + 56), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_4, 52u, (r1 + 60), r12);
        MemoryInline::WriteResolved32(guest_range_4, 56u, (r1 + 64), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_4, 60u, (r1 + 68), r10);
        MemoryInline::WriteResolved32(guest_range_4, 64u, (r1 + 72), r9);
    }
    MemoryInline::WriteResolved32(guest_range_4, 68u, (r1 + 76), r8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + 8), r7);
        MemoryInline::WriteResolved32(guest_range_4, 4u, (r1 + 12), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_4, 8u, (r1 + 16), r5);
        MemoryInline::WriteResolved32(guest_range_4, 12u, (r1 + 20), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_4, 16u, (r1 + 24), r0);
        MemoryInline::WriteResolved32(guest_range_4, 20u, (r1 + 28), r15);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r16)))) {
        MemoryInline::WriteResolved32(guest_range_4, 24u, (r1 + 32), r14);
        MemoryInline::WriteResolved32(guest_range_4, 28u, (r1 + 36), r16);
    }
    MemoryInline::WriteResolved32(guest_range_4, 32u, (r1 + 40), r31);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r14)))) {
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r30 + 148), r30);
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r30 + 152), r14);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r30 + 156), r16);
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r30 + 160), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r30 + 164), r4);
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r30 + 168), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r15)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r30 + 172), r15);
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r30 + 176), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 128u, (r30 + 180), r6);
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r30 + 184), r5);
    }
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 120), 0, 80u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r1 + 120));
            r15 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r1 + 124));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r1 + 128));
            r17 = MemoryInline::ReadResolved32(guest_range_5, 12u, (r1 + 132));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_5, 16u, (r1 + 136));
            r19 = MemoryInline::ReadResolved32(guest_range_5, 20u, (r1 + 140));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_5, 24u, (r1 + 144));
            r21 = MemoryInline::ReadResolved32(guest_range_5, 28u, (r1 + 148));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_5, 32u, (r1 + 152));
            r23 = MemoryInline::ReadResolved32(guest_range_5, 36u, (r1 + 156));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_5, 40u, (r1 + 160));
            r25 = MemoryInline::ReadResolved32(guest_range_5, 44u, (r1 + 164));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_5, 48u, (r1 + 168));
            r27 = MemoryInline::ReadResolved32(guest_range_5, 52u, (r1 + 172));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_5, 56u, (r1 + 176));
            r29 = MemoryInline::ReadResolved32(guest_range_5, 60u, (r1 + 180));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_5, 64u, (r1 + 184));
            r31 = MemoryInline::ReadResolved32(guest_range_5, 68u, (r1 + 188));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_5, 76u, (r1 + 196));
    ctx->lr = r0;
    r1 = (r1 + 192);
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
    ctx->gpr[14] = r14;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFC01A gpr_write=0xFFFFDFFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80729350 func_80729350 preserves=true fpr_mask=0x00000000
