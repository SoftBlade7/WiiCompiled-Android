#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8022E2BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint8_t mkw_fifo_burst_0[27];

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8022E2BC;

loc_8022E2BC:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r3;
    r4 = MemoryInline::FlatRead16((r3 + 120));
    r3 = MemoryInline::FlatRead8((r3 + 117));
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r30 = (r4 - r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8022E3DC;
    }
}

loc_8022E300:
{
    r3 = 0;
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 16));
    goto loc_8022E344;
}

loc_8022E320:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r31);
    r3 = (r30 + 1);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80171E10u>(ctx);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r3 = r30;
    r4 = (r1 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80171ED4u>(ctx);
    r30 = (r30 + 1);
}

loc_8022E344:
{
    r0 = MemoryInline::FlatRead8((r29 + 117));
}

loc_8022E34C:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r0))) {
        goto loc_8022E320;
    }
}

loc_8022E350:
{
    r0 = MemoryInline::FlatRead32((r29 + 68));
}

loc_8022E358:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8022E364;
    }
}

loc_8022E35C:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -25004));
    goto loc_8022E368;
}

loc_8022E364:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -25040));
}

loc_8022E368:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8022E36C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8022E378;
    }
}

loc_8022E370:
{
    f30.d = MemoryInline::FlatReadFloat32((r2 + -25004));
    goto loc_8022E37C;
}

loc_8022E378:
{
    f30.d = MemoryInline::FlatReadFloat32((r2 + -25040));
}

loc_8022E37C:
{
    r3 = 128;
    r4 = 0;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016F0F0u>(ctx);
    r5 = -872349696;
    r0 = 0;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r4 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25024));
    r3 = 2;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f31.d));
    r0 = 3;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f30.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f31.d));
    mkw_fifo_burst_0[0] = static_cast<uint8_t>(r4);
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f31.d));
        mkw_fifo_burst_0[1] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[2] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[3] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[4] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f1.d));
        mkw_fifo_burst_0[5] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[6] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[7] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[8] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_0[9] = static_cast<uint8_t>(r3);
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f0.d));
        mkw_fifo_burst_0[10] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[11] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[12] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[13] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f1.d));
        mkw_fifo_burst_0[14] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[15] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[16] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[17] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_0[18] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f0.d));
        mkw_fifo_burst_0[19] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[20] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[21] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[22] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f30.d));
        mkw_fifo_burst_0[23] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[24] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[25] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[26] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 27u);
}

loc_8022E3DC:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r29 + 116), static_cast<uint8_t>(r0));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 48));
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
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000002F gpr_write=0xE000003B gpr_return=0x00000018 fpr_read=0xC0000003 fpr_write=0xC0000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8022E2BC func_8022E2BC preserves=false fpr_mask=0xC0000000
