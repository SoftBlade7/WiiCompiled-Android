#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807C7364(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807C7364;

loc_807C7364:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = 0x808A0000u;
    r29 = (r29 + 26416);
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    r28 = r3;
    ctx->lr = 0x807C7390u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8059018Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = 0x808D0000u;
    r0 = 0;
    r3 = (r3 + 10968);
    r30 = 0x805A0000u;
    r31 = 0x80510000u;
    MemoryInline::FlatWrite32((r28 + 32), r3);
    r3 = (r28 + 856);
    r4 = (r30 + 8112);
    MemoryInline::FlatWrite32((r28 + 104), r0);
    r5 = (r31 + 13824);
    r6 = 12;
    r7 = 4;
    ctx->lr = 0x807C73C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80020FF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r28 + 904);
    r4 = (r30 + 8112);
    r5 = (r31 + 13824);
    r6 = 12;
    r7 = 4;
    ctx->lr = 0x807C73DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80020FF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r28 + 1012);
    r4 = (r30 + 8112);
    r5 = (r31 + 13824);
    r6 = 12;
    r7 = 15;
    ctx->lr = 0x807C73F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80020FF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x807C0000u;
    r5 = 0x807C0000u;
    r3 = (r28 + 1280);
    r6 = 28;
    r4 = (r4 + 30692);
    r5 = (r5 + 30696);
    r7 = 2;
    ctx->lr = 0x807C7414u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80020FF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 1800;
    ctx->lr = 0x807C741Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807C7420:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C7428;
    }
}

loc_807C7424:
{
    ctx->lr = 0x807C7428u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80863928u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807C7428:
{
    r31 = 0;
    r5 = 29;
    r4 = 41;
    r0 = 27;
    guest_range_1 = MemoryInline::ResolveRangeHost((r28 + 12), 0, 67u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r28 + 12), r3);
    r3 = 3472;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r28 + 44), r31);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r28 + 48), r31);
    }
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r28 + 52), r31);
    MemoryInline::WriteResolved8(guest_range_1, 65u, (r28 + 77), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 66u, (r28 + 78), static_cast<uint8_t>(r31));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 52u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_1, 52u, (r28 + 64), r5);
        MemoryInline::WriteResolved16(guest_range_1, 54u, (r28 + 66), r4);
    }
    MemoryInline::WriteResolved16(guest_range_1, 56u, (r28 + 68), static_cast<uint16_t>(r0));
    ctx->lr = 0x807C7464u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x807C0000u;
    r5 = 0x807C0000u;
    r4 = (r4 + 28812);
    r6 = 96;
    r5 = (r5 + 28916);
    r7 = 36;
    ctx->lr = 0x807C7480u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80020E34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    f7.d = MemoryInline::FlatReadFloat32(r29);
    r5 = 0x802A0000u;
    f6.d = MemoryInline::FlatReadFloat32((r29 + 4));
    r4 = (r5 + 16640);
    guest_range_0 = MemoryInline::ResolveRangeHost((r28 + 16), 0, 1748u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 244u, (r28 + 260), r3);
    r0 = 12;
    f2.d = MemoryInline::FlatReadFloat32((r29 + 2496));
    MemoryInline::WriteResolved32(guest_range_0, 700u, (r28 + 716), r31);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 2500));
    MemoryInline::WriteResolved32(guest_range_0, 696u, (r28 + 712), r31);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 2492));
    MemoryInline::WriteResolved32(guest_range_0, 708u, (r28 + 724), r31);
    f4.d = MemoryInline::FlatReadFloat32((r29 + 2504));
    MemoryInline::WriteResolved32(guest_range_0, 704u, (r28 + 720), r31);
    f3.d = MemoryInline::FlatReadFloat32((r29 + 2508));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 712u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 712u, (r28 + 728), r31);
        MemoryInline::WriteResolved32(guest_range_0, 716u, (r28 + 732), r31);
    }
    MemoryInline::WriteResolved32(guest_range_0, 720u, (r28 + 736), r31);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r28 + 16), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r28 + 20), r31);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (r28 + 88), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r28 + 84), f6.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r28 + 92), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r28 + 96), f7.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (r28 + 100), f7.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1736u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1736u, (r28 + 1752), r31);
        MemoryInline::WriteResolved32(guest_range_0, 1740u, (r28 + 1756), r31);
    }
    MemoryInline::WriteResolved32(guest_range_0, 1744u, (r28 + 1760), r31);
    f5.d = MemoryInline::FlatReadFloat32((r5 + 16640));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 664u, (r28 + 680), f5.d);
    guest_range_2 = MemoryInline::ResolveRangeHost((r4 + 4), 0, 8u, true, false);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r4 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 668u, (r28 + 684), f5.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r4 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 672u, (r28 + 688), f5.d);
    MemoryInline::WriteResolved32(guest_range_0, 684u, (r28 + 700), r31);
    MemoryInline::WriteResolved8(guest_range_0, 676u, (r28 + 692), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 680u, (r28 + 696), f0.d);
    MemoryInline::WriteResolved32(guest_range_0, 688u, (r28 + 704), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r28 + 24), r31);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r28 + 28), r31);
    }
    MemoryInline::WriteResolved8(guest_range_0, 308u, (r28 + 324), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 309u, (r28 + 325), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 310u, (r28 + 326), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 311u, (r28 + 327), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 312u, (r28 + 328), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 313u, (r28 + 329), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 314u, (r28 + 330), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 315u, (r28 + 331), static_cast<uint8_t>(r31));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1712u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1712u, (r28 + 1728), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1716u, (r28 + 1732), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1720u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1720u, (r28 + 1736), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1724u, (r28 + 1740), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1728u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1728u, (r28 + 1744), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1732u, (r28 + 1748), f1.d);
    }
    MemoryInline::WriteResolved8(guest_range_0, 60u, (r28 + 76), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 63u, (r28 + 79), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_0, 224u, (r28 + 240), r31);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 760u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 764u, (r28 + 780), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 760u, (r28 + 776), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 768u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 772u, (r28 + 788), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 768u, (r28 + 784), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 776u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 780u, (r28 + 796), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 776u, (r28 + 792), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 784u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 788u, (r28 + 804), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 784u, (r28 + 800), f4.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 800u, (r28 + 816), f4.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 792u, (r28 + 808), f4.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 804u, (r28 + 820), f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 796u, (r28 + 812), f3.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 808u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 812u, (r28 + 828), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 808u, (r28 + 824), f7.d);
    }
    f0.d = MemoryInline::FlatReadFloat32((r5 + 16640));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 816u, (r28 + 832), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r4 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 820u, (r28 + 836), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r4 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 824u, (r28 + 840), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 16640));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 828u, (r28 + 844), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r4 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 832u, (r28 + 848), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f7.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f7.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 836u, (r28 + 852), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 16640));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 888u, (r28 + 904), f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r4 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 892u, (r28 + 908), f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r4 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 896u, (r28 + 912), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 840u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 840u, (r28 + 856), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 844u, (r28 + 860), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 848u, (r28 + 864), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 16640));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 900u, (r28 + 916), f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r4 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 904u, (r28 + 920), f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r4 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 908u, (r28 + 924), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 852u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 852u, (r28 + 868), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 856u, (r28 + 872), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 860u, (r28 + 876), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 16640));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 912u, (r28 + 928), f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r4 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 916u, (r28 + 932), f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r4 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 920u, (r28 + 936), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 864u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 864u, (r28 + 880), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 868u, (r28 + 884), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 872u, (r28 + 888), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 16640));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 924u, (r28 + 940), f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r4 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 928u, (r28 + 944), f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r4 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 932u, (r28 + 948), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 876u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 876u, (r28 + 892), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 880u, (r28 + 896), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 884u, (r28 + 900), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 948u, (r28 + 964), f6.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 936u, (r28 + 952), f6.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 952u, (r28 + 968), f6.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 940u, (r28 + 956), f6.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 956u, (r28 + 972), f6.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 944u, (r28 + 960), f6.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 960u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 964u, (r28 + 980), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 960u, (r28 + 976), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 968u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 972u, (r28 + 988), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 968u, (r28 + 984), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 976u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 980u, (r28 + 996), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 976u, (r28 + 992), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 984u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 984u, (r28 + 1000), r31);
        MemoryInline::WriteResolved32(guest_range_0, 988u, (r28 + 1004), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 992u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolved32(guest_range_0, 992u, (r28 + 1008), r31);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 996u, (r28 + 1012), f7.d);
    }
    r3 = r28;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1000u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1000u, (r28 + 1016), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1004u, (r28 + 1020), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1008u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1008u, (r28 + 1024), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1012u, (r28 + 1028), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1016u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1016u, (r28 + 1032), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1020u, (r28 + 1036), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1024u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1024u, (r28 + 1040), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1028u, (r28 + 1044), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1032u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1032u, (r28 + 1048), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1036u, (r28 + 1052), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1040u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1040u, (r28 + 1056), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1044u, (r28 + 1060), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1048u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1048u, (r28 + 1064), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1052u, (r28 + 1068), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1056u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1056u, (r28 + 1072), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1060u, (r28 + 1076), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1064u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1064u, (r28 + 1080), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1068u, (r28 + 1084), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1072u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1072u, (r28 + 1088), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1076u, (r28 + 1092), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1080u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1080u, (r28 + 1096), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1084u, (r28 + 1100), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1088u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1088u, (r28 + 1104), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1092u, (r28 + 1108), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1096u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1096u, (r28 + 1112), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1100u, (r28 + 1116), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1104u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1104u, (r28 + 1120), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1108u, (r28 + 1124), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1112u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1112u, (r28 + 1128), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1116u, (r28 + 1132), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1120u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1120u, (r28 + 1136), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1124u, (r28 + 1140), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1128u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1128u, (r28 + 1144), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1132u, (r28 + 1148), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1136u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1136u, (r28 + 1152), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1140u, (r28 + 1156), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1144u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1144u, (r28 + 1160), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1148u, (r28 + 1164), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1152u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1152u, (r28 + 1168), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1156u, (r28 + 1172), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1160u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1160u, (r28 + 1176), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1164u, (r28 + 1180), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1168u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1168u, (r28 + 1184), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1172u, (r28 + 1188), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1176u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1176u, (r28 + 1192), r31);
        MemoryInline::WriteResolved32(guest_range_0, 1180u, (r28 + 1196), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1184u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1184u, (r28 + 1200), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1188u, (r28 + 1204), f7.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 1192u, (r28 + 1208), f7.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1196u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1200u, (r28 + 1216), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1196u, (r28 + 1212), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1220u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1224u, (r28 + 1240), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1220u, (r28 + 1236), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1228u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1232u, (r28 + 1248), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 1228u, (r28 + 1244), f3.d);
    }
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFDE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807C7364 func_807C7364 preserves=true fpr_mask=0x00000000
