#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80665C3C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80665C3C;

loc_80665C3C:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = r3;
    r3 = 107;
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    ctx->lr = 0x80665C60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8083D44Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = 0;
    MemoryInline::FlatWriteRam32((r3 + 2316), r30);
    MemoryInline::FlatWriteRam32((r3 + 2120), r30);
    r3 = 108;
    ctx->lr = 0x80665C74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808447CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWriteRam32((r3 + 1776), r30);
    r3 = 0x809C0000u;
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r30));
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    MemoryInline::FlatWriteRam32((r1 + 12), r30);
    ctx->lr = 0x80665C90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8066C8D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + -10456));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8052E454u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r3 = MemoryInline::FlatRead32((r30 + -10456));
    r0 = MemoryInline::FlatRead8((r4 + 23));
    MemoryInline::FlatWrite32((r3 + 5980), r0);
    r3 = MemoryInline::FlatRead32((r30 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 6016));
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r3 + 6016), r0);
    r3 = MemoryInline::FlatRead32((r30 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 6016));
    r0 = (r0 & -3);
    MemoryInline::FlatWrite32((r3 + 6016), r0);
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead16((r3 + 20));
}

loc_80665CD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80665CE8;
    }
}

loc_80665CDC:
{
}

loc_80665CE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80665CF8;
    }
}

loc_80665CE4:
{
    goto loc_80665D08;
}

loc_80665CE8:
{
    r3 = MemoryInline::FlatRead32((r30 + -10456));
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 5984), r0);
    goto loc_80665D14;
}

loc_80665CF8:
{
    r3 = MemoryInline::FlatRead32((r30 + -10456));
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 5984), r0);
    goto loc_80665D14;
}

loc_80665D08:
{
    r3 = MemoryInline::FlatRead32((r30 + -10456));
    r0 = 4;
    MemoryInline::FlatWrite32((r3 + 5984), r0);
}

loc_80665D14:
{
    r4 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 6016));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32((r3 + 6016), r0);
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead8((r3 + 68));
}

loc_80665D34:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80665D48;
    }
}

loc_80665D38:
{
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 5988), r0);
    goto loc_80665D54;
}

loc_80665D48:
{
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = 5;
    MemoryInline::FlatWrite32((r3 + 5988), r0);
}

loc_80665D54:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r5 = 9;
    r0 = MemoryInline::FlatRead8((r3 + 24));
}

loc_80665D64:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(9))) {
        goto loc_80665D6C;
    }
}

loc_80665D68:
{
    r5 = r0;
}

loc_80665D6C:
{
    r6 = 0x809C0000u;
    r4 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r6 + -10456));
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 6013), static_cast<uint8_t>(r5));
    r5 = MemoryInline::FlatRead32((r1 + 12));
    r3 = MemoryInline::FlatRead32((r6 + -10456));
    r5 = MemoryInline::FlatRead8((r5 + 22));
    MemoryInline::FlatWrite32((r3 + 5976), r5);
    r3 = MemoryInline::FlatRead32((r4 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 292), r0);
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r3 = MemoryInline::FlatRead16((r3 + 26));
}

loc_80665DA8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80665DC0;
    }
}

loc_80665DAC:
{
}

loc_80665DB0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80665DD4;
    }
}

loc_80665DB4:
{
}

loc_80665DB8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_80665DE4;
    }
}

loc_80665DBC:
{
    goto loc_80665DF4;
}

loc_80665DC0:
{
    r3 = MemoryInline::FlatRead32((r4 + 7736));
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 116), r0);
    goto loc_80665DF4;
}

loc_80665DD4:
{
    r3 = MemoryInline::FlatRead32((r4 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 116), r0);
    goto loc_80665DF4;
}

loc_80665DE4:
{
    r3 = MemoryInline::FlatRead32((r4 + 7736));
    r0 = 2;
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 116), r0);
}

loc_80665DF4:
{
    r6 = 0x809C0000u;
    r0 = 11;
    r3 = MemoryInline::FlatRead32((r6 + -10456));
    r5 = 0;
    r7 = 0;
    r4 = 5;
    MemoryInline::FlatWrite32((r3 + 3112), r5);
    r5 = 1;
    ctr = r0;
}

loc_80665E18:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = 11;
    r3 = MemoryInline::FlatRead16((r3 + 38));
}

loc_80665E28:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(11))) {
        goto loc_80665E30;
    }
}

loc_80665E2C:
{
    r0 = r3;
}

loc_80665E30:
{
    r0 = (r0 & 65535);
}

loc_80665E38:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r0))) {
        goto loc_80665E58;
    }
}

loc_80665E3C:
{
    r0 = (r7 + 1);
    r3 = MemoryInline::FlatRead32((r6 + -10456));
    r0 = (r0 & 255);
    r0 = (r0 * 240);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 3112), r5);
    goto loc_80665E70;
}

loc_80665E58:
{
    r0 = (r7 + 1);
    r3 = MemoryInline::FlatRead32((r6 + -10456));
    r0 = (r0 & 255);
    r0 = (r0 * 240);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 3112), r4);
}

loc_80665E70:
{
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80665E18;
    }
}

loc_80665E78:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 444));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80665E8C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80665E98;
    }
}

loc_80665E90:
{
    r29 = 0;
    goto loc_80665EEC;
}

loc_80665E98:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 17720);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80665EE8;
    }
}

loc_80665EA4:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x80665EB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80665ED0;
}

loc_80665EBC:
{
}

loc_80665EC0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_80665ECC;
    }
}

loc_80665EC4:
{
    r0 = 1;
    goto loc_80665EDC;
}

loc_80665ECC:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80665ED0:
{
}

loc_80665ED4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80665EBC;
    }
}

loc_80665ED8:
{
    r0 = 0;
}

loc_80665EDC:
{
}

loc_80665EE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80665EE8;
    }
}

loc_80665EE4:
{
    goto loc_80665EEC;
}

loc_80665EE8:
{
    r29 = 0;
}

loc_80665EEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80665EF0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80665EFC;
    }
}

loc_80665EF4:
{
    r29 = 0;
    goto loc_80665F50;
}

loc_80665EFC:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 17896);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80665F4C;
    }
}

loc_80665F08:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x80665F1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80665F34;
}

loc_80665F20:
{
}

loc_80665F24:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_80665F30;
    }
}

loc_80665F28:
{
    r0 = 1;
    goto loc_80665F40;
}

loc_80665F30:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80665F34:
{
}

loc_80665F38:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80665F20;
    }
}

loc_80665F3C:
{
    r0 = 0;
}

loc_80665F40:
{
}

loc_80665F44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80665F4C;
    }
}

loc_80665F48:
{
    goto loc_80665F50;
}

loc_80665F4C:
{
    r29 = 0;
}

loc_80665F50:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead8((r3 + 62));
}

loc_80665F5C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80665F84;
    }
}

loc_80665F60:
{
    r0 = MemoryInline::FlatRead8((r3 + 68));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80665F68:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80665F78;
    }
}

loc_80665F6C:
{
    r0 = 136;
    MemoryInline::FlatWrite32((r29 + 1736), r0);
    goto loc_80665FA4;
}

loc_80665F78:
{
    r0 = 137;
    MemoryInline::FlatWrite32((r29 + 1736), r0);
    goto loc_80665FA4;
}

loc_80665F84:
{
    r0 = MemoryInline::FlatRead8((r3 + 68));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80665F8C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80665F9C;
    }
}

loc_80665F90:
{
    r0 = 45;
    MemoryInline::FlatWrite32((r29 + 1736), r0);
    goto loc_80665FA4;
}

loc_80665F9C:
{
    r0 = 29;
    MemoryInline::FlatWrite32((r29 + 1736), r0);
}

loc_80665FA4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    ctx->lr = 0x80665FB4u;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805E39D8u>(ctx);
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
    ctr = ctx->ctr;
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = 107;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x80665FD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80665C3C func_80665C3C preserves=true fpr_mask=0x00000000
