#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80623054_statefree(uint32_t);
extern "C" MkwStateFreeResult2 func_80631588_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_80623054_statefree_v2(uint32_t);

extern "C" void func_80649590(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
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
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80649590;

loc_80649590:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r0 = MemoryInline::FlatRead8((r3 + 84));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806495B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80649968;
    }
}

loc_806495BC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_806495C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80649968;
    }
}

loc_806495C8:
{
    r3 = 0x80380000u;
    r3 = MemoryInline::FlatRead32((r3 + 24520));
    r3 = MemoryInline::FlatRead32((r3 + 84));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_806495DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806495F4;
    }
}

loc_806495E0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r0 = MemoryInline::FlatRead8((r3 + 45));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806495F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80649968;
    }
}

loc_806495F4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8408));
    ctx->lr = 0x80649600u;
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
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806569B4u>(ctx);
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
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 + -4);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8064960C:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80649630;
    }
}

loc_80649614:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80649618:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806496AC;
    }
}

loc_8064961C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_80649620:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80649630;
    }
}

loc_80649624:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_80649628:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806496AC;
    }
}

loc_8064962C:
{
    goto loc_80649674;
}

loc_80649630:
{
    r3 = 0x809C0000u;
    r6 = 0x808A0000u;
    r5 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = r30;
    r7 = MemoryInline::FlatRead32((r1 + 8));
    r4 = 120;
    r8 = MemoryInline::FlatRead32((r5 + 152));
    r5 = 0;
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite32((r8 + 1280), r7);
    f1.d = MemoryInline::FlatReadFloat32((r6 + -26808));
    MemoryInline::FlatWrite32((r8 + 1284), r0);
    r12 = MemoryInline::FlatRead32(r30);
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x80649670u;
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
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806496AC;
}

loc_80649674:
{
    r5 = 0x809C0000u;
    r6 = 0x808A0000u;
    r7 = MemoryInline::FlatRead32((r5 + 7736));
    r5 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r6 + -26808));
    r6 = MemoryInline::FlatRead32((r7 + 152));
    MemoryInline::FlatWrite32((r6 + 1280), r3);
    r3 = r30;
    MemoryInline::FlatWrite32((r6 + 1284), r4);
    r4 = 120;
    r12 = MemoryInline::FlatRead32(r30);
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x806496ACu;
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
    r8 = ctx->gpr[8];
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

loc_806496AC:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80631588u) && KnownTranslatedCpuCall<0x80631588u>::kAvailable && !KnownTranslatedCpuCall<0x80631588u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80631588u>()) {
        const auto state_free_result_80631588_1E3B = func_80631588_statefree(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80631588_1E3B[0]);
        cr = static_cast<uint32_t>(state_free_result_80631588_1E3B[1]);
    } else {
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
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80631588u>(ctx);
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
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_806496C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80649968;
    }
}

loc_806496C8:
{
    r3 = 0x809C0000u;
    r4 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = 0;
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r3 = MemoryInline::FlatRead32((r5 + 2928));
}

loc_806496E4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(7))) {
        goto loc_806496F4;
    }
}

loc_806496E8:
{
}

loc_806496EC:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(10))) {
        goto loc_806496F4;
    }
}

loc_806496F0:
{
    r0 = 1;
}

loc_806496F4:
{
}

loc_806496F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80649738;
    }
}

loc_806496FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(7));
}

loc_80649700:
{
    r3 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80649714;
    }
}

loc_80649708:
{
    r0 = MemoryInline::FlatRead32((r5 + 2928));
}

loc_80649710:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_80649718;
    }
}

loc_80649714:
{
    r3 = 1;
}

loc_80649718:
{
}

loc_8064971C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8064972C;
    }
}

loc_80649720:
{
    r3 = MemoryInline::FlatRead32((r4 + 16));
    r5 = MemoryInline::FlatRead8((r3 + 276));
    goto loc_8064973C;
}

loc_8064972C:
{
    r3 = MemoryInline::FlatRead32((r4 + 16));
    r5 = MemoryInline::FlatRead8((r3 + 52));
    goto loc_8064973C;
}

loc_80649738:
{
    r5 = 0;
}

loc_8064973C:
{
    r3 = 0x809C0000u;
    r0 = (0 - r5);
    r6 = MemoryInline::FlatRead32((r3 + 7736));
    r4 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r4 + 8016));
    r0 = (r0 | r5);
    r6 = MemoryInline::FlatRead32(r6);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r5 = MemoryInline::FlatRead32(r6);
    r3 = (r4 | r0);
    r0 = (0 - r3);
}

loc_80649770:
{
    r0 = (r0 | r3);
    r31_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r31 = (r31_rot_1 & 1);
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(112))) {
        goto loc_80649784;
    }
}

loc_8064977C:
{
}

loc_80649780:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(119))) {
        goto loc_806497A4;
    }
}

loc_80649784:
{
}

loc_80649788:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(104))) {
        goto loc_80649794;
    }
}

loc_8064978C:
{
}

loc_80649790:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(105))) {
        goto loc_806497A4;
    }
}

loc_80649794:
{
}

loc_80649798:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(108))) {
        goto loc_80649894;
    }
}

loc_8064979C:
{
}

loc_806497A0:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(109))) {
        goto loc_80649894;
    }
}

loc_806497A4:
{
    r28 = MemoryInline::FlatRead32((r6 + 896));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_806497AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806497B8;
    }
}

loc_806497B0:
{
    r28 = 0;
    goto loc_8064980C;
}

loc_806497B8:
{
    r29 = 0x809C0000u;
    r29 = (r29 + 7688);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80649808;
    }
}

loc_806497C4:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x806497D8u;
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
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806497F0;
}

loc_806497DC:
{
}

loc_806497E0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r29))) {
        goto loc_806497EC;
    }
}

loc_806497E4:
{
    r0 = 1;
    goto loc_806497FC;
}

loc_806497EC:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_806497F0:
{
}

loc_806497F4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_806497DC;
    }
}

loc_806497F8:
{
    r0 = 0;
}

loc_806497FC:
{
}

loc_80649800:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80649808;
    }
}

loc_80649804:
{
    goto loc_8064980C;
}

loc_80649808:
{
    r28 = 0;
}

loc_8064980C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80649810:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8064981C;
    }
}

loc_80649814:
{
    r28 = 0;
    goto loc_80649870;
}

loc_8064981C:
{
    r29 = 0x809C0000u;
    r29 = (r29 + 7700);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8064986C;
    }
}

loc_80649828:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x8064983Cu;
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
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80649854;
}

loc_80649840:
{
}

loc_80649844:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r29))) {
        goto loc_80649850;
    }
}

loc_80649848:
{
    r0 = 1;
    goto loc_80649860;
}

loc_80649850:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80649854:
{
}

loc_80649858:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80649840;
    }
}

loc_8064985C:
{
    r0 = 0;
}

loc_80649860:
{
}

loc_80649864:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8064986C;
    }
}

loc_80649868:
{
    goto loc_80649870;
}

loc_8064986C:
{
    r28 = 0;
}

loc_80649870:
{
}

loc_80649874:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80649894;
    }
}

loc_80649878:
{
    r0 = MemoryInline::FlatRead32((r28 + 8));
}

loc_80649880:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_80649894;
    }
}

loc_80649884:
{
    r0 = MemoryInline::FlatRead32((r28 + 32));
}

loc_8064988C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(3600))) {
        goto loc_80649894;
    }
}

loc_80649890:
{
    r31 = 1;
}

loc_80649894:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r29 = MemoryInline::FlatRead32((r3 + 296));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_806498A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806498B4;
    }
}

loc_806498AC:
{
    r29 = 0;
    goto loc_80649908;
}

loc_806498B4:
{
    r28 = 0x809C0000u;
    r28 = (r28 + 7960);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80649904;
    }
}

loc_806498C0:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x806498D4u;
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
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_806498EC;
}

loc_806498D8:
{
}

loc_806498DC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r28))) {
        goto loc_806498E8;
    }
}

loc_806498E0:
{
    r0 = 1;
    goto loc_806498F8;
}

loc_806498E8:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_806498EC:
{
}

loc_806498F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_806498D8;
    }
}

loc_806498F4:
{
    r0 = 0;
}

loc_806498F8:
{
}

loc_806498FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80649904;
    }
}

loc_80649900:
{
    goto loc_80649908;
}

loc_80649904:
{
    r29 = 0;
}

loc_80649908:
{
}

loc_8064990C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8064992C;
    }
}

loc_80649910:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
}

loc_80649918:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8064992C;
    }
}

loc_8064991C:
{
    r0 = MemoryInline::FlatRead32((r29 + 32));
}

loc_80649924:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(10800))) {
        goto loc_8064992C;
    }
}

loc_80649928:
{
    r31 = 1;
}

loc_8064992C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80649930:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80649968;
    }
}

loc_80649934:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80623054u) && KnownTranslatedCpuCall<0x80623054u>::kAvailable && !KnownTranslatedCpuCall<0x80623054u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80623054u>()) {
        const auto state_free_result_80623054_4FD2 = func_80623054_statefree_v2(r3);
        r0 = static_cast<uint32_t>(state_free_result_80623054_4FD2);
    } else {
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
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80623054u>(ctx);
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
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r12 = MemoryInline::FlatRead32(r30);
    r5 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -26808));
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 28));
    r4 = 121;
    r5 = 0;
    ctr = r12;
    ctx->lr = 0x80649968u;
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
    r8 = ctx->gpr[8];
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

loc_80649968:
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
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80649590 func_80649590 preserves=true fpr_mask=0x00000000
