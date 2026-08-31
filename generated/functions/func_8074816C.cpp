#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8074816C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
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
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8074816C;

loc_8074816C:
{
    MemoryInline::FlatWriteRam32((r1 + -368), r1);
    r1 = (r1 + -368);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 372), r0);
    r11 = (r1 + 368);
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
    r31 = 0x808D0000u;
    r5 = 0x808A0000u;
    r30 = r3;
    r31 = (r31 + -18176);
    r5 = (r5 + 11444);
    ctx->lr = 0x80748198u;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80747198u>(ctx);
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
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
    cr = ctx->cr;
    xer = ctx->xer;
    r6 = 0x808D0000u;
    r5 = 0x808D0000u;
    r6 = (r6 + -17792);
    r0 = 0;
    r3 = (r6 + 236);
    r5 = (r5 + -17456);
    guest_range_1 = MemoryInline::ResolveRangeHost(r30, 0, 844u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r30, r6);
    r4 = 0x80240000u;
    MemoryInline::WriteResolved32(guest_range_1, 228u, (r30 + 228), r3);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 372u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 372u, (r30 + 372), r5);
        MemoryInline::WriteResolved32(guest_range_1, 376u, (r30 + 376), r0);
    }
    r4 = (r4 + 28832);
    guest_range_3 = MemoryInline::ResolveRangeHost(r4, 0, 12u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r3 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 380u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 384u, (r30 + 384), r3);
        MemoryInline::WriteResolved32(guest_range_1, 380u, (r30 + 380), r6);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 388u, (r30 + 388), r3);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r3 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 392u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 396u, (r30 + 396), r3);
        MemoryInline::WriteResolved32(guest_range_1, 392u, (r30 + 392), r6);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 400u, (r30 + 400), r3);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r3 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 404u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 408u, (r30 + 408), r3);
        MemoryInline::WriteResolved32(guest_range_1, 404u, (r30 + 404), r6);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 412u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 412u, (r30 + 412), r3);
        MemoryInline::WriteResolved32(guest_range_1, 416u, (r30 + 416), r5);
    }
    MemoryInline::WriteResolved32(guest_range_1, 420u, (r30 + 420), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r3 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 424u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 428u, (r30 + 428), r3);
        MemoryInline::WriteResolved32(guest_range_1, 424u, (r30 + 424), r6);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 432u, (r30 + 432), r3);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r3 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 436u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 440u, (r30 + 440), r3);
        MemoryInline::WriteResolved32(guest_range_1, 436u, (r30 + 436), r6);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 444u, (r30 + 444), r3);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r3 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 448u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 452u, (r30 + 452), r3);
        MemoryInline::WriteResolved32(guest_range_1, 448u, (r30 + 448), r6);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 456u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 456u, (r30 + 456), r3);
        MemoryInline::WriteResolved32(guest_range_1, 460u, (r30 + 460), r5);
    }
    MemoryInline::WriteResolved32(guest_range_1, 464u, (r30 + 464), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r3 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 468u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 472u, (r30 + 472), r3);
        MemoryInline::WriteResolved32(guest_range_1, 468u, (r30 + 468), r6);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 476u, (r30 + 476), r3);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r3 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 480u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 484u, (r30 + 484), r3);
        MemoryInline::WriteResolved32(guest_range_1, 480u, (r30 + 480), r6);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 488u, (r30 + 488), r3);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r3 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 492u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 496u, (r30 + 496), r3);
        MemoryInline::WriteResolved32(guest_range_1, 492u, (r30 + 492), r6);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 500u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 500u, (r30 + 500), r3);
        MemoryInline::WriteResolved32(guest_range_1, 504u, (r30 + 504), r5);
    }
    r3 = 0x808B0000u;
    r3 = (r3 + 28224);
    MemoryInline::WriteResolved32(guest_range_1, 508u, (r30 + 508), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 512u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 516u, (r30 + 516), r6);
        MemoryInline::WriteResolved32(guest_range_1, 512u, (r30 + 512), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 520u, (r30 + 520), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 524u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 528u, (r30 + 528), r6);
        MemoryInline::WriteResolved32(guest_range_1, 524u, (r30 + 524), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 532u, (r30 + 532), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 536u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 540u, (r30 + 540), r6);
        MemoryInline::WriteResolved32(guest_range_1, 536u, (r30 + 536), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 544u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 544u, (r30 + 544), r6);
        MemoryInline::WriteResolved32(guest_range_1, 548u, (r30 + 548), r5);
    }
    MemoryInline::WriteResolved32(guest_range_1, 552u, (r30 + 552), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 556u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 560u, (r30 + 560), r6);
        MemoryInline::WriteResolved32(guest_range_1, 556u, (r30 + 556), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 564u, (r30 + 564), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 568u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 572u, (r30 + 572), r6);
        MemoryInline::WriteResolved32(guest_range_1, 568u, (r30 + 568), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 576u, (r30 + 576), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 580u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 584u, (r30 + 584), r6);
        MemoryInline::WriteResolved32(guest_range_1, 580u, (r30 + 580), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 588u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 588u, (r30 + 588), r6);
        MemoryInline::WriteResolved32(guest_range_1, 592u, (r30 + 592), r5);
    }
    MemoryInline::WriteResolved32(guest_range_1, 596u, (r30 + 596), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 600u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 604u, (r30 + 604), r6);
        MemoryInline::WriteResolved32(guest_range_1, 600u, (r30 + 600), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 608u, (r30 + 608), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 612u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 616u, (r30 + 616), r6);
        MemoryInline::WriteResolved32(guest_range_1, 612u, (r30 + 612), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 620u, (r30 + 620), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 624u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 628u, (r30 + 628), r6);
        MemoryInline::WriteResolved32(guest_range_1, 624u, (r30 + 624), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 632u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 632u, (r30 + 632), r6);
        MemoryInline::WriteResolved32(guest_range_1, 636u, (r30 + 636), r3);
    }
    MemoryInline::WriteResolved32(guest_range_1, 636u, (r30 + 636), r5);
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 11328));
    r6 = -1;
    MemoryInline::WriteResolved32(guest_range_1, 640u, (r30 + 640), r0);
    r3 = 44;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r7 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 644u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_1, 648u, (r30 + 648), r7);
        MemoryInline::WriteResolved32(guest_range_1, 644u, (r30 + 644), r8);
    }
    r7 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 652u, (r30 + 652), r7);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r7 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 656u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_1, 660u, (r30 + 660), r7);
        MemoryInline::WriteResolved32(guest_range_1, 656u, (r30 + 656), r8);
    }
    r7 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 664u, (r30 + 664), r7);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r7 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 668u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_1, 672u, (r30 + 672), r7);
        MemoryInline::WriteResolved32(guest_range_1, 668u, (r30 + 668), r8);
    }
    r7 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 676u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 676u, (r30 + 676), r7);
        MemoryInline::WriteResolved32(guest_range_1, 680u, (r30 + 680), r5);
    }
    MemoryInline::WriteResolved32(guest_range_1, 684u, (r30 + 684), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 688u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 692u, (r30 + 692), r5);
        MemoryInline::WriteResolved32(guest_range_1, 688u, (r30 + 688), r7);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 696u, (r30 + 696), r5);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 700u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 704u, (r30 + 704), r5);
        MemoryInline::WriteResolved32(guest_range_1, 700u, (r30 + 700), r7);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 708u, (r30 + 708), r5);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 712u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 716u, (r30 + 716), r5);
        MemoryInline::WriteResolved32(guest_range_1, 712u, (r30 + 712), r7);
    }
    r4 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 720u, (r30 + 720), r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 820u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 820u, (r30 + 820), f0.d);
        MemoryInline::WriteResolved32(guest_range_1, 824u, (r30 + 824), r6);
    }
    MemoryInline::WriteResolved8(guest_range_1, 843u, (r30 + 843), static_cast<uint8_t>(r0));
    ctx->lr = 0x80748468u;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
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
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8074846C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80748474;
    }
}

loc_80748470:
{
    // inline leaf 0x80747C40 (22 guest instruction(s))
    r4 = 0x808A0000u;
    r6 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 11280));
    r4 = 0x808D0000u;
    r4 = (r4 + -18200);
    r0 = -1;
    guest_range_4 = MemoryInline::ResolveRangeHost(r3, 0, 41u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, r3, r4);
    r5 = 0x809C0000u;
    r4 = 0x808D0000u;
    MemoryInline::WriteResolved32(guest_range_4, 16u, (r3 + 16), r6);
    r4 = (r4 + -18224);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_4, 20u, (r3 + 20), r6);
        MemoryInline::WriteResolved32(guest_range_4, 24u, (r3 + 24), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_4, 28u, (r3 + 28), r0);
        MemoryInline::WriteResolved32(guest_range_4, 32u, (r3 + 32), r6);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_4, 36u, (r3 + 36), f0.d);
    r5 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = MemoryInline::FlatRead8((r5 + 36));
    MemoryInline::WriteResolved32(guest_range_4, 20u, (r3 + 20), r0);
    MemoryInline::WriteResolved32(guest_range_4, 0u, r3, r4);
    MemoryInline::WriteResolved8(guest_range_4, 40u, (r3 + 40), static_cast<uint8_t>(r6));
    // end of inlined leaf 0x80747C40
}

loc_80748474:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r30 + 236), 0, 488u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r30 + 236), r3);
    r6 = (r31 + 144);
    r5 = (r31 + 156);
    r7 = 0x80240000u;
    r7 = (r7 + 28832);
    guest_range_5 = MemoryInline::ResolveRangeHost(r7, 0, 12u, true, false);
    r25 = MemoryInline::ReadResolved32(guest_range_5, 0u, r7);
    r4 = (r31 + 168);
    guest_range_6 = MemoryInline::ResolveRangeHost((r31 + 144), 0, 232u, true, false);
    r22 = MemoryInline::ReadResolved32(guest_range_6, 0u, (r31 + 144));
    r3 = (r31 + 180);
    r24 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r7 + 4));
    r26 = (r31 + 192);
    r23 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r7 + 8));
    guest_range_8 = MemoryInline::ResolveRangeHost((r6 + 4), 0, 236u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 0u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_8, 0u, (r6 + 4));
            r20 = MemoryInline::ReadResolved32(guest_range_8, 4u, (r6 + 8));
        }
    }
    r19 = MemoryInline::ReadResolved32(guest_range_6, 12u, (r31 + 156));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 12u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_8, 12u, (r5 + 4));
            r17 = MemoryInline::ReadResolved32(guest_range_8, 16u, (r5 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_2, 152u, (r30 + 388), r17);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_2, 140u, (r30 + 376), r30);
        MemoryInline::WriteResolved32(guest_range_2, 144u, (r30 + 380), r19);
    }
    MemoryInline::WriteResolved32(guest_range_2, 148u, (r30 + 384), r18);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 156u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_2, 156u, (r30 + 392), r22);
        MemoryInline::WriteResolved32(guest_range_2, 160u, (r30 + 396), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 164u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_2, 164u, (r30 + 400), r20);
        MemoryInline::WriteResolved32(guest_range_2, 168u, (r30 + 404), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 172u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_2, 172u, (r30 + 408), r24);
        MemoryInline::WriteResolved32(guest_range_2, 176u, (r30 + 412), r23);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 0u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_5, 0u, r7);
            r15 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r7 + 4));
        }
    }
    r14 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r7 + 8));
    r12 = MemoryInline::ReadResolved32(guest_range_6, 24u, (r31 + 168));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 24u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_8, 24u, (r4 + 4));
            r27 = MemoryInline::ReadResolved32(guest_range_8, 28u, (r4 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_2, 208u, (r30 + 444), r27);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 184u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r16)))) {
        MemoryInline::WriteResolved32(guest_range_2, 184u, (r30 + 420), r30);
        MemoryInline::WriteResolved32(guest_range_2, 188u, (r30 + 424), r16);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 192u, ((static_cast<uint64_t>(static_cast<uint32_t>(r15)) << 32) | static_cast<uint32_t>(r14)))) {
        MemoryInline::WriteResolved32(guest_range_2, 192u, (r30 + 428), r15);
        MemoryInline::WriteResolved32(guest_range_2, 196u, (r30 + 432), r14);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 200u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_2, 200u, (r30 + 436), r12);
        MemoryInline::WriteResolved32(guest_range_2, 204u, (r30 + 440), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 212u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_2, 212u, (r30 + 448), r16);
        MemoryInline::WriteResolved32(guest_range_2, 216u, (r30 + 452), r15);
    }
    MemoryInline::WriteResolved32(guest_range_2, 220u, (r30 + 456), r14);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 0u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r10 = MemoryInline::ReadResolved32(guest_range_5, 0u, r7);
            r9 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r7 + 4));
        }
    }
    r8 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r7 + 8));
    r7 = MemoryInline::ReadResolved32(guest_range_6, 36u, (r31 + 180));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 36u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_8, 36u, (r3 + 4));
            r5 = MemoryInline::ReadResolved32(guest_range_8, 40u, (r3 + 8));
        }
    }
    r4 = MemoryInline::ReadResolved32(guest_range_6, 48u, (r31 + 192));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 48u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_8, 48u, (r26 + 4));
            r0 = MemoryInline::ReadResolved32(guest_range_8, 52u, (r26 + 8));
        }
    }
    guest_range_9 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 276u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 240u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_9, 240u, (r1 + 248), r25);
        MemoryInline::WriteResolved32(guest_range_9, 244u, (r1 + 252), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 248u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_9, 248u, (r1 + 256), r23);
        MemoryInline::WriteResolved32(guest_range_9, 252u, (r1 + 260), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 256u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_9, 256u, (r1 + 264), r21);
        MemoryInline::WriteResolved32(guest_range_9, 260u, (r1 + 268), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 264u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_9, 264u, (r1 + 272), r19);
        MemoryInline::WriteResolved32(guest_range_9, 268u, (r1 + 276), r18);
    }
    MemoryInline::WriteResolved32(guest_range_9, 272u, (r1 + 280), r17);
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_9, 0u, (r1 + 8), r16);
        MemoryInline::WriteResolved32(guest_range_9, 4u, (r1 + 12), r15);
    }
    MemoryInline::WriteResolved32(guest_range_9, 8u, (r1 + 16), r14);
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 228u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_9, 228u, (r1 + 236), r12);
        MemoryInline::WriteResolved32(guest_range_9, 232u, (r1 + 240), r11);
    }
    MemoryInline::WriteResolved32(guest_range_9, 236u, (r1 + 244), r27);
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 192u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_9, 192u, (r1 + 200), r10);
        MemoryInline::WriteResolved32(guest_range_9, 196u, (r1 + 204), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 200u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_9, 200u, (r1 + 208), r8);
        MemoryInline::WriteResolved32(guest_range_9, 204u, (r1 + 212), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 208u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_9, 208u, (r1 + 216), r6);
        MemoryInline::WriteResolved32(guest_range_9, 212u, (r1 + 220), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 216u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_9, 216u, (r1 + 224), r4);
        MemoryInline::WriteResolved32(guest_range_9, 220u, (r1 + 228), r3);
    }
    MemoryInline::WriteResolved32(guest_range_9, 224u, (r1 + 232), r0);
    MemoryInline::WriteResolved32(guest_range_2, 232u, (r30 + 468), r4);
    r16 = (r31 + 204);
    r15 = (r31 + 216);
    r14 = (r31 + 228);
    MemoryInline::WriteResolved32(guest_range_2, 228u, (r30 + 464), r30);
    r12 = (r31 + 240);
    r11 = (r31 + 252);
    r4 = (r31 + 264);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 236u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 236u, (r30 + 472), r3);
        MemoryInline::WriteResolved32(guest_range_2, 240u, (r30 + 476), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 244u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_2, 244u, (r30 + 480), r7);
        MemoryInline::WriteResolved32(guest_range_2, 248u, (r30 + 484), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 252u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_2, 252u, (r30 + 488), r5);
        MemoryInline::WriteResolved32(guest_range_2, 256u, (r30 + 492), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 260u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_2, 260u, (r30 + 496), r9);
        MemoryInline::WriteResolved32(guest_range_2, 264u, (r30 + 500), r8);
    }
    r23 = MemoryInline::ReadResolved32(guest_range_6, 60u, (r31 + 204));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 60u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_8, 60u, (r16 + 4));
            r21 = MemoryInline::ReadResolved32(guest_range_8, 64u, (r16 + 8));
        }
    }
    r20 = MemoryInline::ReadResolved32(guest_range_6, 72u, (r31 + 216));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 72u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_8, 72u, (r15 + 4));
            r18 = MemoryInline::ReadResolved32(guest_range_8, 76u, (r15 + 8));
        }
    }
    r17 = MemoryInline::ReadResolved32(guest_range_6, 84u, (r31 + 228));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 84u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_8, 84u, (r14 + 4));
            r15 = MemoryInline::ReadResolved32(guest_range_8, 88u, (r14 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_2, 284u, (r30 + 520), r15);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 272u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_2, 272u, (r30 + 508), r30);
        MemoryInline::WriteResolved32(guest_range_2, 276u, (r30 + 512), r17);
    }
    MemoryInline::WriteResolved32(guest_range_2, 280u, (r30 + 516), r16);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 288u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_2, 288u, (r30 + 524), r20);
        MemoryInline::WriteResolved32(guest_range_2, 292u, (r30 + 528), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 296u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_2, 296u, (r30 + 532), r18);
        MemoryInline::WriteResolved32(guest_range_2, 300u, (r30 + 536), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 304u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_2, 304u, (r30 + 540), r22);
        MemoryInline::WriteResolved32(guest_range_2, 308u, (r30 + 544), r21);
    }
    r14 = MemoryInline::ReadResolved32(guest_range_6, 96u, (r31 + 240));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 96u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r10 = MemoryInline::ReadResolved32(guest_range_8, 96u, (r12 + 4));
            r9 = MemoryInline::ReadResolved32(guest_range_8, 100u, (r12 + 8));
        }
    }
    r8 = MemoryInline::ReadResolved32(guest_range_6, 108u, (r31 + 252));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 108u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_8, 108u, (r11 + 4));
            r6 = MemoryInline::ReadResolved32(guest_range_8, 112u, (r11 + 8));
        }
    }
    r5 = MemoryInline::ReadResolved32(guest_range_6, 120u, (r31 + 264));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 120u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_8, 120u, (r4 + 4));
            r0 = MemoryInline::ReadResolved32(guest_range_8, 124u, (r4 + 8));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 156u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_9, 156u, (r1 + 164), r23);
        MemoryInline::WriteResolved32(guest_range_9, 160u, (r1 + 168), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 164u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_9, 164u, (r1 + 172), r21);
        MemoryInline::WriteResolved32(guest_range_9, 168u, (r1 + 176), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 172u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_9, 172u, (r1 + 180), r19);
        MemoryInline::WriteResolved32(guest_range_9, 176u, (r1 + 184), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 180u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r16)))) {
        MemoryInline::WriteResolved32(guest_range_9, 180u, (r1 + 188), r17);
        MemoryInline::WriteResolved32(guest_range_9, 184u, (r1 + 192), r16);
    }
    MemoryInline::WriteResolved32(guest_range_9, 188u, (r1 + 196), r15);
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_9, 120u, (r1 + 128), r14);
        MemoryInline::WriteResolved32(guest_range_9, 124u, (r1 + 132), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_9, 128u, (r1 + 136), r9);
        MemoryInline::WriteResolved32(guest_range_9, 132u, (r1 + 140), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 136u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_9, 136u, (r1 + 144), r7);
        MemoryInline::WriteResolved32(guest_range_9, 140u, (r1 + 148), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_9, 144u, (r1 + 152), r5);
        MemoryInline::WriteResolved32(guest_range_9, 148u, (r1 + 156), r3);
    }
    MemoryInline::WriteResolved32(guest_range_9, 152u, (r1 + 160), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 316u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_2, 316u, (r30 + 552), r30);
        MemoryInline::WriteResolved32(guest_range_2, 320u, (r30 + 556), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 324u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 324u, (r30 + 560), r3);
        MemoryInline::WriteResolved32(guest_range_2, 328u, (r30 + 564), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 332u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_2, 332u, (r30 + 568), r8);
        MemoryInline::WriteResolved32(guest_range_2, 336u, (r30 + 572), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 340u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r14)))) {
        MemoryInline::WriteResolved32(guest_range_2, 340u, (r30 + 576), r6);
        MemoryInline::WriteResolved32(guest_range_2, 344u, (r30 + 580), r14);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 348u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_2, 348u, (r30 + 584), r10);
        MemoryInline::WriteResolved32(guest_range_2, 352u, (r30 + 588), r9);
    }
    r4 = (r31 + 276);
    r3 = (r31 + 288);
    r8 = (r31 + 300);
    r17 = MemoryInline::ReadResolved32(guest_range_6, 132u, (r31 + 276));
    r18 = MemoryInline::ReadResolved32(guest_range_8, 132u, (r4 + 4));
    r7 = (r31 + 312);
    r19 = MemoryInline::ReadResolved32(guest_range_8, 136u, (r4 + 8));
    r6 = (r31 + 324);
    r20 = MemoryInline::ReadResolved32(guest_range_6, 144u, (r31 + 288));
    r5 = (r31 + 336);
    r21 = MemoryInline::ReadResolved32(guest_range_8, 144u, (r3 + 4));
    r4 = (r31 + 348);
    r22 = MemoryInline::ReadResolved32(guest_range_8, 148u, (r3 + 8));
    r14 = (r31 + 360);
    r23 = MemoryInline::ReadResolved32(guest_range_6, 156u, (r31 + 300));
    r16 = (r31 + 372);
    r24 = MemoryInline::ReadResolved32(guest_range_8, 156u, (r8 + 4));
    r3 = 124;
    r25 = MemoryInline::ReadResolved32(guest_range_8, 160u, (r8 + 8));
    MemoryInline::WriteResolved32(guest_range_2, 372u, (r30 + 608), r25);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 360u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_2, 360u, (r30 + 596), r30);
        MemoryInline::WriteResolved32(guest_range_2, 364u, (r30 + 600), r23);
    }
    MemoryInline::WriteResolved32(guest_range_2, 368u, (r30 + 604), r24);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 376u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_2, 376u, (r30 + 612), r20);
        MemoryInline::WriteResolved32(guest_range_2, 380u, (r30 + 616), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 384u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_2, 384u, (r30 + 620), r22);
        MemoryInline::WriteResolved32(guest_range_2, 388u, (r30 + 624), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 392u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_2, 392u, (r30 + 628), r18);
        MemoryInline::WriteResolved32(guest_range_2, 396u, (r30 + 632), r19);
    }
    r26 = MemoryInline::ReadResolved32(guest_range_6, 168u, (r31 + 312));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 168u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_8, 168u, (r7 + 4));
            r28 = MemoryInline::ReadResolved32(guest_range_8, 172u, (r7 + 8));
        }
    }
    r29 = MemoryInline::ReadResolved32(guest_range_6, 180u, (r31 + 324));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 180u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_8, 180u, (r6 + 4));
            r11 = MemoryInline::ReadResolved32(guest_range_8, 184u, (r6 + 8));
        }
    }
    r10 = MemoryInline::ReadResolved32(guest_range_6, 192u, (r31 + 336));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 192u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_8, 192u, (r5 + 4));
            r8 = MemoryInline::ReadResolved32(guest_range_8, 196u, (r5 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_2, 416u, (r30 + 652), r8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 404u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_2, 404u, (r30 + 640), r30);
        MemoryInline::WriteResolved32(guest_range_2, 408u, (r30 + 644), r10);
    }
    MemoryInline::WriteResolved32(guest_range_2, 412u, (r30 + 648), r9);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 420u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_2, 420u, (r30 + 656), r29);
        MemoryInline::WriteResolved32(guest_range_2, 424u, (r30 + 660), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 428u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_2, 428u, (r30 + 664), r11);
        MemoryInline::WriteResolved32(guest_range_2, 432u, (r30 + 668), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 436u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_2, 436u, (r30 + 672), r27);
        MemoryInline::WriteResolved32(guest_range_2, 440u, (r30 + 676), r28);
    }
    r7 = MemoryInline::ReadResolved32(guest_range_6, 204u, (r31 + 348));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 204u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_8, 204u, (r4 + 4));
            r5 = MemoryInline::ReadResolved32(guest_range_8, 208u, (r4 + 8));
        }
    }
    r4 = MemoryInline::ReadResolved32(guest_range_6, 216u, (r31 + 360));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 216u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 216u, (r14 + 4));
            r15 = MemoryInline::ReadResolved32(guest_range_8, 220u, (r14 + 8));
        }
    }
    r14 = MemoryInline::ReadResolved32(guest_range_6, 228u, (r31 + 372));
    r31 = (r31 + 372);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 228u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_8, 228u, (r16 + 4));
            r31 = MemoryInline::ReadResolved32(guest_range_8, 232u, (r31 + 8));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_9, 84u, (r1 + 92), r17);
        MemoryInline::WriteResolved32(guest_range_9, 88u, (r1 + 96), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_9, 92u, (r1 + 100), r19);
        MemoryInline::WriteResolved32(guest_range_9, 96u, (r1 + 104), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_9, 100u, (r1 + 108), r21);
        MemoryInline::WriteResolved32(guest_range_9, 104u, (r1 + 112), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_9, 108u, (r1 + 116), r23);
        MemoryInline::WriteResolved32(guest_range_9, 112u, (r1 + 120), r24);
    }
    MemoryInline::WriteResolved32(guest_range_9, 116u, (r1 + 124), r25);
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_9, 48u, (r1 + 56), r26);
        MemoryInline::WriteResolved32(guest_range_9, 52u, (r1 + 60), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_9, 56u, (r1 + 64), r28);
        MemoryInline::WriteResolved32(guest_range_9, 60u, (r1 + 68), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_9, 64u, (r1 + 72), r12);
        MemoryInline::WriteResolved32(guest_range_9, 68u, (r1 + 76), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_9, 72u, (r1 + 80), r10);
        MemoryInline::WriteResolved32(guest_range_9, 76u, (r1 + 84), r9);
    }
    MemoryInline::WriteResolved32(guest_range_9, 80u, (r1 + 88), r8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_9, 12u, (r1 + 20), r7);
        MemoryInline::WriteResolved32(guest_range_9, 16u, (r1 + 24), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_9, 20u, (r1 + 28), r5);
        MemoryInline::WriteResolved32(guest_range_9, 24u, (r1 + 32), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_9, 28u, (r1 + 36), r0);
        MemoryInline::WriteResolved32(guest_range_9, 32u, (r1 + 40), r15);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r16)))) {
        MemoryInline::WriteResolved32(guest_range_9, 36u, (r1 + 44), r14);
        MemoryInline::WriteResolved32(guest_range_9, 40u, (r1 + 48), r16);
    }
    MemoryInline::WriteResolved32(guest_range_9, 44u, (r1 + 52), r31);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 448u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r14)))) {
        MemoryInline::WriteResolved32(guest_range_2, 448u, (r30 + 684), r30);
        MemoryInline::WriteResolved32(guest_range_2, 452u, (r30 + 688), r14);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 456u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 456u, (r30 + 692), r16);
        MemoryInline::WriteResolved32(guest_range_2, 460u, (r30 + 696), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 464u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 464u, (r30 + 700), r4);
        MemoryInline::WriteResolved32(guest_range_2, 468u, (r30 + 704), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 472u, ((static_cast<uint64_t>(static_cast<uint32_t>(r15)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_2, 472u, (r30 + 708), r15);
        MemoryInline::WriteResolved32(guest_range_2, 476u, (r30 + 712), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 480u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_2, 480u, (r30 + 716), r6);
        MemoryInline::WriteResolved32(guest_range_2, 484u, (r30 + 720), r5);
    }
    ctx->lr = 0x80748840u;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
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
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80748844:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8074885C;
    }
}

loc_80748848:
{
    r4 = 0x808A0000u;
    r5 = 0;
    r4 = (r4 + 11444);
    r4 = (r4 + 9);
    ctx->lr = 0x8074885Cu;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80222CCCu>(ctx);
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
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
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
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8074885C:
{
    MemoryInline::FlatWrite32((r30 + 880), r3);
    r11 = (r1 + 368);
    r3 = r30;
    // inline leaf 0x800215B8 (19 guest instruction(s))
    guest_range_7 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_7, 0u, (r11 + -72));
            r15 = MemoryInline::ReadResolved32(guest_range_7, 4u, (r11 + -68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_7, 8u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_7, 12u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_7, 16u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_7, 20u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_7, 24u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_7, 28u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_7, 32u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_7, 36u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_7, 40u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_7, 44u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_7, 48u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_7, 52u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_7, 56u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_7, 60u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_7, 64u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_7, 68u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215B8
    r0 = MemoryInline::FlatRead32((r1 + 372));
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8074816C func_8074816C preserves=true fpr_mask=0x00000000
