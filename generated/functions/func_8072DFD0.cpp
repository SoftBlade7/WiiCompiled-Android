#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8072DFD0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8072DFD0;

loc_8072DFD0:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + -192), 0, 200u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_4, 196u, (r1 + 196), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_4, 120u, (r1 + 120), r14);
        MemoryInline::WriteResolved32(guest_range_4, 124u, (r1 + 124), r15);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_4, 128u, (r1 + 128), r16);
        MemoryInline::WriteResolved32(guest_range_4, 132u, (r1 + 132), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 136u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_4, 136u, (r1 + 136), r18);
        MemoryInline::WriteResolved32(guest_range_4, 140u, (r1 + 140), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_4, 144u, (r1 + 144), r20);
        MemoryInline::WriteResolved32(guest_range_4, 148u, (r1 + 148), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 152u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_4, 152u, (r1 + 152), r22);
        MemoryInline::WriteResolved32(guest_range_4, 156u, (r1 + 156), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 160u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_4, 160u, (r1 + 160), r24);
        MemoryInline::WriteResolved32(guest_range_4, 164u, (r1 + 164), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 168u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_4, 168u, (r1 + 168), r26);
        MemoryInline::WriteResolved32(guest_range_4, 172u, (r1 + 172), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 176u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_4, 176u, (r1 + 176), r28);
        MemoryInline::WriteResolved32(guest_range_4, 180u, (r1 + 180), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 184u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_4, 184u, (r1 + 184), r30);
        MemoryInline::WriteResolved32(guest_range_4, 188u, (r1 + 188), r31);
    }
    r31 = 0x808D0000u;
    r30 = r3;
    r31 = (r31 + -24016);
    ctx->lr = 0x8072DFF0u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x808D0000u;
    r6 = 0x808D0000u;
    r14 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 52), 0, 180u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r30 + 100), r14);
    r3 = (r3 + -23836);
    r6 = (r6 + -23712);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r30 + 52), r3);
    r4 = 0x80240000u;
    r3 = 12;
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r30 + 96), r6);
    r4 = (r4 + 28832);
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 12u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r30 + 108), r0);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r30 + 104), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r30 + 112), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r30 + 120), r0);
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r30 + 116), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 72u, (r30 + 124), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r30 + 132), r0);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r30 + 128), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r30 + 136), r0);
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r30 + 140), r6);
    }
    MemoryInline::WriteResolved32(guest_range_0, 92u, (r30 + 144), r14);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r30 + 152), r0);
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r30 + 148), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 104u, (r30 + 156), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r30 + 164), r0);
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r30 + 160), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r30 + 168), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r30 + 176), r0);
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r30 + 172), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 128u, (r30 + 180), r0);
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r30 + 184), r6);
    }
    MemoryInline::WriteResolved32(guest_range_0, 136u, (r30 + 188), r14);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 144u, (r30 + 196), r0);
        MemoryInline::WriteResolved32(guest_range_0, 140u, (r30 + 192), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r30 + 200), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 152u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 156u, (r30 + 208), r0);
        MemoryInline::WriteResolved32(guest_range_0, 152u, (r30 + 204), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 160u, (r30 + 212), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 164u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 168u, (r30 + 220), r0);
        MemoryInline::WriteResolved32(guest_range_0, 164u, (r30 + 216), r5);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 172u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r14)))) {
        MemoryInline::WriteResolved32(guest_range_0, 172u, (r30 + 224), r0);
        MemoryInline::WriteResolved32(guest_range_0, 176u, (r30 + 228), r14);
    }
    ctx->lr = 0x8072E108u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8072E10C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072E124;
    }
}

loc_8072E110:
{
    MemoryInline::FlatWriteRam32((r3 + 4), r14);
    r4 = 0x808D0000u;
    r4 = (r4 + -23940);
    MemoryInline::FlatWriteRam32((r3 + 8), r14);
    MemoryInline::FlatWriteRam32(r3, r4);
}

loc_8072E124:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 68), 0, 160u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r30 + 68), r3);
    r3 = (r31 + 4);
    r7 = (r31 + 16);
    r4 = 0x80240000u;
    r4 = (r4 + 28832);
    guest_range_3 = MemoryInline::ResolveRangeHost(r4, 0, 12u, true, false);
    r17 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
    r6 = (r31 + 28);
    guest_range_5 = MemoryInline::ResolveRangeHost((r31 + 4), 0, 72u, true, false);
    r20 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r31 + 4));
    r5 = (r31 + 40);
    r18 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
    r14 = (r31 + 52);
    r19 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    r16 = (r31 + 64);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 4u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r3 + 4));
            r22 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r3 + 8));
        }
    }
    r3 = r30;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 12u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_5, 12u, (r31 + 16));
            r24 = MemoryInline::ReadResolved32(guest_range_5, 16u, (r7 + 4));
        }
    }
    r25 = MemoryInline::ReadResolved32(guest_range_5, 20u, (r7 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r30 + 112), r25);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r30 + 100), r30);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r30 + 104), r23);
    }
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r30 + 108), r24);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r30 + 116), r20);
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r30 + 120), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r30 + 124), r22);
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r30 + 128), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r30 + 132), r18);
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r30 + 136), r19);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r27 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    r28 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_5, 24u, (r31 + 28));
            r12 = MemoryInline::ReadResolved32(guest_range_5, 28u, (r6 + 4));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 32u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_5, 32u, (r6 + 8));
            r10 = MemoryInline::ReadResolved32(guest_range_5, 36u, (r31 + 40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 40u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_5, 40u, (r5 + 4));
            r8 = MemoryInline::ReadResolved32(guest_range_5, 44u, (r5 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_1, 88u, (r30 + 156), r8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r30 + 144), r30);
        MemoryInline::WriteResolved32(guest_range_1, 80u, (r30 + 148), r10);
    }
    MemoryInline::WriteResolved32(guest_range_1, 84u, (r30 + 152), r9);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r30 + 160), r29);
        MemoryInline::WriteResolved32(guest_range_1, 96u, (r30 + 164), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r30 + 168), r11);
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r30 + 172), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 108u, (r30 + 176), r27);
        MemoryInline::WriteResolved32(guest_range_1, 112u, (r30 + 180), r28);
    }
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
    r5 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 48u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_5, 48u, (r31 + 52));
            r0 = MemoryInline::ReadResolved32(guest_range_5, 52u, (r14 + 4));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 56u);
        if (resolved_pair.valid) {
            r15 = resolved_pair.first;
            r14 = resolved_pair.second;
        } else {
            r15 = MemoryInline::ReadResolved32(guest_range_5, 56u, (r14 + 8));
            r14 = MemoryInline::ReadResolved32(guest_range_5, 60u, (r31 + 64));
        }
    }
    r31 = (r31 + 64);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 64u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_5, 64u, (r16 + 4));
            r31 = MemoryInline::ReadResolved32(guest_range_5, 68u, (r31 + 8));
        }
    }
    MemoryInline::WriteResolved32(guest_range_1, 132u, (r30 + 200), r31);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r14)))) {
        MemoryInline::WriteResolved32(guest_range_1, 120u, (r30 + 188), r30);
        MemoryInline::WriteResolved32(guest_range_1, 124u, (r30 + 192), r14);
    }
    MemoryInline::WriteResolved32(guest_range_1, 128u, (r30 + 196), r16);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 136u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 136u, (r30 + 204), r4);
        MemoryInline::WriteResolved32(guest_range_1, 140u, (r30 + 208), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r15)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_1, 144u, (r30 + 212), r15);
        MemoryInline::WriteResolved32(guest_range_1, 148u, (r30 + 216), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 152u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 152u, (r30 + 220), r6);
        MemoryInline::WriteResolved32(guest_range_1, 156u, (r30 + 224), r5);
    }
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 108u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_6, 72u, (r1 + 80), r17);
        MemoryInline::WriteResolved32(guest_range_6, 76u, (r1 + 84), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_6, 80u, (r1 + 88), r19);
        MemoryInline::WriteResolved32(guest_range_6, 84u, (r1 + 92), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_6, 88u, (r1 + 96), r21);
        MemoryInline::WriteResolved32(guest_range_6, 92u, (r1 + 100), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_6, 96u, (r1 + 104), r23);
        MemoryInline::WriteResolved32(guest_range_6, 100u, (r1 + 108), r24);
    }
    MemoryInline::WriteResolved32(guest_range_6, 104u, (r1 + 112), r25);
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_6, 36u, (r1 + 44), r26);
        MemoryInline::WriteResolved32(guest_range_6, 40u, (r1 + 48), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_6, 44u, (r1 + 52), r28);
        MemoryInline::WriteResolved32(guest_range_6, 48u, (r1 + 56), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r15)) << 32) | static_cast<uint32_t>(r14)))) {
        MemoryInline::WriteResolved32(guest_range_6, 20u, (r1 + 28), r15);
        MemoryInline::WriteResolved32(guest_range_6, 24u, (r1 + 32), r14);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_6, 28u, (r1 + 36), r16);
        MemoryInline::WriteResolved32(guest_range_6, 32u, (r1 + 40), r31);
    }
    guest_range_7 = MemoryInline::ResolveRangeHost((r1 + 120), 0, 80u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_7, 0u, (r1 + 120));
            r15 = MemoryInline::ReadResolved32(guest_range_7, 4u, (r1 + 124));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_7, 8u, (r1 + 128));
            r17 = MemoryInline::ReadResolved32(guest_range_7, 12u, (r1 + 132));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_7, 16u, (r1 + 136));
            r19 = MemoryInline::ReadResolved32(guest_range_7, 20u, (r1 + 140));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_7, 24u, (r1 + 144));
            r21 = MemoryInline::ReadResolved32(guest_range_7, 28u, (r1 + 148));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_7, 32u, (r1 + 152));
            r23 = MemoryInline::ReadResolved32(guest_range_7, 36u, (r1 + 156));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_7, 40u, (r1 + 160));
            r25 = MemoryInline::ReadResolved32(guest_range_7, 44u, (r1 + 164));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_7, 48u, (r1 + 168));
            r27 = MemoryInline::ReadResolved32(guest_range_7, 52u, (r1 + 172));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_7, 56u, (r1 + 176));
            r29 = MemoryInline::ReadResolved32(guest_range_7, 60u, (r1 + 180));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_7, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_7, 64u, (r1 + 184));
            r31 = MemoryInline::ReadResolved32(guest_range_7, 68u, (r1 + 188));
        }
    }
    MemoryInline::WriteResolved32(guest_range_6, 16u, (r1 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_7, 76u, (r1 + 196));
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_6, 52u, (r1 + 60), r12);
        MemoryInline::WriteResolved32(guest_range_6, 56u, (r1 + 64), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_6, 60u, (r1 + 68), r10);
        MemoryInline::WriteResolved32(guest_range_6, 64u, (r1 + 72), r9);
    }
    MemoryInline::WriteResolved32(guest_range_6, 68u, (r1 + 76), r8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_6, 0u, (r1 + 8), r7);
        MemoryInline::WriteResolved32(guest_range_6, 4u, (r1 + 12), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_6, 8u, (r1 + 16), r5);
        MemoryInline::WriteResolved32(guest_range_6, 12u, (r1 + 20), r4);
    }
    ctx->lr = r0;
    r1 = (r1 + 192);
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8072DFD0 func_8072DFD0 preserves=true fpr_mask=0x00000000
