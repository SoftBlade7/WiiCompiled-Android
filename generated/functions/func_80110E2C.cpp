#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80110E2C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
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

    goto loc_80110E2C;

loc_80110E2C:
{
    MemoryInline::FlatWriteRam32((r1 + -2960), r1);
    r1 = (r1 + -2960);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 2964), r0);
    r11 = (r1 + 2960);
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
    r25 = 0;
    r0 = 3;
    r27 = r3;
    r31 = 0x80280000u;
    r28 = r4;
    MemoryInline::FlatWriteRam32((r1 + 2916), r25);
    r31 = (r31 + -15632);
    r3 = (r1 + 1517);
    MemoryInline::FlatWriteRam8((r1 + 1516), static_cast<uint8_t>(r0));
    r4 = (r27 + 132);
    r5 = 4;
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
    r0 = 5;
    r30 = 0x802F0000u;
    MemoryInline::FlatWriteRam32((r1 + 2916), r0);
    r30 = (r30 + 13504);
    r26 = (r1 + 1516);
    r29 = 0;
    goto loc_80110F58;
}

loc_80110E8C:
{
    r5 = r29;
    r3 = (r1 + 92);
    r4 = (r31 + 3808);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80110EA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80011A2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
    r3 = (r1 + 92);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 2916));
    r24 = (r3 + 1);
    r3 = (1400 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1400) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
}

loc_80110EB8:
{
    if ((static_cast<int32_t>(r24) <= static_cast<int32_t>(r3))) {
        goto loc_80110EC0;
    }
}

loc_80110EBC:
{
    r24 = r3;
}

loc_80110EC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(0));
}

loc_80110EC4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80110EF0;
    }
}

loc_80110EC8:
{
    r3 = (r1 + 1516);
    r5 = r24;
    r3 = (r3 + r0);
    r4 = (r1 + 92);
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
    r0 = MemoryInline::FlatRead32((r1 + 2916));
    r0 = (r0 + r24);
    MemoryInline::FlatWriteRam32((r1 + 2916), r0);
    r3 = (r26 + r0);
    MemoryInline::FlatWrite8((r3 + -1), static_cast<uint8_t>(r25));
}

loc_80110EF0:
{
    r0 = MemoryInline::FlatRead32(r30);
    r3 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    ctx->lr = 0x80110F00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x801ED938u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
    r24 = r3;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 2916));
    r23 = (r3 + 1);
    r3 = (1400 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1400) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
}

loc_80110F18:
{
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(r3))) {
        goto loc_80110F20;
    }
}

loc_80110F1C:
{
    r23 = r3;
}

loc_80110F20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_80110F24:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80110F50;
    }
}

loc_80110F28:
{
    r3 = (r1 + 1516);
    r4 = r24;
    r5 = r23;
    r3 = (r3 + r0);
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
    r0 = MemoryInline::FlatRead32((r1 + 2916));
    r0 = (r0 + r23);
    MemoryInline::FlatWriteRam32((r1 + 2916), r0);
    r3 = (r26 + r0);
    MemoryInline::FlatWrite8((r3 + -1), static_cast<uint8_t>(r25));
}

loc_80110F50:
{
    r30 = (r30 + 4);
    r29 = (r29 + 1);
}

loc_80110F58:
{
    r0 = MemoryInline::FlatRead32((r13 + -26776));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r0));
}

loc_80110F60:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80110E8C;
    }
}

loc_80110F64:
{
    r23 = (r31 + 3820);
    r3 = r23;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 2916));
    r24 = (r3 + 1);
    r3 = (1400 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1400) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
}

loc_80110F80:
{
    if ((static_cast<int32_t>(r24) <= static_cast<int32_t>(r3))) {
        goto loc_80110F88;
    }
}

loc_80110F84:
{
    r24 = r3;
}

loc_80110F88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(0));
}

loc_80110F8C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80110FC0;
    }
}

loc_80110F90:
{
    r3 = (r1 + 1516);
    r4 = r23;
    r5 = r24;
    r3 = (r3 + r0);
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
    r3 = MemoryInline::FlatRead32((r1 + 2916));
    r0 = (r1 + 1516);
    r4 = 0;
    r3 = (r3 + r24);
    MemoryInline::FlatWriteRam32((r1 + 2916), r3);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + -1), static_cast<uint8_t>(r4));
}

loc_80110FC0:
{
    r5 = MemoryInline::FlatRead32((r27 + 192));
    r3 = (r1 + 72);
    r4 = (r13 + -30428);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80110FD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80011A2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
    r3 = (r1 + 72);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 2916));
    r23 = (r3 + 1);
    r3 = (1400 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1400) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
}

loc_80110FEC:
{
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(r3))) {
        goto loc_80110FF4;
    }
}

loc_80110FF0:
{
    r23 = r3;
}

loc_80110FF4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_80110FF8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8011102C;
    }
}

loc_80110FFC:
{
    r3 = (r1 + 1516);
    r5 = r23;
    r3 = (r3 + r0);
    r4 = (r1 + 72);
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
    r3 = MemoryInline::FlatRead32((r1 + 2916));
    r0 = (r1 + 1516);
    r4 = 0;
    r3 = (r3 + r23);
    MemoryInline::FlatWriteRam32((r1 + 2916), r3);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + -1), static_cast<uint8_t>(r4));
}

loc_8011102C:
{
    r23 = (r13 + -30404);
    r3 = r23;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 2916));
    r24 = (r3 + 1);
    r3 = (1400 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1400) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
}

loc_80111048:
{
    if ((static_cast<int32_t>(r24) <= static_cast<int32_t>(r3))) {
        goto loc_80111050;
    }
}

loc_8011104C:
{
    r24 = r3;
}

loc_80111050:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(0));
}

loc_80111054:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80111088;
    }
}

loc_80111058:
{
    r3 = (r1 + 1516);
    r4 = r23;
    r5 = r24;
    r3 = (r3 + r0);
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
    r3 = MemoryInline::FlatRead32((r1 + 2916));
    r0 = (r1 + 1516);
    r4 = 0;
    r3 = (r3 + r24);
    MemoryInline::FlatWriteRam32((r1 + 2916), r3);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + -1), static_cast<uint8_t>(r4));
}

loc_80111088:
{
    r0 = MemoryInline::FlatRead32((r27 + 200));
    r24 = (r13 + -30392);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80111094:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011109C;
    }
}

loc_80111098:
{
    r24 = (r13 + -30396);
}

loc_8011109C:
{
    r3 = r24;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 2916));
    r23 = (r3 + 1);
    r3 = (1400 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1400) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
}

loc_801110B4:
{
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(r3))) {
        goto loc_801110BC;
    }
}

loc_801110B8:
{
    r23 = r3;
}

loc_801110BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_801110C0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801110F4;
    }
}

loc_801110C4:
{
    r3 = (r1 + 1516);
    r4 = r24;
    r5 = r23;
    r3 = (r3 + r0);
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
    r3 = MemoryInline::FlatRead32((r1 + 2916));
    r0 = (r1 + 1516);
    r4 = 0;
    r3 = (r3 + r23);
    MemoryInline::FlatWriteRam32((r1 + 2916), r3);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + -1), static_cast<uint8_t>(r4));
}

loc_801110F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_801110F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801111C4;
    }
}

loc_801110FC:
{
    r23 = (r31 + 3832);
    r3 = r23;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 2916));
    r24 = (r3 + 1);
    r3 = (1400 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1400) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
}

loc_80111118:
{
    if ((static_cast<int32_t>(r24) <= static_cast<int32_t>(r3))) {
        goto loc_80111120;
    }
}

loc_8011111C:
{
    r24 = r3;
}

loc_80111120:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(0));
}

loc_80111124:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80111158;
    }
}

loc_80111128:
{
    r3 = (r1 + 1516);
    r4 = r23;
    r5 = r24;
    r3 = (r3 + r0);
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
    r3 = MemoryInline::FlatRead32((r1 + 2916));
    r0 = (r1 + 1516);
    r4 = 0;
    r3 = (r3 + r24);
    MemoryInline::FlatWriteRam32((r1 + 2916), r3);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + -1), static_cast<uint8_t>(r4));
}

loc_80111158:
{
    r5 = r28;
    r3 = (r1 + 52);
    r4 = (r13 + -30428);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8011116Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80011A2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
    r3 = (r1 + 52);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 2916));
    r23 = (r3 + 1);
    r3 = (1400 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1400) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
}

loc_80111184:
{
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(r3))) {
        goto loc_8011118C;
    }
}

loc_80111188:
{
    r23 = r3;
}

loc_8011118C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_80111190:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801111C4;
    }
}

loc_80111194:
{
    r3 = (r1 + 1516);
    r5 = r23;
    r3 = (r3 + r0);
    r4 = (r1 + 52);
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
    r3 = MemoryInline::FlatRead32((r1 + 2916));
    r0 = (r1 + 1516);
    r4 = 0;
    r3 = (r3 + r23);
    MemoryInline::FlatWriteRam32((r1 + 2916), r3);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + -1), static_cast<uint8_t>(r4));
}

loc_801111C4:
{
    r23 = (r31 + 3848);
    r3 = r23;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 2916));
    r24 = (r3 + 1);
    r3 = (1400 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1400) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
}

loc_801111E0:
{
    if ((static_cast<int32_t>(r24) <= static_cast<int32_t>(r3))) {
        goto loc_801111E8;
    }
}

loc_801111E4:
{
    r24 = r3;
}

loc_801111E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(0));
}

loc_801111EC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80111220;
    }
}

loc_801111F0:
{
    r3 = (r1 + 1516);
    r4 = r23;
    r5 = r24;
    r3 = (r3 + r0);
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
    r3 = MemoryInline::FlatRead32((r1 + 2916));
    r0 = (r1 + 1516);
    r4 = 0;
    r3 = (r3 + r24);
    MemoryInline::FlatWriteRam32((r1 + 2916), r3);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + -1), static_cast<uint8_t>(r4));
}

loc_80111220:
{
    r3 = (r27 + 4);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 2916));
    r23 = (r3 + 1);
    r3 = (1400 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1400) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
}

loc_80111238:
{
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(r3))) {
        goto loc_80111240;
    }
}

loc_8011123C:
{
    r23 = r3;
}

loc_80111240:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_80111244:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80111278;
    }
}

loc_80111248:
{
    r3 = (r1 + 1516);
    r5 = r23;
    r3 = (r3 + r0);
    r4 = (r27 + 4);
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
    r3 = MemoryInline::FlatRead32((r1 + 2916));
    r0 = (r1 + 1516);
    r4 = 0;
    r3 = (r3 + r23);
    MemoryInline::FlatWriteRam32((r1 + 2916), r3);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + -1), static_cast<uint8_t>(r4));
}

loc_80111278:
{
    r0 = MemoryInline::FlatRead32((r27 + 168));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80111280:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80111414;
    }
}

loc_80111284:
{
    r23 = (r31 + 3860);
    r3 = r23;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 2916));
    r24 = (r3 + 1);
    r3 = (1400 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1400) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
}

loc_801112A0:
{
    if ((static_cast<int32_t>(r24) <= static_cast<int32_t>(r3))) {
        goto loc_801112A8;
    }
}

loc_801112A4:
{
    r24 = r3;
}

loc_801112A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(0));
}

loc_801112AC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801112E0;
    }
}

loc_801112B0:
{
    r3 = (r1 + 1516);
    r4 = r23;
    r5 = r24;
    r3 = (r3 + r0);
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
    r3 = MemoryInline::FlatRead32((r1 + 2916));
    r0 = (r1 + 1516);
    r4 = 0;
    r3 = (r3 + r24);
    MemoryInline::FlatWriteRam32((r1 + 2916), r3);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + -1), static_cast<uint8_t>(r4));
}

loc_801112E0:
{
    r5 = MemoryInline::FlatRead32((r27 + 260));
    r3 = (r1 + 32);
    r4 = (r13 + -30428);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x801112F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80011A2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
    r3 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 2916));
    r23 = (r3 + 1);
    r3 = (1400 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1400) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
}

loc_8011130C:
{
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(r3))) {
        goto loc_80111314;
    }
}

loc_80111310:
{
    r23 = r3;
}

loc_80111314:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_80111318:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8011134C;
    }
}

loc_8011131C:
{
    r3 = (r1 + 1516);
    r5 = r23;
    r3 = (r3 + r0);
    r4 = (r1 + 32);
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
    r3 = MemoryInline::FlatRead32((r1 + 2916));
    r0 = (r1 + 1516);
    r4 = 0;
    r3 = (r3 + r23);
    MemoryInline::FlatWriteRam32((r1 + 2916), r3);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + -1), static_cast<uint8_t>(r4));
}

loc_8011134C:
{
    r23 = (r31 + 3872);
    r3 = r23;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 2916));
    r24 = (r3 + 1);
    r3 = (1400 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1400) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
}

loc_80111368:
{
    if ((static_cast<int32_t>(r24) <= static_cast<int32_t>(r3))) {
        goto loc_80111370;
    }
}

loc_8011136C:
{
    r24 = r3;
}

loc_80111370:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(0));
}

loc_80111374:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801113A8;
    }
}

loc_80111378:
{
    r3 = (r1 + 1516);
    r4 = r23;
    r5 = r24;
    r3 = (r3 + r0);
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
    r3 = MemoryInline::FlatRead32((r1 + 2916));
    r0 = (r1 + 1516);
    r4 = 0;
    r3 = (r3 + r24);
    MemoryInline::FlatWriteRam32((r1 + 2916), r3);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + -1), static_cast<uint8_t>(r4));
}

loc_801113A8:
{
    r5 = MemoryInline::FlatRead16((r27 + 264));
    r3 = (r1 + 12);
    r4 = (r13 + -30428);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x801113BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80011A2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
    r3 = (r1 + 12);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 2916));
    r23 = (r3 + 1);
    r3 = (1400 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1400) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
}

loc_801113D4:
{
    if ((static_cast<int32_t>(r23) <= static_cast<int32_t>(r3))) {
        goto loc_801113DC;
    }
}

loc_801113D8:
{
    r23 = r3;
}

loc_801113DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_801113E0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80111414;
    }
}

loc_801113E4:
{
    r3 = (r1 + 1516);
    r5 = r23;
    r3 = (r3 + r0);
    r4 = (r1 + 12);
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
    r3 = MemoryInline::FlatRead32((r1 + 2916));
    r0 = (r1 + 1516);
    r4 = 0;
    r3 = (r3 + r23);
    MemoryInline::FlatWriteRam32((r1 + 2916), r3);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + -1), static_cast<uint8_t>(r4));
}

loc_80111414:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(2));
}

loc_80111418:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801114F8;
    }
}

loc_8011141C:
{
    r5 = MemoryInline::FlatRead32((r1 + 2916));
    r3 = (r1 + 112);
    r4 = (r1 + 1516);
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
    r0 = MemoryInline::FlatRead32((r1 + 2916));
    r3 = r27;
    r4 = (r1 + 112);
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 1512), r0);
    r6 = 255;
    r7 = 0;
    ctx->lr = 0x8011144Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x8010FB34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
    r3 = r27;
    r4 = (r1 + 112);
    r5 = 1;
    r6 = 255;
    r7 = 0;
    ctx->lr = 0x80111464u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x8010FB34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
    r3 = r27;
    r4 = (r1 + 112);
    r5 = 2;
    r6 = 255;
    r7 = 0;
    ctx->lr = 0x8011147Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x8010FB34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
    r0 = MemoryInline::FlatRead32((r1 + 1512));
    r0_subfic_ra_0 = r0;
    r0 = (1400 - r0_subfic_ra_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1400) >= static_cast<uint32_t>(r0_subfic_ra_0) ? 1u : 0u) << 29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80111488:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801114DC;
    }
}

loc_8011148C:
{
    r0 = MemoryInline::FlatRead32((r1 + 2916));
    r3 = r27;
    r4 = (r1 + 112);
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 1512), r0);
    r6 = 255;
    r7 = 0;
    ctx->lr = 0x801114ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x8010FB34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
    r3 = r27;
    r4 = (r1 + 112);
    r5 = 1;
    r6 = 0;
    r7 = 0;
    ctx->lr = 0x801114C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x8010FB34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
    r3 = r27;
    r4 = (r1 + 112);
    r5 = 2;
    r6 = 0;
    r7 = 0;
    ctx->lr = 0x801114DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x8010FB34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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

loc_801114DC:
{
    r5 = MemoryInline::FlatRead32((r1 + 1512));
    r3 = (r1 + 1516);
    r4 = (r1 + 112);
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
    r0 = MemoryInline::FlatRead32((r1 + 1512));
    MemoryInline::FlatWriteRam32((r1 + 2916), r0);
    goto loc_8011151C;
}

loc_801114F8:
{
    r4 = MemoryInline::FlatRead32((r1 + 2916));
    r0 = (1400 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1400) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80111504:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8011151C;
    }
}

loc_80111508:
{
    r3 = (r1 + 1516);
    r0 = 0;
    r3_addr_1 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_1, static_cast<uint8_t>(r0));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r1 + 2916), r0);
}

loc_8011151C:
{
    r3 = MemoryInline::FlatRead32(r27);
    r4 = (r1 + 1516);
    r5 = MemoryInline::FlatRead32((r1 + 2916));
    r7 = (r27 + 204);
    r6 = 0;
    r8 = 8;
    ctx->lr = 0x80111538u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x800F13D4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
    ctx->lr = 0x8011153Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800F24C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80111540:
{
    MemoryInline::FlatWrite32((r27 + 172), r3);
    MemoryInline::FlatWrite32((r27 + 176), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80111554;
    }
}

loc_8011154C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r27 + 180), r0);
}

loc_80111554:
{
    r11 = (r1 + 2960);
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
    r0 = MemoryInline::FlatRead32((r1 + 2964));
    ctx->lr = r0;
    r1 = (r1 + 2960);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80110E2C func_80110E2C preserves=true fpr_mask=0x00000000
