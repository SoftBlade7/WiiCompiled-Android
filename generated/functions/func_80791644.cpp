#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80791644(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r30_psq_tmp_0 = 0;
    uint32_t r31_psq_tmp_0 = 0;
    uint32_t r31_psq_tmp_1 = 0;
    uint32_t r31_psq_tmp_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80791644;

loc_80791644:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r5));
    r5 = (r1 + 8);
    // psq_load w=1 quant=3 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 3u>(ctx, r5));
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 19668));
    r3 = (r1 + 16);
    r4 = (r1 + 12);
    f1.d = PpcFmulsInline(f0.d, PPC_PsToScalarInline(f1.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x800851E0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f12, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r30));
    f11.d = MemoryInline::FlatReadFloat32((r30 + 24));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f12.d, PPC_PsFromScalarInline(f0.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r30_psq_tmp_0 = (r30 + 8);
    PpcSetPairedFprInline(f12, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_0));
    f9.d = MemoryInline::FlatReadFloat32((r30 + 28));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r31, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f12.d, PPC_PsFromScalarInline(f0.d)));
    f8.d = MemoryInline::FlatReadFloat32((r30 + 32));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r31_psq_tmp_0 = (r31 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_0, f1.d);
    f7.d = MemoryInline::FlatReadFloat32(r31);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f5.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f4.d = (-(f0.d));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f13, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r30));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f10.d = PpcFmulsInline(f11.d, f4.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f6.d = PpcFmulsInline(f9.d, f4.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 20));
    f4.d = PpcFmulsInline(f8.d, f4.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f10.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f6.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    MemoryInline::FlatWriteFloat32(r31, f7.d);
    MemoryInline::FlatWriteFloat32((r31 + 4), f5.d);
    MemoryInline::FlatWriteFloat32((r31 + 8), f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 16));
    PpcSetPairedFprInline(f4, PPC_PsMuls0Inline(f13.d, PPC_PsFromScalarInline(f3.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r31_psq_tmp_1 = (r31 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_1, f4.d);
    PpcSetPairedFprInline(f4, PPC_PsMuls0Inline(f12.d, PPC_PsFromScalarInline(f3.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r31_psq_tmp_2 = (r31 + 32);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_2, f4.d);
    f6.d = MemoryInline::FlatReadFloat32((r31 + 24));
    f10.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r31 + 28));
    f7.d = PpcFmulsInline(f11.d, f10.d);
    MemoryInline::FlatWriteFloat32((r31 + 12), f2.d);
    f5.d = PpcFmulsInline(f9.d, f10.d);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 32));
    f2.d = PpcFmulsInline(f8.d, f10.d);
    MemoryInline::FlatWriteFloat32((r31 + 16), f1.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f7.d));
    MemoryInline::FlatWriteFloat32((r31 + 20), f0.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteFloat32((r31 + 24), f6.d);
    MemoryInline::FlatWriteFloat32((r31 + 28), f4.d);
    MemoryInline::FlatWriteFloat32((r31 + 32), f1.d);
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000003E gpr_write=0xC000003B gpr_return=0x00000018 fpr_read=0x0000000C fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80791644 func_80791644 preserves=true fpr_mask=0x00000000
