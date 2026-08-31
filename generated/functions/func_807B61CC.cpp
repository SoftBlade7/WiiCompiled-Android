#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807B61CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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

    goto loc_807B61CC;

loc_807B61CC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r4 = 552075264;
    r0 = (r4 + 4095);
    r5 = MemoryInline::FlatRead32((r3 + 212));
    r4 = 0x808A0000u;
    r4 = (r4 + 24856);
    r0 = (r5 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807B6238;
    }
}

loc_807B61EC:
{
    r0 = MemoryInline::FlatRead32((r3 + 472));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B61F4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807B6238;
    }
}

loc_807B61F8:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 60));
    r4 = (r1 + 8);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 200);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 80);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f0.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 208);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f0.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_0 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_0, f1.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f3.d, f0.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 88);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 80);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f3.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_5 = (r3 + 88);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5, f0.d);
    goto loc_807B62B0;
}

loc_807B6238:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 84));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B6244:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B6288;
    }
}

loc_807B6248:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 64));
    r0 = MemoryInline::FlatRead32((r3 + 120));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B6258:
{
    MemoryInline::FlatWriteFloat32((r3 + 84), f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B62B0;
    }
}

loc_807B6260:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 76));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B6268:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B6274;
    }
}

loc_807B626C:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 68));
    goto loc_807B6278;
}

loc_807B6274:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 72));
}

loc_807B6278:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 84));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 84), f0.d);
    goto loc_807B62B0;
}

loc_807B6288:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 80));
    r0 = MemoryInline::FlatRead32((r3 + 120));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B6298:
{
    MemoryInline::FlatWriteFloat32((r3 + 84), f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B62B0;
    }
}

loc_807B62A0:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 84));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B62A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807B62B0;
    }
}

loc_807B62AC:
{
    MemoryInline::FlatWriteFloat32((r3 + 84), f0.d);
}

loc_807B62B0:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x00000033 gpr_return=0x00000010 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807B61CC func_807B61CC preserves=true fpr_mask=0x00000000
