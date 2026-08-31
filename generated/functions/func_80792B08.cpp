#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80792B08(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_4 = 0;
    uint32_t r5_psq_tmp_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80792B08;

loc_80792B08:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 112));
    r5 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 116));
    r5 = (r5 + 19672);
    MemoryInline::FlatWriteFloat32((r3 + 228), f0.d);
    r4 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 24));
    MemoryInline::FlatWriteFloat32((r3 + 232), f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 120));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 228);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0));
    MemoryInline::FlatWriteFloat32((r3 + 236), f3.d);
    PpcSetPairedFprInline(f5, PPC_PsMuls0Inline(f5.d, PPC_PsFromScalarInline(f0.d)));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 28));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 216));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 240);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1, f5.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 236);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 184));
    PpcSetPairedFprInline(f5, PPC_PsMuls0Inline(f5.d, PPC_PsFromScalarInline(f0.d)));
    f7.d = MemoryInline::FlatReadFloat32((r3 + 124));
    f4.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 240));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 248);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3, f5.d);
    f8.d = PpcFmulsInline(f1.d, f4.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 244));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 248));
    f6.d = PpcFmulsInline(f2.d, f4.d);
    f5.d = MemoryInline::FlatReadFloat32((r3 + 128));
    f4.d = PpcFmulsInline(f1.d, f4.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 132));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f8.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f6.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 220));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 180));
    MemoryInline::FlatWriteFloat32((r3 + 260), f3.d);
    f5.d = PpcFmulsInline(f2.d, f1.d);
    r6 = MemoryInline::FlatRead32((r3 + 32));
    MemoryInline::FlatWriteFloat32((r3 + 252), f7.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 100));
    MemoryInline::FlatWriteFloat32((r3 + 256), f6.d);
    f3.d = MemoryInline::FlatReadFloat32((r5 + 32));
    f4.d = MemoryInline::FlatReadFloat32((r6 + 180));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f1.d));
    MemoryInline::FlatWriteFloat32((r6 + 68), f1.d);
    f4.d = MemoryInline::FlatReadFloat32((r3 + 104));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 256));
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f4.d));
    MemoryInline::FlatWriteFloat32((r6 + 72), f1.d);
    f4.d = MemoryInline::FlatReadFloat32((r3 + 108));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 260));
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f4.d));
    MemoryInline::FlatWriteFloat32((r6 + 76), f1.d);
    r6 = MemoryInline::FlatRead32((r3 + 32));
    MemoryInline::FlatWriteFloat32((r3 + 320), f3.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 100));
    r5 = (r6 + 32);
    MemoryInline::FlatWriteFloat32((r3 + 324), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 316), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 312), f2.d);
    MemoryInline::FlatWriteFloat32((r6 + 44), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 104));
    MemoryInline::FlatWriteFloat32((r6 + 48), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 108));
    MemoryInline::FlatWriteFloat32((r6 + 52), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 240));
    MemoryInline::FlatWriteFloat32((r6 + 56), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 244));
    MemoryInline::FlatWriteFloat32((r6 + 60), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 248));
    MemoryInline::FlatWriteFloat32((r6 + 64), f1.d);
    r0 = MemoryInline::FlatRead32((r6 + 4));
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r0 & 35);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80792C44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80792C60;
    }
}

loc_80792C48:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_1 = (r5 + 24);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_1));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f0.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_2 = (r5 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_2, f1.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_3 = (r5 + 32);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_3));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f0.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_4 = (r5 + 32);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_4, f1.d);
    f1.d = PPC_PsToScalarInline(f1.d);
}

loc_80792C60:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
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
    InvokeDirectCpu<0x80791448u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000002E gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x000007FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80792B08 func_80792B08 preserves=true fpr_mask=0x00000000
