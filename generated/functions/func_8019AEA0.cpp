#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8019AEA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_0 = 0;

    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
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

    goto loc_8019AEA0;

loc_8019AEA0:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -26344));
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f0.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0));
    f7.d = MemoryInline::FlatReadFloat32((r2 + -26332));
    PpcSetPairedFprInline(f5, PPC_PsSubInline(PPC_PsFromScalarInline(f4.d), PPC_PsFromScalarInline(f4.d)));
    f8.d = MemoryInline::FlatReadFloat32((r2 + -26328));
    PpcSetPairedFprInline(f2, PPC_PsMaddInline(f1.d, f1.d, f2.d));
    PpcSetPairedFprInline(f2, PPC_PsSum0Inline(f2.d, f2.d, f2.d));
    f3.d = PPC_Frsqrte(PPC_PsToScalarInline(f2.d));
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, PPC_PsFromScalarInline(f4.d)));
    f6.d = (f3.d * f3.d);
    f3.d = (f3.d * f7.d);
    f6.d = PpcFnmsubInline(f6.d, PPC_PsToScalarInline(f2.d), f8.d);
    f3.d = (f6.d * f3.d);
    PpcSetPairedFprInline(f3, PPC_PsSel(PPC_PsFromScalarInline(f3.d), f4.d, f5.d));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f1.d, f3.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f0.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_0 = (r4 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_0, f1.d);
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

// RECOMP_GUEST_ABI gpr_read=0x0000001C gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x000001FF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8019AEA0 func_8019AEA0 preserves=true fpr_mask=0x00000000
