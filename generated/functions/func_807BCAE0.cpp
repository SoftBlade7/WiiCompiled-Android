#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807BCAE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_10 = nullptr;
    uint8_t* guest_range_11 = nullptr;
    uint8_t* guest_range_12 = nullptr;
    uint8_t* guest_range_13 = nullptr;
    uint8_t* guest_range_14 = nullptr;
    uint8_t* guest_range_15 = nullptr;
    uint8_t* guest_range_16 = nullptr;
    uint8_t* guest_range_17 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;
    uint8_t* guest_range_9 = nullptr;

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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807BCAE0;

loc_807BCAE0:
{
    MemoryInline::FlatWriteRam32((r1 + -240), r1);
    r1 = (r1 + -240);
    MemoryInline::FlatWriteRam32((r1 + 168), r14);
    MemoryInline::FlatWriteRam32((r1 + 172), r15);
    MemoryInline::FlatWriteRam32((r1 + 176), r16);
    MemoryInline::FlatWriteRam32((r1 + 180), r17);
    MemoryInline::FlatWriteRam32((r1 + 184), r18);
    MemoryInline::FlatWriteRam32((r1 + 188), r19);
    MemoryInline::FlatWriteRam32((r1 + 192), r20);
    MemoryInline::FlatWriteRam32((r1 + 196), r21);
    MemoryInline::FlatWriteRam32((r1 + 200), r22);
    MemoryInline::FlatWriteRam32((r1 + 204), r23);
    MemoryInline::FlatWriteRam32((r1 + 208), r24);
    MemoryInline::FlatWriteRam32((r1 + 212), r25);
    MemoryInline::FlatWriteRam32((r1 + 216), r26);
    MemoryInline::FlatWriteRam32((r1 + 220), r27);
    MemoryInline::FlatWriteRam32((r1 + 224), r28);
    MemoryInline::FlatWriteRam32((r1 + 228), r29);
    MemoryInline::FlatWriteRam32((r1 + 232), r30);
    MemoryInline::FlatWriteRam32((r1 + 236), r31);
    r31 = 0x808A0000u;
    r6 = 0x808A0000u;
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 22216), 0, 28u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r31 + 22216));
    r3 = (r31 + 22216);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r10 = (r6 + 23816);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r3 + 1));
    r9 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r8 = (r9 + 23040);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r3 + 4));
    r7 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r4 = 0x808A0000u;
    r0 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r3 + 8));
    r4 = (r4 + 22844);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = (r7 + 21328);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r3 + 12));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 16u, (r3 + 16));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r3 + 20));
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r3 + 24));
    r3 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 144), r0);
    r0 = MemoryInline::FlatRead8((r3 + 22844));
    r3 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    r3 = MemoryInline::FlatRead32((r4 + 8));
    guest_range_2 = MemoryInline::ResolveRangeHost((r6 + 23816), 0, 28u, true, false);
    r30 = MemoryInline::ReadResolved8(guest_range_2, 0u, (r6 + 23816));
    r6 = 0x809C0000u;
    r16 = (r6 + 13984);
    guest_range_3 = MemoryInline::ResolveRangeHost((r9 + 23040), 0, 28u, true, false);
    r22 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r9 + 23040));
    guest_range_4 = MemoryInline::ResolveRangeHost((r7 + 21328), 0, 28u, true, false);
    r12 = MemoryInline::ReadResolved8(guest_range_4, 0u, (r7 + 21328));
    MemoryInline::FlatWriteRam32((r1 + 40), r3);
    r3 = 0x809C0000u;
    r29 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r10 + 1));
    MemoryInline::FlatWriteRam8((r3 + 13984), static_cast<uint8_t>(r30));
    r3 = MemoryInline::FlatRead32((r1 + 8));
    guest_range_0 = MemoryInline::ResolveRangeHost((r16 + 1), 0, 531u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 83u, (r16 + 84), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::WriteResolved8(guest_range_0, 84u, (r16 + 85), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::WriteResolved32(guest_range_0, 87u, (r16 + 88), r3);
    r3 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::WriteResolved32(guest_range_0, 91u, (r16 + 92), r3);
    r3 = MemoryInline::FlatRead32((r1 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 95u, (r16 + 96), r3);
    r3 = MemoryInline::FlatRead32((r1 + 28));
    MemoryInline::WriteResolved8(guest_range_0, 99u, (r16 + 100), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r1 + 32));
    MemoryInline::WriteResolved8(guest_range_0, 111u, (r16 + 112), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 4u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r10 + 4));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r10 + 8));
        }
    }
    r26 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r10 + 12));
    r25 = MemoryInline::ReadResolved8(guest_range_2, 16u, (r10 + 16));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 20u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r10 + 20));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r10 + 24));
        }
    }
    r21 = MemoryInline::ReadResolved8(guest_range_3, 1u, (r8 + 1));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 4u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r8 + 4));
            r19 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r8 + 8));
        }
    }
    r18 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r8 + 12));
    r17 = MemoryInline::ReadResolved8(guest_range_3, 16u, (r8 + 16));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 20u);
        if (resolved_pair.valid) {
            r15 = resolved_pair.first;
            r14 = resolved_pair.second;
        } else {
            r15 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r8 + 20));
            r14 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r8 + 24));
        }
    }
    r11 = MemoryInline::ReadResolved8(guest_range_4, 1u, (r5 + 1));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 4u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r10 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r5 + 4));
            r9 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r5 + 8));
        }
    }
    r8 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r5 + 12));
    r7 = MemoryInline::ReadResolved8(guest_range_4, 16u, (r5 + 16));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 20u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r5 + 20));
            r5 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r5 + 24));
        }
    }
    r31 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::WriteResolved32(guest_range_0, 103u, (r16 + 104), r3);
    r3 = MemoryInline::FlatRead32((r1 + 144));
    MemoryInline::WriteResolved32(guest_range_0, 115u, (r16 + 116), r0);
    r0 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r16 + 1), static_cast<uint8_t>(r29));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 3u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 3u, (r16 + 4), r28);
        MemoryInline::WriteResolved32(guest_range_0, 7u, (r16 + 8), r27);
    }
    MemoryInline::WriteResolved32(guest_range_0, 11u, (r16 + 12), r26);
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r16 + 16), static_cast<uint8_t>(r25));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 19u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 19u, (r16 + 20), r24);
        MemoryInline::WriteResolved32(guest_range_0, 23u, (r16 + 24), r23);
    }
    MemoryInline::WriteResolved8(guest_range_0, 27u, (r16 + 28), static_cast<uint8_t>(r22));
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r16 + 29), static_cast<uint8_t>(r21));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 31u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 31u, (r16 + 32), r20);
        MemoryInline::WriteResolved32(guest_range_0, 35u, (r16 + 36), r19);
    }
    MemoryInline::WriteResolved32(guest_range_0, 39u, (r16 + 40), r18);
    MemoryInline::WriteResolved8(guest_range_0, 43u, (r16 + 44), static_cast<uint8_t>(r17));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 47u, ((static_cast<uint64_t>(static_cast<uint32_t>(r15)) << 32) | static_cast<uint32_t>(r14)))) {
        MemoryInline::WriteResolved32(guest_range_0, 47u, (r16 + 48), r15);
        MemoryInline::WriteResolved32(guest_range_0, 51u, (r16 + 52), r14);
    }
    MemoryInline::WriteResolved8(guest_range_0, 55u, (r16 + 56), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_0, 56u, (r16 + 57), static_cast<uint8_t>(r11));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 59u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_0, 59u, (r16 + 60), r10);
        MemoryInline::WriteResolved32(guest_range_0, 63u, (r16 + 64), r9);
    }
    MemoryInline::WriteResolved32(guest_range_0, 67u, (r16 + 68), r8);
    MemoryInline::WriteResolved8(guest_range_0, 71u, (r16 + 72), static_cast<uint8_t>(r7));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 75u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 75u, (r16 + 76), r6);
        MemoryInline::WriteResolved32(guest_range_0, 79u, (r16 + 80), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 107u, (r16 + 108), r3);
    MemoryInline::WriteResolved8(guest_range_0, 112u, (r16 + 113), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_0, 119u, (r16 + 120), r0);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r6 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    r10 = 0x808A0000u;
    r0 = MemoryInline::FlatRead8((r4 + 16));
    r31 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    r5 = (r6 + 23320);
    r0 = MemoryInline::FlatRead32((r4 + 20));
    r3 = (r31 + 25172);
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r9 = (r10 + 22872);
    guest_range_5 = MemoryInline::ResolveRangeHost(r5, 0, 28u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_5, 20u, (r5 + 20));
    r8 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    r7 = (r8 + 21608);
    guest_range_6 = MemoryInline::ResolveRangeHost(r3, 0, 28u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 4u, (r3 + 4));
    r30 = MemoryInline::FlatRead32((r4 + 24));
    r4 = MemoryInline::ReadResolved8(guest_range_6, 0u, (r31 + 25172));
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 8u, (r3 + 8));
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 12u, (r3 + 12));
    MemoryInline::FlatWriteRam32((r1 + 64), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_6, 16u, (r3 + 16));
    guest_range_7 = MemoryInline::ResolveRangeHost((r10 + 22872), 0, 28u, true, false);
    r29 = MemoryInline::ReadResolved8(guest_range_7, 0u, (r10 + 22872));
    guest_range_8 = MemoryInline::ResolveRangeHost((r8 + 21608), 0, 28u, true, false);
    r21 = MemoryInline::ReadResolved8(guest_range_8, 0u, (r8 + 21608));
    r11 = MemoryInline::ReadResolved8(guest_range_5, 0u, (r6 + 23320));
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 20u, (r3 + 20));
    r31 = MemoryInline::ReadResolved8(guest_range_6, 1u, (r3 + 1));
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 24u, (r3 + 24));
    r3 = MemoryInline::FlatRead32((r1 + 44));
    MemoryInline::WriteResolved32(guest_range_0, 123u, (r16 + 124), r3);
    r3 = MemoryInline::FlatRead32((r1 + 48));
    MemoryInline::WriteResolved8(guest_range_0, 127u, (r16 + 128), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::WriteResolved32(guest_range_0, 131u, (r16 + 132), r3);
    r3 = MemoryInline::FlatRead32((r1 + 56));
    MemoryInline::WriteResolved32(guest_range_0, 215u, (r16 + 216), r3);
    r3 = MemoryInline::FlatRead32((r1 + 148));
    MemoryInline::WriteResolved32(guest_range_0, 227u, (r16 + 228), r3);
    r3 = MemoryInline::FlatRead32((r1 + 60));
    MemoryInline::WriteResolved32(guest_range_0, 231u, (r16 + 232), r3);
    r3 = MemoryInline::FlatRead32((r1 + 64));
    MemoryInline::WriteResolved32(guest_range_0, 235u, (r16 + 236), r3);
    r3 = MemoryInline::FlatRead32((r1 + 68));
    r28 = MemoryInline::ReadResolved8(guest_range_7, 1u, (r9 + 1));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 4u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_7, 4u, (r9 + 4));
            r26 = MemoryInline::ReadResolved32(guest_range_7, 8u, (r9 + 8));
        }
    }
    r25 = MemoryInline::ReadResolved32(guest_range_7, 12u, (r9 + 12));
    r24 = MemoryInline::ReadResolved8(guest_range_7, 16u, (r9 + 16));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 20u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_7, 20u, (r9 + 20));
            r22 = MemoryInline::ReadResolved32(guest_range_7, 24u, (r9 + 24));
        }
    }
    r20 = MemoryInline::ReadResolved8(guest_range_8, 1u, (r7 + 1));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 4u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_8, 4u, (r7 + 4));
            r18 = MemoryInline::ReadResolved32(guest_range_8, 8u, (r7 + 8));
        }
    }
    r17 = MemoryInline::ReadResolved32(guest_range_8, 12u, (r7 + 12));
    r15 = MemoryInline::ReadResolved8(guest_range_8, 16u, (r7 + 16));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 20u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_8, 20u, (r7 + 20));
            r12 = MemoryInline::ReadResolved32(guest_range_8, 24u, (r7 + 24));
        }
    }
    r10 = MemoryInline::ReadResolved8(guest_range_5, 1u, (r5 + 1));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 4u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r5 + 4));
            r8 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r5 + 8));
        }
    }
    r7 = MemoryInline::ReadResolved32(guest_range_5, 12u, (r5 + 12));
    r6 = MemoryInline::ReadResolved8(guest_range_5, 16u, (r5 + 16));
    r5 = MemoryInline::ReadResolved32(guest_range_5, 24u, (r5 + 24));
    MemoryInline::WriteResolved8(guest_range_0, 239u, (r16 + 240), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r1 + 72));
    MemoryInline::WriteResolved32(guest_range_0, 135u, (r16 + 136), r30);
    MemoryInline::WriteResolved8(guest_range_0, 139u, (r16 + 140), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 140u, (r16 + 141), static_cast<uint8_t>(r28));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 143u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 143u, (r16 + 144), r27);
        MemoryInline::WriteResolved32(guest_range_0, 147u, (r16 + 148), r26);
    }
    MemoryInline::WriteResolved32(guest_range_0, 151u, (r16 + 152), r25);
    MemoryInline::WriteResolved8(guest_range_0, 155u, (r16 + 156), static_cast<uint8_t>(r24));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 159u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 159u, (r16 + 160), r23);
        MemoryInline::WriteResolved32(guest_range_0, 163u, (r16 + 164), r22);
    }
    MemoryInline::WriteResolved8(guest_range_0, 167u, (r16 + 168), static_cast<uint8_t>(r21));
    MemoryInline::WriteResolved8(guest_range_0, 168u, (r16 + 169), static_cast<uint8_t>(r20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 171u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_0, 171u, (r16 + 172), r19);
        MemoryInline::WriteResolved32(guest_range_0, 175u, (r16 + 176), r18);
    }
    MemoryInline::WriteResolved32(guest_range_0, 179u, (r16 + 180), r17);
    MemoryInline::WriteResolved8(guest_range_0, 183u, (r16 + 184), static_cast<uint8_t>(r15));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 187u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_0, 187u, (r16 + 188), r14);
        MemoryInline::WriteResolved32(guest_range_0, 191u, (r16 + 192), r12);
    }
    MemoryInline::WriteResolved8(guest_range_0, 195u, (r16 + 196), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 196u, (r16 + 197), static_cast<uint8_t>(r10));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 199u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 199u, (r16 + 200), r9);
        MemoryInline::WriteResolved32(guest_range_0, 203u, (r16 + 204), r8);
    }
    MemoryInline::WriteResolved32(guest_range_0, 207u, (r16 + 208), r7);
    MemoryInline::WriteResolved8(guest_range_0, 211u, (r16 + 212), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved32(guest_range_0, 219u, (r16 + 220), r5);
    MemoryInline::WriteResolved8(guest_range_0, 223u, (r16 + 224), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 224u, (r16 + 225), static_cast<uint8_t>(r31));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 243u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 243u, (r16 + 244), r3);
        MemoryInline::WriteResolved32(guest_range_0, 247u, (r16 + 248), r0);
    }
    r15 = 0x808A0000u;
    r3 = 0x808A0000u;
    r7 = 0x808A0000u;
    r5 = 0x808A0000u;
    r8 = (r3 + 24996);
    guest_range_9 = MemoryInline::ResolveRangeHost((r15 + 22652), 0, 28u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_9, 0u, (r15 + 22652));
    r6 = (r7 + 22980);
    r4 = (r5 + 22924);
    guest_range_10 = MemoryInline::ResolveRangeHost((r7 + 22980), 0, 28u, true, false);
    r25 = MemoryInline::ReadResolved8(guest_range_10, 0u, (r7 + 22980));
    r14 = (r15 + 22652);
    guest_range_11 = MemoryInline::ResolveRangeHost((r5 + 22924), 0, 28u, true, false);
    r11 = MemoryInline::ReadResolved8(guest_range_11, 0u, (r5 + 22924));
    guest_range_12 = MemoryInline::ResolveRangeHost((r3 + 24996), 0, 28u, true, false);
    r17 = MemoryInline::ReadResolved8(guest_range_12, 0u, (r3 + 24996));
    r3 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    r3 = (r3 + 24456);
    r0 = MemoryInline::ReadResolved8(guest_range_9, 1u, (r14 + 1));
    r18 = MemoryInline::ReadResolved8(guest_range_12, 1u, (r8 + 1));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_12, 4u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_12, 4u, (r8 + 4));
            r20 = MemoryInline::ReadResolved32(guest_range_12, 8u, (r8 + 8));
        }
    }
    r21 = MemoryInline::ReadResolved32(guest_range_12, 12u, (r8 + 12));
    r22 = MemoryInline::ReadResolved8(guest_range_12, 16u, (r8 + 16));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_12, 20u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_12, 20u, (r8 + 20));
            r24 = MemoryInline::ReadResolved32(guest_range_12, 24u, (r8 + 24));
        }
    }
    r26 = MemoryInline::ReadResolved8(guest_range_10, 1u, (r6 + 1));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 4u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_10, 4u, (r6 + 4));
            r28 = MemoryInline::ReadResolved32(guest_range_10, 8u, (r6 + 8));
        }
    }
    r29 = MemoryInline::ReadResolved32(guest_range_10, 12u, (r6 + 12));
    r30 = MemoryInline::ReadResolved8(guest_range_10, 16u, (r6 + 16));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 20u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_10, 20u, (r6 + 20));
            r12 = MemoryInline::ReadResolved32(guest_range_10, 24u, (r6 + 24));
        }
    }
    r10 = MemoryInline::ReadResolved8(guest_range_11, 1u, (r4 + 1));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_11, 4u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_11, 4u, (r4 + 4));
            r8 = MemoryInline::ReadResolved32(guest_range_11, 8u, (r4 + 8));
        }
    }
    r7 = MemoryInline::ReadResolved32(guest_range_11, 12u, (r4 + 12));
    r6 = MemoryInline::ReadResolved8(guest_range_11, 16u, (r4 + 16));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_11, 20u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_11, 20u, (r4 + 20));
            r4 = MemoryInline::ReadResolved32(guest_range_11, 24u, (r4 + 24));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_9, 4u, (r14 + 4));
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_9, 8u, (r14 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 331u, (r16 + 332), r4);
    r4 = MemoryInline::FlatRead32((r1 + 76));
    MemoryInline::FlatWriteRam32((r1 + 88), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_9, 12u, (r14 + 12));
    MemoryInline::WriteResolved8(guest_range_0, 335u, (r16 + 336), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r1 + 80));
    MemoryInline::FlatWriteRam32((r1 + 92), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_9, 16u, (r14 + 16));
    MemoryInline::WriteResolved8(guest_range_0, 336u, (r16 + 337), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r1 + 84));
    MemoryInline::FlatWriteRam32((r1 + 96), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_9, 20u, (r14 + 20));
    MemoryInline::WriteResolved32(guest_range_0, 339u, (r16 + 340), r4);
    r4 = MemoryInline::FlatRead32((r1 + 88));
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_9, 24u, (r14 + 24));
    r14 = 0x808A0000u;
    r15 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::WriteResolved32(guest_range_0, 343u, (r16 + 344), r4);
    r4 = MemoryInline::FlatRead32((r1 + 92));
    MemoryInline::FlatWriteRam32((r1 + 152), r0);
    r0 = MemoryInline::FlatRead8((r14 + 24456));
    MemoryInline::FlatWriteRam32((r1 + 104), r15);
    r15 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 347u, (r16 + 348), r4);
    r4 = MemoryInline::FlatRead32((r1 + 96));
    MemoryInline::WriteResolved8(guest_range_0, 351u, (r16 + 352), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r1 + 100));
    r14 = MemoryInline::FlatRead8((r3 + 1));
    MemoryInline::WriteResolved32(guest_range_0, 355u, (r16 + 356), r4);
    r4 = MemoryInline::FlatRead32((r1 + 152));
    MemoryInline::WriteResolved8(guest_range_0, 363u, (r16 + 364), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 104));
    MemoryInline::WriteResolved32(guest_range_0, 367u, (r16 + 368), r0);
    r0 = r15;
    MemoryInline::FlatWriteRam32((r1 + 108), r15);
    MemoryInline::WriteResolved8(guest_range_0, 251u, (r16 + 252), static_cast<uint8_t>(r17));
    MemoryInline::WriteResolved8(guest_range_0, 252u, (r16 + 253), static_cast<uint8_t>(r18));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 255u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 255u, (r16 + 256), r19);
        MemoryInline::WriteResolved32(guest_range_0, 259u, (r16 + 260), r20);
    }
    MemoryInline::WriteResolved32(guest_range_0, 263u, (r16 + 264), r21);
    MemoryInline::WriteResolved8(guest_range_0, 267u, (r16 + 268), static_cast<uint8_t>(r22));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 271u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 271u, (r16 + 272), r23);
        MemoryInline::WriteResolved32(guest_range_0, 275u, (r16 + 276), r24);
    }
    MemoryInline::WriteResolved8(guest_range_0, 279u, (r16 + 280), static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_0, 280u, (r16 + 281), static_cast<uint8_t>(r26));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 283u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 283u, (r16 + 284), r27);
        MemoryInline::WriteResolved32(guest_range_0, 287u, (r16 + 288), r28);
    }
    MemoryInline::WriteResolved32(guest_range_0, 291u, (r16 + 292), r29);
    MemoryInline::WriteResolved8(guest_range_0, 295u, (r16 + 296), static_cast<uint8_t>(r30));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 299u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_0, 299u, (r16 + 300), r31);
        MemoryInline::WriteResolved32(guest_range_0, 303u, (r16 + 304), r12);
    }
    MemoryInline::WriteResolved8(guest_range_0, 307u, (r16 + 308), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 308u, (r16 + 309), static_cast<uint8_t>(r10));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 311u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 311u, (r16 + 312), r9);
        MemoryInline::WriteResolved32(guest_range_0, 315u, (r16 + 316), r8);
    }
    MemoryInline::WriteResolved32(guest_range_0, 319u, (r16 + 320), r7);
    MemoryInline::WriteResolved8(guest_range_0, 323u, (r16 + 324), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved32(guest_range_0, 327u, (r16 + 328), r5);
    MemoryInline::WriteResolved32(guest_range_0, 359u, (r16 + 360), r4);
    MemoryInline::WriteResolved8(guest_range_0, 364u, (r16 + 365), static_cast<uint8_t>(r14));
    MemoryInline::WriteResolved32(guest_range_0, 371u, (r16 + 372), r0);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r6 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 112), r0);
    r10 = 0x808A0000u;
    r0 = MemoryInline::FlatRead8((r3 + 16));
    r31 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    r5 = (r6 + 23844);
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r4 = (r31 + 23068);
    MemoryInline::FlatWriteRam32((r1 + 120), r0);
    r9 = (r10 + 24056);
    guest_range_13 = MemoryInline::ResolveRangeHost(r5, 0, 28u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_13, 20u, (r5 + 20));
    r8 = 0x808A0000u;
    r30 = MemoryInline::FlatRead32((r3 + 24));
    r7 = (r8 + 22772);
    guest_range_14 = MemoryInline::ResolveRangeHost((r31 + 23068), 0, 28u, true, false);
    r3 = MemoryInline::ReadResolved8(guest_range_14, 0u, (r31 + 23068));
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_14, 4u, (r4 + 4));
    MemoryInline::FlatWriteRam32((r1 + 156), r0);
    guest_range_15 = MemoryInline::ResolveRangeHost((r10 + 24056), 0, 28u, true, false);
    r29 = MemoryInline::ReadResolved8(guest_range_15, 0u, (r10 + 24056));
    guest_range_16 = MemoryInline::ResolveRangeHost((r8 + 22772), 0, 28u, true, false);
    r21 = MemoryInline::ReadResolved8(guest_range_16, 0u, (r8 + 22772));
    r11 = MemoryInline::ReadResolved8(guest_range_13, 0u, (r6 + 23844));
    r0 = MemoryInline::ReadResolved32(guest_range_14, 8u, (r4 + 8));
    MemoryInline::FlatWriteRam32((r1 + 128), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_14, 12u, (r4 + 12));
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_14, 16u, (r4 + 16));
    MemoryInline::FlatWriteRam32((r1 + 136), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_14, 20u, (r4 + 20));
    MemoryInline::WriteResolved8(guest_range_0, 475u, (r16 + 476), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r1 + 156));
    r31 = MemoryInline::ReadResolved8(guest_range_14, 1u, (r4 + 1));
    MemoryInline::FlatWriteRam32((r1 + 140), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_14, 24u, (r4 + 24));
    r4 = MemoryInline::FlatRead32((r1 + 112));
    MemoryInline::WriteResolved32(guest_range_0, 479u, (r16 + 480), r3);
    r3 = MemoryInline::FlatRead32((r1 + 128));
    MemoryInline::WriteResolved32(guest_range_0, 375u, (r16 + 376), r4);
    r4 = MemoryInline::FlatRead32((r1 + 116));
    MemoryInline::WriteResolved32(guest_range_0, 483u, (r16 + 484), r3);
    r3 = MemoryInline::FlatRead32((r1 + 132));
    MemoryInline::WriteResolved8(guest_range_0, 379u, (r16 + 380), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r1 + 120));
    MemoryInline::WriteResolved32(guest_range_0, 487u, (r16 + 488), r3);
    r3 = MemoryInline::FlatRead32((r1 + 136));
    r28 = MemoryInline::ReadResolved8(guest_range_15, 1u, (r9 + 1));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_15, 4u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_15, 4u, (r9 + 4));
            r26 = MemoryInline::ReadResolved32(guest_range_15, 8u, (r9 + 8));
        }
    }
    r25 = MemoryInline::ReadResolved32(guest_range_15, 12u, (r9 + 12));
    r24 = MemoryInline::ReadResolved8(guest_range_15, 16u, (r9 + 16));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_15, 20u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_15, 20u, (r9 + 20));
            r22 = MemoryInline::ReadResolved32(guest_range_15, 24u, (r9 + 24));
        }
    }
    r20 = MemoryInline::ReadResolved8(guest_range_16, 1u, (r7 + 1));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_16, 4u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_16, 4u, (r7 + 4));
            r18 = MemoryInline::ReadResolved32(guest_range_16, 8u, (r7 + 8));
        }
    }
    r17 = MemoryInline::ReadResolved32(guest_range_16, 12u, (r7 + 12));
    r15 = MemoryInline::ReadResolved8(guest_range_16, 16u, (r7 + 16));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_16, 20u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_16, 20u, (r7 + 20));
            r12 = MemoryInline::ReadResolved32(guest_range_16, 24u, (r7 + 24));
        }
    }
    r10 = MemoryInline::ReadResolved8(guest_range_13, 1u, (r5 + 1));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_13, 4u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_13, 4u, (r5 + 4));
            r8 = MemoryInline::ReadResolved32(guest_range_13, 8u, (r5 + 8));
        }
    }
    r7 = MemoryInline::ReadResolved32(guest_range_13, 12u, (r5 + 12));
    r6 = MemoryInline::ReadResolved8(guest_range_13, 16u, (r5 + 16));
    r5 = MemoryInline::ReadResolved32(guest_range_13, 24u, (r5 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 383u, (r16 + 384), r4);
    r4 = MemoryInline::FlatRead32((r1 + 124));
    MemoryInline::WriteResolved8(guest_range_0, 491u, (r16 + 492), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r1 + 140));
    MemoryInline::WriteResolved32(guest_range_0, 387u, (r16 + 388), r30);
    MemoryInline::WriteResolved8(guest_range_0, 391u, (r16 + 392), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 392u, (r16 + 393), static_cast<uint8_t>(r28));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 395u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 395u, (r16 + 396), r27);
        MemoryInline::WriteResolved32(guest_range_0, 399u, (r16 + 400), r26);
    }
    MemoryInline::WriteResolved32(guest_range_0, 403u, (r16 + 404), r25);
    MemoryInline::WriteResolved8(guest_range_0, 407u, (r16 + 408), static_cast<uint8_t>(r24));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 411u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 411u, (r16 + 412), r23);
        MemoryInline::WriteResolved32(guest_range_0, 415u, (r16 + 416), r22);
    }
    MemoryInline::WriteResolved8(guest_range_0, 419u, (r16 + 420), static_cast<uint8_t>(r21));
    MemoryInline::WriteResolved8(guest_range_0, 420u, (r16 + 421), static_cast<uint8_t>(r20));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 423u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_0, 423u, (r16 + 424), r19);
        MemoryInline::WriteResolved32(guest_range_0, 427u, (r16 + 428), r18);
    }
    MemoryInline::WriteResolved32(guest_range_0, 431u, (r16 + 432), r17);
    MemoryInline::WriteResolved8(guest_range_0, 435u, (r16 + 436), static_cast<uint8_t>(r15));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 439u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_0, 439u, (r16 + 440), r14);
        MemoryInline::WriteResolved32(guest_range_0, 443u, (r16 + 444), r12);
    }
    MemoryInline::WriteResolved8(guest_range_0, 447u, (r16 + 448), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 448u, (r16 + 449), static_cast<uint8_t>(r10));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 451u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 451u, (r16 + 452), r9);
        MemoryInline::WriteResolved32(guest_range_0, 455u, (r16 + 456), r8);
    }
    MemoryInline::WriteResolved32(guest_range_0, 459u, (r16 + 460), r7);
    MemoryInline::WriteResolved8(guest_range_0, 463u, (r16 + 464), static_cast<uint8_t>(r6));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 467u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 467u, (r16 + 468), r4);
        MemoryInline::WriteResolved32(guest_range_0, 471u, (r16 + 472), r5);
    }
    MemoryInline::WriteResolved8(guest_range_0, 476u, (r16 + 477), static_cast<uint8_t>(r31));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 495u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 495u, (r16 + 496), r3);
        MemoryInline::WriteResolved32(guest_range_0, 499u, (r16 + 500), r0);
    }
    r3 = 0x809C0000u;
    r4 = 0x808A0000u;
    r0 = MemoryInline::FlatRead8((r3 + 14521));
    r9 = (r4 + 21356);
    r10 = MemoryInline::FlatRead8((r4 + 21356));
    r8 = MemoryInline::FlatRead8((r9 + 1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807BD158:
{
    r7 = MemoryInline::FlatRead32((r9 + 4));
    r6 = MemoryInline::FlatRead32((r9 + 8));
    r5 = MemoryInline::FlatRead32((r9 + 12));
    r4 = MemoryInline::FlatRead8((r9 + 16));
    r3 = MemoryInline::FlatRead32((r9 + 20));
    r0 = MemoryInline::FlatRead32((r9 + 24));
    MemoryInline::WriteResolved8(guest_range_0, 503u, (r16 + 504), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 504u, (r16 + 505), static_cast<uint8_t>(r8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 507u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 507u, (r16 + 508), r7);
        MemoryInline::WriteResolved32(guest_range_0, 511u, (r16 + 512), r6);
    }
    MemoryInline::WriteResolved32(guest_range_0, 515u, (r16 + 516), r5);
    MemoryInline::WriteResolved8(guest_range_0, 519u, (r16 + 520), static_cast<uint8_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 523u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 523u, (r16 + 524), r3);
        MemoryInline::WriteResolved32(guest_range_0, 527u, (r16 + 528), r0);
    }
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BD1C4;
    }
}

loc_807BD194:
{
    r0 = 19;
    r3 = 0;
    ctr = r0;
}

loc_807BD1A0:
{
    r0 = MemoryInline::FlatRead8(r16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807BD1A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BD1BC;
    }
}

loc_807BD1AC:
{
    r0 = MemoryInline::FlatRead8((r16 + 1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807BD1B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807BD1BC;
    }
}

loc_807BD1B8:
{
    MemoryInline::FlatWrite8(r16, static_cast<uint8_t>(r3));
}

loc_807BD1BC:
{
    r16 = (r16 + 28);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807BD1A0;
    }
}

loc_807BD1C4:
{
    guest_range_17 = MemoryInline::ResolveRangeHost((r1 + 168), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_17, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_17, 0u, (r1 + 168));
            r15 = MemoryInline::ReadResolved32(guest_range_17, 4u, (r1 + 172));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_17, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_17, 8u, (r1 + 176));
            r17 = MemoryInline::ReadResolved32(guest_range_17, 12u, (r1 + 180));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_17, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_17, 16u, (r1 + 184));
            r19 = MemoryInline::ReadResolved32(guest_range_17, 20u, (r1 + 188));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_17, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_17, 24u, (r1 + 192));
            r21 = MemoryInline::ReadResolved32(guest_range_17, 28u, (r1 + 196));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_17, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_17, 32u, (r1 + 200));
            r23 = MemoryInline::ReadResolved32(guest_range_17, 36u, (r1 + 204));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_17, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_17, 40u, (r1 + 208));
            r25 = MemoryInline::ReadResolved32(guest_range_17, 44u, (r1 + 212));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_17, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_17, 48u, (r1 + 216));
            r27 = MemoryInline::ReadResolved32(guest_range_17, 52u, (r1 + 220));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_17, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_17, 56u, (r1 + 224));
            r29 = MemoryInline::ReadResolved32(guest_range_17, 60u, (r1 + 228));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_17, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_17, 64u, (r1 + 232));
            r31 = MemoryInline::ReadResolved32(guest_range_17, 68u, (r1 + 236));
        }
    }
    r1 = (r1 + 240);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFC70B gpr_write=0xFFFFDFFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807BCAE0 func_807BCAE0 preserves=true fpr_mask=0x00000000
