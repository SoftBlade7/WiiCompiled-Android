#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80148904(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r6_addr_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80148904;

loc_80148904:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r6 = 0x80340000u;
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 4;
    r6 = (r6 + -28872);
    r9 = 0;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x80280000u;
    r31 = (r31 + 20664);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    ctr = r0;
}

loc_8014894C:
{
    r0 = (r30 & 255);
    r0 = (r0 * 52);
    r7 = (r6 + r0);
    r6_addr_2 = (r6 + r0);
    r0 = MemoryInline::FlatRead8(r6_addr_2);
}

loc_80148960:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80148988;
    }
}

loc_80148964:
{
    r0 = MemoryInline::FlatRead8((r7 + 16));
}

loc_8014896C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80148988;
    }
}

loc_80148970:
{
    r0 = MemoryInline::FlatRead16((r7 + 20));
}

loc_80148978:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80148A50;
    }
}

loc_8014897C:
{
    r0 = MemoryInline::FlatRead16((r7 + 22));
}

loc_80148984:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80148A50;
    }
}

loc_80148988:
{
    r30 = (r30 + 1);
    r0 = (r30 & 255);
    r0 = (r0 * 52);
    r7 = (r6 + r0);
    r6_addr_3 = (r6 + r0);
    r0 = MemoryInline::FlatRead8(r6_addr_3);
}

loc_801489A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801489C8;
    }
}

loc_801489A4:
{
    r0 = MemoryInline::FlatRead8((r7 + 16));
}

loc_801489AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801489C8;
    }
}

loc_801489B0:
{
    r0 = MemoryInline::FlatRead16((r7 + 20));
}

loc_801489B8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80148A50;
    }
}

loc_801489BC:
{
    r0 = MemoryInline::FlatRead16((r7 + 22));
}

loc_801489C4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80148A50;
    }
}

loc_801489C8:
{
    r30 = (r30 + 1);
    r0 = (r30 & 255);
    r0 = (r0 * 52);
    r7 = (r6 + r0);
    r6_addr_4 = (r6 + r0);
    r0 = MemoryInline::FlatRead8(r6_addr_4);
}

loc_801489E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80148A08;
    }
}

loc_801489E4:
{
    r0 = MemoryInline::FlatRead8((r7 + 16));
}

loc_801489EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80148A08;
    }
}

loc_801489F0:
{
    r0 = MemoryInline::FlatRead16((r7 + 20));
}

loc_801489F8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80148A50;
    }
}

loc_801489FC:
{
    r0 = MemoryInline::FlatRead16((r7 + 22));
}

loc_80148A04:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80148A50;
    }
}

loc_80148A08:
{
    r30 = (r30 + 1);
    r0 = (r30 & 255);
    r0 = (r0 * 52);
    r7 = (r6 + r0);
    r6_addr_5 = (r6 + r0);
    r0 = MemoryInline::FlatRead8(r6_addr_5);
}

loc_80148A20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80148A48;
    }
}

loc_80148A24:
{
    r0 = MemoryInline::FlatRead8((r7 + 16));
}

loc_80148A2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80148A48;
    }
}

loc_80148A30:
{
    r0 = MemoryInline::FlatRead16((r7 + 20));
}

loc_80148A38:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80148A50;
    }
}

loc_80148A3C:
{
    r0 = MemoryInline::FlatRead16((r7 + 22));
}

loc_80148A44:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80148A50;
    }
}

loc_80148A48:
{
    r30 = (r30 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8014894C;
    }
}

loc_80148A50:
{
    r0 = (r30 & 255);
}

loc_80148A58:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(16))) {
        goto loc_80148A70;
    }
}

loc_80148A5C:
{
    r0 = (r0 * 52);
    r5 = 0x80340000u;
    r5 = (r5 + -28872);
    r9 = (r5 + r0);
    r5 = (r9 + 16);
}

loc_80148A70:
{
}

loc_80148A74:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80148AB4;
    }
}

loc_80148A78:
{
    r0 = MemoryInline::FlatRead8((r5 + 1));
    r0 = (r0 & 1);
}

loc_80148A80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80148AB4;
    }
}

loc_80148A84:
{
    r6 = MemoryInline::FlatRead16((r5 + 4));
}

loc_80148A8C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r6))) {
        goto loc_80148A9C;
    }
}

loc_80148A90:
{
    r0 = MemoryInline::FlatRead8(r5);
}

loc_80148A98:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80148AB4;
    }
}

loc_80148A9C:
{
    r0 = MemoryInline::FlatRead16((r5 + 6));
}

loc_80148AA4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80148AE0;
    }
}

loc_80148AA8:
{
    r0 = MemoryInline::FlatRead8(r5);
}

loc_80148AB0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80148AE0;
    }
}

loc_80148AB4:
{
    r3 = 0x80340000u;
    r3 = (r3 + -28872);
    r0 = MemoryInline::FlatRead8((r3 + 1025));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80148AC4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80148C2C;
    }
}

loc_80148AC8:
{
    r3 = 1966080;
    r5 = r28;
    r3 = (r3 + 1);
    r4 = (r31 + 444);
    ctx->lr = 0x80148ADCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80131758u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80148C2C;
}

loc_80148AE0:
{
}

loc_80148AE4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80148BA8;
    }
}

loc_80148AE8:
{
}

loc_80148AEC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r6))) {
        goto loc_80148AFC;
    }
}

loc_80148AF0:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r0));
    goto loc_80148B04;
}

loc_80148AFC:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r5 + 6), static_cast<uint16_t>(r0));
}

loc_80148B04:
{
    r3 = 0x80340000u;
    r4 = (r30 & 255);
    r3 = (r3 + -28872);
    r0 = MemoryInline::FlatRead8((r3 + 1025));
    r4 = (r4 * 52);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_80148B1C:
{
    r28 = (r3 + r4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80148B34;
    }
}

loc_80148B24:
{
    r3 = 1966080;
    r4 = (r31 + 68);
    r3 = (r3 + 3);
    ctx->lr = 0x80148B34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80131740u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80148B34:
{
    r0 = MemoryInline::FlatRead16((r28 + 20));
}

loc_80148B3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80148B4C;
    }
}

loc_80148B40:
{
    r0 = MemoryInline::FlatRead16((r28 + 22));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80148B48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80148B78;
    }
}

loc_80148B4C:
{
    r0 = 5;
    MemoryInline::FlatWrite8((r28 + 16), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead16((r28 + 22));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80148B5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80148B64;
    }
}

loc_80148B60:
{
    ctx->lr = 0x80148B64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8014A7D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80148B64:
{
    r3 = MemoryInline::FlatRead16((r28 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80148B6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80148B80;
    }
}

loc_80148B70:
{
    ctx->lr = 0x80148B74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8014A7D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80148B80;
}

loc_80148B78:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 16), static_cast<uint8_t>(r0));
}

loc_80148B80:
{
    r4 = 0x80340000u;
    r3 = (r30 & 255);
    r4 = (r4 + -28872);
    r5 = (r29 | 256);
    r12 = MemoryInline::FlatRead32((r4 + 832));
    r4 = 1;
    r6 = 0;
    ctr = r12;
    ctx->lr = 0x80148BA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
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
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80148C2C;
}

loc_80148BA8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r6));
}

loc_80148BAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80148BF0;
    }
}

loc_80148BB0:
{
    r0 = 6;
    r8 = 0x80150000u;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r0 = 256;
    r3 = (r9 + 1);
    r8 = (r8 + -30992);
    MemoryInline::FlatWrite16((r5 + 10), static_cast<uint16_t>(r0));
    r4 = 17;
    r5 = 1;
    r6 = 6;
    r0 = MemoryInline::FlatRead16((r9 + 8));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r0 = (r0_rot_1 & 1);
    r7 = (0 - r0);
    r7 = (r7 + 2);
    ctx->lr = 0x80148BECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8013FFACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80148BF8;
}

loc_80148BF0:
{
    r0 = 3;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
}

loc_80148BF8:
{
    r29 = 0x80340000u;
    r3 = r28;
    r29 = (r29 + -28872);
    r4 = (r29 + 836);
    ctx->lr = 0x80148C0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8014A650u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r29 + 1025));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_80148C14:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80148C2C;
    }
}

loc_80148C18:
{
    r3 = 1966080;
    r5 = r28;
    r3 = (r3 + 3);
    r4 = (r31 + 488);
    ctx->lr = 0x80148C2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80131758u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80148C2C:
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
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80148904 func_80148904 preserves=true fpr_mask=0x00000000
