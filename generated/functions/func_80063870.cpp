#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80063870(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r12_rot_5 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r25_rot_1 = 0;
    uint32_t r25_rot_2 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_10 = 0;
    uint32_t r3_psq_tmp_11 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint32_t r3_psq_tmp_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_10 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_7 = 0;
    uint32_t r4_psq_tmp_8 = 0;
    uint32_t r4_psq_tmp_9 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t mkw_fifo_burst_0[15];

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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
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
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80063870;

loc_80063870:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 112);
    // inline leaf 0x80021578 (16 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -60), 0, 60u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -60), r17);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -56), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -52), r19);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -48), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -44), r21);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -4), r31);
    // end of inlined leaf 0x80021578
    r0 = MemoryInline::FlatRead32(r3);
    r31 = 0x802C0000u;
    r24 = r3;
    r27 = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800638A8:
{
    r26 = r5;
    r31 = (r31 + -32704);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80063B90;
    }
}

loc_800638B4:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r17 = MemoryInline::FlatRead8(r31);
    r0 = (r3 & 2);
}

loc_800638C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80063950;
    }
}

loc_800638C4:
{
    r0 = (r3 & 1);
}

loc_800638C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80063950;
    }
}

loc_800638CC:
{
}

loc_800638D0:
{
    if ((static_cast<int32_t>(r17) == static_cast<int32_t>(0))) {
        goto loc_80063950;
    }
}

loc_800638D4:
{
    r18 = (r31 + 12);
    r19 = 0;
    goto loc_80063938;
}

loc_800638E0:
{
    r3 = (r19 & 255);
    r7 = (r18 + r3);
    r0 = MemoryInline::FlatRead8((r7 + 100));
}

loc_800638F0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_80063934;
    }
}

loc_800638F4:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r19), static_cast<uint32_t>(3));
    r5 = (r5_rot_2 & 2040);
    r4 = (r18 + r0);
    r6 = 0;
    r10 = (r18 + r5);
    r4 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWrite16((r10 + 36), static_cast<uint16_t>(r4));
    r5 = 0;
    r8 = 0;
    r9 = 0;
    r0 = MemoryInline::FlatRead8((r7 + 100));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r7 = (r18 + r0);
    r7 = MemoryInline::FlatRead16((r7 + 6));
    MemoryInline::FlatWrite16((r10 + 38), static_cast<uint16_t>(r7));
    // inline leaf 0x80060670 (28 guest instruction(s))
    r10 = -872349696;
    r11 = 97;
    mkw_fifo_burst_0[0] = static_cast<uint8_t>(r11);
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r12 = (r12_rot_2 & -2);
    r3 = -33292288;
    r4 = (r4 + -1);
    r0 = (r3 + -1);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[1] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[2] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[3] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[4] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(16));
    r3 = (r3_rot_2 & 16711680);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(17));
    r5 = (r5_rot_3 & 33423360);
    r4 = (r4 | r3);
    r0 = (r12 + 48);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r3 = (r3_rot_3 & -16777216);
    mkw_fifo_burst_0[5] = static_cast<uint8_t>(r11);
    r4 = (r5 | r4);
    r0 = (r12 + 49);
    r3 = (r4 | r3);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r3);
        mkw_fifo_burst_0[6] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[7] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[8] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[9] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r4 = (r7 + -1);
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(17));
    r5 = (r5_rot_4 & 33423360);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(16));
    r3 = (r3_rot_4 & 16711680);
    mkw_fifo_burst_0[10] = static_cast<uint8_t>(r11);
    r3 = (r4 | r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_4 & -16777216);
    r3 = (r5 | r3);
    r0 = (r3 | r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[11] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[12] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[13] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[14] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 15u);
    // end of inlined leaf 0x80060670
}

loc_80063934:
{
    r19 = (r19 + 1);
}

loc_80063938:
{
    r0 = (r19 & 255);
}

loc_80063940:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r17))) {
        goto loc_800638E0;
    }
}

loc_80063944:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r0 = (r0 | 1);
    MemoryInline::FlatWriteRam32((r31 + 12), r0);
}

loc_80063950:
{
    r3 = MemoryInline::FlatRead32(r24);
    r17 = MemoryInline::FlatRead32((r3 + 8));
    r25_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r17), static_cast<uint32_t>(1));
    r25 = (r25_rot_1 & 1);
}

loc_8006395C:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_80063B18;
    }
}

loc_80063960:
{
}

loc_80063964:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_800639AC;
    }
}

loc_80063968:
{
    r3 = r27;
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8017310Cu>(ctx);
    r3 = MemoryInline::FlatRead32(r24);
    r0 = MemoryInline::FlatRead32((r3 + 48));
    r0 = (r0 & 1024);
}

loc_80063980:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800639D4;
    }
}

loc_80063984:
{
}

loc_80063988:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_8006399C;
    }
}

loc_8006398C:
{
    r3 = r26;
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80173188u>(ctx);
    goto loc_800639D4;
}

loc_8006399C:
{
    r3 = r27;
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80173188u>(ctx);
    goto loc_800639D4;
}

loc_800639AC:
{
    r3 = (r17 & 65535);
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8017315Cu>(ctx);
    r3 = MemoryInline::FlatRead32(r24);
    r0 = MemoryInline::FlatRead32((r3 + 48));
    r0 = (r0 & 1024);
}

loc_800639C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800639D4;
    }
}

loc_800639C8:
{
    r3 = (r17 & 65535);
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801731E0u>(ctx);
}

loc_800639D4:
{
}

loc_800639D8:
{
    r3 = 1;
    if ((static_cast<int32_t>(r17) < static_cast<int32_t>(0))) {
        goto loc_80063B30;
    }
}

loc_800639E0:
{
    r0 = (r17 & 65535);
    r20 = 0x802C0000u;
    r27 = (r0 * 36);
    f30.d = MemoryInline::FlatReadFloat32((r2 + -29512));
    f31.d = MemoryInline::FlatReadFloat32((r2 + -29524));
    r30 = (r31 + 528);
    r28 = (r1 + 8);
    r26 = (r0 * 48);
    r18 = (r31 + 560);
    r21 = (r20 + -10816);
    r17 = 0;
    r29 = 30;
    r19 = 1;
    r23 = 60;
    r22 = 0;
}

loc_80063A1C:
{
    r0 = MemoryInline::FlatRead32(r30);
}

loc_80063A24:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80063AB0;
    }
}

loc_80063A28:
{
    r0 = MemoryInline::FlatRead32((r18 + 4));
    MemoryInline::FlatWrite32(r28, r29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80063A34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80063A40;
    }
}

loc_80063A38:
{
    r3 = (r0 + r27);
    goto loc_80063AA0;
}

loc_80063A40:
{
    r0 = MemoryInline::FlatRead8((r13 + -27312));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80063A50;
    }
}

loc_80063A4C:
{
    MemoryInline::FlatWrite8((r13 + -27312), static_cast<uint8_t>(r19));
}

loc_80063A50:
{
    r0 = MemoryInline::FlatRead32((r31 + 560));
    r3 = (r20 + -10816);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80063A5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80063A68;
    }
}

loc_80063A60:
{
    r4 = (r0 + r26);
    goto loc_80063A6C;
}

loc_80063A68:
{
    r4 = 0;
}

loc_80063A6C:
{
    // inline leaf 0x80085670 (50 guest instruction(s))
}

loc_inl2_0x80085670:
{
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_2 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_3 = (r4 + 16);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_3));
    PpcSetPairedFprInline(f6, PPC_PsMerge10Inline(f1.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_4 = (r4 + 20);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_4));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_5 = (r4 + 32);
    PpcSetPairedFprInline(f4, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_5));
    PpcSetPairedFprInline(f7, PPC_PsMerge10Inline(f3.d, f2.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_6 = (r4 + 36);
    PpcSetPairedFprInline(f5, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_6));
    PpcSetPairedFprInline(f11, PPC_PsMulInline(f3.d, f6.d));
    PpcSetPairedFprInline(f8, PPC_PsMerge10Inline(f5.d, f4.d));
    PpcSetPairedFprInline(f13, PPC_PsMulInline(f5.d, f7.d));
    PpcSetPairedFprInline(f11, PPC_PsMsubInline(f1.d, f7.d, f11.d));
    PpcSetPairedFprInline(f12, PPC_PsMulInline(f1.d, f8.d));
    PpcSetPairedFprInline(f13, PPC_PsMsubInline(f3.d, f8.d, f13.d));
    PpcSetPairedFprInline(f12, PPC_PsMsubInline(f5.d, f6.d, f12.d));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f3.d, f4.d));
    PpcSetPairedFprInline(f9, PPC_PsMulInline(f0.d, f5.d));
    PpcSetPairedFprInline(f8, PPC_PsMulInline(f1.d, f2.d));
    PpcSetPairedFprInline(f10, PPC_PsMsubInline(f2.d, f5.d, f10.d));
    PpcSetPairedFprInline(f9, PPC_PsMsubInline(f1.d, f4.d, f9.d));
    PpcSetPairedFprInline(f8, PPC_PsMsubInline(f0.d, f3.d, f8.d));
    PpcSetPairedFprInline(f7, PPC_PsMulInline(f0.d, f13.d));
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f1.d, f1.d));
    PpcSetPairedFprInline(f7, PPC_PsMaddInline(f2.d, f12.d, f7.d));
    PpcSetPairedFprInline(f7, PPC_PsMaddInline(f4.d, f11.d, f7.d));
    SetCRFloatResident(cr, static_cast<uint32_t>(0) & 7u, PpcGetPs0Inline(f7.d), PpcGetPs0Inline(f1.d));
}

loc_inl2_0x800856D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl2_0x800856E4;
    }
}

loc_inl2_0x800856DC:
{
    r3 = 0;
    goto loc_inl2_cont_80085670;
}

loc_inl2_0x800856E4:
{
    PpcSetPairedFprInline(f0, PPC_Fres(f7.d));
    PpcSetPairedFprInline(f6, PPC_PsAddInline(f0.d, f0.d));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsNmsubInline(f7.d, f5.d, f6.d));
    PpcSetPairedFprInline(f6, PPC_PsAddInline(f0.d, f0.d));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsNmsubInline(f7.d, f5.d, f6.d));
    PpcSetPairedFprInline(f13, PPC_PsMuls0Inline(f13.d, f0.d));
    PpcSetPairedFprInline(f12, PPC_PsMuls0Inline(f12.d, f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f13.d);
    PpcSetPairedFprInline(f11, PPC_PsMuls0Inline(f11.d, f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 12);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2, f12.d);
    PpcSetPairedFprInline(f10, PPC_PsMuls0Inline(f10.d, f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3, f11.d);
    PpcSetPairedFprInline(f9, PPC_PsMuls0Inline(f9.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4, f10.d);
    PpcSetPairedFprInline(f8, PPC_PsMuls0Inline(f8.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_5 = (r3 + 20);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5, f9.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_6 = (r3 + 32);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_6, f8.d);
    r3 = 1;
}

loc_inl2_cont_80085670:
{
    // end of inlined leaf 0x80085670
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80063A74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80063A9C;
    }
}

loc_80063A78:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r21 + 4), 0, 32u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r21 + 32), f30.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r21 + 16), f30.d);
    MemoryInline::FlatWriteRamFloat32((r20 + -10816), f30.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f31.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r21 + 28), f31.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r21 + 24), f31.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r21 + 20), f31.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f31.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r21 + 12), f31.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r21 + 8), f31.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r21 + 4), f31.d);
}

loc_80063A9C:
{
    r3 = (r20 + -10816);
    f0.d = PPC_PsToScalarInline(f0.d);
    f1.d = PPC_PsToScalarInline(f1.d);
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
    f6.d = PPC_PsToScalarInline(f6.d);
    f7.d = PPC_PsToScalarInline(f7.d);
    f8.d = PPC_PsToScalarInline(f8.d);
    f9.d = PPC_PsToScalarInline(f9.d);
    f10.d = PPC_PsToScalarInline(f10.d);
    f11.d = PPC_PsToScalarInline(f11.d);
    f12.d = PPC_PsToScalarInline(f12.d);
    f13.d = PPC_PsToScalarInline(f13.d);
}

loc_80063AA0:
{
    r4 = MemoryInline::FlatRead32(r28);
    ctx->lr = 0x80063AA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80060A60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    cr = ctx->cr;
    r3 = 0;
    goto loc_80063AC8;
}

loc_80063AB0:
{
}

loc_80063AB4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80063AC4;
    }
}

loc_80063AB8:
{
    MemoryInline::FlatWrite32(r28, r22);
    r3 = 0;
    goto loc_80063AC8;
}

loc_80063AC4:
{
    MemoryInline::FlatWrite32(r28, r23);
}

loc_80063AC8:
{
    r17 = (r17 + 1);
    r29 = (r29 + 3);
}

loc_80063AD4:
{
    r28 = (r28 + 4);
    r30 = (r30 + 4);
    if ((static_cast<uint32_t>(r17) < static_cast<uint32_t>(8))) {
        goto loc_80063A1C;
    }
}

loc_80063AE0:
{
}

loc_80063AE4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80063B04;
    }
}

loc_80063AE8:
{
    r0 = MemoryInline::FlatRead8((r13 + -27324));
}

loc_80063AF0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80063B30;
    }
}

loc_80063AF4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    InvokeDirectCpu<0x80060980u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -27324), static_cast<uint8_t>(r0));
    goto loc_80063B30;
}

loc_80063B04:
{
    r3 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    InvokeDirectCpu<0x800609E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r0 = 0;
    MemoryInline::FlatWrite8((r13 + -27324), static_cast<uint8_t>(r0));
    goto loc_80063B30;
}

loc_80063B18:
{
    r0 = MemoryInline::FlatRead8((r13 + -27324));
}

loc_80063B20:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80063B30;
    }
}

loc_80063B24:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    InvokeDirectCpu<0x80060980u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -27324), static_cast<uint8_t>(r0));
}

loc_80063B30:
{
    r26 = (r31 + 0);
    r3 = MemoryInline::FlatRead32((r26 + 8));
    r0 = (r3 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80063B3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80063B70;
    }
}

loc_80063B40:
{
    r0 = (r3 & 3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_80063B48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80063B70;
    }
}

loc_80063B4C:
{
    r3 = MemoryInline::FlatRead8(r31);
    r4 = MemoryInline::FlatRead8((r26 + 1));
    r5 = MemoryInline::FlatRead8((r26 + 2));
    r6 = MemoryInline::FlatRead8((r26 + 3));
    r7 = MemoryInline::FlatRead32((r26 + 4));
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
    InvokeDirectCpu<0x800605C0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r0 = MemoryInline::FlatRead32((r26 + 8));
    r0 = (r0 | 3);
    MemoryInline::FlatWriteRam32((r26 + 8), r0);
}

loc_80063B70:
{
    r4 = MemoryInline::FlatRead8((r13 + -27328));
    r26 = 0;
    r3 = r24;
    MemoryInline::FlatWrite8((r13 + -27328), static_cast<uint8_t>(r26));
    ctx->lr = 0x80063B84u;
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
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
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
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004F9C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
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
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_80063B88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80063B90;
    }
}

loc_80063B8C:
{
    MemoryInline::FlatWrite8((r13 + -27324), static_cast<uint8_t>(r26));
}

loc_80063B90:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 112);
    f30.d = MemoryInline::FlatReadFloat64((r1 + 112));
    {
        uint8_t* const guest_thunk_stack = MemoryInline::ResolveRangeHost((r11 + -60), 0, 60u, true, false);
        r17 = MemoryInline::ReadResolved32(guest_thunk_stack, 0u, (r11 + -60));
        r18 = MemoryInline::ReadResolved32(guest_thunk_stack, 4u, (r11 + -56));
        r19 = MemoryInline::ReadResolved32(guest_thunk_stack, 8u, (r11 + -52));
        r20 = MemoryInline::ReadResolved32(guest_thunk_stack, 12u, (r11 + -48));
        r21 = MemoryInline::ReadResolved32(guest_thunk_stack, 16u, (r11 + -44));
        r22 = MemoryInline::ReadResolved32(guest_thunk_stack, 20u, (r11 + -40));
        r23 = MemoryInline::ReadResolved32(guest_thunk_stack, 24u, (r11 + -36));
        r24 = MemoryInline::ReadResolved32(guest_thunk_stack, 28u, (r11 + -32));
        r25 = MemoryInline::ReadResolved32(guest_thunk_stack, 32u, (r11 + -28));
        r26 = MemoryInline::ReadResolved32(guest_thunk_stack, 36u, (r11 + -24));
        r27 = MemoryInline::ReadResolved32(guest_thunk_stack, 40u, (r11 + -20));
        r28 = MemoryInline::ReadResolved32(guest_thunk_stack, 44u, (r11 + -16));
        r29 = MemoryInline::ReadResolved32(guest_thunk_stack, 48u, (r11 + -12));
        r30 = MemoryInline::ReadResolved32(guest_thunk_stack, 52u, (r11 + -8));
        r31 = MemoryInline::ReadResolved32(guest_thunk_stack, 56u, (r11 + -4));
    }
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
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
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
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
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFE3FFF gpr_write=0xFFFE1FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80063870 func_80063870 preserves=false fpr_mask=0xC0000000
