#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80134EA8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r29_rot_3 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_80134EA8;

loc_80134EA8:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80021590 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -4), r31);
    // end of inlined leaf 0x80021590
    r25 = r3;
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r3 = (r1 + 12);
    // inline leaf 0x8013B0B4 (19 guest instruction(s))
}

loc_inl1_0x8013B0B4:
{
    r5 = 0x80330000u;
    r5 = (r5 + 25208);
    r0 = MemoryInline::FlatRead8((r5 + 1614));
}

loc_inl1_0x8013B0C4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(4))) {
        goto loc_inl1_0x8013B0D0;
    }
}

loc_inl1_0x8013B0C8:
{
    r3 = 12;
    goto loc_inl1_cont_8013B0B4;
}

loc_inl1_0x8013B0D0:
{
    r4 = MemoryInline::FlatRead16((r5 + 1590));
    r0 = MemoryInline::FlatRead16((r5 + 1592));
    MemoryInline::FlatWriteRam16(r3, static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead16((r5 + 1594));
    r0 = MemoryInline::FlatRead16((r5 + 1596));
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam16((r3 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r5 + 1598));
    MemoryInline::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    r3 = 0;
}

loc_inl1_cont_8013B0B4:
{
    // end of inlined leaf 0x8013B0B4
    r0 = (r3 & 255);
}

loc_80134ED8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80134F44;
    }
}

loc_80134EDC:
{
    r0 = MemoryInline::FlatRead16((r1 + 18));
}

loc_80134EE4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(15))) {
        goto loc_80134F44;
    }
}

loc_80134EE8:
{
    r0 = MemoryInline::FlatRead8((r1 + 12));
}

loc_80134EF0:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(3))) {
        goto loc_80134F44;
    }
}

loc_80134EF4:
{
}

loc_80134EF8:
{
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(4))) {
        goto loc_80134F20;
    }
}

loc_80134EFC:
{
    r5 = 0x80250000u;
    r3 = r28;
    r5 = (r5 + -14600);
    r4 = (r1 + 8);
    r0 = MemoryInline::FlatRead16((r5 + 4));
    r0 = (r0 & 11);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80134F14:
{
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    ctx->lr = 0x80134F1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x801384C4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
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
    goto loc_80134F44;
}

loc_80134F20:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r25), static_cast<uint32_t>(5));
}

loc_80134F24:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80134F44;
    }
}

loc_80134F28:
{
    r5 = 0x80250000u;
    r3 = r28;
    r5 = (r5 + -14600);
    r4 = (r1 + 8);
    r0 = MemoryInline::FlatRead16((r5 + 4));
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    ctx->lr = 0x80134F44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x801384C4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
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

loc_80134F44:
{
    r5 = MemoryInline::FlatRead32((r13 + -29656));
    r30 = 1;
    r4 = MemoryInline::FlatRead8((r5 + 1));
    goto loc_80134F88;
}

loc_80134F54:
{
    r3 = (r30 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r0 = (r0 - r3);
    r3 = (r5 + r0);
    r5_addr_2 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_2);
}

loc_80134F6C:
{
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(r0))) {
        goto loc_80134F84;
    }
}

loc_80134F70:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_80134F78:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_80134F94;
    }
}

loc_80134F7C:
{
}

loc_80134F80:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(r0))) {
        goto loc_80134F94;
    }
}

loc_80134F84:
{
    r30 = (r30 + 1);
}

loc_80134F88:
{
    r0 = (r30 & 255);
}

loc_80134F90:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r4))) {
        goto loc_80134F54;
    }
}

loc_80134F94:
{
    r0 = MemoryInline::FlatRead8((r5 + 1));
    r3 = (r30 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80134FA0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80135210;
    }
}

loc_80134FA4:
{
    r23 = 0x80330000u;
    r31 = 0;
    r23 = (r23 + 24340);
}

loc_80134FB0:
{
    r29_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(5));
    r29 = (r29_rot_2 & 8160);
    r24 = (r23 + r29);
    r0 = MemoryInline::FlatRead8((r24 + 182));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80134FC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80134FF0;
    }
}

loc_80134FC4:
{
    r4 = r28;
    r3 = (r24 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80131DC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80134FD4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80134FF0;
    }
}

loc_80134FD8:
{
    r3 = r24;
    r3 = (r3 + 152);
    ctx->lr = 0x80134FE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80132278u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0 = 0;
    MemoryInline::FlatWrite8((r24 + 182), static_cast<uint8_t>(r0));
    goto loc_80134FFC;
}

loc_80134FF0:
{
    r31 = (r31 + 1);
}

loc_80134FF8:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(3))) {
        goto loc_80134FB0;
    }
}

loc_80134FFC:
{
    r4 = (r30 & 255);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & 1020);
    r30 = (r3 - r4);
    r0 = MemoryInline::FlatRead32((r13 + -29656));
    r4 = MemoryInline::FlatRead32((r13 + -29652));
    r31_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(3));
    r31 = (r31_rot_1 & 2040);
    r3 = (r0 + r30);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r0 = (r0 * 74);
    r0 = (r4 + r0);
    r3 = (r0 + r31);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80135030:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80135210;
    }
}

loc_80135034:
{
    r23 = 0x80330000u;
    r29 = 0;
    r24 = (r23 + 24600);
    goto loc_80135084;
}

loc_80135044:
{
    r3 = (r29 & 255);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & 2040);
    r0 = (r0 + r3);
    r3 = (r24 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 7));
}

loc_8013505C:
{
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(r0))) {
        goto loc_80135080;
    }
}

loc_80135060:
{
    r0 = MemoryInline::FlatRead8((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(r0));
}

loc_80135068:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80135080;
    }
}

loc_8013506C:
{
    r4 = r28;
    r3 = (r3 + 1);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80131DC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
}

loc_8013507C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80135094;
    }
}

loc_80135080:
{
    r29 = (r29 + 1);
}

loc_80135084:
{
    r0 = MemoryInline::FlatRead8((r23 + 24600));
    r3 = (r29 & 255);
}

loc_80135090:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_80135044;
    }
}

loc_80135094:
{
    r0 = MemoryInline::FlatRead32((r13 + -29656));
    r4 = MemoryInline::FlatRead32((r13 + -29652));
    r3 = (r0 + r30);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r0 = (r0 * 74);
    r0 = (r4 + r0);
    r3 = (r0 + r31);
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_801350B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(16))) {
        goto loc_80135128;
    }
}

loc_801350BC:
{
    r27 = 0x80330000u;
    r3 = (r29 & 255);
    r0 = MemoryInline::FlatRead8((r27 + 24600));
}

loc_801350CC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80135194;
    }
}

loc_801350D0:
{
    r26 = (r27 + 24600);
    goto loc_8013510C;
}

loc_801350D8:
{
    r6 = (r29 & 255);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(3));
    r4 = (r4_rot_2 & 2040);
    r3 = (r6 + 1);
    r5 = 9;
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_8 & -8);
    r4 = (r4 + r6);
    r0 = (r0 + r3);
    r3 = (r26 + r4);
    r4 = (r26 + r0);
    r3 = (r3 + 1);
    r4 = (r4 + 1);
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
    r29 = (r29 + 1);
}

loc_8013510C:
{
    r3 = MemoryInline::FlatRead8((r27 + 24600));
    r0 = (r29 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_80135118:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801350D8;
    }
}

loc_8013511C:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam8((r27 + 24600), static_cast<uint8_t>(r0));
    goto loc_80135194;
}

loc_80135128:
{
    r30 = 0x80330000u;
    r4 = (r29 & 255);
    r0 = MemoryInline::FlatRead8((r30 + 24600));
}

loc_80135138:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80135194;
    }
}

loc_8013513C:
{
}

loc_80135140:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_80135164;
    }
}

loc_80135144:
{
    r0 = MemoryInline::FlatRead8((r13 + -26128));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8013514C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80135210;
    }
}

loc_80135150:
{
    r4 = 0x80280000u;
    r3 = 1281;
    r4 = (r4 + 10760);
    ctx->lr = 0x80135160u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x80131740u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
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
    goto loc_80135210;
}

loc_80135164:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(3));
    r3 = (r3_rot_2 & 2040);
    r0 = (r30 + 24600);
    r3 = (r3 + r4);
    r4 = r28;
    r5 = (r0 + r3);
    guest_range_2 = MemoryInline::ResolveRangeHost((r5 + 1), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r5 + 7), static_cast<uint8_t>(r26));
    r3 = (r5 + 1);
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r5 + 8), static_cast<uint8_t>(r27));
    // inline leaf 0x80131D90 (13 guest instruction(s))
    r9 = MemoryInline::FlatRead8(r4);
    r8 = MemoryInline::FlatRead8((r4 + 1));
    r7 = MemoryInline::FlatRead8((r4 + 2));
    r6 = MemoryInline::FlatRead8((r4 + 3));
    r5 = MemoryInline::FlatRead8((r4 + 4));
    r0 = MemoryInline::FlatRead8((r4 + 5));
    MemoryInline::WriteResolved8(guest_range_2, 0u, r3, static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r3 + 1), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r3 + 2), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r3 + 3), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r3 + 4), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80131D90
    r3 = MemoryInline::FlatRead8((r30 + 24600));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r30 + 24600), static_cast<uint8_t>(r0));
}

loc_80135194:
{
    r3 = 0x80330000u;
    r24 = 0;
    r26 = (r3 + 24340);
    goto loc_801351D8;
}

loc_801351A4:
{
    r0 = (r24 & 255);
    r4 = r28;
    r23 = (r0 * 11);
    r3 = (r26 + r23);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80131DC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801351BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801351D4;
    }
}

loc_801351C0:
{
    r3 = (r26 + r23);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r0));
    goto loc_801351E8;
}

loc_801351D4:
{
    r24 = (r24 + 1);
}

loc_801351D8:
{
    r0 = MemoryInline::FlatRead8((r26 + 77));
    r3 = (r24 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_801351E4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801351A4;
    }
}

loc_801351E8:
{
    r6 = 0x80330000u;
    r5 = (r29 & 255);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(3));
    r0 = (r0_rot_10 & 2040);
    r3 = r28;
    r6 = (r6 + 24600);
    r4 = 0;
    r0 = (r0 + r5);
    r5 = (r6 + r0);
    MemoryInline::FlatWrite8((r5 + 9), static_cast<uint8_t>(r25));
    ctx->lr = 0x80135210u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x80135228u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
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

loc_80135210:
{
    r11 = (r1 + 64);
    // inline leaf 0x800215DC (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -4));
    // end of inlined leaf 0x800215DC
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80134EA8 func_80134EA8 preserves=true fpr_mask=0x00000000
