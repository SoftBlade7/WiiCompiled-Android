#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8054ADF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t mkw_fifo_burst_0[14];
    uint8_t mkw_fifo_burst_1[14];
    uint8_t mkw_fifo_burst_2[14];

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8054ADF0;

loc_8054ADF0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 32u, (r1 + 32), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 3448);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r30);
    r30 = r4;
    r4 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r29);
    r29 = r3;
    r3 = (r3 + 28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8017310Cu>(ctx);
    r5 = 0;
    MemoryInline::FlatWrite8((r29 + 79), static_cast<uint8_t>(r5));
    r0 = MemoryInline::FlatRead8((r29 + 76));
    r4 = (r1 + 12);
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    r3 = 1;
    r0 = MemoryInline::FlatRead8((r29 + 77));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 78));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r5));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80171E10u>(ctx);
    MemoryInline::FlatWrite8((r29 + 79), static_cast<uint8_t>(r30));
    r4 = (r1 + 8);
    r0 = MemoryInline::FlatRead8((r29 + 76));
    r3 = 2;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 77));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 78));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r30));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80171E10u>(ctx);
    r5 = MemoryInline::FlatRead32(r29);
    r3 = 0;
    r4 = 0;
    r6 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8017214Cu>(ctx);
    r0 = MemoryInline::FlatRead8((r29 + 80));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8054AEB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8054AED4;
    }
}

loc_8054AEB8:
{
    r3 = 0;
    r4 = 2;
    r5 = 4;
    r6 = 8;
    r7 = 15;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80171CE0u>(ctx);
    goto loc_8054AEEC;
}

loc_8054AED4:
{
    r3 = 0;
    r4 = 8;
    r5 = 8;
    r6 = 9;
    r7 = 15;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80171CE0u>(ctx);
}

loc_8054AEEC:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 320));
    r3 = 128;
    f1.d = MemoryInline::FlatReadFloat32((r29 + 20));
    r4 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 24));
    r5 = 4;
    f31.d = PpcFmulsInline(f2.d, f1.d);
    f29.d = MemoryInline::FlatReadFloat32((r31 + 300));
    f30.d = PpcFmulsInline(f2.d, f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016F0F0u>(ctx);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f31.d));
    r4 = -872349696;
    f3.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f30.d));
    r3 = 0;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f31.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f3.d));
    r0 = 2;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 324));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f30.d));
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f0.d));
        mkw_fifo_burst_0[0] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[1] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_0[4] = static_cast<uint8_t>(r3);
    mkw_fifo_burst_0[5] = static_cast<uint8_t>(r3);
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f2.d));
        mkw_fifo_burst_0[6] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[7] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[8] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[9] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f3.d));
        mkw_fifo_burst_0[10] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[11] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[12] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[13] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 14u);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 324));
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f0.d));
        mkw_fifo_burst_1[0] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[1] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_1[4] = static_cast<uint8_t>(r0);
    mkw_fifo_burst_1[5] = static_cast<uint8_t>(r3);
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f2.d));
        mkw_fifo_burst_1[6] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[7] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[8] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[9] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f1.d));
        mkw_fifo_burst_1[10] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[11] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[12] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[13] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_1, 14u);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 324));
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f0.d));
        mkw_fifo_burst_2[0] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[1] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_2[4] = static_cast<uint8_t>(r0);
    mkw_fifo_burst_2[5] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f4.d));
        mkw_fifo_burst_2[6] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[7] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[8] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[9] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f1.d));
        mkw_fifo_burst_2[10] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[11] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[12] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[13] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_2, 14u);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 324));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r3));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 48));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000001A gpr_write=0xE00000FB gpr_return=0x00000018 fpr_read=0xE0000000 fpr_write=0xE000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8054ADF0 func_8054ADF0 preserves=false fpr_mask=0xE0000000
