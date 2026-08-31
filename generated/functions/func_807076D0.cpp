#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80632080_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_807029CC_statefree(uint32_t);

extern "C" void func_807076D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807076D0;

loc_807076D0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r3 = MemoryInline::FlatRead32((r30 + 9900));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80632080u) && KnownTranslatedCpuCall<0x80632080u>::kAvailable && !KnownTranslatedCpuCall<0x80632080u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80632080u>()) {
        const auto state_free_result_80632080_727 = func_80632080_statefree(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_80632080_727[0]);
        cr = static_cast<uint32_t>(state_free_result_80632080_727[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80632080u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_807076FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707E28;
    }
}

loc_80707700:
{
    r3 = MemoryInline::FlatRead32((r30 + 9900));
    r0 = (r3 + -53);
}

loc_8070770C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_80707734;
    }
}

loc_80707710:
{
    r0 = (r3 + -57);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80707718:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80707E28;
    }
}

loc_8070771C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(15));
}

loc_80707720:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707E28;
    }
}

loc_80707724:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(13));
}

loc_80707728:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707734;
    }
}

loc_8070772C:
{
    goto loc_80707748;
}

loc_80707734:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2932));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(12));
}

loc_80707744:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707E28;
    }
}

loc_80707748:
{
    r3 = r31;
    ctx->lr = 0x80707750u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8070B250u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10320));
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80707760:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80707E28;
    }
}

loc_80707764:
{
    r3 = MemoryInline::FlatRead32((r31 + 220));
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & 524288);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80707778:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80707E28;
    }
}

loc_8070777C:
{
    r0 = MemoryInline::FlatRead8((r31 + 224));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80707784:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070779C;
    }
}

loc_80707788:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 244), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070779C;
    }
}

loc_80707794:
{
    ctx->lr = 0x80707798u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80713BC4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r31 + 244), r3);
}

loc_8070779C:
{
    r3 = (r31 + 148);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x807029CCu) && KnownTranslatedCpuCall<0x807029CCu>::kAvailable && !KnownTranslatedCpuCall<0x807029CCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x807029CCu>()) {
        const auto state_free_result_807029CC_1C92 = func_807029CC_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_807029CC_1C92);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x807029CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r12 = MemoryInline::FlatRead32(r31);
    r4 = r3;
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 48));
    ctr = r12;
    ctx->lr = 0x807077BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r31 + 225));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807077C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80707E28;
    }
}

loc_807077C8:
{
    r3 = MemoryInline::FlatRead32((r31 + 220));
    r3 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r30_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r30 = (r30_rot_1 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_807077E0:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r29_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(31));
    r29 = (r29_rot_1 & 1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(19));
    r0 = (r0_rot_1 & 1);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80707800;
    }
}

loc_807077F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_807077F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80707800;
    }
}

loc_807077F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807077FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707814;
    }
}

loc_80707800:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 256));
    ctr = r12;
    ctx->lr = 0x80707814u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80707814:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80707818:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80707E28;
    }
}

loc_8070781C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80707820:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707A88;
    }
}

loc_80707824:
{
    r4 = MemoryInline::FlatRead32((r31 + 128));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80707830:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707854;
    }
}

loc_80707834:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707840;
    }
}

loc_80707838:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80707844;
}

loc_80707840:
{
    r0 = -1;
}

loc_80707844:
{
}

loc_80707848:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(412))) {
        goto loc_80707854;
    }
}

loc_8070784C:
{
    r3 = (r31 + 128);
    goto loc_807078D4;
}

loc_80707854:
{
    r4 = MemoryInline::FlatRead32((r31 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8070785C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707880;
    }
}

loc_80707860:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070786C;
    }
}

loc_80707864:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80707870;
}

loc_8070786C:
{
    r0 = -1;
}

loc_80707870:
{
}

loc_80707874:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(412))) {
        goto loc_80707880;
    }
}

loc_80707878:
{
    r3 = (r31 + 132);
    goto loc_807078D4;
}

loc_80707880:
{
    r4 = MemoryInline::FlatRead32((r31 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80707888:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807078AC;
    }
}

loc_8070788C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707898;
    }
}

loc_80707890:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_8070789C;
}

loc_80707898:
{
    r0 = -1;
}

loc_8070789C:
{
}

loc_807078A0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(412))) {
        goto loc_807078AC;
    }
}

loc_807078A4:
{
    r3 = (r31 + 136);
    goto loc_807078D4;
}

loc_807078AC:
{
    r4 = MemoryInline::FlatRead32((r31 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807078B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807078D4;
    }
}

loc_807078B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807078C4;
    }
}

loc_807078BC:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_807078C8;
}

loc_807078C4:
{
    r0 = -1;
}

loc_807078C8:
{
}

loc_807078CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(412))) {
        goto loc_807078D4;
    }
}

loc_807078D0:
{
    r3 = (r31 + 140);
}

loc_807078D4:
{
}

loc_807078D8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807078F0;
    }
}

loc_807078DC:
{
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807078E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807078F0;
    }
}

loc_807078E8:
{
    r4 = 10;
    ctx->lr = 0x807078F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807078F0:
{
    r4 = MemoryInline::FlatRead32((r31 + 128));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807078FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707920;
    }
}

loc_80707900:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070790C;
    }
}

loc_80707904:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80707910;
}

loc_8070790C:
{
    r0 = -1;
}

loc_80707910:
{
}

loc_80707914:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(413))) {
        goto loc_80707920;
    }
}

loc_80707918:
{
    r3 = (r31 + 128);
    goto loc_807079A0;
}

loc_80707920:
{
    r4 = MemoryInline::FlatRead32((r31 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80707928:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070794C;
    }
}

loc_8070792C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707938;
    }
}

loc_80707930:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_8070793C;
}

loc_80707938:
{
    r0 = -1;
}

loc_8070793C:
{
}

loc_80707940:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(413))) {
        goto loc_8070794C;
    }
}

loc_80707944:
{
    r3 = (r31 + 132);
    goto loc_807079A0;
}

loc_8070794C:
{
    r4 = MemoryInline::FlatRead32((r31 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80707954:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707978;
    }
}

loc_80707958:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707964;
    }
}

loc_8070795C:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80707968;
}

loc_80707964:
{
    r0 = -1;
}

loc_80707968:
{
}

loc_8070796C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(413))) {
        goto loc_80707978;
    }
}

loc_80707970:
{
    r3 = (r31 + 136);
    goto loc_807079A0;
}

loc_80707978:
{
    r4 = MemoryInline::FlatRead32((r31 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80707980:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807079A0;
    }
}

loc_80707984:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707990;
    }
}

loc_80707988:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80707994;
}

loc_80707990:
{
    r0 = -1;
}

loc_80707994:
{
}

loc_80707998:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(413))) {
        goto loc_807079A0;
    }
}

loc_8070799C:
{
    r3 = (r31 + 140);
}

loc_807079A0:
{
}

loc_807079A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807079BC;
    }
}

loc_807079A8:
{
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807079B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807079BC;
    }
}

loc_807079B4:
{
    r4 = 10;
    ctx->lr = 0x807079BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807079BC:
{
    r4 = MemoryInline::FlatRead32((r31 + 128));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807079C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807079EC;
    }
}

loc_807079CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807079D8;
    }
}

loc_807079D0:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_807079DC;
}

loc_807079D8:
{
    r0 = -1;
}

loc_807079DC:
{
}

loc_807079E0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(414))) {
        goto loc_807079EC;
    }
}

loc_807079E4:
{
    r3 = (r31 + 128);
    goto loc_80707A6C;
}

loc_807079EC:
{
    r4 = MemoryInline::FlatRead32((r31 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807079F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707A18;
    }
}

loc_807079F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707A04;
    }
}

loc_807079FC:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80707A08;
}

loc_80707A04:
{
    r0 = -1;
}

loc_80707A08:
{
}

loc_80707A0C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(414))) {
        goto loc_80707A18;
    }
}

loc_80707A10:
{
    r3 = (r31 + 132);
    goto loc_80707A6C;
}

loc_80707A18:
{
    r4 = MemoryInline::FlatRead32((r31 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80707A20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707A44;
    }
}

loc_80707A24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707A30;
    }
}

loc_80707A28:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80707A34;
}

loc_80707A30:
{
    r0 = -1;
}

loc_80707A34:
{
}

loc_80707A38:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(414))) {
        goto loc_80707A44;
    }
}

loc_80707A3C:
{
    r3 = (r31 + 136);
    goto loc_80707A6C;
}

loc_80707A44:
{
    r4 = MemoryInline::FlatRead32((r31 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80707A4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707A6C;
    }
}

loc_80707A50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707A5C;
    }
}

loc_80707A54:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80707A60;
}

loc_80707A5C:
{
    r0 = -1;
}

loc_80707A60:
{
}

loc_80707A64:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(414))) {
        goto loc_80707A6C;
    }
}

loc_80707A68:
{
    r3 = (r31 + 140);
}

loc_80707A6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80707A70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707A88;
    }
}

loc_80707A74:
{
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80707A7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707A88;
    }
}

loc_80707A80:
{
    r4 = 10;
    ctx->lr = 0x80707A88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80707A88:
{
    r3 = r31;
    ctx->lr = 0x80707A90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8070B490u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = MemoryInline::FlatRead32((r31 + 220));
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r0 = (r0_rot_2 & 1);
    MemoryInline::FlatWrite8((r31 + 232), static_cast<uint8_t>(r0));
    // inline leaf 0x805911D8 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r3 = MemoryInline::FlatRead16((r3 + 252));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    // end of inlined leaf 0x805911D8
    r4 = MemoryInline::FlatRead8((r31 + 210));
    MemoryInline::FlatWrite8((r31 + 233), static_cast<uint8_t>(r3));
    r3 = (r4 + 1);
    r0 = (r3 & 255);
    MemoryInline::FlatWrite8((r31 + 210), static_cast<uint8_t>(r3));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(100));
}

loc_80707AC8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80707AD4;
    }
}

loc_80707ACC:
{
    r0 = 100;
    MemoryInline::FlatWrite8((r31 + 210), static_cast<uint8_t>(r0));
}

loc_80707AD4:
{
    r3 = MemoryInline::FlatRead32((r31 + 220));
    // inline leaf 0x80590D08 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 212);
    // end of inlined leaf 0x80590D08
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x80707B00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead8((r31 + 211));
    MemoryInline::FlatWriteFloat32((r31 + 236), f1.d);
    r3 = (r3 + 1);
    r0 = (r3 & 255);
    MemoryInline::FlatWrite8((r31 + 211), static_cast<uint8_t>(r3));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80707B1C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(126))) {
        goto loc_80707B28;
    }
}

loc_80707B20:
{
    r0 = 126;
    MemoryInline::FlatWrite8((r31 + 211), static_cast<uint8_t>(r0));
}

loc_80707B28:
{
    r3 = MemoryInline::FlatRead32((r31 + 220));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_3 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80707B3C:
{
    MemoryInline::FlatWrite8((r31 + 216), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707B64;
    }
}

loc_80707B44:
{
    r12 = MemoryInline::FlatRead32(r31);
    r5 = 0x808A0000u;
    r3 = r31;
    r4 = 284;
    r12 = MemoryInline::FlatRead32((r12 + 232));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 5856));
    ctr = r12;
    ctx->lr = 0x80707B64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80707B64:
{
    r0 = MemoryInline::FlatRead8((r31 + 217));
}

loc_80707B6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80707C3C;
    }
}

loc_80707B70:
{
    r4 = MemoryInline::FlatRead32((r31 + 128));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80707B7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707BA0;
    }
}

loc_80707B80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707B8C;
    }
}

loc_80707B84:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80707B90;
}

loc_80707B8C:
{
    r0 = -1;
}

loc_80707B90:
{
}

loc_80707B94:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(283))) {
        goto loc_80707BA0;
    }
}

loc_80707B98:
{
    r3 = (r31 + 128);
    goto loc_80707C20;
}

loc_80707BA0:
{
    r4 = MemoryInline::FlatRead32((r31 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80707BA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707BCC;
    }
}

loc_80707BAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707BB8;
    }
}

loc_80707BB0:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80707BBC;
}

loc_80707BB8:
{
    r0 = -1;
}

loc_80707BBC:
{
}

loc_80707BC0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(283))) {
        goto loc_80707BCC;
    }
}

loc_80707BC4:
{
    r3 = (r31 + 132);
    goto loc_80707C20;
}

loc_80707BCC:
{
    r4 = MemoryInline::FlatRead32((r31 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80707BD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707BF8;
    }
}

loc_80707BD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707BE4;
    }
}

loc_80707BDC:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80707BE8;
}

loc_80707BE4:
{
    r0 = -1;
}

loc_80707BE8:
{
}

loc_80707BEC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(283))) {
        goto loc_80707BF8;
    }
}

loc_80707BF0:
{
    r3 = (r31 + 136);
    goto loc_80707C20;
}

loc_80707BF8:
{
    r4 = MemoryInline::FlatRead32((r31 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80707C00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707C20;
    }
}

loc_80707C04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707C10;
    }
}

loc_80707C08:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80707C14;
}

loc_80707C10:
{
    r0 = -1;
}

loc_80707C14:
{
}

loc_80707C18:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(283))) {
        goto loc_80707C20;
    }
}

loc_80707C1C:
{
    r3 = (r31 + 140);
}

loc_80707C20:
{
}

loc_80707C24:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80707C3C;
    }
}

loc_80707C28:
{
    r0 = MemoryInline::FlatRead32((r31 + 96));
    r3 = 0;
    MemoryInline::FlatWrite8((r31 + 217), static_cast<uint8_t>(r3));
    r0 = (r0 & -1025);
    MemoryInline::FlatWrite32((r31 + 96), r0);
}

loc_80707C3C:
{
    r0 = MemoryInline::FlatRead8((r31 + 177));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80707C44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80707E28;
    }
}

loc_80707C48:
{
    r0 = MemoryInline::FlatRead8((r31 + 216));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80707C50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80707E28;
    }
}

loc_80707C54:
{
    r0 = MemoryInline::FlatRead8((r31 + 232));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80707C5C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80707C6C;
    }
}

loc_80707C60:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 180), static_cast<uint8_t>(r0));
    goto loc_80707CD8;
}

loc_80707C6C:
{
    r3 = MemoryInline::FlatRead32((r31 + 220));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 33554432);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80707C80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707C90;
    }
}

loc_80707C84:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 180), static_cast<uint8_t>(r0));
    goto loc_80707C9C;
}

loc_80707C90:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 180), static_cast<uint8_t>(r0));
    goto loc_80707CD8;
}

loc_80707C9C:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 308));
    ctr = r12;
    ctx->lr = 0x80707CB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(349));
}

loc_80707CB4:
{
    r4 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80707CC0;
    }
}

loc_80707CBC:
{
    r4 = 345;
}

loc_80707CC0:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r5 = (r31 + 192);
    r12 = MemoryInline::FlatRead32((r12 + 248));
    ctr = r12;
    ctx->lr = 0x80707CD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80707CD8:
{
    r3 = r31;
    ctx->lr = 0x80707CE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807093C4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r31;
    ctx->lr = 0x80707CE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80709610u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 184));
    ctx->lr = 0x80707CF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806FAFB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10232));
    r0 = MemoryInline::FlatRead32((r3 + 64));
}

loc_80707D00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80707D78;
    }
}

loc_80707D04:
{
    r3 = MemoryInline::FlatRead32((r31 + 220));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 512);
}

loc_80707D18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80707D78;
    }
}

loc_80707D1C:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & -2147483648);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80707D24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707D78;
    }
}

loc_80707D28:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 312));
    ctr = r12;
    ctx->lr = 0x80707D3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r31);
    r5 = 0x808A0000u;
    r4 = r3;
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 224));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 5856));
    ctr = r12;
    ctx->lr = 0x80707D5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80707D60:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80707D78;
    }
}

loc_80707D64:
{
    r0 = MemoryInline::FlatRead32((r31 + 244));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80707D6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707D78;
    }
}

loc_80707D70:
{
    r4 = (r0 | 1);
    ctx->lr = 0x80707D78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80713C80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_80707D78:
{
    r3 = MemoryInline::FlatRead16((r31 + 204));
}

loc_80707D80:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80707D90;
    }
}

loc_80707D84:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 204), static_cast<uint16_t>(r0));
    goto loc_80707D9C;
}

loc_80707D90:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 204), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 206), static_cast<uint16_t>(r0));
}

loc_80707D9C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r4 = MemoryInline::FlatRead32((r3 + 2920));
}

loc_80707DAC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(6))) {
        goto loc_80707DB8;
    }
}

loc_80707DB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(35));
}

loc_80707DB4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80707E20;
    }
}

loc_80707DB8:
{
    r3 = MemoryInline::FlatRead32((r31 + 220));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 1024);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80707DCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707E18;
    }
}

loc_80707DD0:
{
    r3 = MemoryInline::FlatRead16((r31 + 208));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r31 + 208), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
}

loc_80707DE4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80707E20;
    }
}

loc_80707DE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(6));
}

loc_80707DEC:
{
    r4 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80707DF8;
    }
}

loc_80707DF4:
{
    r4 = 697;
}

loc_80707DF8:
{
    r12 = MemoryInline::FlatRead32(r31);
    r5 = 0x808A0000u;
    r3 = r31;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 5856));
    r12 = MemoryInline::FlatRead32((r12 + 224));
    ctr = r12;
    ctx->lr = 0x80707E14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80707E20;
}

loc_80707E18:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 208), static_cast<uint16_t>(r0));
}

loc_80707E20:
{
    r3 = r31;
    ctx->lr = 0x80707E28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8070BE0Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80707E28:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807076D0 func_807076D0 preserves=true fpr_mask=0x00000000
