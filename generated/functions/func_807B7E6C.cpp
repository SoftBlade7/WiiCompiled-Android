#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807B7E6C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;

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

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807B7E6C;

loc_807B7E6C:
{
    r5 = 0x808A0000u;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 60), 0, 56u, true, false);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r3 + 112));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 25224));
    r5 = 0x808A0000u;
    f0.d = PpcFmulsInline(f3.d, f3.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 25232));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 48);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0));
    f2.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f1.d = PpcFmulsInline(f5.d, f5.d);
    f2.d = PpcFmulsInline(f2.d, f5.d);
    f6.d = PpcFmulsInline(f5.d, f1.d);
    f5.d = PpcFmulsInline(f2.d, f5.d);
    f7.d = PpcFmulsInline(f2.d, f3.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f4.d, PPC_PsFromScalarInline(f6.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f1.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 56);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    f3.d = MemoryInline::FlatReadFloat32(r4);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f4.d, PPC_PsFromScalarInline(f6.d)));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_0 = (r4 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_0, f1.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r3 + 60));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    MemoryInline::FlatWriteFloat32(r4, f4.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 64));
    f3.d = PpcFmulsInline(f3.d, f5.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteFloat32((r4 + 4), f3.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 68));
    f2.d = PpcFmulsInline(f2.d, f5.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    MemoryInline::FlatWriteFloat32((r4 + 8), f2.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 72));
    f1.d = PpcFmulsInline(f1.d, f7.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    MemoryInline::FlatWriteFloat32(r4, f4.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 76));
    f1.d = PpcFmulsInline(f1.d, f7.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 4), f3.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r3 + 80));
    f1.d = PpcFmulsInline(f1.d, f7.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 8), f2.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r3 + 84));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    MemoryInline::FlatWriteFloat32(r4, f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r3 + 88));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 4), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r3 + 92));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000020 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x000000FF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807B7E6C func_807B7E6C preserves=true fpr_mask=0x00000000
