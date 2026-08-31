#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8053D428(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_8053D740_loc_0 = 0;
    uint32_t addr_lfsx_8053D7A4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r0_subfc_min_1 = 0;
    uint32_t r0_subfc_min_2 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_adde_right_1 = 0;
    uint32_t r3_adde_right_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8053D428;

loc_8053D428:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = (r1 + 12);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053D440:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r6 = MemoryInline::FlatRead32((r4 + 18796));
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053D474;
    }
}

loc_8053D46C:
{
    r4 = (r6 + 8120);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
}

loc_8053D474:
{
    r0 = (r1 + 8);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r1)) + static_cast<uint64_t>(static_cast<uint32_t>(8)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_8053D478:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053D484;
    }
}

loc_8053D47C:
{
    r5 = MemoryInline::FlatRead32((r6 + 8376));
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
}

loc_8053D484:
{
}

loc_8053D488:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8053D4A0;
    }
}

loc_8053D48C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8053D490:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053D4A0;
    }
}

loc_8053D494:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8016));
    ctx->lr = 0x8053D4A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80653C08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8053D4A0:
{
    r3 = 0x809C0000u;
    r4 = 4;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_0 = r0;
    r0 = (r0_subfc_min_0 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_0) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_0 = r3;
    r3_ca_0 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_0);
    r3 = (r3 + r3_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8053D4B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053D504;
    }
}

loc_8053D4B8:
{
    r8 = 0;
    r7 = 0x809C0000u;
    r4 = 0x809C0000u;
    goto loc_8053D4F0;
}

loc_8053D4C8:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r5 = (r8 & 255);
    r6 = MemoryInline::FlatRead32((r7 + 18796));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r8 = (r8 + 1);
    r5 = (r6 + r5);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r0 = MemoryInline::FlatRead8((r5 + 7954));
    MemoryInline::FlatWrite16((r3 + 34), static_cast<uint16_t>(r0));
}

loc_8053D4F0:
{
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    r5 = (r8 & 255);
    r0 = MemoryInline::FlatRead8((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_8053D500:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8053D4C8;
    }
}

loc_8053D504:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8053D518u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r29 = 0;
    r28 = 0x809C0000u;
    goto loc_8053D554;
}

loc_8053D524:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & 1020);
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r4_addr_2 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
    r4 = MemoryInline::FlatRead32((r4 + 56));
    r0 = (r4 & 32);
}

loc_8053D53C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053D550;
    }
}

loc_8053D540:
{
    r0 = (r4 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053D544:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053D550;
    }
}

loc_8053D548:
{
    r4 = (r29 & 255);
    ctx->lr = 0x8053D550u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80533DD4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
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

loc_8053D550:
{
    r29 = (r29 + 1);
}

loc_8053D554:
{
    r4 = MemoryInline::FlatRead32((r28 + -10456));
    r3 = (r29 & 255);
    r0 = MemoryInline::FlatRead8((r4 + 36));
}

loc_8053D564:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8053D524;
    }
}

loc_8053D568:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = MemoryInline::FlatRead8((r3 + 64));
}

loc_8053D578:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053D5F0;
    }
}

loc_8053D57C:
{
    r31 = 0;
    r28 = 0x809C0000u;
    r29 = 0x809C0000u;
    goto loc_8053D5DC;
}

loc_8053D58C:
{
    r0 = (r31 & 255);
    r0 = (r0 * 240);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 56));
}

loc_8053D5A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053D5D8;
    }
}

loc_8053D5A4:
{
    r3 = MemoryInline::FlatRead32((r28 + -10448));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r6 = (r6_rot_2 & 1020);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_5 = (r3 + r6);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053D5BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053D5D8;
    }
}

loc_8053D5C0:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r4 = 5;
    r5 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_6 = (r3 + r6);
    r3 = MemoryInline::FlatRead32(r3_addr_6);
    ctx->lr = 0x8053D5D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805342E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
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

loc_8053D5D8:
{
    r31 = (r31 + 1);
}

loc_8053D5DC:
{
    r4 = MemoryInline::FlatRead32((r29 + -10456));
    r3 = (r31 & 255);
    r0 = MemoryInline::FlatRead8((r4 + 36));
}

loc_8053D5EC:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8053D58C;
    }
}

loc_8053D5F0:
{
    r7 = MemoryInline::FlatRead32((r30 + 4));
    r3 = MemoryInline::FlatRead8((r4 + 36));
    r0 = MemoryInline::FlatRead8((r7 + 29));
    r0 = (r3 - r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8053D604:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8053D6AC;
    }
}

loc_8053D608:
{
    r6 = (r4 + 40);
    r5 = 2;
    r4 = 0;
    ctr = r3;
}

loc_8053D61C:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(0))) {
        goto loc_8053D67C;
    }
}

loc_8053D620:
{
    r3 = MemoryInline::FlatRead32((r7 + 12));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & 1020);
    r3_addr_10 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_10);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 16);
}

loc_8053D634:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053D674;
    }
}

loc_8053D638:
{
}

loc_8053D63C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(2))) {
        goto loc_8053D654;
    }
}

loc_8053D640:
{
    r0 = (r4 & 255);
    r0 = (r0 * 240);
    r3 = (r6 + r0);
    r5 = MemoryInline::FlatRead32((r3 + 204));
    goto loc_8053D674;
}

loc_8053D654:
{
    r0 = (r4 & 255);
    r0 = (r0 * 240);
    r3 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 204));
}

loc_8053D668:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(r0))) {
        goto loc_8053D674;
    }
}

loc_8053D66C:
{
    r0 = 0;
    goto loc_8053D680;
}

loc_8053D674:
{
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8053D620;
    }
}

loc_8053D67C:
{
    r0 = 1;
}

loc_8053D680:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053D684:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053D6AC;
    }
}

loc_8053D688:
{
    r3 = r30;
    ctx->lr = 0x8053D690u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80539404u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
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

loc_8053D694:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053D6AC;
    }
}

loc_8053D698:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8408));
    // inline leaf 0x80656F00 (16 guest instruction(s))
}

loc_inl1_0x80656F00:
{
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r5 = 1;
    r6 = 0;
    r0 = (r0 * 88);
    r4 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r4 + 89));
    r0 = MemoryInline::FlatRead32((r4 + 72));
    r3 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r3));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x80656F38;
    }
}

loc_inl1_0x80656F28:
{
    r0 = MemoryInline::FlatRead32((r4 + 64));
}

loc_inl1_0x80656F30:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl1_0x80656F38;
    }
}

loc_inl1_0x80656F34:
{
    r6 = 1;
}

loc_inl1_0x80656F38:
{
    r3 = r6;
}

loc_inl1_cont_80656F00:
{
    // end of inlined leaf 0x80656F00
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8053D6A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053D6C0;
    }
}

loc_8053D6AC:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8053D6C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
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

loc_8053D6C0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 18796));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80883250u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
}

loc_8053D6D0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8053D70C;
    }
}

loc_8053D6D4:
{
    r3 = 0x809C0000u;
    r4 = 4;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_1 = r0;
    r0 = (r0_subfc_min_1 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_1) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_1 = r3;
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_1);
    r3 = (r3 + r3_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8053D6E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053D70C;
    }
}

loc_8053D6EC:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8053D700u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r0 = 4;
    MemoryInline::FlatWrite32((r3 + 40), r0);
}

loc_8053D70C:
{
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 536));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 68));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8053D720:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053D828;
    }
}

loc_8053D728:
{
    r4 = MemoryInline::FlatRead8((r30 + 16));
    r0 = MemoryInline::FlatRead16((r30 + 14));
}

loc_8053D734:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r0))) {
        goto loc_8053D800;
    }
}

loc_8053D738:
{
    r3 = MemoryInline::FlatRead32((r30 + 24));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & 1020);
    addr_lfsx_8053D740_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8053D740_loc_0);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8053D748:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8053D7A0;
    }
}

loc_8053D74C:
{
}

loc_8053D750:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(32))) {
        goto loc_8053D774;
    }
}

loc_8053D754:
{
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_13 & 1);
    goto loc_8053D778;
}

loc_8053D774:
{
    r0 = 0;
}

loc_8053D778:
{
}

loc_8053D77C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053D800;
    }
}

loc_8053D780:
{
}

loc_8053D784:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(32))) {
        goto loc_8053D800;
    }
}

loc_8053D788:
{
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32((r30 + 8), r0);
    goto loc_8053D800;
}

loc_8053D7A0:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
    addr_lfsx_8053D7A4_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8053D7A4_loc_0);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8053D7AC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8053D800;
    }
}

loc_8053D7B0:
{
}

loc_8053D7B4:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(32))) {
        goto loc_8053D7D8;
    }
}

loc_8053D7B8:
{
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_15 & 1);
    goto loc_8053D7DC;
}

loc_8053D7D8:
{
    r0 = 0;
}

loc_8053D7DC:
{
}

loc_8053D7E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053D800;
    }
}

loc_8053D7E4:
{
}

loc_8053D7E8:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(32))) {
        goto loc_8053D800;
    }
}

loc_8053D7EC:
{
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = (r3 & ~r0);
    MemoryInline::FlatWrite32((r30 + 8), r0);
}

loc_8053D800:
{
    r4 = MemoryInline::FlatRead8((r30 + 16));
    r3 = MemoryInline::FlatRead16((r30 + 14));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r30 + 16), static_cast<uint8_t>(r0));
    r4 = (r0 & 255);
    r0 = (r3 + 15);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8053D81C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8053D828;
    }
}

loc_8053D820:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 16), static_cast<uint8_t>(r0));
}

loc_8053D828:
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
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8053D428 func_8053D428 preserves=true fpr_mask=0x00000000
