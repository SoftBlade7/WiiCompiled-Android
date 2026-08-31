#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E04DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r16_mdest_0 = 0;
    uint32_t r16_mrot_0 = 0;
    uint32_t r16_rot_0 = 0;
    uint32_t r17_mdest_0 = 0;
    uint32_t r17_mrot_0 = 0;
    uint32_t r17_rot_0 = 0;
    uint32_t r18_mdest_0 = 0;
    uint32_t r18_mrot_0 = 0;
    uint32_t r18_rot_0 = 0;
    uint32_t r19_mdest_0 = 0;
    uint32_t r19_mrot_0 = 0;
    uint32_t r19_rot_0 = 0;
    uint32_t r20_mdest_0 = 0;
    uint32_t r20_mrot_0 = 0;
    uint32_t r20_rot_0 = 0;
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

    goto loc_801E04DC;

loc_801E04DC:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    r11 = (r1 + 112);
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
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 244u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 68u, (r3 + 68));
    r15 = MemoryInline::ReadResolved32(guest_range_1, 108u, (r3 + 108));
    r18_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
    r18 = (r18_rot_0 & -1048576);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 92u, (r3 + 92));
    MemoryInline::FlatWriteRam32((r1 + 32), r15);
    r16_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
    r16 = (r16_rot_0 & -1048576);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 88u, (r3 + 88));
    r15 = MemoryInline::ReadResolved32(guest_range_1, 120u, (r3 + 120));
    r16_mrot_0 = (r0 & 1048575);
    r16_mdest_0 = (r16 & -1048576);
    r16 = (r16_mdest_0 | r16_mrot_0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 240u, (r3 + 240));
    MemoryInline::FlatWriteRam32((r1 + 8), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 128u, (r3 + 128));
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 124u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 120u, (r4 + 120), r0);
    r0 = MemoryInline::FlatRead32((r1 + 32));
    r5 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r3 + 60));
    MemoryInline::FlatWriteRam32((r1 + 12), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 112u, (r3 + 112));
    r19_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(20));
    r19 = (r19_rot_0 & -1048576);
    MemoryInline::WriteResolved32(guest_range_2, 84u, (r4 + 84), r0);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r6 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r3 + 52));
    r5 = MemoryInline::ReadResolved32(guest_range_1, 84u, (r3 + 84));
    MemoryInline::FlatWriteRam32((r1 + 16), r15);
    r20_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(20));
    r20 = (r20_rot_0 & -1048576);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 116u, (r3 + 116));
    r17_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(20));
    r17 = (r17_rot_0 & -1048576);
    MemoryInline::WriteResolved32(guest_range_2, 96u, (r4 + 96), r0);
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r8 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r3 + 48));
    r7 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r3 + 56));
    r20_mrot_0 = (r8 & 1048575);
    r20_mdest_0 = (r20 & -1048576);
    r20 = (r20_mdest_0 | r20_mrot_0);
    r6 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r3 + 64));
    r19_mrot_0 = (r7 & 1048575);
    r19_mdest_0 = (r19 & -1048576);
    r19 = (r19_mdest_0 | r19_mrot_0);
    r5 = MemoryInline::ReadResolved32(guest_range_1, 80u, (r3 + 80));
    r18_mrot_0 = (r6 & 1048575);
    r18_mdest_0 = (r18 & -1048576);
    r18 = (r18_mdest_0 | r18_mrot_0);
    MemoryInline::FlatWriteRam32((r1 + 20), r15);
    r17_mrot_0 = (r5 & 1048575);
    r17_mdest_0 = (r17 & -1048576);
    r17 = (r17_mdest_0 | r17_mrot_0);
    r21 = MemoryInline::ReadResolved32(guest_range_1, 0u, r3);
    MemoryInline::WriteResolved32(guest_range_2, 104u, (r4 + 104), r0);
    r0 = MemoryInline::FlatRead32((r1 + 16));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 4u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r3 + 4));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r3 + 8));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 12u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r3 + 12));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r3 + 16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 20u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r3 + 20));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r3 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 28u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r3 + 28));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r3 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 36u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r3 + 36));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r3 + 40));
        }
    }
    r12 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r3 + 44));
    r11 = MemoryInline::ReadResolved8(guest_range_1, 200u, (r3 + 200));
    r10 = MemoryInline::ReadResolved8(guest_range_1, 201u, (r3 + 201));
    r9 = MemoryInline::ReadResolved16(guest_range_1, 202u, (r3 + 202));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 72u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_1, 72u, (r3 + 72));
            r7 = MemoryInline::ReadResolved32(guest_range_1, 76u, (r3 + 76));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 232u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_1, 232u, (r3 + 232));
            r5 = MemoryInline::ReadResolved32(guest_range_1, 236u, (r3 + 236));
        }
    }
    r14 = MemoryInline::ReadResolved32(guest_range_1, 104u, (r3 + 104));
    r15 = MemoryInline::ReadResolved32(guest_range_1, 124u, (r3 + 124));
    r3 = MemoryInline::ReadResolved32(guest_range_1, 132u, (r3 + 132));
    MemoryInline::WriteResolved32(guest_range_2, 88u, (r4 + 88), r0);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    r3 = 0;
    MemoryInline::WriteResolved32(guest_range_2, 92u, (r4 + 92), r0);
    r0 = r15;
    MemoryInline::WriteResolved32(guest_range_2, 100u, (r4 + 100), r0);
    r0 = MemoryInline::FlatRead32((r1 + 28));
    MemoryInline::FlatWriteRam32((r1 + 24), r15);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, r4, r21);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r4 + 4), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r4 + 8), r23);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r4 + 12), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r4 + 16), r25);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r4 + 20), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r4 + 24), r27);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r4 + 28), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r4 + 32), r29);
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r4 + 36), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r4 + 40), r31);
        MemoryInline::WriteResolved32(guest_range_2, 44u, (r4 + 44), r12);
    }
    MemoryInline::WriteResolved8(guest_range_2, 48u, (r4 + 48), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_2, 49u, (r4 + 49), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved16(guest_range_2, 50u, (r4 + 50), static_cast<uint16_t>(r9));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_2, 52u, (r4 + 52), r20);
        MemoryInline::WriteResolved32(guest_range_2, 56u, (r4 + 56), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_2, 60u, (r4 + 60), r18);
        MemoryInline::WriteResolved32(guest_range_2, 64u, (r4 + 64), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_2, 68u, (r4 + 68), r16);
        MemoryInline::WriteResolved32(guest_range_2, 72u, (r4 + 72), r8);
    }
    MemoryInline::WriteResolved32(guest_range_2, 76u, (r4 + 76), r7);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_2, 112u, (r4 + 112), r6);
        MemoryInline::WriteResolved32(guest_range_2, 116u, (r4 + 116), r5);
    }
    MemoryInline::WriteResolved32(guest_range_2, 80u, (r4 + 80), r14);
    MemoryInline::WriteResolved32(guest_range_2, 108u, (r4 + 108), r0);
    r11 = (r1 + 112);
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
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
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
// RECOMP_REGISTRATION base 0x801E04DC func_801E04DC preserves=true fpr_mask=0x00000000
