#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806479DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806479DC;

loc_806479DC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r3 = MemoryInline::FlatRead32((r4 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 552));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80647A0C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80647A18;
    }
}

loc_80647A10:
{
    r29 = 0;
    goto loc_80647A6C;
}

loc_80647A18:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 7896);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80647A68;
    }
}

loc_80647A24:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x80647A38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80647A50;
}

loc_80647A3C:
{
}

loc_80647A40:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_80647A4C;
    }
}

loc_80647A44:
{
    r0 = 1;
    goto loc_80647A5C;
}

loc_80647A4C:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80647A50:
{
}

loc_80647A54:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80647A3C;
    }
}

loc_80647A58:
{
    r0 = 0;
}

loc_80647A5C:
{
}

loc_80647A60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80647A68;
    }
}

loc_80647A64:
{
    goto loc_80647A6C;
}

loc_80647A68:
{
    r29 = 0;
}

loc_80647A6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80647A70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80647A7C;
    }
}

loc_80647A74:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 84), static_cast<uint8_t>(r0));
}

loc_80647A7C:
{
    r30 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 1028));
    ctx->lr = 0x80647A90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805D2968u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 6;
    MemoryInline::FlatWrite32((r31 + 88), r0);
    r3 = MemoryInline::FlatRead32((r30 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80647AA8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(125))) {
        goto loc_80647AB4;
    }
}

loc_80647AAC:
{
}

loc_80647AB0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(126))) {
        goto loc_80647B3C;
    }
}

loc_80647AB4:
{
}

loc_80647AB8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(161))) {
        goto loc_80647AC4;
    }
}

loc_80647ABC:
{
}

loc_80647AC0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(162))) {
        goto loc_80647B3C;
    }
}

loc_80647AC4:
{
    r29 = MemoryInline::FlatRead32((r3 + 604));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80647ACC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80647AD8;
    }
}

loc_80647AD0:
{
    r29 = 0;
    goto loc_80647B2C;
}

loc_80647AD8:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 7264);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80647B28;
    }
}

loc_80647AE4:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x80647AF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80647B10;
}

loc_80647AFC:
{
}

loc_80647B00:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_80647B0C;
    }
}

loc_80647B04:
{
    r0 = 1;
    goto loc_80647B1C;
}

loc_80647B0C:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80647B10:
{
}

loc_80647B14:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80647AFC;
    }
}

loc_80647B18:
{
    r0 = 0;
}

loc_80647B1C:
{
}

loc_80647B20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80647B28;
    }
}

loc_80647B24:
{
    goto loc_80647B2C;
}

loc_80647B28:
{
    r29 = 0;
}

loc_80647B2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80647B30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80647B3C;
    }
}

loc_80647B34:
{
    r3 = r29;
    ctx->lr = 0x80647B3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805E5FE8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80647B3C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 328));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80647B50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80647B5C;
    }
}

loc_80647B54:
{
    r29 = 0;
    goto loc_80647BB0;
}

loc_80647B5C:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 6992);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80647BAC;
    }
}

loc_80647B68:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x80647B7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80647B94;
}

loc_80647B80:
{
}

loc_80647B84:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_80647B90;
    }
}

loc_80647B88:
{
    r0 = 1;
    goto loc_80647BA0;
}

loc_80647B90:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80647B94:
{
}

loc_80647B98:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80647B80;
    }
}

loc_80647B9C:
{
    r0 = 0;
}

loc_80647BA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80647BA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80647BAC;
    }
}

loc_80647BA8:
{
    goto loc_80647BB0;
}

loc_80647BAC:
{
    r29 = 0;
}

loc_80647BB0:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 100));
    ctr = r12;
    ctx->lr = 0x80647BC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(130));
}

loc_80647BD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80647C88;
    }
}

loc_80647BDC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80647C20;
    }
}

loc_80647BE0:
{
}

loc_80647BE4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(94))) {
        goto loc_80647C08;
    }
}

loc_80647BE8:
{
}

loc_80647BEC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(88))) {
        goto loc_80647BFC;
    }
}

loc_80647BF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(85));
}

loc_80647BF4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80647C58;
    }
}

loc_80647BF8:
{
    goto loc_80647C88;
}

loc_80647BFC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(91));
}

loc_80647C00:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80647C60;
    }
}

loc_80647C04:
{
    goto loc_80647C88;
}

loc_80647C08:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(127));
}

loc_80647C0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80647C88;
    }
}

loc_80647C10:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80647C78;
    }
}

loc_80647C14:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(125));
}

loc_80647C18:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80647C70;
    }
}

loc_80647C1C:
{
    goto loc_80647C88;
}

loc_80647C20:
{
}

loc_80647C24:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(161))) {
        goto loc_80647C40;
    }
}

loc_80647C28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(135));
}

loc_80647C2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80647C80;
    }
}

loc_80647C30:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80647C88;
    }
}

loc_80647C34:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(133));
}

loc_80647C38:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80647C88;
    }
}

loc_80647C3C:
{
    goto loc_80647C68;
}

loc_80647C40:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(165));
}

loc_80647C44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80647C68;
    }
}

loc_80647C48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80647C88;
    }
}

loc_80647C4C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(163));
}

loc_80647C50:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80647C88;
    }
}

loc_80647C54:
{
    goto loc_80647C70;
}

loc_80647C58:
{
    r4 = 2033;
    goto loc_80647C8C;
}

loc_80647C60:
{
    r4 = 2034;
    goto loc_80647C8C;
}

loc_80647C68:
{
    r4 = 5050;
    goto loc_80647C8C;
}

loc_80647C70:
{
    r4 = 0;
    goto loc_80647C8C;
}

loc_80647C78:
{
    r4 = 4003;
    goto loc_80647C8C;
}

loc_80647C80:
{
    r4 = 6605;
    goto loc_80647C8C;
}

loc_80647C88:
{
    r4 = 0;
}

loc_80647C8C:
{
    r3 = r29;
    r5 = 0;
    ctx->lr = 0x80647C98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805BB210u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r4 = 4010;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x80647CB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = 80;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x80647CD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
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
// RECOMP_REGISTRATION base 0x806479DC func_806479DC preserves=true fpr_mask=0x00000000
