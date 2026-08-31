#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80147368(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80147368;

loc_80147368:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r4 = 2;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80147378:
{
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = 4388;
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = 0;
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    r28 = 0x80340000u;
    r28 = (r28 + -28872);
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r4));
    r30 = (r28 + 908);
    r4 = MemoryInline::FlatRead32((r28 + 904));
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r28 + 896), static_cast<uint8_t>(r29));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801473CC;
    }
}

loc_801473B4:
{
    r12 = MemoryInline::FlatRead32((r28 + 900));
    r4 = 0;
    r5 = 0;
    ctr = r12;
    ctx->lr = 0x801473C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80147798;
}

loc_801473CC:
{
    r3 = r4;
    r4 = (r1 + 8);
    r5 = 0;
    ctx->lr = 0x801473DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80156B44u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801473E0:
{
    r31 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80147404;
    }
}

loc_801473E8:
{
    r12 = MemoryInline::FlatRead32((r28 + 900));
    r3 = 12;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    ctx->lr = 0x80147400u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80147798;
}

loc_80147404:
{
    r3 = r30;
    r4 = 0;
    r5 = 116;
    ctx->lr = 0x80147414u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
    r4 = 518;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80156A50u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80147424:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014747C;
    }
}

loc_80147428:
{
    r0 = MemoryInline::FlatRead16((r3 + 6));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(12) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 12);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_80147434:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8014747C;
    }
}

loc_80147438:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80147440:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014747C;
    }
}

loc_80147444:
{
    r0 = MemoryInline::FlatRead16((r3 + 6));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(12) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 12);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_80147450:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8014747C;
    }
}

loc_80147454:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8014745C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014747C;
    }
}

loc_80147460:
{
    r4 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80147468:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014747C;
    }
}

loc_8014746C:
{
    r3 = MemoryInline::FlatRead16((r4 + 6));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(12) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r3) >> 12);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80147478:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801474A0;
    }
}

loc_8014747C:
{
    r5 = 0x80340000u;
    r3 = 13;
    r5 = (r5 + -28872);
    r4 = 0;
    r12 = MemoryInline::FlatRead32((r5 + 900));
    r5 = 0;
    ctr = r12;
    ctx->lr = 0x8014749Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80147798;
}

loc_801474A0:
{
    r0 = (r3 & 4095);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801474A4:
{
    MemoryInline::FlatWriteRam16((r30 + 104), static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801474B4;
    }
}

loc_801474AC:
{
    r0 = (r4 + 8);
    MemoryInline::FlatWriteRam32((r30 + 108), r0);
}

loc_801474B4:
{
    r3 = r31;
    r4 = 516;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80156A50u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801474C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801474D8;
    }
}

loc_801474C8:
{
    r0 = MemoryInline::FlatRead8((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801474D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801474D8;
    }
}

loc_801474D4:
{
    r29 = (r29 | 1);
}

loc_801474D8:
{
    r3 = r31;
    r4 = 517;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80156A50u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801474E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80147500;
    }
}

loc_801474EC:
{
    r0 = MemoryInline::FlatRead8((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801474F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80147500;
    }
}

loc_801474F8:
{
    r0 = (r29 | 4);
    r29 = (r0 & 65535);
}

loc_80147500:
{
    r3 = r31;
    r4 = 525;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80156A50u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80147510:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80147528;
    }
}

loc_80147514:
{
    r0 = MemoryInline::FlatRead8((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8014751C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80147528;
    }
}

loc_80147520:
{
    r0 = (r29 | 2);
    r29 = (r0 & 65535);
}

loc_80147528:
{
    r3 = r31;
    r4 = 520;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80156A50u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80147538:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80147550;
    }
}

loc_8014753C:
{
    r0 = MemoryInline::FlatRead8((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80147544:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80147550;
    }
}

loc_80147548:
{
    r0 = (r29 | 8);
    r29 = (r0 & 65535);
}

loc_80147550:
{
    r3 = r31;
    r4 = 521;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80156A50u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80147560:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80147578;
    }
}

loc_80147564:
{
    r0 = MemoryInline::FlatRead8((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8014756C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80147578;
    }
}

loc_80147570:
{
    r0 = (r29 | 16);
    r29 = (r0 & 65535);
}

loc_80147578:
{
    r3 = r31;
    r4 = 522;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80156A50u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80147588:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801475A0;
    }
}

loc_8014758C:
{
    r0 = MemoryInline::FlatRead8((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80147594:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801475A0;
    }
}

loc_80147598:
{
    r0 = (r29 | 32);
    r29 = (r0 & 65535);
}

loc_801475A0:
{
    r3 = r31;
    r4 = 256;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80156A50u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801475B0:
{
    r4 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80147600;
    }
}

loc_801475B8:
{
    r0 = MemoryInline::FlatRead16((r3 + 6));
    r28 = (r0 & 4095);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(32));
}

loc_801475C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801475E4;
    }
}

loc_801475C8:
{
    r3 = r30;
    r5 = r28;
    r4 = (r4 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 0;
    r30_addr_1 = (r30 + r28);
    MemoryInline::FlatWrite8(r30_addr_1, static_cast<uint8_t>(r0));
    goto loc_80147608;
}

loc_801475E4:
{
    r3 = r30;
    r4 = (r4 + 8);
    r5 = 31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r30 + 32), static_cast<uint8_t>(r0));
    goto loc_80147608;
}

loc_80147600:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8(r30, static_cast<uint8_t>(r0));
}

loc_80147608:
{
    r3 = r31;
    r4 = 257;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80156A50u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80147618:
{
    r4 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014766C;
    }
}

loc_80147620:
{
    r0 = MemoryInline::FlatRead16((r3 + 6));
    r28 = (r0 & 4095);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(32));
}

loc_8014762C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80147650;
    }
}

loc_80147630:
{
    r5 = r28;
    r3 = (r30 + 32);
    r4 = (r4 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r30 + r28);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 32), static_cast<uint8_t>(r0));
    goto loc_80147674;
}

loc_80147650:
{
    r3 = (r30 + 32);
    r4 = (r4 + 8);
    r5 = 31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r30 + 64), static_cast<uint8_t>(r0));
    goto loc_80147674;
}

loc_8014766C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r30 + 32), static_cast<uint8_t>(r0));
}

loc_80147674:
{
    r3 = r31;
    r4 = 258;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80156A50u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80147684:
{
    r4 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801476D8;
    }
}

loc_8014768C:
{
    r0 = MemoryInline::FlatRead16((r3 + 6));
    r28 = (r0 & 4095);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(32));
}

loc_80147698:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801476BC;
    }
}

loc_8014769C:
{
    r5 = r28;
    r3 = (r30 + 64);
    r4 = (r4 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r30 + r28);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 64), static_cast<uint8_t>(r0));
    goto loc_801476E0;
}

loc_801476BC:
{
    r3 = (r30 + 64);
    r4 = (r4 + 8);
    r5 = 31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r30 + 96), static_cast<uint8_t>(r0));
    goto loc_801476E0;
}

loc_801476D8:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r30 + 64), static_cast<uint8_t>(r0));
}

loc_801476E0:
{
    r3 = r31;
    r4 = 512;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80156A50u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801476F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801476FC;
    }
}

loc_801476F4:
{
    r0 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWriteRam16((r30 + 96), static_cast<uint16_t>(r0));
}

loc_801476FC:
{
    r3 = r31;
    r4 = 515;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80156A50u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8014770C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80147718;
    }
}

loc_80147710:
{
    r0 = MemoryInline::FlatRead8((r3 + 8));
    MemoryInline::FlatWriteRam8((r30 + 101), static_cast<uint8_t>(r0));
}

loc_80147718:
{
    r3 = r31;
    r4 = 514;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80156A50u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80147728:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80147734;
    }
}

loc_8014772C:
{
    r0 = MemoryInline::FlatRead8((r3 + 8));
    MemoryInline::FlatWriteRam8((r30 + 100), static_cast<uint8_t>(r0));
}

loc_80147734:
{
    r3 = r31;
    r4 = 513;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80156A50u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80147744:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80147750;
    }
}

loc_80147748:
{
    r0 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWriteRam16((r30 + 98), static_cast<uint16_t>(r0));
}

loc_80147750:
{
    r3 = r31;
    r4 = 524;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80156A50u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80147760:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80147774;
    }
}

loc_80147764:
{
    r0 = MemoryInline::FlatRead16((r3 + 8));
    r3 = (r29 | 64);
    r29 = (r3 & 65535);
    MemoryInline::FlatWriteRam16((r30 + 102), static_cast<uint16_t>(r0));
}

loc_80147774:
{
    r6 = 0x80340000u;
    r4 = (r29 & 65535);
    r6 = (r6 + -28872);
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r6 + 900));
    r5 = (r6 + 908);
    MemoryInline::FlatWriteRam32((r6 + 1020), r31);
    ctr = r12;
    ctx->lr = 0x80147798u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80147798:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFDF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80147368 func_80147368 preserves=true fpr_mask=0x00000000
