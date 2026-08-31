#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806A0FDC(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_28 = 0;
    uint32_t r0_rot_29 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_30 = 0;
    uint32_t r0_rot_31 = 0;
    uint32_t r0_rot_32 = 0;
    uint32_t r0_rot_33 = 0;
    uint32_t r0_rot_34 = 0;
    uint32_t r0_rot_35 = 0;
    uint32_t r0_rot_36 = 0;
    uint32_t r0_rot_37 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806A0FDC;

loc_806A0FDC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r6;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 41));
}

loc_806A1010:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806A1028;
    }
}

loc_806A1014:
{
    r4 = 0;
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 37), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 41), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 42), static_cast<uint8_t>(r4));
}

loc_806A1028:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    // inline leaf 0x80533090 (12 guest instruction(s))
}

loc_inl0_0x80533090:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2928));
}

loc_inl0_0x805330A0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(11))) {
        goto loc_inl0_0x805330B4;
    }
}

loc_inl0_0x805330A4:
{
}

loc_inl0_0x805330A8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(12))) {
        goto loc_inl0_0x805330B4;
    }
}

loc_inl0_0x805330AC:
{
    r3 = 0;
    goto loc_inl0_cont_80533090;
}

loc_inl0_0x805330B4:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (240 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(240) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
}

loc_inl0_cont_80533090:
{
    // end of inlined leaf 0x80533090
}

loc_806A1038:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(0))) {
        goto loc_806A107C;
    }
}

loc_806A103C:
{
    r0 = (r30 & 64);
}

loc_806A1040:
{
    r4 = 0;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806A1050;
    }
}

loc_806A1048:
{
    r0 = (r30 & 128);
}

loc_806A104C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806A1054;
    }
}

loc_806A1050:
{
    r4 = 1;
}

loc_806A1054:
{
    r3 = MemoryInline::FlatRead8((r28 + 37));
    r0 = (r30 & 256);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806A105C:
{
    r3 = (r3 | r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    MemoryInline::FlatWrite8((r28 + 37), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A107C;
    }
}

loc_806A1074:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 42), static_cast<uint8_t>(r0));
}

loc_806A107C:
{
    r0 = (r30 & 2);
}

loc_806A1080:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806A1124;
    }
}

loc_806A1084:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_806A1088:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A10A0;
    }
}

loc_806A108C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(1));
}

loc_806A1090:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A10B8;
    }
}

loc_806A1094:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(5));
}

loc_806A1098:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A10D4;
    }
}

loc_806A109C:
{
    goto loc_806A1110;
}

loc_806A10A0:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    r0 = 0;
    r3 = (r28 + r3);
    MemoryInline::FlatWrite32((r3 + 356), r0);
    MemoryInline::FlatWrite32((r3 + 388), r0);
    goto loc_806A1640;
}

loc_806A10B8:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r4 = 0;
    r3 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r4);
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 388), r0);
    goto loc_806A1640;
}

loc_806A10D4:
{
    r0 = MemoryInline::FlatRead8((r28 + 11));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806A10DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806A10FC;
    }
}

loc_806A10E0:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r4 = 0;
    r3 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r4);
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 388), r0);
    goto loc_806A1640;
}

loc_806A10FC:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r4 = -1;
    r3 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r4);
    goto loc_806A1640;
}

loc_806A1110:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r4 = -1;
    r3 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r4);
    goto loc_806A1640;
}

loc_806A1124:
{
    r0 = (r30 & 4);
}

loc_806A1128:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806A1238;
    }
}

loc_806A112C:
{
    r0 = MemoryInline::FlatRead8((r28 + 171));
}

loc_806A1134:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806A1238;
    }
}

loc_806A1138:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(7));
}

loc_806A113C:
{
    r4 = 1;
    MemoryInline::FlatWrite8((r28 + 172), static_cast<uint8_t>(r4));
    if (((cr & 0x40000000u) != 0)) {
        goto loc_806A1224;
    }
}

loc_806A1148:
{
    r3 = 0x808C0000u;
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = (r3 + 8004);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x806A1160u:
        goto loc_806A1160;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_806A1160:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r4 = 0;
    r3 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r4);
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 388), r0);
    goto loc_806A1640;
}

loc_806A1224:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r4 = -1;
    r3 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r4);
    goto loc_806A1640;
}

loc_806A1238:
{
    r0 = (r30 & 8);
}

loc_806A123C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806A134C;
    }
}

loc_806A1240:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_806A1244:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A127C;
    }
}

loc_806A1248:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(1));
}

loc_806A124C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A1298;
    }
}

loc_806A1250:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(5));
}

loc_806A1254:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A12B4;
    }
}

loc_806A1258:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(7));
}

loc_806A125C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A12D0;
    }
}

loc_806A1260:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(2));
}

loc_806A1264:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A12EC;
    }
}

loc_806A1268:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(6));
}

loc_806A126C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A1308;
    }
}

loc_806A1270:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(4));
}

loc_806A1274:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A131C;
    }
}

loc_806A1278:
{
    goto loc_806A1338;
}

loc_806A127C:
{
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_17 & -4);
    r4 = 0;
    r3 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r4);
    r0 = 7;
    MemoryInline::FlatWrite32((r3 + 388), r0);
    goto loc_806A1640;
}

loc_806A1298:
{
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & -4);
    r4 = 0;
    r3 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r4);
    r0 = 8;
    MemoryInline::FlatWrite32((r3 + 388), r0);
    goto loc_806A1640;
}

loc_806A12B4:
{
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & -4);
    r4 = 0;
    r3 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r4);
    r0 = 9;
    MemoryInline::FlatWrite32((r3 + 388), r0);
    goto loc_806A1640;
}

loc_806A12D0:
{
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_14 & -4);
    r4 = 0;
    r3 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r4);
    r0 = 10;
    MemoryInline::FlatWrite32((r3 + 388), r0);
    goto loc_806A1640;
}

loc_806A12EC:
{
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r4 = 5;
    r3 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r4);
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 388), r0);
    goto loc_806A1640;
}

loc_806A1308:
{
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r4 = 7;
    r3 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r4);
    goto loc_806A1640;
}

loc_806A131C:
{
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r4 = 1;
    r3 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r4);
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 388), r0);
    goto loc_806A1640;
}

loc_806A1338:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r4 = -1;
    r3 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r4);
    goto loc_806A1640;
}

loc_806A134C:
{
    r0 = (r30 & 16);
}

loc_806A1350:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806A145C;
    }
}

loc_806A1354:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_806A1358:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A1390;
    }
}

loc_806A135C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(1));
}

loc_806A1360:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A13AC;
    }
}

loc_806A1364:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(6));
}

loc_806A1368:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A13C8;
    }
}

loc_806A136C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(3));
}

loc_806A1370:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A13E4;
    }
}

loc_806A1374:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(5));
}

loc_806A1378:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A13F8;
    }
}

loc_806A137C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(2));
}

loc_806A1380:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A1414;
    }
}

loc_806A1384:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(4));
}

loc_806A1388:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A1430;
    }
}

loc_806A138C:
{
    goto loc_806A1448;
}

loc_806A1390:
{
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_24 & -4);
    r4 = 0;
    r3 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r4);
    r0 = 11;
    MemoryInline::FlatWrite32((r3 + 388), r0);
    goto loc_806A1640;
}

loc_806A13AC:
{
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_23 & -4);
    r4 = 0;
    r3 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r4);
    r0 = 12;
    MemoryInline::FlatWrite32((r3 + 388), r0);
    goto loc_806A1640;
}

loc_806A13C8:
{
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_22 & -4);
    r4 = 0;
    r3 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r4);
    r0 = 13;
    MemoryInline::FlatWrite32((r3 + 388), r0);
    goto loc_806A1640;
}

loc_806A13E4:
{
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_21 & -4);
    r4 = 6;
    r3 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r4);
    goto loc_806A1640;
}

loc_806A13F8:
{
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_20 & -4);
    r4 = 2;
    r3 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r4);
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 107), static_cast<uint8_t>(r0));
    goto loc_806A1640;
}

loc_806A1414:
{
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_19 & -4);
    r4 = 5;
    r3 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r4);
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 388), r0);
    goto loc_806A1640;
}

loc_806A1430:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & -4);
    r0 = 1;
    r3 = (r28 + r3);
    MemoryInline::FlatWrite32((r3 + 356), r0);
    MemoryInline::FlatWrite32((r3 + 388), r0);
    goto loc_806A1640;
}

loc_806A1448:
{
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_18 & -4);
    r4 = -1;
    r3 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r4);
    goto loc_806A1640;
}

loc_806A145C:
{
    r0 = (r30 & 1024);
}

loc_806A1460:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806A149C;
    }
}

loc_806A1464:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(7));
}

loc_806A1468:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806A1488;
    }
}

loc_806A146C:
{
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_25 & -4);
    r4 = 0;
    r3 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r4);
    r0 = 14;
    MemoryInline::FlatWrite32((r3 + 388), r0);
    goto loc_806A1640;
}

loc_806A1488:
{
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_26 & -4);
    r4 = -1;
    r3 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r4);
    goto loc_806A1640;
}

loc_806A149C:
{
    r4 = (r30 & 1);
}

loc_806A14A0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_806A1530;
    }
}

loc_806A14A4:
{
    r3 = MemoryInline::FlatRead8((r28 + 323));
}

loc_806A14AC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_806A14BC;
    }
}

loc_806A14B0:
{
    r0 = MemoryInline::FlatRead8((r28 + 329));
}

loc_806A14B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806A1530;
    }
}

loc_806A14BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(1));
}

loc_806A14C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806A151C;
    }
}

loc_806A14C4:
{
}

loc_806A14C8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806A14F4;
    }
}

loc_806A14CC:
{
    r0 = MemoryInline::FlatRead8((r28 + 11));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806A14D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806A1640;
    }
}

loc_806A14D8:
{
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_27 & -4);
    r4 = 0;
    r3 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r4);
    r0 = 15;
    MemoryInline::FlatWrite32((r3 + 388), r0);
    goto loc_806A1640;
}

loc_806A14F4:
{
    r0 = MemoryInline::FlatRead8((r28 + 329));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806A14FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A1640;
    }
}

loc_806A1500:
{
    r0_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_28 & -4);
    r4 = 0;
    r3 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r4);
    r0 = 15;
    MemoryInline::FlatWrite32((r3 + 388), r0);
    goto loc_806A1640;
}

loc_806A151C:
{
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_29 & -4);
    r4 = -1;
    r3 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r4);
    goto loc_806A1640;
}

loc_806A1530:
{
    r0 = (r30 & 8388608);
}

loc_806A1534:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806A1588;
    }
}

loc_806A1538:
{
    r0 = MemoryInline::FlatRead8((r28 + 323));
}

loc_806A1540:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806A1588;
    }
}

loc_806A1544:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(2));
}

loc_806A1548:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806A1574;
    }
}

loc_806A154C:
{
    r0 = MemoryInline::FlatRead8((r28 + 11));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806A1554:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806A1640;
    }
}

loc_806A1558:
{
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_30 & -4);
    r4 = 1;
    r3 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r4);
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 388), r0);
    goto loc_806A1640;
}

loc_806A1574:
{
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_31 & -4);
    r4 = -1;
    r3 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r4);
    goto loc_806A1640;
}

loc_806A1588:
{
    r0 = (r30 & 4194304);
}

loc_806A158C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806A15C8;
    }
}

loc_806A1590:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(7));
}

loc_806A1594:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806A15B4;
    }
}

loc_806A1598:
{
    r0_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_32 & -4);
    r4 = 5;
    r3 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r4);
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 388), r0);
    goto loc_806A1640;
}

loc_806A15B4:
{
    r0_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_33 & -4);
    r4 = -1;
    r3 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r4);
    goto loc_806A1640;
}

loc_806A15C8:
{
    r0 = (r30 & 2048);
}

loc_806A15CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806A15F8;
    }
}

loc_806A15D0:
{
    r0 = MemoryInline::FlatRead8((r28 + 171));
}

loc_806A15D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806A15F8;
    }
}

loc_806A15DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(3));
}

loc_806A15E0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_806A15F8;
    }
}

loc_806A15E4:
{
    r0_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_34 & -4);
    r4 = 3;
    r3 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r4);
    goto loc_806A1640;
}

loc_806A15F8:
{
}

loc_806A15FC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_806A161C;
    }
}

loc_806A1600:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(5));
}

loc_806A1604:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806A161C;
    }
}

loc_806A1608:
{
    r0_rot_35 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_35 & -4);
    r4 = 4;
    r3 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r4);
    goto loc_806A1640;
}

loc_806A161C:
{
    r0 = (r30 & 2097152);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806A1620:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806A1630;
    }
}

loc_806A1624:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 49), static_cast<uint8_t>(r0));
    goto loc_806A1640;
}

loc_806A1630:
{
    r0_rot_36 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_36 & -4);
    r4 = -1;
    r3 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 356), r4);
}

loc_806A1640:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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

// RECOMP_GUEST_ABI gpr_read=0xF000007B gpr_write=0xF000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x806A0FDC func_806A0FDC preserves=true fpr_mask=0x00000000
