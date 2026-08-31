#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8085447C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8085447C;

loc_8085447C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r5;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r4;
    r0 = MemoryInline::FlatRead32((r3 + 2884));
}

loc_808544AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_808544E8;
    }
}

loc_808544B0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 6536));
}

loc_808544BC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80854594;
    }
}

loc_808544C0:
{
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_808544C8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80854594;
    }
}

loc_808544CC:
{
    r3 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808544D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80854594;
    }
}

loc_808544D8:
{
    r4 = 0;
    r5 = 3;
    ctx->lr = 0x808544E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8082FB78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80854594;
}

loc_808544E8:
{
    r0 = MemoryInline::FlatRead32((r3 + 2888));
}

loc_808544F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_80854594;
    }
}

loc_808544F4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 6536));
}

loc_80854500:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80854528;
    }
}

loc_80854504:
{
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8085450C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80854528;
    }
}

loc_80854510:
{
    r3 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80854518:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80854528;
    }
}

loc_8085451C:
{
    r4 = 0;
    r5 = 1;
    ctx->lr = 0x80854528u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8082FB78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80854528:
{
    r3 = MemoryInline::FlatRead32((r31 + 2888));
    // inline leaf 0x805275EC (6 guest instruction(s))
}

loc_inl0_0x805275EC:
{
    r0 = (r3 + -24);
    r3 = 0;
}

loc_inl0_0x805275F8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(20))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x805275FC:
{
    r3 = 1;
    goto loc_inl0_cont_805275EC;
}

loc_inl0_return:
{
}

loc_inl0_cont_805275EC:
{
    // end of inlined leaf 0x805275EC
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80854534:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80854584;
    }
}

loc_80854538:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r0 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r0 + 568);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0)) + static_cast<uint64_t>(static_cast<uint32_t>(568)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80854548:
{
    MemoryInline::FlatWrite32((r31 + 68), r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80854594;
    }
}

loc_80854550:
{
    r4 = r29;
    // inline leaf 0x805FA930 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x805FA930
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8085455C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80854594;
    }
}

loc_80854560:
{
    r4 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r31 + 68));
    r30 = MemoryInline::FlatRead32((r4 + 18240));
    r4 = r29;
    // inline leaf 0x805FA930 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // end of inlined leaf 0x805FA930
    r4 = r3;
    r3 = r30;
    ctx->lr = 0x80854580u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80868E2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80854594;
}

loc_80854584:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r31 + 2888));
    r3 = MemoryInline::FlatRead32((r3 + 18240));
    ctx->lr = 0x80854594u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80868D54u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80854594:
{
    r3 = r28;
    ctx->lr = 0x8085459Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->xer = xer;
    InvokeDirectCpu<0x805BDF88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f0.d = PPC_Fctiwz(f1.d);
    r0 = MemoryInline::FlatRead32((r31 + 2888));
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_808545AC:
{
    r29 = MemoryInline::FlatRead32((r1 + 12));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808545C0;
    }
}

loc_808545B4:
{
    r0 = MemoryInline::FlatRead32((r31 + 2884));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_808545BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808545C4;
    }
}

loc_808545C0:
{
    r29 = 90;
}

loc_808545C4:
{
    r30 = 0;
}

loc_808545C8:
{
    r3 = r30;
    ctx->lr = 0x808545D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80860F2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_808545D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_808545DC;
    }
}

loc_808545D8:
{
    goto loc_808545EC;
}

loc_808545DC:
{
    r30 = (r30 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(61));
}

loc_808545E4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_808545C8;
    }
}

loc_808545E8:
{
    r30 = -1;
}

loc_808545EC:
{
}

loc_808545F0:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(35))) {
        goto loc_80854614;
    }
}

loc_808545F4:
{
}

loc_808545F8:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(17))) {
        goto loc_80854608;
    }
}

loc_808545FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80854600:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80854628;
    }
}

loc_80854604:
{
    goto loc_80854648;
}

loc_80854608:
{
}

loc_8085460C:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(32))) {
        goto loc_80854638;
    }
}

loc_80854610:
{
    goto loc_80854630;
}

loc_80854614:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(61));
}

loc_80854618:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80854648;
    }
}

loc_8085461C:
{
}

loc_80854620:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(37))) {
        goto loc_80854640;
    }
}

loc_80854624:
{
    goto loc_80854630;
}

loc_80854628:
{
    r4 = 147;
    goto loc_808546BC;
}

loc_80854630:
{
    r4 = 144;
    goto loc_808546BC;
}

loc_80854638:
{
    r4 = 146;
    goto loc_808546BC;
}

loc_80854640:
{
    r4 = 145;
    goto loc_808546BC;
}

loc_80854648:
{
    r30 = 0;
}

loc_8085464C:
{
    r3 = r30;
    ctx->lr = 0x80854654u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x808628A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80854658:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80854660;
    }
}

loc_8085465C:
{
    goto loc_80854670;
}

loc_80854660:
{
    r30 = (r30 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(58));
}

loc_80854668:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8085464C;
    }
}

loc_8085466C:
{
    r30 = 58;
}

loc_80854670:
{
    r0 = (r30 + -34);
}

loc_80854678:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(17))) {
        goto loc_808546B0;
    }
}

loc_8085467C:
{
}

loc_80854680:
{
    if ((static_cast<uint32_t>(r30) <= static_cast<uint32_t>(11))) {
        goto loc_808546A0;
    }
}

loc_80854684:
{
    r0 = (r30 + -12);
}

loc_8085468C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_808546A8;
    }
}

loc_80854690:
{
}

loc_80854694:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(52))) {
        goto loc_808546B8;
    }
}

loc_80854698:
{
    r4 = 147;
    goto loc_808546BC;
}

loc_808546A0:
{
    r4 = 144;
    goto loc_808546BC;
}

loc_808546A8:
{
    r4 = 146;
    goto loc_808546BC;
}

loc_808546B0:
{
    r4 = 145;
    goto loc_808546BC;
}

loc_808546B8:
{
    r4 = -1;
}

loc_808546BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_808546C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808546F4;
    }
}

loc_808546C4:
{
    r3 = (r29 ^ -2147483648);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r4 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat64((r4 + -5760));
    r3 = r31;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = 65;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    ctx->lr = 0x808546F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80837C5Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8085471C;
}

loc_808546F4:
{
    r3 = (r29 ^ -2147483648);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r5 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat64((r5 + -5760));
    r3 = r31;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    ctx->lr = 0x8085471Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80837C5Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8085471C:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r31 + 2884), r0);
    MemoryInline::FlatWrite32((r31 + 2888), r0);
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8085447C func_8085447C preserves=true fpr_mask=0x00000000
