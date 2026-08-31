#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B3C70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r9_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t mkw_fifo_burst_0[20];
    uint8_t mkw_fifo_burst_1[20];
    uint8_t mkw_fifo_burst_2[20];

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
    uint32_t r26 = ctx->gpr[26];
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

    goto loc_800B3C70;

loc_800B3C70:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -176), 0, 184u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 180u, (r1 + 180), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 160u, (r1 + 160), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 144u, (r1 + 144), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 128u, (r1 + 128), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 112u, (r1 + 112), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 96u, (r1 + 96), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    r11 = (r1 + 96);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 80u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_1, 84u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 20u, true, false);
    r28 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r4 + 5));
    r31 = 1127219200;
    r0 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r4 + 16));
    r11 = 0;
    r26 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r4 + 7));
    r8 = 0x802F0000u;
    r6 = (r0 + r28);
    r9 = MemoryInline::ReadResolved16(guest_range_0, 18u, (r4 + 18));
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(15));
    r7 = (r7_rot_0 & -32768);
    r5 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r4 + 12));
    r0 = (r9 + r26);
    r27_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(15));
    r27 = (r27_rot_0 & -32768);
    r30 = PPC_Divwu(static_cast<uint32_t>(r7), static_cast<uint32_t>(r5));
    r7 = MemoryInline::FlatRead32((r8 + 4896));
    r12_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(15));
    r12 = (r12_rot_0 & -32768);
    MemoryInline::WriteResolved32(guest_range_1, 60u, (r1 + 60), r28);
    r6 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r4 + 14));
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(15));
    r9 = (r9_rot_0 & -32768);
    r29 = PPC_Divwu(static_cast<uint32_t>(r9), static_cast<uint32_t>(r6));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r11), static_cast<int32_t>(r7));
}

loc_800B3CFC:
{
    MemoryInline::FlatWriteRam32((r1 + 56), r31);
    f29.d = f3.d;
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    f27.d = f1.d;
    r28 = PPC_Divwu(static_cast<uint32_t>(r27), static_cast<uint32_t>(r5));
    MemoryInline::FlatWriteRam32((r1 + 64), r31);
    r10 = MemoryInline::FlatRead32((r3 + 56));
    r31 = (r30 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 68), r26);
    r30 = (r29 & 65535);
    r9 = MemoryInline::FlatRead32((r3 + 60));
    r7 = PPC_Divwu(static_cast<uint32_t>(r12), static_cast<uint32_t>(r6));
    r29 = (r28 & 65535);
    f5.d = MemoryInline::FlatReadFloat64((r2 + -27816));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f28.d = f2.d;
    f3.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f5.d));
    MemoryInline::FlatWriteRam32((r1 + 8), r11);
    r27 = r3;
    r28 = (r7 & 65535);
    f4.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 40));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f4.d));
    MemoryInline::FlatWriteRam32((r1 + 16), r10);
    f30.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r9);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800B3DA4;
    }
}

loc_800B3D7C:
{
    r7 = (r8 + 4896);
    r3 = MemoryInline::FlatRead32((r7 + 4));
}

loc_800B3D88:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_800B3DA4;
    }
}

loc_800B3D8C:
{
    r3 = MemoryInline::FlatRead32((r7 + 8));
}

loc_800B3D94:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(r3))) {
        goto loc_800B3DA4;
    }
}

loc_800B3D98:
{
    r3 = MemoryInline::FlatRead32((r7 + 12));
}

loc_800B3DA0:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(r3))) {
        goto loc_800B3DA8;
    }
}

loc_800B3DA4:
{
    r11 = 1;
}

loc_800B3DA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r11), static_cast<int32_t>(0));
}

loc_800B3DAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800B3E28;
    }
}

loc_800B3DB0:
{
    r7 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 8));
    r4 = r0;
    r3 = (r1 + 24);
    r8 = 0;
    r9 = 0;
    r10 = 0;
    ctx->lr = 0x800B3DCCu;
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
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
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
    InvokeDirectCpu<0x801707F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -27840));
    r3 = (r1 + 24);
    r4 = MemoryInline::FlatRead32((r27 + 56));
    r6 = 0;
    f2.d = f1.d;
    r5 = MemoryInline::FlatRead32((r27 + 60));
    f3.d = f1.d;
    r7 = 0;
    r8 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x80170A4Cu>(ctx);
    r3 = (r1 + 24);
    r4 = 0;
    ctx->lr = 0x800B3E00u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
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
    InvokeDirectCpu<0x80170F2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r6 = 0x802F0000u;
    r7 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r6 + 4896);
    r5 = MemoryInline::FlatRead32((r1 + 12));
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWriteRam32((r6 + 4896), r7);
    MemoryInline::FlatWriteRam32((r4 + 4), r5);
    MemoryInline::FlatWriteRam32((r4 + 8), r3);
    MemoryInline::FlatWriteRam32((r4 + 12), r0);
}

loc_800B3E28:
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
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f27.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f28.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f29.d));
    r0 = MemoryInline::FlatRead32((r27 + 8));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[0] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[1] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r31);
        mkw_fifo_burst_0[4] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[5] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r30);
        mkw_fifo_burst_0[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f31.d));
        mkw_fifo_burst_0[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f28.d));
        mkw_fifo_burst_0[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f29.d));
        mkw_fifo_burst_0[16] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[17] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[18] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[19] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 20u);
    r0 = MemoryInline::FlatRead32((r27 + 12));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_1[0] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[1] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r29);
        mkw_fifo_burst_1[4] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[5] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r30);
        mkw_fifo_burst_1[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f31.d));
        mkw_fifo_burst_1[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f30.d));
        mkw_fifo_burst_1[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f29.d));
        mkw_fifo_burst_1[16] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[17] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[18] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[19] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_1, 20u);
    r0 = MemoryInline::FlatRead32((r27 + 20));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_2[0] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[1] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r29);
        mkw_fifo_burst_2[4] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[5] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r28);
        mkw_fifo_burst_2[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f27.d));
        mkw_fifo_burst_2[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f30.d));
        mkw_fifo_burst_2[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f29.d));
        mkw_fifo_burst_2[16] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[17] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[18] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[19] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_2, 20u);
    r0 = MemoryInline::FlatRead32((r27 + 16));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r31));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r28));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 72), 0, 112u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 88u, (r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 72u, (r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 56u, (r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 40u, (r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 96);
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 24u, (r1 + 96));
    // inline leaf 0x800215E8 (7 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::ReadResolved32(guest_range_2, 108u, (r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
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
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800B3C70 func_800B3C70 preserves=false fpr_mask=0xF8000000
