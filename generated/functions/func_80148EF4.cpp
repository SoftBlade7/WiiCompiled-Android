#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80148EF4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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

    goto loc_80148EF4;

loc_80148EF4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r5 = 0x80340000u;
    r31 = 0x80280000u;
    r5 = (r5 + -28872);
    r27 = r3;
    r0 = MemoryInline::FlatRead8((r5 + 1025));
    r28 = r4;
    r31 = (r31 + 20664);
    r29 = 0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_80148F2C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80148F48;
    }
}

loc_80148F30:
{
    r3 = 1966080;
    r6 = MemoryInline::FlatRead16(r28);
    r5 = r27;
    r4 = (r31 + 628);
    r3 = (r3 + 3);
    ctx->lr = 0x80148F48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80131770u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
}

loc_80148F48:
{
    r3 = 0x80340000u;
    r0 = 4;
    r3 = (r3 + -28872);
    r30 = 0;
    ctr = r0;
}

loc_80148F5C:
{
    r0 = (r30 & 255);
    r0 = (r0 * 52);
    r4 = (r3 + r0);
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_2);
}

loc_80148F70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80148F98;
    }
}

loc_80148F74:
{
    r0 = MemoryInline::FlatRead8((r4 + 16));
}

loc_80148F7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80148F98;
    }
}

loc_80148F80:
{
    r0 = MemoryInline::FlatRead16((r4 + 20));
}

loc_80148F88:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(r0))) {
        goto loc_80149060;
    }
}

loc_80148F8C:
{
    r0 = MemoryInline::FlatRead16((r4 + 22));
}

loc_80148F94:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(r0))) {
        goto loc_80149060;
    }
}

loc_80148F98:
{
    r30 = (r30 + 1);
    r0 = (r30 & 255);
    r0 = (r0 * 52);
    r4 = (r3 + r0);
    r3_addr_3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_3);
}

loc_80148FB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80148FD8;
    }
}

loc_80148FB4:
{
    r0 = MemoryInline::FlatRead8((r4 + 16));
}

loc_80148FBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80148FD8;
    }
}

loc_80148FC0:
{
    r0 = MemoryInline::FlatRead16((r4 + 20));
}

loc_80148FC8:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(r0))) {
        goto loc_80149060;
    }
}

loc_80148FCC:
{
    r0 = MemoryInline::FlatRead16((r4 + 22));
}

loc_80148FD4:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(r0))) {
        goto loc_80149060;
    }
}

loc_80148FD8:
{
    r30 = (r30 + 1);
    r0 = (r30 & 255);
    r0 = (r0 * 52);
    r4 = (r3 + r0);
    r3_addr_4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_4);
}

loc_80148FF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80149018;
    }
}

loc_80148FF4:
{
    r0 = MemoryInline::FlatRead8((r4 + 16));
}

loc_80148FFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80149018;
    }
}

loc_80149000:
{
    r0 = MemoryInline::FlatRead16((r4 + 20));
}

loc_80149008:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(r0))) {
        goto loc_80149060;
    }
}

loc_8014900C:
{
    r0 = MemoryInline::FlatRead16((r4 + 22));
}

loc_80149014:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(r0))) {
        goto loc_80149060;
    }
}

loc_80149018:
{
    r30 = (r30 + 1);
    r0 = (r30 & 255);
    r0 = (r0 * 52);
    r4 = (r3 + r0);
    r3_addr_5 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_5);
}

loc_80149030:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80149058;
    }
}

loc_80149034:
{
    r0 = MemoryInline::FlatRead8((r4 + 16));
}

loc_8014903C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80149058;
    }
}

loc_80149040:
{
    r0 = MemoryInline::FlatRead16((r4 + 20));
}

loc_80149048:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(r0))) {
        goto loc_80149060;
    }
}

loc_8014904C:
{
    r0 = MemoryInline::FlatRead16((r4 + 22));
}

loc_80149054:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(r0))) {
        goto loc_80149060;
    }
}

loc_80149058:
{
    r30 = (r30 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80148F5C;
    }
}

loc_80149060:
{
    r0 = (r30 & 255);
}

loc_80149068:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(16))) {
        goto loc_80149080;
    }
}

loc_8014906C:
{
    r0 = (r0 * 52);
    r3 = 0x80340000u;
    r3 = (r3 + -28872);
    r29 = (r3 + r0);
    r29 = (r29 + 16);
}

loc_80149080:
{
}

loc_80149084:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_801490B4;
    }
}

loc_80149088:
{
    r3 = 0x80340000u;
    r3 = (r3 + -28872);
    r0 = MemoryInline::FlatRead8((r3 + 1025));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80149098:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801491E8;
    }
}

loc_8014909C:
{
    r3 = 1966080;
    r5 = r27;
    r3 = (r3 + 1);
    r4 = (r31 + 540);
    ctx->lr = 0x801490B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
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
    goto loc_801491E8;
}

loc_801490B4:
{
    r0 = MemoryInline::FlatRead16(r28);
}

loc_801490BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80149168;
    }
}

loc_801490C0:
{
    r3 = 0x80340000u;
    r4 = (r30 & 255);
    r3 = (r3 + -28872);
    r0 = MemoryInline::FlatRead8((r3 + 1025));
    r4 = (r4 * 52);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_801490D8:
{
    r27 = (r3 + r4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801490F0;
    }
}

loc_801490E0:
{
    r3 = 1966080;
    r4 = (r31 + 68);
    r3 = (r3 + 3);
    ctx->lr = 0x801490F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
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
}

loc_801490F0:
{
    r0 = MemoryInline::FlatRead16((r27 + 20));
}

loc_801490F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80149108;
    }
}

loc_801490FC:
{
    r0 = MemoryInline::FlatRead16((r27 + 22));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80149104:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80149134;
    }
}

loc_80149108:
{
    r0 = 5;
    MemoryInline::FlatWrite8((r27 + 16), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead16((r27 + 22));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80149118:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80149120;
    }
}

loc_8014911C:
{
    ctx->lr = 0x80149120u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
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
}

loc_80149120:
{
    r3 = MemoryInline::FlatRead16((r27 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80149128:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014913C;
    }
}

loc_8014912C:
{
    ctx->lr = 0x80149130u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
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
    goto loc_8014913C;
}

loc_80149134:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 16), static_cast<uint8_t>(r0));
}

loc_8014913C:
{
    r4 = 0x80340000u;
    r0 = MemoryInline::FlatRead16(r28);
    r4 = (r4 + -28872);
    r3 = (r30 & 255);
    r12 = MemoryInline::FlatRead32((r4 + 832));
    r5 = (r0 | 1024);
    r4 = 1;
    r6 = 0;
    ctr = r12;
    ctx->lr = 0x80149164u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
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
    goto loc_801491E8;
}

loc_80149168:
{
    r0 = MemoryInline::FlatRead16((r29 + 4));
}

loc_80149170:
{
    if ((static_cast<uint32_t>(r27) != static_cast<uint32_t>(r0))) {
        goto loc_80149184;
    }
}

loc_80149174:
{
    r0 = MemoryInline::FlatRead8((r29 + 1));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite8((r29 + 1), static_cast<uint8_t>(r0));
    goto loc_80149190;
}

loc_80149184:
{
    r0 = MemoryInline::FlatRead8((r29 + 1));
    r0 = (r0 | 16);
    MemoryInline::FlatWrite8((r29 + 1), static_cast<uint8_t>(r0));
}

loc_80149190:
{
    r0 = MemoryInline::FlatRead8((r29 + 1));
    r0 = (r0 & 30);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(30));
}

loc_8014919C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801491E8;
    }
}

loc_801491A0:
{
    r0 = MemoryInline::FlatRead8(r29);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_801491A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801491E8;
    }
}

loc_801491AC:
{
    r3 = (r30 & 255);
    r4 = 4;
    r0 = (r3 * 52);
    r6 = 0x80340000u;
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r4));
    r5 = 1;
    r6 = (r6 + -28872);
    r4 = (r6 + r0);
    MemoryInline::FlatWrite8((r4 + 10), static_cast<uint8_t>(r5));
    r4 = 0;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r6 + 832));
    r6 = 0;
    ctr = r12;
    ctx->lr = 0x801491E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
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
}

loc_801491E8:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
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
// RECOMP_REGISTRATION base 0x80148EF4 func_80148EF4 preserves=true fpr_mask=0x00000000
