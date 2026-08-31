#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80856278(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80856278;

loc_80856278:
{
    MemoryInline::FlatWriteRam32((r1 + -256), r1);
    r1 = (r1 + -256);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 260), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 252), r31);
    MemoryInline::FlatWriteRam32((r1 + 248), r30);
    r30 = r3;
    MemoryInline::FlatWrite32((r3 + 124), r0);
    MemoryInline::FlatWrite32((r3 + 468), r0);
    MemoryInline::FlatWrite8((r3 + 104), static_cast<uint8_t>(r0));
    ctx->lr = 0x808562A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80856664u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x808562B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
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
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r31 = r3;
    r3 = r30;
    r4 = r31;
    ctx->lr = 0x808562C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80857B08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    r3 = r30;
    ctx->lr = 0x808562D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8060245Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r30;
    r4 = r31;
    ctx->lr = 0x808562E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80857CC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2960));
    r0 = (r0 & 4);
}

loc_808562F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80856318;
    }
}

loc_808562F4:
{
    r0 = MemoryInline::FlatRead32((r4 + 2928));
}

loc_808562FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80856318;
    }
}

loc_80856300:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead32((r3 + 964));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80856314:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80856324;
    }
}

loc_80856318:
{
    r0 = MemoryInline::FlatRead32((r4 + 2928));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_80856320:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808563A0;
    }
}

loc_80856324:
{
    r3 = (r1 + 24);
    ctx->lr = 0x8085632Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8051C270u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x809C0000u;
    r3 = (r1 + 24);
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r4 = MemoryInline::FlatRead32((r4 + 3084));
    ctx->lr = 0x80856340u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8051C790u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r1 + 24));
    r3 = 0;
}

loc_8085634C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80856360;
    }
}

loc_80856350:
{
    r0 = MemoryInline::FlatRead32((r1 + 236));
}

loc_80856358:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80856360;
    }
}

loc_8085635C:
{
    r3 = 1;
}

loc_80856360:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80856364:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80856388;
    }
}

loc_80856368:
{
    r0 = MemoryInline::FlatRead16((r1 + 192));
    MemoryInline::FlatWrite16((r30 + 76), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 194));
    MemoryInline::FlatWrite8((r30 + 78), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 196));
    MemoryInline::FlatWrite16((r30 + 80), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 198));
    MemoryInline::FlatWrite8((r30 + 82), static_cast<uint8_t>(r0));
}

loc_80856388:
{
    r4 = 0x80520000u;
    r3 = (r1 + 128);
    r4 = (r4 + -15564);
    r5 = 12;
    r6 = 5;
    ctx->lr = 0x808563A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800210ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_808563A0:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_808563B4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(48))) {
        goto loc_80856468;
    }
}

loc_808563B8:
{
}

loc_808563BC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(49))) {
        goto loc_80856468;
    }
}

loc_808563C0:
{
    r4 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r5 + 144));
    r6 = MemoryInline::FlatRead32((r4 + -10456));
    r4 = 4;
    r5 = 0;
    r6 = MemoryInline::FlatRead32((r6 + 2920));
    // inline leaf 0x80621BD0 (14 guest instruction(s))
}

loc_inl0_0x80621BD0:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
}

loc_inl0_0x80621BD8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80621BDC:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_inl0_0x80621BE4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80621BE8:
{
    r7 = 1;
    r0 = -1;
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite32((r3 + 272), r0);
    MemoryInline::FlatWrite32((r3 + 276), r4);
    MemoryInline::FlatWrite8((r3 + 280), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r3 + 284), r6);
    goto loc_inl0_cont_80621BD0;
}

loc_inl0_return:
{
}

loc_inl0_cont_80621BD0:
{
    // end of inlined leaf 0x80621BD0
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_808563EC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8085640C;
    }
}

loc_808563F0:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r6 = (r3 + 56);
    goto loc_80856410;
}

loc_8085640C:
{
    r6 = 0;
}

loc_80856410:
{
    r5 = (r6 + 65536);
    r3 = 131072;
    r4 = MemoryInline::FlatRead32((r5 + -28016));
    r0 = (r3 + -31073);
    MemoryInline::FlatWrite32((r30 + 108), r4);
    r3 = MemoryInline::FlatRead32((r5 + -28016));
    r5 = (r3 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_80856430:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80856438;
    }
}

loc_80856434:
{
    r5 = r0;
}

loc_80856438:
{
    r4 = (r6 + 65536);
    r3 = 0x809C0000u;
    MemoryInline::FlatWrite32((r4 + -28016), r5);
    r0 = MemoryInline::FlatRead32((r30 + 108));
    r0 = (r5 - r0);
    MemoryInline::FlatWrite32((r30 + 108), r0);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    ctx->lr = 0x80856458u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80676904u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x806213E4 (11 guest instruction(s))
}

loc_inl1_0x806213E4:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
}

loc_inl1_0x806213EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x806213F0:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_inl1_0x806213F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x806213FC:
{
    r4 = 1;
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r0));
    goto loc_inl1_cont_806213E4;
}

loc_inl1_return:
{
}

loc_inl1_cont_806213E4:
{
    // end of inlined leaf 0x806213E4
}

loc_80856468:
{
    r3 = 0x809C0000u;
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2928));
}

loc_8085647C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(7))) {
        goto loc_8085648C;
    }
}

loc_80856480:
{
}

loc_80856484:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(10))) {
        goto loc_8085648C;
    }
}

loc_80856488:
{
    r4 = 1;
}

loc_8085648C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80856490:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80856644;
    }
}

loc_80856494:
{
    r4 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r4 + -10424));
    r0 = MemoryInline::FlatRead16((r6 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_808564A4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_808564C4;
    }
}

loc_808564A8:
{
    r4 = 65536;
    r5 = (r0 & 255);
    r0 = (r4 + -27664);
    r0 = (r0 * r5);
    r4 = (r6 + r0);
    r31 = (r4 + 56);
    goto loc_808564C8;
}

loc_808564C4:
{
    r31 = 0;
}

loc_808564C8:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32(r4);
}

loc_808564DC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(104))) {
        goto loc_808564E8;
    }
}

loc_808564E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(105));
}

loc_808564E4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_808564FC;
    }
}

loc_808564E8:
{
}

loc_808564EC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(108))) {
        goto loc_808565D0;
    }
}

loc_808564F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(109));
}

loc_808564F4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80856568;
    }
}

loc_808564F8:
{
    goto loc_808565D0;
}

loc_808564FC:
{
    r4 = (r31 + 65536);
    r5 = 0x808B0000u;
    r0 = MemoryInline::FlatRead16((r4 + -28648));
    r5 = (r5 + 12960);
    MemoryInline::FlatWriteRam32((r1 + 16), r5);
    r4 = 0;
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r0));
    // inline leaf 0x80531F70 (4 guest instruction(s))
    r3 = (r3 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 2948));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F70
    r4 = 0x809C0000u;
    r0 = r3;
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    r4 = (r0 & 255);
    ctx->lr = 0x80856530u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8052E870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead16((r1 + 20));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = (r3 + r0);
}

loc_80856540:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_8085654C;
    }
}

loc_80856544:
{
    r0 = 1;
    goto loc_80856558;
}

loc_8085654C:
{
}

loc_80856550:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(9999))) {
        goto loc_80856558;
    }
}

loc_80856554:
{
    r0 = 9999;
}

loc_80856558:
{
    r3 = (r31 + 65536);
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + -28648), static_cast<uint16_t>(r0));
    goto loc_808565D0;
}

loc_80856568:
{
    r4 = (r31 + 65536);
    r5 = 0x808B0000u;
    r0 = MemoryInline::FlatRead16((r4 + -28640));
    r5 = (r5 + 12960);
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    r4 = 0;
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    // inline leaf 0x80531F70 (4 guest instruction(s))
    r3 = (r3 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 2948));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F70
    r4 = 0x809C0000u;
    r0 = r3;
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    r4 = (r0 & 255);
    ctx->lr = 0x8085659Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8052E870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead16((r1 + 12));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = (r3 + r0);
}

loc_808565AC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_808565B8;
    }
}

loc_808565B0:
{
    r0 = 1;
    goto loc_808565C4;
}

loc_808565B8:
{
}

loc_808565BC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(9999))) {
        goto loc_808565C4;
    }
}

loc_808565C0:
{
    r0 = 9999;
}

loc_808565C4:
{
    r3 = (r31 + 65536);
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + -28640), static_cast<uint16_t>(r0));
}

loc_808565D0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_808565E4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(104))) {
        goto loc_808565F0;
    }
}

loc_808565E8:
{
}

loc_808565EC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(105))) {
        goto loc_80856600;
    }
}

loc_808565F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(108));
}

loc_808565F4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80856644;
    }
}

loc_808565F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(109));
}

loc_808565FC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80856644;
    }
}

loc_80856600:
{
    r3 = (r31 + 65536);
    r3 = MemoryInline::FlatRead8((r3 + -27670));
    r0 = (r3 + 1);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(31));
}

loc_80856610:
{
    if (((cr & 0x08000000u) == 0)) {
        goto loc_80856634;
    }
}

loc_80856614:
{
}

loc_80856618:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80856624;
    }
}

loc_8085661C:
{
    r0 = 0;
    goto loc_8085662C;
}

loc_80856624:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8085662C;
    }
}

loc_80856628:
{
    r0 = 31;
}

loc_8085662C:
{
    r3 = (r31 + 65536);
    MemoryInline::FlatWrite8((r3 + -27670), static_cast<uint8_t>(r0));
}

loc_80856634:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x806213E4 (11 guest instruction(s))
}

loc_inl4_0x806213E4:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl4_0x806213EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x806213F0:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl4_0x806213F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x806213FC:
{
    r4 = 1;
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r0));
    goto loc_inl4_cont_806213E4;
}

loc_inl4_return:
{
}

loc_inl4_cont_806213E4:
{
    // end of inlined leaf 0x806213E4
}

loc_80856644:
{
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r3 + 18048), r30);
    r31 = MemoryInline::FlatRead32((r1 + 252));
    r30 = MemoryInline::FlatRead32((r1 + 248));
    r0 = MemoryInline::FlatRead32((r1 + 260));
    ctx->lr = r0;
    r1 = (r1 + 256);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80856278 func_80856278 preserves=true fpr_mask=0x00000000
