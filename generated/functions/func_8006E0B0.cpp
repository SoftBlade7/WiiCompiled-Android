#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8006E0B0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8006E0B0;

loc_8006E0B0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_8006E0BC:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r6;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(1))) {
        goto loc_8006E100;
    }
}

loc_8006E0D8:
{
}

loc_8006E0DC:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(2))) {
        goto loc_8006E1F0;
    }
}

loc_8006E0E0:
{
}

loc_8006E0E4:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(4))) {
        goto loc_8006E280;
    }
}

loc_8006E0E8:
{
    r0 = (r4 + -65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_8006E0F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006E364;
    }
}

loc_8006E0F4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8006E0F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006E370;
    }
}

loc_8006E0FC:
{
    goto loc_8006E374;
}

loc_8006E100:
{
    r4 = MemoryInline::FlatRead32((r3 + 212));
    r6 = r5;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8006E10C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006E148;
    }
}

loc_8006E110:
{
    r0 = MemoryInline::FlatRead16((r3 + 218));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006E118:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006E148;
    }
}

loc_8006E11C:
{
    r0 = MemoryInline::FlatRead8((r3 + 216));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006E124:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006E148;
    }
}

loc_8006E128:
{
    r12 = MemoryInline::FlatRead32(r4);
    r3 = r4;
    r5 = r30;
    r7 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    r4 = 1;
    ctr = r12;
    ctx->lr = 0x8006E148u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8006E148:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = r31;
    r5 = (r1 + 8);
    r12 = MemoryInline::FlatRead32((r12 + 48));
    ctr = r12;
    ctx->lr = 0x8006E164u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 212));
    r6 = MemoryInline::FlatRead32((r1 + 8));
}

loc_8006E170:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8006E1A8;
    }
}

loc_8006E174:
{
    r0 = MemoryInline::FlatRead16((r30 + 218));
    r0 = (r0 & 1);
}

loc_8006E17C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8006E1A8;
    }
}

loc_8006E180:
{
    r0 = MemoryInline::FlatRead8((r30 + 216));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006E188:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006E1A8;
    }
}

loc_8006E18C:
{
    r12 = MemoryInline::FlatRead32(r3);
    r5 = r30;
    r7 = r31;
    r4 = 2;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8006E1A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8006E1A8:
{
    r3 = MemoryInline::FlatRead32((r30 + 212));
    r6 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8006E1B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006E374;
    }
}

loc_8006E1B8:
{
    r0 = MemoryInline::FlatRead16((r30 + 218));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006E1C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006E374;
    }
}

loc_8006E1C4:
{
    r0 = MemoryInline::FlatRead8((r30 + 216));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006E1CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006E374;
    }
}

loc_8006E1D0:
{
    r12 = MemoryInline::FlatRead32(r3);
    r5 = r30;
    r7 = r31;
    r4 = 4;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8006E1ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8006E374;
}

loc_8006E1F0:
{
    r4 = MemoryInline::FlatRead32((r3 + 212));
    r6 = r5;
}

loc_8006E1FC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8006E238;
    }
}

loc_8006E200:
{
    r0 = MemoryInline::FlatRead16((r3 + 218));
    r0 = (r0 & 2);
}

loc_8006E208:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8006E238;
    }
}

loc_8006E20C:
{
    r0 = MemoryInline::FlatRead8((r3 + 216));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006E214:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006E238;
    }
}

loc_8006E218:
{
    r12 = MemoryInline::FlatRead32(r4);
    r3 = r4;
    r5 = r30;
    r7 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    r4 = 1;
    ctr = r12;
    ctx->lr = 0x8006E238u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8006E238:
{
    r3 = MemoryInline::FlatRead32((r30 + 212));
    r6 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8006E244:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006E374;
    }
}

loc_8006E248:
{
    r0 = MemoryInline::FlatRead16((r30 + 218));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006E250:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006E374;
    }
}

loc_8006E254:
{
    r0 = MemoryInline::FlatRead8((r30 + 216));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006E25C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006E374;
    }
}

loc_8006E260:
{
    r12 = MemoryInline::FlatRead32(r3);
    r5 = r30;
    r7 = r31;
    r4 = 4;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8006E27Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8006E374;
}

loc_8006E280:
{
    r4 = MemoryInline::FlatRead32((r3 + 212));
    r6 = r5;
}

loc_8006E28C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8006E2C8;
    }
}

loc_8006E290:
{
    r0 = MemoryInline::FlatRead16((r3 + 218));
    r0 = (r0 & 4);
}

loc_8006E298:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8006E2C8;
    }
}

loc_8006E29C:
{
    r0 = MemoryInline::FlatRead8((r3 + 216));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006E2A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006E2C8;
    }
}

loc_8006E2A8:
{
    r12 = MemoryInline::FlatRead32(r4);
    r3 = r4;
    r5 = r30;
    r7 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    r4 = 1;
    ctr = r12;
    ctx->lr = 0x8006E2C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8006E2C8:
{
    r3 = r31;
    r4 = (r30 + 60);
    r5 = (r30 + 108);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    r3 = MemoryInline::FlatRead32((r30 + 212));
    r6 = MemoryInline::FlatRead32((r1 + 8));
}

loc_8006E2E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8006E31C;
    }
}

loc_8006E2E8:
{
    r0 = MemoryInline::FlatRead16((r30 + 218));
    r0 = (r0 & 4);
}

loc_8006E2F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8006E31C;
    }
}

loc_8006E2F4:
{
    r0 = MemoryInline::FlatRead8((r30 + 216));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006E2FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006E31C;
    }
}

loc_8006E300:
{
    r12 = MemoryInline::FlatRead32(r3);
    r5 = r30;
    r7 = r31;
    r4 = 2;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8006E31Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8006E31C:
{
    r3 = MemoryInline::FlatRead32((r30 + 212));
    r6 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8006E328:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006E374;
    }
}

loc_8006E32C:
{
    r0 = MemoryInline::FlatRead16((r30 + 218));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006E334:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006E374;
    }
}

loc_8006E338:
{
    r0 = MemoryInline::FlatRead8((r30 + 216));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006E340:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006E374;
    }
}

loc_8006E344:
{
    r12 = MemoryInline::FlatRead32(r3);
    r5 = r30;
    r7 = r31;
    r4 = 4;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8006E360u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8006E374;
}

loc_8006E364:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_8006E374;
}

loc_8006E370:
{
    MemoryInline::FlatWrite32((r3 + 4), r6);
}

loc_8006E374:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8006E0B0 func_8006E0B0 preserves=true fpr_mask=0x00000000
