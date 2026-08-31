#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807DF004(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r10_psq_tmp_0 = 0;
    uint32_t r10_psq_tmp_1 = 0;
    uint32_t r11_psq_tmp_0 = 0;
    uint32_t r11_psq_tmp_1 = 0;
    uint32_t r11_psq_tmp_2 = 0;
    uint32_t r8_psq_tmp_0 = 0;
    uint32_t r8_psq_tmp_1 = 0;
    uint32_t r8_psq_tmp_2 = 0;
    uint32_t r9_psq_tmp_0 = 0;
    uint32_t r9_psq_tmp_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
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

    goto loc_807DF004;

loc_807DF004:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    r4 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 30484));
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    r31 = r3;
    r3 = (r1 + 12);
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
    f0.d = MemoryInline::FlatReadFloat32(r31);
    r8 = (r1 + 52);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    r11 = (r1 + 40);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 16));
    r10 = (r1 + 28);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f1.d);
    r9 = (r1 + 16);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 32));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 36));
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f1.d);
    r7 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f2.d);
    r6 = MemoryInline::FlatRead32((r1 + 56));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f3.d);
    r4 = MemoryInline::FlatRead32((r1 + 40));
    r3 = MemoryInline::FlatRead32((r1 + 44));
    r5 = MemoryInline::FlatRead32((r1 + 60));
    r0 = MemoryInline::FlatRead32((r1 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r11));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f0.d)));
    MemoryInline::FlatWriteRam32((r1 + 28), r7);
    PpcSetPairedFprInline(f4, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f0.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r11_psq_tmp_0 = (r11 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r11_psq_tmp_0));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r8, f1.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r8_psq_tmp_0 = (r8 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r8_psq_tmp_0));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r11, f4.d);
    PpcSetPairedFprInline(f4, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f0.d)));
    PpcSetPairedFprInline(f1, PPC_PsMuls0Inline(f1.d, PPC_PsFromScalarInline(f0.d)));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteRam32((r1 + 32), r6);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r8));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r10));
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    PpcSetPairedFprInline(f7, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f0.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f8, PPC_PsqLStackInline<0u, 0u>(ctx, r11));
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r9));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r10, f7.d);
    PpcSetPairedFprInline(f6, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f0.d)));
    MemoryInline::FlatWriteRam32((r1 + 36), r5);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f5, PPC_PsqLStackInline<0u, 0u>(ctx, r10));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r10_psq_tmp_0 = (r10 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r10_psq_tmp_0));
    PpcSetPairedFprInline(f8, PPC_PsSubInline(f8.d, f5.d));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    PpcSetPairedFprInline(f7, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f0.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r11, f8.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r9_psq_tmp_0 = (r9 + 8);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r9_psq_tmp_0));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r9, f6.d);
    PpcSetPairedFprInline(f8, PPC_PsSubInline(f4.d, f7.d));
    PpcSetPairedFprInline(f6, PPC_PsMuls0Inline(f2.d, PPC_PsFromScalarInline(f0.d)));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 40));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r9));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r11_psq_tmp_1 = (r11 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r11_psq_tmp_1, f4.d);
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f3.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r8_psq_tmp_1 = (r8 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r8_psq_tmp_1, f1.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r8, f0.d);
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f1.d, f6.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 44));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r8_psq_tmp_2 = (r8 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r8_psq_tmp_2, f0.d);
    f5.d = MemoryInline::FlatReadFloat32((r1 + 52));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r11_psq_tmp_2 = (r11 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r11_psq_tmp_2, f8.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    MemoryInline::FlatWriteFloat32(r31, f5.d);
    MemoryInline::FlatWriteFloat32((r31 + 16), f4.d);
    MemoryInline::FlatWriteFloat32((r31 + 32), f3.d);
    MemoryInline::FlatWriteFloat32((r31 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 20), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 36), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r9_psq_tmp_1 = (r9 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r9_psq_tmp_1, f6.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r10_psq_tmp_1 = (r10 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r10_psq_tmp_1, f7.d);
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000002E gpr_write=0x80000FFB gpr_return=0x00000018 fpr_read=0x0000000E fpr_write=0x000001FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807DF004 func_807DF004 preserves=true fpr_mask=0x00000000
