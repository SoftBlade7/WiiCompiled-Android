#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8019AE08(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8019AE08;

loc_8019AE08:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0));
    PpcSetPairedFprInline(f5, PPC_PsNegInline(f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f6, PPC_PsNegInline(f1.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_0 = (r4 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_0));
    PpcSetPairedFprInline(f7, PPC_PsMuls0Inline(f1.d, f2.d));
    PpcSetPairedFprInline(f4, PPC_PsMerge01Inline(f5.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsMerge01Inline(f6.d, f1.d));
    PpcSetPairedFprInline(f5, PPC_PsMuls0Inline(f5.d, f2.d));
    PpcSetPairedFprInline(f8, PPC_PsMuls1Inline(f4.d, f2.d));
    PpcSetPairedFprInline(f7, PPC_PsMadds0Inline(f4.d, f3.d, f7.d));
    PpcSetPairedFprInline(f2, PPC_PsMuls1Inline(f1.d, f2.d));
    PpcSetPairedFprInline(f5, PPC_PsMadds0Inline(f1.d, f3.d, f5.d));
    PpcSetPairedFprInline(f7, PPC_PsMerge10Inline(f7.d, f7.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds1Inline(f0.d, f3.d, f2.d));
    PpcSetPairedFprInline(f5, PPC_PsMerge10Inline(f5.d, f5.d));
    PpcSetPairedFprInline(f8, PPC_PsMadds1Inline(f6.d, f3.d, f8.d));
    PpcSetPairedFprInline(f7, PPC_PsAddInline(f7.d, f2.d));
    PpcSetPairedFprInline(f5, PPC_PsSubInline(f5.d, f8.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5, f7.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_0 = (r5 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_0, f5.d);
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x000001FF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8019AE08 func_8019AE08 preserves=true fpr_mask=0x00000000
