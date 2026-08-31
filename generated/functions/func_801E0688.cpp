#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E0688(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r5_rot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
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

    goto loc_801E0688;

loc_801E0688:
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
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 124u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r3 + 52));
    r0 = 0;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r3 + 56));
            r10 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r3 + 60));
        }
    }
    r8 = (r5 & 1048575);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(12));
    r7 = (r7_rot_0 & 4095);
    r6 = (r9 & 1048575);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(12));
    r5 = (r5_rot_0 & 4095);
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(12));
    r9 = (r9_rot_0 & 4095);
    r11 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r3 + 64));
    r14 = (r10 & 1048575);
    MemoryInline::FlatWriteRam32((r1 + 56), r9);
    r9 = (r11 & 1048575);
    r12 = MemoryInline::ReadResolved32(guest_range_1, 68u, (r3 + 68));
    MemoryInline::FlatWriteRam32((r1 + 8), r9);
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(12));
    r9 = (r9_rot_1 & 4095);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 80u, (r3 + 80));
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 244u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 60u, (r4 + 60), r5);
    r5 = MemoryInline::FlatRead32((r1 + 56));
    MemoryInline::FlatWriteRam32((r1 + 12), r9);
    r9 = (r12 & 1048575);
    r16 = MemoryInline::ReadResolved32(guest_range_1, 0u, r3);
    MemoryInline::WriteResolved32(guest_range_2, 68u, (r4 + 68), r5);
    r5 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 16), r9);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(12));
    r9 = (r9_rot_2 & 4095);
    r17 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r3 + 4));
    MemoryInline::WriteResolved32(guest_range_2, 80u, (r4 + 80), r5);
    r5 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWriteRam32((r1 + 20), r9);
    r18 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_2, 84u, (r4 + 84), r5);
    r5 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 24), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 84u, (r3 + 84));
    MemoryInline::WriteResolved32(guest_range_2, 88u, (r4 + 88), r5);
    r5 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWriteRam32((r1 + 28), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 96u, (r3 + 96));
    MemoryInline::WriteResolved32(guest_range_2, 92u, (r4 + 92), r5);
    r5 = MemoryInline::FlatRead32((r1 + 24));
    MemoryInline::FlatWriteRam32((r1 + 32), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 104u, (r3 + 104));
    MemoryInline::WriteResolved32(guest_range_2, 104u, (r4 + 104), r5);
    r5 = MemoryInline::FlatRead32((r1 + 28));
    MemoryInline::FlatWriteRam32((r1 + 36), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 88u, (r3 + 88));
    MemoryInline::WriteResolved32(guest_range_2, 108u, (r4 + 108), r5);
    r5 = MemoryInline::FlatRead32((r1 + 32));
    MemoryInline::FlatWriteRam32((r1 + 40), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 92u, (r3 + 92));
    MemoryInline::WriteResolved32(guest_range_2, 120u, (r4 + 120), r5);
    r5 = MemoryInline::FlatRead32((r1 + 36));
    MemoryInline::FlatWriteRam32((r1 + 44), r15);
    r19 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r3 + 12));
    MemoryInline::WriteResolved32(guest_range_2, 128u, (r4 + 128), r5);
    r5 = MemoryInline::FlatRead32((r1 + 40));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r3 + 16));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r3 + 20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r3 + 24));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r3 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r3 + 32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r3 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r3 + 40));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r3 + 44));
        }
    }
    r28 = MemoryInline::ReadResolved8(guest_range_1, 48u, (r3 + 48));
    r29 = MemoryInline::ReadResolved8(guest_range_1, 49u, (r3 + 49));
    r30 = MemoryInline::ReadResolved16(guest_range_1, 50u, (r3 + 50));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 72u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_1, 72u, (r3 + 72));
            r12 = MemoryInline::ReadResolved32(guest_range_1, 76u, (r3 + 76));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 112u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_1, 112u, (r3 + 112));
            r10 = MemoryInline::ReadResolved32(guest_range_1, 116u, (r3 + 116));
        }
    }
    r9 = MemoryInline::ReadResolved32(guest_range_1, 120u, (r3 + 120));
    r15 = MemoryInline::ReadResolved32(guest_range_1, 100u, (r3 + 100));
    r3 = MemoryInline::ReadResolved32(guest_range_1, 108u, (r3 + 108));
    MemoryInline::WriteResolved32(guest_range_2, 112u, (r4 + 112), r5);
    r5 = MemoryInline::FlatRead32((r1 + 44));
    MemoryInline::FlatWriteRam32((r1 + 52), r3);
    r3 = 0;
    MemoryInline::WriteResolved32(guest_range_2, 116u, (r4 + 116), r5);
    r5 = r15;
    MemoryInline::WriteResolved32(guest_range_2, 124u, (r4 + 124), r5);
    r5 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::FlatWriteRam32((r1 + 48), r15);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, r4, r16);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r4 + 4), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r4 + 8), r18);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r4 + 12), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r4 + 16), r20);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r4 + 20), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r4 + 24), r22);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r4 + 28), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r4 + 32), r24);
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r4 + 36), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r4 + 40), r26);
        MemoryInline::WriteResolved32(guest_range_2, 44u, (r4 + 44), r27);
    }
    MemoryInline::WriteResolved8(guest_range_2, 200u, (r4 + 200), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_2, 201u, (r4 + 201), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved16(guest_range_2, 202u, (r4 + 202), static_cast<uint16_t>(r30));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_2, 72u, (r4 + 72), r31);
        MemoryInline::WriteResolved32(guest_range_2, 76u, (r4 + 76), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 232u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_2, 232u, (r4 + 232), r11);
        MemoryInline::WriteResolved32(guest_range_2, 236u, (r4 + 236), r10);
    }
    MemoryInline::WriteResolved32(guest_range_2, 240u, (r4 + 240), r9);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_2, 48u, (r4 + 48), r8);
        MemoryInline::WriteResolved32(guest_range_2, 52u, (r4 + 52), r7);
    }
    MemoryInline::WriteResolved32(guest_range_2, 56u, (r4 + 56), r6);
    MemoryInline::WriteResolved32(guest_range_2, 64u, (r4 + 64), r14);
    MemoryInline::WriteResolved32(guest_range_2, 132u, (r4 + 132), r5);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 136u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 140u, (r4 + 140), r0);
        MemoryInline::WriteResolved32(guest_range_2, 136u, (r4 + 136), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 148u, (r4 + 148), r0);
        MemoryInline::WriteResolved32(guest_range_2, 144u, (r4 + 144), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 152u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 156u, (r4 + 156), r0);
        MemoryInline::WriteResolved32(guest_range_2, 152u, (r4 + 152), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 160u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 164u, (r4 + 164), r0);
        MemoryInline::WriteResolved32(guest_range_2, 160u, (r4 + 160), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 168u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 172u, (r4 + 172), r0);
        MemoryInline::WriteResolved32(guest_range_2, 168u, (r4 + 168), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 176u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 180u, (r4 + 180), r0);
        MemoryInline::WriteResolved32(guest_range_2, 176u, (r4 + 176), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 184u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 188u, (r4 + 188), r0);
        MemoryInline::WriteResolved32(guest_range_2, 184u, (r4 + 184), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 192u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 196u, (r4 + 196), r0);
        MemoryInline::WriteResolved32(guest_range_2, 192u, (r4 + 192), r0);
    }
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFC01A gpr_write=0xFFFFDFEB gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801E0688 func_801E0688 preserves=true fpr_mask=0x00000000
