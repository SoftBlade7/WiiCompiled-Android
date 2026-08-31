#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8083F988(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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

    goto loc_8083F988;

loc_8083F988:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -160), 0, 168u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 164u, (r1 + 164), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r1 + 96), r16);
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r1 + 104), r18);
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r1 + 108), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r1 + 112), r20);
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r1 + 116), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r1 + 120), r22);
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r1 + 124), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 128u, (r1 + 128), r24);
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r1 + 132), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 136u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 136u, (r1 + 136), r26);
        MemoryInline::WriteResolved32(guest_range_0, 140u, (r1 + 140), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 144u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 144u, (r1 + 144), r28);
        MemoryInline::WriteResolved32(guest_range_0, 148u, (r1 + 148), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 152u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 152u, (r1 + 152), r30);
        MemoryInline::WriteResolved32(guest_range_0, 156u, (r1 + 156), r31);
    }
    r20 = 0x808B0000u;
    r20 = (r20 + -12152);
    r6 = (r20 + 192);
    r5 = (r20 + 216);
    r19 = (r20 + 224);
    r25 = (r20 + 248);
    r26 = MemoryInline::FlatRead32((r4 + 576));
    r27 = MemoryInline::FlatRead32((r20 + 192));
    r28 = MemoryInline::FlatRead32((r6 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(-100));
}

loc_8083F9C0:
{
    r29 = MemoryInline::FlatRead32((r6 + 8));
    r30 = MemoryInline::FlatRead32((r6 + 12));
    r31 = MemoryInline::FlatRead32((r6 + 16));
    r12 = MemoryInline::FlatRead32((r6 + 20));
    r11 = MemoryInline::FlatRead8((r20 + 216));
    r10 = MemoryInline::FlatRead8((r5 + 1));
    r9 = MemoryInline::FlatRead8((r5 + 2));
    r8 = MemoryInline::FlatRead8((r5 + 3));
    r7 = MemoryInline::FlatRead8((r5 + 4));
    r6 = MemoryInline::FlatRead8((r5 + 5));
    r5 = MemoryInline::FlatRead32((r20 + 224));
    r0 = MemoryInline::FlatRead32((r19 + 4));
    r16 = MemoryInline::FlatRead32((r19 + 8));
    r17 = MemoryInline::FlatRead32((r19 + 12));
    r18 = MemoryInline::FlatRead32((r19 + 16));
    r19 = MemoryInline::FlatRead32((r19 + 20));
    r20 = MemoryInline::FlatRead32((r20 + 248));
    r21 = MemoryInline::FlatRead32((r25 + 4));
    r22 = MemoryInline::FlatRead32((r25 + 8));
    r23 = MemoryInline::FlatRead32((r25 + 12));
    r24 = MemoryInline::FlatRead32((r25 + 16));
    r25 = MemoryInline::FlatRead32((r25 + 20));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 80u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r1 + 64), r27);
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r1 + 68), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r1 + 72), r29);
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 76), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r1 + 80), r31);
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r1 + 84), r12);
    }
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r1 + 8), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r1 + 9), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r1 + 10), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r1 + 11), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r1 + 12), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r1 + 13), static_cast<uint8_t>(r6));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 40), r5);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 44), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 48), r16);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 52), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r1 + 56), r18);
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 60), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 16), r20);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 20), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 24), r22);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 28), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 32), r24);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 36), r25);
    }
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8083FA98;
    }
}

loc_8083FA7C:
{
    r5 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = MemoryInline::FlatRead32((r5 + 6016));
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r5 + 6016), r0);
    ctx->lr = 0x8083FA94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    InvokeDirectCpu<0x80837B4Cu>(ctx);
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
    goto loc_8083FB18;
}

loc_8083FA98:
{
    r6 = 0x809C0000u;
    r5 = (r1 + 8);
    r6 = MemoryInline::FlatRead32((r6 + 7736));
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r9 = (r9_rot_1 & -4);
    r5_addr_1 = (r5 + r26);
    r0 = MemoryInline::FlatRead8(r5_addr_1);
    r7 = (r1 + 64);
    r6 = MemoryInline::FlatRead32((r6 + 152));
    r5 = 0x809C0000u;
    r7_addr_1 = (r7 + r9);
    r7 = MemoryInline::FlatRead32(r7_addr_1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8083FAC0:
{
    MemoryInline::FlatWrite32((r6 + 116), r7);
    r5 = MemoryInline::FlatRead32((r5 + -10456));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8083FADC;
    }
}

loc_8083FACC:
{
    r0 = MemoryInline::FlatRead32((r5 + 6016));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r5 + 6016), r0);
    goto loc_8083FAE8;
}

loc_8083FADC:
{
    r0 = MemoryInline::FlatRead32((r5 + 6016));
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r5 + 6016), r0);
}

loc_8083FAE8:
{
    r7 = 0x809C0000u;
    r8 = (r1 + 40);
    r5 = MemoryInline::FlatRead32((r7 + -10456));
    r6 = (r1 + 16);
    r8_addr_1 = (r8 + r9);
    r0 = MemoryInline::FlatRead32(r8_addr_1);
    MemoryInline::FlatWrite32((r5 + 5980), r0);
    r5 = r4;
    r6_addr_1 = (r6 + r9);
    r0 = MemoryInline::FlatRead32(r6_addr_1);
    r4 = 107;
    r6 = MemoryInline::FlatRead32((r7 + -10456));
    MemoryInline::FlatWrite32((r6 + 5996), r0);
    ctx->lr = 0x8083FB18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    InvokeDirectCpu<0x80837720u>(ctx);
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

loc_8083FB18:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 96), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r1 + 96));
            r17 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r1 + 100));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r1 + 104));
            r19 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r1 + 108));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r1 + 112));
            r21 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r1 + 116));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r1 + 120));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r1 + 124));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r1 + 128));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r1 + 132));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r1 + 136));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r1 + 140));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 48u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r1 + 144));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r1 + 148));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 56u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 56u, (r1 + 152));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r1 + 156));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 68u, (r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFEFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8083F988 func_8083F988 preserves=true fpr_mask=0x00000000
