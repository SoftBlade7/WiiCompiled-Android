#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805FABF4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r16_rot_0 = 0;
    uint32_t r16_rot_1 = 0;
    uint32_t r16_rot_2 = 0;
    uint32_t r17_addr_0 = 0;
    uint32_t r17_addr_1 = 0;
    uint32_t r17_addr_2 = 0;
    uint32_t r17_addr_3 = 0;
    uint32_t r17_addr_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r6_stbu_ea_0 = 0;
    uint32_t r6_stbu_ea_1 = 0;
    uint32_t r6_stbu_ea_2 = 0;
    uint32_t r6_stbu_ea_3 = 0;
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805FABF4;

loc_805FABF4:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r5));
}

loc_805FAC00:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 88), 0, 80u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 76u, (r1 + 164), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + 88), r14);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r1 + 92), r15);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 96), r16);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 100), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 104), r18);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 108), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 112), r20);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 116), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 120), r22);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 124), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 128), r24);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 132), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r1 + 136), r26);
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 140), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r1 + 144), r28);
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r1 + 148), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r1 + 152), r30);
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 156), r31);
    }
    r26 = r3;
    r15 = r4;
    r14 = r5;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FAF20;
    }
}

loc_805FAC18:
{
    r4 = r14;
    ctx->lr = 0x805FAC20u;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805FAA84u>(ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r26 + 4));
    r16_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(2));
    r16 = (r16_rot_1 & -4);
    r3_addr_1 = (r3 + r16);
    r0 = MemoryInline::FlatRead32(r3_addr_1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805FAC30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FAF20;
    }
}

loc_805FAC34:
{
    r4 = MemoryInline::FlatRead32((r26 + 44));
    r3 = 184;
    r5 = 4;
    ctx->lr = 0x805FAC44u;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DE0u>(ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805FAC48:
{
    r28 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805FAC64;
    }
}

loc_805FAC50:
{
    r5 = 0x808B0000u;
    r4 = 7;
    r5 = (r5 + 12616);
    MemoryInline::FlatWriteRam32(r3, r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    InvokeDirectCpu<0x80525F88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
}

loc_805FAC64:
{
    r3 = MemoryInline::FlatRead32((r26 + 4));
    r0 = 38;
    r6 = (r28 + 15);
    r3_addr_2 = (r3 + r16);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 180u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 4));
    r5 = (r3 + 15);
    MemoryInline::FlatWriteRam32((r28 + 4), r4);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 8));
    MemoryInline::FlatWriteRam8((r28 + 8), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 9));
    MemoryInline::FlatWriteRam8((r28 + 9), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 12));
    MemoryInline::FlatWriteRam32((r28 + 12), r4);
    ctr = r0;
}

loc_805FAC9C:
{
    r4 = MemoryInline::FlatRead8((r5 + 1));
    r5 = (r5 + 2);
    r0 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r4));
    r6_stbu_ea_2 = (r6 + 2);
    MemoryInline::FlatWrite8(r6_stbu_ea_2, static_cast<uint8_t>(r0));
    r6 = r6_stbu_ea_2;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805FAC9C;
    }
}

loc_805FACB0:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 88u, (r3 + 92));
    r17 = 0x80890000u;
    guest_range_2 = MemoryInline::ResolveRangeHost((r28 + 92), 0, 92u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r28 + 92), r0);
    r27 = 0;
    r18 = 0x808C0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r14), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 92u, (r3 + 96));
    r30 = (r14 * 36);
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r28 + 96), static_cast<uint8_t>(r4));
    r23 = r27;
    r17 = (r17 + 25352);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 93u, (r3 + 97));
    r31 = (r15 * 36);
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r28 + 97), static_cast<uint8_t>(r4));
    r18 = (r18 + -24800);
    r20 = (r1 + 8);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 94u, (r3 + 98));
    r25 = 0;
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r28 + 98), static_cast<uint8_t>(r4));
    r24 = 0;
    r21 = 0x809C0000u;
    r19 = 9;
    r4 = MemoryInline::ReadResolved8(guest_range_0, 95u, (r3 + 99));
    r14 = 0x809C0000u;
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r28 + 99), static_cast<uint8_t>(r4));
    r22 = 1;
    r4 = MemoryInline::ReadResolved32(guest_range_0, 96u, (r3 + 100));
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r28 + 100), r4);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 100u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 104u, (r3 + 108));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 100u, (r3 + 104));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r28 + 104), r5);
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r28 + 108), r4);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 108u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 112u, (r3 + 116));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 108u, (r3 + 112));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r28 + 112), r5);
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r28 + 116), r4);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 116u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 120u, (r3 + 124));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 116u, (r3 + 120));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r28 + 120), r5);
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r28 + 124), r4);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 124u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 128u, (r3 + 132));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 124u, (r3 + 128));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r28 + 128), r5);
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r28 + 132), r4);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 132u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 136u, (r3 + 140));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 132u, (r3 + 136));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 44u, (r28 + 136), r5);
        MemoryInline::WriteResolved32(guest_range_2, 48u, (r28 + 140), r4);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 140u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 144u, (r3 + 148));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 140u, (r3 + 144));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 52u, (r28 + 144), r5);
        MemoryInline::WriteResolved32(guest_range_2, 56u, (r28 + 148), r4);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 148u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.second;
            r5 = resolved_pair.first;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 152u, (r3 + 156));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 148u, (r3 + 152));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 60u, (r28 + 152), r5);
        MemoryInline::WriteResolved32(guest_range_2, 64u, (r28 + 156), r4);
    }
    r4 = MemoryInline::ReadResolved32(guest_range_0, 156u, (r3 + 160));
    MemoryInline::WriteResolved32(guest_range_2, 68u, (r28 + 160), r4);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 160u, (r3 + 164));
    MemoryInline::WriteResolved8(guest_range_2, 72u, (r28 + 164), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 161u, (r3 + 165));
    MemoryInline::WriteResolved8(guest_range_2, 73u, (r28 + 165), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 162u, (r3 + 166));
    MemoryInline::WriteResolved8(guest_range_2, 74u, (r28 + 166), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 164u, (r3 + 168));
    MemoryInline::WriteResolved32(guest_range_2, 76u, (r28 + 168), r4);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 168u, (r3 + 172));
    MemoryInline::WriteResolved8(guest_range_2, 80u, (r28 + 172), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 169u, (r3 + 173));
    MemoryInline::WriteResolved8(guest_range_2, 81u, (r28 + 173), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 170u, (r3 + 174));
    MemoryInline::WriteResolved8(guest_range_2, 82u, (r28 + 174), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 172u, (r3 + 176));
    MemoryInline::WriteResolved32(guest_range_2, 84u, (r28 + 176), r4);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 176u, (r3 + 180));
    MemoryInline::WriteResolved32(guest_range_2, 88u, (r28 + 180), r3);
    r3 = MemoryInline::FlatRead32((r26 + 4));
    r3_addr_3 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_3, r28);
}

loc_805FADE8:
{
    r29 = (r26 + r24);
    r0 = MemoryInline::FlatRead32((r29 + 8));
}

loc_805FADF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805FAF08;
    }
}

loc_805FADF8:
{
    r3 = (r31 + r0);
    r4 = MemoryInline::FlatRead8((r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805FAE04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FAE58;
    }
}

loc_805FAE08:
{
    // inline leaf 0x80170C5C (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r3 = (r3_rot_2 & 536870880);
    // end of inlined leaf 0x80170C5C
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r16 = r3;
    r3 = (r0 + r30);
    // inline leaf 0x80170C5C (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r3 = (r3_rot_3 & 536870880);
    // end of inlined leaf 0x80170C5C
    r17_addr_2 = (r17 + r25);
    r5 = MemoryInline::FlatRead16(r17_addr_2);
    r15 = (r3 + -2147483648);
    r4 = (r16 + -2147483648);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r3 = r15;
    r16 = (r5 * r0);
    r5 = r16;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r15;
    r4 = r16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A162Cu>(ctx);
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 32), static_cast<uint8_t>(r22));
    goto loc_805FAF08;
}

loc_805FAE58:
{
    r6 = (r1 + 4);
    r5 = (r18 + -4);
    ctr = r19;
}

loc_805FAE64:
{
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r5 = (r5 + 8);
    r3 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWrite32((r6 + 4), r4);
    MemoryInline::FlatWrite32((r6 + 8), r3);
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805FAE64;
    }
}

loc_805FAE78:
{
    r4 = MemoryInline::FlatRead32((r28 + 156));
    r3 = MemoryInline::FlatRead32((r14 + 7736));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    r5 = MemoryInline::FlatRead32((r28 + 168));
    r3 = MemoryInline::FlatRead32(r3);
    r4 = (r4 * 36);
    r3 = MemoryInline::FlatRead8((r3 + 911));
    r5 = (r5 * 12);
    r4 = (r20 + r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805FAEA0:
{
    r5_addr_2 = (r5 + r4);
    r6 = MemoryInline::FlatRead32(r5_addr_2);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FAED8;
    }
}

loc_805FAEA8:
{
    r4 = (r17 + r25);
    r3 = MemoryInline::FlatRead32((r21 + 11760));
    r7 = MemoryInline::FlatRead32((r4 + 8));
    r5 = r28;
    r8 = MemoryInline::FlatRead32((r4 + 4));
    r9 = MemoryInline::FlatRead8((r4 + 12));
    r4 = (r0 + r30);
    ctx->lr = 0x805FAEC8u;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80781290u>(ctx);
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 32), static_cast<uint8_t>(r22));
    goto loc_805FAF08;
}

loc_805FAED8:
{
    r3 = (r30 + r0);
    r7 = (r17 + r25);
    MemoryInline::FlatWrite8((r3 + 32), static_cast<uint8_t>(r23));
    r5 = r28;
    r8 = MemoryInline::FlatRead32((r7 + 8));
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r3 = MemoryInline::FlatRead32((r21 + 11760));
    r4 = (r0 + r30);
    r9 = MemoryInline::FlatRead32((r7 + 4));
    r10 = MemoryInline::FlatRead8((r7 + 12));
    r7 = (r4 + 32);
    ctx->lr = 0x805FAF08u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x8078235Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
}

loc_805FAF08:
{
    r27 = (r27 + 1);
    r24 = (r24 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(7));
}

loc_805FAF14:
{
    r25 = (r25 + 16);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805FADE8;
    }
}

loc_805FAF1C:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x80171110u>(ctx);
}

loc_805FAF20:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 88), 0, 80u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r1 + 88));
            r15 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r1 + 92));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r1 + 96));
            r17 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r1 + 100));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r1 + 104));
            r19 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r1 + 108));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r1 + 112));
            r21 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r1 + 116));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r1 + 120));
            r23 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r1 + 124));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_3, 40u, (r1 + 128));
            r25 = MemoryInline::ReadResolved32(guest_range_3, 44u, (r1 + 132));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_3, 48u, (r1 + 136));
            r27 = MemoryInline::ReadResolved32(guest_range_3, 52u, (r1 + 140));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_3, 56u, (r1 + 144));
            r29 = MemoryInline::ReadResolved32(guest_range_3, 60u, (r1 + 148));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_3, 64u, (r1 + 152));
            r31 = MemoryInline::ReadResolved32(guest_range_3, 68u, (r1 + 156));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 76u, (r1 + 164));
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805FABF4 func_805FABF4 preserves=true fpr_mask=0x00000000
