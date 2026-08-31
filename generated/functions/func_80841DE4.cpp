#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80860484_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80860484_statefree_v0(uint32_t, uint32_t);

extern "C" void func_80841DE4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80841DE4;

loc_80841DE4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = MemoryInline::FlatRead32((r3 + 9176));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80841E08:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80841E14;
    }
}

loc_80841E0C:
{
    ctx->lr = 0x80841E10u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80837D44u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80841FDC;
}

loc_80841E14:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(75));
}

loc_80841E28:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80841EB0;
    }
}

loc_80841E2C:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80841E38;
    }
}

loc_80841E30:
{
    r29 = 0;
    goto loc_80841E8C;
}

loc_80841E38:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 7988);
    if (((cr & 0x02000000u) != 0)) {
        goto loc_80841E88;
    }
}

loc_80841E44:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x80841E58u;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80841E70;
}

loc_80841E5C:
{
}

loc_80841E60:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_80841E6C;
    }
}

loc_80841E64:
{
    r0 = 1;
    goto loc_80841E7C;
}

loc_80841E6C:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80841E70:
{
}

loc_80841E74:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80841E5C;
    }
}

loc_80841E78:
{
    r0 = 0;
}

loc_80841E7C:
{
}

loc_80841E80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80841E88;
    }
}

loc_80841E84:
{
    goto loc_80841E8C;
}

loc_80841E88:
{
    r29 = 0;
}

loc_80841E8C:
{
    r0 = MemoryInline::FlatRead32((r29 + 624));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80841E94:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80841FDC;
    }
}

loc_80841E98:
{
    r4 = 0x808B0000u;
    r3 = r31;
    f1.d = MemoryInline::FlatReadFloat32((r4 + -11324));
    r4 = 65;
    ctx->lr = 0x80841EACu;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80837F04u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80841FDC;
}

loc_80841EB0:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80860484u) && KnownTranslatedCpuCall<0x80860484u>::kAvailable && !KnownTranslatedCpuCall<0x80860484u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80860484u>()) {
        const auto state_free_result_80860484_16E6 = func_80860484_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_80860484_16E6[0]);
        r3 = static_cast<uint32_t>(state_free_result_80860484_16E6[1]);
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80860484u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80841EB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80841FDC;
    }
}

loc_80841EBC:
{
    r4 = MemoryInline::FlatRead32((r31 + 9180));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80841EC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80841EF4;
    }
}

loc_80841EC8:
{
    r3 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32((r3 + -11324));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80841ED8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80841EE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80841EF4;
    }
}

loc_80841EE8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 9176), r0);
    goto loc_80841FDC;
}

loc_80841EF4:
{
    r29 = MemoryInline::FlatRead32((r31 + 9176));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80841EFC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80841F08;
    }
}

loc_80841F00:
{
    r29 = 0;
    goto loc_80841F5C;
}

loc_80841F08:
{
    r30 = 0x809C0000u;
    r30 = (r30 + 7988);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80841F58;
    }
}

loc_80841F14:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x80841F28u;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80841F40;
}

loc_80841F2C:
{
}

loc_80841F30:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r30))) {
        goto loc_80841F3C;
    }
}

loc_80841F34:
{
    r0 = 1;
    goto loc_80841F4C;
}

loc_80841F3C:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80841F40:
{
}

loc_80841F44:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80841F2C;
    }
}

loc_80841F48:
{
    r0 = 0;
}

loc_80841F4C:
{
}

loc_80841F50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80841F58;
    }
}

loc_80841F54:
{
    goto loc_80841F5C;
}

loc_80841F58:
{
    r29 = 0;
}

loc_80841F5C:
{
    r0 = MemoryInline::FlatRead32((r29 + 624));
}

loc_80841F64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80841F74;
    }
}

loc_80841F68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80841F6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80841FB8;
    }
}

loc_80841F70:
{
    goto loc_80841FD4;
}

loc_80841F74:
{
    r3 = MemoryInline::FlatRead32((r31 + 1060));
}

loc_80841F7C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-1))) {
        goto loc_80841F88;
    }
}

loc_80841F80:
{
    r0 = -1;
    goto loc_80841F90;
}

loc_80841F88:
{
    r0 = MemoryInline::FlatRead32((r31 + 32));
    r0 = (r0 - r3);
}

loc_80841F90:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_80841F94:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80841FD4;
    }
}

loc_80841F98:
{
    r5 = 0x808B0000u;
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r5 + -11292));
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r5 = 1;
    ctx->lr = 0x80841FB4u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80838884u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80841FD4;
}

loc_80841FB8:
{
    r4 = 0x808B0000u;
    r0 = -1;
    f1.d = MemoryInline::FlatReadFloat32((r4 + -11324));
    r3 = r31;
    MemoryInline::FlatWrite32((r31 + 1000), r0);
    r4 = 0;
    // inline leaf 0x80602488 (7 guest instruction(s))
}

loc_inl0_0x80602488:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_inl0_0x8060248C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x80602494;
    }
}

loc_inl0_0x80602490:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
}

loc_inl0_0x80602494:
{
    r0 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 24), f1.d);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
}

loc_inl0_cont_80602488:
{
    // end of inlined leaf 0x80602488
}

loc_80841FD4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 9176), r0);
}

loc_80841FDC:
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80841DE4 func_80841DE4 preserves=true fpr_mask=0x00000000
