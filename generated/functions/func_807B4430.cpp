#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807B4430(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f30_entry = 0.0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r29_psq_tmp_0 = 0;
    uint32_t r29_psq_tmp_1 = 0;
    uint32_t r29_psq_tmp_2 = 0;
    uint32_t r29_psq_tmp_3 = 0;
    uint32_t r29_psq_tmp_4 = 0;
    uint32_t r29_psq_tmp_5 = 0;
    uint32_t r29_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807B4430;

loc_807B4430:
{
    leaf_stack_saved_f30_entry = f30.d;
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    f30.d = f1.d;
    f31.d = f2.d;
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 640));
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f0.d = MemoryInline::FlatReadFloat32((r3 + 116));
    r31 = 0;
    MemoryInline::FlatWriteFloat32((r29 + 644), f0.d);
    r30 = MemoryInline::FlatRead32((r29 + 640));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 120));
    MemoryInline::FlatWriteFloat32((r29 + 648), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 124));
    r3 = r30;
    MemoryInline::FlatWriteFloat32((r29 + 652), f0.d);
    // inline leaf 0x80591378 (12 guest instruction(s))
}

loc_inl1_0x80591378:
{
    r4 = MemoryInline::FlatRead32(r3);
    r3 = 1;
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & 2);
}

loc_inl1_0x8059138C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80591390:
{
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r4 & 524288);
    r0_mrot_1 = (r4 & 24576);
    r0_mdest_1 = (r0 & -24577);
    r0 = (r0_mdest_1 | r0_mrot_1);
}

loc_inl1_0x8059139C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x805913A0:
{
    r3 = 0;
    goto loc_inl1_cont_80591378;
}

loc_inl1_return:
{
}

loc_inl1_cont_80591378:
{
    // end of inlined leaf 0x80591378
}

loc_807B4498:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_807B44A8;
    }
}

loc_807B449C:
{
    r0 = MemoryInline::FlatRead32((r30 + 576));
}

loc_807B44A4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_807B44AC;
    }
}

loc_807B44A8:
{
    r31 = 1;
}

loc_807B44AC:
{
}

loc_807B44B0:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_807B44BC;
    }
}

loc_807B44B4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 680), static_cast<uint8_t>(r0));
}

loc_807B44BC:
{
    r0 = MemoryInline::FlatRead8((r29 + 680));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B44C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B44E8;
    }
}

loc_807B44C8:
{
    r3 = r30;
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    f0.d = MemoryInline::FlatReadFloat32(r3);
    MemoryInline::FlatWriteFloat32((r29 + 668), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 672), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r29 + 676), f0.d);
}

loc_807B44E8:
{
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 648));
    f5.d = MemoryInline::FlatReadFloat32((r3 + 24776));
    r3 = (r1 + 8);
    f3.d = MemoryInline::FlatReadFloat32((r29 + 644));
    f2.d = PpcFmulsInline(f0.d, f5.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 672));
    f4.d = PpcFmulsInline(f3.d, f5.d);
    f3.d = MemoryInline::FlatReadFloat32((r29 + 668));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 652));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_0 = (r29 + 68);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_0));
    f2.d = PpcFmulsInline(f0.d, f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f31.d));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 676));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    PpcSetPairedFprInline(f3, f4.d);
    mkw_gqr0 = ctx->gqr[0];
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f4.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_1 = (r29 + 76);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_1));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_0));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_1, f0.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f30.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r29_psq_tmp_2 = (r29 + 80);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_2, f1.d);
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f30.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_3 = (r29 + 80);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_3));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r29_psq_tmp_4 = (r29 + 88);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_4, f1.d);
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f3.d, f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r29_psq_tmp_5 = (r29 + 68);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_5, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f4.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r29_psq_tmp_6 = (r29 + 76);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_6, f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = leaf_stack_saved_f31_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = leaf_stack_saved_f30_entry;
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFC7 fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807B4430 func_807B4430 preserves=true fpr_mask=0x00000000
