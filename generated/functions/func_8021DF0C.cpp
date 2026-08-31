#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8021DF0C(CpuContext* MKW_RESTRICT ctx)
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_8021DF0C;

loc_8021DF0C:
{
    MemoryInline::FlatWriteRam32((r1 + -224), r1);
    r1 = (r1 + -224);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 228), r0);
    r11 = (r1 + 224);
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
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 56), 0, 148u, true, false);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 80u, (r3 + 136));
    MemoryInline::FlatWriteRam32((r1 + 148), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 84u, (r3 + 140));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 72u, (r3 + 128));
    MemoryInline::FlatWriteRam32((r1 + 8), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 88u, (r3 + 144));
    MemoryInline::FlatWriteRam32((r1 + 12), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 92u, (r3 + 148));
    guest_range_2 = MemoryInline::ResolveRangeHost((r4 + 16), 0, 148u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 72u, (r4 + 88), r0);
    r0 = MemoryInline::FlatRead32((r1 + 148));
    MemoryInline::FlatWriteRam32((r1 + 16), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 96u, (r3 + 152));
    MemoryInline::WriteResolved32(guest_range_2, 80u, (r4 + 96), r0);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 100u, (r3 + 156));
    MemoryInline::WriteResolved32(guest_range_2, 84u, (r4 + 100), r0);
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWriteRam32((r1 + 24), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 104u, (r3 + 160));
    MemoryInline::WriteResolved32(guest_range_2, 88u, (r4 + 104), r0);
    r0 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 28), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 108u, (r3 + 164));
    MemoryInline::WriteResolved32(guest_range_2, 92u, (r4 + 108), r0);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWriteRam32((r1 + 32), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 112u, (r3 + 168));
    MemoryInline::WriteResolved32(guest_range_2, 96u, (r4 + 112), r0);
    r0 = MemoryInline::FlatRead32((r1 + 24));
    MemoryInline::FlatWriteRam32((r1 + 36), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 113u, (r3 + 169));
    MemoryInline::WriteResolved32(guest_range_2, 100u, (r4 + 116), r0);
    r0 = MemoryInline::FlatRead32((r1 + 28));
    MemoryInline::FlatWriteRam32((r1 + 40), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 114u, (r3 + 170));
    MemoryInline::WriteResolved32(guest_range_2, 104u, (r4 + 120), r0);
    r0 = MemoryInline::FlatRead32((r1 + 32));
    MemoryInline::FlatWriteRam32((r1 + 44), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 115u, (r3 + 171));
    MemoryInline::WriteResolved32(guest_range_2, 108u, (r4 + 124), r0);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    MemoryInline::FlatWriteRam32((r1 + 48), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 116u, (r3 + 172));
    MemoryInline::WriteResolved8(guest_range_2, 112u, (r4 + 128), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 52), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 117u, (r3 + 173));
    MemoryInline::WriteResolved8(guest_range_2, 113u, (r4 + 129), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 44));
    MemoryInline::FlatWriteRam32((r1 + 56), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 118u, (r3 + 174));
    MemoryInline::WriteResolved8(guest_range_2, 114u, (r4 + 130), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 48));
    MemoryInline::FlatWriteRam32((r1 + 60), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 119u, (r3 + 175));
    MemoryInline::WriteResolved8(guest_range_2, 115u, (r4 + 131), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::FlatWriteRam32((r1 + 64), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 120u, (r3 + 176));
    MemoryInline::WriteResolved8(guest_range_2, 116u, (r4 + 132), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 56));
    MemoryInline::FlatWriteRam32((r1 + 68), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 121u, (r3 + 177));
    MemoryInline::WriteResolved8(guest_range_2, 117u, (r4 + 133), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 60));
    MemoryInline::FlatWriteRam32((r1 + 72), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 122u, (r3 + 178));
    MemoryInline::WriteResolved8(guest_range_2, 118u, (r4 + 134), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 64));
    MemoryInline::FlatWriteRam32((r1 + 76), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 123u, (r3 + 179));
    MemoryInline::WriteResolved8(guest_range_2, 119u, (r4 + 135), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    MemoryInline::FlatWriteRam32((r1 + 80), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 124u, (r3 + 180));
    MemoryInline::WriteResolved8(guest_range_2, 120u, (r4 + 136), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 72));
    MemoryInline::FlatWriteRam32((r1 + 84), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 125u, (r3 + 181));
    MemoryInline::WriteResolved8(guest_range_2, 121u, (r4 + 137), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 76));
    MemoryInline::FlatWriteRam32((r1 + 88), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 126u, (r3 + 182));
    MemoryInline::WriteResolved8(guest_range_2, 122u, (r4 + 138), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 80));
    MemoryInline::FlatWriteRam32((r1 + 92), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 127u, (r3 + 183));
    MemoryInline::WriteResolved8(guest_range_2, 123u, (r4 + 139), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    MemoryInline::FlatWriteRam32((r1 + 96), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 128u, (r3 + 184));
    MemoryInline::WriteResolved8(guest_range_2, 124u, (r4 + 140), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 88));
    MemoryInline::FlatWriteRam32((r1 + 100), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 129u, (r3 + 185));
    MemoryInline::WriteResolved8(guest_range_2, 125u, (r4 + 141), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 92));
    MemoryInline::FlatWriteRam32((r1 + 104), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 130u, (r3 + 186));
    MemoryInline::WriteResolved8(guest_range_2, 126u, (r4 + 142), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 96));
    MemoryInline::FlatWriteRam32((r1 + 108), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 131u, (r3 + 187));
    MemoryInline::WriteResolved8(guest_range_2, 127u, (r4 + 143), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 100));
    MemoryInline::FlatWriteRam32((r1 + 112), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 132u, (r3 + 188));
    MemoryInline::WriteResolved8(guest_range_2, 128u, (r4 + 144), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 104));
    MemoryInline::FlatWriteRam32((r1 + 116), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 133u, (r3 + 189));
    MemoryInline::WriteResolved8(guest_range_2, 129u, (r4 + 145), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 108));
    MemoryInline::FlatWriteRam32((r1 + 120), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 134u, (r3 + 190));
    MemoryInline::WriteResolved8(guest_range_2, 130u, (r4 + 146), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 112));
    MemoryInline::FlatWriteRam32((r1 + 124), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 135u, (r3 + 191));
    MemoryInline::WriteResolved8(guest_range_2, 131u, (r4 + 147), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 116));
    MemoryInline::FlatWriteRam32((r1 + 128), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 136u, (r3 + 192));
    MemoryInline::WriteResolved8(guest_range_2, 132u, (r4 + 148), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 120));
    MemoryInline::FlatWriteRam32((r1 + 132), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 137u, (r3 + 193));
    MemoryInline::WriteResolved8(guest_range_2, 133u, (r4 + 149), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 124));
    MemoryInline::FlatWriteRam32((r1 + 136), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 138u, (r3 + 194));
    MemoryInline::WriteResolved8(guest_range_2, 134u, (r4 + 150), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 128));
    MemoryInline::FlatWriteRam32((r1 + 140), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 139u, (r3 + 195));
    MemoryInline::WriteResolved8(guest_range_2, 135u, (r4 + 151), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 132));
    MemoryInline::WriteResolved8(guest_range_2, 136u, (r4 + 152), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 136));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r3 + 56));
    r16 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r3 + 60));
    r17 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r3 + 61));
    r18 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r3 + 62));
    r19 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r3 + 63));
    r20 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r3 + 64));
    r21 = MemoryInline::ReadResolved8(guest_range_1, 9u, (r3 + 65));
    r22 = MemoryInline::ReadResolved8(guest_range_1, 10u, (r3 + 66));
    r23 = MemoryInline::ReadResolved8(guest_range_1, 11u, (r3 + 67));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 12u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r3 + 68));
            r25 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r3 + 70));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r3 + 72));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r3 + 76));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r3 + 80));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r3 + 84));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r3 + 88));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r3 + 92));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r3 + 96));
            r11 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r3 + 100));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r10 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r3 + 104));
            r9 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r3 + 108));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r3 + 112));
            r7 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r3 + 116));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 64u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r3 + 120));
            r5 = MemoryInline::ReadResolved32(guest_range_1, 68u, (r3 + 124));
        }
    }
    r14 = MemoryInline::ReadResolved32(guest_range_1, 76u, (r3 + 132));
    MemoryInline::WriteResolved8(guest_range_2, 137u, (r4 + 153), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 140));
    MemoryInline::WriteResolved8(guest_range_2, 138u, (r4 + 154), static_cast<uint8_t>(r0));
    r0 = r15;
    MemoryInline::FlatWriteRam32((r1 + 144), r15);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r4 + 16), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r4 + 20), static_cast<uint8_t>(r16));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r4 + 21), static_cast<uint8_t>(r17));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r4 + 22), static_cast<uint8_t>(r18));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r4 + 23), static_cast<uint8_t>(r19));
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r4 + 24), static_cast<uint8_t>(r20));
    MemoryInline::WriteResolved8(guest_range_2, 9u, (r4 + 25), static_cast<uint8_t>(r21));
    MemoryInline::WriteResolved8(guest_range_2, 10u, (r4 + 26), static_cast<uint8_t>(r22));
    MemoryInline::WriteResolved8(guest_range_2, 11u, (r4 + 27), static_cast<uint8_t>(r23));
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r24)) << 16) | static_cast<uint16_t>(r25)))) {
        MemoryInline::WriteResolved16(guest_range_2, 12u, (r4 + 28), r24);
        MemoryInline::WriteResolved16(guest_range_2, 14u, (r4 + 30), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r4 + 32), r26);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r4 + 36), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r4 + 40), r28);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r4 + 44), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r4 + 48), r30);
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r4 + 52), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r4 + 56), r12);
        MemoryInline::WriteResolved32(guest_range_2, 44u, (r4 + 60), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_2, 48u, (r4 + 64), r10);
        MemoryInline::WriteResolved32(guest_range_2, 52u, (r4 + 68), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_2, 56u, (r4 + 72), r8);
        MemoryInline::WriteResolved32(guest_range_2, 60u, (r4 + 76), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_2, 64u, (r4 + 80), r6);
        MemoryInline::WriteResolved32(guest_range_2, 68u, (r4 + 84), r5);
    }
    MemoryInline::WriteResolved32(guest_range_2, 76u, (r4 + 92), r14);
    MemoryInline::WriteResolved8(guest_range_2, 139u, (r4 + 155), static_cast<uint8_t>(r0));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 140u, (r3 + 196));
    r11 = (r1 + 224);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 144u, (r3 + 200));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 140u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 140u, (r4 + 156), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 144u, (r4 + 160), f0.d);
    }
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
    r0 = MemoryInline::FlatRead32((r1 + 228));
    ctx->lr = r0;
    r1 = (r1 + 224);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFC01A gpr_write=0xFFFFDFE3 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8021DF0C func_8021DF0C preserves=true fpr_mask=0x00000000
