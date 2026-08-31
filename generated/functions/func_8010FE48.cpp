#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8010FE48(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r0_subfic_ra_4 = 0;
    uint32_t r0_subfic_ra_5 = 0;
    uint32_t r0_subfic_ra_6 = 0;
    uint32_t r0_subfic_ra_7 = 0;
    uint32_t r26_addr_0 = 0;
    uint32_t r26_addr_1 = 0;
    uint32_t r26_addr_10 = 0;
    uint32_t r26_addr_11 = 0;
    uint32_t r26_addr_12 = 0;
    uint32_t r26_addr_2 = 0;
    uint32_t r26_addr_3 = 0;
    uint32_t r26_addr_4 = 0;
    uint32_t r26_addr_5 = 0;
    uint32_t r26_addr_6 = 0;
    uint32_t r26_addr_7 = 0;
    uint32_t r26_addr_8 = 0;
    uint32_t r26_addr_9 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
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

    goto loc_8010FE48;

loc_8010FE48:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
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
    r0 = MemoryInline::FlatRead32(r5);
    r25 = r3;
    r26 = r4;
    r27 = r5;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8010FE70:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8010FE7C;
    }
}

loc_8010FE74:
{
    r3 = 0;
    goto loc_80110178;
}

loc_8010FE7C:
{
    r24 = MemoryInline::FlatRead32((r4 + 1400));
    r30 = (1400 - r24);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1400) >= static_cast<uint32_t>(r24) ? 1u : 0u) << 29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(32));
}

loc_8010FE88:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8010FE94;
    }
}

loc_8010FE8C:
{
    r3 = 0;
    goto loc_80110178;
}

loc_8010FE94:
{
    r28 = 0x80280000u;
    r28 = (r28 + -11888);
    r3 = r28;
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
    r29 = (r3 + 1);
}

loc_8010FEAC:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(r30))) {
        goto loc_8010FEB4;
    }
}

loc_8010FEB0:
{
    r29 = r30;
}

loc_8010FEB4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8010FEB8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8010FEE4;
    }
}

loc_8010FEBC:
{
    r4 = r28;
    r5 = r29;
    r3 = (r26 + r24);
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
    r3 = MemoryInline::FlatRead32((r26 + 1400));
    r0 = 0;
    r3 = (r3 + r29);
    MemoryInline::FlatWrite32((r26 + 1400), r3);
    r3 = (r3 + r26);
    MemoryInline::FlatWrite8((r3 + -1), static_cast<uint8_t>(r0));
}

loc_8010FEE4:
{
    r29 = MemoryInline::FlatRead32((r26 + 1400));
    r30 = 0x80280000u;
    r30 = (r30 + -11520);
    r31 = 0;
    r0 = (r29 + 1);
    MemoryInline::FlatWrite32((r26 + 1400), r0);
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r26_addr_1 = (r26 + r29);
    MemoryInline::FlatWrite8(r26_addr_1, static_cast<uint8_t>(r3));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r27 + 4), r0);
    goto loc_8011015C;
}

loc_8010FF10:
{
    r0 = MemoryInline::FlatRead32((r27 + 276));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8010FF18:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8010FF34;
    }
}

loc_8010FF1C:
{
    r12 = MemoryInline::FlatRead32((r25 + 148));
    r4 = (r27 + 20);
    r3 = MemoryInline::FlatRead32(r27);
    r5 = MemoryInline::FlatRead32((r25 + 268));
    ctr = r12;
    ctx->lr = 0x8010FF34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
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
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
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

loc_8010FF34:
{
    r0 = MemoryInline::FlatRead32((r27 + 12));
}

loc_8010FF3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8010FF60;
    }
}

loc_8010FF40:
{
    r3 = MemoryInline::FlatRead32(r27);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8010FF48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8010FF60;
    }
}

loc_8010FF4C:
{
    r12 = MemoryInline::FlatRead32((r25 + 152));
    r4 = MemoryInline::FlatRead32((r25 + 268));
    ctr = r12;
    ctx->lr = 0x8010FF5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
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
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
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
    MemoryInline::FlatWrite32((r27 + 12), r3);
}

loc_8010FF60:
{
    r4 = MemoryInline::FlatRead32((r26 + 1400));
    r0 = (1400 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1400) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(100));
}

loc_8010FF6C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8010FF78;
    }
}

loc_8010FF70:
{
    r3 = 1;
    goto loc_80110178;
}

loc_8010FF78:
{
    r3 = MemoryInline::FlatRead32(r27);
    r0 = (r4 + 1);
    r26_addr_3 = (r26 + r4);
    MemoryInline::FlatWrite8(r26_addr_3, static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite32((r26 + 1400), r0);
    goto loc_80110114;
}

loc_8010FF8C:
{
    r3 = (r27 + r3);
    r28 = MemoryInline::FlatRead8((r3 + 20));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r30_addr_3 = (r30 + r0);
    r23 = MemoryInline::FlatRead32(r30_addr_3);
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
    r0 = MemoryInline::FlatRead32((r26 + 1400));
    r24 = (r3 + 1);
    r3 = (1400 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1400) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
}

loc_8010FFB4:
{
    if ((static_cast<int32_t>(r24) <= static_cast<int32_t>(r3))) {
        goto loc_8010FFBC;
    }
}

loc_8010FFB8:
{
    r24 = r3;
}

loc_8010FFBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(0));
}

loc_8010FFC0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8010FFCC;
    }
}

loc_8010FFC4:
{
    r4 = 0;
    goto loc_8010FFF4;
}

loc_8010FFCC:
{
    r4 = r23;
    r5 = r24;
    r3 = (r26 + r0);
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
    r0 = MemoryInline::FlatRead32((r26 + 1400));
    r4 = 1;
    r0 = (r0 + r24);
    MemoryInline::FlatWrite32((r26 + 1400), r0);
    r3 = (r26 + r0);
    MemoryInline::FlatWrite8((r3 + -1), static_cast<uint8_t>(r31));
}

loc_8010FFF4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8010FFF8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80110004;
    }
}

loc_8010FFFC:
{
    r3 = 1;
    goto loc_80110178;
}

loc_80110004:
{
    r0 = MemoryInline::FlatRead32(r27);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8011000C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80110040;
    }
}

loc_80110010:
{
    r12 = MemoryInline::FlatRead32((r25 + 136));
    r3 = r28;
    r4 = r26;
    r5 = MemoryInline::FlatRead32((r25 + 268));
    ctr = r12;
    ctx->lr = 0x80110028u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
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
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
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
    r0 = MemoryInline::FlatRead32((r26 + 1400));
    r0_subfic_ra_3 = r0;
    r0 = (1400 - r0_subfic_ra_3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1400) >= static_cast<uint32_t>(r0_subfic_ra_3) ? 1u : 0u) << 29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80110034:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80110104;
    }
}

loc_80110038:
{
    r3 = 1;
    goto loc_80110178;
}

loc_80110040:
{
    r4 = MemoryInline::FlatRead32((r26 + 1400));
    r0 = (1400 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1400) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8011004C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80110058;
    }
}

loc_80110050:
{
    r3 = 1;
    goto loc_80110178;
}

loc_80110058:
{
    r3 = MemoryInline::FlatRead32((r27 + 16));
    r0 = (r4 + 1);
    r26_addr_5 = (r26 + r4);
    MemoryInline::FlatWrite8(r26_addr_5, static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite32((r26 + 1400), r0);
    goto loc_801100D8;
}

loc_8011006C:
{
    r0 = MemoryInline::FlatRead32(r27);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80110074:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80110094;
    }
}

loc_80110078:
{
    r12 = MemoryInline::FlatRead32((r25 + 140));
    r3 = r28;
    r5 = r26;
    r6 = MemoryInline::FlatRead32((r25 + 268));
    ctr = r12;
    ctx->lr = 0x80110090u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
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
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
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
    goto loc_801100B4;
}

loc_80110094:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80110098:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801100B4;
    }
}

loc_8011009C:
{
    r12 = MemoryInline::FlatRead32((r25 + 144));
    r3 = r28;
    r5 = r26;
    r6 = MemoryInline::FlatRead32((r25 + 268));
    ctr = r12;
    ctx->lr = 0x801100B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
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
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
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

loc_801100B4:
{
    r0 = MemoryInline::FlatRead32((r26 + 1400));
    r0_subfic_ra_5 = r0;
    r0 = (1400 - r0_subfic_ra_5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1400) >= static_cast<uint32_t>(r0_subfic_ra_5) ? 1u : 0u) << 29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801100C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801100CC;
    }
}

loc_801100C4:
{
    r3 = 1;
    goto loc_80110178;
}

loc_801100CC:
{
    r3 = MemoryInline::FlatRead32((r27 + 16));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r27 + 16), r0);
}

loc_801100D8:
{
    r4 = MemoryInline::FlatRead32((r27 + 16));
    r0 = MemoryInline::FlatRead32((r27 + 12));
}

loc_801100E4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_8011006C;
    }
}

loc_801100E8:
{
    r3 = MemoryInline::FlatRead32((r26 + 1400));
    r0 = (1400 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1400) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
}

loc_801100F4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80110104;
    }
}

loc_801100F8:
{
    r26_addr_6 = (r26 + r3);
    MemoryInline::FlatWrite8(r26_addr_6, static_cast<uint8_t>(r31));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r26 + 1400), r0);
}

loc_80110104:
{
    r3 = MemoryInline::FlatRead32((r27 + 8));
    MemoryInline::FlatWrite32((r27 + 16), r31);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r27 + 8), r0);
}

loc_80110114:
{
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r0 = MemoryInline::FlatRead32((r27 + 276));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80110120:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8010FF8C;
    }
}

loc_80110124:
{
    r3 = MemoryInline::FlatRead32((r26 + 1400));
    r0 = (1400 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1400) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
}

loc_80110130:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80110140;
    }
}

loc_80110134:
{
    r26_addr_8 = (r26 + r3);
    MemoryInline::FlatWrite8(r26_addr_8, static_cast<uint8_t>(r31));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r26 + 1400), r0);
}

loc_80110140:
{
    r3 = MemoryInline::FlatRead32(r27);
    MemoryInline::FlatWrite32((r27 + 8), r31);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r27, r0);
    MemoryInline::FlatWrite32((r27 + 12), r31);
    MemoryInline::FlatWrite32((r27 + 16), r31);
    MemoryInline::FlatWrite32((r27 + 276), r31);
}

loc_8011015C:
{
    r0 = MemoryInline::FlatRead32(r27);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80110164:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8010FF10;
    }
}

loc_80110168:
{
    r26_addr_10 = (r26 + r29);
    r0 = MemoryInline::FlatRead8(r26_addr_10);
    r3 = 1;
    r0 = (r0 | 128);
    r26_addr_11 = (r26 + r29);
    MemoryInline::FlatWrite8(r26_addr_11, static_cast<uint8_t>(r0));
}

loc_80110178:
{
    r11 = (r1 + 48);
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
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
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
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8010FE48 func_8010FE48 preserves=true fpr_mask=0x00000000
