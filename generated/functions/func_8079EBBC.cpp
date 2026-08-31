#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8079EBBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8079EBBC;

loc_8079EBBC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 68);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 188);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    r5 = MemoryInline::FlatRead32((r3 + 356));
    PpcSetPairedFprInline(f3, PPC_PsSubInline(f1.d, f0.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 76);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 196);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3));
    r0 = (r5 + 1);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 80);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4, f3.d);
    PpcSetPairedFprInline(f3, PPC_PsSubInline(f1.d, f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 68));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 76));
    MemoryInline::FlatWrite32((r3 + 356), r0);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_5 = (r3 + 88);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5, f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 188), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 192), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 196), f0.d);
    r0 = MemoryInline::FlatRead32((r4 + 84));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8079EC08:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8079EC0C:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 100));
    r5 = 0x808A0000u;
    MemoryInline::FlatWriteFloat32((r3 + 200), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 21028));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 104));
    MemoryInline::FlatWriteFloat32((r3 + 204), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8079EC28:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 108));
    MemoryInline::FlatWriteFloat32((r3 + 208), f0.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_8079EC34:
{
    r0 = MemoryInline::FlatRead32((r3 + 116));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite32((r3 + 116), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000021 gpr_return=0x00000000 fpr_read=0x00000003 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8079EBBC func_8079EBBC preserves=true fpr_mask=0x00000000
