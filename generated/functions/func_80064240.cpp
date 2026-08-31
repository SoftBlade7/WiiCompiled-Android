#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80064240(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80064240;

loc_80064240:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    r11 = (r1 + 144);
    // inline leaf 0x8002156C (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -72), r14);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -68), r15);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -64), r16);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -60), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002156C
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 57u, true, false);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 41u, (r3 + 41));
    r4 = 0x802C0000u;
    MemoryInline::FlatWriteRam32((r1 + 64), r15);
    r18 = (r4 + -11032);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 42u, (r3 + 42));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 39u, (r3 + 39));
    MemoryInline::FlatWriteRam32((r1 + 8), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 43u, (r3 + 43));
    MemoryInline::FlatWriteRam32((r1 + 12), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 44u, (r3 + 44));
    guest_range_2 = MemoryInline::ResolveRangeHost((r18 + 4), 0, 53u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 35u, (r18 + 39), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 64));
    MemoryInline::FlatWriteRam32((r1 + 16), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 45u, (r3 + 45));
    MemoryInline::WriteResolved8(guest_range_2, 37u, (r18 + 41), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 46u, (r3 + 46));
    MemoryInline::WriteResolved8(guest_range_2, 38u, (r18 + 42), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWriteRam32((r1 + 24), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 47u, (r3 + 47));
    MemoryInline::WriteResolved8(guest_range_2, 39u, (r18 + 43), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 28), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 48u, (r3 + 48));
    MemoryInline::WriteResolved8(guest_range_2, 40u, (r18 + 44), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWriteRam32((r1 + 32), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 49u, (r3 + 49));
    MemoryInline::WriteResolved8(guest_range_2, 41u, (r18 + 45), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 24));
    MemoryInline::FlatWriteRam32((r1 + 36), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 50u, (r3 + 50));
    MemoryInline::WriteResolved8(guest_range_2, 42u, (r18 + 46), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 28));
    MemoryInline::FlatWriteRam32((r1 + 40), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 51u, (r3 + 51));
    MemoryInline::WriteResolved8(guest_range_2, 43u, (r18 + 47), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 32));
    MemoryInline::FlatWriteRam32((r1 + 44), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 52u, (r3 + 52));
    MemoryInline::WriteResolved8(guest_range_2, 44u, (r18 + 48), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    MemoryInline::FlatWriteRam32((r1 + 48), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 53u, (r3 + 53));
    MemoryInline::WriteResolved8(guest_range_2, 45u, (r18 + 49), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 52), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 54u, (r3 + 54));
    MemoryInline::WriteResolved8(guest_range_2, 46u, (r18 + 50), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 44));
    MemoryInline::FlatWriteRam32((r1 + 56), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 55u, (r3 + 55));
    MemoryInline::WriteResolved8(guest_range_2, 47u, (r18 + 51), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 48));
    MemoryInline::FlatWriteRam32((r1 + 60), r15);
    r17 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r3 + 4));
    MemoryInline::WriteResolved8(guest_range_2, 48u, (r18 + 52), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::WriteResolved8(guest_range_2, 49u, (r18 + 53), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 56));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 6u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r3 + 6));
            r20 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r3 + 8));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 10u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r3 + 10));
            r22 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r3 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 14u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r3 + 14));
            r24 = MemoryInline::ReadResolved16(guest_range_1, 16u, (r3 + 16));
        }
    }
    r25 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r3 + 20));
    r26 = MemoryInline::ReadResolved8(guest_range_1, 24u, (r3 + 24));
    r27 = MemoryInline::ReadResolved8(guest_range_1, 25u, (r3 + 25));
    r28 = MemoryInline::ReadResolved8(guest_range_1, 26u, (r3 + 26));
    r29 = MemoryInline::ReadResolved8(guest_range_1, 27u, (r3 + 27));
    r30 = MemoryInline::ReadResolved8(guest_range_1, 28u, (r3 + 28));
    r31 = MemoryInline::ReadResolved8(guest_range_1, 29u, (r3 + 29));
    r12 = MemoryInline::ReadResolved8(guest_range_1, 30u, (r3 + 30));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 31u, (r3 + 31));
    r10 = MemoryInline::ReadResolved8(guest_range_1, 32u, (r3 + 32));
    r9 = MemoryInline::ReadResolved8(guest_range_1, 33u, (r3 + 33));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 34u, (r3 + 34));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 35u, (r3 + 35));
    r6 = MemoryInline::ReadResolved8(guest_range_1, 36u, (r3 + 36));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 37u, (r3 + 37));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 38u, (r3 + 38));
    r14 = MemoryInline::ReadResolved8(guest_range_1, 40u, (r3 + 40));
    r15 = MemoryInline::ReadResolved8(guest_range_1, 56u, (r3 + 56));
    r16 = MemoryInline::ReadResolved32(guest_range_1, 0u, r3);
    r3 = 0x802C0000u;
    MemoryInline::WriteResolved8(guest_range_2, 50u, (r18 + 54), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 60));
    MemoryInline::FlatWriteRam32((r3 + -11032), r16);
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r17)) << 16) | static_cast<uint16_t>(r19)))) {
        MemoryInline::WriteResolved16(guest_range_2, 0u, (r18 + 4), r17);
        MemoryInline::WriteResolved16(guest_range_2, 2u, (r18 + 6), r19);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r20)) << 16) | static_cast<uint16_t>(r21)))) {
        MemoryInline::WriteResolved16(guest_range_2, 4u, (r18 + 8), r20);
        MemoryInline::WriteResolved16(guest_range_2, 6u, (r18 + 10), r21);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r22)) << 16) | static_cast<uint16_t>(r23)))) {
        MemoryInline::WriteResolved16(guest_range_2, 8u, (r18 + 12), r22);
        MemoryInline::WriteResolved16(guest_range_2, 10u, (r18 + 14), r23);
    }
    MemoryInline::WriteResolved16(guest_range_2, 12u, (r18 + 16), static_cast<uint16_t>(r24));
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r18 + 20), r25);
    MemoryInline::WriteResolved8(guest_range_2, 20u, (r18 + 24), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_2, 21u, (r18 + 25), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_2, 22u, (r18 + 26), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_2, 23u, (r18 + 27), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_2, 24u, (r18 + 28), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_2, 25u, (r18 + 29), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_2, 26u, (r18 + 30), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_2, 27u, (r18 + 31), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_2, 28u, (r18 + 32), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_2, 29u, (r18 + 33), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_2, 30u, (r18 + 34), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_2, 31u, (r18 + 35), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 32u, (r18 + 36), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_2, 33u, (r18 + 37), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 34u, (r18 + 38), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 36u, (r18 + 40), static_cast<uint8_t>(r14));
    MemoryInline::WriteResolved8(guest_range_2, 51u, (r18 + 55), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 52u, (r18 + 56), static_cast<uint8_t>(r15));
    r11 = (r1 + 144);
    // inline leaf 0x800215B8 (19 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r11 + -72));
            r15 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r11 + -68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_3, 40u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_3, 44u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_3, 48u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_3, 52u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_3, 56u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_3, 60u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_3, 64u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_3, 68u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215B8
    r0 = MemoryInline::FlatRead32((r1 + 148));
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFC00A gpr_write=0xFFFFDFFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80064240 func_80064240 preserves=true fpr_mask=0x00000000
