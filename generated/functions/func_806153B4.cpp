#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806153B4(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_806153B4;

loc_806153B4:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    r11 = (r1 + 160);
    // inline leaf 0x80021590 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -4), r31);
    // end of inlined leaf 0x80021590
    r31 = 0x808C0000u;
    r30 = r3;
    r31 = (r31 + -20552);
    ctx->lr = 0x806153D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x8060197Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    r3 = 0x808C0000u;
    r4 = 0x808C0000u;
    r3 = (r3 + -20428);
    guest_range_1 = MemoryInline::ResolveRangeHost(r30, 0, 248u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r30, r3);
    r3 = (r31 + 16);
    r7 = 0x808C0000u;
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 16), 0, 100u, true, false);
    r23 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r31 + 16));
    r25 = 0x808C0000u;
    guest_range_4 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 104u, true, false);
    r24 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r3 + 4));
    r4 = (r4 + -20256);
    r29 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r3 + 8));
    r8 = (r31 + 28);
    MemoryInline::WriteResolved32(guest_range_1, 84u, (r30 + 84), r29);
    r7 = (r7 + -20280);
    r6 = (r31 + 40);
    r25 = (r25 + -20304);
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r30 + 68), r4);
    r5 = (r31 + 52);
    r3 = (r31 + 64);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r30 + 72), r30);
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r30 + 76), r23);
    }
    MemoryInline::WriteResolved32(guest_range_1, 80u, (r30 + 80), r24);
    r28 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r31 + 28));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 12u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r8 + 4));
            r26 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r8 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_1, 104u, (r30 + 104), r26);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r30 + 88), r7);
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r30 + 92), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 96u, (r30 + 96), r28);
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r30 + 100), r27);
    }
    r12 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r31 + 40));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 24u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r6 + 4));
            r10 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r6 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_1, 124u, (r30 + 124), r10);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 108u, (r30 + 108), r25);
        MemoryInline::WriteResolved32(guest_range_1, 112u, (r30 + 112), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_1, 116u, (r30 + 116), r12);
        MemoryInline::WriteResolved32(guest_range_1, 120u, (r30 + 120), r11);
    }
    r7 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r5 + 4));
    r9 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r31 + 52));
    r5 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r5 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 144u, (r30 + 144), r5);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 128u, (r30 + 128), r4);
        MemoryInline::WriteResolved32(guest_range_1, 132u, (r30 + 132), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 136u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_1, 136u, (r30 + 136), r9);
        MemoryInline::WriteResolved32(guest_range_1, 140u, (r30 + 140), r7);
    }
    r8 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r31 + 64));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 48u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_4, 48u, (r3 + 4));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 52u, (r3 + 8));
        }
    }
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 108u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_5, 96u, (r1 + 104), r23);
        MemoryInline::WriteResolved32(guest_range_5, 100u, (r1 + 108), r24);
    }
    MemoryInline::WriteResolved32(guest_range_5, 104u, (r1 + 112), r29);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_5, 84u, (r1 + 92), r28);
        MemoryInline::WriteResolved32(guest_range_5, 88u, (r1 + 96), r27);
    }
    MemoryInline::WriteResolved32(guest_range_5, 92u, (r1 + 100), r26);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_5, 72u, (r1 + 80), r12);
        MemoryInline::WriteResolved32(guest_range_5, 76u, (r1 + 84), r11);
    }
    MemoryInline::WriteResolved32(guest_range_5, 80u, (r1 + 88), r10);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_5, 60u, (r1 + 68), r9);
        MemoryInline::WriteResolved32(guest_range_5, 64u, (r1 + 72), r7);
    }
    MemoryInline::WriteResolved32(guest_range_5, 68u, (r1 + 76), r5);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_5, 48u, (r1 + 56), r8);
        MemoryInline::WriteResolved32(guest_range_5, 52u, (r1 + 60), r6);
    }
    MemoryInline::WriteResolved32(guest_range_5, 56u, (r1 + 64), r0);
    MemoryInline::WriteResolved32(guest_range_1, 148u, (r30 + 148), r25);
    MemoryInline::WriteResolved32(guest_range_1, 156u, (r30 + 156), r8);
    r7 = 0x808C0000u;
    r10 = (r31 + 76);
    r5 = 0x808C0000u;
    MemoryInline::WriteResolved32(guest_range_1, 160u, (r30 + 160), r6);
    r9 = (r31 + 88);
    r8 = (r31 + 100);
    r7 = (r7 + -20316);
    MemoryInline::WriteResolved32(guest_range_1, 152u, (r30 + 152), r30);
    r6 = (r31 + 112);
    r5 = (r5 + -20328);
    r3 = (r30 + 248);
    MemoryInline::WriteResolved32(guest_range_1, 164u, (r30 + 164), r0);
    r26 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r31 + 76));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 60u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_4, 60u, (r10 + 4));
            r28 = MemoryInline::ReadResolved32(guest_range_4, 64u, (r10 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_1, 184u, (r30 + 184), r28);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 168u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 168u, (r30 + 168), r4);
        MemoryInline::WriteResolved32(guest_range_1, 172u, (r30 + 172), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 176u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 176u, (r30 + 176), r26);
        MemoryInline::WriteResolved32(guest_range_1, 180u, (r30 + 180), r27);
    }
    r29 = MemoryInline::ReadResolved32(guest_range_2, 72u, (r31 + 88));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 72u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_4, 72u, (r9 + 4));
            r11 = MemoryInline::ReadResolved32(guest_range_4, 76u, (r9 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_1, 204u, (r30 + 204), r11);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 188u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 188u, (r30 + 188), r25);
        MemoryInline::WriteResolved32(guest_range_1, 192u, (r30 + 192), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 196u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_1, 196u, (r30 + 196), r29);
        MemoryInline::WriteResolved32(guest_range_1, 200u, (r30 + 200), r12);
    }
    r9 = MemoryInline::ReadResolved32(guest_range_4, 84u, (r8 + 4));
    r10 = MemoryInline::ReadResolved32(guest_range_2, 84u, (r31 + 100));
    r8 = MemoryInline::ReadResolved32(guest_range_4, 88u, (r8 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 224u, (r30 + 224), r8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 208u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 208u, (r30 + 208), r7);
        MemoryInline::WriteResolved32(guest_range_1, 212u, (r30 + 212), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 216u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_1, 216u, (r30 + 216), r10);
        MemoryInline::WriteResolved32(guest_range_1, 220u, (r30 + 220), r9);
    }
    r7 = MemoryInline::ReadResolved32(guest_range_2, 96u, (r31 + 112));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 96u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_4, 96u, (r6 + 4));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 100u, (r6 + 8));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_5, 36u, (r1 + 44), r26);
        MemoryInline::WriteResolved32(guest_range_5, 40u, (r1 + 48), r27);
    }
    MemoryInline::WriteResolved32(guest_range_5, 44u, (r1 + 52), r28);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_5, 24u, (r1 + 32), r29);
        MemoryInline::WriteResolved32(guest_range_5, 28u, (r1 + 36), r12);
    }
    MemoryInline::WriteResolved32(guest_range_5, 32u, (r1 + 40), r11);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_5, 12u, (r1 + 20), r10);
        MemoryInline::WriteResolved32(guest_range_5, 16u, (r1 + 24), r9);
    }
    MemoryInline::WriteResolved32(guest_range_5, 20u, (r1 + 28), r8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_5, 0u, (r1 + 8), r7);
        MemoryInline::WriteResolved32(guest_range_5, 4u, (r1 + 12), r4);
    }
    MemoryInline::WriteResolved32(guest_range_5, 8u, (r1 + 16), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 228u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 228u, (r30 + 228), r5);
        MemoryInline::WriteResolved32(guest_range_1, 232u, (r30 + 232), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 236u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 236u, (r30 + 236), r7);
        MemoryInline::WriteResolved32(guest_range_1, 240u, (r30 + 240), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 244u, (r30 + 244), r0);
    ctx->lr = 0x806155C4u;
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
    InvokeDirectCpu<0x805F09A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    r3 = (r30 + 796);
    ctx->lr = 0x806155CCu;
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
    InvokeDirectCpu<0x8063E960u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    r3 = (r30 + 2276);
    ctx->lr = 0x806155D4u;
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
    InvokeDirectCpu<0x806405D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    r3 = (r30 + 3416);
    ctx->lr = 0x806155DCu;
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
    InvokeDirectCpu<0x8063E960u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    r3 = (r30 + 4896);
    ctx->lr = 0x806155E4u;
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
    InvokeDirectCpu<0x806405D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    r23 = (r30 + 6040);
    r3 = r23;
    ctx->lr = 0x806155F0u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x805BD3A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    r3 = 0x80890000u;
    r4 = 0x808D0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 29736));
    r4 = (r4 + 14156);
    r24 = (r30 + 6652);
    r0 = 2001;
    r31 = 0;
    MemoryInline::FlatWrite32(r23, r4);
    r3 = r24;
    MemoryInline::FlatWrite32((r23 + 596), r0);
    MemoryInline::FlatWrite32((r23 + 600), r31);
    MemoryInline::FlatWriteFloat32((r23 + 604), f0.d);
    ctx->lr = 0x80615624u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x8063D798u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    r3 = 0x808D0000u;
    MemoryInline::FlatWrite8((r30 + 7204), static_cast<uint8_t>(r31));
    r3 = (r3 + 13976);
    r11 = (r1 + 160);
    MemoryInline::FlatWrite32(r24, r3);
    r3 = r30;
    // inline leaf 0x800215DC (10 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r11 + -4));
    // end of inlined leaf 0x800215DC
    r0 = MemoryInline::FlatRead32((r1 + 164));
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE00E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFE fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806153B4 func_806153B4 preserves=true fpr_mask=0x00000000
