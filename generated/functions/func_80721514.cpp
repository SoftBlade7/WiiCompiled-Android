#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80721514(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80721514;

loc_80721514:
{
    MemoryInline::FlatWriteRam32((r1 + -336), r1);
    r1 = (r1 + -336);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 340), r0);
    r11 = (r1 + 336);
    // inline leaf 0x80021570 (18 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -68), 0, 68u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r15)) << 32) | static_cast<uint32_t>(r16)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -68), r15);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -64), r16);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -60), r17);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -56), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -52), r19);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -48), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -44), r21);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r11 + -4), r31);
    // end of inlined leaf 0x80021570
    r5 = 0x808D0000u;
    r0 = 1;
    r5 = (r5 + -26816);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 94u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r5);
    r17 = 0;
    r31 = 0x808D0000u;
    MemoryInline::WriteResolved8(guest_range_1, 92u, (r3 + 92), static_cast<uint8_t>(r0));
    r30 = r3;
    r18 = r4;
    r31 = (r31 + -27304);
    MemoryInline::WriteResolved8(guest_range_1, 93u, (r3 + 93), static_cast<uint8_t>(r17));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r17);
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 8), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r17);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 16), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 20), r17);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 24), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 28), r17);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r3 + 32), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r3 + 36), r17);
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r3 + 40), r17);
    }
    r3 = (r3 + 96);
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x8074AE2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r5 = 0x808D0000u;
    r4 = 0x808D0000u;
    r5 = (r5 + -26976);
    guest_range_2 = MemoryInline::ResolveRangeHost(r30, 0, 536u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, r30, r5);
    r0 = (r5 + 20);
    r4 = (r4 + -26840);
    MemoryInline::WriteResolved32(guest_range_2, 148u, (r30 + 148), r0);
    r3 = 0x80240000u;
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 152u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_2, 152u, (r30 + 152), r4);
        MemoryInline::WriteResolved32(guest_range_2, 156u, (r30 + 156), r17);
    }
    r3 = (r3 + 28832);
    guest_range_4 = MemoryInline::ResolveRangeHost(r3, 0, 12u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_4, 0u, r3);
            r0 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 160u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 164u, (r30 + 164), r0);
        MemoryInline::WriteResolved32(guest_range_2, 160u, (r30 + 160), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_2, 168u, (r30 + 168), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_4, 0u, r3);
            r0 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 172u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 176u, (r30 + 176), r0);
        MemoryInline::WriteResolved32(guest_range_2, 172u, (r30 + 172), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_2, 180u, (r30 + 180), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_4, 0u, r3);
            r0 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 184u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 188u, (r30 + 188), r0);
        MemoryInline::WriteResolved32(guest_range_2, 184u, (r30 + 184), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r3 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 192u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 192u, (r30 + 192), r0);
        MemoryInline::WriteResolved32(guest_range_2, 196u, (r30 + 196), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 200u, (r30 + 200), r17);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_4, 0u, r3);
            r0 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 204u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 208u, (r30 + 208), r0);
        MemoryInline::WriteResolved32(guest_range_2, 204u, (r30 + 204), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_2, 212u, (r30 + 212), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_4, 0u, r3);
            r0 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 216u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 220u, (r30 + 220), r0);
        MemoryInline::WriteResolved32(guest_range_2, 216u, (r30 + 216), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_2, 224u, (r30 + 224), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_4, 0u, r3);
            r0 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 228u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 232u, (r30 + 232), r0);
        MemoryInline::WriteResolved32(guest_range_2, 228u, (r30 + 228), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r3 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 236u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 236u, (r30 + 236), r0);
        MemoryInline::WriteResolved32(guest_range_2, 240u, (r30 + 240), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 244u, (r30 + 244), r17);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_4, 0u, r3);
            r0 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 248u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 252u, (r30 + 252), r0);
        MemoryInline::WriteResolved32(guest_range_2, 248u, (r30 + 248), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_2, 256u, (r30 + 256), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_4, 0u, r3);
            r0 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 260u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 264u, (r30 + 264), r0);
        MemoryInline::WriteResolved32(guest_range_2, 260u, (r30 + 260), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_2, 268u, (r30 + 268), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_4, 0u, r3);
            r0 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 272u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 276u, (r30 + 276), r0);
        MemoryInline::WriteResolved32(guest_range_2, 272u, (r30 + 272), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r3 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 280u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 280u, (r30 + 280), r0);
        MemoryInline::WriteResolved32(guest_range_2, 284u, (r30 + 284), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 288u, (r30 + 288), r17);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_4, 0u, r3);
            r0 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 292u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 296u, (r30 + 296), r0);
        MemoryInline::WriteResolved32(guest_range_2, 292u, (r30 + 292), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_2, 300u, (r30 + 300), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_4, 0u, r3);
            r0 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 304u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 308u, (r30 + 308), r0);
        MemoryInline::WriteResolved32(guest_range_2, 304u, (r30 + 304), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_2, 312u, (r30 + 312), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_4, 0u, r3);
            r0 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 316u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 320u, (r30 + 320), r0);
        MemoryInline::WriteResolved32(guest_range_2, 316u, (r30 + 316), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r3 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 324u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 324u, (r30 + 324), r0);
        MemoryInline::WriteResolved32(guest_range_2, 328u, (r30 + 328), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 332u, (r30 + 332), r17);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_4, 0u, r3);
            r0 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 336u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 340u, (r30 + 340), r0);
        MemoryInline::WriteResolved32(guest_range_2, 336u, (r30 + 336), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_2, 344u, (r30 + 344), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_4, 0u, r3);
            r0 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 348u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 352u, (r30 + 352), r0);
        MemoryInline::WriteResolved32(guest_range_2, 348u, (r30 + 348), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_2, 356u, (r30 + 356), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_4, 0u, r3);
            r0 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 360u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 364u, (r30 + 364), r0);
        MemoryInline::WriteResolved32(guest_range_2, 360u, (r30 + 360), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r3 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 368u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 368u, (r30 + 368), r0);
        MemoryInline::WriteResolved32(guest_range_2, 372u, (r30 + 372), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 376u, (r30 + 376), r17);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_4, 0u, r3);
            r0 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 380u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 384u, (r30 + 384), r0);
        MemoryInline::WriteResolved32(guest_range_2, 380u, (r30 + 380), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_2, 388u, (r30 + 388), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_4, 0u, r3);
            r0 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 392u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 396u, (r30 + 396), r0);
        MemoryInline::WriteResolved32(guest_range_2, 392u, (r30 + 392), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_2, 400u, (r30 + 400), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_4, 0u, r3);
            r0 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 404u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 408u, (r30 + 408), r0);
        MemoryInline::WriteResolved32(guest_range_2, 404u, (r30 + 404), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r3 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 412u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 412u, (r30 + 412), r0);
        MemoryInline::WriteResolved32(guest_range_2, 416u, (r30 + 416), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 420u, (r30 + 420), r17);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_4, 0u, r3);
            r0 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 424u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 428u, (r30 + 428), r0);
        MemoryInline::WriteResolved32(guest_range_2, 424u, (r30 + 424), r4);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_2, 432u, (r30 + 432), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_4, 0u, r3);
            r0 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 436u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 440u, (r30 + 440), r0);
        MemoryInline::WriteResolved32(guest_range_2, 436u, (r30 + 436), r4);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_2, 444u, (r30 + 444), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_4, 0u, r3);
            r0 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 448u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 452u, (r30 + 452), r0);
        MemoryInline::WriteResolved32(guest_range_2, 448u, (r30 + 448), r4);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r3 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 456u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_2, 456u, (r30 + 456), r0);
        MemoryInline::WriteResolved32(guest_range_2, 460u, (r30 + 460), r18);
    }
    MemoryInline::WriteResolved32(guest_range_2, 464u, (r30 + 464), r17);
    MemoryInline::WriteResolved8(guest_range_2, 480u, (r30 + 480), static_cast<uint8_t>(r17));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 520u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_2, 520u, (r30 + 520), r17);
        MemoryInline::WriteResolved32(guest_range_2, 524u, (r30 + 524), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 528u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_2, 528u, (r30 + 528), r17);
        MemoryInline::WriteResolved32(guest_range_2, 532u, (r30 + 532), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 500u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_2, 500u, (r30 + 500), r17);
        MemoryInline::WriteResolved32(guest_range_2, 504u, (r30 + 504), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 508u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_2, 508u, (r30 + 508), r17);
        MemoryInline::WriteResolved32(guest_range_2, 512u, (r30 + 512), r17);
    }
    MemoryInline::WriteResolved32(guest_range_2, 516u, (r30 + 516), r17);
    ctx->lr = 0x80721808u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80565630u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    MemoryInline::FlatWrite32((r30 + 524), r3);
    r3 = 360;
    ctx->lr = 0x80721814u;
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

loc_80721818:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80721824;
    }
}

loc_8072181C:
{
    r4 = r18;
    ctx->lr = 0x80721824u;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8071E9B4u>(ctx);
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

loc_80721824:
{
    MemoryInline::FlatWrite32((r30 + 520), r3);
    r3 = 28;
    ctx->lr = 0x80721830u;
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

loc_80721834:
{
    r15 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072186C;
    }
}

loc_8072183C:
{
    r4 = 2;
    ctx->lr = 0x80721844u;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8074BF28u>(ctx);
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
    r4 = 0x808D0000u;
    r3 = 0x808A0000u;
    r4 = (r4 + -26796);
    MemoryInline::FlatWriteRam32(r15, r4);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8440));
    r3 = 0x808D0000u;
    MemoryInline::FlatWriteRamFloat32((r15 + 12), f0.d);
    r3 = (r3 + -26864);
    MemoryInline::FlatWriteRamFloat32((r15 + 16), f0.d);
    MemoryInline::FlatWriteRam32(r15, r3);
}

loc_8072186C:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r30 + 156), 0, 376u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 372u, (r30 + 528), r15);
    r8 = (r31 + 120);
    r7 = (r31 + 132);
    r4 = 0x80240000u;
    r4 = (r4 + 28832);
    guest_range_5 = MemoryInline::ResolveRangeHost(r4, 0, 12u, true, false);
    r17 = MemoryInline::ReadResolved32(guest_range_5, 0u, r4);
    r6 = (r31 + 144);
    guest_range_6 = MemoryInline::ResolveRangeHost((r31 + 120), 0, 196u, true, false);
    r20 = MemoryInline::ReadResolved32(guest_range_6, 0u, (r31 + 120));
    r5 = (r31 + 156);
    r18 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r4 + 4));
    r3 = (r31 + 168);
    r19 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r4 + 8));
    r16 = (r31 + 180);
    guest_range_8 = MemoryInline::ResolveRangeHost((r8 + 4), 0, 200u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 0u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_8, 0u, (r8 + 4));
            r22 = MemoryInline::ReadResolved32(guest_range_8, 4u, (r8 + 8));
        }
    }
    r23 = MemoryInline::ReadResolved32(guest_range_6, 12u, (r31 + 132));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 12u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_8, 12u, (r7 + 4));
            r25 = MemoryInline::ReadResolved32(guest_range_8, 16u, (r7 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_3, 12u, (r30 + 168), r25);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_3, 0u, (r30 + 156), r30);
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r30 + 160), r23);
    }
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r30 + 164), r24);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r30 + 172), r20);
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r30 + 176), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r30 + 180), r22);
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r30 + 184), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r30 + 188), r18);
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r30 + 192), r19);
    }
    r26 = MemoryInline::ReadResolved32(guest_range_6, 24u, (r31 + 144));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 24u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_8, 24u, (r6 + 4));
            r28 = MemoryInline::ReadResolved32(guest_range_8, 28u, (r6 + 8));
        }
    }
    r29 = MemoryInline::ReadResolved32(guest_range_6, 36u, (r31 + 156));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 36u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_8, 36u, (r5 + 4));
            r11 = MemoryInline::ReadResolved32(guest_range_8, 40u, (r5 + 8));
        }
    }
    r10 = MemoryInline::ReadResolved32(guest_range_6, 48u, (r31 + 168));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 48u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_8, 48u, (r3 + 4));
            r15 = MemoryInline::ReadResolved32(guest_range_8, 52u, (r3 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_3, 56u, (r30 + 212), r15);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r30 + 200), r30);
        MemoryInline::WriteResolved32(guest_range_3, 48u, (r30 + 204), r10);
    }
    MemoryInline::WriteResolved32(guest_range_3, 52u, (r30 + 208), r9);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_3, 60u, (r30 + 216), r29);
        MemoryInline::WriteResolved32(guest_range_3, 64u, (r30 + 220), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_3, 68u, (r30 + 224), r11);
        MemoryInline::WriteResolved32(guest_range_3, 72u, (r30 + 228), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_3, 76u, (r30 + 232), r27);
        MemoryInline::WriteResolved32(guest_range_3, 80u, (r30 + 236), r28);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 0u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_5, 0u, r4);
            r7 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r4 + 4));
        }
    }
    r6 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r4 + 8));
    r5 = MemoryInline::ReadResolved32(guest_range_6, 60u, (r31 + 180));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 60u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_8, 60u, (r16 + 4));
            r0 = MemoryInline::ReadResolved32(guest_range_8, 64u, (r16 + 8));
        }
    }
    guest_range_9 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 252u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 216u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_9, 216u, (r1 + 224), r17);
        MemoryInline::WriteResolved32(guest_range_9, 220u, (r1 + 228), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 224u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_9, 224u, (r1 + 232), r19);
        MemoryInline::WriteResolved32(guest_range_9, 228u, (r1 + 236), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 232u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_9, 232u, (r1 + 240), r21);
        MemoryInline::WriteResolved32(guest_range_9, 236u, (r1 + 244), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 240u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_9, 240u, (r1 + 248), r23);
        MemoryInline::WriteResolved32(guest_range_9, 244u, (r1 + 252), r24);
    }
    MemoryInline::WriteResolved32(guest_range_9, 248u, (r1 + 256), r25);
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 180u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_9, 180u, (r1 + 188), r26);
        MemoryInline::WriteResolved32(guest_range_9, 184u, (r1 + 192), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 188u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_9, 188u, (r1 + 196), r28);
        MemoryInline::WriteResolved32(guest_range_9, 192u, (r1 + 200), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 196u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_9, 196u, (r1 + 204), r12);
        MemoryInline::WriteResolved32(guest_range_9, 200u, (r1 + 208), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 204u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_9, 204u, (r1 + 212), r10);
        MemoryInline::WriteResolved32(guest_range_9, 208u, (r1 + 216), r9);
    }
    MemoryInline::WriteResolved32(guest_range_9, 212u, (r1 + 220), r15);
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_9, 144u, (r1 + 152), r8);
        MemoryInline::WriteResolved32(guest_range_9, 148u, (r1 + 156), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 152u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_9, 152u, (r1 + 160), r6);
        MemoryInline::WriteResolved32(guest_range_9, 156u, (r1 + 164), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 160u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_9, 160u, (r1 + 168), r3);
        MemoryInline::WriteResolved32(guest_range_9, 164u, (r1 + 172), r0);
    }
    r9 = (r31 + 192);
    r12 = MemoryInline::ReadResolved32(guest_range_6, 72u, (r31 + 192));
    r11 = MemoryInline::ReadResolved32(guest_range_8, 72u, (r9 + 4));
    r21 = (r31 + 204);
    r10 = MemoryInline::ReadResolved32(guest_range_8, 76u, (r9 + 8));
    r20 = (r31 + 216);
    MemoryInline::WriteResolved32(guest_range_3, 100u, (r30 + 256), r10);
    r19 = (r31 + 228);
    r18 = (r31 + 240);
    r17 = (r31 + 252);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_3, 88u, (r30 + 244), r30);
        MemoryInline::WriteResolved32(guest_range_3, 92u, (r30 + 248), r12);
    }
    MemoryInline::WriteResolved32(guest_range_3, 96u, (r30 + 252), r11);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_3, 104u, (r30 + 260), r5);
        MemoryInline::WriteResolved32(guest_range_3, 108u, (r30 + 264), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_3, 112u, (r30 + 268), r0);
        MemoryInline::WriteResolved32(guest_range_3, 116u, (r30 + 272), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_3, 120u, (r30 + 276), r7);
        MemoryInline::WriteResolved32(guest_range_3, 124u, (r30 + 280), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 0u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_5, 0u, r4);
            r8 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r4 + 4));
        }
    }
    r7 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r4 + 8));
    r6 = MemoryInline::ReadResolved32(guest_range_6, 84u, (r31 + 204));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 84u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_8, 84u, (r21 + 4));
            r27 = MemoryInline::ReadResolved32(guest_range_8, 88u, (r21 + 8));
        }
    }
    r26 = MemoryInline::ReadResolved32(guest_range_6, 96u, (r31 + 216));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 96u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_8, 96u, (r20 + 4));
            r24 = MemoryInline::ReadResolved32(guest_range_8, 100u, (r20 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_3, 144u, (r30 + 300), r24);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_3, 132u, (r30 + 288), r30);
        MemoryInline::WriteResolved32(guest_range_3, 136u, (r30 + 292), r26);
    }
    MemoryInline::WriteResolved32(guest_range_3, 140u, (r30 + 296), r25);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 148u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_3, 148u, (r30 + 304), r6);
        MemoryInline::WriteResolved32(guest_range_3, 152u, (r30 + 308), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 156u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_3, 156u, (r30 + 312), r27);
        MemoryInline::WriteResolved32(guest_range_3, 160u, (r30 + 316), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 164u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_3, 164u, (r30 + 320), r8);
        MemoryInline::WriteResolved32(guest_range_3, 168u, (r30 + 324), r7);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_6, 108u, (r31 + 228));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 108u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 108u, (r19 + 4));
            r23 = MemoryInline::ReadResolved32(guest_range_8, 112u, (r19 + 8));
        }
    }
    r22 = MemoryInline::ReadResolved32(guest_range_6, 120u, (r31 + 240));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 120u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_8, 120u, (r18 + 4));
            r20 = MemoryInline::ReadResolved32(guest_range_8, 124u, (r18 + 8));
        }
    }
    r18 = MemoryInline::ReadResolved32(guest_range_8, 132u, (r17 + 4));
    r19 = MemoryInline::ReadResolved32(guest_range_6, 132u, (r31 + 252));
    r17 = MemoryInline::ReadResolved32(guest_range_8, 136u, (r17 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 168u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_9, 168u, (r1 + 176), r12);
        MemoryInline::WriteResolved32(guest_range_9, 172u, (r1 + 180), r11);
    }
    MemoryInline::WriteResolved32(guest_range_9, 176u, (r1 + 184), r10);
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_9, 108u, (r1 + 116), r9);
        MemoryInline::WriteResolved32(guest_range_9, 112u, (r1 + 120), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_9, 116u, (r1 + 124), r7);
        MemoryInline::WriteResolved32(guest_range_9, 120u, (r1 + 128), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 124u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_9, 124u, (r1 + 132), r3);
        MemoryInline::WriteResolved32(guest_range_9, 128u, (r1 + 136), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_9, 132u, (r1 + 140), r26);
        MemoryInline::WriteResolved32(guest_range_9, 136u, (r1 + 144), r25);
    }
    MemoryInline::WriteResolved32(guest_range_9, 140u, (r1 + 148), r24);
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_9, 72u, (r1 + 80), r5);
        MemoryInline::WriteResolved32(guest_range_9, 76u, (r1 + 84), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_9, 80u, (r1 + 88), r23);
        MemoryInline::WriteResolved32(guest_range_9, 84u, (r1 + 92), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_9, 88u, (r1 + 96), r21);
        MemoryInline::WriteResolved32(guest_range_9, 92u, (r1 + 100), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_9, 96u, (r1 + 104), r19);
        MemoryInline::WriteResolved32(guest_range_9, 100u, (r1 + 108), r18);
    }
    MemoryInline::WriteResolved32(guest_range_9, 104u, (r1 + 112), r17);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 176u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_3, 176u, (r30 + 332), r30);
        MemoryInline::WriteResolved32(guest_range_3, 180u, (r30 + 336), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 184u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_3, 184u, (r30 + 340), r18);
        MemoryInline::WriteResolved32(guest_range_3, 188u, (r30 + 344), r17);
    }
    MemoryInline::WriteResolved32(guest_range_3, 192u, (r30 + 348), r22);
    r10 = (r31 + 264);
    r9 = (r31 + 276);
    r8 = (r31 + 288);
    MemoryInline::WriteResolved32(guest_range_3, 196u, (r30 + 352), r21);
    r7 = (r31 + 300);
    r6 = (r31 + 312);
    r3 = (r30 + 96);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 200u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_3, 200u, (r30 + 356), r20);
        MemoryInline::WriteResolved32(guest_range_3, 204u, (r30 + 360), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 208u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_3, 208u, (r30 + 364), r0);
        MemoryInline::WriteResolved32(guest_range_3, 212u, (r30 + 368), r23);
    }
    r25 = MemoryInline::ReadResolved32(guest_range_6, 144u, (r31 + 264));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 144u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_8, 144u, (r10 + 4));
            r23 = MemoryInline::ReadResolved32(guest_range_8, 148u, (r10 + 8));
        }
    }
    r22 = MemoryInline::ReadResolved32(guest_range_6, 156u, (r31 + 276));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 156u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_8, 156u, (r9 + 4));
            r20 = MemoryInline::ReadResolved32(guest_range_8, 160u, (r9 + 8));
        }
    }
    r19 = MemoryInline::ReadResolved32(guest_range_6, 168u, (r31 + 288));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 168u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_8, 168u, (r8 + 4));
            r17 = MemoryInline::ReadResolved32(guest_range_8, 172u, (r8 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_3, 232u, (r30 + 388), r17);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 220u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_3, 220u, (r30 + 376), r30);
        MemoryInline::WriteResolved32(guest_range_3, 224u, (r30 + 380), r19);
    }
    MemoryInline::WriteResolved32(guest_range_3, 228u, (r30 + 384), r18);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 236u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_3, 236u, (r30 + 392), r22);
        MemoryInline::WriteResolved32(guest_range_3, 240u, (r30 + 396), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 244u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_3, 244u, (r30 + 400), r20);
        MemoryInline::WriteResolved32(guest_range_3, 248u, (r30 + 404), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 252u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_3, 252u, (r30 + 408), r24);
        MemoryInline::WriteResolved32(guest_range_3, 256u, (r30 + 412), r23);
    }
    r8 = MemoryInline::ReadResolved32(guest_range_8, 180u, (r7 + 4));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 0u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_5, 0u, r4);
            r11 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r4 + 4));
        }
    }
    r10 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r4 + 8));
    r9 = MemoryInline::ReadResolved32(guest_range_6, 180u, (r31 + 300));
    r7 = MemoryInline::ReadResolved32(guest_range_8, 184u, (r7 + 8));
    r5 = MemoryInline::ReadResolved32(guest_range_6, 192u, (r31 + 312));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 192u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_8, 192u, (r6 + 4));
            r0 = MemoryInline::ReadResolved32(guest_range_8, 196u, (r6 + 8));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_9, 36u, (r1 + 44), r25);
        MemoryInline::WriteResolved32(guest_range_9, 40u, (r1 + 48), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_9, 44u, (r1 + 52), r23);
        MemoryInline::WriteResolved32(guest_range_9, 48u, (r1 + 56), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_9, 52u, (r1 + 60), r21);
        MemoryInline::WriteResolved32(guest_range_9, 56u, (r1 + 64), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_9, 60u, (r1 + 68), r19);
        MemoryInline::WriteResolved32(guest_range_9, 64u, (r1 + 72), r18);
    }
    MemoryInline::WriteResolved32(guest_range_9, 68u, (r1 + 76), r17);
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_9, 0u, (r1 + 8), r12);
        MemoryInline::WriteResolved32(guest_range_9, 4u, (r1 + 12), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_9, 8u, (r1 + 16), r10);
        MemoryInline::WriteResolved32(guest_range_9, 12u, (r1 + 20), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_9, 16u, (r1 + 24), r8);
        MemoryInline::WriteResolved32(guest_range_9, 20u, (r1 + 28), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_9, 24u, (r1 + 32), r5);
        MemoryInline::WriteResolved32(guest_range_9, 28u, (r1 + 36), r4);
    }
    MemoryInline::WriteResolved32(guest_range_9, 32u, (r1 + 40), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 264u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_3, 264u, (r30 + 420), r30);
        MemoryInline::WriteResolved32(guest_range_3, 268u, (r30 + 424), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 272u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 272u, (r30 + 428), r4);
        MemoryInline::WriteResolved32(guest_range_3, 276u, (r30 + 432), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 280u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_3, 280u, (r30 + 436), r9);
        MemoryInline::WriteResolved32(guest_range_3, 284u, (r30 + 440), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 288u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_3, 288u, (r30 + 444), r7);
        MemoryInline::WriteResolved32(guest_range_3, 292u, (r30 + 448), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 296u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_3, 296u, (r30 + 452), r11);
        MemoryInline::WriteResolved32(guest_range_3, 300u, (r30 + 456), r10);
    }
    // inline leaf 0x8074AFB4 (6 guest instruction(s))
    r4 = (r3 + 8);
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r3 = 1;
    // end of inlined leaf 0x8074AFB4
    r3 = 184;
    ctx->lr = 0x80721BD8u;
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

loc_80721BDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80721BE4;
    }
}

loc_80721BE0:
{
    ctx->lr = 0x80721BE4u;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8070CA8Cu>(ctx);
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

loc_80721BE4:
{
    MemoryInline::FlatWrite32((r30 + 532), r3);
    r4 = 0x809C0000u;
    r11 = (r1 + 336);
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r4 + 6584));
    r0 = MemoryInline::FlatRead8((r4 + 38));
    MemoryInline::FlatWrite8((r30 + 480), static_cast<uint8_t>(r0));
    // inline leaf 0x800215BC (18 guest instruction(s))
    guest_range_7 = MemoryInline::ResolveRangeHost((r11 + -68), 0, 68u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 0u);
        if (resolved_pair.valid) {
            r15 = resolved_pair.first;
            r16 = resolved_pair.second;
        } else {
            r15 = MemoryInline::ReadResolved32(guest_range_7, 0u, (r11 + -68));
            r16 = MemoryInline::ReadResolved32(guest_range_7, 4u, (r11 + -64));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 8u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_7, 8u, (r11 + -60));
            r18 = MemoryInline::ReadResolved32(guest_range_7, 12u, (r11 + -56));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 16u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_7, 16u, (r11 + -52));
            r20 = MemoryInline::ReadResolved32(guest_range_7, 20u, (r11 + -48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 24u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_7, 24u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_7, 28u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 32u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_7, 32u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_7, 36u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 40u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_7, 40u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_7, 44u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 48u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_7, 48u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_7, 52u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 56u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_7, 56u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_7, 60u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_7, 64u, (r11 + -4));
    // end of inlined leaf 0x800215BC
    r0 = MemoryInline::FlatRead32((r1 + 340));
    ctx->lr = r0;
    r1 = (r1 + 336);
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFDF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80721514 func_80721514 preserves=true fpr_mask=0x00000000
