#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D42E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807D42E8;

loc_807D42E8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    ctx->lr = 0x807D430Cu;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x807D9798u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x808D0000u;
    r29 = 0x805A0000u;
    r3 = (r3 + 11336);
    r30 = 0x80510000u;
    r0 = (r3 + 8);
    MemoryInline::FlatWrite32((r31 + 12), r3);
    r3 = (r31 + 1012);
    r4 = (r29 + 8112);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    r5 = (r30 + 13824);
    r6 = 12;
    r7 = 2;
    ctx->lr = 0x807D4340u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r31 + 1036);
    r4 = (r29 + 8112);
    r5 = (r30 + 13824);
    r6 = 12;
    r7 = 2;
    ctx->lr = 0x807D4358u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r31 + 1060);
    r4 = (r29 + 8112);
    r5 = (r30 + 13824);
    r6 = 12;
    r7 = 2;
    ctx->lr = 0x807D4370u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r31 + 1084);
    r4 = (r29 + 8112);
    r5 = (r30 + 13824);
    r6 = 12;
    r7 = 2;
    ctx->lr = 0x807D4388u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 16));
    r30 = 0;
    r4 = (r31 + 624);
    r5 = MemoryInline::FlatRead32((r3 + 676));
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 20), 0, 632u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r31 + 20), r5);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 608u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 612u, (r31 + 632), r30);
        MemoryInline::WriteResolved32(guest_range_0, 608u, (r31 + 628), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 604u, (r31 + 624), r30);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 620u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 624u, (r31 + 644), r30);
        MemoryInline::WriteResolved32(guest_range_0, 620u, (r31 + 640), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 616u, (r31 + 636), r30);
    MemoryInline::WriteResolved32(guest_range_0, 628u, (r31 + 648), r30);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 128));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 132));
    ctx->lr = 0x807D43C4u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x807CA068u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r31 + 612), r3);
    r4 = (r31 + 636);
    r5 = MemoryInline::FlatRead32((r31 + 20));
    r3 = MemoryInline::FlatRead32((r31 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 136));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 140));
    ctx->lr = 0x807D43E0u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x807CA068u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (0 - r3);
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 608), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r31 + 612), r3);
    r0 = (r0 & ~r3);
    r5 = MemoryInline::FlatRead32((r31 + 20));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r31 + 620), r30);
    r3 = MemoryInline::FlatRead32((r31 + 16));
    r4 = (r31 + 664);
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r31 + 616), r30);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r31 + 608), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r31 + 672), r30);
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r31 + 668), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r31 + 664), r30);
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r31 + 676), r30);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 128));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 132));
    ctx->lr = 0x807D4424u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x807CA024u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (0 - r3);
    MemoryInline::FlatWrite32((r31 + 656), r3);
    r0 = (r0 & ~r3);
    r3 = r31;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    MemoryInline::FlatWrite32((r31 + 660), r30);
    MemoryInline::FlatWrite8((r31 + 652), static_cast<uint8_t>(r0));
    ctx->lr = 0x807D4444u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x807D4700u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
    ctx->lr = 0x807D444Cu;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x807D4D08u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    r29 = 0;
    r28 = 0;
}

loc_807D4454:
{
    r0 = MemoryInline::FlatRead32(r31);
    r4 = 1;
    r3 = (r0 + r28);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_807D446C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807D447C;
    }
}

loc_807D4470:
{
}

loc_807D4474:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_807D447C;
    }
}

loc_807D4478:
{
    r4 = 0;
}

loc_807D447C:
{
}

loc_807D4480:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_807D448C;
    }
}

loc_807D4484:
{
    r30 = MemoryInline::FlatRead32(r3);
    goto loc_807D4490;
}

loc_807D448C:
{
    r30 = 0;
}

loc_807D4490:
{
    r0 = MemoryInline::FlatRead32((r31 + 144));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_807D4498:
{
    r3 = MemoryInline::FlatRead32((r31 + 132));
    r4 = r31;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_2);
    MemoryInline::FlatWrite16((r30 + 290), static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D44B4;
    }
}

loc_807D44B0:
{
    r4 = (r31 + 8);
}

loc_807D44B4:
{
    MemoryInline::FlatWrite32((r30 + 284), r4);
    r3 = r30;
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800728F0u>(ctx);
    r0 = ctx->gpr[0];
    cr = ctx->cr;
    r3 = r30;
    r4 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800728F0u>(ctx);
    r0 = ctx->gpr[0];
    cr = ctx->cr;
    r3 = r30;
    r4 = 4;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800728F0u>(ctx);
    r0 = ctx->gpr[0];
    cr = ctx->cr;
    r29 = (r29 + 1);
    r28 = (r28 + 4);
}

loc_807D44E8:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(2))) {
        goto loc_807D4454;
    }
}

loc_807D44EC:
{
    r0 = 1;
    r30 = 0;
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 572), 0, 438u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r31 + 572), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r31 + 573), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r31 + 574), static_cast<uint8_t>(r30));
    // inline leaf 0x80008E84 (3 guest instruction(s))
    r3 = 0x802A0000u;
    r3 = (r3 + 16512);
    // end of inlined leaf 0x80008E84
    r0 = MemoryInline::FlatRead8((r3 + 105));
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 29696));
    r3 = r31;
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r31 + 575), static_cast<uint8_t>(r0));
    r4 = 8;
    MemoryInline::WriteResolved8(guest_range_2, 436u, (r31 + 1008), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_2, 437u, (r31 + 1009), static_cast<uint8_t>(r30));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 392u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 392u, (r31 + 964), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 396u, (r31 + 968), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 400u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 400u, (r31 + 972), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 404u, (r31 + 976), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 408u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 408u, (r31 + 980), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 412u, (r31 + 984), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 416u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 416u, (r31 + 988), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 420u, (r31 + 992), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 424u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 424u, (r31 + 996), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 428u, (r31 + 1000), f0.d);
    }
    // inline leaf 0x807D976C (11 guest instruction(s))
}

loc_inl1_0x807D976C:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r4 * 96);
    r3 = MemoryInline::FlatRead32((r3 + 260));
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl1_0x807D9784:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x807D9790;
    }
}

loc_inl1_0x807D9788:
{
    r3 = MemoryInline::FlatRead32((r3 + 28));
    goto loc_inl1_cont_807D976C;
}

loc_inl1_0x807D9790:
{
    r3 = -1;
}

loc_inl1_cont_807D976C:
{
    // end of inlined leaf 0x807D976C
    MemoryInline::FlatWrite32((r31 + 148), r3);
    r3 = r31;
    r4 = 9;
    // inline leaf 0x807D976C (11 guest instruction(s))
}

loc_inl2_0x807D976C:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r4 * 96);
    r3 = MemoryInline::FlatRead32((r3 + 260));
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl2_0x807D9784:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x807D9790;
    }
}

loc_inl2_0x807D9788:
{
    r3 = MemoryInline::FlatRead32((r3 + 28));
    goto loc_inl2_cont_807D976C;
}

loc_inl2_0x807D9790:
{
    r3 = -1;
}

loc_inl2_cont_807D976C:
{
    // end of inlined leaf 0x807D976C
    MemoryInline::FlatWrite32((r31 + 156), r3);
    r3 = r31;
    r4 = 11;
    // inline leaf 0x807D976C (11 guest instruction(s))
}

loc_inl3_0x807D976C:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r4 * 96);
    r3 = MemoryInline::FlatRead32((r3 + 260));
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl3_0x807D9784:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x807D9790;
    }
}

loc_inl3_0x807D9788:
{
    r3 = MemoryInline::FlatRead32((r3 + 28));
    goto loc_inl3_cont_807D976C;
}

loc_inl3_0x807D9790:
{
    r3 = -1;
}

loc_inl3_cont_807D976C:
{
    // end of inlined leaf 0x807D976C
    MemoryInline::FlatWrite32((r31 + 152), r3);
    r3 = r31;
    r4 = 12;
    // inline leaf 0x807D976C (11 guest instruction(s))
}

loc_inl4_0x807D976C:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r4 * 96);
    r3 = MemoryInline::FlatRead32((r3 + 260));
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl4_0x807D9784:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl4_0x807D9790;
    }
}

loc_inl4_0x807D9788:
{
    r3 = MemoryInline::FlatRead32((r3 + 28));
    goto loc_inl4_cont_807D976C;
}

loc_inl4_0x807D9790:
{
    r3 = -1;
}

loc_inl4_cont_807D976C:
{
    // end of inlined leaf 0x807D976C
    MemoryInline::FlatWrite32((r31 + 160), r3);
    r3 = r31;
    r4 = 1;
    // inline leaf 0x807D976C (11 guest instruction(s))
}

loc_inl5_0x807D976C:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r4 * 96);
    r3 = MemoryInline::FlatRead32((r3 + 260));
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl5_0x807D9784:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl5_0x807D9790;
    }
}

loc_inl5_0x807D9788:
{
    r3 = MemoryInline::FlatRead32((r3 + 28));
    goto loc_inl5_cont_807D976C;
}

loc_inl5_0x807D9790:
{
    r3 = -1;
}

loc_inl5_cont_807D976C:
{
    // end of inlined leaf 0x807D976C
    MemoryInline::FlatWrite32((r31 + 164), r3);
    r3 = r31;
    r4 = 2;
    // inline leaf 0x807D976C (11 guest instruction(s))
}

loc_inl6_0x807D976C:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r4 * 96);
    r3 = MemoryInline::FlatRead32((r3 + 260));
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl6_0x807D9784:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl6_0x807D9790;
    }
}

loc_inl6_0x807D9788:
{
    r3 = MemoryInline::FlatRead32((r3 + 28));
    goto loc_inl6_cont_807D976C;
}

loc_inl6_0x807D9790:
{
    r3 = -1;
}

loc_inl6_cont_807D976C:
{
    // end of inlined leaf 0x807D976C
    MemoryInline::FlatWrite32((r31 + 172), r3);
    r3 = r31;
    r4 = 4;
    // inline leaf 0x807D976C (11 guest instruction(s))
}

loc_inl7_0x807D976C:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r4 * 96);
    r3 = MemoryInline::FlatRead32((r3 + 260));
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl7_0x807D9784:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl7_0x807D9790;
    }
}

loc_inl7_0x807D9788:
{
    r3 = MemoryInline::FlatRead32((r3 + 28));
    goto loc_inl7_cont_807D976C;
}

loc_inl7_0x807D9790:
{
    r3 = -1;
}

loc_inl7_cont_807D976C:
{
    // end of inlined leaf 0x807D976C
    MemoryInline::FlatWrite32((r31 + 168), r3);
    r3 = r31;
    r4 = 5;
    // inline leaf 0x807D976C (11 guest instruction(s))
}

loc_inl8_0x807D976C:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r4 * 96);
    r3 = MemoryInline::FlatRead32((r3 + 260));
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl8_0x807D9784:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl8_0x807D9790;
    }
}

loc_inl8_0x807D9788:
{
    r3 = MemoryInline::FlatRead32((r3 + 28));
    goto loc_inl8_cont_807D976C;
}

loc_inl8_0x807D9790:
{
    r3 = -1;
}

loc_inl8_cont_807D976C:
{
    // end of inlined leaf 0x807D976C
    MemoryInline::FlatWrite32((r31 + 176), r3);
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807D42E8 func_807D42E8 preserves=true fpr_mask=0x00000000
