#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8022DD68(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t mkw_fifo_burst_0[31];

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8022DD68;

loc_8022DD68:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -144), 0, 152u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r1 + 148), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 128u, (r1 + 128), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r5 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 124u, (r1 + 124), r31);
    r31 = 1;
    MemoryInline::WriteResolved32(guest_range_0, 120u, (r1 + 120), r30);
    r30 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r1 + 116), r29);
    r29 = r4;
    MemoryInline::WriteResolved32(guest_range_0, 112u, (r1 + 112), r28);
    r28 = r3;
    MemoryInline::FlatWrite16((r3 + 120), static_cast<uint16_t>(r30));
    r6 = MemoryInline::FlatRead16((r3 + 64));
    MemoryInline::FlatWrite8((r3 + 116), static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead16((r13 + -23860));
    MemoryInline::WriteResolved32(guest_range_0, 88u, (r1 + 88), r5);
    r0 = PPC_Divw(static_cast<int32_t>(r6), static_cast<int32_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 96u, (r1 + 96), r5);
    MemoryInline::FlatWrite16((r3 + 124), static_cast<uint16_t>(r0));
    r4 = (r0 & 65535);
    r0 = MemoryInline::FlatRead16((r13 + -23860));
    r5 = MemoryInline::FlatRead16((r13 + -23864));
    r0 = (r4 * r0);
    r0 = (r6 - r0);
    r0 = (r5 * r0);
    MemoryInline::FlatWrite16((r3 + 122), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r13 + -23862));
    r0 = (r4 * r0);
    MemoryInline::FlatWrite16((r3 + 124), static_cast<uint16_t>(r0));
    r3 = (r1 + 40);
    // inline leaf 0x80199D04 (11 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26412));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -26416));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_0 = (r3 + 8);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_0, PPC_PsFromScalarInline(f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMerge10Inline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f0.d)));
    PpcSetPairedFprInline(f1, PPC_PsMerge01Inline(PPC_PsFromScalarInline(f0.d), PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_1, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 32);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_2, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 16);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_3, f1.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_4, f2.d);
    // end of inlined leaf 0x80199D04
    r3 = (r1 + 40);
    r4 = 30;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80173234u>(ctx);
    r4 = MemoryInline::FlatRead16((r13 + -23864));
    r3 = (r1 + 40);
    r0 = MemoryInline::FlatRead16((r13 + -23862));
    MemoryInline::FlatWriteRam32((r1 + 92), r4);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -25032));
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 88));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 96));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -25036));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    // inline leaf 0x8019A460 (10 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26412));
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_5 = (r3 + 4);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_5, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_6 = (r3 + 12);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_6, PPC_PsFromScalarInline(f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 20), f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_7 = (r3 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_7, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_8 = (r3 + 32);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_8, PPC_PsFromScalarInline(f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 40), f3.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 44), f0.d);
    // end of inlined leaf 0x8019A460
    r0 = MemoryInline::FlatRead16((r28 + 122));
    r3 = 0;
    MemoryInline::FlatWriteRam32((r1 + 92), r0);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -25032));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 88));
    r4 = MemoryInline::FlatRead16((r13 + -23862));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::FlatRead16((r13 + -23870));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -25016));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    r5 = MemoryInline::FlatRead16((r28 + 124));
    r4 = (r5 + r4);
    r0 = (r0 - r4);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 96));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80173214u>(ctx);
    r3 = (r1 + 40);
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8017310Cu>(ctx);
    r3 = r29;
    ctx->lr = 0x8022DE90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8022D0F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -25040));
    r3 = 128;
    r4 = 0;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016F0F0u>(ctx);
    r4 = -872349696;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25024));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r30));
    r3 = 2;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f0.d));
    r0 = 3;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f31.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f31.d));
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f31.d));
        mkw_fifo_burst_0[0] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[1] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_0[4] = static_cast<uint8_t>(r31);
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f31.d));
        mkw_fifo_burst_0[5] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[6] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[7] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[8] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f1.d));
        mkw_fifo_burst_0[9] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[10] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[11] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[12] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_0[13] = static_cast<uint8_t>(r3);
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f0.d));
        mkw_fifo_burst_0[14] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[15] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[16] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[17] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f1.d));
        mkw_fifo_burst_0[18] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[19] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[20] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[21] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_0[22] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f0.d));
        mkw_fifo_burst_0[23] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[24] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[25] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[26] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f31.d));
        mkw_fifo_burst_0[27] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[28] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[29] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[30] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 31u);
    r0 = MemoryInline::FlatRead32((r28 + 68));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8022DEF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8022DF0C;
    }
}

loc_8022DEF8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8022DEFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8022DF0C;
    }
}

loc_8022DF00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8022DF04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8022DF38;
    }
}

loc_8022DF08:
{
    goto loc_8022DF3C;
}

loc_8022DF0C:
{
    r3 = MemoryInline::FlatRead32((r13 + -23856));
    r4 = (r1 + 8);
    r12 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8022DF24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 8);
    r4 = 0;
    ctx->lr = 0x8022DF30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80170F2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->lr = 0x8022DF34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8022D24Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8022DF3C;
}

loc_8022DF38:
{
    ctx->lr = 0x8022DF3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8022D3F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8022DF3C:
{
    r0 = MemoryInline::FlatRead32((r28 + 68));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8022DF44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8022DF5C;
    }
}

loc_8022DF48:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8022DF4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8022DF5C;
    }
}

loc_8022DF50:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8022DF54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8022DF70;
    }
}

loc_8022DF58:
{
    goto loc_8022DF80;
}

loc_8022DF5C:
{
    r3 = 3;
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 117), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r28 + 118), static_cast<uint8_t>(r0));
    goto loc_8022DF80;
}

loc_8022DF70:
{
    r3 = 2;
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 117), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r28 + 118), static_cast<uint8_t>(r0));
}

loc_8022DF80:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 148));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 128));
    r31 = MemoryInline::FlatRead32((r1 + 124));
    r30 = MemoryInline::FlatRead32((r1 + 120));
    r29 = MemoryInline::FlatRead32((r1 + 116));
    r28 = MemoryInline::FlatRead32((r1 + 112));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8022DD68 func_8022DD68 preserves=false fpr_mask=0x80000000
