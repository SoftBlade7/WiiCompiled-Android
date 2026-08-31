#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80590834_statefree(uint32_t, uint32_t);
extern "C" uint64_t func_80590834_statefree_v0(uint32_t, uint32_t);

extern "C" void func_8069AD40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8069AD40;

loc_8069AD40:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 72), r30);
    r4 = MemoryInline::FlatRead16((r3 + 2456));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_8069AD68:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_8069ADA0;
    }
}

loc_8069AD6C:
{
    r6 = MemoryInline::FlatRead16((r3 + 2458));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r6));
}

loc_8069AD74:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8069ADA0;
    }
}

loc_8069AD78:
{
    r0 = (r4 * 250);
    r5 = 0;
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r6));
    r0_subfic_ra_0 = r0;
    r0 = (255 - r0_subfic_ra_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(255) >= static_cast<uint32_t>(r0_subfic_ra_0) ? 1u : 0u) << 29);
    r4 = (r0 & 255);
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    ctx->lr = 0x8069AD9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x806A5E34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8069AE20;
}

loc_8069ADA0:
{
    r0 = MemoryInline::FlatRead16((r3 + 2458));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8069ADA8:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_8069ADC4;
    }
}

loc_8069ADAC:
{
    r0 = MemoryInline::FlatRead16((r3 + 2452));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8069ADB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8069ADC4;
    }
}

loc_8069ADB8:
{
    r0 = MemoryInline::FlatRead16((r3 + 2454));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8069ADC0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8069AE20;
    }
}

loc_8069ADC4:
{
    r3 = MemoryInline::FlatRead32((r3 + 680));
    r3 = (r3 + 116);
    // inline leaf 0x800375F0 (16 guest instruction(s))
}

loc_inl0_0x800375F0:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl0_0x800375F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x80037604;
    }
}

loc_inl0_0x800375FC:
{
    r0 = 0;
    goto loc_inl0_0x80037618;
}

loc_inl0_0x80037604:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
}

loc_inl0_0x80037618:
{
}

loc_inl0_0x8003761C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x80037628;
    }
}

loc_inl0_0x80037620:
{
    r3 = r4;
    goto loc_inl0_cont_800375F0;
}

loc_inl0_0x80037628:
{
    r3 = 0;
}

loc_inl0_cont_800375F0:
{
    // end of inlined leaf 0x800375F0
}

loc_8069ADD4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8069ADE0;
    }
}

loc_8069ADD8:
{
    r3 = 0;
    goto loc_8069ADE4;
}

loc_8069ADE0:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8069ADE4:
{
}

loc_8069ADE8:
{
    r0 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8069ADF8;
    }
}

loc_8069ADF0:
{
}

loc_8069ADF4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8069ADFC;
    }
}

loc_8069ADF8:
{
    r0 = 1;
}

loc_8069ADFC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8069AE00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8069AE20;
    }
}

loc_8069AE04:
{
    r3 = MemoryInline::FlatRead32((r31 + 680));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x8069AE18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
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
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 195), static_cast<uint8_t>(r0));
}

loc_8069AE20:
{
    r3 = MemoryInline::FlatRead16((r31 + 2456));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r31 + 2456), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8069AE34:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(200))) {
        goto loc_8069AE40;
    }
}

loc_8069AE38:
{
    r0 = 100;
    MemoryInline::FlatWrite16((r31 + 2456), static_cast<uint16_t>(r0));
}

loc_8069AE40:
{
    r0 = MemoryInline::FlatRead8((r31 + 136));
    r30 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8069AE4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8069AEA0;
    }
}

loc_8069AE50:
{
    r3 = MemoryInline::FlatRead32((r31 + 280));
    ctx->lr = 0x8069AE58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805914CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8069AE5C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8069AEA0;
    }
}

loc_8069AE60:
{
    r0 = MemoryInline::FlatRead8((r31 + 32));
}

loc_8069AE68:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8069AEA0;
    }
}

loc_8069AE6C:
{
    r0 = MemoryInline::FlatRead8((r31 + 33));
}

loc_8069AE74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8069AEA0;
    }
}

loc_8069AE78:
{
    r3 = MemoryInline::FlatRead32((r31 + 280));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 4);
}

loc_8069AE8C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8069AEA0;
    }
}

loc_8069AE90:
{
    r0 = MemoryInline::FlatRead8((r31 + 92));
}

loc_8069AE98:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8069AEA0;
    }
}

loc_8069AE9C:
{
    r30 = 1;
}

loc_8069AEA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8069AEA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8069AEC4;
    }
}

loc_8069AEA8:
{
    r3 = r31;
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x8069AEB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x806A5E34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 2456), static_cast<uint16_t>(r0));
    goto loc_8069B0F4;
}

loc_8069AEC4:
{
    r0 = MemoryInline::FlatRead8((r31 + 49));
}

loc_8069AECC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8069AFDC;
    }
}

loc_8069AED0:
{
    r0 = MemoryInline::FlatRead8((r31 + 326));
}

loc_8069AED8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8069AFDC;
    }
}

loc_8069AEDC:
{
    r0 = MemoryInline::FlatRead8((r31 + 136));
    r30 = 0;
    r3 = 0;
}

loc_8069AEEC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8069AEFC;
    }
}

loc_8069AEF0:
{
    r0 = MemoryInline::FlatRead8((r31 + 32));
}

loc_8069AEF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8069AF00;
    }
}

loc_8069AEFC:
{
    r3 = 1;
}

loc_8069AF00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8069AF04:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8069AF18;
    }
}

loc_8069AF08:
{
    r0 = MemoryInline::FlatRead8((r31 + 33));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8069AF10:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8069AF18;
    }
}

loc_8069AF14:
{
    r30 = 1;
}

loc_8069AF18:
{
    r3 = MemoryInline::FlatRead32((r31 + 280));
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x80590834u) && KnownTranslatedCpuCall<0x80590834u>::kAvailable && !KnownTranslatedCpuCall<0x80590834u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80590834u>()) {
        const auto state_free_result_80590834_33E4 = func_80590834_statefree_v0(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_80590834_33E4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80590834u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r5 = MemoryInline::FlatRead32((r3 + 88));
    r0 = MemoryInline::FlatRead32((r3 + 96));
    r4 = MemoryInline::FlatRead32((r3 + 92));
    r3 = (r1 + 32);
    MemoryInline::FlatWriteRam32((r1 + 52), r5);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 60));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 1764));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1756));
    MemoryInline::FlatWriteRam32((r1 + 56), r4);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    ctx->lr = 0x8069AF64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80243A78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = (r1 + 24);
    ctx->lr = 0x8069AF6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80243A78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    f3.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r3 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + -10536));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80085180u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    SetCRFloatResident(cr, 0, f31.d, f1.d);
}

loc_8069AF98:
{
    r0 = cr;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 1768));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1776));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 1);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8069AFAC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8069B0F4;
    }
}

loc_8069AFB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8069AFB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8069B0F4;
    }
}

loc_8069AFB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8069AFBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8069B0F4;
    }
}

loc_8069AFC0:
{
    r3 = r31;
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x8069AFD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x806A5E34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 2456), static_cast<uint16_t>(r0));
    goto loc_8069B0F4;
}

loc_8069AFDC:
{
    r3 = MemoryInline::FlatRead32((r31 + 280));
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & 1024);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8069AFF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8069B0F4;
    }
}

loc_8069AFF4:
{
    // inline leaf 0x8059084C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 48));
    // end of inlined leaf 0x8059084C
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r3 = MemoryInline::FlatRead32((r31 + 280));
    r30 = (r4 + 28);
    // inline leaf 0x8059084C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 48));
    // end of inlined leaf 0x8059084C
    r5 = MemoryInline::FlatRead32((r3 + 16));
    r4 = r30;
    r3 = (r1 + 40);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 40));
    // inline leaf 0x80518AB8 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80518AB8
    r0 = MemoryInline::FlatRead8((r31 + 136));
    r30 = 0;
    r3 = 0;
}

loc_8069B02C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8069B03C;
    }
}

loc_8069B030:
{
    r0 = MemoryInline::FlatRead8((r31 + 32));
}

loc_8069B038:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8069B040;
    }
}

loc_8069B03C:
{
    r3 = 1;
}

loc_8069B040:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8069B044:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8069B058;
    }
}

loc_8069B048:
{
    r0 = MemoryInline::FlatRead8((r31 + 33));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8069B050:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8069B058;
    }
}

loc_8069B054:
{
    r30 = 1;
}

loc_8069B058:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    r3 = (r1 + 16);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 1764));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1756));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    ctx->lr = 0x8069B080u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80243A78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = (r1 + 8);
    ctx->lr = 0x8069B088u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80243A78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    f3.d = MemoryInline::FlatReadFloat32((r1 + 16));
    r3 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + -10536));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80085180u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    SetCRFloatResident(cr, 0, f31.d, f1.d);
}

loc_8069B0B4:
{
    r0 = cr;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 1768));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1776));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & 1);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8069B0C8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8069B0F4;
    }
}

loc_8069B0CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8069B0D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8069B0F4;
    }
}

loc_8069B0D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8069B0D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8069B0F4;
    }
}

loc_8069B0DC:
{
    r3 = r31;
    r4 = 1;
    r5 = 0;
    ctx->lr = 0x8069B0ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x806A5E34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 2456), static_cast<uint16_t>(r0));
}

loc_8069B0F4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 100));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8069AD40 func_8069AD40 preserves=false fpr_mask=0x80000000
