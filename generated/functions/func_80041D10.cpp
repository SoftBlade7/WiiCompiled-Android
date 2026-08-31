#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80041D10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_0 = 0;

    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_80041D10;

loc_80041D10:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 172);
    PpcSetPairedFprInline(f0, PPC_PsqLInline<0u, 0u>(ctx, r3_psq_tmp_0));
    r5 = (r1 + 8);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 184);
    PpcSetPairedFprInline(f1, PPC_PsqLInline<0u, 0u>(ctx, r3_psq_tmp_1));
    PpcSetPairedFprInline(f3, PPC_PsSubInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 180);
    PpcSetPairedFprInline(f0, PPC_PsqLInline<1u, 0u>(ctx, r3_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 192);
    PpcSetPairedFprInline(f1, PPC_PsqLInline<1u, 0u>(ctx, r3_psq_tmp_3));
    r3 = r4;
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r5, f3.d);
    PpcSetPairedFprInline(f3, PPC_PsSubInline(f0.d, f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_0 = (r5 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_0, f3.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32(r4, f2.d);
    MemoryInline::FlatWriteFloat32((r4 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    r1 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80041D10_statefree(uint32_t native_r1, uint32_t native_r3, uint32_t native_r4, PPC_FPR native_f3, uint32_t native_lr, uint32_t native_gqr0)
{

    uint32_t cached_r1 = native_r1;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = 0;
    PPC_FPR cached_f0 = PPC_FPR{};
    PPC_FPR cached_f1 = PPC_FPR{};
    PPC_FPR cached_f2 = PPC_FPR{};
    PPC_FPR cached_f3 = PPC_FPR{};

    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_0 = 0;

    goto loc_80041D10;

loc_80041D10:
{
    MemoryInline::FlatWriteRam32((cached_r1 + -32), cached_r1);
    cached_r1 = (cached_r1 + -32);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (cached_r3 + 172);
    PpcSetPairedFprInline(cached_f0, PPC_PsqLStateInline<0u, 0u, false>(native_gqr0, r3_psq_tmp_0));
    cached_r5 = (cached_r1 + 8);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (cached_r3 + 184);
    PpcSetPairedFprInline(cached_f1, PPC_PsqLStateInline<0u, 0u, false>(native_gqr0, r3_psq_tmp_1));
    PpcSetPairedFprInline(cached_f3, PPC_PsSubInline(cached_f0.d, cached_f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (cached_r3 + 180);
    PpcSetPairedFprInline(cached_f0, PPC_PsqLStateInline<1u, 0u, false>(native_gqr0, r3_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (cached_r3 + 192);
    PpcSetPairedFprInline(cached_f1, PPC_PsqLStateInline<1u, 0u, false>(native_gqr0, r3_psq_tmp_3));
    cached_r3 = cached_r4;
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStateInline<0u, 0u, true>(native_gqr0, cached_r5, cached_f3.d);
    PpcSetPairedFprInline(cached_f3, PPC_PsSubInline(cached_f0.d, cached_f1.d));
    cached_f2.d = MemoryInline::FlatReadFloat32((cached_r1 + 8));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_0 = (cached_r5 + 8);
    PPC_PsqStStateInline<1u, 0u, true>(native_gqr0, r5_psq_tmp_0, cached_f3.d);
    cached_f1.d = MemoryInline::FlatReadFloat32((cached_r1 + 12));
    cached_f0.d = MemoryInline::FlatReadFloat32((cached_r1 + 16));
    MemoryInline::FlatWriteFloat32(cached_r4, cached_f2.d);
    MemoryInline::FlatWriteFloat32((cached_r4 + 4), cached_f1.d);
    MemoryInline::FlatWriteFloat32((cached_r4 + 8), cached_f0.d);
    cached_r1 = (cached_r1 + 32);



    return { static_cast<uint64_t>(cached_r1), cached_f3.raw };
}

}
// RECOMP_STATE_FREE_ABI address=0x80041D10 symbol=func_80041D10_statefree gpr_in=0x0000001A gpr_out=0x00000002 fpr_in=0x00000000 fpr_out=0x00000008 cr_in=0x00 cr_out=0x00 gqr_in=0x01 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=1


// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x0000002A gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80041D10 func_80041D10 preserves=true fpr_mask=0x00000000

