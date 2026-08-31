#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8072A8E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_10 = nullptr;
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
    uint32_t xer = ctx->xer;

    goto loc_8072A8E8;

loc_8072A8E8:
{
    guest_range_7 = MemoryInline::ResolveRangeHost((r1 + -336), 0, 344u, false, true);
    MemoryInline::WriteResolved32(guest_range_7, 0u, (r1 + -336), r1);
    r1 = (r1 + -336);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_7, 340u, (r1 + 340), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 272u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_7, 272u, (r1 + 272), r16);
        MemoryInline::WriteResolved32(guest_range_7, 276u, (r1 + 276), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 280u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_7, 280u, (r1 + 280), r18);
        MemoryInline::WriteResolved32(guest_range_7, 284u, (r1 + 284), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 288u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_7, 288u, (r1 + 288), r20);
        MemoryInline::WriteResolved32(guest_range_7, 292u, (r1 + 292), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 296u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_7, 296u, (r1 + 296), r22);
        MemoryInline::WriteResolved32(guest_range_7, 300u, (r1 + 300), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 304u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_7, 304u, (r1 + 304), r24);
        MemoryInline::WriteResolved32(guest_range_7, 308u, (r1 + 308), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 312u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_7, 312u, (r1 + 312), r26);
        MemoryInline::WriteResolved32(guest_range_7, 316u, (r1 + 316), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 320u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_7, 320u, (r1 + 320), r28);
        MemoryInline::WriteResolved32(guest_range_7, 324u, (r1 + 324), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 328u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_7, 328u, (r1 + 328), r30);
        MemoryInline::WriteResolved32(guest_range_7, 332u, (r1 + 332), r31);
    }
    r31 = 0x808D0000u;
    r30 = r3;
    r18 = r4;
    r31 = (r31 + -25208);
    ctx->lr = 0x8072A90Cu;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80729D9Cu>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x808D0000u;
    r5 = 0x808D0000u;
    r3 = (r3 + -24424);
    r17 = 0;
    r5 = (r5 + -24064);
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 52), 0, 386u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r30 + 52), r3);
    r4 = 0x80240000u;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r30 + 96), r5);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r30 + 100), r17);
    }
    r4 = (r4 + 28832);
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 12u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r30 + 108), r0);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r30 + 104), r3);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r30 + 112), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r30 + 120), r0);
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r30 + 116), r3);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 72u, (r30 + 124), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r30 + 132), r0);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r30 + 128), r3);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r30 + 136), r0);
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r30 + 140), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 92u, (r30 + 144), r17);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r30 + 152), r0);
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r30 + 148), r3);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 104u, (r30 + 156), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r30 + 164), r0);
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r30 + 160), r3);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r30 + 168), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r30 + 176), r0);
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r30 + 172), r3);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 128u, (r30 + 180), r0);
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r30 + 184), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 136u, (r30 + 188), r17);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 144u, (r30 + 196), r0);
        MemoryInline::WriteResolved32(guest_range_0, 140u, (r30 + 192), r3);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r30 + 200), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 152u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 156u, (r30 + 208), r0);
        MemoryInline::WriteResolved32(guest_range_0, 152u, (r30 + 204), r3);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 160u, (r30 + 212), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 164u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 168u, (r30 + 220), r0);
        MemoryInline::WriteResolved32(guest_range_0, 164u, (r30 + 216), r3);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 172u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 172u, (r30 + 224), r0);
        MemoryInline::WriteResolved32(guest_range_0, 176u, (r30 + 228), r5);
    }
    r0 = 1;
    r3 = 64;
    MemoryInline::WriteResolved32(guest_range_0, 180u, (r30 + 232), r17);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 184u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 188u, (r30 + 240), r6);
        MemoryInline::WriteResolved32(guest_range_0, 184u, (r30 + 236), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 192u, (r30 + 244), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 196u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 200u, (r30 + 252), r6);
        MemoryInline::WriteResolved32(guest_range_0, 196u, (r30 + 248), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 204u, (r30 + 256), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 208u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 212u, (r30 + 264), r6);
        MemoryInline::WriteResolved32(guest_range_0, 208u, (r30 + 260), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 216u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 216u, (r30 + 268), r6);
        MemoryInline::WriteResolved32(guest_range_0, 220u, (r30 + 272), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 224u, (r30 + 276), r17);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 228u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 232u, (r30 + 284), r6);
        MemoryInline::WriteResolved32(guest_range_0, 228u, (r30 + 280), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 236u, (r30 + 288), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 240u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 244u, (r30 + 296), r6);
        MemoryInline::WriteResolved32(guest_range_0, 240u, (r30 + 292), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 248u, (r30 + 300), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 252u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 256u, (r30 + 308), r6);
        MemoryInline::WriteResolved32(guest_range_0, 252u, (r30 + 304), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 260u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 260u, (r30 + 312), r6);
        MemoryInline::WriteResolved32(guest_range_0, 264u, (r30 + 316), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 268u, (r30 + 320), r17);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 272u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 276u, (r30 + 328), r6);
        MemoryInline::WriteResolved32(guest_range_0, 272u, (r30 + 324), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 280u, (r30 + 332), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 284u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 288u, (r30 + 340), r6);
        MemoryInline::WriteResolved32(guest_range_0, 284u, (r30 + 336), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 292u, (r30 + 344), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r6 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 296u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 300u, (r30 + 352), r6);
        MemoryInline::WriteResolved32(guest_range_0, 296u, (r30 + 348), r7);
    }
    r6 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 304u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 304u, (r30 + 356), r6);
        MemoryInline::WriteResolved32(guest_range_0, 308u, (r30 + 360), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 312u, (r30 + 364), r17);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 316u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 320u, (r30 + 372), r5);
        MemoryInline::WriteResolved32(guest_range_0, 316u, (r30 + 368), r6);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 324u, (r30 + 376), r5);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 328u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 332u, (r30 + 384), r5);
        MemoryInline::WriteResolved32(guest_range_0, 328u, (r30 + 380), r6);
    }
    r5 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 336u, (r30 + 388), r5);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r5 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 340u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 344u, (r30 + 396), r5);
        MemoryInline::WriteResolved32(guest_range_0, 340u, (r30 + 392), r6);
    }
    r4 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 348u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 348u, (r30 + 400), r4);
        MemoryInline::WriteResolved32(guest_range_0, 352u, (r30 + 404), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 356u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 356u, (r30 + 408), r17);
        MemoryInline::WriteResolved32(guest_range_0, 360u, (r30 + 412), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 364u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 364u, (r30 + 416), r17);
        MemoryInline::WriteResolved32(guest_range_0, 368u, (r30 + 420), r17);
    }
    MemoryInline::WriteResolved32(guest_range_0, 380u, (r30 + 432), r17);
    MemoryInline::WriteResolved8(guest_range_0, 384u, (r30 + 436), static_cast<uint8_t>(r17));
    MemoryInline::WriteResolved8(guest_range_0, 385u, (r30 + 437), static_cast<uint8_t>(r0));
    ctx->lr = 0x8072AB84u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8072AB88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072ABA4;
    }
}

loc_8072AB8C:
{
    r4 = 0x808D0000u;
    r4 = (r4 + -24080);
    MemoryInline::FlatWriteRam32(r3, r4);
    MemoryInline::FlatWriteRam32((r3 + 4), r18);
    MemoryInline::FlatWriteRam32((r3 + 8), r17);
    MemoryInline::FlatWriteRam32((r3 + 60), r17);
}

loc_8072ABA4:
{
    MemoryInline::FlatWrite32((r30 + 404), r3);
    r3 = 88;
    ctx->lr = 0x8072ABB0u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8072ABB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072ABE8;
    }
}

loc_8072ABB8:
{
    r5 = 1;
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 84u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r3 + 4), static_cast<uint8_t>(r5));
    r4 = 0x808D0000u;
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r3 + 8), r18);
    r4 = (r4 + -24240);
    MemoryInline::WriteResolved32(guest_range_3, 12u, (r3 + 12), r0);
    MemoryInline::WriteResolved32(guest_range_3, 48u, (r3 + 48), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 72u, (r3 + 72), r0);
        MemoryInline::WriteResolved32(guest_range_3, 76u, (r3 + 76), r0);
    }
    MemoryInline::WriteResolved32(guest_range_3, 0u, r3, r4);
    MemoryInline::WriteResolved32(guest_range_3, 80u, (r3 + 80), r5);
}

loc_8072ABE8:
{
    MemoryInline::FlatWrite32((r30 + 412), r3);
    r3 = 88;
    ctx->lr = 0x8072ABF4u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8072ABF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072AC2C;
    }
}

loc_8072ABFC:
{
    r0 = 1;
    guest_range_4 = MemoryInline::ResolveRangeHost(r3, 0, 84u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 4u, (r3 + 4), static_cast<uint8_t>(r0));
    r4 = 0x808D0000u;
    MemoryInline::WriteResolved32(guest_range_4, 8u, (r3 + 8), r18);
    r0 = 0;
    r4 = (r4 + -24264);
    MemoryInline::WriteResolved32(guest_range_4, 12u, (r3 + 12), r0);
    MemoryInline::WriteResolved32(guest_range_4, 48u, (r3 + 48), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_4, 72u, (r3 + 72), r0);
        MemoryInline::WriteResolved32(guest_range_4, 76u, (r3 + 76), r0);
    }
    MemoryInline::WriteResolved32(guest_range_4, 0u, r3, r4);
    MemoryInline::WriteResolved32(guest_range_4, 80u, (r3 + 80), r0);
}

loc_8072AC2C:
{
    MemoryInline::FlatWrite32((r30 + 416), r3);
    r3 = 16;
    ctx->lr = 0x8072AC38u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r30 + 420), r3);
    r3 = 16;
    ctx->lr = 0x8072AC44u;
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
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8072AC48:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8072AC6C;
    }
}

loc_8072AC4C:
{
    r5 = 0;
    MemoryInline::FlatWriteRam32((r3 + 4), r5);
    r4 = 0x808D0000u;
    r0 = 1;
    MemoryInline::FlatWriteRam32((r3 + 8), r5);
    r4 = (r4 + -24532);
    MemoryInline::FlatWriteRam32(r3, r4);
    MemoryInline::FlatWriteRam8((r3 + 12), static_cast<uint8_t>(r0));
}

loc_8072AC6C:
{
    MemoryInline::FlatWrite32((r30 + 68), r3);
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 11240));
    // inline leaf 0x80739548 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 28));
    // end of inlined leaf 0x80739548
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8072AC80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072AC98;
    }
}

loc_8072AC84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_8072AC88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072ACC0;
    }
}

loc_8072AC8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_8072AC90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072ACE8;
    }
}

loc_8072AC94:
{
    goto loc_8072AD0C;
}

loc_8072AC98:
{
    r3 = 16;
    ctx->lr = 0x8072ACA0u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8072ACA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072ACB8;
    }
}

loc_8072ACA8:
{
    MemoryInline::FlatWriteRam32((r3 + 4), r18);
    r4 = 0x808D0000u;
    r4 = (r4 + -24136);
    MemoryInline::FlatWriteRam32(r3, r4);
}

loc_8072ACB8:
{
    MemoryInline::FlatWrite32((r30 + 408), r3);
    goto loc_8072AD0C;
}

loc_8072ACC0:
{
    r3 = 16;
    ctx->lr = 0x8072ACC8u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8072ACCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072ACE0;
    }
}

loc_8072ACD0:
{
    MemoryInline::FlatWriteRam32((r3 + 4), r18);
    r4 = 0x808D0000u;
    r4 = (r4 + -24164);
    MemoryInline::FlatWriteRam32(r3, r4);
}

loc_8072ACE0:
{
    MemoryInline::FlatWrite32((r30 + 408), r3);
    goto loc_8072AD0C;
}

loc_8072ACE8:
{
    r3 = 16;
    ctx->lr = 0x8072ACF0u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8072ACF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072AD08;
    }
}

loc_8072ACF8:
{
    MemoryInline::FlatWriteRam32((r3 + 4), r18);
    r4 = 0x808D0000u;
    r4 = (r4 + -24192);
    MemoryInline::FlatWriteRam32(r3, r4);
}

loc_8072AD08:
{
    MemoryInline::FlatWrite32((r30 + 408), r3);
}

loc_8072AD0C:
{
    r4 = 0x80240000u;
    r4 = (r4 + 28832);
    guest_range_5 = MemoryInline::ResolveRangeHost(r4, 0, 12u, true, false);
    r17 = MemoryInline::ReadResolved32(guest_range_5, 0u, r4);
    r8 = (r31 + 496);
    r5 = (r31 + 508);
    r18 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r4 + 4));
    r3 = (r31 + 520);
    r19 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r4 + 8));
    r7 = (r31 + 532);
    guest_range_6 = MemoryInline::ResolveRangeHost((r31 + 496), 0, 172u, true, false);
    r20 = MemoryInline::ReadResolved32(guest_range_6, 0u, (r31 + 496));
    r6 = (r31 + 544);
    guest_range_8 = MemoryInline::ResolveRangeHost((r8 + 4), 0, 176u, true, false);
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
    r23 = MemoryInline::ReadResolved32(guest_range_6, 12u, (r31 + 508));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 12u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_8, 12u, (r5 + 4));
            r25 = MemoryInline::ReadResolved32(guest_range_8, 16u, (r5 + 8));
        }
    }
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 100), 0, 304u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r30 + 112), r25);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r30 + 100), r30);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r30 + 104), r23);
    }
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r30 + 108), r24);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r30 + 116), r20);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r30 + 120), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r30 + 124), r22);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r30 + 128), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r30 + 132), r18);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r30 + 136), r19);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 0u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_5, 0u, r4);
            r27 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r4 + 4));
        }
    }
    r28 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r4 + 8));
    r29 = MemoryInline::ReadResolved32(guest_range_6, 24u, (r31 + 520));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 24u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_8, 24u, (r3 + 4));
            r5 = MemoryInline::ReadResolved32(guest_range_8, 28u, (r3 + 8));
        }
    }
    r3 = MemoryInline::ReadResolved32(guest_range_6, 36u, (r31 + 532));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 36u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r16 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 36u, (r7 + 4));
            r16 = MemoryInline::ReadResolved32(guest_range_8, 40u, (r7 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r30 + 156), r16);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r30 + 144), r30);
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r30 + 148), r3);
    }
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r30 + 152), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r30 + 160), r29);
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r30 + 164), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r30 + 168), r5);
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r30 + 172), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r30 + 176), r27);
        MemoryInline::WriteResolved32(guest_range_1, 80u, (r30 + 180), r28);
    }
    r7 = MemoryInline::ReadResolved32(guest_range_8, 48u, (r6 + 4));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 0u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_5, 0u, r4);
            r10 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r4 + 4));
        }
    }
    r9 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r4 + 8));
    r8 = MemoryInline::ReadResolved32(guest_range_6, 48u, (r31 + 544));
    r6 = MemoryInline::ReadResolved32(guest_range_8, 52u, (r6 + 8));
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
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 196u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_9, 196u, (r1 + 204), r12);
        MemoryInline::WriteResolved32(guest_range_9, 200u, (r1 + 208), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 204u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_9, 204u, (r1 + 212), r3);
        MemoryInline::WriteResolved32(guest_range_9, 208u, (r1 + 216), r0);
    }
    MemoryInline::WriteResolved32(guest_range_9, 212u, (r1 + 220), r16);
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_9, 144u, (r1 + 152), r11);
        MemoryInline::WriteResolved32(guest_range_9, 148u, (r1 + 156), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 152u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_9, 152u, (r1 + 160), r9);
        MemoryInline::WriteResolved32(guest_range_9, 156u, (r1 + 164), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 160u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_9, 160u, (r1 + 168), r7);
        MemoryInline::WriteResolved32(guest_range_9, 164u, (r1 + 172), r6);
    }
    r12 = (r31 + 556);
    r5 = MemoryInline::ReadResolved32(guest_range_6, 60u, (r31 + 556));
    r3 = MemoryInline::ReadResolved32(guest_range_8, 60u, (r12 + 4));
    r19 = (r31 + 568);
    r0 = MemoryInline::ReadResolved32(guest_range_8, 64u, (r12 + 8));
    r18 = (r31 + 580);
    MemoryInline::WriteResolved32(guest_range_1, 100u, (r30 + 200), r0);
    r17 = (r31 + 592);
    r12 = (r31 + 604);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r30 + 188), r30);
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r30 + 192), r5);
    }
    MemoryInline::WriteResolved32(guest_range_1, 96u, (r30 + 196), r3);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r30 + 204), r8);
        MemoryInline::WriteResolved32(guest_range_1, 108u, (r30 + 208), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_1, 112u, (r30 + 212), r6);
        MemoryInline::WriteResolved32(guest_range_1, 116u, (r30 + 216), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_1, 120u, (r30 + 220), r10);
        MemoryInline::WriteResolved32(guest_range_1, 124u, (r30 + 224), r9);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 0u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_5, 0u, r4);
            r28 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r4 + 4));
        }
    }
    r27 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r4 + 8));
    r26 = MemoryInline::ReadResolved32(guest_range_6, 72u, (r31 + 568));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 72u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_8, 72u, (r19 + 4));
            r24 = MemoryInline::ReadResolved32(guest_range_8, 76u, (r19 + 8));
        }
    }
    r23 = MemoryInline::ReadResolved32(guest_range_6, 84u, (r31 + 580));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 84u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_8, 84u, (r18 + 4));
            r21 = MemoryInline::ReadResolved32(guest_range_8, 88u, (r18 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_1, 144u, (r30 + 244), r21);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_1, 132u, (r30 + 232), r30);
        MemoryInline::WriteResolved32(guest_range_1, 136u, (r30 + 236), r23);
    }
    MemoryInline::WriteResolved32(guest_range_1, 140u, (r30 + 240), r22);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 148u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_1, 148u, (r30 + 248), r26);
        MemoryInline::WriteResolved32(guest_range_1, 152u, (r30 + 252), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 156u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 156u, (r30 + 256), r24);
        MemoryInline::WriteResolved32(guest_range_1, 160u, (r30 + 260), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 164u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 164u, (r30 + 264), r28);
        MemoryInline::WriteResolved32(guest_range_1, 168u, (r30 + 268), r27);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 0u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_5, 0u, r4);
            r19 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r4 + 4));
        }
    }
    r18 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r4 + 8));
    r9 = MemoryInline::ReadResolved32(guest_range_6, 96u, (r31 + 592));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 96u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_8, 96u, (r17 + 4));
            r10 = MemoryInline::ReadResolved32(guest_range_8, 100u, (r17 + 8));
        }
    }
    r8 = MemoryInline::ReadResolved32(guest_range_6, 108u, (r31 + 604));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 108u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_8, 108u, (r12 + 4));
            r6 = MemoryInline::ReadResolved32(guest_range_8, 112u, (r12 + 8));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 168u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_9, 168u, (r1 + 176), r5);
        MemoryInline::WriteResolved32(guest_range_9, 172u, (r1 + 180), r3);
    }
    MemoryInline::WriteResolved32(guest_range_9, 176u, (r1 + 184), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_9, 108u, (r1 + 116), r29);
        MemoryInline::WriteResolved32(guest_range_9, 112u, (r1 + 120), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_9, 116u, (r1 + 124), r27);
        MemoryInline::WriteResolved32(guest_range_9, 120u, (r1 + 128), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 124u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_9, 124u, (r1 + 132), r25);
        MemoryInline::WriteResolved32(guest_range_9, 128u, (r1 + 136), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_9, 132u, (r1 + 140), r23);
        MemoryInline::WriteResolved32(guest_range_9, 136u, (r1 + 144), r22);
    }
    MemoryInline::WriteResolved32(guest_range_9, 140u, (r1 + 148), r21);
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_9, 72u, (r1 + 80), r20);
        MemoryInline::WriteResolved32(guest_range_9, 76u, (r1 + 84), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_9, 80u, (r1 + 88), r18);
        MemoryInline::WriteResolved32(guest_range_9, 84u, (r1 + 92), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_9, 88u, (r1 + 96), r11);
        MemoryInline::WriteResolved32(guest_range_9, 92u, (r1 + 100), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_9, 96u, (r1 + 104), r8);
        MemoryInline::WriteResolved32(guest_range_9, 100u, (r1 + 108), r7);
    }
    MemoryInline::WriteResolved32(guest_range_9, 104u, (r1 + 112), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 176u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 176u, (r30 + 276), r30);
        MemoryInline::WriteResolved32(guest_range_1, 180u, (r30 + 280), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 184u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 184u, (r30 + 284), r7);
        MemoryInline::WriteResolved32(guest_range_1, 188u, (r30 + 288), r6);
    }
    MemoryInline::WriteResolved32(guest_range_1, 192u, (r30 + 292), r9);
    r9 = (r31 + 616);
    r8 = (r31 + 628);
    r7 = (r31 + 640);
    MemoryInline::WriteResolved32(guest_range_1, 196u, (r30 + 296), r11);
    r6 = (r31 + 652);
    r5 = (r31 + 664);
    r3 = r30;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 200u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_1, 200u, (r30 + 300), r10);
        MemoryInline::WriteResolved32(guest_range_1, 204u, (r30 + 304), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 208u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_1, 208u, (r30 + 308), r19);
        MemoryInline::WriteResolved32(guest_range_1, 212u, (r30 + 312), r18);
    }
    r25 = MemoryInline::ReadResolved32(guest_range_6, 120u, (r31 + 616));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 120u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_8, 120u, (r9 + 4));
            r23 = MemoryInline::ReadResolved32(guest_range_8, 124u, (r9 + 8));
        }
    }
    r22 = MemoryInline::ReadResolved32(guest_range_6, 132u, (r31 + 628));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 132u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_8, 132u, (r8 + 4));
            r20 = MemoryInline::ReadResolved32(guest_range_8, 136u, (r8 + 8));
        }
    }
    r19 = MemoryInline::ReadResolved32(guest_range_6, 144u, (r31 + 640));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 144u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_8, 144u, (r7 + 4));
            r17 = MemoryInline::ReadResolved32(guest_range_8, 148u, (r7 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_1, 232u, (r30 + 332), r17);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 220u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_1, 220u, (r30 + 320), r30);
        MemoryInline::WriteResolved32(guest_range_1, 224u, (r30 + 324), r19);
    }
    MemoryInline::WriteResolved32(guest_range_1, 228u, (r30 + 328), r18);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 236u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_1, 236u, (r30 + 336), r22);
        MemoryInline::WriteResolved32(guest_range_1, 240u, (r30 + 340), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 244u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_1, 244u, (r30 + 344), r20);
        MemoryInline::WriteResolved32(guest_range_1, 248u, (r30 + 348), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 252u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_1, 252u, (r30 + 352), r24);
        MemoryInline::WriteResolved32(guest_range_1, 256u, (r30 + 356), r23);
    }
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
    r9 = MemoryInline::ReadResolved32(guest_range_6, 156u, (r31 + 652));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 156u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_8, 156u, (r6 + 4));
            r7 = MemoryInline::ReadResolved32(guest_range_8, 160u, (r6 + 8));
        }
    }
    r6 = MemoryInline::ReadResolved32(guest_range_6, 168u, (r31 + 664));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 168u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_8, 168u, (r5 + 4));
            r0 = MemoryInline::ReadResolved32(guest_range_8, 172u, (r5 + 8));
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
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_9, 24u, (r1 + 32), r6);
        MemoryInline::WriteResolved32(guest_range_9, 28u, (r1 + 36), r4);
    }
    MemoryInline::WriteResolved32(guest_range_9, 32u, (r1 + 40), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 264u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 264u, (r30 + 364), r30);
        MemoryInline::WriteResolved32(guest_range_1, 268u, (r30 + 368), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 272u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 272u, (r30 + 372), r4);
        MemoryInline::WriteResolved32(guest_range_1, 276u, (r30 + 376), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 280u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 280u, (r30 + 380), r9);
        MemoryInline::WriteResolved32(guest_range_1, 284u, (r30 + 384), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 288u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_1, 288u, (r30 + 388), r7);
        MemoryInline::WriteResolved32(guest_range_1, 292u, (r30 + 392), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 296u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_1, 296u, (r30 + 396), r11);
        MemoryInline::WriteResolved32(guest_range_1, 300u, (r30 + 400), r10);
    }
    // inline leaf 0x8074AFB4 (6 guest instruction(s))
    r4 = (r3 + 8);
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r3 = 1;
    // end of inlined leaf 0x8074AFB4
    r3 = r30;
    guest_range_10 = MemoryInline::ResolveRangeHost((r1 + 272), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 0u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_10, 0u, (r1 + 272));
            r17 = MemoryInline::ReadResolved32(guest_range_10, 4u, (r1 + 276));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 8u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_10, 8u, (r1 + 280));
            r19 = MemoryInline::ReadResolved32(guest_range_10, 12u, (r1 + 284));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 16u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_10, 16u, (r1 + 288));
            r21 = MemoryInline::ReadResolved32(guest_range_10, 20u, (r1 + 292));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 24u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_10, 24u, (r1 + 296));
            r23 = MemoryInline::ReadResolved32(guest_range_10, 28u, (r1 + 300));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 32u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_10, 32u, (r1 + 304));
            r25 = MemoryInline::ReadResolved32(guest_range_10, 36u, (r1 + 308));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 40u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_10, 40u, (r1 + 312));
            r27 = MemoryInline::ReadResolved32(guest_range_10, 44u, (r1 + 316));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 48u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_10, 48u, (r1 + 320));
            r29 = MemoryInline::ReadResolved32(guest_range_10, 52u, (r1 + 324));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 56u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_10, 56u, (r1 + 328));
            r31 = MemoryInline::ReadResolved32(guest_range_10, 60u, (r1 + 332));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_10, 68u, (r1 + 340));
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8072A8E8 func_8072A8E8 preserves=true fpr_mask=0x00000000
