#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066D35C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8066D35C;

loc_8066D35C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -496), 0, 504u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -496), r1);
    r1 = (r1 + -496);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 500u, (r1 + 500), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 472u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 472u, (r1 + 472), r26);
        MemoryInline::WriteResolved32(guest_range_0, 476u, (r1 + 476), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 480u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 480u, (r1 + 480), r28);
        MemoryInline::WriteResolved32(guest_range_0, 484u, (r1 + 484), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 488u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 488u, (r1 + 488), r30);
        MemoryInline::WriteResolved32(guest_range_0, 492u, (r1 + 492), r31);
    }
    r26 = r4;
    r29 = 65536;
    r30 = r3;
    r4 = 0;
    r3 = r26;
    r5 = (r29 + -17408);
    ctx->lr = 0x8066D388u;
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
    r3 = 0x808A0000u;
    r4 = r26;
    r3 = (r3 + -23052);
    r5 = (r29 + -17408);
    r6 = MemoryInline::FlatRead32((r3 + 12));
    r3 = (r30 + 36);
    r7 = 0;
    ctx->lr = 0x8066D3A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80678850u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066D3AC:
{
    r31 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066D650;
    }
}

loc_8066D3B4:
{
    r0 = MemoryInline::FlatRead8((r26 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8066D3BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066D650;
    }
}

loc_8066D3C0:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r30 + 16884), r0);
    r4 = r26;
    r3 = (r30 + 48);
    r5 = 16832;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = r26;
    r3 = (r30 + 30096);
    ctx->lr = 0x8066D3E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80675F6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r26 + 2024));
}

loc_8066D3EC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8066D41C;
    }
}

loc_8066D3F0:
{
    r5 = MemoryInline::FlatRead32((r26 + 2028));
}

loc_8066D3F8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8066D41C;
    }
}

loc_8066D3FC:
{
}

loc_8066D400:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(20480))) {
        goto loc_8066D41C;
    }
}

loc_8066D404:
{
    r0 = (r4 + r5);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(48128));
}

loc_8066D40C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8066D41C;
    }
}

loc_8066D410:
{
    r3 = MemoryInline::FlatRead32((r30 + 30088));
    r4 = (r26 + r4);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8066D41C:
{
    r3 = MemoryInline::FlatRead8((r30 + 85));
    r0 = (r3 + 255);
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8066D42C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8066D650;
    }
}

loc_8066D430:
{
    r0 = 56;
    r5 = (r1 + 12);
    r4 = (r30 + 16428);
    r27 = MemoryInline::FlatRead8((r30 + 84));
    r28 = MemoryInline::FlatRead32((r30 + 88));
    ctr = r0;
}

loc_8066D448:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r5 + 4), r3);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8066D448;
    }
}

loc_8066D45C:
{
    r0 = MemoryInline::FlatRead32((r1 + 244));
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10424));
    r29 = 0;
}

loc_8066D470:
{
    r26 = (r3 + 131072);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8066D498;
    }
}

loc_8066D478:
{
    r0 = MemoryInline::FlatRead32((r1 + 248));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066D480:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066D498;
    }
}

loc_8066D484:
{
    r3 = (r1 + 252);
    ctx->lr = 0x8066D48Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800CB8B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8066D490:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8066D498;
    }
}

loc_8066D494:
{
    r29 = 1;
}

loc_8066D498:
{
}

loc_8066D49C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8066D4FC;
    }
}

loc_8066D4A0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r29 = 0;
}

loc_8066D4AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8066D4D0;
    }
}

loc_8066D4B0:
{
    r0 = MemoryInline::FlatRead32((r1 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066D4B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066D4D0;
    }
}

loc_8066D4BC:
{
    r3 = (r1 + 28);
    ctx->lr = 0x8066D4C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800CB8B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8066D4C8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8066D4D0;
    }
}

loc_8066D4CC:
{
    r29 = 1;
}

loc_8066D4D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8066D4D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066D4FC;
    }
}

loc_8066D4D8:
{
    MemoryInline::FlatWriteRam8((r1 + 436), static_cast<uint8_t>(r27));
    r5 = r28;
    r4 = (r1 + 16);
    r6 = 0;
    MemoryInline::FlatWriteRam8((r1 + 212), static_cast<uint8_t>(r27));
    r3 = MemoryInline::FlatRead32((r26 + 20476));
    r3 = (r3 + 131072);
    r3 = (r3 + 13064);
    ctx->lr = 0x8066D4FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80548C58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8066D4FC:
{
    r0 = MemoryInline::FlatRead32((r30 + 16884));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8066D504:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066D608;
    }
}

loc_8066D508:
{
    r0 = 159;
    r5 = r30;
    r4 = 0;
    r3 = 0;
    ctr = r0;
}

loc_8066D51C:
{
    r0 = MemoryInline::FlatRead16((r5 + 784));
}

loc_8066D524:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_8066D554;
    }
}

loc_8066D528:
{
    r0 = MemoryInline::FlatRead16((r5 + 786));
}

loc_8066D530:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_8066D554;
    }
}

loc_8066D534:
{
    MemoryInline::FlatWrite16((r5 + 784), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r5 + 786), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead16((r5 + 788));
}

loc_8066D544:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_8066D554;
    }
}

loc_8066D548:
{
    r0 = MemoryInline::FlatRead16((r5 + 790));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
}

loc_8066D550:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066D608;
    }
}

loc_8066D554:
{
    r0 = MemoryInline::FlatRead16((r5 + 786));
}

loc_8066D55C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_8066D58C;
    }
}

loc_8066D560:
{
    r0 = MemoryInline::FlatRead16((r5 + 788));
}

loc_8066D568:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_8066D58C;
    }
}

loc_8066D56C:
{
    MemoryInline::FlatWrite16((r5 + 786), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r5 + 788), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead16((r5 + 790));
}

loc_8066D57C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_8066D58C;
    }
}

loc_8066D580:
{
    r0 = MemoryInline::FlatRead16((r5 + 792));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
}

loc_8066D588:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066D608;
    }
}

loc_8066D58C:
{
    r0 = MemoryInline::FlatRead16((r5 + 788));
}

loc_8066D594:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_8066D5C4;
    }
}

loc_8066D598:
{
    r0 = MemoryInline::FlatRead16((r5 + 790));
}

loc_8066D5A0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_8066D5C4;
    }
}

loc_8066D5A4:
{
    MemoryInline::FlatWrite16((r5 + 788), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r5 + 790), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead16((r5 + 792));
}

loc_8066D5B4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_8066D5C4;
    }
}

loc_8066D5B8:
{
    r0 = MemoryInline::FlatRead16((r5 + 794));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
}

loc_8066D5C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066D608;
    }
}

loc_8066D5C4:
{
    r0 = MemoryInline::FlatRead16((r5 + 790));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(13));
}

loc_8066D5CC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066D5FC;
    }
}

loc_8066D5D0:
{
    r0 = MemoryInline::FlatRead16((r5 + 792));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
}

loc_8066D5D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066D5FC;
    }
}

loc_8066D5DC:
{
    MemoryInline::FlatWrite16((r5 + 790), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r5 + 792), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead16((r5 + 794));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(13));
}

loc_8066D5EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066D5FC;
    }
}

loc_8066D5F0:
{
    r0 = MemoryInline::FlatRead16((r5 + 796));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
}

loc_8066D5F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066D608;
    }
}

loc_8066D5FC:
{
    r5 = (r5 + 8);
    r4 = (r4 + 3);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8066D51C;
    }
}

loc_8066D608:
{
    r29 = 1;
    MemoryInline::FlatWriteRam32((r1 + 8), r29);
    r3 = (r30 + 784);
    r4 = (r1 + 8);
    ctx->lr = 0x8066D61Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8066D668u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066D620:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066D648;
    }
}

loc_8066D624:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8066D62C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8066D63C;
    }
}

loc_8066D630:
{
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite32((r3 + -29952), r0);
    goto loc_8066D650;
}

loc_8066D63C:
{
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite32((r3 + -29952), r29);
    goto loc_8066D650;
}

loc_8066D648:
{
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite32((r3 + -29952), r29);
}

loc_8066D650:
{
    r3 = r31;
    r26 = MemoryInline::FlatRead32((r1 + 472));
    r27 = MemoryInline::FlatRead32((r1 + 476));
    r28 = MemoryInline::FlatRead32((r1 + 480));
    r29 = MemoryInline::FlatRead32((r1 + 484));
    r30 = MemoryInline::FlatRead32((r1 + 488));
    r31 = MemoryInline::FlatRead32((r1 + 492));
    r0 = MemoryInline::FlatRead32((r1 + 500));
    ctx->lr = r0;
    r1 = (r1 + 496);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[26] = r26;
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
// RECOMP_REGISTRATION base 0x8066D35C func_8066D35C preserves=true fpr_mask=0x00000000
