#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80744478(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
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

    goto loc_80744478;

loc_80744478:
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
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x808D0000u;
    r31 = (r31 + -19208);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r6 = MemoryInline::FlatRead32((r3 + 8));
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r4 = MemoryInline::FlatRead32((r3 + 24));
    f1.d = MemoryInline::FlatReadFloat32(r6);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 88));
    r3 = MemoryInline::FlatRead32((r4 + 4));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    r30 = MemoryInline::FlatRead32(r5);
    f31.d = MemoryInline::FlatReadFloat32((r6 + 8));
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x805910B0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 20));
    // end of inlined leaf 0x805910B0
    r5 = MemoryInline::FlatRead32((r29 + 24));
    r6 = 0x808A0000u;
    r4 = MemoryInline::FlatRead32((r29 + 20));
    r3 = MemoryInline::FlatRead32((r29 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 32));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 32));
    f5.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 12));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f4.d = MemoryInline::FlatReadFloat32((r6 + 11072));
    f0.d = PpcFmulsInline(f0.d, f5.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    SetCRFloatResident(cr, 0, f3.d, f4.d);
}

loc_8074450C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80744550;
    }
}

loc_80744510:
{
    f3.d = (-(f3.d));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 16));
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 11088));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f2.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80744528:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80744534;
    }
}

loc_8074452C:
{
    f2.d = f0.d;
    goto loc_80744540;
}

loc_80744534:
{
    SetCRFloatResident(cr, 0, f2.d, f4.d);
}

loc_80744538:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80744540;
    }
}

loc_8074453C:
{
    f2.d = f4.d;
}

loc_80744540:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    goto loc_80744588;
}

loc_80744550:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 16));
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 11088));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f2.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80744564:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80744570;
    }
}

loc_80744568:
{
    f2.d = f0.d;
    goto loc_8074457C;
}

loc_80744570:
{
    SetCRFloatResident(cr, 0, f2.d, f4.d);
}

loc_80744574:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8074457C;
    }
}

loc_80744578:
{
    f2.d = f4.d;
}

loc_8074457C:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
}

loc_80744588:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r3 = MemoryInline::FlatRead32((r3 + 324));
    r3 = MemoryInline::FlatRead32((r3 + 60));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x807445A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
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
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
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

loc_807445AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807445C0;
    }
}

loc_807445B0:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 88));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_807445B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807445C0;
    }
}

loc_807445BC:
{
    f31.d = f0.d;
}

loc_807445C0:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    MemoryInline::FlatWriteFloat32((r3 + 28), f31.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80744478 func_80744478 preserves=false fpr_mask=0xC0000000
