#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80631C10_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_80631C10_statefree_v0(uint32_t, uint32_t);

extern "C" void func_805B9344(CpuContext* MKW_RESTRICT ctx)
{
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
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805B9344;

loc_805B9344:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    r3 = 0x80380000u;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    MemoryInline::FlatWriteRam32((r1 + 92), r31);
    MemoryInline::FlatWriteRam32((r1 + 88), r30);
    MemoryInline::FlatWriteRam32((r1 + 84), r29);
    MemoryInline::FlatWriteRam32((r1 + 80), r28);
    r3 = MemoryInline::FlatRead32((r3 + 24576));
    r28 = MemoryInline::FlatRead32((r3 + 152));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_805B9370:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B937C;
    }
}

loc_805B9374:
{
    r3 = -1;
    goto loc_805BA06C;
}

loc_805B937C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B9388;
    }
}

loc_805B9380:
{
    r0 = 0;
    goto loc_805B9410;
}

loc_805B9388:
{
    r7 = 0x808B0000u;
    r0 = 112;
    r7 = (r7 + 29600);
    r3 = r28;
    r5 = MemoryInline::FlatRead8((r7 + 1));
    r4 = (r1 + 76);
    MemoryInline::FlatWriteRam8((r1 + 77), static_cast<uint8_t>(r5));
    r6 = MemoryInline::FlatRead8(r7);
    r5 = MemoryInline::FlatRead8((r7 + 2));
    MemoryInline::FlatWriteRam8((r1 + 76), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 78), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 77), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800135F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805B93C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B93CC;
    }
}

loc_805B93C4:
{
    r0 = 0;
    goto loc_805B9410;
}

loc_805B93CC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r28));
}

loc_805B93D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B93E0;
    }
}

loc_805B93D4:
{
    r0 = MemoryInline::FlatRead8((r3 + -1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_805B93DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B940C;
    }
}

loc_805B93E0:
{
    r4 = 0x80890000u;
    r5 = (r1 + 72);
    r4 = (r4 + 10184);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    r3 = (r3 + 2);
    ctx->lr = 0x805B93F8u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013040u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (-1 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(-1) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r0 = (r3 + 1);
    r0 = (r4 | r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    goto loc_805B9410;
}

loc_805B940C:
{
    r0 = 0;
}

loc_805B9410:
{
}

loc_805B9414:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805B9420;
    }
}

loc_805B9418:
{
    r5 = 0;
    goto loc_805B94A8;
}

loc_805B9420:
{
    r5 = MemoryInline::FlatRead32((r1 + 72));
}

loc_805B9428:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(785))) {
        goto loc_805B946C;
    }
}

loc_805B942C:
{
}

loc_805B9430:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(529))) {
        goto loc_805B9454;
    }
}

loc_805B9434:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(292));
}

loc_805B9438:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B94A8;
    }
}

loc_805B943C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805B94A4;
    }
}

loc_805B9440:
{
}

loc_805B9444:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(276))) {
        goto loc_805B94A4;
    }
}

loc_805B9448:
{
}

loc_805B944C:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(273))) {
        goto loc_805B94A8;
    }
}

loc_805B9450:
{
    goto loc_805B94A4;
}

loc_805B9454:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(548));
}

loc_805B9458:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B94A8;
    }
}

loc_805B945C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805B94A4;
    }
}

loc_805B9460:
{
}

loc_805B9464:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(532))) {
        goto loc_805B94A4;
    }
}

loc_805B9468:
{
    goto loc_805B94A8;
}

loc_805B946C:
{
}

loc_805B9470:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(1041))) {
        goto loc_805B948C;
    }
}

loc_805B9474:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(804));
}

loc_805B9478:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B94A8;
    }
}

loc_805B947C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805B94A4;
    }
}

loc_805B9480:
{
}

loc_805B9484:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(788))) {
        goto loc_805B94A4;
    }
}

loc_805B9488:
{
    goto loc_805B94A8;
}

loc_805B948C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(1060));
}

loc_805B9490:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B94A8;
    }
}

loc_805B9494:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805B94A4;
    }
}

loc_805B9498:
{
}

loc_805B949C:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(1044))) {
        goto loc_805B94A4;
    }
}

loc_805B94A0:
{
    goto loc_805B94A8;
}

loc_805B94A4:
{
    r5 = 0;
}

loc_805B94A8:
{
    r3 = 0x809C0000u;
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = (r3 + 52);
    // inline leaf 0x8061B490 (6 guest instruction(s))
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r4 = (r4_rot_1 & -16);
    r0 = 0;
    r3 = (r3 + r4);
    MemoryInline::FlatWrite32((r3 + 4), r5);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    // end of inlined leaf 0x8061B490
    r3 = 0x80380000u;
    r3 = MemoryInline::FlatRead32((r3 + 24576));
    r28 = MemoryInline::FlatRead32((r3 + 152));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_805B94CC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B94D8;
    }
}

loc_805B94D0:
{
    r0 = 0;
    goto loc_805B9564;
}

loc_805B94D8:
{
    r7 = 0x808B0000u;
    r0 = 115;
    r7 = (r7 + 29600);
    r3 = r28;
    r5 = MemoryInline::FlatRead8((r7 + 1));
    r4 = (r1 + 68);
    MemoryInline::FlatWriteRam8((r1 + 69), static_cast<uint8_t>(r5));
    r6 = MemoryInline::FlatRead8(r7);
    r5 = MemoryInline::FlatRead8((r7 + 2));
    MemoryInline::FlatWriteRam8((r1 + 68), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 70), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 69), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800135F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805B9510:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B951C;
    }
}

loc_805B9514:
{
    r0 = 0;
    goto loc_805B9564;
}

loc_805B951C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r28));
}

loc_805B9520:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B9530;
    }
}

loc_805B9524:
{
    r0 = MemoryInline::FlatRead8((r3 + -1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_805B952C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B9560;
    }
}

loc_805B9530:
{
    r4 = 0x80890000u;
    r5 = (r1 + 64);
    r4 = (r4 + 10184);
    r4 = (r4 + 3);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    r3 = (r3 + 2);
    ctx->lr = 0x805B954Cu;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013040u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (-1 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(-1) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r0 = (r3 + 1);
    r0 = (r4 | r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
    goto loc_805B9564;
}

loc_805B9560:
{
    r0 = 0;
}

loc_805B9564:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805B9568:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B9574;
    }
}

loc_805B956C:
{
    r31 = -1;
    goto loc_805B9590;
}

loc_805B9574:
{
    r28 = MemoryInline::FlatRead32((r1 + 64));
    r3 = r28;
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x80631C10u) && KnownTranslatedCpuCall<0x80631C10u>::kAvailable && !KnownTranslatedCpuCall<0x80631C10u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80631C10u>()) {
        const auto state_free_result_80631C10_3160 = func_80631C10_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_80631C10_3160);
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80631C10u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_805B9584:
{
    r31 = -1;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_805B9590;
    }
}

loc_805B958C:
{
    r31 = r28;
}

loc_805B9590:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(81));
}

loc_805B9594:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BA068;
    }
}

loc_805B9598:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805B95C8;
    }
}

loc_805B959C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(69));
}

loc_805B95A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B9608;
    }
}

loc_805B95A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805B95B4;
    }
}

loc_805B95A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(63));
}

loc_805B95AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B9600;
    }
}

loc_805B95B0:
{
    goto loc_805BA068;
}

loc_805B95B4:
{
}

loc_805B95B8:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(78))) {
        goto loc_805B99C4;
    }
}

loc_805B95BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(71));
}

loc_805B95C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805BA068;
    }
}

loc_805B95C4:
{
    goto loc_805B9724;
}

loc_805B95C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(132));
}

loc_805B95CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B99C4;
    }
}

loc_805B95D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805B95F4;
    }
}

loc_805B95D4:
{
}

loc_805B95D8:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(127))) {
        goto loc_805B95E8;
    }
}

loc_805B95DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(84));
}

loc_805B95E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805BA068;
    }
}

loc_805B95E4:
{
    goto loc_805B99C4;
}

loc_805B95E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(129));
}

loc_805B95EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805BA068;
    }
}

loc_805B95F0:
{
    goto loc_805B99C4;
}

loc_805B95F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(134));
}

loc_805B95F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B99C4;
    }
}

loc_805B95FC:
{
    goto loc_805BA068;
}

loc_805B9600:
{
    r3 = r31;
    goto loc_805BA06C;
}

loc_805B9608:
{
    r3 = 0x80380000u;
    r3 = MemoryInline::FlatRead32((r3 + 24576));
    r28 = MemoryInline::FlatRead32((r3 + 152));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_805B9618:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B9624;
    }
}

loc_805B961C:
{
    r0 = 0;
    goto loc_805B96B0;
}

loc_805B9624:
{
    r7 = 0x808B0000u;
    r0 = 108;
    r7 = (r7 + 29600);
    r3 = r28;
    r5 = MemoryInline::FlatRead8((r7 + 1));
    r4 = (r1 + 60);
    MemoryInline::FlatWriteRam8((r1 + 61), static_cast<uint8_t>(r5));
    r6 = MemoryInline::FlatRead8(r7);
    r5 = MemoryInline::FlatRead8((r7 + 2));
    MemoryInline::FlatWriteRam8((r1 + 60), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 62), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 61), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800135F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805B965C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B9668;
    }
}

loc_805B9660:
{
    r0 = 0;
    goto loc_805B96B0;
}

loc_805B9668:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r28));
}

loc_805B966C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B967C;
    }
}

loc_805B9670:
{
    r0 = MemoryInline::FlatRead8((r3 + -1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_805B9678:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B96AC;
    }
}

loc_805B967C:
{
    r4 = 0x80890000u;
    r5 = (r1 + 56);
    r4 = (r4 + 10184);
    r4 = (r4 + 6);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    r3 = (r3 + 2);
    ctx->lr = 0x805B9698u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013040u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (-1 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(-1) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r0 = (r3 + 1);
    r0 = (r4 | r0);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & 1);
    goto loc_805B96B0;
}

loc_805B96AC:
{
    r0 = 0;
}

loc_805B96B0:
{
}

loc_805B96B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805B96C0;
    }
}

loc_805B96B8:
{
    r6 = -1;
    goto loc_805B96D4;
}

loc_805B96C0:
{
    r0 = MemoryInline::FlatRead32((r1 + 56));
    r6 = -1;
}

loc_805B96CC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_805B96D4;
    }
}

loc_805B96D0:
{
    r6 = r0;
}

loc_805B96D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_805B96D8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805BA068;
    }
}

loc_805B96DC:
{
    r3 = 65536;
    r5 = 0x809C0000u;
    r4 = (r6 & 255);
    r5 = MemoryInline::FlatRead32((r5 + -10424));
    r0 = (r3 + -29504);
    r0 = (r0 * r4);
    r3 = MemoryInline::FlatRead32((r5 + 20));
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r3 + -1380646912);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(20548));
}

loc_805B9708:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BA068;
    }
}

loc_805B970C:
{
    r4 = 0x809C0000u;
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = MemoryInline::FlatRead32((r4 + 152));
    MemoryInline::FlatWrite8((r4 + 1256), static_cast<uint8_t>(r6));
    goto loc_805BA06C;
}

loc_805B9724:
{
    r3 = 0x80380000u;
    r3 = MemoryInline::FlatRead32((r3 + 24576));
    r28 = MemoryInline::FlatRead32((r3 + 152));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_805B9734:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B9740;
    }
}

loc_805B9738:
{
    r0 = 0;
    goto loc_805B97CC;
}

loc_805B9740:
{
    r7 = 0x808B0000u;
    r0 = 108;
    r7 = (r7 + 29600);
    r3 = r28;
    r5 = MemoryInline::FlatRead8((r7 + 1));
    r4 = (r1 + 52);
    MemoryInline::FlatWriteRam8((r1 + 53), static_cast<uint8_t>(r5));
    r6 = MemoryInline::FlatRead8(r7);
    r5 = MemoryInline::FlatRead8((r7 + 2));
    MemoryInline::FlatWriteRam8((r1 + 52), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 54), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 53), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800135F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805B9778:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B9784;
    }
}

loc_805B977C:
{
    r0 = 0;
    goto loc_805B97CC;
}

loc_805B9784:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r28));
}

loc_805B9788:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B9798;
    }
}

loc_805B978C:
{
    r0 = MemoryInline::FlatRead8((r3 + -1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_805B9794:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B97C8;
    }
}

loc_805B9798:
{
    r4 = 0x80890000u;
    r5 = (r1 + 48);
    r4 = (r4 + 10184);
    r4 = (r4 + 9);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    r3 = (r3 + 2);
    ctx->lr = 0x805B97B4u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013040u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (-1 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(-1) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r0 = (r3 + 1);
    r0 = (r4 | r0);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & 1);
    goto loc_805B97CC;
}

loc_805B97C8:
{
    r0 = 0;
}

loc_805B97CC:
{
}

loc_805B97D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805B97DC;
    }
}

loc_805B97D4:
{
    r30 = -1;
    goto loc_805B97F0;
}

loc_805B97DC:
{
    r0 = MemoryInline::FlatRead32((r1 + 48));
    r30 = -1;
}

loc_805B97E8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_805B97F0;
    }
}

loc_805B97EC:
{
    r30 = r0;
}

loc_805B97F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_805B97F4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805BA068;
    }
}

loc_805B97F8:
{
    r28 = 65536;
    r29 = 0x809C0000u;
    r4 = (r30 & 255);
    r3 = MemoryInline::FlatRead32((r29 + -10424));
    r0 = (r28 + -29504);
    r0 = (r0 * r4);
    r5 = MemoryInline::FlatRead32((r3 + 20));
    r5 = (r5 + r0);
    r5 = MemoryInline::FlatRead32((r5 + 8));
    r0 = (r5 + -1380646912);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(20548));
}

loc_805B9824:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805BA068;
    }
}

loc_805B9828:
{
    ctx->lr = 0x805B982Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80544CD8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = MemoryInline::FlatRead32((r29 + -10424));
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10480));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805B9840:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805B985C;
    }
}

loc_805B9844:
{
    r4 = (r0 & 255);
    r0 = (r28 + -27664);
    r0 = (r0 * r4);
    r4 = (r5 + r0);
    r4 = (r4 + 56);
    goto loc_805B9860;
}

loc_805B985C:
{
    r4 = 0;
}

loc_805B9860:
{
    r5 = 0x809C0000u;
    r4 = (r4 + 22);
    r5 = MemoryInline::FlatRead32((r5 + -10432));
    r5 = MemoryInline::FlatRead32((r5 + 52));
    ctx->lr = 0x805B9874u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80527B0Cu>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805B9878:
{
    r28 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805B9890;
    }
}

loc_805B9880:
{
    r0 = MemoryInline::FlatRead8((r3 + 164));
}

loc_805B9888:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805B9890;
    }
}

loc_805B988C:
{
    r28 = 1;
}

loc_805B9890:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805B9894:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B98AC;
    }
}

loc_805B9898:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 1;
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x805B98ACu;
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
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805B98AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_805B98B0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805BA068;
    }
}

loc_805B98B4:
{
    r4 = 0x809C0000u;
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = MemoryInline::FlatRead32((r4 + 152));
    MemoryInline::FlatWrite8((r4 + 1256), static_cast<uint8_t>(r30));
    r7 = MemoryInline::FlatRead32((r3 + -10424));
    r6 = MemoryInline::FlatRead16((r7 + 54));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
}

loc_805B98D4:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(0))) {
        goto loc_805B98F4;
    }
}

loc_805B98D8:
{
    r3 = 65536;
    r4 = (r6 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r7 + r0);
    r4 = (r3 + 56);
    goto loc_805B98F8;
}

loc_805B98F4:
{
    r4 = 0;
}

loc_805B98F8:
{
    r3 = 0x80380000u;
    r4 = (r4 + 65536);
    r5 = MemoryInline::FlatRead32((r3 + 24576));
    r3 = MemoryInline::FlatRead8((r4 + -27674));
    r0 = MemoryInline::FlatRead8((r5 + 240));
}

loc_805B9910:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_805B9934;
    }
}

loc_805B9914:
{
    r3 = MemoryInline::FlatRead8((r4 + -27673));
    r0 = MemoryInline::FlatRead8((r5 + 241));
}

loc_805B9920:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_805B9934;
    }
}

loc_805B9924:
{
    r3 = MemoryInline::FlatRead8((r4 + -27672));
    r0 = MemoryInline::FlatRead8((r5 + 242));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_805B9930:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B99BC;
    }
}

loc_805B9934:
{
}

loc_805B9938:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(0))) {
        goto loc_805B995C;
    }
}

loc_805B993C:
{
    r4 = MemoryInline::FlatRead16((r7 + 54));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = 65536;
    r0 = (r3 + -27664);
    r3 = (r4 & 255);
    r0 = (r0 * r3);
    r3 = (r7 + r0);
    r3 = (r3 + 56);
    goto loc_805B9960;
}

loc_805B995C:
{
    r3 = 0;
}

loc_805B9960:
{
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead8((r5 + 240));
    MemoryInline::FlatWrite8((r4 + -27674), static_cast<uint8_t>(r0));
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r5 + 241));
    MemoryInline::FlatWrite8((r4 + -27673), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 242));
    MemoryInline::FlatWrite8((r4 + -27672), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 243));
    MemoryInline::FlatWrite8((r4 + -27671), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805B9994:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805B99B4;
    }
}

loc_805B9998:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r3 = (r3 + 56);
    goto loc_805B99B8;
}

loc_805B99B4:
{
    r3 = 0;
}

loc_805B99B8:
{
    // inline leaf 0x80549878 (8 guest instruction(s))
    r5 = (r3 + 65536);
    r0 = 0;
    r4 = MemoryInline::FlatRead8((r5 + -27669));
    r3 = MemoryInline::FlatRead8((r5 + -27670));
    MemoryInline::FlatWrite8((r5 + -27668), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + -27669), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + -27670), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80549878
}

loc_805B99BC:
{
    r3 = r31;
    goto loc_805BA06C;
}

loc_805B99C4:
{
    r3 = 0x80380000u;
    r3 = MemoryInline::FlatRead32((r3 + 24576));
    r28 = MemoryInline::FlatRead32((r3 + 152));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_805B99D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B99E0;
    }
}

loc_805B99D8:
{
    r0 = 0;
    goto loc_805B9A6C;
}

loc_805B99E0:
{
    r7 = 0x808B0000u;
    r0 = 108;
    r7 = (r7 + 29600);
    r3 = r28;
    r5 = MemoryInline::FlatRead8((r7 + 1));
    r4 = (r1 + 44);
    MemoryInline::FlatWriteRam8((r1 + 45), static_cast<uint8_t>(r5));
    r6 = MemoryInline::FlatRead8(r7);
    r5 = MemoryInline::FlatRead8((r7 + 2));
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 46), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 45), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800135F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805B9A18:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B9A24;
    }
}

loc_805B9A1C:
{
    r0 = 0;
    goto loc_805B9A6C;
}

loc_805B9A24:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r28));
}

loc_805B9A28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B9A38;
    }
}

loc_805B9A2C:
{
    r0 = MemoryInline::FlatRead8((r3 + -1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_805B9A34:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B9A68;
    }
}

loc_805B9A38:
{
    r4 = 0x80890000u;
    r5 = (r1 + 40);
    r4 = (r4 + 10184);
    r4 = (r4 + 12);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    r3 = (r3 + 2);
    ctx->lr = 0x805B9A54u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013040u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (-1 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(-1) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r0 = (r3 + 1);
    r0 = (r4 | r0);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & 1);
    goto loc_805B9A6C;
}

loc_805B9A68:
{
    r0 = 0;
}

loc_805B9A6C:
{
}

loc_805B9A70:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805B9A7C;
    }
}

loc_805B9A74:
{
    r30 = -1;
    goto loc_805B9A90;
}

loc_805B9A7C:
{
    r0 = MemoryInline::FlatRead32((r1 + 40));
    r30 = -1;
}

loc_805B9A88:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_805B9A90;
    }
}

loc_805B9A8C:
{
    r30 = r0;
}

loc_805B9A90:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_805B9A94:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805BA068;
    }
}

loc_805B9A98:
{
    r29 = 65536;
    r28 = 0x809C0000u;
    r4 = (r30 & 255);
    r3 = MemoryInline::FlatRead32((r28 + -10424));
    r0 = (r29 + -29504);
    r0 = (r0 * r4);
    r5 = MemoryInline::FlatRead32((r3 + 20));
    r5 = (r5 + r0);
    r5 = MemoryInline::FlatRead32((r5 + 8));
    r0 = (r5 + -1380646912);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(20548));
}

loc_805B9AC4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805BA068;
    }
}

loc_805B9AC8:
{
    ctx->lr = 0x805B9ACCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80544CD8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r28 + -10424));
    r0 = MemoryInline::FlatRead16((r4 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805B9AD8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805B9AF4;
    }
}

loc_805B9ADC:
{
    r3 = (r0 & 255);
    r0 = (r29 + -27664);
    r0 = (r0 * r3);
    r3 = (r4 + r0);
    r6 = (r3 + 56);
    goto loc_805B9AF8;
}

loc_805B9AF4:
{
    r6 = 0;
}

loc_805B9AF8:
{
    r3 = 0x809C0000u;
    r4 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10432));
    r28 = (r6 + 22);
    r3 = MemoryInline::FlatRead32((r4 + -10480));
    r4 = r28;
    r5 = MemoryInline::FlatRead32((r5 + 52));
    ctx->lr = 0x805B9B18u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80527B0Cu>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805B9B1C:
{
    r29 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805B9B34;
    }
}

loc_805B9B24:
{
    r0 = MemoryInline::FlatRead8((r3 + 164));
}

loc_805B9B2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805B9B34;
    }
}

loc_805B9B30:
{
    r29 = 1;
}

loc_805B9B34:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805B9B38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B9B50;
    }
}

loc_805B9B3C:
{
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 1;
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x805B9B50u;
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
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805B9B50:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_805B9B54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BA068;
    }
}

loc_805B9B58:
{
    r6 = 0x809C0000u;
    r5 = r28;
    r3 = MemoryInline::FlatRead32((r6 + 7736));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite8((r3 + 1256), static_cast<uint8_t>(r30));
    r3 = MemoryInline::FlatRead32((r6 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r3 + 568);
    ctx->lr = 0x805B9B80u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805FA6E0u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r7 = MemoryInline::FlatRead32((r3 + -10424));
    r6 = MemoryInline::FlatRead16((r7 + 54));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
}

loc_805B9B90:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(0))) {
        goto loc_805B9BB0;
    }
}

loc_805B9B94:
{
    r3 = 65536;
    r4 = (r6 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r7 + r0);
    r4 = (r3 + 56);
    goto loc_805B9BB4;
}

loc_805B9BB0:
{
    r4 = 0;
}

loc_805B9BB4:
{
    r3 = 0x80380000u;
    r4 = (r4 + 65536);
    r5 = MemoryInline::FlatRead32((r3 + 24576));
    r3 = MemoryInline::FlatRead8((r4 + -27674));
    r0 = MemoryInline::FlatRead8((r5 + 240));
}

loc_805B9BCC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_805B9BF0;
    }
}

loc_805B9BD0:
{
    r3 = MemoryInline::FlatRead8((r4 + -27673));
    r0 = MemoryInline::FlatRead8((r5 + 241));
}

loc_805B9BDC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_805B9BF0;
    }
}

loc_805B9BE0:
{
    r3 = MemoryInline::FlatRead8((r4 + -27672));
    r0 = MemoryInline::FlatRead8((r5 + 242));
}

loc_805B9BEC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_805B9C78;
    }
}

loc_805B9BF0:
{
}

loc_805B9BF4:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(0))) {
        goto loc_805B9C18;
    }
}

loc_805B9BF8:
{
    r4 = MemoryInline::FlatRead16((r7 + 54));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = 65536;
    r0 = (r3 + -27664);
    r3 = (r4 & 255);
    r0 = (r0 * r3);
    r3 = (r7 + r0);
    r3 = (r3 + 56);
    goto loc_805B9C1C;
}

loc_805B9C18:
{
    r3 = 0;
}

loc_805B9C1C:
{
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead8((r5 + 240));
    MemoryInline::FlatWrite8((r4 + -27674), static_cast<uint8_t>(r0));
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r5 + 241));
    MemoryInline::FlatWrite8((r4 + -27673), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 242));
    MemoryInline::FlatWrite8((r4 + -27672), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 243));
    MemoryInline::FlatWrite8((r4 + -27671), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_805B9C50:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_805B9C70;
    }
}

loc_805B9C54:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r3 = (r3 + 56);
    goto loc_805B9C74;
}

loc_805B9C70:
{
    r3 = 0;
}

loc_805B9C74:
{
    // inline leaf 0x80549878 (8 guest instruction(s))
    r5 = (r3 + 65536);
    r0 = 0;
    r4 = MemoryInline::FlatRead8((r5 + -27669));
    r3 = MemoryInline::FlatRead8((r5 + -27670));
    MemoryInline::FlatWrite8((r5 + -27668), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + -27669), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + -27670), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80549878
}

loc_805B9C78:
{
    r0 = (r31 + -78);
}

loc_805B9C80:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_805B9D4C;
    }
}

loc_805B9C84:
{
    r0 = (r31 + -82);
}

loc_805B9C8C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_805B9D4C;
    }
}

loc_805B9C90:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(132));
}

loc_805B9C94:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805BA060;
    }
}

loc_805B9C98:
{
    r3 = 0x80380000u;
    r3 = MemoryInline::FlatRead32((r3 + 24576));
    r28 = MemoryInline::FlatRead32((r3 + 152));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_805B9CA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B9D18;
    }
}

loc_805B9CAC:
{
    r7 = 0x808B0000u;
    r0 = 114;
    r7 = (r7 + 29600);
    r3 = r28;
    r5 = MemoryInline::FlatRead8((r7 + 1));
    r4 = (r1 + 36);
    MemoryInline::FlatWriteRam8((r1 + 37), static_cast<uint8_t>(r5));
    r6 = MemoryInline::FlatRead8(r7);
    r5 = MemoryInline::FlatRead8((r7 + 2));
    MemoryInline::FlatWriteRam8((r1 + 36), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 38), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 37), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800135F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805B9CE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B9D18;
    }
}

loc_805B9CE8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r28));
}

loc_805B9CEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B9CFC;
    }
}

loc_805B9CF0:
{
    r0 = MemoryInline::FlatRead8((r3 + -1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_805B9CF8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B9D18;
    }
}

loc_805B9CFC:
{
    r4 = 0x80890000u;
    r5 = (r1 + 32);
    r4 = (r4 + 10184);
    r4 = (r4 + 15);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    r3 = (r3 + 2);
    ctx->lr = 0x805B9D18u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013040u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805B9D18:
{
    r3 = MemoryInline::FlatRead32((r1 + 32));
    r0 = -1;
}

loc_805B9D24:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(29))) {
        goto loc_805B9D2C;
    }
}

loc_805B9D28:
{
    r0 = r3;
}

loc_805B9D2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805B9D30:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805BA068;
    }
}

loc_805B9D34:
{
    r4 = 0x809C0000u;
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = MemoryInline::FlatRead32((r4 + 152));
    MemoryInline::FlatWrite32((r4 + 1288), r0);
    goto loc_805BA06C;
}

loc_805B9D4C:
{
    r3 = 0x80380000u;
    r3 = MemoryInline::FlatRead32((r3 + 24576));
    r28 = MemoryInline::FlatRead32((r3 + 152));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_805B9D5C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B9D68;
    }
}

loc_805B9D60:
{
    r0 = 0;
    goto loc_805B9DF4;
}

loc_805B9D68:
{
    r7 = 0x808B0000u;
    r0 = 116;
    r7 = (r7 + 29600);
    r3 = r28;
    r5 = MemoryInline::FlatRead8((r7 + 1));
    r4 = (r1 + 28);
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r5));
    r6 = MemoryInline::FlatRead8(r7);
    r5 = MemoryInline::FlatRead8((r7 + 2));
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800135F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805B9DA0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B9DAC;
    }
}

loc_805B9DA4:
{
    r0 = 0;
    goto loc_805B9DF4;
}

loc_805B9DAC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r28));
}

loc_805B9DB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B9DC0;
    }
}

loc_805B9DB4:
{
    r0 = MemoryInline::FlatRead8((r3 + -1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_805B9DBC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B9DF0;
    }
}

loc_805B9DC0:
{
    r4 = 0x80890000u;
    r5 = (r1 + 24);
    r4 = (r4 + 10184);
    r4 = (r4 + 18);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    r3 = (r3 + 2);
    ctx->lr = 0x805B9DDCu;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013040u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (-1 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(-1) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r0 = (r3 + 1);
    r0 = (r4 | r0);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_11 & 1);
    goto loc_805B9DF4;
}

loc_805B9DF0:
{
    r0 = 0;
}

loc_805B9DF4:
{
}

loc_805B9DF8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805B9E04;
    }
}

loc_805B9DFC:
{
    r30 = 0;
    goto loc_805B9E18;
}

loc_805B9E04:
{
    r0 = MemoryInline::FlatRead32((r1 + 24));
    r30 = 0;
}

loc_805B9E10:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(39))) {
        goto loc_805B9E18;
    }
}

loc_805B9E14:
{
    r30 = r0;
}

loc_805B9E18:
{
    r3 = 0x80380000u;
    r3 = MemoryInline::FlatRead32((r3 + 24576));
    r28 = MemoryInline::FlatRead32((r3 + 152));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_805B9E28:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B9E34;
    }
}

loc_805B9E2C:
{
    r0 = 0;
    goto loc_805B9EC0;
}

loc_805B9E34:
{
    r7 = 0x808B0000u;
    r0 = 99;
    r7 = (r7 + 29600);
    r3 = r28;
    r5 = MemoryInline::FlatRead8((r7 + 1));
    r4 = (r1 + 20);
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r5));
    r6 = MemoryInline::FlatRead8(r7);
    r5 = MemoryInline::FlatRead8((r7 + 2));
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800135F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805B9E6C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B9E78;
    }
}

loc_805B9E70:
{
    r0 = 0;
    goto loc_805B9EC0;
}

loc_805B9E78:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r28));
}

loc_805B9E7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B9E8C;
    }
}

loc_805B9E80:
{
    r0 = MemoryInline::FlatRead8((r3 + -1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_805B9E88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B9EBC;
    }
}

loc_805B9E8C:
{
    r4 = 0x80890000u;
    r5 = (r1 + 16);
    r4 = (r4 + 10184);
    r4 = (r4 + 21);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    r3 = (r3 + 2);
    ctx->lr = 0x805B9EA8u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013040u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (-1 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(-1) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r0 = (r3 + 1);
    r0 = (r4 | r0);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_13 & 1);
    goto loc_805B9EC0;
}

loc_805B9EBC:
{
    r0 = 0;
}

loc_805B9EC0:
{
}

loc_805B9EC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805B9ED0;
    }
}

loc_805B9EC8:
{
    r29 = -1;
    goto loc_805B9EE4;
}

loc_805B9ED0:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r29 = -1;
}

loc_805B9EDC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(31))) {
        goto loc_805B9EE4;
    }
}

loc_805B9EE0:
{
    r29 = r0;
}

loc_805B9EE4:
{
    r3 = 0x80380000u;
    r3 = MemoryInline::FlatRead32((r3 + 24576));
    r28 = MemoryInline::FlatRead32((r3 + 152));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_805B9EF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B9F00;
    }
}

loc_805B9EF8:
{
    r0 = 0;
    goto loc_805B9F8C;
}

loc_805B9F00:
{
    r7 = 0x808B0000u;
    r0 = 102;
    r7 = (r7 + 29600);
    r3 = r28;
    r5 = MemoryInline::FlatRead8((r7 + 1));
    r4 = (r1 + 12);
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r5));
    r6 = MemoryInline::FlatRead8(r7);
    r5 = MemoryInline::FlatRead8((r7 + 2));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800135F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805B9F38:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B9F44;
    }
}

loc_805B9F3C:
{
    r0 = 0;
    goto loc_805B9F8C;
}

loc_805B9F44:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r28));
}

loc_805B9F48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B9F58;
    }
}

loc_805B9F4C:
{
    r0 = MemoryInline::FlatRead8((r3 + -1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_805B9F54:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B9F88;
    }
}

loc_805B9F58:
{
    r4 = 0x80890000u;
    r5 = (r1 + 8);
    r4 = (r4 + 10184);
    r4 = (r4 + 24);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    r3 = (r3 + 2);
    ctx->lr = 0x805B9F74u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80013040u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (-1 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(-1) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r0 = (r3 + 1);
    r0 = (r4 | r0);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_15 & 1);
    goto loc_805B9F8C;
}

loc_805B9F88:
{
    r0 = 0;
}

loc_805B9F8C:
{
}

loc_805B9F90:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805B9F9C;
    }
}

loc_805B9F94:
{
    r0 = -1;
    goto loc_805B9FE8;
}

loc_805B9F9C:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_805B9FA4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_805B9FE4;
    }
}

loc_805B9FA8:
{
    r3 = 65536;
    r5 = 0x809C0000u;
    r4 = (r0 & 255);
    r5 = MemoryInline::FlatRead32((r5 + -10424));
    r3 = (r3 + -29504);
    r3 = (r3 * r4);
    r4 = MemoryInline::FlatRead32((r5 + 20));
    r3 = (r4 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r3 + -1380646912);
}

loc_805B9FD4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(20548))) {
        goto loc_805B9FDC;
    }
}

loc_805B9FD8:
{
    goto loc_805B9FE8;
}

loc_805B9FDC:
{
    r0 = -1;
    goto loc_805B9FE8;
}

loc_805B9FE4:
{
    r0 = -1;
}

loc_805B9FE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_805B9FEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BA068;
    }
}

loc_805B9FF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(-1));
}

loc_805B9FF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BA068;
    }
}

loc_805B9FF8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805B9FFC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805BA068;
    }
}

loc_805BA000:
{
    r3 = 65536;
    r5 = 0x809C0000u;
    r4 = (r0 & 255);
    r5 = MemoryInline::FlatRead32((r5 + -10424));
    r3 = (r3 + -29504);
    r3 = (r3 * r4);
    r4 = MemoryInline::FlatRead32((r5 + 20));
    r3 = (r4 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r3 + -1380646912);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(20548));
}

loc_805BA02C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805BA068;
    }
}

loc_805BA030:
{
    r5 = 0x809C0000u;
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r5 + 7736));
    r4 = MemoryInline::FlatRead32((r4 + 152));
    MemoryInline::FlatWrite32((r4 + 964), r30);
    r4 = MemoryInline::FlatRead32((r5 + 7736));
    r4 = MemoryInline::FlatRead32((r4 + 152));
    MemoryInline::FlatWrite32((r4 + 968), r29);
    r4 = MemoryInline::FlatRead32((r5 + 7736));
    r4 = MemoryInline::FlatRead32((r4 + 152));
    MemoryInline::FlatWrite32((r4 + 972), r0);
    goto loc_805BA06C;
}

loc_805BA060:
{
    r3 = r31;
    goto loc_805BA06C;
}

loc_805BA068:
{
    r3 = -1;
}

loc_805BA06C:
{
    r0 = MemoryInline::FlatRead32((r1 + 100));
    r31 = MemoryInline::FlatRead32((r1 + 92));
    r30 = MemoryInline::FlatRead32((r1 + 88));
    r29 = MemoryInline::FlatRead32((r1 + 84));
    r28 = MemoryInline::FlatRead32((r1 + 80));
    ctx->lr = r0;
    r1 = (r1 + 96);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805B9344 func_805B9344 preserves=true fpr_mask=0x00000000
