#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D577C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_ca_4 = 0;
    uint32_t r3_ca_5 = 0;
    uint32_t r3_ca_6 = 0;
    uint32_t r3_not_0 = 0;
    uint32_t r3_not_1 = 0;
    uint32_t r3_not_2 = 0;
    uint32_t r3_not_3 = 0;
    uint32_t r3_not_4 = 0;
    uint32_t r3_not_5 = 0;
    uint32_t r3_not_6 = 0;
    uint32_t r3_subfe_rb_0 = 0;
    uint32_t r3_subfe_rb_1 = 0;
    uint32_t r3_subfe_rb_2 = 0;
    uint32_t r3_subfe_rb_3 = 0;
    uint32_t r3_subfe_rb_4 = 0;
    uint32_t r3_subfe_rb_5 = 0;
    uint32_t r3_subfe_rb_6 = 0;
    uint32_t r4_subfc_min_0 = 0;
    uint32_t r4_subfc_min_1 = 0;
    uint32_t r4_subfc_min_2 = 0;
    uint32_t r4_subfc_min_3 = 0;
    uint32_t r4_subfc_min_4 = 0;
    uint32_t r4_subfc_min_5 = 0;
    uint32_t r4_subfc_min_6 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
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
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_800D577C;

loc_800D577C:
{
    MemoryInline::FlatWriteRam32((r1 + -272), r1);
    r1 = (r1 + -272);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 276), r0);
    r11 = (r1 + 272);
    // inline leaf 0x80021580 (14 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -52), r19);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -48), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -44), r21);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -4), r31);
    // end of inlined leaf 0x80021580
    r11 = MemoryInline::FlatRead32((r13 + -26868));
    r26 = r3;
    r0 = r5;
    r27 = r6;
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + 48), 0, 2150u, true, false);
    r3 = MemoryInline::ReadResolved8(guest_range_1, 2149u, (r11 + 2197));
    r28 = r7;
    r29 = r8;
    r30 = r9;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800D57B4:
{
    r31 = r10;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D58C4;
    }
}

loc_800D57BC:
{
    r22 = MemoryInline::ReadResolved32(guest_range_1, 1544u, (r11 + 1592));
    r20 = r11;
    r23 = MemoryInline::ReadResolved32(guest_range_1, 1548u, (r11 + 1596));
    r21 = 0;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 1552u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 1552u, (r11 + 1600));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 1556u, (r11 + 1604));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 1560u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_1, 1560u, (r11 + 1608));
            r10 = MemoryInline::ReadResolved32(guest_range_1, 1564u, (r11 + 1612));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 1568u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_1, 1568u, (r11 + 1616));
            r8 = MemoryInline::ReadResolved32(guest_range_1, 1572u, (r11 + 1620));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 1576u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_1, 1576u, (r11 + 1624));
            r6 = MemoryInline::ReadResolved32(guest_range_1, 1580u, (r11 + 1628));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 1584u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 1584u, (r11 + 1632));
            r3 = MemoryInline::ReadResolved32(guest_range_1, 1588u, (r11 + 1636));
        }
    }
    guest_range_7 = MemoryInline::ResolveRangeHost((r1 + 168), 0, 48u, false, true);
    MemoryInline::WriteResolved32(guest_range_7, 0u, (r1 + 168), r22);
    r19 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + 48));
    r22 = MemoryInline::ReadResolved32(guest_range_1, 1864u, (r11 + 1912));
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_7, 4u, (r1 + 172), r23);
        MemoryInline::WriteResolved32(guest_range_7, 8u, (r1 + 176), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_7, 12u, (r1 + 180), r25);
        MemoryInline::WriteResolved32(guest_range_7, 16u, (r1 + 184), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_7, 20u, (r1 + 188), r10);
        MemoryInline::WriteResolved32(guest_range_7, 24u, (r1 + 192), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_7, 28u, (r1 + 196), r8);
        MemoryInline::WriteResolved32(guest_range_7, 32u, (r1 + 200), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_7, 36u, (r1 + 204), r6);
        MemoryInline::WriteResolved32(guest_range_7, 40u, (r1 + 208), r5);
    }
    MemoryInline::WriteResolved32(guest_range_7, 44u, (r1 + 212), r3);
    ctr = r19;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r19), static_cast<int32_t>(0));
}

loc_800D5834:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800D5860;
    }
}

loc_800D5838:
{
    r3 = MemoryInline::FlatRead32((r20 + 56));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(r3));
}

loc_800D5840:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800D5854;
    }
}

loc_800D5844:
{
    r3 = (r21 * 48);
    r3 = (r11 + r3);
    r6 = (r3 + 56);
    goto loc_800D5864;
}

loc_800D5854:
{
    r20 = (r20 + 48);
    r21 = (r21 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800D5838;
    }
}

loc_800D5860:
{
    r6 = 0;
}

loc_800D5864:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r6, 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 0u, r6);
            r3 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r6 + 4));
        }
    }
    guest_range_8 = MemoryInline::ResolveRangeHost((r1 + 120), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_8, 0u, (r1 + 120), r5);
        MemoryInline::WriteResolved32(guest_range_8, 4u, (r1 + 124), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r6 + 8));
            r3 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r6 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_8, 8u, (r1 + 128), r5);
        MemoryInline::WriteResolved32(guest_range_8, 12u, (r1 + 132), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r6 + 16));
            r3 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r6 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_8, 16u, (r1 + 136), r5);
        MemoryInline::WriteResolved32(guest_range_8, 20u, (r1 + 140), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r6 + 24));
            r3 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r6 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_8, 24u, (r1 + 144), r5);
        MemoryInline::WriteResolved32(guest_range_8, 28u, (r1 + 148), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r6 + 32));
            r3 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r6 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_8, 32u, (r1 + 152), r5);
        MemoryInline::WriteResolved32(guest_range_8, 36u, (r1 + 156), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r6 + 40));
            r3 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r6 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_8, 40u, (r1 + 160), r5);
        MemoryInline::WriteResolved32(guest_range_8, 44u, (r1 + 164), r3);
    }
}

loc_800D58C4:
{
    r5 = r4;
    r6 = r0;
    r3 = 3;
    r4 = 0;
    ctx->lr = 0x800D58D8u;
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
    InvokeDirectCpu<0x800DB2F8u>(ctx);
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
    r13 = ctx->gpr[13];
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
    r4 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead8((r4 + 2197));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800D58E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800D5924;
    }
}

loc_800D58E8:
{
    r3 = (r1 + 72);
    r4 = 0;
    r5 = 48;
    ctx->lr = 0x800D58F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r4 = 0;
    r5 = 48;
    r3 = (r3 + 1592);
    ctx->lr = 0x800D590Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = 255;
    MemoryInline::FlatWrite8((r3 + 1614), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    MemoryInline::FlatWrite32((r3 + 1592), r26);
    goto loc_800D5E00;
}

loc_800D5924:
{
    guest_range_9 = MemoryInline::ResolveRangeHost((r1 + 168), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_9, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_9, 0u, (r1 + 168));
            r0 = MemoryInline::ReadResolved32(guest_range_9, 4u, (r1 + 172));
        }
    }
    guest_range_3 = MemoryInline::ResolveRangeHost((r4 + 1592), 0, 48u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r4 + 1592), r3);
    r3 = MemoryInline::ReadResolved32(guest_range_9, 8u, (r1 + 176));
    MemoryInline::WriteResolved32(guest_range_3, 4u, (r4 + 1596), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_9, 12u, (r1 + 180));
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r4 + 1600), r3);
    r3 = MemoryInline::ReadResolved32(guest_range_9, 16u, (r1 + 184));
    MemoryInline::WriteResolved32(guest_range_3, 12u, (r4 + 1604), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_9, 20u, (r1 + 188));
    MemoryInline::WriteResolved32(guest_range_3, 16u, (r4 + 1608), r3);
    r3 = MemoryInline::ReadResolved32(guest_range_9, 24u, (r1 + 192));
    MemoryInline::WriteResolved32(guest_range_3, 20u, (r4 + 1612), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_9, 28u, (r1 + 196));
    MemoryInline::WriteResolved32(guest_range_3, 24u, (r4 + 1616), r3);
    r3 = MemoryInline::ReadResolved32(guest_range_9, 32u, (r1 + 200));
    MemoryInline::WriteResolved32(guest_range_3, 28u, (r4 + 1620), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_9, 36u, (r1 + 204));
    MemoryInline::WriteResolved32(guest_range_3, 32u, (r4 + 1624), r3);
    r3 = MemoryInline::ReadResolved32(guest_range_9, 40u, (r1 + 208));
    MemoryInline::WriteResolved32(guest_range_3, 36u, (r4 + 1628), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_9, 44u, (r1 + 212));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r4 + 1632), r3);
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r4 + 1636), r0);
    }
    r4 = MemoryInline::FlatRead32((r4 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(32));
}

loc_800D598C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D5DEC;
    }
}

loc_800D5990:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800D5994:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800D5D7C;
    }
}

loc_800D5998:
{
}

loc_800D599C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(8))) {
        goto loc_800D5CFC;
    }
}

loc_800D59A0:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r5 = 0;
    r6 = MemoryInline::FlatRead32((r3 + 48));
}

loc_800D59B0:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(0))) {
        goto loc_800D59C8;
    }
}

loc_800D59B4:
{
    r3 = 0x80000000u;
    r0 = (r3 + 1);
}

loc_800D59C0:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r0))) {
        goto loc_800D59C8;
    }
}

loc_800D59C4:
{
    r5 = 1;
}

loc_800D59C8:
{
}

loc_800D59CC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800D5CFC;
    }
}

loc_800D59D0:
{
    r3 = (r4 * 48);
    r0 = (r4 + -1);
    r5 = MemoryInline::FlatRead32((r13 + -26868));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    r3 = (r5 + r3);
    ctr = r0;
}

loc_800D59EC:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(8))) {
        goto loc_800D5CFC;
    }
}

loc_800D59F0:
{
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    MemoryInline::FlatWrite32((r3 + 56), r5);
    MemoryInline::FlatWrite32((r3 + 60), r0);
    r5 = MemoryInline::FlatRead32((r3 + 16));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    MemoryInline::FlatWrite32((r3 + 64), r5);
    MemoryInline::FlatWrite32((r3 + 68), r0);
    r5 = MemoryInline::FlatRead32((r3 + 24));
    r0 = MemoryInline::FlatRead32((r3 + 28));
    MemoryInline::FlatWrite32((r3 + 72), r5);
    MemoryInline::FlatWrite32((r3 + 76), r0);
    r5 = MemoryInline::FlatRead32((r3 + 32));
    r0 = MemoryInline::FlatRead32((r3 + 36));
    MemoryInline::FlatWrite32((r3 + 80), r5);
    MemoryInline::FlatWrite32((r3 + 84), r0);
    r5 = MemoryInline::FlatRead32((r3 + 40));
    r0 = MemoryInline::FlatRead32((r3 + 44));
    MemoryInline::FlatWrite32((r3 + 88), r5);
    MemoryInline::FlatWrite32((r3 + 92), r0);
    r5 = MemoryInline::FlatRead32((r3 + 48));
    r0 = MemoryInline::FlatRead32((r3 + 52));
    MemoryInline::FlatWrite32((r3 + 96), r5);
    MemoryInline::FlatWrite32((r3 + 100), r0);
    r5 = MemoryInline::FlatRead32((r3 + -40));
    r0 = MemoryInline::FlatRead32((r3 + -36));
    MemoryInline::FlatWrite32((r3 + 8), r5);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r5 = MemoryInline::FlatRead32((r3 + -32));
    r0 = MemoryInline::FlatRead32((r3 + -28));
    MemoryInline::FlatWrite32((r3 + 16), r5);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    r5 = MemoryInline::FlatRead32((r3 + -24));
    r0 = MemoryInline::FlatRead32((r3 + -20));
    MemoryInline::FlatWrite32((r3 + 24), r5);
    MemoryInline::FlatWrite32((r3 + 28), r0);
    r5 = MemoryInline::FlatRead32((r3 + -16));
    r0 = MemoryInline::FlatRead32((r3 + -12));
    MemoryInline::FlatWrite32((r3 + 32), r5);
    MemoryInline::FlatWrite32((r3 + 36), r0);
    r5 = MemoryInline::FlatRead32((r3 + -8));
    r0 = MemoryInline::FlatRead32((r3 + -4));
    MemoryInline::FlatWrite32((r3 + 40), r5);
    MemoryInline::FlatWrite32((r3 + 44), r0);
    r5 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r3 + 48), r5);
    MemoryInline::FlatWrite32((r3 + 52), r0);
    r5 = MemoryInline::FlatRead32((r3 + -88));
    r0 = MemoryInline::FlatRead32((r3 + -84));
    MemoryInline::FlatWrite32((r3 + -40), r5);
    MemoryInline::FlatWrite32((r3 + -36), r0);
    r5 = MemoryInline::FlatRead32((r3 + -80));
    r0 = MemoryInline::FlatRead32((r3 + -76));
    MemoryInline::FlatWrite32((r3 + -32), r5);
    MemoryInline::FlatWrite32((r3 + -28), r0);
    r5 = MemoryInline::FlatRead32((r3 + -72));
    r0 = MemoryInline::FlatRead32((r3 + -68));
    MemoryInline::FlatWrite32((r3 + -24), r5);
    MemoryInline::FlatWrite32((r3 + -20), r0);
    r5 = MemoryInline::FlatRead32((r3 + -64));
    r0 = MemoryInline::FlatRead32((r3 + -60));
    MemoryInline::FlatWrite32((r3 + -16), r5);
    MemoryInline::FlatWrite32((r3 + -12), r0);
    r5 = MemoryInline::FlatRead32((r3 + -56));
    r0 = MemoryInline::FlatRead32((r3 + -52));
    MemoryInline::FlatWrite32((r3 + -8), r5);
    MemoryInline::FlatWrite32((r3 + -4), r0);
    r5 = MemoryInline::FlatRead32((r3 + -48));
    r0 = MemoryInline::FlatRead32((r3 + -44));
    MemoryInline::FlatWrite32(r3, r5);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r5 = MemoryInline::FlatRead32((r3 + -136));
    r0 = MemoryInline::FlatRead32((r3 + -132));
    MemoryInline::FlatWrite32((r3 + -88), r5);
    MemoryInline::FlatWrite32((r3 + -84), r0);
    r5 = MemoryInline::FlatRead32((r3 + -128));
    r0 = MemoryInline::FlatRead32((r3 + -124));
    MemoryInline::FlatWrite32((r3 + -80), r5);
    MemoryInline::FlatWrite32((r3 + -76), r0);
    r5 = MemoryInline::FlatRead32((r3 + -120));
    r0 = MemoryInline::FlatRead32((r3 + -116));
    MemoryInline::FlatWrite32((r3 + -72), r5);
    MemoryInline::FlatWrite32((r3 + -68), r0);
    r5 = MemoryInline::FlatRead32((r3 + -112));
    r0 = MemoryInline::FlatRead32((r3 + -108));
    MemoryInline::FlatWrite32((r3 + -64), r5);
    MemoryInline::FlatWrite32((r3 + -60), r0);
    r5 = MemoryInline::FlatRead32((r3 + -104));
    r0 = MemoryInline::FlatRead32((r3 + -100));
    MemoryInline::FlatWrite32((r3 + -56), r5);
    MemoryInline::FlatWrite32((r3 + -52), r0);
    r5 = MemoryInline::FlatRead32((r3 + -96));
    r0 = MemoryInline::FlatRead32((r3 + -92));
    MemoryInline::FlatWrite32((r3 + -48), r5);
    MemoryInline::FlatWrite32((r3 + -44), r0);
    r5 = MemoryInline::FlatRead32((r3 + -184));
    r0 = MemoryInline::FlatRead32((r3 + -180));
    MemoryInline::FlatWrite32((r3 + -136), r5);
    MemoryInline::FlatWrite32((r3 + -132), r0);
    r5 = MemoryInline::FlatRead32((r3 + -176));
    r0 = MemoryInline::FlatRead32((r3 + -172));
    MemoryInline::FlatWrite32((r3 + -128), r5);
    MemoryInline::FlatWrite32((r3 + -124), r0);
    r5 = MemoryInline::FlatRead32((r3 + -168));
    r0 = MemoryInline::FlatRead32((r3 + -164));
    MemoryInline::FlatWrite32((r3 + -120), r5);
    MemoryInline::FlatWrite32((r3 + -116), r0);
    r5 = MemoryInline::FlatRead32((r3 + -160));
    r0 = MemoryInline::FlatRead32((r3 + -156));
    MemoryInline::FlatWrite32((r3 + -112), r5);
    MemoryInline::FlatWrite32((r3 + -108), r0);
    r5 = MemoryInline::FlatRead32((r3 + -152));
    r0 = MemoryInline::FlatRead32((r3 + -148));
    MemoryInline::FlatWrite32((r3 + -104), r5);
    MemoryInline::FlatWrite32((r3 + -100), r0);
    r5 = MemoryInline::FlatRead32((r3 + -144));
    r0 = MemoryInline::FlatRead32((r3 + -140));
    MemoryInline::FlatWrite32((r3 + -96), r5);
    MemoryInline::FlatWrite32((r3 + -92), r0);
    r5 = MemoryInline::FlatRead32((r3 + -232));
    r4 = (r4 + -8);
    r0 = MemoryInline::FlatRead32((r3 + -228));
    MemoryInline::FlatWrite32((r3 + -184), r5);
    MemoryInline::FlatWrite32((r3 + -180), r0);
    r5 = MemoryInline::FlatRead32((r3 + -224));
    r0 = MemoryInline::FlatRead32((r3 + -220));
    MemoryInline::FlatWrite32((r3 + -176), r5);
    MemoryInline::FlatWrite32((r3 + -172), r0);
    r5 = MemoryInline::FlatRead32((r3 + -216));
    r0 = MemoryInline::FlatRead32((r3 + -212));
    MemoryInline::FlatWrite32((r3 + -168), r5);
    MemoryInline::FlatWrite32((r3 + -164), r0);
    r5 = MemoryInline::FlatRead32((r3 + -208));
    r0 = MemoryInline::FlatRead32((r3 + -204));
    MemoryInline::FlatWrite32((r3 + -160), r5);
    MemoryInline::FlatWrite32((r3 + -156), r0);
    r5 = MemoryInline::FlatRead32((r3 + -200));
    r0 = MemoryInline::FlatRead32((r3 + -196));
    MemoryInline::FlatWrite32((r3 + -152), r5);
    MemoryInline::FlatWrite32((r3 + -148), r0);
    r5 = MemoryInline::FlatRead32((r3 + -192));
    r0 = MemoryInline::FlatRead32((r3 + -188));
    MemoryInline::FlatWrite32((r3 + -144), r5);
    MemoryInline::FlatWrite32((r3 + -140), r0);
    r5 = MemoryInline::FlatRead32((r3 + -280));
    r0 = MemoryInline::FlatRead32((r3 + -276));
    MemoryInline::FlatWrite32((r3 + -232), r5);
    MemoryInline::FlatWrite32((r3 + -228), r0);
    r5 = MemoryInline::FlatRead32((r3 + -272));
    r0 = MemoryInline::FlatRead32((r3 + -268));
    MemoryInline::FlatWrite32((r3 + -224), r5);
    MemoryInline::FlatWrite32((r3 + -220), r0);
    r5 = MemoryInline::FlatRead32((r3 + -264));
    r0 = MemoryInline::FlatRead32((r3 + -260));
    MemoryInline::FlatWrite32((r3 + -216), r5);
    MemoryInline::FlatWrite32((r3 + -212), r0);
    r5 = MemoryInline::FlatRead32((r3 + -256));
    r0 = MemoryInline::FlatRead32((r3 + -252));
    MemoryInline::FlatWrite32((r3 + -208), r5);
    MemoryInline::FlatWrite32((r3 + -204), r0);
    r5 = MemoryInline::FlatRead32((r3 + -248));
    r0 = MemoryInline::FlatRead32((r3 + -244));
    MemoryInline::FlatWrite32((r3 + -200), r5);
    MemoryInline::FlatWrite32((r3 + -196), r0);
    r5 = MemoryInline::FlatRead32((r3 + -240));
    r0 = MemoryInline::FlatRead32((r3 + -236));
    MemoryInline::FlatWrite32((r3 + -192), r5);
    MemoryInline::FlatWrite32((r3 + -188), r0);
    r5 = MemoryInline::FlatRead32((r3 + -328));
    r0 = MemoryInline::FlatRead32((r3 + -324));
    MemoryInline::FlatWrite32((r3 + -280), r5);
    MemoryInline::FlatWrite32((r3 + -276), r0);
    r5 = MemoryInline::FlatRead32((r3 + -320));
    r0 = MemoryInline::FlatRead32((r3 + -316));
    MemoryInline::FlatWrite32((r3 + -272), r5);
    MemoryInline::FlatWrite32((r3 + -268), r0);
    r5 = MemoryInline::FlatRead32((r3 + -312));
    r0 = MemoryInline::FlatRead32((r3 + -308));
    MemoryInline::FlatWrite32((r3 + -264), r5);
    MemoryInline::FlatWrite32((r3 + -260), r0);
    r5 = MemoryInline::FlatRead32((r3 + -304));
    r0 = MemoryInline::FlatRead32((r3 + -300));
    MemoryInline::FlatWrite32((r3 + -256), r5);
    MemoryInline::FlatWrite32((r3 + -252), r0);
    r5 = MemoryInline::FlatRead32((r3 + -296));
    r0 = MemoryInline::FlatRead32((r3 + -292));
    MemoryInline::FlatWrite32((r3 + -248), r5);
    MemoryInline::FlatWrite32((r3 + -244), r0);
    r5 = MemoryInline::FlatRead32((r3 + -288));
    r0 = MemoryInline::FlatRead32((r3 + -284));
    MemoryInline::FlatWrite32((r3 + -240), r5);
    MemoryInline::FlatWrite32((r3 + -236), r0);
    r3 = (r3 + -384);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800D59F0;
    }
}

loc_800D5CFC:
{
    r0 = (r4 * 48);
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r5 = (r3 + r0);
    ctr = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800D5D10:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800D5D7C;
    }
}

loc_800D5D14:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r5 + 8), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r5 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r5 + 12));
        }
    }
    guest_range_5 = MemoryInline::ResolveRangeHost((r5 + 56), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 0u, (r5 + 56), r3);
        MemoryInline::WriteResolved32(guest_range_5, 4u, (r5 + 60), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r5 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r5 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 8u, (r5 + 64), r3);
        MemoryInline::WriteResolved32(guest_range_5, 12u, (r5 + 68), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r5 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r5 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 16u, (r5 + 72), r3);
        MemoryInline::WriteResolved32(guest_range_5, 20u, (r5 + 76), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 24u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r5 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r5 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 24u, (r5 + 80), r3);
        MemoryInline::WriteResolved32(guest_range_5, 28u, (r5 + 84), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 32u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r5 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r5 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 32u, (r5 + 88), r3);
        MemoryInline::WriteResolved32(guest_range_5, 36u, (r5 + 92), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r5 + 48));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 44u, (r5 + 52));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 40u, (r5 + 96), r3);
        MemoryInline::WriteResolved32(guest_range_5, 44u, (r5 + 100), r0);
    }
    r5 = (r5 + -48);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800D5D14;
    }
}

loc_800D5D7C:
{
    r4 = MemoryInline::FlatRead32((r13 + -26868));
    guest_range_10 = MemoryInline::ResolveRangeHost((r1 + 120), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_10, 0u, (r1 + 120));
            r0 = MemoryInline::ReadResolved32(guest_range_10, 4u, (r1 + 124));
        }
    }
    MemoryInline::FlatWrite32((r4 + 56), r3);
    MemoryInline::FlatWrite32((r4 + 60), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 8u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_10, 8u, (r1 + 128));
            r0 = MemoryInline::ReadResolved32(guest_range_10, 12u, (r1 + 132));
        }
    }
    MemoryInline::FlatWrite32((r4 + 64), r3);
    MemoryInline::FlatWrite32((r4 + 68), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 16u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_10, 16u, (r1 + 136));
            r0 = MemoryInline::ReadResolved32(guest_range_10, 20u, (r1 + 140));
        }
    }
    MemoryInline::FlatWrite32((r4 + 72), r3);
    MemoryInline::FlatWrite32((r4 + 76), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 24u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_10, 24u, (r1 + 144));
            r0 = MemoryInline::ReadResolved32(guest_range_10, 28u, (r1 + 148));
        }
    }
    MemoryInline::FlatWrite32((r4 + 80), r3);
    MemoryInline::FlatWrite32((r4 + 84), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 32u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_10, 32u, (r1 + 152));
            r0 = MemoryInline::ReadResolved32(guest_range_10, 36u, (r1 + 156));
        }
    }
    MemoryInline::FlatWrite32((r4 + 88), r3);
    MemoryInline::FlatWrite32((r4 + 92), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_10, 40u, (r1 + 160));
            r0 = MemoryInline::ReadResolved32(guest_range_10, 44u, (r1 + 164));
        }
    }
    MemoryInline::FlatWrite32((r4 + 96), r3);
    MemoryInline::FlatWrite32((r4 + 100), r0);
    r3 = MemoryInline::FlatRead32((r4 + 48));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 48), r0);
}

loc_800D5DEC:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r4 = (r1 + 160);
    r5 = 4;
    r3 = (r3 + 2216);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E941Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800D5E00:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_800D5E08:
{
    MemoryInline::FlatWrite32((r3 + 2168), r27);
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    MemoryInline::FlatWrite32((r3 + 2172), r28);
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    MemoryInline::FlatWrite32((r3 + 2212), r29);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D5E38;
    }
}

loc_800D5E20:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r4 = r30;
    r5 = 4;
    r3 = (r3 + 2216);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_800D5E4C;
}

loc_800D5E38:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r4 = 0;
    r5 = 4;
    r3 = (r3 + 2216);
    ctx->lr = 0x800D5E4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800D5E4C:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r4 = 1;
    MemoryInline::FlatWrite32((r3 + 2220), r31);
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead32((r3 + 1912));
    MemoryInline::FlatWrite32((r3 + 1752), r0);
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead8((r3 + 2197));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800D5E80:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800D5F38;
    }
}

loc_800D5E84:
{
    r28 = MemoryInline::FlatRead32((r3 + 1820));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(20));
}

loc_800D5E8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D5F2C;
    }
}

loc_800D5E90:
{
    r21 = MemoryInline::FlatRead32((r13 + -26864));
    r22 = MemoryInline::FlatRead32((r13 + -26860));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    MemoryInline::FlatWrite32((r13 + -26860), r4);
    r27 = 274857984;
    r6 = 0x80000000u;
    r4_subfc_min_1 = r4;
    r4 = (r4_subfc_min_1 - r22);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4_subfc_min_1) >= static_cast<uint32_t>(r22) ? 1u : 0u) << 29);
    MemoryInline::FlatWrite32((r13 + -26864), r3);
    r7 = (r27 + 19923);
    r3_subfe_rb_1 = r3;
    r3_not_1 = ~(r21);
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r3_not_1 + r3_subfe_rb_1);
    r3 = (r3 + r3_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_subfe_rb_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5 = 0;
    r0 = MemoryInline::FlatRead32((r6 + 248));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_6 & 1073741823);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r7) * static_cast<uint64_t>(r0)) >> 32));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r6 = (r6_rot_1 & 67108863);
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800216F0u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r27 + 19923);
    r3 = 0x80280000u;
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r5 = 1374420992;
    r3 = (r3 + -26988);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r8 = MemoryInline::FlatRead32((r3 + 80));
    r9 = (r5 + -31457);
    r3_addr_1 = (r3 + r0);
    r5 = MemoryInline::FlatRead32(r3_addr_1);
    r6 = (static_cast<int32_t>(r6) >> 6);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & 1);
    r3 = 0x80270000u;
    r6 = (r6 + r0);
    r7 = (r4 - r6);
    r4 = (r3 + 29032);
    r0 = (r7 + 50);
    r3 = 1;
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r9)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 5);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r7 = (r7_rot_1 & 1);
    r7 = (r0 + r7);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800D5F2Cu;
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
    InvokeDirectCpu<0x800CD068u>(ctx);
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
    r13 = ctx->gpr[13];
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

loc_800D5F2C:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = 20;
    MemoryInline::FlatWrite32((r3 + 1820), r0);
}

loc_800D5F38:
{
    r19 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead32((r19 + 1756));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800D5F44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800D5F7C;
    }
}

loc_800D5F48:
{
    r3 = MemoryInline::FlatRead32((r19 + 1924));
    r0 = 0;
    r10 = 0x800E0000u;
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = r3;
    r10 = (r10 + 12736);
    r7 = 20;
    r5 = MemoryInline::FlatRead32((r19 + 1928));
    r8 = 1;
    r9 = 0;
    ctx->lr = 0x800D5F78u;
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
    InvokeDirectCpu<0x8011E038u>(ctx);
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
    r13 = ctx->gpr[13];
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
    MemoryInline::FlatWrite32((r19 + 1756), r3);
}

loc_800D5F7C:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead32((r3 + 1756));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800D5F88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800D5F9C;
    }
}

loc_800D5F8C:
{
    r3 = 5;
    ctx->lr = 0x800D5F94u;
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
    InvokeDirectCpu<0x800E2990u>(ctx);
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
    r13 = ctx->gpr[13];
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

loc_800D5F98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800D617C;
    }
}

loc_800D5F9C:
{
    r6 = MemoryInline::FlatRead32((r13 + -26868));
    r3 = (r1 + 16);
    r4 = 12;
    r5 = (r13 + -32180);
    r6 = MemoryInline::FlatRead8((r6 + 23));
    r6 = (r6 + 1);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800D5FBCu;
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
    InvokeDirectCpu<0x80011938u>(ctx);
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
    r13 = ctx->gpr[13];
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
    r4 = (r1 + 16);
    r5 = (r1 + 28);
    r3 = (r13 + -32176);
    r6 = 47;
    ctx->lr = 0x800D5FD0u;
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
    InvokeDirectCpu<0x800CDC98u>(ctx);
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
    r13 = ctx->gpr[13];
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
    r6 = MemoryInline::FlatRead32((r13 + -26868));
    r3 = (r1 + 16);
    r4 = 12;
    r5 = (r13 + -32180);
    r6 = MemoryInline::FlatRead32((r6 + 48));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800D5FECu;
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
    InvokeDirectCpu<0x80011938u>(ctx);
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
    r13 = ctx->gpr[13];
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
    r4 = (r1 + 16);
    r5 = (r1 + 28);
    r3 = (r13 + -32172);
    r6 = 47;
    ctx->lr = 0x800D6000u;
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
    InvokeDirectCpu<0x800CDCF0u>(ctx);
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
    r13 = ctx->gpr[13];
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
    r3 = (r1 + 16);
    r4 = 12;
    r5 = (r13 + -32180);
    r6 = 90;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800D6018u;
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
    InvokeDirectCpu<0x80011938u>(ctx);
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
    r13 = ctx->gpr[13];
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
    r4 = (r1 + 16);
    r5 = (r1 + 28);
    r3 = (r13 + -32168);
    r6 = 47;
    ctx->lr = 0x800D602Cu;
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
    InvokeDirectCpu<0x800CDCF0u>(ctx);
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
    r13 = ctx->gpr[13];
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
    r4 = (r1 + 28);
    r3 = 4;
    r5 = 0;
    ctx->lr = 0x800D603Cu;
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
    InvokeDirectCpu<0x800CEC74u>(ctx);
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
    r13 = ctx->gpr[13];
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
    ctx->lr = 0x800D6040u;
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
    InvokeDirectCpu<0x800E27ACu>(ctx);
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
    r13 = ctx->gpr[13];
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

loc_800D6044:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800D617C;
    }
}

loc_800D6048:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800D6054:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800D6068;
    }
}

loc_800D6058:
{
    r3 = MemoryInline::FlatRead32((r3 + 1912));
    ctx->lr = 0x800D6060u;
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
    InvokeDirectCpu<0x800D4E58u>(ctx);
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
    r13 = ctx->gpr[13];
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

loc_800D6064:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800D617C;
    }
}

loc_800D6068:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead8((r3 + 2197));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800D6074:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800D6090;
    }
}

loc_800D6078:
{
    r3 = MemoryInline::FlatRead32((r3 + 1912));
    ctx->lr = 0x800D6080u;
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
    InvokeDirectCpu<0x800DB614u>(ctx);
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
    r13 = ctx->gpr[13];
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
    ctx->lr = 0x800D6084u;
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
    InvokeDirectCpu<0x800E2990u>(ctx);
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
    r13 = ctx->gpr[13];
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

loc_800D6088:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D617C;
    }
}

loc_800D608C:
{
    goto loc_800D617C;
}

loc_800D6090:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    ctx->lr = 0x800D6098u;
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
    InvokeDirectCpu<0x8010F240u>(ctx);
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
    r13 = ctx->gpr[13];
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
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r28 = MemoryInline::FlatRead32((r3 + 1820));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(3));
}

loc_800D60A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D6144;
    }
}

loc_800D60A8:
{
    r21 = MemoryInline::FlatRead32((r13 + -26864));
    r22 = MemoryInline::FlatRead32((r13 + -26860));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    MemoryInline::FlatWrite32((r13 + -26860), r4);
    r27 = 274857984;
    r6 = 0x80000000u;
    r4_subfc_min_4 = r4;
    r4 = (r4_subfc_min_4 - r22);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4_subfc_min_4) >= static_cast<uint32_t>(r22) ? 1u : 0u) << 29);
    MemoryInline::FlatWrite32((r13 + -26864), r3);
    r7 = (r27 + 19923);
    r3_subfe_rb_4 = r3;
    r3_not_4 = ~(r21);
    r3_ca_4 = (xer >> 29) & 1u;
    r3 = (r3_not_4 + r3_subfe_rb_4);
    r3 = (r3 + r3_ca_4);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_4)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_subfe_rb_4)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_4)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5 = 0;
    r0 = MemoryInline::FlatRead32((r6 + 248));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_11 & 1073741823);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r7) * static_cast<uint64_t>(r0)) >> 32));
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r6 = (r6_rot_4 & 67108863);
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800216F0u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r27 + 19923);
    r3 = 0x80280000u;
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r5 = 1374420992;
    r3 = (r3 + -26988);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r8 = MemoryInline::FlatRead32((r3 + 12));
    r9 = (r5 + -31457);
    r3_addr_4 = (r3 + r0);
    r5 = MemoryInline::FlatRead32(r3_addr_4);
    r6 = (static_cast<int32_t>(r6) >> 6);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_13 & 1);
    r3 = 0x80270000u;
    r6 = (r6 + r0);
    r7 = (r4 - r6);
    r4 = (r3 + 29032);
    r0 = (r7 + 50);
    r3 = 1;
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r9)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 5);
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r7 = (r7_rot_4 & 1);
    r7 = (r0 + r7);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800D6144u;
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
    InvokeDirectCpu<0x800CD068u>(ctx);
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
    r13 = ctx->gpr[13];
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

loc_800D6144:
{
    r5 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = 3;
    r3 = r26;
    r4 = 0;
    MemoryInline::FlatWrite32((r5 + 1820), r0);
    ctx->lr = 0x800D615Cu;
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
    InvokeDirectCpu<0x800DEDDCu>(ctx);
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
    r13 = ctx->gpr[13];
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
    r4 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead8((r4 + 21));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800D6168:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800D6174;
    }
}

loc_800D616C:
{
    ctx->lr = 0x800D6170u;
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
    InvokeDirectCpu<0x800E2990u>(ctx);
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
    r13 = ctx->gpr[13];
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
    goto loc_800D6178;
}

loc_800D6174:
{
    ctx->lr = 0x800D6178u;
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
    InvokeDirectCpu<0x800E27ACu>(ctx);
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
    r13 = ctx->gpr[13];
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

loc_800D6178:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800D617C:
{
    r11 = (r1 + 272);
    // inline leaf 0x800215CC (14 guest instruction(s))
    guest_range_6 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 0u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_6, 0u, (r11 + -52));
            r20 = MemoryInline::ReadResolved32(guest_range_6, 4u, (r11 + -48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 8u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_6, 8u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_6, 12u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 16u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_6, 16u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_6, 20u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 24u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_6, 24u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_6, 28u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 32u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_6, 32u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_6, 36u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 40u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_6, 40u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_6, 44u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_6, 48u, (r11 + -4));
    // end of inlined leaf 0x800215CC
    r0 = MemoryInline::FlatRead32((r1 + 276));
    ctx->lr = r0;
    r1 = (r1 + 272);
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
// RECOMP_REGISTRATION base 0x800D577C func_800D577C preserves=true fpr_mask=0x00000000
