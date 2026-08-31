#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805B14E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805B14E0;

loc_805B14E0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 84u, (r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 76u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r4 = 0x808B0000u;
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r4 + 19440));
}

loc_805B1504:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(2))) {
        goto loc_805B1568;
    }
}

loc_805B1508:
{
    r5 = 0x809C0000u;
    r4 = 6;
    r5 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = MemoryInline::FlatRead32((r5 + 2920));
}

loc_805B151C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(36))) {
        goto loc_805B15C0;
    }
}

loc_805B1520:
{
}

loc_805B1524:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(32))) {
        goto loc_805B15C0;
    }
}

loc_805B1528:
{
}

loc_805B152C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_805B15C0;
    }
}

loc_805B1530:
{
}

loc_805B1534:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_805B15C0;
    }
}

loc_805B1538:
{
}

loc_805B153C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(15))) {
        goto loc_805B15C0;
    }
}

loc_805B1540:
{
}

loc_805B1544:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_805B15C0;
    }
}

loc_805B1548:
{
}

loc_805B154C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(13))) {
        goto loc_805B15C0;
    }
}

loc_805B1550:
{
}

loc_805B1554:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(33))) {
        goto loc_805B15C0;
    }
}

loc_805B1558:
{
}

loc_805B155C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(34))) {
        goto loc_805B15C0;
    }
}

loc_805B1560:
{
    r4 = (r4 | 16);
    goto loc_805B15C0;
}

loc_805B1568:
{
    r5 = 0x809C0000u;
    r4 = 38;
    r5 = MemoryInline::FlatRead32((r5 + -10456));
    r6 = 1;
    r0 = MemoryInline::FlatRead32((r5 + 2932));
}

loc_805B1580:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_805B15A4;
    }
}

loc_805B1584:
{
    r0 = MemoryInline::FlatRead8((r5 + 39));
}

loc_805B158C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_805B15B4;
    }
}

loc_805B1590:
{
    r0 = MemoryInline::FlatRead32((r5 + 2920));
}

loc_805B1598:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_805B15B4;
    }
}

loc_805B159C:
{
    r6 = 0;
    goto loc_805B15B4;
}

loc_805B15A4:
{
    r0 = MemoryInline::FlatRead32((r5 + 2920));
}

loc_805B15AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(32))) {
        goto loc_805B15B4;
    }
}

loc_805B15B0:
{
    r6 = 0;
}

loc_805B15B4:
{
}

loc_805B15B8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_805B15C0;
    }
}

loc_805B15BC:
{
    r4 = (r4 | 16);
}

loc_805B15C0:
{
    r0 = MemoryInline::FlatRead32((r5 + 2928));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_805B15C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B15D4;
    }
}

loc_805B15CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_805B15D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B15D8;
    }
}

loc_805B15D4:
{
    r4 = (r4 | 1);
}

loc_805B15D8:
{
    r3 = MemoryInline::FlatRead32((r3 + 48));
    r5 = 0;
    ctx->lr = 0x805B15E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8023BD38u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 48));
    r3 = MemoryInline::FlatRead32((r3 + 196));
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_805B15F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805B16CC;
    }
}

loc_805B15F8:
{
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r9 = 3;
    r8 = 64;
    r0 = MemoryInline::FlatRead8((r1 + 12));
    r7 = 255;
    MemoryInline::FlatWrite8((r3 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 13));
    MemoryInline::FlatWrite8((r3 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 14));
    MemoryInline::FlatWrite8((r3 + 34), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 15));
    MemoryInline::FlatWrite8((r3 + 35), static_cast<uint8_t>(r0));
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 48), 0, 4u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r31 + 48));
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r3 = MemoryInline::FlatRead32((r3 + 196));
    r5 = MemoryInline::FlatRead8((r1 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r4 = MemoryInline::FlatRead8((r1 + 9));
    MemoryInline::FlatWrite32((r3 + 36), r9);
    r3 = MemoryInline::FlatRead8((r1 + 10));
    r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r31 + 48));
    r0 = MemoryInline::FlatRead8((r1 + 11));
    r6 = MemoryInline::FlatRead32((r6 + 196));
    r6 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite8((r6 + 46), static_cast<uint8_t>(r8));
    r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r31 + 48));
    r6 = MemoryInline::FlatRead32((r6 + 196));
    r6 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite8((r6 + 22), static_cast<uint8_t>(r7));
    r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r31 + 48));
    r6 = MemoryInline::FlatRead32((r6 + 196));
    r6 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::FlatWrite8((r6 + 32), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 33), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r6 + 34), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 35), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r31 + 48));
    r3 = MemoryInline::FlatRead32((r3 + 196));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWrite32((r3 + 36), r9);
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r31 + 48));
    r3 = MemoryInline::FlatRead32((r3 + 196));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWrite8((r3 + 46), static_cast<uint8_t>(r8));
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r31 + 48));
    r3 = MemoryInline::FlatRead32((r3 + 196));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r7));
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r31 + 48));
    r0 = MemoryInline::FlatRead16((r3 + 204));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite16((r3 + 204), static_cast<uint16_t>(r0));
}

loc_805B16CC:
{
    r3 = MemoryInline::FlatRead32((r31 + 48));
    r3 = MemoryInline::FlatRead32((r3 + 196));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_805B16DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805B187C;
    }
}

loc_805B16E0:
{
    r4 = 0x809C0000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2932));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_805B16F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B1714;
    }
}

loc_805B16F8:
{
    r3 = 0x809C0000u;
    r5 = 0x80890000u;
    r3 = MemoryInline::FlatRead32((r3 + -10440));
    r5 = (r5 + 9768);
    r4 = 1;
    r6 = 0;
    ctx->lr = 0x805B1714u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805411FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805B1714:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805B1718:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B173C;
    }
}

loc_805B171C:
{
    r4 = 0x80890000u;
    r3 = 0x809C0000u;
    r4 = (r4 + 9768);
    r3 = MemoryInline::FlatRead32((r3 + -10440));
    r5 = (r4 + 32);
    r6 = 0;
    r4 = 1;
    ctx->lr = 0x805B173Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805411FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805B173C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805B1740:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B1768;
    }
}

loc_805B1744:
{
    r5 = MemoryInline::FlatRead32((r31 + 48));
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r5 + 196));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = (r3 + 20);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x805B1764u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805B17E4;
}

loc_805B1768:
{
    r4 = MemoryInline::FlatRead32((r31 + 48));
    r5 = 0x80890000u;
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 9688));
    r6 = MemoryInline::FlatRead32((r4 + 196));
    r7 = 2;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 9684));
    r4 = 0;
    r5 = MemoryInline::FlatRead32((r6 + 20));
    r0 = 100;
    MemoryInline::FlatWrite32((r5 + 28), r7);
    r3 = MemoryInline::FlatRead32((r31 + 48));
    r3 = MemoryInline::FlatRead32((r3 + 196));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    MemoryInline::FlatWriteFloat32((r3 + 32), f1.d);
    r3 = MemoryInline::FlatRead32((r31 + 48));
    r3 = MemoryInline::FlatRead32((r3 + 196));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    MemoryInline::FlatWriteFloat32((r3 + 36), f0.d);
    r3 = MemoryInline::FlatRead32((r31 + 48));
    r3 = MemoryInline::FlatRead32((r3 + 196));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    MemoryInline::FlatWriteFloat32((r3 + 44), f0.d);
    r3 = MemoryInline::FlatRead32((r31 + 48));
    r3 = MemoryInline::FlatRead32((r3 + 196));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    MemoryInline::FlatWrite8((r3 + 26), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r31 + 48));
    r3 = MemoryInline::FlatRead32((r3 + 196));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    MemoryInline::FlatWrite8((r3 + 27), static_cast<uint8_t>(r0));
}

loc_805B17E4:
{
    r4 = 0x80890000u;
    r3 = 0x809C0000u;
    r4 = (r4 + 9768);
    r3 = MemoryInline::FlatRead32((r3 + -10440));
    r5 = (r4 + 59);
    r6 = 0;
    r4 = 1;
    ctx->lr = 0x805B1804u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805411FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805B1808:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B187C;
    }
}

loc_805B180C:
{
    r4 = r3;
    r3 = (r1 + 16);
    ctx->lr = 0x805B1818u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80228E18u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 48));
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r1 + 20));
    r4 = MemoryInline::FlatRead32((r3 + 196));
    r3 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r1 + 16));
    r4 = MemoryInline::FlatRead32((r4 + 20));
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 56), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r4 + 56), r3);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r4 + 60), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r3 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r1 + 28));
            r3 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r1 + 24));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r4 + 64), r3);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r4 + 68), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r3 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r1 + 36));
            r3 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r1 + 32));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r4 + 72), r3);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r4 + 76), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r3 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r1 + 44));
            r3 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r1 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r4 + 80), r3);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r4 + 84), r0);
    }
    r3 = MemoryInline::FlatRead32((r31 + 48));
    r3 = MemoryInline::FlatRead32((r3 + 196));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = MemoryInline::FlatRead16((r3 + 24));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite16((r3 + 24), static_cast<uint16_t>(r0));
}

loc_805B187C:
{
    r3 = MemoryInline::FlatRead32((r31 + 48));
    r3 = MemoryInline::FlatRead32((r3 + 196));
    r0 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805B188C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B19C0;
    }
}

loc_805B1890:
{
    r29 = 0x80890000u;
    r25 = 0;
    r29 = (r29 + 9768);
    r27 = 0;
    r30 = 0x809C0000u;
    r26 = (r29 + 85);
}

loc_805B18A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_805B18AC:
{
    r5 = r26;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805B18CC;
    }
}

loc_805B18B4:
{
    r4 = r26;
    r5 = r25;
    r3 = (r29 + 112);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x805B18C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805AEEC4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r5 = r3;
}

loc_805B18CC:
{
    r3 = MemoryInline::FlatRead32((r30 + -10440));
    r4 = 1;
    r6 = 0;
    ctx->lr = 0x805B18DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805411FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805B18E0:
{
    r28 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805B192C;
    }
}

loc_805B18E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_805B18EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B192C;
    }
}

loc_805B18F0:
{
    r3 = MemoryInline::FlatRead32((r31 + 48));
    r4 = r28;
    r3 = MemoryInline::FlatRead32((r3 + 196));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r3 = (r3 + 20);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x805B1910u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 40;
    ctx->lr = 0x805B1918u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805B191C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B1928;
    }
}

loc_805B1920:
{
    r4 = r31;
    ctx->lr = 0x805B1928u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805A1650u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805B1928:
{
    MemoryInline::FlatWrite32((r31 + 200), r3);
}

loc_805B192C:
{
    r0 = MemoryInline::FlatRead32((r31 + 200));
}

loc_805B1934:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805B1940;
    }
}

loc_805B1938:
{
    r3 = (r0 + r27);
    MemoryInline::FlatWrite32((r3 + 8), r28);
}

loc_805B1940:
{
    r25 = (r25 + 1);
    r27 = (r27 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(4));
}

loc_805B194C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805B18A8;
    }
}

loc_805B1950:
{
    r4 = MemoryInline::FlatRead32((r31 + 48));
    r3 = 0x808B0000u;
    r5 = 0;
    r6 = 8;
    r4 = MemoryInline::FlatRead32((r4 + 196));
    r4 = MemoryInline::FlatRead32((r4 + 16));
    r0 = MemoryInline::FlatRead16((r4 + 24));
    r0 = (r0 & -3);
    MemoryInline::FlatWrite16((r4 + 24), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 19440));
}

loc_805B197C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_805B1988;
    }
}

loc_805B1980:
{
    r5 = 1;
    r6 = 4;
}

loc_805B1988:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_805B198C:
{
    r3 = MemoryInline::FlatRead32((r31 + 48));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B19A4;
    }
}

loc_805B1994:
{
    r0 = MemoryInline::FlatRead16((r3 + 204));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite16((r3 + 204), static_cast<uint16_t>(r0));
    goto loc_805B19B0;
}

loc_805B19A4:
{
    r0 = MemoryInline::FlatRead16((r3 + 204));
    r0 = (r0 & -9);
    MemoryInline::FlatWrite16((r3 + 204), static_cast<uint16_t>(r0));
}

loc_805B19B0:
{
    r3 = MemoryInline::FlatRead32((r31 + 48));
    r3 = MemoryInline::FlatRead32((r3 + 196));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    MemoryInline::FlatWrite8((r3 + 26), static_cast<uint8_t>(r6));
}

loc_805B19C0:
{
    r3 = MemoryInline::FlatRead32((r31 + 48));
    r3 = MemoryInline::FlatRead32((r3 + 196));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805B19D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B1A00;
    }
}

loc_805B19D4:
{
    r0 = 128;
    MemoryInline::FlatWrite8((r3 + 21), static_cast<uint8_t>(r0));
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r31 + 48));
    r3 = MemoryInline::FlatRead32((r3 + 196));
    r3 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    r3 = MemoryInline::FlatRead32((r31 + 48));
    r3 = MemoryInline::FlatRead32((r3 + 196));
    r3 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32((r3 + 28), r0);
}

loc_805B1A00:
{
    r11 = (r1 + 80);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805B14E0 func_805B14E0 preserves=true fpr_mask=0x00000000
