#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8019AEF4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;

    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8019AEF4;

loc_8019AEF4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    f5.d = MemoryInline::FlatReadFloat32((r2 + -26340));
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f0.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0));
    PpcSetPairedFprInline(f4, PPC_PsSubInline(PPC_PsFromScalarInline(f5.d), PPC_PsFromScalarInline(f5.d)));
    PpcSetPairedFprInline(f3, PPC_PsAddInline(PPC_PsFromScalarInline(f5.d), PPC_PsFromScalarInline(f5.d)));
    PpcSetPairedFprInline(f2, PPC_PsMaddInline(f1.d, f1.d, f2.d));
    PpcSetPairedFprInline(f2, PPC_PsSum0Inline(f2.d, f2.d, f2.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f2.d), PPC_PsToScalarInline(f4.d));
}

loc_8019AF18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8019AF28;
    }
}

loc_8019AF1C:
{
    PpcSetPairedFprInline(f5, PPC_Fres(f2.d));
    PpcSetPairedFprInline(f2, PPC_PsNmsubInline(f2.d, f5.d, f3.d));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f5.d, f2.d));
    f5.d = PPC_PsToScalarInline(f5.d);
}

loc_8019AF28:
{
    PpcSetPairedFprInline(f3, PPC_PsNegInline(PPC_PsFromScalarInline(f5.d)));
    PpcSetPairedFprInline(f2, PPC_PsMuls1Inline(PPC_PsFromScalarInline(f5.d), f1.d));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f1.d, f3.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_0 = (r4 + 12);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_0, f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f0.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_1 = (r4 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1, f1.d);
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001C gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x0000002F fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8019AEF4 func_8019AEF4 preserves=true fpr_mask=0x00000000
