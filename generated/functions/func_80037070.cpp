#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80037070(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_8003708C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r6_psq_tmp_0 = 0;
    uint32_t r6_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80037070;

loc_80037070:
{
    f0.d = MemoryInline::FlatReadFloat32(r3);
    r5 = 0x80250000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    r0 = (r2 + -30824);
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r5 = (r5 + -32752);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    addr_psqx_8003708C_loc_0 = r0;
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8003708C_loc_0));
    PpcSetPairedFprInline(f6, PPC_PsMerge00Inline(PPC_PsFromScalarInline(f0.d), PPC_PsFromScalarInline(f1.d)));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30816));
    r7 = (r1 + 8);
    PpcSetPairedFprInline(f3, PPC_PsMerge00Inline(f3.d, f3.d));
    PpcSetPairedFprInline(f6, PPC_PsMuls0Inline(f6.d, PPC_PsFromScalarInline(f1.d)));
    PpcSetPairedFprInline(f0, PPC_PsNegInline(f3.d));
    PpcSetPairedFprInline(f5, PPC_PsAbsInline(f6.d));
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f3.d, f3.d));
    SetCRFloatResident(cr, static_cast<uint32_t>(0) & 7u, PpcGetPs0Inline(f5.d), PpcGetPs0Inline(f3.d));
}

loc_800370B4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800370C4;
    }
}

loc_800370B8:
{
    PpcSetPairedFprInline(f5, PPC_PsSum0Inline(f5.d, f0.d, f5.d));
    SetCRFloatResident(cr, static_cast<uint32_t>(0) & 7u, PpcGetPs0Inline(f5.d), PpcGetPs0Inline(f3.d));
}

loc_800370C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800370B8;
    }
}

loc_800370C4:
{
    SetCRFloatResident(cr, static_cast<uint32_t>(0) & 7u, PpcGetPs1Inline(f5.d), PpcGetPs1Inline(f3.d));
}

loc_800370C8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800370E0;
    }
}

loc_800370CC:
{
    PpcSetPairedFprInline(f5, PPC_PsMerge10Inline(f5.d, f5.d));
}

loc_800370D0:
{
    PpcSetPairedFprInline(f5, PPC_PsSum0Inline(f5.d, f0.d, f5.d));
    SetCRFloatResident(cr, static_cast<uint32_t>(0) & 7u, PpcGetPs0Inline(f5.d), PpcGetPs0Inline(f3.d));
}

loc_800370D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800370D0;
    }
}

loc_800370DC:
{
    PpcSetPairedFprInline(f5, PPC_PsMerge10Inline(f5.d, f5.d));
}

loc_800370E0:
{
    // psq_store w=0 quant=3 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 3u>(ctx, r7, f5.d);
    f7.d = PpcFmulsInline(f2.d, f1.d);
    // psq_load w=0 quant=3 (using PPC_PsqL)
    PpcSetPairedFprInline(f8, PPC_PsqLStackInline<0u, 3u>(ctx, r7));
    f2.d = std::fabs(f7.d);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRFloatResident(cr, 0, f2.d, PPC_PsToScalarInline(f3.d));
}

loc_800370F8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8003710C;
    }
}

loc_800370FC:
{
    // nop
}

loc_80037100:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - PPC_PsToScalarInline(f3.d)));
    SetCRFloatResident(cr, 0, f2.d, PPC_PsToScalarInline(f3.d));
}

loc_80037108:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80037100;
    }
}

loc_8003710C:
{
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 3u>(ctx, r7, PPC_PsFromScalarInline(f2.d));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
    r3 = (r3_rot_0 & 4080);
    r3 = (r5 + r3);
    PpcSetPairedFprInline(f8, PPC_PsSubInline(f5.d, f8.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r6 = (r6_rot_0 & 4080);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 8);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0));
    SetCRFloatResident(cr, static_cast<uint32_t>(0) & 7u, PpcGetPs0Inline(f6.d), PpcGetPs0Inline(f4.d));
}

loc_8003712C:
{
    r6 = (r5 + r6);
    PpcSetPairedFprInline(f0, PPC_PsMadds0Inline(f5.d, f8.d, f3.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r6_psq_tmp_0 = (r6 + 8);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_0));
    r0 = MemoryInline::FlatRead16((r1 + 8));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8003714C;
    }
}

loc_80037144:
{
    PpcSetPairedFprInline(f9, PPC_PsNegInline(f0.d));
    PpcSetPairedFprInline(f0, PPC_PsMerge01Inline(f9.d, f0.d));
}

loc_8003714C:
{
    PpcSetPairedFprInline(f1, PPC_PsMadds1Inline(f5.d, f8.d, f3.d));
    // psq_load w=1 quant=3 (using PPC_PsqL)
    PpcSetPairedFprInline(f8, PPC_PsqLStackInline<1u, 3u>(ctx, r7));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & 4080);
    SetCRFloatResident(cr, static_cast<uint32_t>(0) & 7u, PpcGetPs1Inline(f6.d), PpcGetPs1Inline(f4.d));
}

loc_8003715C:
{
    r3 = (r5 + r0);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f2.d - PPC_PsToScalarInline(f8.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 8);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80037178;
    }
}

loc_80037170:
{
    PpcSetPairedFprInline(f9, PPC_PsNegInline(f1.d));
    PpcSetPairedFprInline(f1, PPC_PsMerge01Inline(f9.d, f1.d));
}

loc_80037178:
{
    SetCRFloatResident(cr, 0, f7.d, PPC_PsToScalarInline(f4.d));
}

loc_8003717C:
{
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f5.d, PPC_PsFromScalarInline(f8.d), f3.d));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8003718C;
    }
}

loc_80037184:
{
    PpcSetPairedFprInline(f9, PPC_PsNegInline(f2.d));
    PpcSetPairedFprInline(f2, PPC_PsMerge01Inline(f9.d, f2.d));
}

loc_8003718C:
{
    PpcSetPairedFprInline(f3, PPC_PsMuls1Inline(f2.d, f0.d));
    r3 = r4;
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f1.d, f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMerge10Inline(f2.d, f2.d));
    PpcSetPairedFprInline(f0, PPC_PsNegInline(f3.d));
    PpcSetPairedFprInline(f3, PPC_PsMerge01Inline(f0.d, f3.d));
    PpcSetPairedFprInline(f2, PPC_PsMadds0Inline(f2.d, f1.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsMerge10Inline(f1.d, f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f2.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_0 = (r4 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_0, f1.d);
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FF gpr_write=0x000000EB gpr_return=0x00000008 fpr_read=0x000003FF fpr_write=0x000003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80037070 func_80037070 preserves=true fpr_mask=0x00000000
