#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80740D1C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r9_ca_0 = 0;
    uint32_t r9_ca_1 = 0;
    uint32_t r9_ca_2 = 0;
    uint32_t r9_ca_3 = 0;
    uint32_t r9_ca_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_10 = nullptr;
    uint8_t* guest_range_11 = nullptr;
    uint8_t* guest_range_12 = nullptr;
    uint8_t* guest_range_13 = nullptr;
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80740D1C;

loc_80740D1C:
{
    guest_range_10 = MemoryInline::ResolveRangeHost((r1 + -224), 0, 232u, false, true);
    MemoryInline::WriteResolved32(guest_range_10, 0u, (r1 + -224), r1);
    r1 = (r1 + -224);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_10, 228u, (r1 + 228), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_10, 160u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_10, 160u, (r1 + 160), r16);
        MemoryInline::WriteResolved32(guest_range_10, 164u, (r1 + 164), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_10, 168u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_10, 168u, (r1 + 168), r18);
        MemoryInline::WriteResolved32(guest_range_10, 172u, (r1 + 172), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_10, 176u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_10, 176u, (r1 + 176), r20);
        MemoryInline::WriteResolved32(guest_range_10, 180u, (r1 + 180), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_10, 184u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_10, 184u, (r1 + 184), r22);
        MemoryInline::WriteResolved32(guest_range_10, 188u, (r1 + 188), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_10, 192u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_10, 192u, (r1 + 192), r24);
        MemoryInline::WriteResolved32(guest_range_10, 196u, (r1 + 196), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_10, 200u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_10, 200u, (r1 + 200), r26);
        MemoryInline::WriteResolved32(guest_range_10, 204u, (r1 + 204), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_10, 208u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_10, 208u, (r1 + 208), r28);
        MemoryInline::WriteResolved32(guest_range_10, 212u, (r1 + 212), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_10, 216u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_10, 216u, (r1 + 216), r30);
        MemoryInline::WriteResolved32(guest_range_10, 220u, (r1 + 220), r31);
    }
    r31 = 0x808D0000u;
    r30 = r3;
    r31 = (r31 + -19576);
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
    ctx->xer = xer;
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
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 52), 0, 352u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r30 + 60), r0);
    r5 = (r5 + -19324);
    r4 = (r4 + -19256);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r30 + 52), r5);
    r3 = 0x80240000u;
    r5 = (r30 + 240);
    r6 = (r30 + 328);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r30 + 56), r4);
}

loc_80740D6C:
{
    r3 = (r3 + 28832);
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 12u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_2, 0u, r3);
            r7 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r30 + 68), r7);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r30 + 64), r8);
    }
    r7 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r30 + 72), r7);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_2, 0u, r3);
            r7 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r30 + 80), r7);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r30 + 76), r8);
    }
    r7 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r30 + 84), r7);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_2, 0u, r3);
            r7 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r30 + 92), r7);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r30 + 88), r8);
    }
    r7 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r3 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r30 + 96), r7);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r30 + 100), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r30 + 104), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_2, 0u, r3);
            r7 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r30 + 112), r7);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r30 + 108), r8);
    }
    r7 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r30 + 116), r7);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_2, 0u, r3);
            r7 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r30 + 124), r7);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r30 + 120), r8);
    }
    r7 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r30 + 128), r7);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_2, 0u, r3);
            r7 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r30 + 136), r7);
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r30 + 132), r8);
    }
    r7 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r3 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r30 + 140), r7);
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r30 + 144), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 96u, (r30 + 148), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_2, 0u, r3);
            r7 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r30 + 156), r7);
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r30 + 152), r8);
    }
    r7 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 108u, (r30 + 160), r7);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_2, 0u, r3);
            r7 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r30 + 168), r7);
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r30 + 164), r8);
    }
    r7 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 120u, (r30 + 172), r7);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_2, 0u, r3);
            r7 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 124u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 128u, (r30 + 180), r7);
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r30 + 176), r8);
    }
    r7 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r3 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r30 + 184), r7);
        MemoryInline::WriteResolved32(guest_range_0, 136u, (r30 + 188), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 140u, (r30 + 192), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_2, 0u, r3);
            r4 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 148u, (r30 + 200), r4);
        MemoryInline::WriteResolved32(guest_range_0, 144u, (r30 + 196), r7);
    }
    r4 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 152u, (r30 + 204), r4);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_2, 0u, r3);
            r4 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 156u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 160u, (r30 + 212), r4);
        MemoryInline::WriteResolved32(guest_range_0, 156u, (r30 + 208), r7);
    }
    r4 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 164u, (r30 + 216), r4);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_2, 0u, r3);
            r4 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 168u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 172u, (r30 + 224), r4);
        MemoryInline::WriteResolved32(guest_range_0, 168u, (r30 + 220), r7);
    }
    r3 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r3 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 176u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 176u, (r30 + 228), r3);
        MemoryInline::WriteResolved32(guest_range_0, 180u, (r30 + 232), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 184u, (r30 + 236), r0);
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r6))) {
        goto loc_80740FD4;
    }
}

loc_80740EB0:
{
    r3 = (r30 + 240);
    r4 = (r30 + 264);
    r7 = (r6 - r3);
    r8 = (r7 + 7);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r8);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r8) >> 3);
    r9_ca_1 = (xer >> 29) & 1u;
    r9 = (r0 + r9_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0)) + static_cast<uint64_t>(static_cast<uint32_t>(0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r9_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r10 = (r9 + 1);
}

loc_80740ED0:
{
    if ((static_cast<int32_t>(r10) <= static_cast<int32_t>(8))) {
        goto loc_80740FA4;
    }
}

loc_80740ED4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r6));
}

loc_80740ED8:
{
    r3 = 0;
    r6 = 0;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80740F08;
    }
}

loc_80740EE4:
{
    r0 = (r7 & -2147483648);
}

loc_80740EE8:
{
    r7 = 1;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80740EFC;
    }
}

loc_80740EF0:
{
    r0 = (r8 & -2147483648);
}

loc_80740EF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80740EFC;
    }
}

loc_80740EF8:
{
    r7 = 0;
}

loc_80740EFC:
{
}

loc_80740F00:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80740F08;
    }
}

loc_80740F04:
{
    r6 = 1;
}

loc_80740F08:
{
}

loc_80740F0C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80740F38;
    }
}

loc_80740F10:
{
    r7 = (r9 & -2147483648);
}

loc_80740F14:
{
    r6 = 1;
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80740F2C;
    }
}

loc_80740F1C:
{
    r0 = (r10 & -2147483648);
}

loc_80740F24:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(r0))) {
        goto loc_80740F2C;
    }
}

loc_80740F28:
{
    r6 = 0;
}

loc_80740F2C:
{
}

loc_80740F30:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80740F38;
    }
}

loc_80740F34:
{
    r3 = 1;
}

loc_80740F38:
{
}

loc_80740F3C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80740FA4;
    }
}

loc_80740F40:
{
    r0 = (r4 + 63);
    r3 = 0;
    r0 = (r0 - r5);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_1 & 67108863);
    ctr = r0;
}

loc_80740F58:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r4))) {
        goto loc_80740FA4;
    }
}

loc_80740F5C:
{
    guest_range_3 = MemoryInline::ResolveRangeHost(r5, 0, 64u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_3, 0u, r5, r3);
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r5 + 4), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r5 + 8), r3);
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r5 + 12), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r5 + 16), r3);
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r5 + 20), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r5 + 24), r3);
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r5 + 28), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r5 + 32), r3);
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r5 + 36), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r5 + 40), r3);
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r5 + 44), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_3, 48u, (r5 + 48), r3);
        MemoryInline::WriteResolved32(guest_range_3, 52u, (r5 + 52), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_3, 56u, (r5 + 56), r3);
        MemoryInline::WriteResolved32(guest_range_3, 60u, (r5 + 60), r3);
    }
    r5 = (r5 + 64);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80740F5C;
    }
}

loc_80740FA4:
{
    r3 = (r30 + 328);
    r4 = 0;
    r0 = (r3 + 7);
    r0 = (r0 - r5);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_3 & 536870911);
    ctr = r0;
}

loc_80740FC0:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r3))) {
        goto loc_80740FD4;
    }
}

loc_80740FC4:
{
    MemoryInline::FlatWrite32(r5, r4);
    MemoryInline::FlatWrite32((r5 + 4), r4);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80740FC4;
    }
}

loc_80740FD4:
{
    r5 = (r30 + 336);
    r3 = (r30 + 360);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r3));
}

loc_80740FE0:
{
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 276u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 276u, (r30 + 328), r0);
        MemoryInline::WriteResolved32(guest_range_0, 280u, (r30 + 332), r0);
    }
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80741114;
    }
}

loc_80740FF0:
{
    r6 = (r30 + 336);
    r4 = (r30 + 296);
    r7 = (r3 - r6);
    r8 = (r7 + 7);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r8);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r8) >> 3);
    r9_ca_3 = (xer >> 29) & 1u;
    r9 = (r0 + r9_ca_3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0)) + static_cast<uint64_t>(static_cast<uint32_t>(0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r9_ca_3)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r10 = (r9 + 1);
}

loc_80741010:
{
    if ((static_cast<int32_t>(r10) <= static_cast<int32_t>(8))) {
        goto loc_807410E4;
    }
}

loc_80741014:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r3));
}

loc_80741018:
{
    r3 = 0;
    r6 = 0;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80741048;
    }
}

loc_80741024:
{
    r0 = (r7 & -2147483648);
}

loc_80741028:
{
    r7 = 1;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8074103C;
    }
}

loc_80741030:
{
    r0 = (r8 & -2147483648);
}

loc_80741034:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8074103C;
    }
}

loc_80741038:
{
    r7 = 0;
}

loc_8074103C:
{
}

loc_80741040:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80741048;
    }
}

loc_80741044:
{
    r6 = 1;
}

loc_80741048:
{
}

loc_8074104C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80741078;
    }
}

loc_80741050:
{
    r7 = (r9 & -2147483648);
}

loc_80741054:
{
    r6 = 1;
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8074106C;
    }
}

loc_8074105C:
{
    r0 = (r10 & -2147483648);
}

loc_80741064:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(r0))) {
        goto loc_8074106C;
    }
}

loc_80741068:
{
    r6 = 0;
}

loc_8074106C:
{
}

loc_80741070:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80741078;
    }
}

loc_80741074:
{
    r3 = 1;
}

loc_80741078:
{
}

loc_8074107C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807410E4;
    }
}

loc_80741080:
{
    r0 = (r4 + 63);
    r3 = 0;
    r0 = (r0 - r5);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_5 & 67108863);
    ctr = r0;
}

loc_80741098:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r4))) {
        goto loc_807410E4;
    }
}

loc_8074109C:
{
    guest_range_4 = MemoryInline::ResolveRangeHost(r5, 0, 64u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_4, 0u, r5, r3);
        MemoryInline::WriteResolved32(guest_range_4, 4u, (r5 + 4), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_4, 8u, (r5 + 8), r3);
        MemoryInline::WriteResolved32(guest_range_4, 12u, (r5 + 12), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_4, 16u, (r5 + 16), r3);
        MemoryInline::WriteResolved32(guest_range_4, 20u, (r5 + 20), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_4, 24u, (r5 + 24), r3);
        MemoryInline::WriteResolved32(guest_range_4, 28u, (r5 + 28), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_4, 32u, (r5 + 32), r3);
        MemoryInline::WriteResolved32(guest_range_4, 36u, (r5 + 36), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_4, 40u, (r5 + 40), r3);
        MemoryInline::WriteResolved32(guest_range_4, 44u, (r5 + 44), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_4, 48u, (r5 + 48), r3);
        MemoryInline::WriteResolved32(guest_range_4, 52u, (r5 + 52), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_4, 56u, (r5 + 56), r3);
        MemoryInline::WriteResolved32(guest_range_4, 60u, (r5 + 60), r3);
    }
    r5 = (r5 + 64);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8074109C;
    }
}

loc_807410E4:
{
    r3 = (r30 + 360);
    r4 = 0;
    r0 = (r3 + 7);
    r0 = (r0 - r5);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_7 & 536870911);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r3));
}

loc_80741100:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80741114;
    }
}

loc_80741104:
{
    MemoryInline::FlatWrite32(r5, r4);
    MemoryInline::FlatWrite32((r5 + 4), r4);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80741104;
    }
}

loc_80741114:
{
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 308u, (r30 + 360), r0);
    r3 = 48;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 312u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 312u, (r30 + 364), r0);
        MemoryInline::WriteResolved32(guest_range_0, 316u, (r30 + 368), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 324u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 324u, (r30 + 376), r0);
        MemoryInline::WriteResolved32(guest_range_0, 328u, (r30 + 380), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 332u, (r30 + 384), r0);
    MemoryInline::WriteResolved32(guest_range_0, 348u, (r30 + 400), r0);
    ctx->lr = 0x8074113Cu;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80741140:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80741148;
    }
}

loc_80741144:
{
    // inline leaf 0x8073FB78 (16 guest instruction(s))
    r4 = 0x808D0000u;
    r0 = 0;
    r4 = (r4 + -19688);
    guest_range_5 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 4u, (r3 + 4), r0);
        MemoryInline::WriteResolved32(guest_range_5, 8u, (r3 + 8), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 36u, (r3 + 36), r0);
        MemoryInline::WriteResolved32(guest_range_5, 40u, (r3 + 40), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 12u, (r3 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_5, 16u, (r3 + 16), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 20u, (r3 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_5, 24u, (r3 + 24), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 28u, (r3 + 28), r0);
        MemoryInline::WriteResolved32(guest_range_5, 32u, (r3 + 32), r0);
    }
    MemoryInline::WriteResolved32(guest_range_5, 0u, r3, r4);
    MemoryInline::WriteResolved32(guest_range_5, 44u, (r3 + 44), r0);
    // end of inlined leaf 0x8073FB78
}

loc_80741148:
{
    MemoryInline::FlatWrite32((r30 + 360), r3);
    r3 = 44;
    ctx->lr = 0x80741154u;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80741158:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80741160;
    }
}

loc_8074115C:
{
    // inline leaf 0x80740738 (15 guest instruction(s))
    r4 = 0x808D0000u;
    r0 = 0;
    r4 = (r4 + -19744);
    guest_range_6 = MemoryInline::ResolveRangeHost(r3, 0, 44u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_6, 4u, (r3 + 4), r0);
        MemoryInline::WriteResolved32(guest_range_6, 8u, (r3 + 8), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_6, 36u, (r3 + 36), r0);
        MemoryInline::WriteResolved32(guest_range_6, 40u, (r3 + 40), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_6, 12u, (r3 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_6, 16u, (r3 + 16), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_6, 20u, (r3 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_6, 24u, (r3 + 24), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_6, 28u, (r3 + 28), r0);
        MemoryInline::WriteResolved32(guest_range_6, 32u, (r3 + 32), r0);
    }
    MemoryInline::WriteResolved32(guest_range_6, 0u, r3, r4);
    // end of inlined leaf 0x80740738
}

loc_80741160:
{
    MemoryInline::FlatWrite32((r30 + 364), r3);
    r3 = 44;
    ctx->lr = 0x8074116Cu;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80741170:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80741178;
    }
}

loc_80741174:
{
    // inline leaf 0x80740AE8 (15 guest instruction(s))
    r4 = 0x808D0000u;
    r0 = 0;
    r4 = (r4 + -19800);
    guest_range_7 = MemoryInline::ResolveRangeHost(r3, 0, 44u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_7, 4u, (r3 + 4), r0);
        MemoryInline::WriteResolved32(guest_range_7, 8u, (r3 + 8), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_7, 36u, (r3 + 36), r0);
        MemoryInline::WriteResolved32(guest_range_7, 40u, (r3 + 40), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_7, 12u, (r3 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_7, 16u, (r3 + 16), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_7, 20u, (r3 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_7, 24u, (r3 + 24), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_7, 28u, (r3 + 28), r0);
        MemoryInline::WriteResolved32(guest_range_7, 32u, (r3 + 32), r0);
    }
    MemoryInline::WriteResolved32(guest_range_7, 0u, r3, r4);
    // end of inlined leaf 0x80740AE8
}

loc_80741178:
{
    MemoryInline::FlatWrite32((r30 + 368), r3);
    r3 = 8;
    ctx->lr = 0x80741184u;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 60), 0, 344u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 340u, (r30 + 400), r3);
    r7 = (r31 + 140);
    r6 = (r31 + 152);
    r4 = 0x80240000u;
    r4 = (r4 + 28832);
    guest_range_8 = MemoryInline::ResolveRangeHost(r4, 0, 12u, true, false);
    r18 = MemoryInline::ReadResolved32(guest_range_8, 0u, r4);
    r3 = (r31 + 164);
    guest_range_9 = MemoryInline::ResolveRangeHost((r31 + 140), 0, 100u, true, false);
    r21 = MemoryInline::ReadResolved32(guest_range_9, 0u, (r31 + 140));
    r5 = (r31 + 176);
    r19 = MemoryInline::ReadResolved32(guest_range_8, 4u, (r4 + 4));
    r17 = (r31 + 188);
    r20 = MemoryInline::ReadResolved32(guest_range_8, 8u, (r4 + 8));
    guest_range_11 = MemoryInline::ResolveRangeHost((r7 + 4), 0, 104u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_11, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_11, 0u, (r7 + 4));
            r23 = MemoryInline::ReadResolved32(guest_range_11, 4u, (r7 + 8));
        }
    }
    r24 = MemoryInline::ReadResolved32(guest_range_9, 12u, (r31 + 152));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_11, 12u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_11, 12u, (r6 + 4));
            r26 = MemoryInline::ReadResolved32(guest_range_11, 16u, (r6 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r30 + 72), r26);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r30 + 60), r30);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r30 + 64), r24);
    }
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r30 + 68), r25);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r30 + 76), r21);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r30 + 80), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r30 + 84), r23);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r30 + 88), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r30 + 92), r19);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r30 + 96), r20);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 0u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_8, 0u, r4);
            r28 = MemoryInline::ReadResolved32(guest_range_8, 4u, (r4 + 4));
        }
    }
    r29 = MemoryInline::ReadResolved32(guest_range_8, 8u, (r4 + 8));
    r12 = MemoryInline::ReadResolved32(guest_range_9, 24u, (r31 + 164));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_11, 24u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_11, 24u, (r3 + 4));
            r10 = MemoryInline::ReadResolved32(guest_range_11, 28u, (r3 + 8));
        }
    }
    r9 = MemoryInline::ReadResolved32(guest_range_9, 36u, (r31 + 176));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_11, 36u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r16 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_11, 36u, (r5 + 4));
            r16 = MemoryInline::ReadResolved32(guest_range_11, 40u, (r5 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r30 + 116), r16);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r30 + 104), r30);
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r30 + 108), r9);
    }
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r30 + 112), r3);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r30 + 120), r12);
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r30 + 124), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r30 + 128), r10);
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r30 + 132), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r30 + 136), r28);
        MemoryInline::WriteResolved32(guest_range_1, 80u, (r30 + 140), r29);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 0u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_8, 0u, r4);
            r7 = MemoryInline::ReadResolved32(guest_range_8, 4u, (r4 + 4));
        }
    }
    r6 = MemoryInline::ReadResolved32(guest_range_8, 8u, (r4 + 8));
    r5 = MemoryInline::ReadResolved32(guest_range_9, 48u, (r31 + 188));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_11, 48u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_11, 48u, (r17 + 4));
            r0 = MemoryInline::ReadResolved32(guest_range_11, 52u, (r17 + 8));
        }
    }
    guest_range_12 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 144u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_12, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_12, 108u, (r1 + 116), r18);
        MemoryInline::WriteResolved32(guest_range_12, 112u, (r1 + 120), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_12, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_12, 116u, (r1 + 124), r20);
        MemoryInline::WriteResolved32(guest_range_12, 120u, (r1 + 128), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_12, 124u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_12, 124u, (r1 + 132), r22);
        MemoryInline::WriteResolved32(guest_range_12, 128u, (r1 + 136), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_12, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_12, 132u, (r1 + 140), r24);
        MemoryInline::WriteResolved32(guest_range_12, 136u, (r1 + 144), r25);
    }
    MemoryInline::WriteResolved32(guest_range_12, 140u, (r1 + 148), r26);
    if (!MemoryInline::WriteResolvedPair32(guest_range_12, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_12, 72u, (r1 + 80), r27);
        MemoryInline::WriteResolved32(guest_range_12, 76u, (r1 + 84), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_12, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_12, 80u, (r1 + 88), r29);
        MemoryInline::WriteResolved32(guest_range_12, 84u, (r1 + 92), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_12, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_12, 88u, (r1 + 96), r11);
        MemoryInline::WriteResolved32(guest_range_12, 92u, (r1 + 100), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_12, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_12, 96u, (r1 + 104), r9);
        MemoryInline::WriteResolved32(guest_range_12, 100u, (r1 + 108), r3);
    }
    MemoryInline::WriteResolved32(guest_range_12, 104u, (r1 + 112), r16);
    if (!MemoryInline::WriteResolvedPair32(guest_range_12, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_12, 36u, (r1 + 44), r8);
        MemoryInline::WriteResolved32(guest_range_12, 40u, (r1 + 48), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_12, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_12, 44u, (r1 + 52), r6);
        MemoryInline::WriteResolved32(guest_range_12, 48u, (r1 + 56), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_12, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_12, 52u, (r1 + 60), r4);
        MemoryInline::WriteResolved32(guest_range_12, 56u, (r1 + 64), r0);
    }
    r3 = (r31 + 200);
    r21 = MemoryInline::ReadResolved32(guest_range_9, 60u, (r31 + 200));
    r20 = MemoryInline::ReadResolved32(guest_range_11, 60u, (r3 + 4));
    r11 = (r31 + 212);
    r19 = MemoryInline::ReadResolved32(guest_range_11, 64u, (r3 + 8));
    r10 = (r31 + 224);
    MemoryInline::WriteResolved32(guest_range_1, 100u, (r30 + 160), r19);
    r9 = (r31 + 236);
    r3 = r30;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r30 + 148), r30);
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r30 + 152), r21);
    }
    MemoryInline::WriteResolved32(guest_range_1, 96u, (r30 + 156), r20);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r30 + 164), r5);
        MemoryInline::WriteResolved32(guest_range_1, 108u, (r30 + 168), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 112u, (r30 + 172), r0);
        MemoryInline::WriteResolved32(guest_range_1, 116u, (r30 + 176), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 120u, (r30 + 180), r7);
        MemoryInline::WriteResolved32(guest_range_1, 124u, (r30 + 184), r6);
    }
    r12 = MemoryInline::ReadResolved32(guest_range_11, 72u, (r11 + 4));
    r18 = MemoryInline::ReadResolved32(guest_range_9, 72u, (r31 + 212));
    r11 = MemoryInline::ReadResolved32(guest_range_11, 76u, (r11 + 8));
    r8 = MemoryInline::ReadResolved32(guest_range_9, 84u, (r31 + 224));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_11, 84u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_11, 84u, (r10 + 4));
            r6 = MemoryInline::ReadResolved32(guest_range_11, 88u, (r10 + 8));
        }
    }
    r5 = MemoryInline::ReadResolved32(guest_range_9, 96u, (r31 + 236));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_11, 96u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_11, 96u, (r9 + 4));
            r0 = MemoryInline::ReadResolved32(guest_range_11, 100u, (r9 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_1, 144u, (r30 + 204), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 132u, (r30 + 192), r30);
        MemoryInline::WriteResolved32(guest_range_1, 136u, (r30 + 196), r5);
    }
    MemoryInline::WriteResolved32(guest_range_1, 140u, (r30 + 200), r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 148u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_1, 148u, (r30 + 208), r8);
        MemoryInline::WriteResolved32(guest_range_1, 152u, (r30 + 212), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 156u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_1, 156u, (r30 + 216), r6);
        MemoryInline::WriteResolved32(guest_range_1, 160u, (r30 + 220), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 164u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_1, 164u, (r30 + 224), r12);
        MemoryInline::WriteResolved32(guest_range_1, 168u, (r30 + 228), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_12, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_12, 60u, (r1 + 68), r21);
        MemoryInline::WriteResolved32(guest_range_12, 64u, (r1 + 72), r20);
    }
    MemoryInline::WriteResolved32(guest_range_12, 68u, (r1 + 76), r19);
    MemoryInline::WriteResolved32(guest_range_12, 0u, (r1 + 8), r18);
    guest_range_13 = MemoryInline::ResolveRangeHost((r1 + 160), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_13, 0u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_13, 0u, (r1 + 160));
            r17 = MemoryInline::ReadResolved32(guest_range_13, 4u, (r1 + 164));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_13, 8u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_13, 8u, (r1 + 168));
            r19 = MemoryInline::ReadResolved32(guest_range_13, 12u, (r1 + 172));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_13, 16u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_13, 16u, (r1 + 176));
            r21 = MemoryInline::ReadResolved32(guest_range_13, 20u, (r1 + 180));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_13, 24u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_13, 24u, (r1 + 184));
            r23 = MemoryInline::ReadResolved32(guest_range_13, 28u, (r1 + 188));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_13, 32u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_13, 32u, (r1 + 192));
            r25 = MemoryInline::ReadResolved32(guest_range_13, 36u, (r1 + 196));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_13, 40u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_13, 40u, (r1 + 200));
            r27 = MemoryInline::ReadResolved32(guest_range_13, 44u, (r1 + 204));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_13, 48u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_13, 48u, (r1 + 208));
            r29 = MemoryInline::ReadResolved32(guest_range_13, 52u, (r1 + 212));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_13, 56u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_13, 56u, (r1 + 216));
            r31 = MemoryInline::ReadResolved32(guest_range_13, 60u, (r1 + 220));
        }
    }
    MemoryInline::WriteResolved32(guest_range_12, 32u, (r1 + 40), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_13, 68u, (r1 + 228));
    if (!MemoryInline::WriteResolvedPair32(guest_range_12, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_12, 4u, (r1 + 12), r12);
        MemoryInline::WriteResolved32(guest_range_12, 8u, (r1 + 16), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_12, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_12, 12u, (r1 + 20), r8);
        MemoryInline::WriteResolved32(guest_range_12, 16u, (r1 + 24), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_12, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_12, 20u, (r1 + 28), r6);
        MemoryInline::WriteResolved32(guest_range_12, 24u, (r1 + 32), r5);
    }
    MemoryInline::WriteResolved32(guest_range_12, 28u, (r1 + 36), r4);
    ctx->lr = r0;
    r1 = (r1 + 224);
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80740D1C func_80740D1C preserves=true fpr_mask=0x00000000
