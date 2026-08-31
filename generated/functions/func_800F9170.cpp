#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F9170(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_16 = 0;
    uint32_t r3_addr_17 = 0;
    uint32_t r3_addr_18 = 0;
    uint32_t r3_addr_19 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_20 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800F9170;

loc_800F9170:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r3 = (r1 + 8);
    r4 = (r13 + -31508);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(5), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800F91A0u;
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
    InvokeDirectCpu<0x80011A2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead32((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F91AC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F91F8;
    }
}

loc_800F91B0:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800F91C0u;
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
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F91C4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F91D0;
    }
}

loc_800F91C8:
{
    r0 = 0;
    goto loc_800F91E8;
}

loc_800F91D0:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800F91D8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F91E0;
    }
}

loc_800F91DC:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800F91E0:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800F91E8:
{
}

loc_800F91EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F91F8;
    }
}

loc_800F91F0:
{
    r5 = 0;
    goto loc_800F9218;
}

loc_800F91F8:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = 60;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r5 = 1;
    r3_addr_1 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_1, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800F9218:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800F921C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F9468;
    }
}

loc_800F9220:
{
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800F922C:
{
    r28 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F9288;
    }
}

loc_800F9234:
{
    r3 = 1;
    goto loc_800F92BC;
}

loc_800F9240:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800F9250u;
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
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F9254:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F9260;
    }
}

loc_800F9258:
{
    r0 = 0;
    goto loc_800F9278;
}

loc_800F9260:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800F9268:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F9270;
    }
}

loc_800F926C:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800F9270:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800F9278:
{
}

loc_800F927C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F9288;
    }
}

loc_800F9280:
{
    r3 = 0;
    goto loc_800F92BC;
}

loc_800F9288:
{
    r5 = MemoryInline::FlatRead32((r29 + 4));
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r28));
}

loc_800F9298:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F9240;
    }
}

loc_800F929C:
{
    r0 = MemoryInline::FlatRead32(r29);
    r4 = r30;
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 1;
    r0 = (r0 + r28);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800F92BC:
{
}

loc_800F92C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F9468;
    }
}

loc_800F92C4:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead32((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F92D0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F931C;
    }
}

loc_800F92D4:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800F92E4u;
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
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F92E8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F92F4;
    }
}

loc_800F92EC:
{
    r0 = 0;
    goto loc_800F930C;
}

loc_800F92F4:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800F92FC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F9304;
    }
}

loc_800F9300:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800F9304:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800F930C:
{
}

loc_800F9310:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F931C;
    }
}

loc_800F9314:
{
    r5 = 0;
    goto loc_800F933C;
}

loc_800F931C:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = 58;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r5 = 1;
    r3_addr_3 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_3, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800F933C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800F9340:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F9468;
    }
}

loc_800F9344:
{
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800F9350:
{
    r28 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F93AC;
    }
}

loc_800F9358:
{
    r3 = 1;
    goto loc_800F93E0;
}

loc_800F9364:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800F9374u;
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
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F9378:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F9384;
    }
}

loc_800F937C:
{
    r0 = 0;
    goto loc_800F939C;
}

loc_800F9384:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800F938C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F9394;
    }
}

loc_800F9390:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800F9394:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800F939C:
{
}

loc_800F93A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F93AC;
    }
}

loc_800F93A4:
{
    r3 = 0;
    goto loc_800F93E0;
}

loc_800F93AC:
{
    r5 = MemoryInline::FlatRead32((r29 + 4));
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r28));
}

loc_800F93BC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F9364;
    }
}

loc_800F93C0:
{
    r0 = MemoryInline::FlatRead32(r29);
    r4 = r31;
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 1;
    r0 = (r0 + r28);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800F93E0:
{
}

loc_800F93E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F9468;
    }
}

loc_800F93E8:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead32((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F93F4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F9440;
    }
}

loc_800F93F8:
{
    r28 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r28;
    ctx->lr = 0x800F9408u;
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
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F940C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F9418;
    }
}

loc_800F9410:
{
    r0 = 0;
    goto loc_800F9430;
}

loc_800F9418:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800F9420:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F9428;
    }
}

loc_800F9424:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800F9428:
{
    MemoryInline::FlatWrite32((r29 + 8), r28);
    r0 = 1;
}

loc_800F9430:
{
}

loc_800F9434:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F9440;
    }
}

loc_800F9438:
{
    r5 = 0;
    goto loc_800F9460;
}

loc_800F9440:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = 62;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r5 = 1;
    r3_addr_5 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_5, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800F9460:
{
}

loc_800F9464:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800F9470;
    }
}

loc_800F9468:
{
    r0 = 0;
    goto loc_800F9474;
}

loc_800F9470:
{
    r0 = 1;
}

loc_800F9474:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F9478:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F987C;
    }
}

loc_800F947C:
{
    r3 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800F9488:
{
    r28 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F94E4;
    }
}

loc_800F9490:
{
    r3 = 1;
    goto loc_800F9518;
}

loc_800F949C:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800F94ACu;
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
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F94B0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F94BC;
    }
}

loc_800F94B4:
{
    r0 = 0;
    goto loc_800F94D4;
}

loc_800F94BC:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800F94C4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F94CC;
    }
}

loc_800F94C8:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800F94CC:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800F94D4:
{
}

loc_800F94D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F94E4;
    }
}

loc_800F94DC:
{
    r3 = 0;
    goto loc_800F9518;
}

loc_800F94E4:
{
    r5 = MemoryInline::FlatRead32((r29 + 4));
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r28));
}

loc_800F94F4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F949C;
    }
}

loc_800F94F8:
{
    r0 = MemoryInline::FlatRead32(r29);
    r4 = (r1 + 8);
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 1;
    r0 = (r0 + r28);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800F9518:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800F951C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F987C;
    }
}

loc_800F9520:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead32((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F952C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F9578;
    }
}

loc_800F9530:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800F9540u;
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
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F9544:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F9550;
    }
}

loc_800F9548:
{
    r0 = 0;
    goto loc_800F9568;
}

loc_800F9550:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800F9558:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F9560;
    }
}

loc_800F955C:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800F9560:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800F9568:
{
}

loc_800F956C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F9578;
    }
}

loc_800F9570:
{
    r5 = 0;
    goto loc_800F9598;
}

loc_800F9578:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = 60;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r5 = 1;
    r3_addr_9 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_9, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800F9598:
{
}

loc_800F959C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800F9868;
    }
}

loc_800F95A0:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead32((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F95AC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F95F8;
    }
}

loc_800F95B0:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800F95C0u;
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
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F95C4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F95D0;
    }
}

loc_800F95C8:
{
    r0 = 0;
    goto loc_800F95E8;
}

loc_800F95D0:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800F95D8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F95E0;
    }
}

loc_800F95DC:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800F95E0:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800F95E8:
{
}

loc_800F95EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F95F8;
    }
}

loc_800F95F0:
{
    r5 = 0;
    goto loc_800F9618;
}

loc_800F95F8:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = 47;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r5 = 1;
    r3_addr_11 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_11, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800F9618:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800F961C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F9868;
    }
}

loc_800F9620:
{
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800F962C:
{
    r28 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F9688;
    }
}

loc_800F9634:
{
    r3 = 1;
    goto loc_800F96BC;
}

loc_800F9640:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800F9650u;
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
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F9654:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F9660;
    }
}

loc_800F9658:
{
    r0 = 0;
    goto loc_800F9678;
}

loc_800F9660:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800F9668:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F9670;
    }
}

loc_800F966C:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800F9670:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800F9678:
{
}

loc_800F967C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F9688;
    }
}

loc_800F9680:
{
    r3 = 0;
    goto loc_800F96BC;
}

loc_800F9688:
{
    r5 = MemoryInline::FlatRead32((r29 + 4));
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r28));
}

loc_800F9698:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F9640;
    }
}

loc_800F969C:
{
    r0 = MemoryInline::FlatRead32(r29);
    r4 = r30;
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 1;
    r0 = (r0 + r28);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800F96BC:
{
}

loc_800F96C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F9868;
    }
}

loc_800F96C4:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead32((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F96D0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F971C;
    }
}

loc_800F96D4:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800F96E4u;
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
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F96E8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F96F4;
    }
}

loc_800F96EC:
{
    r0 = 0;
    goto loc_800F970C;
}

loc_800F96F4:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800F96FC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F9704;
    }
}

loc_800F9700:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800F9704:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800F970C:
{
}

loc_800F9710:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F971C;
    }
}

loc_800F9714:
{
    r5 = 0;
    goto loc_800F973C;
}

loc_800F971C:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = 58;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r5 = 1;
    r3_addr_13 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_13, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800F973C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800F9740:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F9868;
    }
}

loc_800F9744:
{
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800F9750:
{
    r30 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F97AC;
    }
}

loc_800F9758:
{
    r3 = 1;
    goto loc_800F97E0;
}

loc_800F9764:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800F9774u;
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
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F9778:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F9784;
    }
}

loc_800F977C:
{
    r0 = 0;
    goto loc_800F979C;
}

loc_800F9784:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800F978C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F9794;
    }
}

loc_800F9790:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800F9794:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800F979C:
{
}

loc_800F97A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F97AC;
    }
}

loc_800F97A4:
{
    r3 = 0;
    goto loc_800F97E0;
}

loc_800F97AC:
{
    r5 = MemoryInline::FlatRead32((r29 + 4));
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r30));
}

loc_800F97BC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F9764;
    }
}

loc_800F97C0:
{
    r0 = MemoryInline::FlatRead32(r29);
    r4 = r31;
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 1;
    r0 = (r0 + r30);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800F97E0:
{
}

loc_800F97E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F9868;
    }
}

loc_800F97E8:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead32((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F97F4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F9840;
    }
}

loc_800F97F8:
{
    r27 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r27;
    ctx->lr = 0x800F9808u;
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
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F980C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F9818;
    }
}

loc_800F9810:
{
    r0 = 0;
    goto loc_800F9830;
}

loc_800F9818:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_800F9820:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F9828;
    }
}

loc_800F9824:
{
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800F9828:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
    r0 = 1;
}

loc_800F9830:
{
}

loc_800F9834:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F9840;
    }
}

loc_800F9838:
{
    r5 = 0;
    goto loc_800F9860;
}

loc_800F9840:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = 62;
    r0 = MemoryInline::FlatRead32((r29 + 4));
    r5 = 1;
    r3_addr_15 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_15, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_800F9860:
{
}

loc_800F9864:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800F9870;
    }
}

loc_800F9868:
{
    r0 = 0;
    goto loc_800F9874;
}

loc_800F9870:
{
    r0 = 1;
}

loc_800F9874:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F9878:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F9884;
    }
}

loc_800F987C:
{
    r3 = 0;
    goto loc_800F9888;
}

loc_800F9884:
{
    r3 = 1;
}

loc_800F9888:
{
    r11 = (r1 + 64);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800F9170 func_800F9170 preserves=true fpr_mask=0x00000000
