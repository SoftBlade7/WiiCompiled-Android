#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800C0F90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;
    uint32_t r5_addr_7 = 0;
    uint32_t r5_addr_8 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800C0F90;

loc_800C0F90:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r5 = 7;
    r6 = 7;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r7 = 6;
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = 0x80250000u;
    r31 = (r31 + -18328);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = MemoryInline::FlatRead32((r3 + 104));
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r4;
    r4 = 7;
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    r28 = r3;
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80171D20u>(ctx);
    r4 = MemoryInline::FlatRead32((r29 + 16));
    r3 = 0;
    r5 = r4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80171FD0u>(ctx);
    r4 = MemoryInline::FlatRead32((r29 + 16));
    r3 = 0;
    r5 = r4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80171FD0u>(ctx);
    r0 = MemoryInline::FlatRead8((r29 + 32));
    r3 = 2;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800C1004:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C100C;
    }
}

loc_800C1008:
{
    r3 = 1;
}

loc_800C100C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8016F3B8u>(ctx);
    r4 = MemoryInline::FlatRead32((r29 + 28));
    r3 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8017310Cu>(ctx);
    r4 = MemoryInline::FlatRead32((r29 + 28));
    r3 = (r28 + 48);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80173188u>(ctx);
    r3 = MemoryInline::FlatRead32((r29 + 28));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80173214u>(ctx);
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = 1;
    r5 = 0;
    r6 = 60;
    r7 = 0;
    r8 = 125;
    ctx->lr = 0x800C104Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8016E37Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 13;
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8016D3A4u>(ctx);
    r3 = 0;
    r4 = 255;
    r5 = 255;
    r6 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8017214Cu>(ctx);
    r3 = 0;
    r4 = 15;
    r5 = 15;
    r6 = 15;
    r7 = 14;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80171CE0u>(ctx);
    r3 = (r30 + 65536);
    r0 = MemoryInline::FlatRead16((r3 + -32194));
}

loc_800C1090:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C1100;
    }
}

loc_800C1094:
{
    r5 = MemoryInline::FlatRead8((r3 + -32184));
    r0 = (r31 + 128);
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = (r1 + 24);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -4);
    r8 = (r0 + r5);
    r5_addr_1 = (r5 + r0);
    r7 = MemoryInline::FlatRead8(r5_addr_1);
    r6 = MemoryInline::FlatRead8((r8 + 1));
    r5 = MemoryInline::FlatRead8((r8 + 2));
    r0 = MemoryInline::FlatRead8((r8 + 3));
    MemoryInline::FlatWriteRam8((r1 + 24), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 25), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 26), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 27), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80171ED4u>(ctx);
    r4 = (r30 + 30662);
    r3 = 9;
    r5 = 6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016E32Cu>(ctx);
    r4 = (r30 + 30902);
    r3 = 10;
    r5 = 6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016E32Cu>(ctx);
    r4 = (r30 + 65536);
    r3 = (r30 + 2304);
    r4 = MemoryInline::FlatRead16((r4 + -32194));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80172F64u>(ctx);
}

loc_800C1100:
{
    r3 = (r30 + 65536);
    r0 = (r31 + 72);
    r5 = MemoryInline::FlatRead8((r3 + -32186));
    r4 = (r1 + 20);
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r5 = (r5_rot_3 & -4);
    r8 = (r0 + r5);
    r5_addr_3 = (r5 + r0);
    r7 = MemoryInline::FlatRead8(r5_addr_3);
    r6 = MemoryInline::FlatRead8((r8 + 1));
    r5 = MemoryInline::FlatRead8((r8 + 2));
    r0 = MemoryInline::FlatRead8((r8 + 3));
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80171ED4u>(ctx);
    r3 = (r30 + 65536);
    r0 = MemoryInline::FlatRead16((r3 + -32204));
}

loc_800C114C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C1180;
    }
}

loc_800C1150:
{
    r4 = (r30 + 26240);
    r3 = 9;
    r5 = 6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016E32Cu>(ctx);
    r4 = (r30 + 26378);
    r3 = 10;
    r5 = 6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016E32Cu>(ctx);
    r4 = (r30 + 65536);
    r3 = r30;
    r4 = MemoryInline::FlatRead16((r4 + -32204));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80172F64u>(ctx);
}

loc_800C1180:
{
    r3 = (r30 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -32180));
}

loc_800C118C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C11A8;
    }
}

loc_800C1190:
{
    r0 = MemoryInline::FlatRead8((r29 + 32));
    r3 = 1;
}

loc_800C119C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C11A4;
    }
}

loc_800C11A0:
{
    r3 = 2;
}

loc_800C11A4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8016F3B8u>(ctx);
}

loc_800C11A8:
{
    r3 = (r30 + 65536);
    r0 = MemoryInline::FlatRead16((r3 + -32196));
}

loc_800C11B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C11EC;
    }
}

loc_800C11B8:
{
    r4 = MemoryInline::FlatRead32((r3 + -32216));
    r3 = 9;
    r5 = 6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016E32Cu>(ctx);
    r4 = (r30 + 65536);
    r3 = 10;
    r4 = MemoryInline::FlatRead32((r4 + -32212));
    r5 = 6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016E32Cu>(ctx);
    r4 = (r30 + 65536);
    r3 = MemoryInline::FlatRead32((r4 + -32208));
    r4 = MemoryInline::FlatRead16((r4 + -32196));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80172F64u>(ctx);
}

loc_800C11EC:
{
    r3 = (r30 + 65536);
    r0 = MemoryInline::FlatRead16((r3 + -32200));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800C11F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C1270;
    }
}

loc_800C11FC:
{
    r5 = MemoryInline::FlatRead8((r3 + -32185));
    r0 = (r31 + 96);
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r4 = (r1 + 16);
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r5 = (r5_rot_4 & -4);
    r8 = (r0 + r5);
    r5_addr_4 = (r5 + r0);
    r7 = MemoryInline::FlatRead8(r5_addr_4);
    r6 = MemoryInline::FlatRead8((r8 + 1));
    r5 = MemoryInline::FlatRead8((r8 + 2));
    r0 = MemoryInline::FlatRead8((r8 + 3));
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80171ED4u>(ctx);
    r4 = (r30 + 65536);
    r3 = 9;
    r4 = MemoryInline::FlatRead32((r4 + -32228));
    r5 = 6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016E32Cu>(ctx);
    r4 = (r30 + 65536);
    r3 = 10;
    r4 = MemoryInline::FlatRead32((r4 + -32224));
    r5 = 6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016E32Cu>(ctx);
    r4 = (r30 + 65536);
    r3 = MemoryInline::FlatRead32((r4 + -32220));
    r4 = MemoryInline::FlatRead16((r4 + -32200));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80172F64u>(ctx);
}

loc_800C1270:
{
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 0;
    r5 = MemoryInline::FlatRead32((r29 + 8));
    r6 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8017214Cu>(ctx);
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = 1;
    r5 = 4;
    r6 = 60;
    r7 = 0;
    r8 = 125;
    ctx->lr = 0x800C12A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8016E37Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 13;
    r4 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8016D3A4u>(ctx);
    r3 = (r30 + 65536);
    r0 = MemoryInline::FlatRead16((r3 + -32198));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800C12B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C139C;
    }
}

loc_800C12BC:
{
    r3 = 0;
    r4 = 15;
    r5 = 14;
    r6 = 8;
    r7 = 14;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80171CE0u>(ctx);
    r8 = MemoryInline::FlatRead32((r29 + 24));
    r3 = 0;
    r4 = 0;
    r5 = 0;
    r6 = 3;
    r7 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x80171D60u>(ctx);
    r3 = (r30 + 65536);
    r0 = (r31 + 184);
    r5 = MemoryInline::FlatRead8((r3 + -32182));
    r4 = (r1 + 12);
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r5 = (r5_rot_6 & -4);
    r8 = (r0 + r5);
    r5_addr_6 = (r5 + r0);
    r7 = MemoryInline::FlatRead8(r5_addr_6);
    r6 = MemoryInline::FlatRead8((r8 + 1));
    r5 = MemoryInline::FlatRead8((r8 + 2));
    r0 = MemoryInline::FlatRead8((r8 + 3));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80171ED4u>(ctx);
    r3 = (r30 + 65536);
    r4 = MemoryInline::FlatRead32((r29 + 8));
    r3 = (r3 + -32324);
    ctx->lr = 0x800C1340u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80170F2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = (r30 + 26516);
    r3 = 9;
    r5 = 6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016E32Cu>(ctx);
    r4 = (r30 + 27554);
    r3 = 10;
    r5 = 6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016E32Cu>(ctx);
    r4 = (r30 + 29030);
    r3 = 13;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016E32Cu>(ctx);
    r4 = (r30 + 65536);
    r3 = (r30 + 192);
    r4 = MemoryInline::FlatRead16((r4 + -32198));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80172F64u>(ctx);
    r8 = MemoryInline::FlatRead32((r29 + 24));
    r3 = 0;
    r4 = 0;
    r5 = 0;
    r6 = 0;
    r7 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x80171D60u>(ctx);
}

loc_800C139C:
{
    r3 = 0;
    r4 = 14;
    r5 = 8;
    r6 = 9;
    r7 = 15;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80171CE0u>(ctx);
    r3 = (r30 + 65536);
    r0 = (r31 + 72);
    r5 = MemoryInline::FlatRead8((r3 + -32186));
    r4 = (r1 + 8);
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r5_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r5 = (r5_rot_8 & -4);
    r8 = (r0 + r5);
    r5_addr_8 = (r5 + r0);
    r7 = MemoryInline::FlatRead8(r5_addr_8);
    r6 = MemoryInline::FlatRead8((r8 + 1));
    r5 = MemoryInline::FlatRead8((r8 + 2));
    r0 = MemoryInline::FlatRead8((r8 + 3));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80171ED4u>(ctx);
    r4 = MemoryInline::FlatRead32((r29 + 16));
    r3 = 0;
    r5 = (r4 + 1);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80171FD0u>(ctx);
    r3 = (r30 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -32180));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800C1410:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C142C;
    }
}

loc_800C1414:
{
    r0 = MemoryInline::FlatRead8((r29 + 32));
    r3 = 2;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800C1420:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C1428;
    }
}

loc_800C1424:
{
    r3 = 1;
}

loc_800C1428:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8016F3B8u>(ctx);
}

loc_800C142C:
{
    r3 = (r30 + 65536);
    r4 = MemoryInline::FlatRead32((r29 + 8));
    r3 = (r3 + -32356);
    ctx->lr = 0x800C143Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80170F2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = (r30 + 29410);
    r3 = 9;
    r5 = 6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016E32Cu>(ctx);
    r4 = (r30 + 29806);
    r3 = 10;
    r5 = 6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016E32Cu>(ctx);
    r4 = (r30 + 30202);
    r3 = 13;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016E32Cu>(ctx);
    r4 = (r30 + 65536);
    r3 = (r30 + 1568);
    r4 = MemoryInline::FlatRead16((r4 + -32202));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80172F64u>(ctx);
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
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800C0F90 func_800C0F90 preserves=true fpr_mask=0x00000000
