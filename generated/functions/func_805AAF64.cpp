#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805AAF64(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;

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

    goto loc_805AAF64;

loc_805AAF64:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -336), 0, 344u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -336), r1);
    r1 = (r1 + -336);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 340u, (r1 + 340), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 268u, ((static_cast<uint64_t>(static_cast<uint32_t>(r15)) << 32) | static_cast<uint32_t>(r16)))) {
        MemoryInline::WriteResolved32(guest_range_3, 268u, (r1 + 268), r15);
        MemoryInline::WriteResolved32(guest_range_3, 272u, (r1 + 272), r16);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 276u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_3, 276u, (r1 + 276), r17);
        MemoryInline::WriteResolved32(guest_range_3, 280u, (r1 + 280), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 284u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_3, 284u, (r1 + 284), r19);
        MemoryInline::WriteResolved32(guest_range_3, 288u, (r1 + 288), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 292u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_3, 292u, (r1 + 292), r21);
        MemoryInline::WriteResolved32(guest_range_3, 296u, (r1 + 296), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 300u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_3, 300u, (r1 + 300), r23);
        MemoryInline::WriteResolved32(guest_range_3, 304u, (r1 + 304), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 308u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_3, 308u, (r1 + 308), r25);
        MemoryInline::WriteResolved32(guest_range_3, 312u, (r1 + 312), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 316u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_3, 316u, (r1 + 316), r27);
        MemoryInline::WriteResolved32(guest_range_3, 320u, (r1 + 320), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 324u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_3, 324u, (r1 + 324), r29);
        MemoryInline::WriteResolved32(guest_range_3, 328u, (r1 + 328), r30);
    }
    MemoryInline::WriteResolved32(guest_range_3, 332u, (r1 + 332), r31);
    r31 = 0x808B0000u;
    r30 = r3;
    r31 = (r31 + 27800);
    ctx->lr = 0x805AAF84u;
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
    InvokeDirectCpu<0x805A9C04u>(ctx);
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
    r5 = 0x808B0000u;
    r3 = 0x808B0000u;
    r5 = (r5 + 28136);
    r0 = 0;
    r3 = (r3 + 28168);
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 440u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r30, r5);
    r4 = 0x80240000u;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r30 + 112), r3);
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r30 + 116), r0);
    }
    r4 = (r4 + 28832);
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 12u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r30 + 124), r5);
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r30 + 120), r6);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 128u, (r30 + 128), r5);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 136u, (r30 + 136), r5);
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r30 + 132), r6);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 140u, (r30 + 140), r5);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 148u, (r30 + 148), r5);
        MemoryInline::WriteResolved32(guest_range_0, 144u, (r30 + 144), r6);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 152u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 152u, (r30 + 152), r5);
        MemoryInline::WriteResolved32(guest_range_0, 156u, (r30 + 156), r3);
    }
    MemoryInline::WriteResolved32(guest_range_0, 160u, (r30 + 160), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 164u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 168u, (r30 + 168), r5);
        MemoryInline::WriteResolved32(guest_range_0, 164u, (r30 + 164), r6);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 172u, (r30 + 172), r5);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 176u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 180u, (r30 + 180), r5);
        MemoryInline::WriteResolved32(guest_range_0, 176u, (r30 + 176), r6);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 184u, (r30 + 184), r5);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 188u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 192u, (r30 + 192), r5);
        MemoryInline::WriteResolved32(guest_range_0, 188u, (r30 + 188), r6);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 196u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 196u, (r30 + 196), r5);
        MemoryInline::WriteResolved32(guest_range_0, 200u, (r30 + 200), r3);
    }
    MemoryInline::WriteResolved32(guest_range_0, 204u, (r30 + 204), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 208u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 212u, (r30 + 212), r5);
        MemoryInline::WriteResolved32(guest_range_0, 208u, (r30 + 208), r6);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 216u, (r30 + 216), r5);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 220u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 224u, (r30 + 224), r5);
        MemoryInline::WriteResolved32(guest_range_0, 220u, (r30 + 220), r6);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 228u, (r30 + 228), r5);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 232u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 236u, (r30 + 236), r5);
        MemoryInline::WriteResolved32(guest_range_0, 232u, (r30 + 232), r6);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 240u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 240u, (r30 + 240), r5);
        MemoryInline::WriteResolved32(guest_range_0, 244u, (r30 + 244), r3);
    }
    r5 = 0x808B0000u;
    r5 = (r5 + 28224);
    MemoryInline::WriteResolved32(guest_range_0, 248u, (r30 + 248), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 252u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 256u, (r30 + 256), r6);
        MemoryInline::WriteResolved32(guest_range_0, 252u, (r30 + 252), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 260u, (r30 + 260), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 264u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 268u, (r30 + 268), r6);
        MemoryInline::WriteResolved32(guest_range_0, 264u, (r30 + 264), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 272u, (r30 + 272), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 276u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 280u, (r30 + 280), r6);
        MemoryInline::WriteResolved32(guest_range_0, 276u, (r30 + 276), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 284u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 284u, (r30 + 284), r6);
        MemoryInline::WriteResolved32(guest_range_0, 288u, (r30 + 288), r3);
    }
    MemoryInline::WriteResolved32(guest_range_0, 292u, (r30 + 292), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 296u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 300u, (r30 + 300), r6);
        MemoryInline::WriteResolved32(guest_range_0, 296u, (r30 + 296), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 304u, (r30 + 304), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 308u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 312u, (r30 + 312), r6);
        MemoryInline::WriteResolved32(guest_range_0, 308u, (r30 + 308), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 316u, (r30 + 316), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 320u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 324u, (r30 + 324), r6);
        MemoryInline::WriteResolved32(guest_range_0, 320u, (r30 + 320), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 328u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 328u, (r30 + 328), r6);
        MemoryInline::WriteResolved32(guest_range_0, 332u, (r30 + 332), r3);
    }
    MemoryInline::WriteResolved32(guest_range_0, 336u, (r30 + 336), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 340u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 344u, (r30 + 344), r6);
        MemoryInline::WriteResolved32(guest_range_0, 340u, (r30 + 340), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 348u, (r30 + 348), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 352u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 356u, (r30 + 356), r6);
        MemoryInline::WriteResolved32(guest_range_0, 352u, (r30 + 352), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 360u, (r30 + 360), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 364u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 368u, (r30 + 368), r6);
        MemoryInline::WriteResolved32(guest_range_0, 364u, (r30 + 364), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 372u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 372u, (r30 + 372), r6);
        MemoryInline::WriteResolved32(guest_range_0, 376u, (r30 + 376), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 376u, (r30 + 376), r3);
    r8 = 0x802A0000u;
    r5 = (r31 + 24);
    r3 = (r31 + 36);
    MemoryInline::WriteResolved32(guest_range_0, 380u, (r30 + 380), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 384u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 388u, (r30 + 388), r6);
        MemoryInline::WriteResolved32(guest_range_0, 384u, (r30 + 384), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 392u, (r30 + 392), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 396u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 400u, (r30 + 400), r6);
        MemoryInline::WriteResolved32(guest_range_0, 396u, (r30 + 396), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 404u, (r30 + 404), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 408u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 412u, (r30 + 412), r6);
        MemoryInline::WriteResolved32(guest_range_0, 408u, (r30 + 408), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 416u, (r30 + 416), r6);
    MemoryInline::WriteResolved8(guest_range_0, 420u, (r30 + 420), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 421u, (r30 + 421), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 422u, (r30 + 422), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 423u, (r30 + 423), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 424u, (r30 + 424), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 426u, (r30 + 426), static_cast<uint16_t>(r0));
    r8 = (r8 + 16640);
    r7 = MemoryInline::FlatRead32(r8);
    r6 = MemoryInline::FlatRead32((r8 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 428u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 432u, (r30 + 432), r6);
        MemoryInline::WriteResolved32(guest_range_0, 428u, (r30 + 428), r7);
    }
    r6 = MemoryInline::FlatRead32((r8 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 436u, (r30 + 436), r6);
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r30 + 76), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r15 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    r12 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 24), 0, 160u, true, false);
    r11 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r31 + 24));
    guest_range_4 = MemoryInline::ResolveRangeHost((r5 + 4), 0, 164u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r10 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r5 + 4));
            r7 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r5 + 8));
        }
    }
    r5 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r3 + 4));
    r6 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r31 + 36));
    r3 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 128u, (r30 + 128), r3);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r30 + 116), r30);
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r30 + 120), r6);
    }
    MemoryInline::WriteResolved32(guest_range_0, 124u, (r30 + 124), r5);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r30 + 132), r11);
        MemoryInline::WriteResolved32(guest_range_0, 136u, (r30 + 136), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r16)))) {
        MemoryInline::WriteResolved32(guest_range_0, 140u, (r30 + 140), r7);
        MemoryInline::WriteResolved32(guest_range_0, 144u, (r30 + 144), r16);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 148u, ((static_cast<uint64_t>(static_cast<uint32_t>(r15)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_0, 148u, (r30 + 148), r15);
        MemoryInline::WriteResolved32(guest_range_0, 152u, (r30 + 152), r12);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r8 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 252u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 216u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_5, 216u, (r1 + 224), r16);
        MemoryInline::WriteResolved32(guest_range_5, 220u, (r1 + 228), r15);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 224u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_5, 224u, (r1 + 232), r12);
        MemoryInline::WriteResolved32(guest_range_5, 228u, (r1 + 236), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 232u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_5, 232u, (r1 + 240), r10);
        MemoryInline::WriteResolved32(guest_range_5, 236u, (r1 + 244), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 240u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_5, 240u, (r1 + 248), r6);
        MemoryInline::WriteResolved32(guest_range_5, 244u, (r1 + 252), r5);
    }
    MemoryInline::WriteResolved32(guest_range_5, 248u, (r1 + 256), r3);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 180u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_5, 180u, (r1 + 188), r9);
        MemoryInline::WriteResolved32(guest_range_5, 184u, (r1 + 192), r8);
    }
    MemoryInline::WriteResolved32(guest_range_5, 188u, (r1 + 196), r0);
    r3 = (r31 + 48);
    r7 = (r31 + 60);
    r16 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r31 + 48));
    r6 = (r31 + 72);
    r17 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r3 + 4));
    r5 = (r31 + 84);
    r18 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r3 + 8));
    r3 = (r31 + 96);
    r19 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r31 + 60));
    r15 = (r31 + 108);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 36u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r7 + 4));
            r21 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r7 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_0, 172u, (r30 + 172), r21);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 160u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 160u, (r30 + 160), r30);
        MemoryInline::WriteResolved32(guest_range_0, 164u, (r30 + 164), r19);
    }
    MemoryInline::WriteResolved32(guest_range_0, 168u, (r30 + 168), r20);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 176u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 176u, (r30 + 176), r16);
        MemoryInline::WriteResolved32(guest_range_0, 180u, (r30 + 180), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 184u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_0, 184u, (r30 + 184), r18);
        MemoryInline::WriteResolved32(guest_range_0, 188u, (r30 + 188), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 192u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 192u, (r30 + 192), r8);
        MemoryInline::WriteResolved32(guest_range_0, 196u, (r30 + 196), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r23 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    r24 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    r25 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r31 + 72));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_4, 48u, (r6 + 4));
            r27 = MemoryInline::ReadResolved32(guest_range_4, 52u, (r6 + 8));
        }
    }
    r28 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r31 + 84));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 60u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_4, 60u, (r5 + 4));
            r12 = MemoryInline::ReadResolved32(guest_range_4, 64u, (r5 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_0, 216u, (r30 + 216), r12);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 204u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 204u, (r30 + 204), r30);
        MemoryInline::WriteResolved32(guest_range_0, 208u, (r30 + 208), r28);
    }
    MemoryInline::WriteResolved32(guest_range_0, 212u, (r30 + 212), r29);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 220u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 220u, (r30 + 220), r25);
        MemoryInline::WriteResolved32(guest_range_0, 224u, (r30 + 224), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 228u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 228u, (r30 + 228), r27);
        MemoryInline::WriteResolved32(guest_range_0, 232u, (r30 + 232), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 236u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 236u, (r30 + 236), r23);
        MemoryInline::WriteResolved32(guest_range_0, 240u, (r30 + 240), r24);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r10 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    r9 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    r8 = MemoryInline::ReadResolved32(guest_range_2, 72u, (r31 + 96));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 72u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_4, 72u, (r3 + 4));
            r6 = MemoryInline::ReadResolved32(guest_range_4, 76u, (r3 + 8));
        }
    }
    r5 = MemoryInline::ReadResolved32(guest_range_2, 84u, (r31 + 108));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 84u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 84u, (r15 + 4));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 88u, (r15 + 8));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 192u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_5, 192u, (r1 + 200), r16);
        MemoryInline::WriteResolved32(guest_range_5, 196u, (r1 + 204), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 200u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_5, 200u, (r1 + 208), r18);
        MemoryInline::WriteResolved32(guest_range_5, 204u, (r1 + 212), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 208u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_5, 208u, (r1 + 216), r20);
        MemoryInline::WriteResolved32(guest_range_5, 212u, (r1 + 220), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_5, 144u, (r1 + 152), r22);
        MemoryInline::WriteResolved32(guest_range_5, 148u, (r1 + 156), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 152u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_5, 152u, (r1 + 160), r24);
        MemoryInline::WriteResolved32(guest_range_5, 156u, (r1 + 164), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 160u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_5, 160u, (r1 + 168), r26);
        MemoryInline::WriteResolved32(guest_range_5, 164u, (r1 + 172), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 168u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_5, 168u, (r1 + 176), r28);
        MemoryInline::WriteResolved32(guest_range_5, 172u, (r1 + 180), r29);
    }
    MemoryInline::WriteResolved32(guest_range_5, 176u, (r1 + 184), r12);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_5, 108u, (r1 + 116), r11);
        MemoryInline::WriteResolved32(guest_range_5, 112u, (r1 + 120), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_5, 116u, (r1 + 124), r9);
        MemoryInline::WriteResolved32(guest_range_5, 120u, (r1 + 128), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 124u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_5, 124u, (r1 + 132), r7);
        MemoryInline::WriteResolved32(guest_range_5, 128u, (r1 + 136), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_5, 132u, (r1 + 140), r5);
        MemoryInline::WriteResolved32(guest_range_5, 136u, (r1 + 144), r3);
    }
    MemoryInline::WriteResolved32(guest_range_5, 140u, (r1 + 148), r0);
    MemoryInline::WriteResolved32(guest_range_0, 252u, (r30 + 252), r5);
    r17 = (r31 + 120);
    r16 = (r31 + 132);
    r12 = (r31 + 144);
    MemoryInline::WriteResolved32(guest_range_0, 248u, (r30 + 248), r30);
    r5 = (r31 + 156);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 256u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 256u, (r30 + 256), r3);
        MemoryInline::WriteResolved32(guest_range_0, 260u, (r30 + 260), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 264u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 264u, (r30 + 264), r8);
        MemoryInline::WriteResolved32(guest_range_0, 268u, (r30 + 268), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 272u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_0, 272u, (r30 + 272), r6);
        MemoryInline::WriteResolved32(guest_range_0, 276u, (r30 + 276), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 280u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_0, 280u, (r30 + 280), r10);
        MemoryInline::WriteResolved32(guest_range_0, 284u, (r30 + 284), r9);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r24 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    r23 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    r22 = MemoryInline::ReadResolved32(guest_range_2, 96u, (r31 + 120));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 96u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_4, 96u, (r17 + 4));
            r20 = MemoryInline::ReadResolved32(guest_range_4, 100u, (r17 + 8));
        }
    }
    r19 = MemoryInline::ReadResolved32(guest_range_2, 108u, (r31 + 132));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 108u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_4, 108u, (r16 + 4));
            r17 = MemoryInline::ReadResolved32(guest_range_4, 112u, (r16 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_0, 304u, (r30 + 304), r17);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 292u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 292u, (r30 + 292), r30);
        MemoryInline::WriteResolved32(guest_range_0, 296u, (r30 + 296), r19);
    }
    MemoryInline::WriteResolved32(guest_range_0, 300u, (r30 + 300), r18);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 308u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 308u, (r30 + 308), r22);
        MemoryInline::WriteResolved32(guest_range_0, 312u, (r30 + 312), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 316u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 316u, (r30 + 316), r20);
        MemoryInline::WriteResolved32(guest_range_0, 320u, (r30 + 320), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 324u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 324u, (r30 + 324), r24);
        MemoryInline::WriteResolved32(guest_range_0, 328u, (r30 + 328), r23);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r11 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    r10 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    r9 = MemoryInline::ReadResolved32(guest_range_2, 120u, (r31 + 144));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 120u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_4, 120u, (r12 + 4));
            r7 = MemoryInline::ReadResolved32(guest_range_4, 124u, (r12 + 8));
        }
    }
    r6 = MemoryInline::ReadResolved32(guest_range_2, 132u, (r31 + 156));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 132u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 132u, (r5 + 4));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 136u, (r5 + 8));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_5, 72u, (r1 + 80), r25);
        MemoryInline::WriteResolved32(guest_range_5, 76u, (r1 + 84), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_5, 80u, (r1 + 88), r23);
        MemoryInline::WriteResolved32(guest_range_5, 84u, (r1 + 92), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_5, 88u, (r1 + 96), r21);
        MemoryInline::WriteResolved32(guest_range_5, 92u, (r1 + 100), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_5, 96u, (r1 + 104), r19);
        MemoryInline::WriteResolved32(guest_range_5, 100u, (r1 + 108), r18);
    }
    MemoryInline::WriteResolved32(guest_range_5, 104u, (r1 + 112), r17);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_5, 36u, (r1 + 44), r16);
        MemoryInline::WriteResolved32(guest_range_5, 40u, (r1 + 48), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_5, 44u, (r1 + 52), r10);
        MemoryInline::WriteResolved32(guest_range_5, 48u, (r1 + 56), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_5, 52u, (r1 + 60), r8);
        MemoryInline::WriteResolved32(guest_range_5, 56u, (r1 + 64), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_5, 60u, (r1 + 68), r6);
        MemoryInline::WriteResolved32(guest_range_5, 64u, (r1 + 72), r3);
    }
    MemoryInline::WriteResolved32(guest_range_5, 68u, (r1 + 76), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 336u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 336u, (r30 + 336), r30);
        MemoryInline::WriteResolved32(guest_range_0, 340u, (r30 + 340), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 344u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 344u, (r30 + 344), r3);
        MemoryInline::WriteResolved32(guest_range_0, 348u, (r30 + 348), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 352u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 352u, (r30 + 352), r9);
        MemoryInline::WriteResolved32(guest_range_0, 356u, (r30 + 356), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 360u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r16)))) {
        MemoryInline::WriteResolved32(guest_range_0, 360u, (r30 + 360), r7);
        MemoryInline::WriteResolved32(guest_range_0, 364u, (r30 + 364), r16);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 368u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_0, 368u, (r30 + 368), r11);
        MemoryInline::WriteResolved32(guest_range_0, 372u, (r30 + 372), r10);
    }
    r6 = (r31 + 168);
    r5 = (r31 + 180);
    r12 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    r3 = r30;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 4u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
            r10 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
        }
    }
    r9 = MemoryInline::ReadResolved32(guest_range_2, 144u, (r31 + 168));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 144u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_4, 144u, (r6 + 4));
            r7 = MemoryInline::ReadResolved32(guest_range_4, 148u, (r6 + 8));
        }
    }
    r6 = MemoryInline::ReadResolved32(guest_range_2, 156u, (r31 + 180));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 156u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_4, 156u, (r5 + 4));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 160u, (r5 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_0, 392u, (r30 + 392), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 380u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 380u, (r30 + 380), r30);
        MemoryInline::WriteResolved32(guest_range_0, 384u, (r30 + 384), r6);
    }
    MemoryInline::WriteResolved32(guest_range_0, 388u, (r30 + 388), r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 396u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 396u, (r30 + 396), r9);
        MemoryInline::WriteResolved32(guest_range_0, 400u, (r30 + 400), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 404u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_0, 404u, (r30 + 404), r7);
        MemoryInline::WriteResolved32(guest_range_0, 408u, (r30 + 408), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 412u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_0, 412u, (r30 + 412), r11);
        MemoryInline::WriteResolved32(guest_range_0, 416u, (r30 + 416), r10);
    }
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 268), 0, 76u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 0u);
        if (resolved_pair.valid) {
            r15 = resolved_pair.first;
            r16 = resolved_pair.second;
        } else {
            r15 = MemoryInline::ReadResolved32(guest_range_6, 0u, (r1 + 268));
            r16 = MemoryInline::ReadResolved32(guest_range_6, 4u, (r1 + 272));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 8u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_6, 8u, (r1 + 276));
            r18 = MemoryInline::ReadResolved32(guest_range_6, 12u, (r1 + 280));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 16u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_6, 16u, (r1 + 284));
            r20 = MemoryInline::ReadResolved32(guest_range_6, 20u, (r1 + 288));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 24u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_6, 24u, (r1 + 292));
            r22 = MemoryInline::ReadResolved32(guest_range_6, 28u, (r1 + 296));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 32u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_6, 32u, (r1 + 300));
            r24 = MemoryInline::ReadResolved32(guest_range_6, 36u, (r1 + 304));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 40u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_6, 40u, (r1 + 308));
            r26 = MemoryInline::ReadResolved32(guest_range_6, 44u, (r1 + 312));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 48u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_6, 48u, (r1 + 316));
            r28 = MemoryInline::ReadResolved32(guest_range_6, 52u, (r1 + 320));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 56u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_6, 56u, (r1 + 324));
            r30 = MemoryInline::ReadResolved32(guest_range_6, 60u, (r1 + 328));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_6, 64u, (r1 + 332));
    MemoryInline::WriteResolved32(guest_range_5, 32u, (r1 + 40), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 72u, (r1 + 340));
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_5, 0u, (r1 + 8), r12);
        MemoryInline::WriteResolved32(guest_range_5, 4u, (r1 + 12), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_5, 8u, (r1 + 16), r10);
        MemoryInline::WriteResolved32(guest_range_5, 12u, (r1 + 20), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_5, 16u, (r1 + 24), r8);
        MemoryInline::WriteResolved32(guest_range_5, 20u, (r1 + 28), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_5, 24u, (r1 + 32), r6);
        MemoryInline::WriteResolved32(guest_range_5, 28u, (r1 + 36), r4);
    }
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFC1E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFE fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805AAF64 func_805AAF64 preserves=true fpr_mask=0x00000000
