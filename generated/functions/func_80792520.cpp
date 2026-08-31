#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80792520(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;

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

    goto loc_80792520;

loc_80792520:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 112));
    r4 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 116));
    r4 = (r4 + 19672);
    MemoryInline::FlatWriteFloat32((r3 + 228), f1.d);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 24));
    MemoryInline::FlatWriteFloat32((r3 + 232), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 120));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 228);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0));
    MemoryInline::FlatWriteFloat32((r3 + 236), f2.d);
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f4.d)));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 216));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 240);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 236);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 184));
    PpcSetPairedFprInline(f3, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f4.d)));
    f6.d = MemoryInline::FlatReadFloat32((r3 + 124));
    f8.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 240));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 244));
    f7.d = PpcFmulsInline(f0.d, f8.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 248);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3, f3.d);
    f5.d = PpcFmulsInline(f1.d, f8.d);
    f4.d = MemoryInline::FlatReadFloat32((r3 + 128));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 248));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f7.d));
    f3.d = PpcFmulsInline(f0.d, f8.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 132));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 220));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 180));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f4.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 252), f6.d);
    r5 = MemoryInline::FlatRead32((r3 + 32));
    MemoryInline::FlatWriteFloat32((r3 + 256), f5.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 100));
    MemoryInline::FlatWriteFloat32((r3 + 260), f3.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 32));
    f3.d = MemoryInline::FlatReadFloat32((r5 + 180));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    f2.d = PpcFmulsInline(f2.d, f4.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f2.d));
    MemoryInline::FlatWriteFloat32((r5 + 68), f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 104));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 256));
    f3.d = PpcFmulsInline(f3.d, f4.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteFloat32((r5 + 72), f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 108));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 260));
    f3.d = PpcFmulsInline(f3.d, f4.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteFloat32((r5 + 76), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 320), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 324), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 316), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 312), f0.d);
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000030 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x000001FF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80792520 func_80792520 preserves=true fpr_mask=0x00000000
