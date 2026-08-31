#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_805CD94C_statefree(uint32_t);

extern "C" void func_805C73F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805C73F8;

loc_805C73F8:
{
    MemoryInline::FlatWriteRam32((r1 + -224), r1);
    r1 = (r1 + -224);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 228), r0);
    MemoryInline::FlatWriteRam32((r1 + 220), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 216), r30);
    MemoryInline::FlatWriteRam32((r1 + 212), r29);
    MemoryInline::FlatWriteRam32((r1 + 208), r28);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_805C7420:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805C7704;
    }
}

loc_805C7424:
{
    r0 = MemoryInline::FlatRead32((r3 + 6432));
}

loc_805C742C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_805C743C;
    }
}

loc_805C7430:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_805C7434:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C7468;
    }
}

loc_805C7438:
{
    goto loc_805C7704;
}

loc_805C743C:
{
    r3 = MemoryInline::FlatRead32((r3 + 6272));
    ctx->lr = 0x805C7444u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x805E2ED0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805C7448:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C7704;
    }
}

loc_805C744C:
{
    r3 = MemoryInline::FlatRead32((r31 + 6276));
    ctx->lr = 0x805C7454u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x805E2F08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805C7458:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C7704;
    }
}

loc_805C745C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 6432), r0);
    goto loc_805C7704;
}

loc_805C7468:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 676));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_805C747C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805C7488;
    }
}

loc_805C7480:
{
    r29 = 0;
    goto loc_805C74DC;
}

loc_805C7488:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 7248);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C74D8;
    }
}

loc_805C7494:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805C74A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
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
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805C74C0;
}

loc_805C74AC:
{
}

loc_805C74B0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_805C74BC;
    }
}

loc_805C74B4:
{
    r0 = 1;
    goto loc_805C74CC;
}

loc_805C74BC:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805C74C0:
{
}

loc_805C74C4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805C74AC;
    }
}

loc_805C74C8:
{
    r0 = 0;
}

loc_805C74CC:
{
}

loc_805C74D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805C74D8;
    }
}

loc_805C74D4:
{
    goto loc_805C74DC;
}

loc_805C74D8:
{
    r29 = 0;
}

loc_805C74DC:
{
    r0 = MemoryInline::FlatRead32((r29 + 148));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805C74E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805C7704;
    }
}

loc_805C74E8:
{
    r3 = MemoryInline::FlatRead32((r31 + 6272));
    ctx->lr = 0x805C74F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x805E2F08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805C74F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C7704;
    }
}

loc_805C74F8:
{
    r3 = MemoryInline::FlatRead32((r31 + 6420));
    r7 = MemoryInline::FlatRead32((r3 + 608));
}

loc_805C7504:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(1))) {
        goto loc_805C7580;
    }
}

loc_805C7508:
{
    r5 = MemoryInline::FlatRead32((r31 + 6424));
    r6 = MemoryInline::FlatRead32((r31 + 6272));
    r4 = PPC_Divw(static_cast<int32_t>(r5), static_cast<int32_t>(r7));
    r0 = MemoryInline::FlatRead32((r31 + 6276));
    MemoryInline::FlatWrite32((r31 + 6272), r0);
    MemoryInline::FlatWrite32((r31 + 6276), r6);
    r0 = (r4 * r7);
    r4 = (r5 - r0);
    MemoryInline::FlatWrite32((r31 + 6424), r4);
    // inline leaf 0x805E2528 (11 guest instruction(s))
}

loc_inl0_0x805E2528:
{
}

loc_inl0_0x805E252C:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_inl0_0x805E254C;
    }
}

loc_inl0_0x805E2530:
{
    r0 = MemoryInline::FlatRead32((r3 + 608));
}

loc_inl0_0x805E2538:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_inl0_0x805E254C;
    }
}

loc_inl0_0x805E253C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 12));
    goto loc_inl0_cont_805E2528;
}

loc_inl0_0x805E254C:
{
    r3 = 0;
}

loc_inl0_cont_805E2528:
{
    // end of inlined leaf 0x805E2528
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r31 + 6420));
    r4 = MemoryInline::FlatRead32((r31 + 6424));
    // inline leaf 0x805E2500 (10 guest instruction(s))
}

loc_inl1_0x805E2500:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl1_0x805E2504:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_inl1_0x805E2520;
    }
}

loc_inl1_0x805E2508:
{
    r0 = MemoryInline::FlatRead32((r3 + 608));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_inl1_0x805E2510:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl1_0x805E2520;
    }
}

loc_inl1_0x805E2514:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    goto loc_inl1_cont_805E2500;
}

loc_inl1_0x805E2520:
{
    r3 = 0;
}

loc_inl1_cont_805E2500:
{
    // end of inlined leaf 0x805E2500
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r31 + 6272));
    r5 = r30;
    r6 = 1;
    ctx->lr = 0x805C7554u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805E2D40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 6432), r0);
    r3 = MemoryInline::FlatRead32((r31 + 6420));
    r0 = MemoryInline::FlatRead32((r3 + 608));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805C7568:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805C76BC;
    }
}

loc_805C756C:
{
    r3 = (r31 + 1616);
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x805C757Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80636264u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    goto loc_805C76BC;
}

loc_805C7580:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 332));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_805C7594:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805C75A0;
    }
}

loc_805C7598:
{
    r29 = 0;
    goto loc_805C75F4;
}

loc_805C75A0:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 7352);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C75F0;
    }
}

loc_805C75AC:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805C75C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
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
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805C75D8;
}

loc_805C75C4:
{
}

loc_805C75C8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_805C75D4;
    }
}

loc_805C75CC:
{
    r0 = 1;
    goto loc_805C75E4;
}

loc_805C75D4:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805C75D8:
{
}

loc_805C75DC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805C75C4;
    }
}

loc_805C75E0:
{
    r0 = 0;
}

loc_805C75E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805C75E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C75F0;
    }
}

loc_805C75EC:
{
    goto loc_805C75F4;
}

loc_805C75F0:
{
    r29 = 0;
}

loc_805C75F4:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 100));
    ctr = r12;
    ctx->lr = 0x805C7608u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
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
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r4 = 6102;
    r5 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x805C7624u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
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
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r28 = MemoryInline::FlatRead32((r3 + 724));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_805C7638:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805C7644;
    }
}

loc_805C763C:
{
    r28 = 0;
    goto loc_805C7698;
}

loc_805C7644:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 7080);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C7694;
    }
}

loc_805C7650:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805C7664u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
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
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805C767C;
}

loc_805C7668:
{
}

loc_805C766C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_805C7678;
    }
}

loc_805C7670:
{
    r0 = 1;
    goto loc_805C7688;
}

loc_805C7678:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805C767C:
{
}

loc_805C7680:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805C7668;
    }
}

loc_805C7684:
{
    r0 = 0;
}

loc_805C7688:
{
}

loc_805C768C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805C7694;
    }
}

loc_805C7690:
{
    goto loc_805C7698;
}

loc_805C7694:
{
    r28 = 0;
}

loc_805C7698:
{
    r0 = (r28 + 92);
    MemoryInline::FlatWrite32((r29 + 392), r0);
    r4 = 0x80890000u;
    r3 = r31;
    r0 = 81;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 13496));
    MemoryInline::FlatWrite32((r31 + 6428), r0);
    r4 = 0;
    // inline leaf 0x80602488 (7 guest instruction(s))
}

loc_inl2_0x80602488:
{
}

loc_inl2_0x8060248C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(-1))) {
        goto loc_inl2_0x80602494;
    }
}

loc_inl2_0x80602490:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
}

loc_inl2_0x80602494:
{
    r0 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 24), f1.d);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
}

loc_inl2_cont_80602488:
{
    // end of inlined leaf 0x80602488
}

loc_805C76BC:
{
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805CD94Cu) && KnownTranslatedCpuCall<0x805CD94Cu>::kAvailable && !KnownTranslatedCpuCall<0x805CD94Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805CD94Cu>()) {
        const auto state_free_result_805CD94C_463E = func_805CD94C_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_805CD94C_463E[0]);
        r4 = static_cast<uint32_t>(state_free_result_805CD94C_463E[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805CD94Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = MemoryInline::FlatRead32((r31 + 6420));
    r0 = MemoryInline::FlatRead32((r3 + 608));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805C76D0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805C76E0;
    }
}

loc_805C76D4:
{
    r3 = MemoryInline::FlatRead32((r31 + 6424));
    r0 = (r3 + 1);
    goto loc_805C76E4;
}

loc_805C76E0:
{
    r0 = 0;
}

loc_805C76E4:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r31 + 2952);
    r5 = (r1 + 8);
    r4 = 2009;
    r6 = MemoryInline::FlatRead32((r31 + 6420));
    r0 = MemoryInline::FlatRead32((r6 + 608));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    ctx->lr = 0x805C7704u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805C7704:
{
    r3 = MemoryInline::FlatRead32((r31 + 6432));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & 1);
    MemoryInline::FlatWrite8((r31 + 5736), static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 220));
    r30 = MemoryInline::FlatRead32((r1 + 216));
    r29 = MemoryInline::FlatRead32((r1 + 212));
    r28 = MemoryInline::FlatRead32((r1 + 208));
    r0 = MemoryInline::FlatRead32((r1 + 228));
    ctx->lr = r0;
    r1 = (r1 + 224);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805C73F8 func_805C73F8 preserves=true fpr_mask=0x00000000
