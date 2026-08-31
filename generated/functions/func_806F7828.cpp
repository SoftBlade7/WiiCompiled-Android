#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8009A910_statefree(uint32_t, PPC_FPR);

extern "C" void func_806F7828(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806F7828;

loc_806F7828:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r4 = 0x809C0000u;
    f30.d = f1.d;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 3736);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    r4 = MemoryInline::FlatRead32((r4 + 10232));
}

loc_806F7868:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_806F7874;
    }
}

loc_806F786C:
{
    r0 = MemoryInline::FlatRead8((r4 + 112));
    goto loc_806F7878;
}

loc_806F7874:
{
    r0 = 0;
}

loc_806F7878:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806F787C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806F7A2C;
    }
}

loc_806F7880:
{
    r4 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806F7A2C;
    }
}

loc_806F788C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // inline leaf 0x80531F70 (4 guest instruction(s))
    r3 = (r3 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 2948));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F70
    r4 = 0x809C0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r3 = MemoryInline::FlatRead32((r4 + -10448));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806F78B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806F7A2C;
    }
}

loc_806F78B8:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10320));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_806F78C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806F7A2C;
    }
}

loc_806F78CC:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 24));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_806F78D4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_806F7A2C;
    }
}

loc_806F78D8:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_806F78E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806F78E8;
    }
}

loc_806F78E4:
{
    goto loc_806F7A2C;
}

loc_806F78E8:
{
    r3 = 0x809C0000u;
    r4 = (r30 + 8);
    r3 = MemoryInline::FlatRead32((r3 + 10392));
    r5 = 280;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 180));
    ctr = r12;
    ctx->lr = 0x806F7908u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806F790C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F7A2C;
    }
}

loc_806F7910:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8(r30);
    r3 = MemoryInline::FlatRead32((r3 + 8992));
    r0 = MemoryInline::FlatRead8((r3 + 16));
}

loc_806F7924:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_806F7930;
    }
}

loc_806F7928:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    goto loc_806F7968;
}

loc_806F7930:
{
}

loc_806F7934:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_806F7954;
    }
}

loc_806F7938:
{
}

loc_806F793C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_806F7954;
    }
}

loc_806F7940:
{
}

loc_806F7944:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_806F795C;
    }
}

loc_806F7948:
{
}

loc_806F794C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(3))) {
        goto loc_806F795C;
    }
}

loc_806F7950:
{
    goto loc_806F7964;
}

loc_806F7954:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 16));
    goto loc_806F7968;
}

loc_806F795C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8));
    goto loc_806F7968;
}

loc_806F7964:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
}

loc_806F7968:
{
    f5.d = MemoryInline::FlatReadFloat32((r31 + 24));
    r3 = MemoryInline::FlatRead32((r30 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f30.d));
    f4.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806F7980:
{
    f3.d = MemoryInline::FlatReadFloat32((r31 + 28));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f5.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 32));
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f2.d = PpcFmulsInline(f2.d, f5.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F79A4;
    }
}

loc_806F79A0:
{
    // inline leaf 0x8008F620 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 168), f1.d);
    // end of inlined leaf 0x8008F620
}

loc_806F79A4:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806F79AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F79BC;
    }
}

loc_806F79B0:
{
    f1.d = f31.d;
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008F560u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
}

loc_806F79BC:
{
    r3 = (r1 + 8);
    r4 = (r30 + 8);
    ctx->lr = 0x806F79C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8009ACB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 8));
}

loc_806F79D0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806F79DC;
    }
}

loc_806F79D4:
{
    f1.d = f30.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8009A910u) && KnownTranslatedCpuCall<0x8009A910u>::kAvailable && !KnownTranslatedCpuCall<0x8009A910u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8009A910u>()) {
        const auto state_free_result_8009A910_28BD = func_8009A910_statefree(r3, f1);
        r3 = static_cast<uint32_t>(state_free_result_8009A910_28BD);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8009A910u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_806F79DC:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806F79E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F7A24;
    }
}

loc_806F79E8:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r31 = MemoryInline::FlatRead32((r3 + 244));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_806F79F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F7A24;
    }
}

loc_806F79F8:
{
    ctx->lr = 0x806F79FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801C2E4Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
}

loc_806F7A04:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806F7A18;
    }
}

loc_806F7A08:
{
    r4 = r31;
    r3 = (r30 + 8);
    ctx->lr = 0x806F7A14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80713C80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    goto loc_806F7A24;
}

loc_806F7A18:
{
    r3 = (r30 + 8);
    r4 = (r31 | 1);
    ctx->lr = 0x806F7A24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80713C80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
}

loc_806F7A24:
{
    r3 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009ADC0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_806F7A2C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806F7828 func_806F7828 preserves=false fpr_mask=0xC0000000
