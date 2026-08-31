#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8077F22C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r9_rot_0 = 0;
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
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8077F22C;

loc_8077F22C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x809C0000u;
    r31 = (r31 + 11760);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x808A0000u;
    r30 = (r30 + 17872);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    MemoryInline::FlatWriteFloat32((r3 + 316), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 320), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 324), f0.d);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    ctx->lr = 0x8077F274u;
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
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229D74u>(ctx);
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r29 + 260));
    r6 = (r31 + 64);
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 16), 0, 60u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 48u, (r31 + 64));
    r5 = (r31 + 40);
    r28 = MemoryInline::FlatRead32((r3 + 16));
    r4 = (r31 + 16);
    r3 = MemoryInline::FlatRead32((r28 + 108));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 100), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 124), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 52u, (r6 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 128), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 56u, (r6 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 132), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r31 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 112), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 28u, (r5 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 116), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r5 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 120), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r31 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r3 + 100), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r4 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 104), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 108), f0.d);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8077F2E4u;
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
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r28 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 12));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8077F2F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8077F324;
    }
}

loc_8077F2F4:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 16));
    r3 = (r1 + 12);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 20));
    r4 = (r1 + 8);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 16), f2.d);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800851E0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 20), f0.d);
}

loc_8077F324:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 316));
    r4 = 0x802A0000u;
    MemoryInline::FlatWriteFloat32((r28 + 40), f0.d);
    r6 = (r4 + 16664);
    f0.d = MemoryInline::FlatReadFloat32(r30);
    r0 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r29 + 320));
    r3 = 9216;
    MemoryInline::FlatWriteFloat32((r28 + 44), f1.d);
    r5 = 4;
    f1.d = MemoryInline::FlatReadFloat32((r29 + 324));
    MemoryInline::FlatWriteFloat32((r28 + 48), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 16664));
    MemoryInline::FlatWriteFloat32((r29 + 264), f1.d);
    r4 = MemoryInline::FlatRead32((r29 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r6 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 268), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 8));
    MemoryInline::FlatWriteFloat32((r29 + 272), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 276), f0.d);
    MemoryInline::FlatWrite8((r29 + 280), static_cast<uint8_t>(r0));
    ctx->lr = 0x8077F37Cu;
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
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229E04u>(ctx);
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 31;
    guest_range_1 = MemoryInline::ResolveRangeHost((r29 + 284), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r29 + 284), r3);
    r4 = 0;
    r8 = 0;
    r5 = 0;
    ctr = r0;
}

loc_8077F394:
{
    r0 = (r8 + 9);
    r6 = (r8 + 18);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r7 = (r7_rot_2 & -4);
    r4 = (r4 + 8);
    r7 = (r3 + r7);
    r3_addr_2 = (r3 + r5);
    MemoryInline::FlatWrite32(r3_addr_2, r7);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r6 = (r6_rot_2 & -4);
    r0 = (r8 + 27);
    r6 = (r3 + r6);
    MemoryInline::FlatWrite32(r7, r6);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r5 = (r5 + 288);
    r7 = (r3 + r0);
    MemoryInline::FlatWrite32(r6, r7);
    r0 = (r8 + 36);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r6 = (r3 + r0);
    MemoryInline::FlatWrite32(r7, r6);
    r0 = (r8 + 45);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r7 = (r3 + r0);
    MemoryInline::FlatWrite32(r6, r7);
    r0 = (r8 + 54);
    r6 = (r8 + 63);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r9 = (r3 + r0);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r6 = (r6_rot_3 & -4);
    r0 = (r8 + 72);
    MemoryInline::FlatWrite32(r7, r9);
    r6 = (r3 + r6);
    r8 = (r8 + 72);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    MemoryInline::FlatWrite32(r9, r6);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32(r6, r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8077F394;
    }
}

loc_8077F424:
{
    r7 = (r4 + 1);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_7 & -8);
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r6 = (r6_rot_4 & -8);
    r5 = (r4 + 2);
    r7 = (r6 + r7);
    r28 = 0;
    r6 = (r0 + r4);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_8 & -8);
    r0 = (r0 + r5);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r7 = (r7_rot_3 & -4);
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r9 = (r9_rot_0 & -4);
    r5 = (r4 + 3);
    r10_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r10 = (r10_rot_0 & -4);
    r11 = (r3 + r7);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_9 & -8);
    r7 = (r4 + 4);
    r0 = (r0 + r5);
    r6 = (r4 + 5);
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r8 = (r8_rot_0 & -4);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r5 = (r5_rot_0 & -8);
    r7 = (r5 + r7);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r0 = (r0_rot_10 & -8);
    r5 = (r4 + 6);
    r3_addr_3 = (r3 + r10);
    MemoryInline::FlatWrite32(r3_addr_3, r11);
    r9 = (r3 + r9);
    r0 = (r0 + r6);
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r6 = (r6_rot_5 & -4);
    MemoryInline::FlatWrite32(r11, r9);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_11 & -8);
    r8 = (r3 + r8);
    r0 = (r0 + r5);
    r4 = (r4 + 7);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -4);
    MemoryInline::FlatWrite32(r9, r8);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_12 & -8);
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r7 = (r7_rot_4 & -4);
    r0 = (r0 + r4);
    r6 = (r3 + r6);
    r4 = (r3 + r7);
    MemoryInline::FlatWrite32(r8, r4);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r5 = (r3 + r5);
    r3_addr_4 = (r3 + r7);
    MemoryInline::FlatWrite32(r3_addr_4, r6);
    r0 = (r3 + r0);
    r4 = 28;
    MemoryInline::FlatWrite32(r6, r5);
    MemoryInline::FlatWrite32(r5, r0);
    MemoryInline::FlatWriteRam32((r3 + 9180), r28);
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r29 + 288), r3);
    r3 = (r29 + 292);
    // inline leaf 0x800AEF60 (6 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r4));
    // end of inlined leaf 0x800AEF60
    f1.d = MemoryInline::FlatReadFloat32((r30 + 8));
    r3 = 256;
    f4.d = MemoryInline::FlatReadFloat32((r30 + 24));
    r0 = 255;
    f3.d = MemoryInline::FlatReadFloat32((r30 + 28));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 32));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r29 + 304), r3);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 60u, (r29 + 344), f4.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 96u, (r29 + 380), f3.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 108u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 108u, (r29 + 392), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 112u, (r29 + 396), f1.d);
    }
    MemoryInline::WriteResolved8(guest_range_1, 116u, (r29 + 400), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_1, 117u, (r29 + 401), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_1, 118u, (r29 + 402), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_1, 119u, (r29 + 403), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 100u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 100u, (r29 + 384), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 104u, (r29 + 388), f0.d);
    }
    // inline leaf 0x8051BED0 (12 guest instruction(s))
}

loc_inl1_0x8051BED0:
{
    r4 = 0x80380000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + 24520));
    r4 = MemoryInline::FlatRead32((r4 + 84));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl1_0x8051BEEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8051BEF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_inl1_0x8051BEF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8051BEF8:
{
    r3 = r4;
    goto loc_inl1_cont_8051BED0;
}

loc_inl1_return:
{
}

loc_inl1_cont_8051BED0:
{
    // end of inlined leaf 0x8051BED0
    r3 = MemoryInline::FlatRead32((r3 + 3220));
    ctx->lr = 0x8077F544u;
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
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229D74u>(ctx);
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite8((r29 + 440), static_cast<uint8_t>(r28));
    r0 = MemoryInline::FlatRead8((r31 + 240));
    MemoryInline::FlatWriteRam8((r31 + 241), static_cast<uint8_t>(r0));
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
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8077F22C func_8077F22C preserves=true fpr_mask=0x00000000
