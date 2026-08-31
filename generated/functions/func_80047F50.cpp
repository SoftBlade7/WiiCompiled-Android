#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80047F50(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint32_t r10_psq_tmp_0 = 0;
    uint32_t r11_psq_tmp_0 = 0;
    uint32_t r12_psq_tmp_0 = 0;
    uint32_t r30_psq_tmp_0 = 0;
    uint32_t r31_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r6_psq_tmp_0 = 0;
    uint32_t r6_psq_tmp_1 = 0;
    uint32_t r6_psq_tmp_2 = 0;
    uint32_t r7_psq_tmp_0 = 0;
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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80047F50;

loc_80047F50:
{
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -192), r1);
    r1 = (r1 + -192);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r12 = (r1 + 20);
    f3.d = MemoryInline::FlatReadFloat32((r2 + -29952));
    r11 = (r1 + 56);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -29928));
    r9 = (r1 + 92);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29924));
    r3 = (r1 + 104);
    f7.d = PpcFmulsInline(f2.d, f3.d);
    MemoryInline::FlatWriteRam32((r1 + 172), r31);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6));
    MemoryInline::FlatWriteRam32((r1 + 168), r30);
    r30 = (r1 + 32);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f3.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f11, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    PpcSetPairedFprInline(f10, PPC_PsMuls0Inline(f5.d, PPC_PsFromScalarInline(f7.d)));
    r31 = (r1 + 44);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_0 = (r4 + 12);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_0));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r5_psq_tmp_0 = (r5 + 12);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_0));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r11, f10.d);
    r10 = (r1 + 8);
    PpcSetPairedFprInline(f13, PPC_PsMuls0Inline(f11.d, PPC_PsFromScalarInline(f2.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_1 = (r5 + 8);
    PpcSetPairedFprInline(f11, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_1));
    PpcSetPairedFprInline(f31, PPC_PsMuls0Inline(f8.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 8);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r31, f13.d);
    PpcSetPairedFprInline(f9, PPC_PsMuls0Inline(f4.d, PPC_PsFromScalarInline(f6.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r30, f31.d);
    PpcSetPairedFprInline(f31, PPC_PsMuls0Inline(f8.d, PPC_PsFromScalarInline(f6.d)));
    PpcSetPairedFprInline(f8, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f2.d)));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r6_psq_tmp_0 = (r6 + 8);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_0));
    PpcSetPairedFprInline(f0, f13.d);
    mkw_gqr0 = ctx->gqr[0];
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r30));
    PpcSetPairedFprInline(f13, PPC_PsMuls0Inline(f11.d, PPC_PsFromScalarInline(f2.d)));
    PpcSetPairedFprInline(f10, PPC_PsMuls0Inline(f5.d, PPC_PsFromScalarInline(f7.d)));
    PpcSetPairedFprInline(f12, PPC_PsAddInline(f1.d, f0.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_2 = (r5 + 20);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_2));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f8.d);
    r8 = (r1 + 80);
    PpcSetPairedFprInline(f8, PPC_PsMuls0Inline(f3.d, PPC_PsFromScalarInline(f2.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r12, f12.d);
    PpcSetPairedFprInline(f12, PPC_PsAddInline(f31.d, f13.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r11));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r12));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r9, f9.d);
    PpcSetPairedFprInline(f3, PPC_PsAddInline(f1.d, f0.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_2 = (r4 + 20);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_2));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r9));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r10, f3.d);
    PpcSetPairedFprInline(f9, PPC_PsMuls0Inline(f4.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f3, PPC_PsAddInline(f12.d, f10.d));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 12));
    PpcSetPairedFprInline(f11, PPC_PsAddInline(f1.d, f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 128), f6.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r10_psq_tmp_0 = (r10 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r10_psq_tmp_0, f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 8));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r8, f11.d);
    PpcSetPairedFprInline(f11, PPC_PsAddInline(f9.d, f8.d));
    f4.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 132), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 136), f7.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r30_psq_tmp_0 = (r30 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r30_psq_tmp_0, f31.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r31_psq_tmp_0 = (r31 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r31_psq_tmp_0, f13.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r12_psq_tmp_0 = (r12 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r12_psq_tmp_0, f12.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r11_psq_tmp_0 = (r11 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r11_psq_tmp_0, f10.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 140), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 144), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 148), f4.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r9_psq_tmp_0 = (r9 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r9_psq_tmp_0, f9.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_0 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_0, f8.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r8_psq_tmp_0 = (r8 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r8_psq_tmp_0, f11.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r6_psq_tmp_1 = (r6 + 12);
    PpcSetPairedFprInline(f10, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_1));
    r0 = (r7 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80048094:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 24));
    r3 = -872349696;
    PpcSetPairedFprInline(f9, PPC_PsMuls0Inline(f10.d, PPC_PsFromScalarInline(f7.d)));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 24));
    f1.d = PpcFmulsInline(f1.d, f6.d);
    r7 = (r1 + 116);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r6 + 24));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r6_psq_tmp_2 = (r6 + 20);
    PpcSetPairedFprInline(f10, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r6_psq_tmp_2));
    PpcSetPairedFprInline(f6, f9.d);
    mkw_gqr0 = ctx->gqr[0];
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f8, PPC_PsqLStackInline<0u, 0u>(ctx, r8));
    r4 = (r1 + 68);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r7, f9.d);
    PpcSetPairedFprInline(f9, PPC_PsMuls0Inline(f10.d, PPC_PsFromScalarInline(f7.d)));
    PpcSetPairedFprInline(f6, PPC_PsAddInline(f8.d, f6.d));
    f2.d = PpcFmulsInline(f2.d, f7.d);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f6.d);
    PpcSetPairedFprInline(f6, PPC_PsAddInline(f11.d, f9.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_3 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_3, f6.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 68));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f5.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r7_psq_tmp_0 = (r7 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r7_psq_tmp_0, f9.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 152), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 156), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 160), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 164), f1.d);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f4.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80048124;
    }
}

loc_80048118:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29952));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
}

loc_80048124:
{
    r3 = -872349696;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 152));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80048134:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 156));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 160));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80048154;
    }
}

loc_80048148:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29956));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
}

loc_80048154:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = leaf_stack_saved_f31_entry;
    r31 = MemoryInline::FlatRead32((r1 + 172));
    r30 = MemoryInline::FlatRead32((r1 + 168));
    r1 = (r1 + 192);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFDFE fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80047F50 func_80047F50 preserves=true fpr_mask=0x00000000
