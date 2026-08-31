#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8016B850(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mdest_10 = 0;
    uint32_t r4_mdest_11 = 0;
    uint32_t r4_mdest_12 = 0;
    uint32_t r4_mdest_13 = 0;
    uint32_t r4_mdest_14 = 0;
    uint32_t r4_mdest_15 = 0;
    uint32_t r4_mdest_16 = 0;
    uint32_t r4_mdest_17 = 0;
    uint32_t r4_mdest_18 = 0;
    uint32_t r4_mdest_19 = 0;
    uint32_t r4_mdest_2 = 0;
    uint32_t r4_mdest_20 = 0;
    uint32_t r4_mdest_21 = 0;
    uint32_t r4_mdest_22 = 0;
    uint32_t r4_mdest_23 = 0;
    uint32_t r4_mdest_24 = 0;
    uint32_t r4_mdest_3 = 0;
    uint32_t r4_mdest_4 = 0;
    uint32_t r4_mdest_5 = 0;
    uint32_t r4_mdest_6 = 0;
    uint32_t r4_mdest_7 = 0;
    uint32_t r4_mdest_8 = 0;
    uint32_t r4_mdest_9 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_10 = 0;
    uint32_t r4_mrot_11 = 0;
    uint32_t r4_mrot_12 = 0;
    uint32_t r4_mrot_13 = 0;
    uint32_t r4_mrot_14 = 0;
    uint32_t r4_mrot_15 = 0;
    uint32_t r4_mrot_16 = 0;
    uint32_t r4_mrot_17 = 0;
    uint32_t r4_mrot_18 = 0;
    uint32_t r4_mrot_19 = 0;
    uint32_t r4_mrot_2 = 0;
    uint32_t r4_mrot_20 = 0;
    uint32_t r4_mrot_21 = 0;
    uint32_t r4_mrot_22 = 0;
    uint32_t r4_mrot_23 = 0;
    uint32_t r4_mrot_24 = 0;
    uint32_t r4_mrot_3 = 0;
    uint32_t r4_mrot_4 = 0;
    uint32_t r4_mrot_5 = 0;
    uint32_t r4_mrot_6 = 0;
    uint32_t r4_mrot_7 = 0;
    uint32_t r4_mrot_8 = 0;
    uint32_t r4_mrot_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_10 = 0;
    uint32_t r4_rot_11 = 0;
    uint32_t r4_rot_12 = 0;
    uint32_t r4_rot_13 = 0;
    uint32_t r4_rot_14 = 0;
    uint32_t r4_rot_15 = 0;
    uint32_t r4_rot_16 = 0;
    uint32_t r4_rot_17 = 0;
    uint32_t r4_rot_18 = 0;
    uint32_t r4_rot_19 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_20 = 0;
    uint32_t r4_rot_21 = 0;
    uint32_t r4_rot_22 = 0;
    uint32_t r4_rot_23 = 0;
    uint32_t r4_rot_24 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r7_mdest_0 = 0;
    uint32_t r7_mrot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r8_mdest_0 = 0;
    uint32_t r8_mrot_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r9_mdest_0 = 0;
    uint32_t r9_mrot_0 = 0;
    uint32_t r9_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t mkw_fifo_burst_0[28];

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_8016B850;

loc_8016B850:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r27 = r3;
    r3 = MemoryInline::FlatRead32((r13 + -29392));
    r26 = r4;
    ctx->lr = 0x8016B874u;
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
    InvokeDirectCpu<0x801A0504u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    r13 = ctx->gpr[13];
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
    r31 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = 0;
    r29 = 1;
    r3 = 1;
    MemoryInline::FlatWrite8((r31 + 1528), static_cast<uint8_t>(r0));
    r4 = 0;
    MemoryInline::FlatWrite8((r31 + 1529), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r31 + 1530), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite32((r31 + 1508), r0);
    MemoryInline::FlatWrite32((r31 + 1512), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8016E5C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r4 = -872415232;
    r5 = (r4 + 12288);
    MemoryInline::FlatWrite32((r13 + -25716), r4);
    r3 = (r4 + 4096);
    r0 = (r4 + 16384);
    MemoryInline::FlatWrite32((r13 + -25720), r5);
    MemoryInline::FlatWrite32((r13 + -25712), r3);
    MemoryInline::FlatWrite32((r13 + -25708), r0);
    ctx->lr = 0x8016B8C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8016D180u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r28 = 0x80340000u;
    r4 = r27;
    r5 = r26;
    r3 = (r28 + 14144);
    ctx->lr = 0x8016B8D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8016C7C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = (r28 + 14144);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8016C94Cu>(ctx);
    r3 = (r28 + 14144);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8016CB2Cu>(ctx);
    r0 = MemoryInline::FlatRead32((r13 + -25684));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8016B8F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8016B904;
    }
}

loc_8016B8F4:
{
    r3 = 0x80290000u;
    r3 = (r3 + -24688);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A8238u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    MemoryInline::FlatWrite32((r13 + -25684), r29);
}

loc_8016B904:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x8016EE14u>(ctx);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8012E630u>(ctx);
    r3 = ctx->gpr[3];
    r4 = 201392128;
    r28 = r3;
    r3 = (r4 + -32768);
    ctx->lr = 0x8016B91Cu;
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
    InvokeDirectCpu<0x8012E64Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    r13 = ctx->gpr[13];
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
    r3 = (r28 | 1073741824);
    ctx->lr = 0x8016B924u;
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
    InvokeDirectCpu<0x8012E638u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    r13 = ctx->gpr[13];
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
    r3 = MemoryInline::FlatRead32((r2 + -26840));
    r8 = 0;
    r0 = 15;
    r5 = 255;
    MemoryInline::FlatWrite32((r3 + 596), r8);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r5_mrot_0 = (r5_rot_0 & -16777216);
    r5_mdest_0 = (r5 & 16777215);
    r5 = (r5_mdest_0 | r5_mrot_0);
    r0 = 34;
    r4 = 0;
    MemoryInline::FlatWrite32((r3 + 372), r5);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r4_mrot_0 = (r4_rot_0 & -16777216);
    r4_mdest_0 = (r4 & 16777215);
    r4 = (r4_mdest_0 | r4_mrot_0);
    r0 = 8;
    r9 = r3;
    MemoryInline::FlatWrite32((r3 + 124), r4);
    r26 = 0;
    r10 = 192;
    r6 = 255;
    ctr = r0;
}

loc_8016B968:
{
    MemoryInline::FlatWrite32((r9 + 384), r8);
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(31));
    r12 = (r12_rot_2 & 2147483647);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(1));
    r7 = (r7_rot_2 & -4);
    r11 = (r10 + 1);
    MemoryInline::FlatWrite32((r9 + 448), r8);
    r27 = (r3 + r7);
    r26 = (r26 + 1);
    r5 = (r12 + 246);
    MemoryInline::FlatWrite32((r27 + 336), r8);
    r0 = (r12 + 40);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(1));
    r7 = (r7_rot_3 & -4);
    r12_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(31));
    r12 = (r12_rot_3 & 2147483647);
    MemoryInline::FlatWrite32((r9 + 1444), r6);
    r26 = (r26 + 1);
    r4 = MemoryInline::FlatRead32((r9 + 384));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(24));
    r4_mrot_2 = (r4_rot_2 & -16777216);
    r4_mdest_2 = (r4 & 16777215);
    r4 = (r4_mdest_2 | r4_mrot_2);
    MemoryInline::FlatWrite32((r9 + 384), r4);
    r4 = MemoryInline::FlatRead32((r9 + 448));
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(24));
    r4_mrot_3 = (r4_rot_3 & -16777216);
    r4_mdest_3 = (r4 & 16777215);
    r4 = (r4_mdest_3 | r4_mrot_3);
    r11 = (r10 + 3);
    r10 = (r10 + 2);
    MemoryInline::FlatWrite32((r9 + 448), r4);
    r4 = MemoryInline::FlatRead32((r27 + 512));
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r4_mrot_4 = (r4_rot_4 & -16777216);
    r4_mdest_4 = (r4 & 16777215);
    r4 = (r4_mdest_4 | r4_mrot_4);
    r5 = (r12 + 246);
    MemoryInline::FlatWrite32((r27 + 512), r4);
    r4 = MemoryInline::FlatRead32((r27 + 336));
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r4_mrot_5 = (r4_rot_5 & -16777216);
    r4_mdest_5 = (r4 & 16777215);
    r4 = (r4_mdest_5 | r4_mrot_5);
    r0 = (r12 + 40);
    MemoryInline::FlatWrite32((r27 + 336), r4);
    r27 = (r3 + r7);
    MemoryInline::FlatWrite32((r9 + 388), r8);
    MemoryInline::FlatWrite32((r9 + 452), r8);
    MemoryInline::FlatWrite32((r27 + 336), r8);
    MemoryInline::FlatWrite32((r9 + 1448), r6);
    r4 = MemoryInline::FlatRead32((r9 + 388));
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(24));
    r4_mrot_6 = (r4_rot_6 & -16777216);
    r4_mdest_6 = (r4 & 16777215);
    r4 = (r4_mdest_6 | r4_mrot_6);
    r10 = (r10 + 2);
    MemoryInline::FlatWrite32((r9 + 388), r4);
    r4 = MemoryInline::FlatRead32((r9 + 452));
    r4_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(24));
    r4_mrot_7 = (r4_rot_7 & -16777216);
    r4_mdest_7 = (r4 & 16777215);
    r4 = (r4_mdest_7 | r4_mrot_7);
    MemoryInline::FlatWrite32((r9 + 452), r4);
    r9 = (r9 + 8);
    r4 = MemoryInline::FlatRead32((r27 + 512));
    r4_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r4_mrot_8 = (r4_rot_8 & -16777216);
    r4_mdest_8 = (r4 & 16777215);
    r4 = (r4_mdest_8 | r4_mrot_8);
    MemoryInline::FlatWrite32((r27 + 512), r4);
    r4 = MemoryInline::FlatRead32((r27 + 336));
    r4_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r4_mrot_9 = (r4_rot_9 & -16777216);
    r4_mdest_9 = (r4 & 16777215);
    r4 = (r4_mdest_9 | r4_mrot_9);
    MemoryInline::FlatWrite32((r27 + 336), r4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8016B968;
    }
}

loc_8016BA30:
{
    r0 = 39;
    r4 = 0;
    r4_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r4_mrot_10 = (r4_rot_10 & -16777216);
    r4_mdest_10 = (r4 & 16777215);
    r4 = (r4_mdest_10 | r4_mrot_10);
    r5 = 48;
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 368), r4);
    ctr = r0;
}

loc_8016BA4C:
{
    r4 = 0;
    r6 = (r5 + 1);
    r4_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r4_mrot_12 = (r4_rot_12 & -16777216);
    r4_mdest_12 = (r4 & 16777215);
    r4 = (r4_mdest_12 | r4_mrot_12);
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 264), 0, 48u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 264), r4);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(24));
    r0_mrot_2 = (r0_rot_2 & -16777216);
    r0_mdest_2 = (r0 & 16777215);
    r0 = (r0_mdest_2 | r0_mrot_2);
    r6 = (r5 + 3);
    r5 = (r5 + 2);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 296), r0);
    r4 = 0;
    r4_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r4_mrot_13 = (r4_rot_13 & -16777216);
    r4_mdest_13 = (r4 & 16777215);
    r4 = (r4_mdest_13 | r4_mrot_13);
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 268), r4);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(24));
    r0_mrot_3 = (r0_rot_3 & -16777216);
    r0_mdest_3 = (r0 & 16777215);
    r0 = (r0_mdest_3 | r0_mrot_3);
    r6 = (r5 + 3);
    r5 = (r5 + 2);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 300), r0);
    r4 = 0;
    r4_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r4_mrot_14 = (r4_rot_14 & -16777216);
    r4_mdest_14 = (r4 & 16777215);
    r4 = (r4_mdest_14 | r4_mrot_14);
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 272), r4);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(24));
    r0_mrot_4 = (r0_rot_4 & -16777216);
    r0_mdest_4 = (r0 & 16777215);
    r0 = (r0_mdest_4 | r0_mrot_4);
    r6 = (r5 + 3);
    r5 = (r5 + 2);
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 304), r0);
    r4 = 0;
    r4_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r4_mrot_15 = (r4_rot_15 & -16777216);
    r4_mdest_15 = (r4 & 16777215);
    r4 = (r4_mdest_15 | r4_mrot_15);
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 276), r4);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(24));
    r0_mrot_5 = (r0_rot_5 & -16777216);
    r0_mdest_5 = (r0 & 16777215);
    r0 = (r0_mdest_5 | r0_mrot_5);
    r5 = (r5 + 2);
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 308), r0);
    r3 = (r3 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8016BA4C;
    }
}

loc_8016BAD4:
{
    r30 = MemoryInline::FlatRead32((r2 + -26840));
    r3 = 274857984;
    r4 = 32;
    r0 = 33;
    r5 = MemoryInline::FlatRead32((r30 + 328));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r5_mrot_1 = (r5_rot_1 & -16777216);
    r5_mdest_1 = (r5 & 16777215);
    r5 = (r5_mdest_1 | r5_mrot_1);
    r8 = 65;
    r7 = 66;
    MemoryInline::FlatWrite32((r30 + 328), r5);
    r6 = 64;
    r5 = 67;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -26836));
    r4 = MemoryInline::FlatRead32((r30 + 332));
    r4_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r4_mrot_16 = (r4_rot_16 & -16777216);
    r4_mdest_16 = (r4 & 16777215);
    r4 = (r4_mdest_16 | r4_mrot_16);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26832));
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 332), r4);
    r4 = 0x80000000u;
    r3 = (r3 + 19923);
    r9 = MemoryInline::FlatRead32((r30 + 544));
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(24));
    r9_mrot_0 = (r9_rot_0 & -16777216);
    r9_mdest_0 = (r9 & 16777215);
    r9 = (r9_mdest_0 | r9_mrot_0);
    MemoryInline::FlatWrite32((r30 + 544), r9);
    r8 = MemoryInline::FlatRead32((r30 + 548));
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r8_mrot_0 = (r8_rot_0 & -16777216);
    r8_mdest_0 = (r8 & 16777215);
    r8 = (r8_mdest_0 | r8_mrot_0);
    MemoryInline::FlatWrite32((r30 + 548), r8);
    r7 = MemoryInline::FlatRead32((r30 + 552));
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(24));
    r7_mrot_0 = (r7_rot_4 & -16777216);
    r7_mdest_0 = (r7 & 16777215);
    r7 = (r7_mdest_0 | r7_mrot_0);
    MemoryInline::FlatWrite32((r30 + 552), r7);
    r6 = MemoryInline::FlatRead32((r30 + 556));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r6_mrot_0 = (r6_rot_0 & -16777216);
    r6_mdest_0 = (r6 & 16777215);
    r6 = (r6_mdest_0 | r6_mrot_0);
    MemoryInline::FlatWrite32((r30 + 556), r6);
    r5 = MemoryInline::FlatRead32((r30 + 588));
    r5 = (r5 & -385);
    MemoryInline::FlatWrite32((r30 + 588), r5);
    MemoryInline::FlatWriteFloat32((r30 + 1376), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 1372), f0.d);
    MemoryInline::FlatWrite32((r30 + 1532), r0);
    MemoryInline::FlatWrite8((r30 + 1531), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 248));
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r3) * static_cast<uint64_t>(r0)) >> 32));
    r26_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r26 = (r26_rot_0 & 134217727);
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x80171C28u>(ctx);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(21));
    r0 = (r0_rot_6 & 2097151);
    r29 = -872349696;
    r28 = 97;
    r0 = (r0 | 1761607680);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r28));
    r0 = (r0 | 1024);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x80171C28u>(ctx);
    r3 = 1041235968;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r28));
    r0 = (r3 + -31775);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r26)) >> 32));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(22));
    r0 = (r0_rot_7 & 4194303);
    r0 = (r0 | 1174405120);
    r0 = (r0 | 512);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x8016B720u>(ctx);
    r28 = 0x80290000u;
    r29 = (r30 + 600);
    r27 = (r30 + 728);
    r30 = (r30 + 856);
    r28 = (r28 + -24880);
    r26 = 0;
}

loc_8016BBD8:
{
    r5 = MemoryInline::FlatRead32(r28);
    r3 = r29;
    r7 = MemoryInline::FlatRead32((r28 + 32));
    r4 = 0;
    r6 = 0;
    r8 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x8017103Cu>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r5 = MemoryInline::FlatRead32((r28 + 64));
    r3 = r27;
    r7 = MemoryInline::FlatRead32((r28 + 96));
    r4 = 0;
    r6 = 0;
    r8 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x8017103Cu>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r5 = MemoryInline::FlatRead32((r28 + 128));
    r3 = r30;
    r7 = MemoryInline::FlatRead32((r28 + 160));
    r4 = 1;
    r6 = 0;
    r8 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x8017103Cu>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r26 = (r26 + 1);
    r29 = (r29 + 16);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(8));
}

loc_8016BC38:
{
    r27 = (r27 + 16);
    r30 = (r30 + 16);
    r28 = (r28 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8016BBD8;
    }
}

loc_8016BC48:
{
    r29 = (r31 + 984);
    r27 = 0;
    r28 = 786432;
}

loc_8016BC54:
{
    r3 = r29;
    r4 = r28;
    r5 = 16;
    // inline leaf 0x801710F0 (8 guest instruction(s))
    r0 = (r4 + -524288);
    r4 = 0;
    r4_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(23));
    r4_mrot_18 = (r4_rot_18 & 1023);
    r4_mdest_18 = (r4 & -1024);
    r4 = (r4_mdest_18 | r4_mrot_18);
    r0 = 101;
    r4_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(10));
    r4_mrot_19 = (r4_rot_19 & 2096128);
    r4_mdest_19 = (r4 & -2096129);
    r4 = (r4_mdest_19 | r4_mrot_19);
    r4_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r4_mrot_20 = (r4_rot_20 & -16777216);
    r4_mdest_20 = (r4 & 16777215);
    r4 = (r4_mdest_20 | r4_mrot_20);
    MemoryInline::FlatWrite32(r3, r4);
    // end of inlined leaf 0x801710F0
    r27 = (r27 + 1);
    r29 = (r29 + 16);
}

loc_8016BC70:
{
    r28 = (r28 + 8192);
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(16))) {
        goto loc_8016BC54;
    }
}

loc_8016BC78:
{
    r29 = (r31 + 984);
    r27 = 0;
    r28 = 917504;
}

loc_8016BC84:
{
    r0 = (r27 + 16);
    r4 = r28;
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_9 & -16);
    r5 = 64;
    r3 = (r29 + r0);
    // inline leaf 0x801710F0 (8 guest instruction(s))
    r0 = (r4 + -524288);
    r4 = 0;
    r4_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(23));
    r4_mrot_22 = (r4_rot_22 & 1023);
    r4_mdest_22 = (r4 & -1024);
    r4 = (r4_mdest_22 | r4_mrot_22);
    r0 = 101;
    r4_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(10));
    r4_mrot_23 = (r4_rot_23 & 2096128);
    r4_mdest_23 = (r4 & -2096129);
    r4 = (r4_mdest_23 | r4_mrot_23);
    r4_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r4_mrot_24 = (r4_rot_24 & -16777216);
    r4_mdest_24 = (r4 & 16777215);
    r4 = (r4_mdest_24 | r4_mrot_24);
    MemoryInline::FlatWrite32(r3, r4);
    // end of inlined leaf 0x801710F0
    r27 = (r27 + 1);
    r28 = (r28 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r27), static_cast<uint32_t>(4));
}

loc_8016BCA8:
{
    r28 = (r28 + -32768);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8016BC84;
    }
}

loc_8016BCB0:
{
    r3 = MemoryInline::FlatRead32((r13 + -25716));
    r12 = 0;
    r9 = -872349696;
    r10 = 8;
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r12));
    r3 = 32;
    r8 = 16;
    r7 = 4102;
    r0 = MemoryInline::FlatRead32((r31 + 1524));
    r6 = 97;
    r5 = 587202560;
    r4 = 603979776;
    r11 = (r0 & -241);
    r0 = 1728053248;
    MemoryInline::FlatWrite32((r31 + 1524), r11);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r10));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r31 + 1524));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r3);
        mkw_fifo_burst_0[0] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[1] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r3 = 0;
    mkw_fifo_burst_0[4] = static_cast<uint8_t>(r8);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r7);
        mkw_fifo_burst_0[5] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[6] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[7] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[8] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r12);
        mkw_fifo_burst_0[9] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[10] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[11] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[12] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_0[13] = static_cast<uint8_t>(r6);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r5);
        mkw_fifo_burst_0[14] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[15] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[16] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[17] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_0[18] = static_cast<uint8_t>(r6);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r4);
        mkw_fifo_burst_0[19] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[20] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[21] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[22] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_0[23] = static_cast<uint8_t>(r6);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[24] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[25] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[26] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[27] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 28u);
    // inline leaf 0x80171BF8 (12 guest instruction(s))
    r7 = MemoryInline::FlatRead32((r2 + -26840));
    r4 = -872349696;
    r5 = 97;
    r0 = 0;
    r6 = MemoryInline::FlatRead32((r7 + 372));
    r6_mrot_1 = (r3 & 255);
    r6_mdest_1 = (r6 & -256);
    r6 = (r6_mdest_1 | r6_mrot_1);
    MemoryInline::FlatWrite32((r7 + 372), r6);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r5));
    r3 = MemoryInline::FlatRead32((r7 + 372));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    MemoryInline::FlatWrite16((r7 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80171BF8
    r3 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80171458u>(ctx);
    ctx->lr = 0x8016BD34u;
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
    InvokeDirectCpu<0x8016BD54u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    r13 = ctx->gpr[13];
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
    r3 = 0x80340000u;
    r11 = (r1 + 32);
    r3 = (r3 + 14144);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
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
// RECOMP_REGISTRATION base 0x8016B850 func_8016B850 preserves=true fpr_mask=0x00000000
