#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80676990(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
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
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80676990;

loc_80676990:
{
    MemoryInline::FlatWriteRam32((r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 196), r0);
    MemoryInline::FlatWriteRam32((r1 + 172), r27);
    MemoryInline::FlatWriteRam32((r1 + 176), r28);
    MemoryInline::FlatWriteRam32((r1 + 180), r29);
    MemoryInline::FlatWriteRam32((r1 + 184), r30);
    MemoryInline::FlatWriteRam32((r1 + 188), r31);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r0 = MemoryInline::FlatRead32((r3 + 16884));
}

loc_806769B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_806769F4;
    }
}

loc_806769B8:
{
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + 88));
    r4 = MemoryInline::FlatRead32((r4 + -29952));
}

loc_806769C8:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r0))) {
        goto loc_806769F4;
    }
}

loc_806769CC:
{
    r0 = MemoryInline::FlatRead8((r3 + 85));
}

loc_806769D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_806769E4;
    }
}

loc_806769D8:
{
}

loc_806769DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_806769EC;
    }
}

loc_806769E0:
{
    goto loc_806769F4;
}

loc_806769E4:
{
    r0 = 1;
    goto loc_806769F8;
}

loc_806769EC:
{
    r0 = 2;
    goto loc_806769F8;
}

loc_806769F4:
{
    r0 = 3;
}

loc_806769F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_806769FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806771B8;
    }
}

loc_80676A00:
{
    r4 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r4 + -10424));
    r0 = MemoryInline::FlatRead16((r6 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80676A10:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80676A30;
    }
}

loc_80676A14:
{
    r4 = 65536;
    r7 = (r0 & 255);
    r0 = (r4 + -27664);
    r0 = (r0 * r7);
    r4 = (r6 + r0);
    r31 = (r4 + 56);
    goto loc_80676A34;
}

loc_80676A30:
{
    r31 = 0;
}

loc_80676A34:
{
}

loc_80676A38:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80676C0C;
    }
}

loc_80676A3C:
{
    r4 = 0x808B0000u;
    r0 = 0;
    r4 = (r4 + 11588);
    MemoryInline::FlatWriteRam32((r1 + 136), r4);
    MemoryInline::FlatWriteRam16((r1 + 140), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 142), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 144), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 146), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r6 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80676A64:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80676A84;
    }
}

loc_80676A68:
{
    r4 = 65536;
    r5 = (r0 & 255);
    r0 = (r4 + -27664);
    r0 = (r0 * r5);
    r4 = (r6 + r0);
    r7 = (r4 + 56);
    goto loc_80676A88;
}

loc_80676A84:
{
    r7 = 0;
}

loc_80676A88:
{
    r0 = MemoryInline::FlatRead32((r3 + 16884));
}

loc_80676A90:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80676AD0;
    }
}

loc_80676A94:
{
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + 88));
    r4 = MemoryInline::FlatRead32((r4 + -29952));
}

loc_80676AA4:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r0))) {
        goto loc_80676AD0;
    }
}

loc_80676AA8:
{
    r0 = MemoryInline::FlatRead8((r3 + 85));
}

loc_80676AB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80676AC0;
    }
}

loc_80676AB4:
{
}

loc_80676AB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80676AC8;
    }
}

loc_80676ABC:
{
    goto loc_80676AD0;
}

loc_80676AC0:
{
    r0 = 1;
    goto loc_80676AD4;
}

loc_80676AC8:
{
    r0 = 2;
    goto loc_80676AD4;
}

loc_80676AD0:
{
    r0 = 3;
}

loc_80676AD4:
{
}

loc_80676AD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80676BB8;
    }
}

loc_80676ADC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r7 + 22820), 0, 24u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r7 + 22840));
    r5 = 0;
    r0 = MemoryInline::FlatRead32((r3 + 88));
}

loc_80676AEC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_80676B00;
    }
}

loc_80676AF0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r7 + 22826));
}

loc_80676AF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80676B00;
    }
}

loc_80676AFC:
{
    r5 = 1;
}

loc_80676B00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80676B04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80676BAC;
    }
}

loc_80676B08:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r7 + 22820));
    r3 = 65536;
    MemoryInline::FlatWriteRam16((r1 + 140), static_cast<uint16_t>(r0));
    r0 = (r3 + -27664);
    r4 = (r1 + 8);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r7 + 22822));
    MemoryInline::FlatWriteRam8((r1 + 142), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r7 + 22824));
    MemoryInline::FlatWriteRam16((r1 + 144), static_cast<uint16_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r7 + 22826));
    MemoryInline::FlatWriteRam8((r1 + 146), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r7 + 22828));
    MemoryInline::FlatWriteRam32((r1 + 148), r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r7 + 22832));
    MemoryInline::FlatWriteRam32((r1 + 152), r3);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r7 + 22836));
    MemoryInline::FlatWriteRam32((r1 + 156), r3);
    r3 = MemoryInline::FlatRead16((r6 + 54));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = (r3 & 255);
    r0 = (r0 * r3);
    r3 = (r6 + r0);
    r27 = (r3 + 78);
    r3 = r27;
    ctx->lr = 0x80676B68u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800C75F0u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80676B6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80676B84;
    }
}

loc_80676B70:
{
    r5 = MemoryInline::FlatRead16((r1 + 8));
    r3 = (r1 + 60);
    r4 = 0;
    ctx->lr = 0x80676B80u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800C7DF0u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80676BC0;
}

loc_80676B84:
{
    r3 = r27;
    r4 = (r1 + 8);
    ctx->lr = 0x80676B90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800CA820u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80676B94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80676BC0;
    }
}

loc_80676B98:
{
    r5 = MemoryInline::FlatRead16((r1 + 8));
    r3 = (r1 + 60);
    r4 = 6;
    ctx->lr = 0x80676BA8u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800C7DF0u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80676BC0;
}

loc_80676BAC:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 146), static_cast<uint8_t>(r0));
    goto loc_80676BC0;
}

loc_80676BB8:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 146), static_cast<uint8_t>(r0));
}

loc_80676BC0:
{
    r0 = MemoryInline::FlatRead8((r1 + 146));
}

loc_80676BC8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80676C0C;
    }
}

loc_80676BCC:
{
    r4 = (r31 + 65536);
    r3 = 65536;
    r4 = MemoryInline::FlatRead16((r4 + -27960));
    r0 = (r3 + -1);
}

loc_80676BE0:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(65535))) {
        goto loc_80676BE8;
    }
}

loc_80676BE4:
{
    r0 = r4;
}

loc_80676BE8:
{
    r4 = (r0 & 65535);
    r3 = 65536;
    r4 = (r4 + 1);
}

loc_80676BF8:
{
    r0 = (r3 + -1);
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(65535))) {
        goto loc_80676C04;
    }
}

loc_80676C00:
{
    r0 = r4;
}

loc_80676C04:
{
    r3 = (r31 + 65536);
    MemoryInline::FlatWrite16((r3 + -27960), static_cast<uint16_t>(r0));
}

loc_80676C0C:
{
    r9 = 0;
    MemoryInline::FlatWriteRam16((r1 + 36), static_cast<uint16_t>(r9));
    guest_range_1 = MemoryInline::ResolveRangeHost((r29 + 80), 0, 20u, true, false);
    r12 = MemoryInline::ReadResolved16(guest_range_1, 0u, (r29 + 80));
    r27 = 0x808B0000u;
    r8 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r29 + 88));
    r27 = (r27 + 11588);
    r7 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r29 + 92));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(3));
}

loc_80676C2C:
{
    r6 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r29 + 96));
    r3 = (r31 + 22900);
    r0 = MemoryInline::FlatRead32((r28 + 88));
    r5 = (4 - r30);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(4) >= static_cast<uint32_t>(r30) ? 1u : 0u) << 29);
    guest_range_8 = MemoryInline::ResolveRangeHost((r1 + 32), 0, 28u, false, true);
    MemoryInline::WriteResolved8(guest_range_8, 6u, (r1 + 38), static_cast<uint8_t>(r9));
    r4 = 3;
    r11 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r29 + 82));
    MemoryInline::WriteResolved16(guest_range_8, 8u, (r1 + 40), static_cast<uint16_t>(r9));
    r10 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r29 + 84));
    MemoryInline::WriteResolved8(guest_range_8, 10u, (r1 + 42), static_cast<uint8_t>(r9));
    r9 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r29 + 86));
    MemoryInline::WriteResolved32(guest_range_8, 0u, (r1 + 32), r27);
    MemoryInline::WriteResolved16(guest_range_8, 4u, (r1 + 36), static_cast<uint16_t>(r12));
    MemoryInline::WriteResolved8(guest_range_8, 6u, (r1 + 38), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved16(guest_range_8, 8u, (r1 + 40), static_cast<uint16_t>(r10));
    MemoryInline::WriteResolved8(guest_range_8, 10u, (r1 + 42), static_cast<uint8_t>(r9));
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_8, 12u, (r1 + 44), r8);
        MemoryInline::WriteResolved32(guest_range_8, 16u, (r1 + 48), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_8, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_8, 20u, (r1 + 52), r6);
        MemoryInline::WriteResolved32(guest_range_8, 24u, (r1 + 56), r0);
    }
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80676D9C;
    }
}

loc_80676C80:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
}

loc_80676C84:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80676D3C;
    }
}

loc_80676C8C:
{
    r6 = (r4 + 1);
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + -24), 0, 52u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_2, 28u, (r3 + 4));
    r7 = (r6 & 255);
    r6 = (r7 * 28);
    r7 = (r4 & 255);
    r4 = (r4 + -2);
    r8 = (r31 + r6);
    guest_range_3 = MemoryInline::ResolveRangeHost((r8 + 22820), 0, 24u, false, true);
    MemoryInline::WriteResolved16(guest_range_3, 0u, (r8 + 22820), static_cast<uint16_t>(r0));
    r6 = (r7 * 28);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 30u, (r3 + 6));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r8 + 22822), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 32u, (r3 + 8));
    MemoryInline::WriteResolved16(guest_range_3, 4u, (r8 + 22824), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 34u, (r3 + 10));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r8 + 22826), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r3 + 12));
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r8 + 22828), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r3 + 16));
    MemoryInline::WriteResolved32(guest_range_3, 12u, (r8 + 22832), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r3 + 20));
    MemoryInline::WriteResolved32(guest_range_3, 16u, (r8 + 22836), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r3 + 24));
    MemoryInline::WriteResolved32(guest_range_3, 20u, (r8 + 22840), r0);
    r8 = (r31 + r6);
    r0 = MemoryInline::ReadResolved16(guest_range_2, 0u, (r3 + -24));
    guest_range_4 = MemoryInline::ResolveRangeHost((r8 + 22820), 0, 24u, false, true);
    MemoryInline::WriteResolved16(guest_range_4, 0u, (r8 + 22820), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r3 + -22));
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r8 + 22822), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 4u, (r3 + -20));
    MemoryInline::WriteResolved16(guest_range_4, 4u, (r8 + 22824), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 6u, (r3 + -18));
    MemoryInline::WriteResolved8(guest_range_4, 6u, (r8 + 22826), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r3 + -16));
    MemoryInline::WriteResolved32(guest_range_4, 8u, (r8 + 22828), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r3 + -12));
    MemoryInline::WriteResolved32(guest_range_4, 12u, (r8 + 22832), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r3 + -8));
    MemoryInline::WriteResolved32(guest_range_4, 16u, (r8 + 22836), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r3 + -4));
    r3 = (r3 + -56);
    MemoryInline::WriteResolved32(guest_range_4, 20u, (r8 + 22840), r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80676C8C;
    }
}

loc_80676D34:
{
    r5 = (r5 & 1);
}

loc_80676D38:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80676D9C;
    }
}

loc_80676D3C:
{
    ctr = r5;
}

loc_80676D40:
{
    r6 = (r4 + 1);
    guest_range_5 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 24u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_5, 0u, (r3 + 4));
    r7 = (r6 & 255);
    r4 = (r4 + -1);
    r6 = (r7 * 28);
    r8 = (r31 + r6);
    guest_range_6 = MemoryInline::ResolveRangeHost((r8 + 22820), 0, 24u, false, true);
    MemoryInline::WriteResolved16(guest_range_6, 0u, (r8 + 22820), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_5, 2u, (r3 + 6));
    MemoryInline::WriteResolved8(guest_range_6, 2u, (r8 + 22822), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_5, 4u, (r3 + 8));
    MemoryInline::WriteResolved16(guest_range_6, 4u, (r8 + 22824), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_5, 6u, (r3 + 10));
    MemoryInline::WriteResolved8(guest_range_6, 6u, (r8 + 22826), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r3 + 12));
    MemoryInline::WriteResolved32(guest_range_6, 8u, (r8 + 22828), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_5, 12u, (r3 + 16));
    MemoryInline::WriteResolved32(guest_range_6, 12u, (r8 + 22832), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_5, 16u, (r3 + 20));
    MemoryInline::WriteResolved32(guest_range_6, 16u, (r8 + 22836), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_5, 20u, (r3 + 24));
    r3 = (r3 + -28);
    MemoryInline::WriteResolved32(guest_range_6, 20u, (r8 + 22840), r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80676D40;
    }
}

loc_80676D9C:
{
    r0 = (r30 & 255);
    r5 = MemoryInline::FlatRead16((r1 + 36));
    r6 = (r0 * 28);
    r4 = MemoryInline::FlatRead8((r1 + 38));
    r3 = MemoryInline::FlatRead16((r1 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80676DB4:
{
    r0 = MemoryInline::FlatRead8((r1 + 42));
    r6 = (r31 + r6);
    guest_range_7 = MemoryInline::ResolveRangeHost((r6 + 22820), 0, 24u, false, true);
    MemoryInline::WriteResolved16(guest_range_7, 0u, (r6 + 22820), static_cast<uint16_t>(r5));
    r5 = MemoryInline::FlatRead32((r1 + 44));
    MemoryInline::WriteResolved8(guest_range_7, 2u, (r6 + 22822), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r1 + 48));
    MemoryInline::WriteResolved16(guest_range_7, 4u, (r6 + 22824), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::WriteResolved8(guest_range_7, 6u, (r6 + 22826), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 56));
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_7, 8u, (r6 + 22828), r5);
        MemoryInline::WriteResolved32(guest_range_7, 12u, (r6 + 22832), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_7, 16u, (r6 + 22836), r3);
        MemoryInline::WriteResolved32(guest_range_7, 20u, (r6 + 22840), r0);
    }
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806771B8;
    }
}

loc_80676DF0:
{
    r5 = (r31 + 65536);
    r3 = 1;
    MemoryInline::FlatWrite8((r5 + -27752), static_cast<uint8_t>(r3));
    r0 = 2;
    r6 = -1;
    r7 = 0;
    MemoryInline::FlatWrite8((r5 + -27751), static_cast<uint8_t>(r3));
    ctr = r0;
}

loc_80676E10:
{
    r0 = (r7 & 65535);
    r0 = (r0 * 20);
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r4 + -28270));
}

loc_80676E24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80676E40;
    }
}

loc_80676E28:
{
    r3 = MemoryInline::FlatRead32((r28 + 88));
    r0 = MemoryInline::FlatRead32((r4 + -28268));
}

loc_80676E34:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80676E40;
    }
}

loc_80676E38:
{
    r6 = r7;
    goto loc_80676F18;
}

loc_80676E40:
{
    r7 = (r7 + 1);
    r0 = (r7 & 65535);
    r0 = (r0 * 20);
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r4 + -28270));
}

loc_80676E58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80676E74;
    }
}

loc_80676E5C:
{
    r3 = MemoryInline::FlatRead32((r28 + 88));
    r0 = MemoryInline::FlatRead32((r4 + -28268));
}

loc_80676E68:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80676E74;
    }
}

loc_80676E6C:
{
    r6 = r7;
    goto loc_80676F18;
}

loc_80676E74:
{
    r7 = (r7 + 1);
    r0 = (r7 & 65535);
    r0 = (r0 * 20);
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r4 + -28270));
}

loc_80676E8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80676EA8;
    }
}

loc_80676E90:
{
    r3 = MemoryInline::FlatRead32((r28 + 88));
    r0 = MemoryInline::FlatRead32((r4 + -28268));
}

loc_80676E9C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80676EA8;
    }
}

loc_80676EA0:
{
    r6 = r7;
    goto loc_80676F18;
}

loc_80676EA8:
{
    r7 = (r7 + 1);
    r0 = (r7 & 65535);
    r0 = (r0 * 20);
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r4 + -28270));
}

loc_80676EC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80676EDC;
    }
}

loc_80676EC4:
{
    r3 = MemoryInline::FlatRead32((r28 + 88));
    r0 = MemoryInline::FlatRead32((r4 + -28268));
}

loc_80676ED0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80676EDC;
    }
}

loc_80676ED4:
{
    r6 = r7;
    goto loc_80676F18;
}

loc_80676EDC:
{
    r7 = (r7 + 1);
    r0 = (r7 & 65535);
    r0 = (r0 * 20);
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r4 + -28270));
}

loc_80676EF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80676F10;
    }
}

loc_80676EF8:
{
    r3 = MemoryInline::FlatRead32((r28 + 88));
    r0 = MemoryInline::FlatRead32((r4 + -28268));
}

loc_80676F04:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80676F10;
    }
}

loc_80676F08:
{
    r6 = r7;
    goto loc_80676F18;
}

loc_80676F10:
{
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80676E10;
    }
}

loc_80676F18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(-1));
}

loc_80676F1C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80677140;
    }
}

loc_80676F20:
{
    r0 = 0;
    r4 = (r31 + 65536);
    r0 = (r0 * 20);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + -28270));
}

loc_80676F38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80676F44;
    }
}

loc_80676F3C:
{
    r6 = 0;
    goto loc_80677060;
}

loc_80676F44:
{
    r0 = 1;
    r0 = (r0 * 20);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + -28270));
}

loc_80676F58:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80676F64;
    }
}

loc_80676F5C:
{
    r6 = 1;
    goto loc_80677060;
}

loc_80676F64:
{
    r0 = 2;
    r0 = (r0 * 20);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + -28270));
}

loc_80676F78:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80676F84;
    }
}

loc_80676F7C:
{
    r6 = 2;
    goto loc_80677060;
}

loc_80676F84:
{
    r0 = 3;
    r0 = (r0 * 20);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + -28270));
}

loc_80676F98:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80676FA4;
    }
}

loc_80676F9C:
{
    r6 = 3;
    goto loc_80677060;
}

loc_80676FA4:
{
    r0 = 4;
    r0 = (r0 * 20);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + -28270));
}

loc_80676FB8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80676FC4;
    }
}

loc_80676FBC:
{
    r6 = 4;
    goto loc_80677060;
}

loc_80676FC4:
{
    r0 = 5;
    r0 = (r0 * 20);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + -28270));
}

loc_80676FD8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80676FE4;
    }
}

loc_80676FDC:
{
    r6 = 5;
    goto loc_80677060;
}

loc_80676FE4:
{
    r0 = 6;
    r0 = (r0 * 20);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + -28270));
}

loc_80676FF8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80677004;
    }
}

loc_80676FFC:
{
    r6 = 6;
    goto loc_80677060;
}

loc_80677004:
{
    r0 = 7;
    r0 = (r0 * 20);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + -28270));
}

loc_80677018:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80677024;
    }
}

loc_8067701C:
{
    r6 = 7;
    goto loc_80677060;
}

loc_80677024:
{
    r0 = 8;
    r0 = (r0 * 20);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + -28270));
}

loc_80677038:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80677044;
    }
}

loc_8067703C:
{
    r6 = 8;
    goto loc_80677060;
}

loc_80677044:
{
    r0 = 9;
    r0 = (r0 * 20);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + -28270));
}

loc_80677058:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80677060;
    }
}

loc_8067705C:
{
    r6 = 9;
}

loc_80677060:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(-1));
}

loc_80677064:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80677140;
    }
}

loc_80677068:
{
    r3 = 0x80000000u;
    r0 = 2;
    r5 = (r3 + -1);
    r4 = (r31 + 65536);
    r7 = 0;
    ctr = r0;
}

loc_80677080:
{
    r0 = (r7 & 65535);
    r0 = (r0 * 20);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r3 + -28268));
}

loc_80677094:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r5))) {
        goto loc_806770A0;
    }
}

loc_80677098:
{
    r5 = r0;
    r6 = r7;
}

loc_806770A0:
{
    r7 = (r7 + 1);
    r0 = (r7 & 65535);
    r0 = (r0 * 20);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r3 + -28268));
}

loc_806770B8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r5))) {
        goto loc_806770C4;
    }
}

loc_806770BC:
{
    r5 = r0;
    r6 = r7;
}

loc_806770C4:
{
    r7 = (r7 + 1);
    r0 = (r7 & 65535);
    r0 = (r0 * 20);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r3 + -28268));
}

loc_806770DC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r5))) {
        goto loc_806770E8;
    }
}

loc_806770E0:
{
    r5 = r0;
    r6 = r7;
}

loc_806770E8:
{
    r7 = (r7 + 1);
    r0 = (r7 & 65535);
    r0 = (r0 * 20);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r3 + -28268));
}

loc_80677100:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r5))) {
        goto loc_8067710C;
    }
}

loc_80677104:
{
    r5 = r0;
    r6 = r7;
}

loc_8067710C:
{
    r7 = (r7 + 1);
    r0 = (r7 & 65535);
    r0 = (r0 * 20);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r3 + -28268));
}

loc_80677124:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r5))) {
        goto loc_80677130;
    }
}

loc_80677128:
{
    r5 = r0;
    r6 = r7;
}

loc_80677130:
{
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80677080;
    }
}

loc_80677138:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(-1));
}

loc_8067713C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806771B8;
    }
}

loc_80677140:
{
    r0 = (r6 & 65535);
    r9 = 0;
    r3 = (r0 * 20);
    r5 = MemoryInline::FlatRead32((r28 + 88));
    r0 = (r31 + 65536);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r29 + 96));
    r10 = 0x808B0000u;
    r8 = MemoryInline::ReadResolved16(guest_range_1, 0u, (r29 + 80));
    r3 = (r0 + r3);
    guest_range_9 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 20u, false, true);
    MemoryInline::WriteResolved16(guest_range_9, 4u, (r1 + 16), static_cast<uint16_t>(r9));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r29 + 82));
    r10 = (r10 + 11588);
    MemoryInline::FlatWrite16((r3 + -28276), static_cast<uint16_t>(r8));
    r6 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r29 + 84));
    MemoryInline::FlatWrite8((r3 + -28274), static_cast<uint8_t>(r7));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r29 + 86));
    MemoryInline::FlatWrite16((r3 + -28272), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite8((r3 + -28270), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_9, 6u, (r1 + 18), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved16(guest_range_9, 8u, (r1 + 20), static_cast<uint16_t>(r9));
    MemoryInline::WriteResolved8(guest_range_9, 10u, (r1 + 22), static_cast<uint8_t>(r9));
    MemoryInline::FlatWrite32((r3 + -28268), r5);
    MemoryInline::WriteResolved32(guest_range_9, 0u, (r1 + 12), r10);
    MemoryInline::WriteResolved16(guest_range_9, 4u, (r1 + 16), static_cast<uint16_t>(r8));
    MemoryInline::WriteResolved8(guest_range_9, 6u, (r1 + 18), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved16(guest_range_9, 8u, (r1 + 20), static_cast<uint16_t>(r6));
    MemoryInline::WriteResolved8(guest_range_9, 10u, (r1 + 22), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_9, 12u, (r1 + 24), r5);
        MemoryInline::WriteResolved32(guest_range_9, 16u, (r1 + 28), r4);
    }
    MemoryInline::FlatWrite32((r3 + -28264), r4);
}

loc_806771B8:
{
    r27 = MemoryInline::FlatRead32((r1 + 172));
    r28 = MemoryInline::FlatRead32((r1 + 176));
    r29 = MemoryInline::FlatRead32((r1 + 180));
    r30 = MemoryInline::FlatRead32((r1 + 184));
    r31 = MemoryInline::FlatRead32((r1 + 188));
    r0 = MemoryInline::FlatRead32((r1 + 196));
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

// RECOMP_GUEST_ABI gpr_read=0xF8003FFB gpr_write=0xF8001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80676990 func_80676990 preserves=true fpr_mask=0x00000000
