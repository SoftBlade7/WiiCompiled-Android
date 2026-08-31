#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8064146C(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_8064146C;

loc_8064146C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -160), 0, 168u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 164u, (r1 + 164), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_1, 96u, (r1 + 96), r16);
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r1 + 100), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r1 + 104), r18);
        MemoryInline::WriteResolved32(guest_range_1, 108u, (r1 + 108), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_1, 112u, (r1 + 112), r20);
        MemoryInline::WriteResolved32(guest_range_1, 116u, (r1 + 116), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_1, 120u, (r1 + 120), r22);
        MemoryInline::WriteResolved32(guest_range_1, 124u, (r1 + 124), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_1, 128u, (r1 + 128), r24);
        MemoryInline::WriteResolved32(guest_range_1, 132u, (r1 + 132), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 136u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 136u, (r1 + 136), r26);
        MemoryInline::WriteResolved32(guest_range_1, 140u, (r1 + 140), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 144u, (r1 + 144), r28);
        MemoryInline::WriteResolved32(guest_range_1, 148u, (r1 + 148), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 152u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 152u, (r1 + 152), r30);
        MemoryInline::WriteResolved32(guest_range_1, 156u, (r1 + 156), r31);
    }
    r31 = 0x808C0000u;
    r30 = r3;
    r31 = (r31 + -3960);
    ctx->lr = 0x8064148Cu;
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
    ctx->lr = 0x806414A0u;
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
    r3 = (r31 + 332);
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 332), 0, 84u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r31 + 332));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r3 + 4));
        }
    }
    r25 = 0x808C0000u;
    r24 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r3 + 8));
    r25 = (r25 + -3184);
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 504), 0, 156u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r30 + 520), r24);
    r7 = (r31 + 344);
    r6 = (r31 + 356);
    r5 = (r31 + 368);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r30 + 504), r25);
    r4 = (r31 + 380);
    r16 = (r31 + 392);
    r19 = (r31 + 404);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r30 + 508), r30);
    r20 = 1;
    r21 = 0;
    r3 = r30;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r30 + 512), r22);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r30 + 516), r23);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 12u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r31 + 344));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r7 + 4));
        }
    }
    r28 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r7 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r30 + 540), r28);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r30 + 524), r25);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r30 + 528), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r30 + 532), r26);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r30 + 536), r27);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r31 + 356));
            r12 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r6 + 4));
        }
    }
    r11 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r6 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r30 + 560), r11);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r30 + 544), r25);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r30 + 548), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r30 + 552), r29);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r30 + 556), r12);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 36u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r10 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r31 + 368));
            r9 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r5 + 4));
        }
    }
    r8 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r5 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r30 + 580), r8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r30 + 564), r25);
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r30 + 568), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r30 + 572), r10);
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r30 + 576), r9);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 48u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r31 + 380));
            r6 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r4 + 4));
        }
    }
    r5 = MemoryInline::ReadResolved32(guest_range_2, 56u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 96u, (r30 + 600), r5);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r30 + 584), r25);
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r30 + 588), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r30 + 592), r7);
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r30 + 596), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 60u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r4 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 64u, (r16 + 4));
            r4 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r31 + 392));
        }
    }
    r16 = MemoryInline::ReadResolved32(guest_range_2, 68u, (r16 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r30 + 620), r16);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r30 + 604), r25);
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r30 + 608), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r30 + 612), r4);
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r30 + 616), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 72u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_2, 72u, (r31 + 404));
            r18 = MemoryInline::ReadResolved32(guest_range_2, 76u, (r19 + 4));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 80u, (r19 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 136u, (r30 + 640), r31);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r30 + 624), r25);
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r30 + 628), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_0, 128u, (r30 + 632), r17);
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r30 + 636), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 144u, (r30 + 648), r20);
        MemoryInline::WriteResolved32(guest_range_0, 148u, (r30 + 652), r21);
    }
    MemoryInline::WriteResolved32(guest_range_0, 152u, (r30 + 656), r20);
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 84u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_3, 72u, (r1 + 80), r22);
        MemoryInline::WriteResolved32(guest_range_3, 76u, (r1 + 84), r23);
    }
    MemoryInline::WriteResolved32(guest_range_3, 80u, (r1 + 88), r24);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_3, 60u, (r1 + 68), r26);
        MemoryInline::WriteResolved32(guest_range_3, 64u, (r1 + 72), r27);
    }
    MemoryInline::WriteResolved32(guest_range_3, 68u, (r1 + 76), r28);
    MemoryInline::WriteResolved32(guest_range_3, 48u, (r1 + 56), r29);
    MemoryInline::WriteResolved32(guest_range_3, 20u, (r1 + 28), r16);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + 8), r17);
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r1 + 12), r18);
    }
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r1 + 16), r31);
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 96), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r1 + 96));
            r17 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r1 + 100));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r1 + 104));
            r19 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r1 + 108));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r1 + 112));
            r21 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r1 + 116));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 24u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r1 + 120));
            r23 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r1 + 124));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 32u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r1 + 128));
            r25 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r1 + 132));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 40u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r1 + 136));
            r27 = MemoryInline::ReadResolved32(guest_range_4, 44u, (r1 + 140));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 48u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_4, 48u, (r1 + 144));
            r29 = MemoryInline::ReadResolved32(guest_range_4, 52u, (r1 + 148));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 56u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_4, 56u, (r1 + 152));
            r31 = MemoryInline::ReadResolved32(guest_range_4, 60u, (r1 + 156));
        }
    }
    MemoryInline::WriteResolved32(guest_range_3, 16u, (r1 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 68u, (r1 + 164));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_3, 52u, (r1 + 60), r12);
        MemoryInline::WriteResolved32(guest_range_3, 56u, (r1 + 64), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r1 + 44), r10);
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r1 + 48), r9);
    }
    MemoryInline::WriteResolved32(guest_range_3, 44u, (r1 + 52), r8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r1 + 32), r7);
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r1 + 36), r6);
    }
    MemoryInline::WriteResolved32(guest_range_3, 32u, (r1 + 40), r5);
    MemoryInline::WriteResolved32(guest_range_3, 12u, (r1 + 20), r4);
    ctx->lr = r0;
    r1 = (r1 + 160);
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

// RECOMP_GUEST_ABI gpr_read=0xFFFF000E gpr_write=0xFFFF1FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8064146C func_8064146C preserves=true fpr_mask=0x00000000
