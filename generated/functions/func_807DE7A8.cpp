#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807DE7A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;

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
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807DE7A8;

loc_807DE7A8:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    r4 = 0x808A0000u;
    f2.d = MemoryInline::FlatReadFloat32((r4 + 30460));
    f4.d = (-(f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f4.d));
    f5.d = PpcFmulsInline(f0.d, f1.d);
    SetCRFloatResident(cr, 0, f5.d, f2.d);
}

loc_807DE7C4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807DE7CC;
    }
}

loc_807DE7C8:
{
    f5.d = f2.d;
}

loc_807DE7CC:
{
    r5 = 0x808A0000u;
    r4 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 30460));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 30360));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f4.d));
    f2.d = PpcFmulsInline(f5.d, f6.d);
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f0.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f6.d)));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f5.d));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000030 gpr_return=0x00000010 fpr_read=0x00000036 fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807DE7A8 func_807DE7A8 preserves=true fpr_mask=0x00000000
