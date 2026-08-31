#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80238FA4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t mkw_fifo_burst_0[20];
    uint8_t mkw_fifo_burst_1[28];

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80238FA4;

loc_80238FA4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -160), 0, 168u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 164u, (r1 + 164), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 144u, (r1 + 144), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 128u, (r1 + 128), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 112u, (r1 + 112), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 96u, (r1 + 96), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 80u, (r1 + 80), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    r11 = (r1 + 80);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r0 = MemoryInline::FlatRead8((r3 + 338));
    r28 = r3;
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80238FEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802392F8;
    }
}

loc_80238FF0:
{
    r6 = 0x80000000u;
    r5 = 1127219200;
    r7 = MemoryInline::FlatRead32((r6 + 248));
    r6 = 1125908480;
    r8 = (r6 + -8573);
    r0 = MemoryInline::FlatRead8((r3 + 339));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(30));
    r6 = (r6_rot_1 & 1073741823);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r7 = (r7_rot_1 & -8);
    r4 = (static_cast<uint32_t>((static_cast<uint64_t>(r8) * static_cast<uint64_t>(r6)) >> 32));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f5.d = MemoryInline::FlatReadFloat64((r2 + -24584));
    MemoryInline::FlatWriteRam32((r1 + 48), r5);
    f3.d = MemoryInline::FlatReadFloat32((r2 + -24560));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r0 = (r0_rot_1 & 131071);
    MemoryInline::FlatWriteRam32((r1 + 40), r5);
    r0 = PPC_Divwu(static_cast<uint32_t>(r7), static_cast<uint32_t>(r0));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f4.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f5.d));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f3.d));
    f3.d = PpcFmulsInline(f27.d, f0.d);
    ctx->lr = 0x80239050u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x802393E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r7 = MemoryInline::FlatRead8((r28 + 132));
    r4 = (r1 + 16);
    r6 = MemoryInline::FlatRead8((r28 + 133));
    r3 = 4;
    r5 = MemoryInline::FlatRead8((r28 + 134));
    r0 = MemoryInline::FlatRead8((r28 + 135));
    f31.d = MemoryInline::FlatReadFloat32((r28 + 328));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 16u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r1 + 28), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r1 + 29), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r1 + 30), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r1 + 31), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r1 + 16), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r1 + 17), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r1 + 18), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r1 + 19), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80170474u>(ctx);
    f29.d = MemoryInline::FlatReadFloat32((r28 + 120));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24600));
    f30.d = MemoryInline::FlatReadFloat32((r28 + 116));
    SetCRFloatResident(cr, 0, f29.d, f0.d);
}

loc_802390A0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802390F4;
    }
}

loc_802390A4:
{
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_802390A8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802390F4;
    }
}

loc_802390AC:
{
    r3 = 128;
    r4 = 0;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016F0F0u>(ctx);
    r3 = -872349696;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24556));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f30.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f29.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24556));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f31.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24556));
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f1.d));
        mkw_fifo_burst_0[0] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[1] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f2.d));
        mkw_fifo_burst_0[4] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[5] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f0.d));
        mkw_fifo_burst_0[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f30.d));
        mkw_fifo_burst_0[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f0.d));
        mkw_fifo_burst_0[16] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[17] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[18] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[19] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 20u);
}

loc_802390F4:
{
    f28.d = MemoryInline::FlatReadFloat32((r2 + -24600));
    r31 = (r1 + 24);
    f29.d = MemoryInline::FlatReadFloat32((r28 + 120));
    r30 = (r1 + 20);
    r29 = 0;
    r27 = -872349696;
    goto loc_802391F8;
}

loc_80239110:
{
    r3 = 20;
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8016F314u>(ctx);
    r7 = MemoryInline::FlatRead8((r28 + 132));
    r4 = r31;
    r6 = MemoryInline::FlatRead8((r28 + 133));
    r3 = 4;
    r5 = MemoryInline::FlatRead8((r28 + 134));
    r0 = MemoryInline::FlatRead8((r28 + 135));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 24), 0, 16u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 12u, (r1 + 36), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 13u, (r1 + 37), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_2, 14u, (r1 + 38), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 15u, (r1 + 39), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r1 + 24), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r1 + 25), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r1 + 26), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r1 + 27), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80170474u>(ctx);
    f31.d = MemoryInline::FlatReadFloat32((r28 + 328));
    r3 = 168;
    r4 = 0;
    r5 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016F0F0u>(ctx);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f28.d));
    r3 = 12;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24556));
    r4 = 0;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f28.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f31.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8016F314u>(ctx);
    r7 = MemoryInline::FlatRead8((r28 + 76));
    r4 = r30;
    r6 = MemoryInline::FlatRead8((r28 + 77));
    r3 = 4;
    r5 = MemoryInline::FlatRead8((r28 + 78));
    r0 = MemoryInline::FlatRead8((r28 + 79));
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 16u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 12u, (r1 + 32), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 13u, (r1 + 33), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 14u, (r1 + 34), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 15u, (r1 + 35), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r1 + 20), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r1 + 21), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r1 + 22), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r1 + 23), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80170474u>(ctx);
    f31.d = MemoryInline::FlatReadFloat32((r28 + 328));
    r3 = 168;
    r4 = 0;
    r5 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016F0F0u>(ctx);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f28.d));
    r29 = (r29 + 1);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24556));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f28.d));
    f28.d = static_cast<double>(PpcForceSingleValueInline(f28.d + f27.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f31.d));
}

loc_802391F8:
{
    SetCRFloatResident(cr, 0, f28.d, f29.d);
}

loc_802391FC:
{
    r0 = cr;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
}

loc_80239204:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80239214;
    }
}

loc_80239208:
{
    r0 = MemoryInline::FlatRead32((r28 + 324));
}

loc_80239210:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r0))) {
        goto loc_80239110;
    }
}

loc_80239214:
{
    r0 = MemoryInline::FlatRead8((r28 + 338));
    r0 = (r0 & 2);
}

loc_8023921C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8023922C;
    }
}

loc_80239220:
{
    r0 = MemoryInline::FlatRead8((r28 + 339));
}

loc_80239228:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(r0))) {
        goto loc_80239110;
    }
}

loc_8023922C:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -24600));
    r27 = (r1 + 8);
    r30 = 0;
    r29 = -872349696;
    goto loc_802392E0;
}

loc_80239240:
{
    r0 = MemoryInline::FlatRead8((r3 + 28));
    r0 = (r0 & 1);
}

loc_80239248:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802392E0;
    }
}

loc_8023924C:
{
    r7 = MemoryInline::FlatRead8((r3 + 16));
    r4 = r27;
    r6 = MemoryInline::FlatRead8((r3 + 17));
    r5 = MemoryInline::FlatRead8((r3 + 18));
    r0 = MemoryInline::FlatRead8((r3 + 19));
    f30.d = MemoryInline::FlatReadFloat32((r3 + 24));
    f29.d = MemoryInline::FlatReadFloat32((r3 + 20));
    r3 = 4;
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 4u, (r1 + 12), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_4, 5u, (r1 + 13), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_4, 6u, (r1 + 14), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 7u, (r1 + 15), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 0u, (r1 + 8), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r1 + 9), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r1 + 10), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r1 + 11), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80170474u>(ctx);
    f27.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f28.d = MemoryInline::FlatReadFloat32(r30);
    SetCRFloatResident(cr, 0, f27.d, f31.d);
}

loc_8023929C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802392E0;
    }
}

loc_802392A0:
{
    SetCRFloatResident(cr, 0, f30.d, f31.d);
}

loc_802392A4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802392E0;
    }
}

loc_802392A8:
{
    r3 = 128;
    r4 = 0;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016F0F0u>(ctx);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f28.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f28.d + f27.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f30.d));
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f29.d));
        mkw_fifo_burst_1[0] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[1] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f1.d));
        mkw_fifo_burst_1[4] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[5] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f29.d));
        mkw_fifo_burst_1[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f1.d));
        mkw_fifo_burst_1[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f0.d));
        mkw_fifo_burst_1[16] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[17] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[18] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[19] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f28.d));
        mkw_fifo_burst_1[20] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[21] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[22] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[23] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f0.d));
        mkw_fifo_burst_1[24] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[25] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[26] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[27] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_1, 28u);
}

loc_802392E0:
{
    r4 = r30;
    r3 = (r28 + 96);
    // inline leaf 0x800AF180 (8 guest instruction(s))
}

loc_inl1_0x800AF180:
{
}

loc_inl1_0x800AF184:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800AF190;
    }
}

loc_inl1_0x800AF188:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl1_cont_800AF180;
}

loc_inl1_0x800AF190:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl1_cont_800AF180:
{
    // end of inlined leaf 0x800AF180
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_802392F0:
{
    r30 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80239240;
    }
}

loc_802392F8:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 60), 0, 108u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 84u, (r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 68u, (r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 52u, (r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 36u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 80);
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 20u, (r1 + 80));
    // inline leaf 0x800215EC (6 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 0u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 8u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_5, 12u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_5, 16u, (r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::ReadResolved32(guest_range_5, 104u, (r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF8000DFF gpr_write=0xF8000FFB gpr_return=0x00000018 fpr_read=0xF800C03F fpr_write=0xF800FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xC1 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80238FA4 func_80238FA4 preserves=false fpr_mask=0xF8000000
