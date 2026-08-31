#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80605724(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

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

    goto loc_80605724;

loc_80605724:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -144), 0, 152u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 148u, (r1 + 148), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r1 + 88), r18);
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r1 + 92), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_1, 96u, (r1 + 96), r20);
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r1 + 100), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r1 + 104), r22);
        MemoryInline::WriteResolved32(guest_range_1, 108u, (r1 + 108), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_1, 112u, (r1 + 112), r24);
        MemoryInline::WriteResolved32(guest_range_1, 116u, (r1 + 116), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 120u, (r1 + 120), r26);
        MemoryInline::WriteResolved32(guest_range_1, 124u, (r1 + 124), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 128u, (r1 + 128), r28);
        MemoryInline::WriteResolved32(guest_range_1, 132u, (r1 + 132), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 136u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 136u, (r1 + 136), r30);
        MemoryInline::WriteResolved32(guest_range_1, 140u, (r1 + 140), r31);
    }
    r31 = 0x808C0000u;
    r30 = r3;
    r31 = (r31 + -22264);
    ctx->lr = 0x80605744u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x8063D798u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r3 = 0x808C0000u;
    r8 = 0x808C0000u;
    r3 = (r3 + -22048);
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 528u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r30, r3);
    r3 = (r31 + 44);
    r8 = (r8 + -21920);
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 44), 0, 72u, true, false);
    r11 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r31 + 44));
    r4 = (r31 + 56);
    r10 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r3 + 4));
    r18 = (r31 + 68);
    r9 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r3 + 8));
    r21 = (r31 + 80);
    MemoryInline::WriteResolved32(guest_range_0, 388u, (r30 + 388), r9);
    r24 = (r31 + 92);
    r27 = (r31 + 104);
    r28 = 1;
    MemoryInline::WriteResolved32(guest_range_0, 372u, (r30 + 372), r8);
    r29 = 0;
    r12 = -1;
    r3 = (r30 + 528);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 376u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_0, 376u, (r30 + 376), r30);
        MemoryInline::WriteResolved32(guest_range_0, 380u, (r30 + 380), r11);
    }
    MemoryInline::WriteResolved32(guest_range_0, 384u, (r30 + 384), r10);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 12u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r31 + 56));
            r6 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r4 + 4));
        }
    }
    r5 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 408u, (r30 + 408), r5);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 392u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 392u, (r30 + 392), r8);
        MemoryInline::WriteResolved32(guest_range_0, 396u, (r30 + 396), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 400u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 400u, (r30 + 400), r7);
        MemoryInline::WriteResolved32(guest_range_0, 404u, (r30 + 404), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r4 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r18 + 4));
            r4 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r31 + 68));
        }
    }
    r18 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r18 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 428u, (r30 + 428), r18);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 412u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 412u, (r30 + 412), r8);
        MemoryInline::WriteResolved32(guest_range_0, 416u, (r30 + 416), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 420u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 420u, (r30 + 420), r4);
        MemoryInline::WriteResolved32(guest_range_0, 424u, (r30 + 424), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 36u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.second;
            r19 = resolved_pair.first;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r21 + 4));
            r19 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r31 + 80));
        }
    }
    r21 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r21 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 448u, (r30 + 448), r21);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 432u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 432u, (r30 + 432), r8);
        MemoryInline::WriteResolved32(guest_range_0, 436u, (r30 + 436), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 440u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 440u, (r30 + 440), r19);
        MemoryInline::WriteResolved32(guest_range_0, 444u, (r30 + 444), r20);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 48u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.second;
            r22 = resolved_pair.first;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r24 + 4));
            r22 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r31 + 92));
        }
    }
    r24 = MemoryInline::ReadResolved32(guest_range_2, 56u, (r24 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 468u, (r30 + 468), r24);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 452u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 452u, (r30 + 452), r8);
        MemoryInline::WriteResolved32(guest_range_0, 456u, (r30 + 456), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 460u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 460u, (r30 + 460), r22);
        MemoryInline::WriteResolved32(guest_range_0, 464u, (r30 + 464), r23);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 60u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r31 + 104));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 64u, (r27 + 4));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 68u, (r27 + 8));
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 72u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_3, 60u, (r1 + 68), r11);
        MemoryInline::WriteResolved32(guest_range_3, 64u, (r1 + 72), r10);
    }
    MemoryInline::WriteResolved32(guest_range_3, 68u, (r1 + 76), r9);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_3, 48u, (r1 + 56), r7);
        MemoryInline::WriteResolved32(guest_range_3, 52u, (r1 + 60), r6);
    }
    MemoryInline::WriteResolved32(guest_range_3, 56u, (r1 + 64), r5);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r1 + 44), r4);
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r1 + 48), r0);
    }
    MemoryInline::WriteResolved32(guest_range_3, 44u, (r1 + 52), r18);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r1 + 32), r19);
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r1 + 36), r20);
    }
    MemoryInline::WriteResolved32(guest_range_3, 32u, (r1 + 40), r21);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r1 + 20), r22);
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r1 + 24), r23);
    }
    MemoryInline::WriteResolved32(guest_range_3, 20u, (r1 + 28), r24);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + 8), r25);
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r1 + 12), r26);
    }
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r1 + 16), r31);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 472u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 472u, (r30 + 472), r8);
        MemoryInline::WriteResolved32(guest_range_0, 476u, (r30 + 476), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 480u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 480u, (r30 + 480), r25);
        MemoryInline::WriteResolved32(guest_range_0, 484u, (r30 + 484), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 488u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 488u, (r30 + 488), r31);
        MemoryInline::WriteResolved32(guest_range_0, 492u, (r30 + 492), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 496u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 496u, (r30 + 496), r29);
        MemoryInline::WriteResolved32(guest_range_0, 500u, (r30 + 500), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 504u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 504u, (r30 + 504), r29);
        MemoryInline::WriteResolved32(guest_range_0, 508u, (r30 + 508), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 512u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_0, 512u, (r30 + 512), r29);
        MemoryInline::WriteResolved32(guest_range_0, 516u, (r30 + 516), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 520u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 520u, (r30 + 520), r12);
        MemoryInline::WriteResolved32(guest_range_0, 524u, (r30 + 524), r29);
    }
    ctx->lr = 0x806058B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x805EFAF8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    r3 = r30;
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 88), 0, 64u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r1 + 88));
            r19 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r1 + 92));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r1 + 96));
            r21 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r1 + 100));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r1 + 104));
            r23 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r1 + 108));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 24u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r1 + 112));
            r25 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r1 + 116));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 32u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r1 + 120));
            r27 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r1 + 124));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 40u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r1 + 128));
            r29 = MemoryInline::ReadResolved32(guest_range_4, 44u, (r1 + 132));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 48u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_4, 48u, (r1 + 136));
            r31 = MemoryInline::ReadResolved32(guest_range_4, 52u, (r1 + 140));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 60u, (r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
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

// RECOMP_GUEST_ABI gpr_read=0xFFFC000E gpr_write=0xFFFC1FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80605724 func_80605724 preserves=true fpr_mask=0x00000000
