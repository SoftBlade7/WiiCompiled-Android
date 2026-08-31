#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807DE6E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r7_psq_tmp_0 = 0;

    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807DE6E8;

loc_807DE6E8:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_0 = (r4 + 4);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_0));
    r6 = 0x808A0000u;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_0 = (r5 + 4);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_0));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f4.d, f3.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5));
    f2.d = MemoryInline::FlatReadFloat32((r6 + 30460));
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    PpcSetPairedFprInline(f3, PPC_PsMaddInline(f0.d, f3.d, f4.d));
    PpcSetPairedFprInline(f0, PPC_PsSum0Inline(f3.d, f4.d, f4.d));
    f4.d = (-(PPC_PsToScalarInline(f0.d)));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f4.d));
    f5.d = PpcFmulsInline(f0.d, f1.d);
    SetCRFloatResident(cr, 0, f5.d, f2.d);
}

loc_807DE720:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807DE728;
    }
}

loc_807DE724:
{
    f5.d = f2.d;
}

loc_807DE728:
{
    r7 = 0x808A0000u;
    r6 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r7 + 30460));
    r7 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 30360));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    f2.d = PpcFmulsInline(f5.d, f6.d);
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f0.d));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f4.d, PPC_PsFromScalarInline(f5.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_1 = (r5 + 8);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_1));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r7, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f4.d, PPC_PsFromScalarInline(f5.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r7));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_0 = (r3 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0, f0.d);
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f3.d, f2.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r7_psq_tmp_0 = (r7 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r7_psq_tmp_0, f1.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1, f2.d);
    r1 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003A gpr_write=0x000000C2 gpr_return=0x00000000 fpr_read=0x00000036 fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807DE6E8 func_807DE6E8 preserves=true fpr_mask=0x00000000
