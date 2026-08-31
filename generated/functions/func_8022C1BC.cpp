#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8022C1BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r31_psq_tmp_0 = 0;
    uint32_t r31_psq_tmp_1 = 0;
    uint32_t r31_psq_tmp_2 = 0;
    uint32_t r31_psq_tmp_3 = 0;
    uint32_t r31_psq_tmp_4 = 0;
    uint32_t r31_psq_tmp_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8022C1BC;

loc_8022C1BC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 24));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 28));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 32), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 36), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 40), f0.d);
    r3 = (r3 + 32);
    // inline leaf 0x8019AC68 (17 guest instruction(s))
}

loc_inl0_0x8019AC68:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -26360));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f4.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f2.d);
}

loc_inl0_0x8019AC88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8019AC8C:
{
    f0.d = PPC_Frsqrte(PPC_PsToScalarInline(f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -26356));
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f4.d);
    f2.d = PPC_Fnmsubs(f2.d, PPC_PsToScalarInline(f1.d), f3.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = PpcFmulsInline(PPC_PsToScalarInline(f1.d), f0.d);
    goto loc_inl0_cont_8019AC68;
}

loc_inl0_return:
{
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_inl0_cont_8019AC68:
{
    // end of inlined leaf 0x8019AC68
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25096));
    MemoryInline::FlatWriteFloat32((r31 + 56), f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8022C218:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8022C240;
    }
}

loc_8022C21C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25080));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r31_psq_tmp_0 = (r31 + 32);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_0));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f0.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_1 = (r31 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r31_psq_tmp_2 = (r31 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_2, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f0.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r31_psq_tmp_3 = (r31 + 40);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_3, f1.d);
    goto loc_8022C24C;
}

loc_8022C240:
{
    MemoryInline::FlatWriteFloat32((r31 + 40), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 36), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 32), f0.d);
}

loc_8022C24C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000000E gpr_write=0x8000000B gpr_return=0x00000008 fpr_read=0x00000005 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8022C1BC func_8022C1BC preserves=true fpr_mask=0x00000000
