#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806426F8(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_806426F8;

loc_806426F8:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -176), 0, 184u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 180u, (r1 + 180), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r15)) << 32) | static_cast<uint32_t>(r16)))) {
        MemoryInline::WriteResolved32(guest_range_1, 108u, (r1 + 108), r15);
        MemoryInline::WriteResolved32(guest_range_1, 112u, (r1 + 112), r16);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_1, 116u, (r1 + 116), r17);
        MemoryInline::WriteResolved32(guest_range_1, 120u, (r1 + 120), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 124u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_1, 124u, (r1 + 124), r19);
        MemoryInline::WriteResolved32(guest_range_1, 128u, (r1 + 128), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_1, 132u, (r1 + 132), r21);
        MemoryInline::WriteResolved32(guest_range_1, 136u, (r1 + 136), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_1, 140u, (r1 + 140), r23);
        MemoryInline::WriteResolved32(guest_range_1, 144u, (r1 + 144), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 148u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_1, 148u, (r1 + 148), r25);
        MemoryInline::WriteResolved32(guest_range_1, 152u, (r1 + 152), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 156u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 156u, (r1 + 156), r27);
        MemoryInline::WriteResolved32(guest_range_1, 160u, (r1 + 160), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 164u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 164u, (r1 + 164), r29);
        MemoryInline::WriteResolved32(guest_range_1, 168u, (r1 + 168), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 172u, (r1 + 172), r31);
    r31 = 0x808C0000u;
    r30 = r3;
    r31 = (r31 + -3960);
    ctx->lr = 0x80642718u;
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
    r4 = 0x808C0000u;
    r3 = (r30 + 372);
    r4 = (r4 + -3268);
    MemoryInline::FlatWrite32(r30, r4);
    ctx->lr = 0x8064272Cu;
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
    r3 = (r31 + 524);
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 524), 0, 84u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r31 + 524));
            r22 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r3 + 4));
        }
    }
    r24 = 0x808C0000u;
    r23 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r3 + 8));
    r24 = (r24 + -3184);
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 660u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 520u, (r30 + 520), r23);
    r20 = 0x808C0000u;
    r7 = (r31 + 536);
    r6 = (r31 + 548);
    MemoryInline::WriteResolved32(guest_range_0, 504u, (r30 + 504), r24);
    r5 = (r31 + 560);
    r4 = (r31 + 572);
    r15 = (r31 + 584);
    MemoryInline::WriteResolved32(guest_range_0, 508u, (r30 + 508), r30);
    r17 = (r31 + 596);
    r20 = (r20 + -3352);
    r18 = 1;
    MemoryInline::WriteResolved32(guest_range_0, 512u, (r30 + 512), r21);
    r19 = 0;
    r3 = r30;
    MemoryInline::WriteResolved32(guest_range_0, 516u, (r30 + 516), r22);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 12u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r31 + 536));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r7 + 4));
        }
    }
    r27 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r7 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 540u, (r30 + 540), r27);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 524u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 524u, (r30 + 524), r24);
        MemoryInline::WriteResolved32(guest_range_0, 528u, (r30 + 528), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 532u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 532u, (r30 + 532), r25);
        MemoryInline::WriteResolved32(guest_range_0, 536u, (r30 + 536), r26);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r31 + 548));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r6 + 4));
        }
    }
    r12 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r6 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 560u, (r30 + 560), r12);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 544u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 544u, (r30 + 544), r24);
        MemoryInline::WriteResolved32(guest_range_0, 548u, (r30 + 548), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 552u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 552u, (r30 + 552), r28);
        MemoryInline::WriteResolved32(guest_range_0, 556u, (r30 + 556), r29);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 36u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r31 + 560));
            r10 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r5 + 4));
        }
    }
    r9 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r5 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 580u, (r30 + 580), r9);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 564u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 564u, (r30 + 564), r24);
        MemoryInline::WriteResolved32(guest_range_0, 568u, (r30 + 568), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 572u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_0, 572u, (r30 + 572), r11);
        MemoryInline::WriteResolved32(guest_range_0, 576u, (r30 + 576), r10);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 48u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r31 + 572));
            r7 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r4 + 4));
        }
    }
    r6 = MemoryInline::ReadResolved32(guest_range_2, 56u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 600u, (r30 + 600), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 584u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 584u, (r30 + 584), r24);
        MemoryInline::WriteResolved32(guest_range_0, 588u, (r30 + 588), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 592u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 592u, (r30 + 592), r8);
        MemoryInline::WriteResolved32(guest_range_0, 596u, (r30 + 596), r7);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 60u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r31 + 584));
            r4 = MemoryInline::ReadResolved32(guest_range_2, 64u, (r15 + 4));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 68u, (r15 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 620u, (r30 + 620), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 604u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 604u, (r30 + 604), r24);
        MemoryInline::WriteResolved32(guest_range_0, 608u, (r30 + 608), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 612u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 612u, (r30 + 612), r5);
        MemoryInline::WriteResolved32(guest_range_0, 616u, (r30 + 616), r4);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 72u);
        if (resolved_pair.valid) {
            r15 = resolved_pair.first;
            r16 = resolved_pair.second;
        } else {
            r15 = MemoryInline::ReadResolved32(guest_range_2, 72u, (r31 + 596));
            r16 = MemoryInline::ReadResolved32(guest_range_2, 76u, (r17 + 4));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 80u, (r17 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 640u, (r30 + 640), r31);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 624u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 624u, (r30 + 624), r24);
        MemoryInline::WriteResolved32(guest_range_0, 628u, (r30 + 628), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 632u, ((static_cast<uint64_t>(static_cast<uint32_t>(r15)) << 32) | static_cast<uint32_t>(r16)))) {
        MemoryInline::WriteResolved32(guest_range_0, 632u, (r30 + 632), r15);
        MemoryInline::WriteResolved32(guest_range_0, 636u, (r30 + 636), r16);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 648u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 648u, (r30 + 648), r18);
        MemoryInline::WriteResolved32(guest_range_0, 652u, (r30 + 652), r19);
    }
    MemoryInline::WriteResolved32(guest_range_0, 656u, (r30 + 656), r18);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r30, r20);
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 84u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + 8), r21);
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r1 + 12), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r1 + 16), r23);
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r1 + 20), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r1 + 24), r26);
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r1 + 28), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r1 + 32), r28);
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r1 + 36), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r15)) << 32) | static_cast<uint32_t>(r16)))) {
        MemoryInline::WriteResolved32(guest_range_3, 72u, (r1 + 80), r15);
        MemoryInline::WriteResolved32(guest_range_3, 76u, (r1 + 84), r16);
    }
    MemoryInline::WriteResolved32(guest_range_3, 80u, (r1 + 88), r31);
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 108), 0, 76u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r15 = resolved_pair.first;
            r16 = resolved_pair.second;
        } else {
            r15 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r1 + 108));
            r16 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r1 + 112));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r1 + 116));
            r18 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r1 + 120));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r1 + 124));
            r20 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r1 + 128));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 24u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r1 + 132));
            r22 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r1 + 136));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 32u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r1 + 140));
            r24 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r1 + 144));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 40u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r1 + 148));
            r26 = MemoryInline::ReadResolved32(guest_range_4, 44u, (r1 + 152));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 48u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_4, 48u, (r1 + 156));
            r28 = MemoryInline::ReadResolved32(guest_range_4, 52u, (r1 + 160));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 56u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_4, 56u, (r1 + 164));
            r30 = MemoryInline::ReadResolved32(guest_range_4, 60u, (r1 + 168));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_4, 64u, (r1 + 172));
    MemoryInline::WriteResolved32(guest_range_3, 68u, (r1 + 76), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 72u, (r1 + 180));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r1 + 40), r12);
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r1 + 44), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r1 + 48), r10);
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r1 + 52), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_3, 48u, (r1 + 56), r8);
        MemoryInline::WriteResolved32(guest_range_3, 52u, (r1 + 60), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_3, 56u, (r1 + 64), r6);
        MemoryInline::WriteResolved32(guest_range_3, 60u, (r1 + 68), r5);
    }
    MemoryInline::WriteResolved32(guest_range_3, 64u, (r1 + 72), r4);
    ctx->lr = r0;
    r1 = (r1 + 176);
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFF800E gpr_write=0xFFFF9FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806426F8 func_806426F8 preserves=true fpr_mask=0x00000000
