#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807333C8(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_807333C8;

loc_807333C8:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -368), 0, 376u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -368), r1);
    r1 = (r1 + -368);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 372u, (r1 + 372), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 304u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_3, 304u, (r1 + 304), r16);
        MemoryInline::WriteResolved32(guest_range_3, 308u, (r1 + 308), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 312u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_3, 312u, (r1 + 312), r18);
        MemoryInline::WriteResolved32(guest_range_3, 316u, (r1 + 316), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 320u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_3, 320u, (r1 + 320), r20);
        MemoryInline::WriteResolved32(guest_range_3, 324u, (r1 + 324), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 328u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_3, 328u, (r1 + 328), r22);
        MemoryInline::WriteResolved32(guest_range_3, 332u, (r1 + 332), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 336u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_3, 336u, (r1 + 336), r24);
        MemoryInline::WriteResolved32(guest_range_3, 340u, (r1 + 340), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 344u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_3, 344u, (r1 + 344), r26);
        MemoryInline::WriteResolved32(guest_range_3, 348u, (r1 + 348), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 352u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_3, 352u, (r1 + 352), r28);
        MemoryInline::WriteResolved32(guest_range_3, 356u, (r1 + 356), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 360u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_3, 360u, (r1 + 360), r30);
        MemoryInline::WriteResolved32(guest_range_3, 364u, (r1 + 364), r31);
    }
    r31 = 0x808D0000u;
    r30 = r3;
    r16 = r4;
    r31 = (r31 + -22416);
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
    r5 = (r5 + -22092);
    r0 = 0;
    r3 = (r3 + -21984);
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 52), 0, 360u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r30 + 52), r5);
    r4 = 0x80240000u;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r30 + 56), r3);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r30 + 60), r0);
    }
    r4 = (r4 + 28832);
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 12u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r30 + 68), r5);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r30 + 64), r6);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r30 + 72), r5);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r30 + 80), r5);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r30 + 76), r6);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r30 + 84), r5);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r30 + 92), r5);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r30 + 88), r6);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r30 + 96), r5);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r30 + 100), r3);
    }
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r30 + 104), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r30 + 112), r5);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r30 + 108), r6);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r30 + 116), r5);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r30 + 124), r5);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r30 + 120), r6);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r30 + 128), r5);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r30 + 136), r5);
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r30 + 132), r6);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r30 + 140), r5);
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r30 + 144), r3);
    }
    MemoryInline::WriteResolved32(guest_range_0, 96u, (r30 + 148), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r30 + 156), r5);
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r30 + 152), r6);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 108u, (r30 + 160), r5);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r30 + 168), r5);
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r30 + 164), r6);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 120u, (r30 + 172), r5);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 124u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 128u, (r30 + 180), r5);
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r30 + 176), r6);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r30 + 184), r5);
        MemoryInline::WriteResolved32(guest_range_0, 136u, (r30 + 188), r3);
    }
    r5 = 0x808B0000u;
    r5 = (r5 + 28224);
    MemoryInline::WriteResolved32(guest_range_0, 140u, (r30 + 192), r0);
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
        MemoryInline::WriteResolved32(guest_range_0, 148u, (r30 + 200), r6);
        MemoryInline::WriteResolved32(guest_range_0, 144u, (r30 + 196), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 152u, (r30 + 204), r6);
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
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 156u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 160u, (r30 + 212), r6);
        MemoryInline::WriteResolved32(guest_range_0, 156u, (r30 + 208), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 164u, (r30 + 216), r6);
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
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 168u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 172u, (r30 + 224), r6);
        MemoryInline::WriteResolved32(guest_range_0, 168u, (r30 + 220), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 176u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 176u, (r30 + 228), r6);
        MemoryInline::WriteResolved32(guest_range_0, 180u, (r30 + 232), r3);
    }
    MemoryInline::WriteResolved32(guest_range_0, 184u, (r30 + 236), r0);
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
        MemoryInline::WriteResolved32(guest_range_0, 192u, (r30 + 244), r6);
        MemoryInline::WriteResolved32(guest_range_0, 188u, (r30 + 240), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 196u, (r30 + 248), r6);
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
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 200u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 204u, (r30 + 256), r6);
        MemoryInline::WriteResolved32(guest_range_0, 200u, (r30 + 252), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 208u, (r30 + 260), r6);
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
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 212u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 216u, (r30 + 268), r6);
        MemoryInline::WriteResolved32(guest_range_0, 212u, (r30 + 264), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 220u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 220u, (r30 + 272), r6);
        MemoryInline::WriteResolved32(guest_range_0, 224u, (r30 + 276), r3);
    }
    MemoryInline::WriteResolved32(guest_range_0, 228u, (r30 + 280), r0);
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
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 232u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 236u, (r30 + 288), r6);
        MemoryInline::WriteResolved32(guest_range_0, 232u, (r30 + 284), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 240u, (r30 + 292), r6);
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
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 244u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 248u, (r30 + 300), r6);
        MemoryInline::WriteResolved32(guest_range_0, 244u, (r30 + 296), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 252u, (r30 + 304), r6);
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
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 256u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 260u, (r30 + 312), r6);
        MemoryInline::WriteResolved32(guest_range_0, 256u, (r30 + 308), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 264u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 264u, (r30 + 316), r6);
        MemoryInline::WriteResolved32(guest_range_0, 268u, (r30 + 320), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 268u, (r30 + 320), r3);
    r6 = (r31 + 12);
    r5 = (r31 + 24);
    MemoryInline::WriteResolved32(guest_range_0, 272u, (r30 + 324), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r7 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 276u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 280u, (r30 + 332), r7);
        MemoryInline::WriteResolved32(guest_range_0, 276u, (r30 + 328), r8);
    }
    r7 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 284u, (r30 + 336), r7);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r7 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 288u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 292u, (r30 + 344), r7);
        MemoryInline::WriteResolved32(guest_range_0, 288u, (r30 + 340), r8);
    }
    r7 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 296u, (r30 + 348), r7);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r7 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 300u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 304u, (r30 + 356), r7);
        MemoryInline::WriteResolved32(guest_range_0, 300u, (r30 + 352), r8);
    }
    r7 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 308u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 308u, (r30 + 360), r7);
        MemoryInline::WriteResolved32(guest_range_0, 312u, (r30 + 364), r3);
    }
    MemoryInline::WriteResolved32(guest_range_0, 316u, (r30 + 368), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 320u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 324u, (r30 + 376), r0);
        MemoryInline::WriteResolved32(guest_range_0, 320u, (r30 + 372), r3);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 328u, (r30 + 380), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 332u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 336u, (r30 + 388), r0);
        MemoryInline::WriteResolved32(guest_range_0, 332u, (r30 + 384), r3);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 340u, (r30 + 392), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 344u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 348u, (r30 + 400), r0);
        MemoryInline::WriteResolved32(guest_range_0, 344u, (r30 + 396), r3);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 352u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r16)))) {
        MemoryInline::WriteResolved32(guest_range_0, 352u, (r30 + 404), r0);
        MemoryInline::WriteResolved32(guest_range_0, 356u, (r30 + 408), r16);
    }
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
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 12), 0, 196u, true, false);
    r9 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r31 + 12));
    guest_range_4 = MemoryInline::ResolveRangeHost((r6 + 4), 0, 200u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r6 + 4));
            r7 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r6 + 8));
        }
    }
    r6 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r31 + 24));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 12u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r5 + 4));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r5 + 8));
        }
    }
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 288u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 252u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_5, 252u, (r1 + 260), r12);
        MemoryInline::WriteResolved32(guest_range_5, 256u, (r1 + 264), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 260u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_5, 260u, (r1 + 268), r10);
        MemoryInline::WriteResolved32(guest_range_5, 264u, (r1 + 272), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 268u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_5, 268u, (r1 + 276), r8);
        MemoryInline::WriteResolved32(guest_range_5, 272u, (r1 + 280), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 276u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_5, 276u, (r1 + 284), r6);
        MemoryInline::WriteResolved32(guest_range_5, 280u, (r1 + 288), r3);
    }
    MemoryInline::WriteResolved32(guest_range_5, 284u, (r1 + 292), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r30 + 60), r30);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r30 + 64), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r30 + 68), r3);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r30 + 72), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r30 + 76), r9);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r30 + 80), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r30 + 84), r7);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r30 + 88), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r30 + 92), r11);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r30 + 96), r10);
    }
    r9 = (r31 + 36);
    r5 = (r31 + 48);
    r16 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r3 = (r31 + 60);
    r17 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
    r8 = (r31 + 72);
    r18 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    r7 = (r31 + 84);
    r19 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r31 + 36));
    r6 = (r31 + 96);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r9 + 4));
            r21 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r9 + 8));
        }
    }
    r22 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r31 + 48));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 36u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r5 + 4));
            r24 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r5 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r30 + 116), r24);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r30 + 104), r30);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r30 + 108), r22);
    }
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r30 + 112), r23);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r30 + 120), r19);
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r30 + 124), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r16)))) {
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r30 + 128), r21);
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r30 + 132), r16);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r30 + 136), r17);
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r30 + 140), r18);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    r28 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r31 + 60));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 48u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_4, 48u, (r3 + 4));
            r12 = MemoryInline::ReadResolved32(guest_range_4, 52u, (r3 + 8));
        }
    }
    r5 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r31 + 72));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 60u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 60u, (r8 + 4));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 64u, (r8 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_0, 108u, (r30 + 160), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r30 + 148), r30);
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r30 + 152), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 104u, (r30 + 156), r3);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r30 + 164), r28);
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r30 + 168), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r30 + 172), r12);
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r30 + 176), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 128u, (r30 + 180), r26);
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r30 + 184), r27);
    }
    r11 = MemoryInline::ReadResolved32(guest_range_2, 72u, (r31 + 84));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 72u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r10 = MemoryInline::ReadResolved32(guest_range_4, 72u, (r7 + 4));
            r9 = MemoryInline::ReadResolved32(guest_range_4, 76u, (r7 + 8));
        }
    }
    r7 = MemoryInline::ReadResolved32(guest_range_4, 84u, (r6 + 4));
    r8 = MemoryInline::ReadResolved32(guest_range_2, 84u, (r31 + 96));
    r6 = MemoryInline::ReadResolved32(guest_range_4, 88u, (r6 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 216u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_5, 216u, (r1 + 224), r16);
        MemoryInline::WriteResolved32(guest_range_5, 220u, (r1 + 228), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 224u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_5, 224u, (r1 + 232), r18);
        MemoryInline::WriteResolved32(guest_range_5, 228u, (r1 + 236), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 232u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_5, 232u, (r1 + 240), r20);
        MemoryInline::WriteResolved32(guest_range_5, 236u, (r1 + 244), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 240u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_5, 240u, (r1 + 248), r22);
        MemoryInline::WriteResolved32(guest_range_5, 244u, (r1 + 252), r23);
    }
    MemoryInline::WriteResolved32(guest_range_5, 248u, (r1 + 256), r24);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 180u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_5, 180u, (r1 + 188), r25);
        MemoryInline::WriteResolved32(guest_range_5, 184u, (r1 + 192), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 188u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_5, 188u, (r1 + 196), r27);
        MemoryInline::WriteResolved32(guest_range_5, 192u, (r1 + 200), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 196u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_5, 196u, (r1 + 204), r29);
        MemoryInline::WriteResolved32(guest_range_5, 200u, (r1 + 208), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 204u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_5, 204u, (r1 + 212), r5);
        MemoryInline::WriteResolved32(guest_range_5, 208u, (r1 + 216), r3);
    }
    MemoryInline::WriteResolved32(guest_range_5, 212u, (r1 + 220), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_5, 144u, (r1 + 152), r11);
        MemoryInline::WriteResolved32(guest_range_5, 148u, (r1 + 156), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 152u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_5, 152u, (r1 + 160), r9);
        MemoryInline::WriteResolved32(guest_range_5, 156u, (r1 + 164), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 160u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_5, 160u, (r1 + 168), r7);
        MemoryInline::WriteResolved32(guest_range_5, 164u, (r1 + 172), r6);
    }
    r12 = (r31 + 108);
    r5 = MemoryInline::ReadResolved32(guest_range_2, 96u, (r31 + 108));
    r3 = MemoryInline::ReadResolved32(guest_range_4, 96u, (r12 + 4));
    r18 = (r31 + 120);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 100u, (r12 + 8));
    r17 = (r31 + 132);
    MemoryInline::WriteResolved32(guest_range_0, 152u, (r30 + 204), r0);
    r16 = (r31 + 144);
    r12 = (r31 + 156);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 140u, (r30 + 192), r30);
        MemoryInline::WriteResolved32(guest_range_0, 144u, (r30 + 196), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r30 + 200), r3);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 156u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 156u, (r30 + 208), r8);
        MemoryInline::WriteResolved32(guest_range_0, 160u, (r30 + 212), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 164u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_0, 164u, (r30 + 216), r6);
        MemoryInline::WriteResolved32(guest_range_0, 168u, (r30 + 220), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 172u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_0, 172u, (r30 + 224), r10);
        MemoryInline::WriteResolved32(guest_range_0, 176u, (r30 + 228), r9);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r27 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    r26 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    r25 = MemoryInline::ReadResolved32(guest_range_2, 108u, (r31 + 120));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 108u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_4, 108u, (r18 + 4));
            r23 = MemoryInline::ReadResolved32(guest_range_4, 112u, (r18 + 8));
        }
    }
    r22 = MemoryInline::ReadResolved32(guest_range_2, 120u, (r31 + 132));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 120u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_4, 120u, (r17 + 4));
            r20 = MemoryInline::ReadResolved32(guest_range_4, 124u, (r17 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_0, 196u, (r30 + 248), r20);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 184u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 184u, (r30 + 236), r30);
        MemoryInline::WriteResolved32(guest_range_0, 188u, (r30 + 240), r22);
    }
    MemoryInline::WriteResolved32(guest_range_0, 192u, (r30 + 244), r21);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 200u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 200u, (r30 + 252), r25);
        MemoryInline::WriteResolved32(guest_range_0, 204u, (r30 + 256), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 208u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 208u, (r30 + 260), r23);
        MemoryInline::WriteResolved32(guest_range_0, 212u, (r30 + 264), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 216u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 216u, (r30 + 268), r27);
        MemoryInline::WriteResolved32(guest_range_0, 220u, (r30 + 272), r26);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r18 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    r17 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    r11 = MemoryInline::ReadResolved32(guest_range_2, 132u, (r31 + 144));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 132u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r10 = MemoryInline::ReadResolved32(guest_range_4, 132u, (r16 + 4));
            r9 = MemoryInline::ReadResolved32(guest_range_4, 136u, (r16 + 8));
        }
    }
    r8 = MemoryInline::ReadResolved32(guest_range_2, 144u, (r31 + 156));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 144u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_4, 144u, (r12 + 4));
            r6 = MemoryInline::ReadResolved32(guest_range_4, 148u, (r12 + 8));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 168u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_5, 168u, (r1 + 176), r5);
        MemoryInline::WriteResolved32(guest_range_5, 172u, (r1 + 180), r3);
    }
    MemoryInline::WriteResolved32(guest_range_5, 176u, (r1 + 184), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_5, 108u, (r1 + 116), r28);
        MemoryInline::WriteResolved32(guest_range_5, 112u, (r1 + 120), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_5, 116u, (r1 + 124), r26);
        MemoryInline::WriteResolved32(guest_range_5, 120u, (r1 + 128), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 124u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_5, 124u, (r1 + 132), r24);
        MemoryInline::WriteResolved32(guest_range_5, 128u, (r1 + 136), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_5, 132u, (r1 + 140), r22);
        MemoryInline::WriteResolved32(guest_range_5, 136u, (r1 + 144), r21);
    }
    MemoryInline::WriteResolved32(guest_range_5, 140u, (r1 + 148), r20);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_5, 72u, (r1 + 80), r19);
        MemoryInline::WriteResolved32(guest_range_5, 76u, (r1 + 84), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_5, 80u, (r1 + 88), r17);
        MemoryInline::WriteResolved32(guest_range_5, 84u, (r1 + 92), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_5, 88u, (r1 + 96), r10);
        MemoryInline::WriteResolved32(guest_range_5, 92u, (r1 + 100), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_5, 96u, (r1 + 104), r8);
        MemoryInline::WriteResolved32(guest_range_5, 100u, (r1 + 108), r7);
    }
    MemoryInline::WriteResolved32(guest_range_5, 104u, (r1 + 112), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 228u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 228u, (r30 + 280), r30);
        MemoryInline::WriteResolved32(guest_range_0, 232u, (r30 + 284), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 236u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 236u, (r30 + 288), r7);
        MemoryInline::WriteResolved32(guest_range_0, 240u, (r30 + 292), r6);
    }
    MemoryInline::WriteResolved32(guest_range_0, 244u, (r30 + 296), r11);
    r8 = (r31 + 168);
    r7 = (r31 + 180);
    r6 = (r31 + 192);
    MemoryInline::WriteResolved32(guest_range_0, 248u, (r30 + 300), r10);
    r5 = (r31 + 204);
    r3 = r30;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 252u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 252u, (r30 + 304), r9);
        MemoryInline::WriteResolved32(guest_range_0, 256u, (r30 + 308), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 260u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 260u, (r30 + 312), r18);
        MemoryInline::WriteResolved32(guest_range_0, 264u, (r30 + 316), r17);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r23 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    r22 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    r21 = MemoryInline::ReadResolved32(guest_range_2, 156u, (r31 + 168));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 156u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_4, 156u, (r8 + 4));
            r19 = MemoryInline::ReadResolved32(guest_range_4, 160u, (r8 + 8));
        }
    }
    r18 = MemoryInline::ReadResolved32(guest_range_2, 168u, (r31 + 180));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 168u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r16 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_4, 168u, (r7 + 4));
            r16 = MemoryInline::ReadResolved32(guest_range_4, 172u, (r7 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_0, 284u, (r30 + 336), r16);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 272u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_0, 272u, (r30 + 324), r30);
        MemoryInline::WriteResolved32(guest_range_0, 276u, (r30 + 328), r18);
    }
    MemoryInline::WriteResolved32(guest_range_0, 280u, (r30 + 332), r17);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 288u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 288u, (r30 + 340), r21);
        MemoryInline::WriteResolved32(guest_range_0, 292u, (r30 + 344), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 296u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 296u, (r30 + 348), r19);
        MemoryInline::WriteResolved32(guest_range_0, 300u, (r30 + 352), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 304u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 304u, (r30 + 356), r23);
        MemoryInline::WriteResolved32(guest_range_0, 308u, (r30 + 360), r22);
    }
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
    r9 = MemoryInline::ReadResolved32(guest_range_2, 180u, (r31 + 192));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 180u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_4, 180u, (r6 + 4));
            r7 = MemoryInline::ReadResolved32(guest_range_4, 184u, (r6 + 8));
        }
    }
    r6 = MemoryInline::ReadResolved32(guest_range_2, 192u, (r31 + 204));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 192u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_4, 192u, (r5 + 4));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 196u, (r5 + 8));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_5, 36u, (r1 + 44), r24);
        MemoryInline::WriteResolved32(guest_range_5, 40u, (r1 + 48), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_5, 44u, (r1 + 52), r22);
        MemoryInline::WriteResolved32(guest_range_5, 48u, (r1 + 56), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_5, 52u, (r1 + 60), r20);
        MemoryInline::WriteResolved32(guest_range_5, 56u, (r1 + 64), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_5, 60u, (r1 + 68), r18);
        MemoryInline::WriteResolved32(guest_range_5, 64u, (r1 + 72), r17);
    }
    MemoryInline::WriteResolved32(guest_range_5, 68u, (r1 + 76), r16);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_5, 0u, (r1 + 8), r12);
        MemoryInline::WriteResolved32(guest_range_5, 4u, (r1 + 12), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_5, 8u, (r1 + 16), r10);
        MemoryInline::WriteResolved32(guest_range_5, 12u, (r1 + 20), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_5, 16u, (r1 + 24), r8);
        MemoryInline::WriteResolved32(guest_range_5, 20u, (r1 + 28), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_5, 24u, (r1 + 32), r6);
        MemoryInline::WriteResolved32(guest_range_5, 28u, (r1 + 36), r4);
    }
    MemoryInline::WriteResolved32(guest_range_5, 32u, (r1 + 40), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 316u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 316u, (r30 + 368), r30);
        MemoryInline::WriteResolved32(guest_range_0, 320u, (r30 + 372), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 324u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 324u, (r30 + 376), r4);
        MemoryInline::WriteResolved32(guest_range_0, 328u, (r30 + 380), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 332u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 332u, (r30 + 384), r9);
        MemoryInline::WriteResolved32(guest_range_0, 336u, (r30 + 388), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 340u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_0, 340u, (r30 + 392), r7);
        MemoryInline::WriteResolved32(guest_range_0, 344u, (r30 + 396), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 348u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_0, 348u, (r30 + 400), r11);
        MemoryInline::WriteResolved32(guest_range_0, 352u, (r30 + 404), r10);
    }
    // inline leaf 0x8074AFB4 (6 guest instruction(s))
    r4 = (r3 + 8);
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r3 = 1;
    // end of inlined leaf 0x8074AFB4
    r3 = r30;
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 304), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 0u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_6, 0u, (r1 + 304));
            r17 = MemoryInline::ReadResolved32(guest_range_6, 4u, (r1 + 308));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 8u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_6, 8u, (r1 + 312));
            r19 = MemoryInline::ReadResolved32(guest_range_6, 12u, (r1 + 316));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 16u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_6, 16u, (r1 + 320));
            r21 = MemoryInline::ReadResolved32(guest_range_6, 20u, (r1 + 324));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 24u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_6, 24u, (r1 + 328));
            r23 = MemoryInline::ReadResolved32(guest_range_6, 28u, (r1 + 332));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 32u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_6, 32u, (r1 + 336));
            r25 = MemoryInline::ReadResolved32(guest_range_6, 36u, (r1 + 340));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 40u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_6, 40u, (r1 + 344));
            r27 = MemoryInline::ReadResolved32(guest_range_6, 44u, (r1 + 348));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 48u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_6, 48u, (r1 + 352));
            r29 = MemoryInline::ReadResolved32(guest_range_6, 52u, (r1 + 356));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 56u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_6, 56u, (r1 + 360));
            r31 = MemoryInline::ReadResolved32(guest_range_6, 60u, (r1 + 364));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_6, 68u, (r1 + 372));
    ctx->lr = r0;
    r1 = (r1 + 368);
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

// RECOMP_GUEST_ABI gpr_read=0xFFFF001A gpr_write=0xFFFF1FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807333C8 func_807333C8 preserves=true fpr_mask=0x00000000
