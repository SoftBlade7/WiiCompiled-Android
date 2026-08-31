#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80125698(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r30_addr_5 = 0;
    uint32_t r30_addr_6 = 0;
    uint32_t r30_addr_7 = 0;
    uint32_t r30_addr_8 = 0;
    uint32_t r30_addr_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r6_rot_0 = 0;

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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80125698;

loc_80125698:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    MemoryInline::FlatWriteRam32((r1 + 92), r31);
    r31 = 0x802F0000u;
    r31 = (r31 + 16832);
    MemoryInline::FlatWriteRam32((r1 + 88), r30);
    r10 = (r31 + 0);
    r6 = (r31 + 4608);
    r5 = (r31 + 9216);
    MemoryInline::FlatWriteRam32((r1 + 84), r29);
    r7 = MemoryInline::FlatRead32((r13 + -26464));
    r9 = MemoryInline::FlatRead32((r13 + -26468));
    r3 = (r7 * 1536);
    r0 = MemoryInline::FlatRead32((r13 + -26416));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801256D8:
{
    r4 = (r10 + r3);
    r3 = (r6 + r3);
    MemoryInline::FlatWrite32((r13 + -26440), r4);
    r8 = (r9 * 1536);
    MemoryInline::FlatWrite32((r13 + -26448), r3);
    r4 = (r7 * 1152);
    r7 = (r10 + r8);
    r6 = (r6 + r8);
    MemoryInline::FlatWrite32((r13 + -26444), r7);
    r3 = (r9 * 1152);
    r4 = (r5 + r4);
    MemoryInline::FlatWrite32((r13 + -26452), r6);
    r0 = (r5 + r3);
    MemoryInline::FlatWrite32((r13 + -26456), r4);
    MemoryInline::FlatWrite32((r13 + -26460), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801257C4;
    }
}

loc_80125718:
{
    r0 = MemoryInline::FlatRead32((r13 + -26384));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80125720:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80125778;
    }
}

loc_80125724:
{
    r0 = MemoryInline::FlatRead32((r13 + -26472));
    r4 = 1536;
    r0 = (r0 * 1536);
    r3 = (r10 + r0);
    r6 = (r3 + 384);
    MemoryInline::FlatWriteRam32((r1 + 64), r3);
    r5 = (r3 + 768);
    r0 = (r3 + 1152);
    MemoryInline::FlatWriteRam32((r1 + 68), r6);
    MemoryInline::FlatWriteRam32((r1 + 72), r5);
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A1600u>(ctx);
    r12 = MemoryInline::FlatRead32((r13 + -26416));
    r3 = (r1 + 64);
    r4 = MemoryInline::FlatRead32((r13 + -26428));
    ctr = r12;
    ctx->lr = 0x80125768u;
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
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 64));
    r4 = 1536;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A168Cu>(ctx);
    goto loc_80125808;
}

loc_80125778:
{
    r0 = MemoryInline::FlatRead32((r13 + -26472));
    r4 = 1152;
    r0 = (r0 * 1536);
    r3 = (r10 + r0);
    r5 = (r3 + 384);
    MemoryInline::FlatWriteRam32((r1 + 48), r3);
    r0 = (r3 + 768);
    MemoryInline::FlatWriteRam32((r1 + 52), r5);
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A1600u>(ctx);
    r12 = MemoryInline::FlatRead32((r13 + -26416));
    r3 = (r1 + 48);
    r4 = MemoryInline::FlatRead32((r13 + -26428));
    ctr = r12;
    ctx->lr = 0x801257B4u;
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
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 48));
    r4 = 1152;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A168Cu>(ctx);
    goto loc_80125808;
}

loc_801257C4:
{
    r3 = MemoryInline::FlatRead32((r13 + -26472));
    r30 = (r13 + -26404);
    r30_addr_1 = (r30 + r3);
    r0 = MemoryInline::FlatRead8(r30_addr_1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801257D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80125808;
    }
}

loc_801257D8:
{
    r0 = (r3 * 1536);
    r4 = 0;
    r5 = 1536;
    r29 = (r10 + r0);
    r3 = r29;
    ctx->lr = 0x801257F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r29;
    r4 = 1536;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A162Cu>(ctx);
    r0 = MemoryInline::FlatRead32((r13 + -26472));
    r3 = 0;
    r30_addr_2 = (r30 + r0);
    MemoryInline::FlatWrite8(r30_addr_2, static_cast<uint8_t>(r3));
}

loc_80125808:
{
    r0 = MemoryInline::FlatRead32((r13 + -26420));
}

loc_80125810:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801258C8;
    }
}

loc_80125814:
{
    r0 = MemoryInline::FlatRead32((r13 + -26384));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8012581C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80125878;
    }
}

loc_80125820:
{
    r3 = MemoryInline::FlatRead32((r13 + -26472));
    r0 = (r31 + 4608);
    r4 = 1536;
    r3 = (r3 * 1536);
    r3 = (r0 + r3);
    r6 = (r3 + 384);
    MemoryInline::FlatWriteRam32((r1 + 32), r3);
    r5 = (r3 + 768);
    r0 = (r3 + 1152);
    MemoryInline::FlatWriteRam32((r1 + 36), r6);
    MemoryInline::FlatWriteRam32((r1 + 40), r5);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A1600u>(ctx);
    r12 = MemoryInline::FlatRead32((r13 + -26420));
    r3 = (r1 + 32);
    r4 = MemoryInline::FlatRead32((r13 + -26432));
    ctr = r12;
    ctx->lr = 0x80125868u;
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
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 32));
    r4 = 1536;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A168Cu>(ctx);
    goto loc_80125910;
}

loc_80125878:
{
    r3 = MemoryInline::FlatRead32((r13 + -26472));
    r0 = (r31 + 4608);
    r4 = 1152;
    r3 = (r3 * 1536);
    r3 = (r0 + r3);
    r5 = (r3 + 384);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r0 = (r3 + 768);
    MemoryInline::FlatWriteRam32((r1 + 24), r5);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A1600u>(ctx);
    r12 = MemoryInline::FlatRead32((r13 + -26420));
    r3 = (r1 + 20);
    r4 = MemoryInline::FlatRead32((r13 + -26432));
    ctr = r12;
    ctx->lr = 0x801258B8u;
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
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 20));
    r4 = 1152;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A168Cu>(ctx);
    goto loc_80125910;
}

loc_801258C8:
{
    r3 = MemoryInline::FlatRead32((r13 + -26472));
    r30 = (r13 + -26408);
    r30_addr_4 = (r30 + r3);
    r0 = MemoryInline::FlatRead8(r30_addr_4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801258D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80125910;
    }
}

loc_801258DC:
{
    r3 = (r3 * 1536);
    r0 = (r31 + 4608);
    r4 = 0;
    r5 = 1536;
    r29 = (r0 + r3);
    r3 = r29;
    ctx->lr = 0x801258F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r29;
    r4 = 1536;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A162Cu>(ctx);
    r0 = MemoryInline::FlatRead32((r13 + -26472));
    r3 = 0;
    r30_addr_5 = (r30 + r0);
    MemoryInline::FlatWrite8(r30_addr_5, static_cast<uint8_t>(r3));
}

loc_80125910:
{
    r0 = MemoryInline::FlatRead32((r13 + -26424));
}

loc_80125918:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80125978;
    }
}

loc_8012591C:
{
    r0 = MemoryInline::FlatRead32((r13 + -26384));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80125924:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80125978;
    }
}

loc_80125928:
{
    r3 = MemoryInline::FlatRead32((r13 + -26472));
    r0 = (r31 + 9216);
    r4 = 1152;
    r3 = (r3 * 1152);
    r3 = (r0 + r3);
    r5 = (r3 + 384);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r0 = (r3 + 768);
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A1600u>(ctx);
    r12 = MemoryInline::FlatRead32((r13 + -26424));
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r13 + -26436));
    ctr = r12;
    ctx->lr = 0x80125968u;
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
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = 1152;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A168Cu>(ctx);
    goto loc_801259CC;
}

loc_80125978:
{
    r0 = MemoryInline::FlatRead32((r13 + -26424));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80125980:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801259CC;
    }
}

loc_80125984:
{
    r3 = MemoryInline::FlatRead32((r13 + -26472));
    r30 = (r13 + -26412);
    r30_addr_7 = (r30 + r3);
    r0 = MemoryInline::FlatRead8(r30_addr_7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80125994:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801259CC;
    }
}

loc_80125998:
{
    r3 = (r3 * 1152);
    r0 = (r31 + 9216);
    r4 = 0;
    r5 = 1152;
    r29 = (r0 + r3);
    r3 = r29;
    ctx->lr = 0x801259B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r29;
    r4 = 1152;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A162Cu>(ctx);
    r0 = MemoryInline::FlatRead32((r13 + -26472));
    r3 = 0;
    r30_addr_8 = (r30 + r0);
    MemoryInline::FlatWrite8(r30_addr_8, static_cast<uint8_t>(r3));
}

loc_801259CC:
{
    r3 = -1431633920;
    r5 = MemoryInline::FlatRead32((r13 + -26464));
    r0 = (r3 + -21845);
    r3 = MemoryInline::FlatRead32((r13 + -26472));
    r4 = MemoryInline::FlatRead32((r13 + -26468));
    r7 = (r5 + 1);
    r3 = (r3 + 1);
    r5 = (r4 + 1);
    r6 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r7)) >> 32));
    r4 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(31));
    r6 = (r6_rot_0 & 2147483647);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r3)) >> 32));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r4 = (r4_rot_0 & 2147483647);
    r6 = (r6 * 3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 2147483647);
    r4 = (r4 * 3);
    r6 = (r7 - r6);
    MemoryInline::FlatWrite32((r13 + -26464), r6);
    r0 = (r0 * 3);
    r4 = (r5 - r4);
    MemoryInline::FlatWrite32((r13 + -26468), r4);
    r0 = (r3 - r0);
    MemoryInline::FlatWrite32((r13 + -26472), r0);
    r31 = MemoryInline::FlatRead32((r1 + 92));
    r30 = MemoryInline::FlatRead32((r1 + 88));
    r29 = MemoryInline::FlatRead32((r1 + 84));
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
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
// RECOMP_REGISTRATION base 0x80125698 func_80125698 preserves=true fpr_mask=0x00000000
