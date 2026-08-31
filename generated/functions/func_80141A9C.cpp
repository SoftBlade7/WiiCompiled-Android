#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80141A9C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80141A9C;

loc_80141A9C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x80330000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r4 = (r4 + 25208);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x80280000u;
    r31 = (r31 + 16624);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r0 = MemoryInline::FlatRead8((r4 + 10176));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_80141AD0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80141AF0;
    }
}

loc_80141AD4:
{
    r3 = 851968;
    r5 = MemoryInline::FlatRead8((r30 + 129));
    r6 = MemoryInline::FlatRead8((r30 + 118));
    r3 = (r3 + 3);
    r7 = MemoryInline::FlatRead8((r30 + 127));
    r4 = (r31 + 2220);
    ctx->lr = 0x80141AF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80131788u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80141AF0:
{
    r0 = MemoryInline::FlatRead8((r30 + 127));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80141AF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80141B04;
    }
}

loc_80141AFC:
{
    r3 = 1;
    goto loc_80141E60;
}

loc_80141B04:
{
    r0 = MemoryInline::FlatRead16((r30 + 24));
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_80141B0C:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80141B6C;
    }
}

loc_80141B10:
{
    r3 = (r30 + 28);
    ctx->lr = 0x80141B18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014E2C4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80141B1C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80141B48;
    }
}

loc_80141B20:
{
    r3 = 0x80340000u;
    r0 = MemoryInline::FlatRead8((r3 + -27840));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80141B2C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80141B40;
    }
}

loc_80141B30:
{
    r3 = 524288;
    r4 = (r31 + 2284);
    r3 = (r3 + 1);
    ctx->lr = 0x80141B40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80141B40:
{
    r3 = 3;
    goto loc_80141E60;
}

loc_80141B48:
{
    ctx->lr = 0x80141B4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014FE28u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80141B50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80141B5C;
    }
}

loc_80141B54:
{
    r3 = 3;
    goto loc_80141E60;
}

loc_80141B5C:
{
    r0 = 1;
    r3 = 1;
    MemoryInline::FlatWrite8((r30 + 128), static_cast<uint8_t>(r0));
    goto loc_80141E60;
}

loc_80141B6C:
{
    r0 = MemoryInline::FlatRead8((r30 + 118));
    r0 = (r0 & 8);
}

loc_80141B74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80141BFC;
    }
}

loc_80141B78:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_80141BFC;
    }
}

loc_80141B7C:
{
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead8((r3 + 10176));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_80141B8C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80141BA0;
    }
}

loc_80141B90:
{
    r3 = 851968;
    r4 = (r31 + 2320);
    r3 = (r3 + 3);
    ctx->lr = 0x80141BA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80141BA0:
{
    r29 = MemoryInline::FlatRead8((r30 + 127));
    r0 = 3;
    r3 = (r30 + 28);
    r4 = 0;
    MemoryInline::FlatWrite8((r30 + 127), static_cast<uint8_t>(r0));
    r5 = 2;
    r6 = 30;
    r7 = 0;
    ctx->lr = 0x80141BC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8013D2D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 255);
}

loc_80141BCC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_80141BDC;
    }
}

loc_80141BD0:
{
    MemoryInline::FlatWrite8((r30 + 127), static_cast<uint8_t>(r29));
    r0 = 0;
    goto loc_80141BE0;
}

loc_80141BDC:
{
    r0 = 1;
}

loc_80141BE0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80141BE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80141BF0;
    }
}

loc_80141BE8:
{
    r3 = 1;
    goto loc_80141E60;
}

loc_80141BF0:
{
    r0 = MemoryInline::FlatRead8((r30 + 118));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite8((r30 + 118), static_cast<uint8_t>(r0));
}

loc_80141BFC:
{
    r4 = MemoryInline::FlatRead8((r30 + 118));
    r0 = (r4 & 2);
}

loc_80141C04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80141C8C;
    }
}

loc_80141C08:
{
    r3 = MemoryInline::FlatRead8((r30 + 128));
}

loc_80141C10:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80141C20;
    }
}

loc_80141C14:
{
    r0 = MemoryInline::FlatRead8((r30 + 129));
    r0 = (r0 & 16);
}

loc_80141C1C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80141C34;
    }
}

loc_80141C20:
{
}

loc_80141C24:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80141C8C;
    }
}

loc_80141C28:
{
    r0 = MemoryInline::FlatRead8((r30 + 129));
    r0 = (r0 & 2);
}

loc_80141C30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80141C8C;
    }
}

loc_80141C34:
{
    r0 = MemoryInline::FlatRead16((r30 + 24));
}

loc_80141C3C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_80141C8C;
    }
}

loc_80141C40:
{
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead8((r3 + 10176));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_80141C50:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80141C64;
    }
}

loc_80141C54:
{
    r3 = 851968;
    r4 = (r31 + 2356);
    r3 = (r3 + 3);
    ctx->lr = 0x80141C64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80141C64:
{
    r0 = 1;
    r3 = MemoryInline::FlatRead16((r30 + 24));
    MemoryInline::FlatWrite8((r30 + 127), static_cast<uint8_t>(r0));
    ctx->lr = 0x80141C74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80144FE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80141C78:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80141C84;
    }
}

loc_80141C7C:
{
    r3 = 3;
    goto loc_80141E60;
}

loc_80141C84:
{
    r3 = 1;
    goto loc_80141E60;
}

loc_80141C8C:
{
    r0 = (r4 & 4);
}

loc_80141C90:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80141D30;
    }
}

loc_80141C94:
{
    r3 = MemoryInline::FlatRead8((r30 + 128));
}

loc_80141C9C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80141CAC;
    }
}

loc_80141CA0:
{
    r0 = MemoryInline::FlatRead8((r30 + 129));
    r0 = (r0 & 32);
}

loc_80141CA8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80141CC0;
    }
}

loc_80141CAC:
{
}

loc_80141CB0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80141D30;
    }
}

loc_80141CB4:
{
    r0 = MemoryInline::FlatRead8((r30 + 129));
    r0 = (r0 & 4);
}

loc_80141CBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80141D30;
    }
}

loc_80141CC0:
{
    r0 = MemoryInline::FlatRead16((r30 + 24));
}

loc_80141CC8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_80141D30;
    }
}

loc_80141CCC:
{
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead8((r3 + 10176));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_80141CDC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80141CF0;
    }
}

loc_80141CE0:
{
    r3 = 851968;
    r4 = (r31 + 2396);
    r3 = (r3 + 3);
    ctx->lr = 0x80141CF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80141CF0:
{
    r3 = MemoryInline::FlatRead16((r30 + 24));
    r4 = 1;
    ctx->lr = 0x80141CFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80145060u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 & 255);
}

loc_80141D00:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80141D0C;
    }
}

loc_80141D04:
{
    r3 = 0;
    goto loc_80141D18;
}

loc_80141D0C:
{
    r0 = 2;
    r3 = 1;
    MemoryInline::FlatWrite8((r30 + 127), static_cast<uint8_t>(r0));
}

loc_80141D18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80141D1C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80141D28;
    }
}

loc_80141D20:
{
    r3 = 3;
    goto loc_80141E60;
}

loc_80141D28:
{
    r3 = 1;
    goto loc_80141E60;
}

loc_80141D30:
{
    r0 = (r4 & 1);
}

loc_80141D34:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80141E00;
    }
}

loc_80141D38:
{
    r3 = MemoryInline::FlatRead8((r30 + 128));
}

loc_80141D40:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80141D50;
    }
}

loc_80141D44:
{
    r0 = MemoryInline::FlatRead8((r30 + 129));
    r0 = (r0 & 8);
}

loc_80141D4C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80141D64;
    }
}

loc_80141D50:
{
}

loc_80141D54:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80141E00;
    }
}

loc_80141D58:
{
    r0 = MemoryInline::FlatRead8((r30 + 129));
    r0 = (r0 & 1);
}

loc_80141D60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80141E00;
    }
}

loc_80141D64:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r0 = (r3 + 65536);
}

loc_80141D70:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_80141D7C;
    }
}

loc_80141D74:
{
    r0 = 0;
    goto loc_80141D98;
}

loc_80141D7C:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r0 = (r3 + 65536);
}

loc_80141D88:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_80141D94;
    }
}

loc_80141D8C:
{
    r0 = 0;
    goto loc_80141D98;
}

loc_80141D94:
{
    r0 = 1;
}

loc_80141D98:
{
}

loc_80141D9C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80141E00;
    }
}

loc_80141DA0:
{
    r3 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead8((r3 + 15));
}

loc_80141DAC:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(46))) {
        goto loc_80141E00;
    }
}

loc_80141DB0:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 28);
    r4 = (r3 & 31);
    r3 = (r30 + r0);
    r5 = 1;
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r3 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80141E00;
    }
}

loc_80141DD0:
{
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead8((r3 + 10176));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_80141DE0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80141DF4;
    }
}

loc_80141DE4:
{
    r3 = 851968;
    r4 = (r31 + 2432);
    r3 = (r3 + 3);
    ctx->lr = 0x80141DF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80141DF4:
{
    r3 = r30;
    ctx->lr = 0x80141DFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80141E7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80141E60;
}

loc_80141E00:
{
    r0 = MemoryInline::FlatRead8((r30 + 129));
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r0 = (r0 & 192);
    MemoryInline::FlatWrite8((r30 + 129), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 10176));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_80141E1C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80141E38;
    }
}

loc_80141E20:
{
    r3 = 851968;
    r5 = MemoryInline::FlatRead32((r30 + 20));
    r6 = MemoryInline::FlatRead32((r30 + 16));
    r3 = (r3 + 3);
    r4 = (r31 + 2472);
    ctx->lr = 0x80141E38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80131770u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80141E38:
{
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead8((r3 + 10176));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_80141E48:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80141E5C;
    }
}

loc_80141E4C:
{
    r3 = 851968;
    r4 = (r31 + 2512);
    r3 = (r3 + 3);
    ctx->lr = 0x80141E5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80141E5C:
{
    r3 = 0;
}

loc_80141E60:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80141A9C func_80141A9C preserves=true fpr_mask=0x00000000
