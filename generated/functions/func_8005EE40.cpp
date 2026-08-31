#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005EE40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r31_psq_tmp_0 = 0;
    uint32_t r31_psq_tmp_1 = 0;
    uint32_t r8_psq_tmp_0 = 0;
    uint32_t r9_psq_tmp_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8005EE40;

loc_8005EE40:
{
    r9 = (r1 + 32);
    r7 = MemoryInline::FlatRead8((r31 + 32));
    r4 = (r1 + 12);
    PpcSetPairedFprInline(f2, PPC_PsSubInline(PPC_PsFromScalarInline(f0.d), PPC_PsFromScalarInline(f1.d)));
    r6 = MemoryInline::FlatRead8((r31 + 33));
    r5 = MemoryInline::FlatRead8((r31 + 34));
    r3 = r30;
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_0 = (r31 + 28);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_0));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r31_psq_tmp_1 = (r31 + 16);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r31_psq_tmp_1));
    PpcSetPairedFprInline(f4, f2.d);
    mkw_gqr0 = ctx->gqr[0];
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r8, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f0.d, f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -29596));
    r0 = MemoryInline::FlatRead8((r31 + 35));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f4.d, PPC_PsFromScalarInline(f3.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r8_psq_tmp_0 = (r8 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r8_psq_tmp_0, f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r9, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f3.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r9_psq_tmp_0 = (r9 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r9_psq_tmp_0, f0.d);
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
    ctx->lr = 0x8005EEA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80077680u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r3 = r30;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 40));
    ctx->lr = 0x8005EEB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x800776D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    f2.d = MemoryInline::FlatReadFloat32((r2 + -29600));
    r3 = r30;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29592));
    f3.d = f2.d;
    ctx->lr = 0x8005EEC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x80077790u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    f2.d = MemoryInline::FlatReadFloat32((r2 + -29600));
    r3 = r30;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29592));
    f3.d = f2.d;
    ctx->lr = 0x8005EEDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x80077810u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29600));
    r3 = r30;
    f2.d = f1.d;
    f3.d = f1.d;
    ctx->lr = 0x8005EEF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x80077710u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f4 = ctx->fpr[4];
}

loc_8005EF98:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r0 & 16);
}

loc_8005EFA0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8005EFB0;
    }
}

loc_8005EFA4:
{
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32(r30, r0);
}

loc_8005EFB0:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8005EFB8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8005EFC8;
    }
}

loc_8005EFBC:
{
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32(r30, r0);
}

loc_8005EFC8:
{
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32(r30, r0);
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    r29 = MemoryInline::FlatRead32((r1 + 68));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[9] = r9;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFD07 gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFB fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8005EE40 func_8005EE40 preserves=true fpr_mask=0x00000000
