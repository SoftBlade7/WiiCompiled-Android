#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80040870(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r28_psq_tmp_0 = 0;
    uint32_t r28_psq_tmp_1 = 0;
    uint32_t r28_psq_tmp_2 = 0;
    uint32_t r28_psq_tmp_3 = 0;
    uint32_t r29_psq_tmp_0 = 0;
    uint32_t r29_psq_tmp_1 = 0;
    uint32_t r30_psq_tmp_0 = 0;
    uint32_t r30_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80040870;

loc_80040870:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    r31 = r6;
    MemoryInline::FlatWriteRam32((r1 + 72), r30);
    r30 = r5;
    r5 = 4;
    MemoryInline::FlatWriteRam32((r1 + 68), r29);
    r29 = r4;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 64), r28);
    r28 = r3;
    r3 = 128;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016F0F0u>(ctx);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28));
    r4 = (r1 + 44);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29));
    r3 = -872349696;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_800408C0:
{
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_0 = (r28 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_0));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_0 = (r29 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_0));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f0.d, f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_0 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_0, f2.d);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800408FC;
    }
}

loc_800408F4:
{
    r0 = 0;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
}

loc_800408FC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28));
    r4 = (r1 + 32);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r30));
    r3 = -872349696;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80040910:
{
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_1 = (r28 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_1));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r30_psq_tmp_0 = (r30 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_0));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsSubInline(f0.d, f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_1 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_1, f2.d);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004094C;
    }
}

loc_80040944:
{
    r0 = 1;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
}

loc_8004094C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28));
    r4 = (r1 + 20);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29));
    r3 = -872349696;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80040960:
{
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_2 = (r28 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_1 = (r29 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_2 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_2, f2.d);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004099C;
    }
}

loc_80040994:
{
    r0 = 2;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
}

loc_8004099C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r28));
    r4 = (r1 + 8);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r30));
    r3 = -872349696;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_800409B0:
{
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r28_psq_tmp_3 = (r28 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r28_psq_tmp_3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r30_psq_tmp_1 = (r30 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r30_psq_tmp_1));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f2.d);
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_3 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_3, f2.d);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800409EC;
    }
}

loc_800409E4:
{
    r0 = 3;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
}

loc_800409EC:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    r29 = MemoryInline::FlatRead32((r1 + 68));
    r28 = MemoryInline::FlatRead32((r1 + 64));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000007B gpr_write=0xF000003B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80040870 func_80040870 preserves=true fpr_mask=0x00000000
