#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8019B114_statefree(uint32_t, uint32_t, uint32_t, PPC_FPR);

extern "C" void func_807B60A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807B60A0;

loc_807B60A0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 24856);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 92));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 464));
    f4.d = MemoryInline::FlatReadFloat32((r31 + 88));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_807B60D4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B60DC;
    }
}

loc_807B60D8:
{
    goto loc_807B60E0;
}

loc_807B60DC:
{
    f4.d = f0.d;
}

loc_807B60E0:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 468));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 204));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 36));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 464), f4.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_807B60FC:
{
    MemoryInline::FlatWriteFloat32((r3 + 468), f1.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B6130;
    }
}

loc_807B6104:
{
    r3 = (r1 + 8);
    r4 = (r30 + 200);
    ctx->lr = 0x807B6110u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x807B9C70u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r30 + 16);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 96));
    r5 = r3;
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8019B114u) && KnownTranslatedCpuCall<0x8019B114u>::kAvailable && !KnownTranslatedCpuCall<0x8019B114u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8019B114u>()) {
        func_8019B114_statefree(r3, r4, r5, f1);
    } else {
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8019B114u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r3 = (r30 + 16);
    r4 = r3;
    // inline leaf 0x8019AEA0 (21 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -26344));
    PpcSetPairedFprInline(f2, PPC_PsMulInline(f0.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    f7.d = MemoryInline::FlatReadFloat32((r2 + -26332));
    PpcSetPairedFprInline(f5, PPC_PsSubInline(PPC_PsFromScalarInline(f4.d), PPC_PsFromScalarInline(f4.d)));
    f8.d = MemoryInline::FlatReadFloat32((r2 + -26328));
    PpcSetPairedFprInline(f2, PPC_PsMaddInline(f1.d, f1.d, f2.d));
    PpcSetPairedFprInline(f2, PPC_PsSum0Inline(f2.d, f2.d, f2.d));
    f3.d = PPC_Frsqrte(PPC_PsToScalarInline(f2.d));
    PpcSetPairedFprInline(f4, PPC_PsSubInline(f2.d, PPC_PsFromScalarInline(f4.d)));
    f6.d = (f3.d * f3.d);
    f3.d = (f3.d * f7.d);
    f6.d = PpcFnmsubInline(f6.d, PPC_PsToScalarInline(f2.d), f8.d);
    f3.d = (f6.d * f3.d);
    PpcSetPairedFprInline(f3, PPC_PsSel(PPC_PsFromScalarInline(f3.d), f4.d, f5.d));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f1.d, f3.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4, f0.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_1 = (r4 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1, f1.d);
    // end of inlined leaf 0x8019AEA0
}

loc_807B6130:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807B60A0 func_807B60A0 preserves=true fpr_mask=0x00000000
