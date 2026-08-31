#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807B6F54(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_2 = 0;

    uint32_t r0 = ctx->gpr[0];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807B6F54;

loc_807B6F54:
{
    r0 = MemoryInline::FlatRead32((r3 + 352));
    r7 = 0x808A0000u;
    r7 = (r7 + 24968);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(120));
}

loc_807B6F64:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_807B6F68:
{
    f1.d = MemoryInline::FlatReadFloat32(r7);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 320));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B6F74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_807B6F78:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 104));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 96));
    f0.d = MemoryInline::FlatReadFloat32((r7 + 12));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B6F90:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_807B6F94:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 4);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1));
    r6 = 0x809C0000u;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_1 = (r5 + 4);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_1));
    r6 = (r6 + 12104);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    PpcSetPairedFprInline(f3, PPC_PsMulInline(f3.d, f2.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5));
    r0 = (r0 * 116);
    f1.d = MemoryInline::FlatReadFloat32((r7 + 16));
    PpcSetPairedFprInline(f2, PPC_PsMaddInline(f0.d, f2.d, f3.d));
    r4 = (r6 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r7 + 20));
    f4.d = MemoryInline::FlatReadFloat32((r4 + 84));
    PpcSetPairedFprInline(f2, PPC_PsSum0Inline(f2.d, f3.d, f3.d));
    f2.d = std::fabs(PPC_PsToScalarInline(f2.d));
    f2.d = PpcFmulsInline(f2.d, f4.d);
    f1.d = PpcFmulsInline(f1.d, f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 320), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B6FE4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_807B6FE8:
{
    MemoryInline::FlatWriteFloat32((r3 + 320), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000D1 gpr_return=0x00000010 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807B6F54 func_807B6F54 preserves=true fpr_mask=0x00000000
