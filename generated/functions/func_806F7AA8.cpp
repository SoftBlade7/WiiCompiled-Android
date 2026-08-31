#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8009A910_statefree(uint32_t, PPC_FPR);

extern "C" void func_806F7AA8(CpuContext* MKW_RESTRICT ctx)
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806F7AA8;

loc_806F7AA8:
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
    f31.d = f1.d;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    f30.d = f2.d;
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x808A0000u;
    r30 = (r30 + 3736);
    r4 = MemoryInline::FlatRead32((r4 + 10232));
}

loc_806F7AEC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_806F7AF8;
    }
}

loc_806F7AF0:
{
    r0 = MemoryInline::FlatRead8((r4 + 112));
    goto loc_806F7AFC;
}

loc_806F7AF8:
{
    r0 = 0;
}

loc_806F7AFC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806F7B00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806F7CB8;
    }
}

loc_806F7B04:
{
    r4 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806F7CB8;
    }
}

loc_806F7B10:
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

loc_806F7B38:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806F7CB8;
    }
}

loc_806F7B3C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10320));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_806F7B4C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806F7CB8;
    }
}

loc_806F7B50:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806F7B58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F7B74;
    }
}

loc_806F7B5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F7B68;
    }
}

loc_806F7B60:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_806F7B6C;
}

loc_806F7B68:
{
    r0 = -1;
}

loc_806F7B6C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(280));
}

loc_806F7B70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F7CB8;
    }
}

loc_806F7B74:
{
    r3 = 0x809C0000u;
    r4 = (r31 + 8);
    r3 = MemoryInline::FlatRead32((r3 + 10392));
    r5 = 281;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 180));
    ctr = r12;
    ctx->lr = 0x806F7B94u;
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806F7B98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F7CB8;
    }
}

loc_806F7B9C:
{
    f1.d = f31.d;
    r3 = MemoryInline::FlatRead8(r31);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806F7698u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 40));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_806F7BB0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806F7BC0;
    }
}

loc_806F7BB8:
{
    f31.d = MemoryInline::FlatReadFloat32((r30 + 32));
    goto loc_806F7BE4;
}

loc_806F7BC0:
{
    f0.d = MemoryInline::FlatReadFloat32(r30);
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_806F7BC8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806F7BD4;
    }
}

loc_806F7BCC:
{
    f31.d = MemoryInline::FlatReadFloat32((r30 + 28));
    goto loc_806F7BE4;
}

loc_806F7BD4:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 28));
    f2.d = PpcFmulsInline(f2.d, f30.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
}

loc_806F7BE4:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
}

loc_806F7BEC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806F7BF4;
    }
}

loc_806F7BF0:
{
    // inline leaf 0x8008F620 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 168), f1.d);
    // end of inlined leaf 0x8008F620
}

loc_806F7BF4:
{
    r3 = MemoryInline::FlatRead32((r31 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806F7BFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F7C0C;
    }
}

loc_806F7C00:
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
    ctx->cr = cr;
    InvokeDirectCpu<0x8008F560u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
}

loc_806F7C0C:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 40));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_806F7C14:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806F7C24;
    }
}

loc_806F7C1C:
{
    f31.d = MemoryInline::FlatReadFloat32((r30 + 48));
    goto loc_806F7C48;
}

loc_806F7C24:
{
    f0.d = MemoryInline::FlatReadFloat32(r30);
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_806F7C2C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806F7C38;
    }
}

loc_806F7C30:
{
    f31.d = MemoryInline::FlatReadFloat32((r30 + 32));
    goto loc_806F7C48;
}

loc_806F7C38:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f1.d = PpcFmulsInline(f1.d, f30.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
}

loc_806F7C48:
{
    r3 = (r1 + 8);
    r4 = (r31 + 8);
    ctx->lr = 0x806F7C54u;
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 8));
}

loc_806F7C5C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806F7C68;
    }
}

loc_806F7C60:
{
    f1.d = f31.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8009A910u) && KnownTranslatedCpuCall<0x8009A910u>::kAvailable && !KnownTranslatedCpuCall<0x8009A910u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8009A910u>()) {
        const auto state_free_result_8009A910_2963 = func_8009A910_statefree(r3, f1);
        r3 = static_cast<uint32_t>(state_free_result_8009A910_2963);
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_806F7C68:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806F7C70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F7CB0;
    }
}

loc_806F7C74:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r30 = MemoryInline::FlatRead32((r3 + 244));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_806F7C80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F7CB0;
    }
}

loc_806F7C84:
{
    ctx->lr = 0x806F7C88u;
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

loc_806F7C90:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806F7CA4;
    }
}

loc_806F7C94:
{
    r4 = r30;
    r3 = (r31 + 8);
    ctx->lr = 0x806F7CA0u;
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
    goto loc_806F7CB0;
}

loc_806F7CA4:
{
    r3 = (r31 + 8);
    r4 = (r30 | 1);
    ctx->lr = 0x806F7CB0u;
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

loc_806F7CB0:
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

loc_806F7CB8:
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806F7AA8 func_806F7AA8 preserves=false fpr_mask=0xC0000000
