#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8013A9EC(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8013A9EC;

loc_8013A9EC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r31 = 0x80330000u;
    r30 = 0x80280000u;
    r31 = (r31 + 25208);
    r0 = 0;
    r28 = MemoryInline::FlatRead32((r31 + 1420));
    r30 = (r30 + 14656);
    MemoryInline::FlatWriteRam32((r31 + 1420), r0);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 9u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013AA24:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013AED0;
    }
}

loc_8013AA28:
{
    r0 = 5;
    r4 = 24;
    MemoryInline::FlatWriteRam8((r31 + 1614), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
    MemoryInline::FlatWriteRam8((r31 + 1600), static_cast<uint8_t>(r0));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013AA40:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 2));
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 1601), 0, 21u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r31 + 1601), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r31 + 1602), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 4));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r31 + 1603), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r31 + 1604), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 6));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r31 + 1605), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 7));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r31 + 1606), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r3 + 8));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r31 + 1607), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 19u, (r31 + 1620), static_cast<uint16_t>(r4));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013AA88;
    }
}

loc_8013AA80:
{
    r0 = (r4 | 3072);
    MemoryInline::FlatWriteRam16((r31 + 1620), static_cast<uint16_t>(r0));
}

loc_8013AA88:
{
    r0 = MemoryInline::FlatRead8((r31 + 1600));
    r0 = (r0 & 2);
}

loc_8013AA90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013AAA8;
    }
}

loc_8013AA94:
{
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead16((r3 + 1620));
    r0 = (r0 | 49152);
    MemoryInline::FlatWriteRam16((r3 + 1620), static_cast<uint16_t>(r0));
}

loc_8013AAA8:
{
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead8((r3 + 1590));
}

loc_8013AAB8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(3))) {
        goto loc_8013AB48;
    }
}

loc_8013AABC:
{
    r0 = MemoryInline::FlatRead8((r31 + 1603));
    r0 = (r0 & 2);
}

loc_8013AAC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8013AAD4;
    }
}

loc_8013AAC8:
{
    r0 = MemoryInline::FlatRead16((r3 + 1620));
    r0 = (r0 | 4354);
    MemoryInline::FlatWriteRam16((r3 + 1620), static_cast<uint16_t>(r0));
}

loc_8013AAD4:
{
    r0 = MemoryInline::FlatRead8((r31 + 1603));
    r0 = (r0 & 4);
}

loc_8013AADC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8013AAF4;
    }
}

loc_8013AAE0:
{
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead16((r3 + 1620));
    r0 = (r0 | 8708);
    MemoryInline::FlatWriteRam16((r3 + 1620), static_cast<uint16_t>(r0));
}

loc_8013AAF4:
{
    r3 = MemoryInline::FlatRead8((r31 + 1603));
    r0 = (r3 & 2);
}

loc_8013AAFC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8013AB08;
    }
}

loc_8013AB00:
{
    r0 = (r3 & 4);
}

loc_8013AB04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013AB48;
    }
}

loc_8013AB08:
{
    r0 = MemoryInline::FlatRead8((r31 + 1604));
    r0 = (r0 & 128);
}

loc_8013AB10:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8013AB28;
    }
}

loc_8013AB14:
{
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead16((r3 + 1620));
    r0 = (r0 | 768);
    MemoryInline::FlatWriteRam16((r3 + 1620), static_cast<uint16_t>(r0));
}

loc_8013AB28:
{
    r0 = MemoryInline::FlatRead8((r31 + 1605));
    r0 = (r0 & 1);
}

loc_8013AB30:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8013AB48;
    }
}

loc_8013AB34:
{
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead16((r3 + 1620));
    r0 = (r0 | 12288);
    MemoryInline::FlatWriteRam16((r3 + 1620), static_cast<uint16_t>(r0));
}

loc_8013AB48:
{
    r4 = 0x80330000u;
    r4 = (r4 + 25208);
    r0 = MemoryInline::FlatRead8((r4 + 10176));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
}

loc_8013AB58:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8013AB70;
    }
}

loc_8013AB5C:
{
    r3 = 851968;
    r5 = MemoryInline::FlatRead16((r4 + 1620));
    r3 = (r3 + 4);
    r4 = (r30 + 68);
    ctx->lr = 0x8013AB70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80131758u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8013AB70:
{
    r3 = MemoryInline::FlatRead8((r31 + 1601));
    r4 = 0x80330000u;
    r4 = (r4 + 25208);
    r5 = 0;
    r0 = (r3 & 8);
}

loc_8013AB84:
{
    MemoryInline::FlatWriteRam16((r4 + 1622), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam8((r4 + 6408), static_cast<uint8_t>(r5));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013ABC8;
    }
}

loc_8013AB90:
{
    r0 = (r3 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013AB94:
{
    r0 = 1;
    MemoryInline::FlatWriteRam16((r4 + 1622), static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013ABA8;
    }
}

loc_8013ABA0:
{
    r0 = (r0 | 2);
    MemoryInline::FlatWriteRam16((r4 + 1622), static_cast<uint16_t>(r0));
}

loc_8013ABA8:
{
    r0 = MemoryInline::FlatRead8((r31 + 1601));
    r0 = (r0 & 32);
}

loc_8013ABB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013ABC8;
    }
}

loc_8013ABB4:
{
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead16((r3 + 1622));
    r0 = (r0 | 4);
    MemoryInline::FlatWriteRam16((r3 + 1622), static_cast<uint16_t>(r0));
}

loc_8013ABC8:
{
    r0 = MemoryInline::FlatRead8((r31 + 1603));
    r0 = (r0 & 128);
}

loc_8013ABD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013ABE8;
    }
}

loc_8013ABD4:
{
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead16((r3 + 1622));
    r0 = (r0 | 8);
    MemoryInline::FlatWriteRam16((r3 + 1622), static_cast<uint16_t>(r0));
}

loc_8013ABE8:
{
    r0 = MemoryInline::FlatRead8((r31 + 1604));
    r0 = (r0 & 1);
}

loc_8013ABF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013AC08;
    }
}

loc_8013ABF4:
{
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead16((r3 + 1622));
    r0 = (r0 | 16);
    MemoryInline::FlatWriteRam16((r3 + 1622), static_cast<uint16_t>(r0));
}

loc_8013AC08:
{
    r0 = MemoryInline::FlatRead8((r31 + 1604));
    r0 = (r0 & 2);
}

loc_8013AC10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013AC28;
    }
}

loc_8013AC14:
{
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead16((r3 + 1622));
    r0 = (r0 | 32);
    MemoryInline::FlatWriteRam16((r3 + 1622), static_cast<uint16_t>(r0));
}

loc_8013AC28:
{
    r4 = 0x80330000u;
    r4 = (r4 + 25208);
    r3 = MemoryInline::FlatRead16((r4 + 1622));
    r0 = (r3 & 56);
}

loc_8013AC38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013ACAC;
    }
}

loc_8013AC3C:
{
    r5 = MemoryInline::FlatRead8((r31 + 1605));
    r0 = 1;
    MemoryInline::FlatWriteRam8((r4 + 6408), static_cast<uint8_t>(r0));
    r0 = (r5 & 32);
}

loc_8013AC4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013AC64;
    }
}

loc_8013AC50:
{
    r0 = (r5 & 128);
}

loc_8013AC54:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8013AC6C;
    }
}

loc_8013AC58:
{
    r0 = (r3 | 256);
    MemoryInline::FlatWriteRam16((r4 + 1622), static_cast<uint16_t>(r0));
    goto loc_8013AC6C;
}

loc_8013AC64:
{
    r0 = (r3 | 320);
    MemoryInline::FlatWriteRam16((r4 + 1622), static_cast<uint16_t>(r0));
}

loc_8013AC6C:
{
    r3 = MemoryInline::FlatRead8((r31 + 1605));
    r0 = (r3 & 64);
}

loc_8013AC74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013AC98;
    }
}

loc_8013AC78:
{
    r0 = (r3 & 128);
}

loc_8013AC7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8013ACAC;
    }
}

loc_8013AC80:
{
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead16((r3 + 1622));
    r0 = (r0 | 512);
    MemoryInline::FlatWriteRam16((r3 + 1622), static_cast<uint16_t>(r0));
    goto loc_8013ACAC;
}

loc_8013AC98:
{
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead16((r3 + 1622));
    r0 = (r0 | 640);
    MemoryInline::FlatWriteRam16((r3 + 1622), static_cast<uint16_t>(r0));
}

loc_8013ACAC:
{
    r4 = 0x80330000u;
    r4 = (r4 + 25208);
    r0 = MemoryInline::FlatRead8((r4 + 10176));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
}

loc_8013ACBC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8013ACD4;
    }
}

loc_8013ACC0:
{
    r3 = 851968;
    r5 = MemoryInline::FlatRead16((r4 + 1622));
    r3 = (r3 + 4);
    r4 = (r30 + 112);
    ctx->lr = 0x8013ACD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80131758u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8013ACD4:
{
    r0 = MemoryInline::FlatRead8((r31 + 1600));
    r0 = (r0 & 32);
}

loc_8013ACDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013ACF8;
    }
}

loc_8013ACE0:
{
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead16((r3 + 1220));
    r0 = (r0 | 1);
    MemoryInline::FlatWriteRam16((r3 + 1220), static_cast<uint16_t>(r0));
    goto loc_8013AD0C;
}

loc_8013ACF8:
{
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead16((r3 + 1220));
    r0 = (r0 & 65534);
    MemoryInline::FlatWriteRam16((r3 + 1220), static_cast<uint16_t>(r0));
}

loc_8013AD0C:
{
    r0 = MemoryInline::FlatRead8((r31 + 1600));
    r0 = (r0 & 64);
}

loc_8013AD14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013AD30;
    }
}

loc_8013AD18:
{
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead16((r3 + 1220));
    r0 = (r0 | 2);
    MemoryInline::FlatWriteRam16((r3 + 1220), static_cast<uint16_t>(r0));
    goto loc_8013AD44;
}

loc_8013AD30:
{
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead16((r3 + 1220));
    r0 = (r0 & -3);
    MemoryInline::FlatWriteRam16((r3 + 1220), static_cast<uint16_t>(r0));
}

loc_8013AD44:
{
    r0 = MemoryInline::FlatRead8((r31 + 1600));
    r0 = (r0 & 128);
}

loc_8013AD4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013AD68;
    }
}

loc_8013AD50:
{
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead16((r3 + 1220));
    r0 = (r0 | 4);
    MemoryInline::FlatWriteRam16((r3 + 1220), static_cast<uint16_t>(r0));
    goto loc_8013AD7C;
}

loc_8013AD68:
{
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead16((r3 + 1220));
    r0 = (r0 & -5);
    MemoryInline::FlatWriteRam16((r3 + 1220), static_cast<uint16_t>(r0));
}

loc_8013AD7C:
{
    r0 = MemoryInline::FlatRead8((r31 + 1601));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013AD84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013ADA0;
    }
}

loc_8013AD88:
{
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead16((r3 + 1220));
    r0 = (r0 | 8);
    MemoryInline::FlatWriteRam16((r3 + 1220), static_cast<uint16_t>(r0));
    goto loc_8013ADB4;
}

loc_8013ADA0:
{
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead16((r3 + 1220));
    r0 = (r0 & -9);
    MemoryInline::FlatWriteRam16((r3 + 1220), static_cast<uint16_t>(r0));
}

loc_8013ADB4:
{
    ctx->lr = 0x8013ADB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80140390u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x80330000u;
    r4 = (r4 + 25208);
    r29 = MemoryInline::FlatRead8((r4 + 10174));
}

loc_8013ADC8:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(255))) {
        goto loc_8013AE74;
    }
}

loc_8013ADCC:
{
    r0 = MemoryInline::FlatRead8((r4 + 10176));
    r3 = 255;
    r27 = MemoryInline::FlatRead8((r4 + 10173));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_8013ADDC:
{
    MemoryInline::FlatWriteRam8((r4 + 10174), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r4 + 10173), static_cast<uint8_t>(r3));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8013AE08;
    }
}

loc_8013ADE8:
{
    r3 = 851968;
    r5 = r27;
    r7 = r29;
    r4 = (r30 + 0);
    r3 = (r3 + 2);
    r6 = 255;
    r8 = 255;
    ctx->lr = 0x8013AE08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801317A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8013AE08:
{
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r4 = MemoryInline::FlatRead8((r3 + 1605));
    r0 = (r4 & 8);
}

loc_8013AE18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8013AE30;
    }
}

loc_8013AE1C:
{
    r0 = MemoryInline::FlatRead8((r3 + 1604));
    r0 = (r0 & 16);
}

loc_8013AE24:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8013AE30;
    }
}

loc_8013AE28:
{
    r0 = (r4 & 16);
}

loc_8013AE2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013AE74;
    }
}

loc_8013AE30:
{
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead8((r3 + 10173));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r27));
}

loc_8013AE40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013AE50;
    }
}

loc_8013AE44:
{
    r0 = MemoryInline::FlatRead8((r3 + 10174));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r29));
}

loc_8013AE4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013AE74;
    }
}

loc_8013AE50:
{
    r3 = r27;
    r4 = r29;
    ctx->lr = 0x8013AE5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80146790u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 & 255);
}

loc_8013AE60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013AE74;
    }
}

loc_8013AE64:
{
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    MemoryInline::FlatWriteRam8((r3 + 10173), static_cast<uint8_t>(r27));
    MemoryInline::FlatWriteRam8((r3 + 10174), static_cast<uint8_t>(r29));
}

loc_8013AE74:
{
    r0 = MemoryInline::FlatRead8((r31 + 1603));
    r0 = (r0 & 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013AE7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013AE88;
    }
}

loc_8013AE80:
{
    r3 = 1;
    ctx->lr = 0x8013AE88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8013BF0Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8013AE88:
{
    r3 = 1;
    ctx->lr = 0x8013AE90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8013BE5Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 1;
    ctx->lr = 0x8013AE98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8013BDACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r12 = MemoryInline::FlatRead32((r3 + 1384));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8013AEA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013AEB8;
    }
}

loc_8013AEAC:
{
    r3 = 0;
    ctr = r12;
    ctx->lr = 0x8013AEB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8013AEB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_8013AEBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013AED0;
    }
}

loc_8013AEC0:
{
    r12 = r28;
    r3 = 0;
    ctr = r12;
    ctx->lr = 0x8013AED0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8013AED0:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
// RECOMP_REGISTRATION base 0x8013A9EC func_8013A9EC preserves=true fpr_mask=0x00000000
