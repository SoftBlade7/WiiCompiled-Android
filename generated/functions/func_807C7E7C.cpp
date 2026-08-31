#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807C7E7C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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

    goto loc_807C7E7C;

loc_807C7E7C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r17);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r19);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r21);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r23);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 48), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r25);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 56), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 60), r27);
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r1 + 64), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r29);
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r1 + 72), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r1 + 76), r31);
    r29 = r3;
    r4 = MemoryInline::FlatRead32((r3 + 108));
    r3 = (r1 + 8);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r0);
    // inline leaf 0x8004E400 (13 guest instruction(s))
}

loc_inl0_0x8004E400:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_inl0_0x8004E40C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8004E418;
    }
}

loc_inl0_0x8004E410:
{
    r3 = (r3 + r0);
    goto loc_inl0_0x8004E41C;
}

loc_inl0_0x8004E418:
{
    r3 = 0;
}

loc_inl0_0x8004E41C:
{
}

loc_inl0_0x8004E420:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8004E42C;
    }
}

loc_inl0_0x8004E424:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl0_cont_8004E400;
}

loc_inl0_0x8004E42C:
{
    r3 = 0;
}

loc_inl0_cont_8004E400:
{
    // end of inlined leaf 0x8004E400
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807C7EA8:
{
    r0 = 33;
    MemoryInline::FlatWrite32((r29 + 272), r0);
    r25 = r3;
    r17 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C8000;
    }
}

loc_807C7EBC:
{
    r19 = 0x808D0000u;
    r18 = 0x808D0000u;
    r23 = 0x808D0000u;
    r22 = 0x808D0000u;
    r21 = 0x808D0000u;
    r20 = 0x808D0000u;
    goto loc_807C7FF8;
}

loc_807C7ED8:
{
    r4 = r17;
    r3 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004E340u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807C7EE8:
{
    r24 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C7F0C;
    }
}

loc_807C7EF0:
{
    r3 = (r23 + 11160);
    r5 = (r22 + 11132);
    r6 = (r21 + 11072);
    r7 = (r20 + 11180);
    r4 = 44;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807C7F0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    InvokeDirectCpu<0x80025FB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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

loc_807C7F0C:
{
    r0 = MemoryInline::FlatRead32((r24 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807C7F14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C7F20;
    }
}

loc_807C7F18:
{
    r26 = (r24 + r0);
    goto loc_807C7F24;
}

loc_807C7F20:
{
    r26 = 0;
}

loc_807C7F24:
{
    r28 = 0;
    r30 = 0;
    r27 = 0;
}

loc_807C7F30:
{
    r0 = MemoryInline::FlatRead32((r29 + 260));
    r3 = r26;
    r31 = (r0 + r27);
    r4 = MemoryInline::FlatRead32((r31 + 20));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8001329Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807C7F48:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_807C7F8C;
    }
}

loc_807C7F4C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(0));
}

loc_807C7F50:
{
    MemoryInline::FlatWrite32((r31 + 24), r24);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C7F6C;
    }
}

loc_807C7F58:
{
    r3 = (r19 + -14152);
    r5 = (r18 + -14184);
    r4 = 83;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807C7F6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    InvokeDirectCpu<0x80025FB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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

loc_807C7F6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(0));
}

loc_807C7F70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C7F7C;
    }
}

loc_807C7F74:
{
    r0 = MemoryInline::FlatRead32((r24 + 16));
    goto loc_807C7F80;
}

loc_807C7F7C:
{
    r0 = 0;
}

loc_807C7F80:
{
    MemoryInline::FlatWrite32((r31 + 28), r0);
    r28 = 1;
    goto loc_807C7F9C;
}

loc_807C7F8C:
{
    r30 = (r30 + 1);
    r27 = (r27 + 96);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(36));
}

loc_807C7F98:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807C7F30;
    }
}

loc_807C7F9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_807C7FA0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C7FF4;
    }
}

loc_807C7FA4:
{
    r3 = MemoryInline::FlatRead32((r29 + 272));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(0));
}

loc_807C7FAC:
{
    r4 = MemoryInline::FlatRead32((r29 + 260));
    r0 = (r3 * 96);
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 272), r3);
    r26 = (r4 + r0);
    MemoryInline::FlatWrite32((r26 + 24), r24);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C7FDC;
    }
}

loc_807C7FC8:
{
    r3 = (r19 + -14152);
    r5 = (r18 + -14184);
    r4 = 83;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807C7FDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    InvokeDirectCpu<0x80025FB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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

loc_807C7FDC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(0));
}

loc_807C7FE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C7FEC;
    }
}

loc_807C7FE4:
{
    r0 = MemoryInline::FlatRead32((r24 + 16));
    goto loc_807C7FF0;
}

loc_807C7FEC:
{
    r0 = 0;
}

loc_807C7FF0:
{
    MemoryInline::FlatWrite32((r26 + 28), r0);
}

loc_807C7FF4:
{
    r17 = (r17 + 1);
}

loc_807C7FF8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r17), static_cast<uint32_t>(r25));
}

loc_807C7FFC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807C7ED8;
    }
}

loc_807C8000:
{
    r31 = 0;
    r18 = 0;
    r23 = 0x808D0000u;
    r24 = 0x808D0000u;
    r19 = 0x808D0000u;
    r20 = 0x808D0000u;
    r21 = 0x808D0000u;
    r22 = 0x808D0000u;
    r25 = 4;
    r26 = 4;
    r27 = 4;
    r28 = 4;
}

loc_807C8030:
{
    r0 = MemoryInline::FlatRead32((r29 + 260));
    r30 = (r0 + r18);
    r0 = MemoryInline::FlatRead32((r30 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807C8040:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C85E8;
    }
}

loc_807C8044:
{
    MemoryInline::FlatWrite32((r29 + 264), r30);
    r0 = MemoryInline::FlatRead32((r30 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807C8050:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C8070;
    }
}

loc_807C8054:
{
    r3 = (r19 + 11108);
    r5 = (r20 + 11080);
    r6 = (r21 + 11072);
    r7 = (r22 + 11128);
    r4 = 44;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807C8070u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    InvokeDirectCpu<0x80025FB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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

loc_807C8070:
{
    r3 = MemoryInline::FlatRead32((r30 + 24));
    r0 = MemoryInline::FlatRead32((r3 + 92));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807C807C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C80A4;
    }
}

loc_807C8080:
{
    r17 = (r3 + r0);
    r0 = (r17 & 3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807C8088:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C80A8;
    }
}

loc_807C808C:
{
    r3 = (r23 + 11052);
    r5 = (r24 + 11012);
    r4 = 44;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807C80A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    InvokeDirectCpu<0x80025FB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    goto loc_807C80A8;
}

loc_807C80A4:
{
    r17 = 0;
}

loc_807C80A8:
{
}

loc_807C80AC:
{
    if ((static_cast<int32_t>(r17) != static_cast<int32_t>(0))) {
        goto loc_807C80B8;
    }
}

loc_807C80B0:
{
    r4 = 0;
    goto loc_807C81AC;
}

loc_807C80B8:
{
    r5 = 0;
    r6 = 0;
    ctr = r25;
}

loc_807C80C4:
{
    r3 = MemoryInline::FlatRead32((r29 + 260));
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
}

loc_807C80D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r17))) {
        goto loc_807C80DC;
    }
}

loc_807C80D8:
{
    goto loc_807C81AC;
}

loc_807C80DC:
{
    r6 = (r6 + 96);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
}

loc_807C80EC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r17))) {
        goto loc_807C80F4;
    }
}

loc_807C80F0:
{
    goto loc_807C81AC;
}

loc_807C80F4:
{
    r6 = (r6 + 96);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
}

loc_807C8104:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r17))) {
        goto loc_807C810C;
    }
}

loc_807C8108:
{
    goto loc_807C81AC;
}

loc_807C810C:
{
    r6 = (r6 + 96);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
}

loc_807C811C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r17))) {
        goto loc_807C8124;
    }
}

loc_807C8120:
{
    goto loc_807C81AC;
}

loc_807C8124:
{
    r6 = (r6 + 96);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
}

loc_807C8134:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r17))) {
        goto loc_807C813C;
    }
}

loc_807C8138:
{
    goto loc_807C81AC;
}

loc_807C813C:
{
    r6 = (r6 + 96);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
}

loc_807C814C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r17))) {
        goto loc_807C8154;
    }
}

loc_807C8150:
{
    goto loc_807C81AC;
}

loc_807C8154:
{
    r6 = (r6 + 96);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
}

loc_807C8164:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r17))) {
        goto loc_807C816C;
    }
}

loc_807C8168:
{
    goto loc_807C81AC;
}

loc_807C816C:
{
    r6 = (r6 + 96);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
}

loc_807C817C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r17))) {
        goto loc_807C8184;
    }
}

loc_807C8180:
{
    goto loc_807C81AC;
}

loc_807C8184:
{
    r6 = (r6 + 96);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
}

loc_807C8194:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r17))) {
        goto loc_807C819C;
    }
}

loc_807C8198:
{
    goto loc_807C81AC;
}

loc_807C819C:
{
    r6 = (r6 + 96);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807C80C4;
    }
}

loc_807C81A8:
{
    r4 = 0;
}

loc_807C81AC:
{
    MemoryInline::FlatWrite32(r30, r4);
    r0 = MemoryInline::FlatRead32((r30 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807C81B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C81D8;
    }
}

loc_807C81BC:
{
    r3 = (r19 + 11108);
    r5 = (r20 + 11080);
    r6 = (r21 + 11072);
    r7 = (r22 + 11128);
    r4 = 44;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807C81D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    InvokeDirectCpu<0x80025FB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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

loc_807C81D8:
{
    r3 = MemoryInline::FlatRead32((r30 + 24));
    r0 = MemoryInline::FlatRead32((r3 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807C81E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C820C;
    }
}

loc_807C81E8:
{
    r17 = (r3 + r0);
    r0 = (r17 & 3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807C81F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C8210;
    }
}

loc_807C81F4:
{
    r3 = (r23 + 11052);
    r5 = (r24 + 11012);
    r4 = 44;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807C8208u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    InvokeDirectCpu<0x80025FB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    goto loc_807C8210;
}

loc_807C820C:
{
    r17 = 0;
}

loc_807C8210:
{
}

loc_807C8214:
{
    if ((static_cast<int32_t>(r17) != static_cast<int32_t>(0))) {
        goto loc_807C8220;
    }
}

loc_807C8218:
{
    r4 = 0;
    goto loc_807C8314;
}

loc_807C8220:
{
    r5 = 0;
    r6 = 0;
    ctr = r26;
}

loc_807C822C:
{
    r3 = MemoryInline::FlatRead32((r29 + 260));
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
}

loc_807C823C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r17))) {
        goto loc_807C8244;
    }
}

loc_807C8240:
{
    goto loc_807C8314;
}

loc_807C8244:
{
    r6 = (r6 + 96);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
}

loc_807C8254:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r17))) {
        goto loc_807C825C;
    }
}

loc_807C8258:
{
    goto loc_807C8314;
}

loc_807C825C:
{
    r6 = (r6 + 96);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
}

loc_807C826C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r17))) {
        goto loc_807C8274;
    }
}

loc_807C8270:
{
    goto loc_807C8314;
}

loc_807C8274:
{
    r6 = (r6 + 96);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
}

loc_807C8284:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r17))) {
        goto loc_807C828C;
    }
}

loc_807C8288:
{
    goto loc_807C8314;
}

loc_807C828C:
{
    r6 = (r6 + 96);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
}

loc_807C829C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r17))) {
        goto loc_807C82A4;
    }
}

loc_807C82A0:
{
    goto loc_807C8314;
}

loc_807C82A4:
{
    r6 = (r6 + 96);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
}

loc_807C82B4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r17))) {
        goto loc_807C82BC;
    }
}

loc_807C82B8:
{
    goto loc_807C8314;
}

loc_807C82BC:
{
    r6 = (r6 + 96);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
}

loc_807C82CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r17))) {
        goto loc_807C82D4;
    }
}

loc_807C82D0:
{
    goto loc_807C8314;
}

loc_807C82D4:
{
    r6 = (r6 + 96);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
}

loc_807C82E4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r17))) {
        goto loc_807C82EC;
    }
}

loc_807C82E8:
{
    goto loc_807C8314;
}

loc_807C82EC:
{
    r6 = (r6 + 96);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
}

loc_807C82FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r17))) {
        goto loc_807C8304;
    }
}

loc_807C8300:
{
    goto loc_807C8314;
}

loc_807C8304:
{
    r6 = (r6 + 96);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807C822C;
    }
}

loc_807C8310:
{
    r4 = 0;
}

loc_807C8314:
{
    MemoryInline::FlatWrite32((r30 + 4), r4);
    r0 = MemoryInline::FlatRead32((r30 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807C8320:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C8340;
    }
}

loc_807C8324:
{
    r3 = (r19 + 11108);
    r5 = (r20 + 11080);
    r6 = (r21 + 11072);
    r7 = (r22 + 11128);
    r4 = 44;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807C8340u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    InvokeDirectCpu<0x80025FB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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

loc_807C8340:
{
    r3 = MemoryInline::FlatRead32((r30 + 24));
    r0 = MemoryInline::FlatRead32((r3 + 104));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807C834C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C8374;
    }
}

loc_807C8350:
{
    r17 = (r3 + r0);
    r0 = (r17 & 3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807C8358:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C8378;
    }
}

loc_807C835C:
{
    r3 = (r23 + 11052);
    r5 = (r24 + 11012);
    r4 = 44;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807C8370u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    InvokeDirectCpu<0x80025FB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    goto loc_807C8378;
}

loc_807C8374:
{
    r17 = 0;
}

loc_807C8378:
{
}

loc_807C837C:
{
    if ((static_cast<int32_t>(r17) != static_cast<int32_t>(0))) {
        goto loc_807C8388;
    }
}

loc_807C8380:
{
    r4 = 0;
    goto loc_807C847C;
}

loc_807C8388:
{
    r5 = 0;
    r6 = 0;
    ctr = r27;
}

loc_807C8394:
{
    r3 = MemoryInline::FlatRead32((r29 + 260));
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
}

loc_807C83A4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r17))) {
        goto loc_807C83AC;
    }
}

loc_807C83A8:
{
    goto loc_807C847C;
}

loc_807C83AC:
{
    r6 = (r6 + 96);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
}

loc_807C83BC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r17))) {
        goto loc_807C83C4;
    }
}

loc_807C83C0:
{
    goto loc_807C847C;
}

loc_807C83C4:
{
    r6 = (r6 + 96);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
}

loc_807C83D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r17))) {
        goto loc_807C83DC;
    }
}

loc_807C83D8:
{
    goto loc_807C847C;
}

loc_807C83DC:
{
    r6 = (r6 + 96);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
}

loc_807C83EC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r17))) {
        goto loc_807C83F4;
    }
}

loc_807C83F0:
{
    goto loc_807C847C;
}

loc_807C83F4:
{
    r6 = (r6 + 96);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
}

loc_807C8404:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r17))) {
        goto loc_807C840C;
    }
}

loc_807C8408:
{
    goto loc_807C847C;
}

loc_807C840C:
{
    r6 = (r6 + 96);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
}

loc_807C841C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r17))) {
        goto loc_807C8424;
    }
}

loc_807C8420:
{
    goto loc_807C847C;
}

loc_807C8424:
{
    r6 = (r6 + 96);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
}

loc_807C8434:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r17))) {
        goto loc_807C843C;
    }
}

loc_807C8438:
{
    goto loc_807C847C;
}

loc_807C843C:
{
    r6 = (r6 + 96);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
}

loc_807C844C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r17))) {
        goto loc_807C8454;
    }
}

loc_807C8450:
{
    goto loc_807C847C;
}

loc_807C8454:
{
    r6 = (r6 + 96);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
}

loc_807C8464:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r17))) {
        goto loc_807C846C;
    }
}

loc_807C8468:
{
    goto loc_807C847C;
}

loc_807C846C:
{
    r6 = (r6 + 96);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807C8394;
    }
}

loc_807C8478:
{
    r4 = 0;
}

loc_807C847C:
{
    MemoryInline::FlatWrite32((r30 + 12), r4);
    r0 = MemoryInline::FlatRead32((r30 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807C8488:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C84A8;
    }
}

loc_807C848C:
{
    r3 = (r19 + 11108);
    r5 = (r20 + 11080);
    r6 = (r21 + 11072);
    r7 = (r22 + 11128);
    r4 = 44;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807C84A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    InvokeDirectCpu<0x80025FB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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

loc_807C84A8:
{
    r3 = MemoryInline::FlatRead32((r30 + 24));
    r0 = MemoryInline::FlatRead32((r3 + 100));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807C84B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C84DC;
    }
}

loc_807C84B8:
{
    r17 = (r3 + r0);
    r0 = (r17 & 3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807C84C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C84E0;
    }
}

loc_807C84C4:
{
    r3 = (r23 + 11052);
    r5 = (r24 + 11012);
    r4 = 44;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807C84D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    InvokeDirectCpu<0x80025FB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    goto loc_807C84E0;
}

loc_807C84DC:
{
    r17 = 0;
}

loc_807C84E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r17), static_cast<int32_t>(0));
}

loc_807C84E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C84F0;
    }
}

loc_807C84E8:
{
    r4 = 0;
    goto loc_807C85E4;
}

loc_807C84F0:
{
    r5 = 0;
    r6 = 0;
    ctr = r28;
}

loc_807C84FC:
{
    r3 = MemoryInline::FlatRead32((r29 + 260));
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r17));
}

loc_807C850C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C8514;
    }
}

loc_807C8510:
{
    goto loc_807C85E4;
}

loc_807C8514:
{
    r6 = (r6 + 96);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r17));
}

loc_807C8524:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C852C;
    }
}

loc_807C8528:
{
    goto loc_807C85E4;
}

loc_807C852C:
{
    r6 = (r6 + 96);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r17));
}

loc_807C853C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C8544;
    }
}

loc_807C8540:
{
    goto loc_807C85E4;
}

loc_807C8544:
{
    r6 = (r6 + 96);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r17));
}

loc_807C8554:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C855C;
    }
}

loc_807C8558:
{
    goto loc_807C85E4;
}

loc_807C855C:
{
    r6 = (r6 + 96);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r17));
}

loc_807C856C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C8574;
    }
}

loc_807C8570:
{
    goto loc_807C85E4;
}

loc_807C8574:
{
    r6 = (r6 + 96);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r17));
}

loc_807C8584:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C858C;
    }
}

loc_807C8588:
{
    goto loc_807C85E4;
}

loc_807C858C:
{
    r6 = (r6 + 96);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r17));
}

loc_807C859C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C85A4;
    }
}

loc_807C85A0:
{
    goto loc_807C85E4;
}

loc_807C85A4:
{
    r6 = (r6 + 96);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r17));
}

loc_807C85B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C85BC;
    }
}

loc_807C85B8:
{
    goto loc_807C85E4;
}

loc_807C85BC:
{
    r6 = (r6 + 96);
    r4 = (r3 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 24));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r17));
}

loc_807C85CC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C85D4;
    }
}

loc_807C85D0:
{
    goto loc_807C85E4;
}

loc_807C85D4:
{
    r6 = (r6 + 96);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807C84FC;
    }
}

loc_807C85E0:
{
    r4 = 0;
}

loc_807C85E4:
{
    MemoryInline::FlatWrite32((r30 + 8), r4);
}

loc_807C85E8:
{
    r31 = (r31 + 1);
    r18 = (r18 + 96);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(36));
}

loc_807C85F4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807C8030;
    }
}

loc_807C85F8:
{
    goto loc_807C8600;
}

loc_807C85FC:
{
    MemoryInline::FlatWrite32((r29 + 264), r0);
}

loc_807C8600:
{
    r3 = MemoryInline::FlatRead32((r29 + 264));
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807C860C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C85FC;
    }
}

loc_807C8610:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 68u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 20));
            r18 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 28));
            r20 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 36));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 44));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 56));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 60));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 64));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r1 + 68));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r1 + 72));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r1 + 76));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFE7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807C7E7C func_807C7E7C preserves=true fpr_mask=0x00000000
