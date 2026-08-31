#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8064A84C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r12 = ctx->gpr[12];
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

    goto loc_8064A84C;

loc_8064A84C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 12), r23);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 16), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 20), r25);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 28), r27);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 32), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r29);
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 40), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 44), r31);
    r24 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r31 = MemoryInline::FlatRead32((r3 + 584));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8064A874:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8064A880;
    }
}

loc_8064A878:
{
    r31 = 0;
    goto loc_8064A8D4;
}

loc_8064A880:
{
    r23 = 0x809C0000u;
    r23 = (r23 + 7968);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8064A8D0;
    }
}

loc_8064A88C:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x8064A8A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
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
    goto loc_8064A8B8;
}

loc_8064A8A4:
{
}

loc_8064A8A8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r23))) {
        goto loc_8064A8B4;
    }
}

loc_8064A8AC:
{
    r0 = 1;
    goto loc_8064A8C4;
}

loc_8064A8B4:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8064A8B8:
{
}

loc_8064A8BC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8064A8A4;
    }
}

loc_8064A8C0:
{
    r0 = 0;
}

loc_8064A8C4:
{
}

loc_8064A8C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8064A8D0;
    }
}

loc_8064A8CC:
{
    goto loc_8064A8D4;
}

loc_8064A8D0:
{
    r31 = 0;
}

loc_8064A8D4:
{
    r3 = 0x809C0000u;
    r29 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (r3 + -88);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(15));
}

loc_8064A8F0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8064A918;
    }
}

loc_8064A8F4:
{
    r3 = 0x808C0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + -820);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8064A90Cu:
        goto loc_8064A90C;
        break;
    case 0x8064A914u:
        goto loc_8064A914;
        break;
    case 0x8064A918u:
        goto loc_8064A918;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[12] = r12;
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
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_8064A90C:
{
    r29 = 1;
    goto loc_8064A918;
}

loc_8064A914:
{
    r29 = 2;
}

loc_8064A918:
{
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80650AF4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_8064A924:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8064AA08;
    }
}

loc_8064A928:
{
    r27 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r24 + 2104), 0, 4093u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r24 + 2104), static_cast<uint8_t>(r27));
    r30 = r31;
    r28 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 372u, (r24 + 2476), static_cast<uint8_t>(r27));
    r26 = 0;
    r23 = 0x809C0000u;
    MemoryInline::WriteResolved8(guest_range_0, 744u, (r24 + 2848), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_0, 1116u, (r24 + 3220), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_0, 1488u, (r24 + 3592), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_0, 1860u, (r24 + 3964), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_0, 2232u, (r24 + 4336), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_0, 2604u, (r24 + 4708), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_0, 2976u, (r24 + 5080), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_0, 3348u, (r24 + 5452), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_0, 3720u, (r24 + 5824), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_0, 4092u, (r24 + 6196), static_cast<uint8_t>(r27));
}

loc_8064A96C:
{
}

loc_8064A970:
{
    r3 = 0;
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(0))) {
        goto loc_8064A988;
    }
}

loc_8064A978:
{
    r0 = MemoryInline::FlatRead32((r31 + 644));
}

loc_8064A980:
{
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(r0))) {
        goto loc_8064A988;
    }
}

loc_8064A984:
{
    r3 = 1;
}

loc_8064A988:
{
}

loc_8064A98C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8064A9F4;
    }
}

loc_8064A990:
{
    r6 = MemoryInline::FlatRead32((r30 + 504));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8064A998:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8064A9A8;
    }
}

loc_8064A99C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(1));
}

loc_8064A9A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8064A9B4;
    }
}

loc_8064A9A4:
{
    goto loc_8064A9BC;
}

loc_8064A9A8:
{
    r25 = r28;
    r28 = (r28 + 2);
    goto loc_8064A9BC;
}

loc_8064A9B4:
{
    r25 = r27;
    r27 = (r27 + 2);
}

loc_8064A9BC:
{
    r8 = MemoryInline::FlatRead32((r23 + 8408));
    r3 = r24;
    r9 = MemoryInline::FlatRead8((r30 + 500));
    r4 = r25;
    r0 = MemoryInline::FlatRead32((r8 + 10524));
    r5 = r26;
    r7 = r29;
    r0 = (r0 * 88);
    r8 = (r8 + r0);
    r0 = MemoryInline::FlatRead8((r8 + 89));
    r0 = (r0 - r9);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r8 = (r8_rot_2 & 134217727);
    ctx->lr = 0x8064A9F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x8064AB08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
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

loc_8064A9F4:
{
    r26 = (r26 + 1);
    r30 = (r30 + 12);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(12));
}

loc_8064AA00:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8064A96C;
    }
}

loc_8064AA04:
{
    goto loc_8064AA98;
}

loc_8064AA08:
{
    r23 = r31;
    r28 = r24;
    r25 = 0;
    r27 = 0x809C0000u;
    r26 = 1;
}

loc_8064AA1C:
{
}

loc_8064AA20:
{
    r3 = 0;
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(0))) {
        goto loc_8064AA38;
    }
}

loc_8064AA28:
{
    r0 = MemoryInline::FlatRead32((r31 + 644));
}

loc_8064AA30:
{
    if ((static_cast<int32_t>(r25) >= static_cast<int32_t>(r0))) {
        goto loc_8064AA38;
    }
}

loc_8064AA34:
{
    r3 = 1;
}

loc_8064AA38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8064AA3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8064AA80;
    }
}

loc_8064AA40:
{
    r8 = MemoryInline::FlatRead32((r27 + 8408));
    r3 = r24;
    r9 = MemoryInline::FlatRead8((r23 + 500));
    r4 = r25;
    r0 = MemoryInline::FlatRead32((r8 + 10524));
    r5 = r25;
    r7 = r29;
    r6 = 2;
    r0 = (r0 * 88);
    r8 = (r8 + r0);
    r0 = MemoryInline::FlatRead8((r8 + 89));
    r0 = (r0 - r9);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r8_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r8 = (r8_rot_5 & 134217727);
    ctx->lr = 0x8064AA7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x8064AB08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
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
    goto loc_8064AA84;
}

loc_8064AA80:
{
    MemoryInline::FlatWrite8((r28 + 2104), static_cast<uint8_t>(r26));
}

loc_8064AA84:
{
    r25 = (r25 + 1);
    r28 = (r28 + 372);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(12));
}

loc_8064AA90:
{
    r23 = (r23 + 12);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8064AA1C;
    }
}

loc_8064AA98:
{
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80650BE0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r4 = r3;
    r3 = (r24 + 1008);
    r5 = 0;
    ctx->lr = 0x8064AAB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x807E9A38u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
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
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 44u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r1 + 12));
            r24 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r1 + 16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r1 + 20));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r1 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r1 + 28));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r1 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r1 + 36));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r1 + 40));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r1 + 44));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
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
// RECOMP_REGISTRATION base 0x8064A84C func_8064A84C preserves=true fpr_mask=0x00000000
