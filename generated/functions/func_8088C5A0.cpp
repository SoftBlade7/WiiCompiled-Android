#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8088C5A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_not_0 = 0;
    uint32_t r0_not_1 = 0;
    uint32_t r0_not_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r0_subfc_sub_0 = 0;
    uint32_t r0_subfc_sub_1 = 0;
    uint32_t r0_subfc_sub_2 = 0;
    uint32_t r0_subfe_rb_0 = 0;
    uint32_t r0_subfe_rb_1 = 0;
    uint32_t r0_subfe_rb_2 = 0;
    uint32_t r12_addr_0 = 0;
    uint32_t r12_addr_1 = 0;
    uint32_t r12_addr_10 = 0;
    uint32_t r12_addr_2 = 0;
    uint32_t r12_addr_3 = 0;
    uint32_t r12_addr_4 = 0;
    uint32_t r12_addr_5 = 0;
    uint32_t r12_addr_6 = 0;
    uint32_t r12_addr_7 = 0;
    uint32_t r12_addr_8 = 0;
    uint32_t r12_addr_9 = 0;
    uint32_t r14_addr_0 = 0;
    uint32_t r14_addr_1 = 0;
    uint32_t r14_addr_2 = 0;
    uint32_t r14_addr_3 = 0;
    uint32_t r14_addr_4 = 0;
    uint32_t r14_addr_5 = 0;
    uint32_t r14_addr_6 = 0;
    uint32_t r14_addr_7 = 0;
    uint32_t r14_addr_8 = 0;
    uint32_t r14_addr_9 = 0;
    uint32_t r15_rot_0 = 0;
    uint32_t r15_rot_1 = 0;
    uint32_t r15_rot_10 = 0;
    uint32_t r15_rot_11 = 0;
    uint32_t r15_rot_12 = 0;
    uint32_t r15_rot_2 = 0;
    uint32_t r15_rot_3 = 0;
    uint32_t r15_rot_4 = 0;
    uint32_t r15_rot_5 = 0;
    uint32_t r15_rot_6 = 0;
    uint32_t r15_rot_7 = 0;
    uint32_t r15_rot_8 = 0;
    uint32_t r15_rot_9 = 0;
    uint32_t r16_rot_0 = 0;
    uint32_t r16_rot_1 = 0;
    uint32_t r16_rot_10 = 0;
    uint32_t r16_rot_11 = 0;
    uint32_t r16_rot_12 = 0;
    uint32_t r16_rot_13 = 0;
    uint32_t r16_rot_14 = 0;
    uint32_t r16_rot_15 = 0;
    uint32_t r16_rot_16 = 0;
    uint32_t r16_rot_17 = 0;
    uint32_t r16_rot_18 = 0;
    uint32_t r16_rot_19 = 0;
    uint32_t r16_rot_2 = 0;
    uint32_t r16_rot_20 = 0;
    uint32_t r16_rot_21 = 0;
    uint32_t r16_rot_22 = 0;
    uint32_t r16_rot_23 = 0;
    uint32_t r16_rot_24 = 0;
    uint32_t r16_rot_25 = 0;
    uint32_t r16_rot_3 = 0;
    uint32_t r16_rot_4 = 0;
    uint32_t r16_rot_5 = 0;
    uint32_t r16_rot_6 = 0;
    uint32_t r16_rot_7 = 0;
    uint32_t r16_rot_8 = 0;
    uint32_t r16_rot_9 = 0;
    uint32_t r17_addr_0 = 0;
    uint32_t r17_addr_1 = 0;
    uint32_t r17_addr_10 = 0;
    uint32_t r17_addr_2 = 0;
    uint32_t r17_addr_3 = 0;
    uint32_t r17_addr_4 = 0;
    uint32_t r17_addr_5 = 0;
    uint32_t r17_addr_6 = 0;
    uint32_t r17_addr_7 = 0;
    uint32_t r17_addr_8 = 0;
    uint32_t r17_addr_9 = 0;
    uint32_t r17_rot_0 = 0;
    uint32_t r17_rot_1 = 0;
    uint32_t r17_rot_2 = 0;
    uint32_t r17_rot_3 = 0;
    uint32_t r17_rot_4 = 0;
    uint32_t r17_rot_5 = 0;
    uint32_t r17_rot_6 = 0;
    uint32_t r17_rot_7 = 0;
    uint32_t r17_rot_8 = 0;
    uint32_t r17_rot_9 = 0;
    uint32_t r18_rot_0 = 0;
    uint32_t r18_rot_1 = 0;
    uint32_t r18_rot_2 = 0;
    uint32_t r18_rot_3 = 0;
    uint32_t r18_rot_4 = 0;
    uint32_t r18_rot_5 = 0;
    uint32_t r18_rot_6 = 0;
    uint32_t r18_rot_7 = 0;
    uint32_t r18_rot_8 = 0;
    uint32_t r18_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r20_addr_0 = 0;
    uint32_t r20_addr_1 = 0;
    uint32_t r20_addr_10 = 0;
    uint32_t r20_addr_11 = 0;
    uint32_t r20_addr_2 = 0;
    uint32_t r20_addr_3 = 0;
    uint32_t r20_addr_4 = 0;
    uint32_t r20_addr_5 = 0;
    uint32_t r20_addr_6 = 0;
    uint32_t r20_addr_7 = 0;
    uint32_t r20_addr_8 = 0;
    uint32_t r20_addr_9 = 0;
    uint32_t r21_rot_0 = 0;
    uint32_t r21_rot_1 = 0;
    uint32_t r21_rot_10 = 0;
    uint32_t r21_rot_11 = 0;
    uint32_t r21_rot_2 = 0;
    uint32_t r21_rot_3 = 0;
    uint32_t r21_rot_4 = 0;
    uint32_t r21_rot_5 = 0;
    uint32_t r21_rot_6 = 0;
    uint32_t r21_rot_7 = 0;
    uint32_t r21_rot_8 = 0;
    uint32_t r21_rot_9 = 0;
    uint32_t r23_addr_0 = 0;
    uint32_t r23_addr_1 = 0;
    uint32_t r23_addr_10 = 0;
    uint32_t r23_addr_11 = 0;
    uint32_t r23_addr_2 = 0;
    uint32_t r23_addr_3 = 0;
    uint32_t r23_addr_4 = 0;
    uint32_t r23_addr_5 = 0;
    uint32_t r23_addr_6 = 0;
    uint32_t r23_addr_7 = 0;
    uint32_t r23_addr_8 = 0;
    uint32_t r23_addr_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_10 = 0;
    uint32_t r4_rot_11 = 0;
    uint32_t r4_rot_12 = 0;
    uint32_t r4_rot_13 = 0;
    uint32_t r4_rot_14 = 0;
    uint32_t r4_rot_15 = 0;
    uint32_t r4_rot_16 = 0;
    uint32_t r4_rot_17 = 0;
    uint32_t r4_rot_18 = 0;
    uint32_t r4_rot_19 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_20 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;
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
    uint8_t* guest_range_2 = nullptr;

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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8088C5A0;

loc_8088C5A0:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 160), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 160);
    // inline leaf 0x8002156C (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -72), r14);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -68), r15);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -64), r16);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -60), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002156C
    r6 = 0x808B0000u;
    r0 = MemoryInline::FlatRead32((r3 + 7196));
    r7 = 1127219200;
    r5 = 0x808B0000u;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 40), r7);
    f31.d = MemoryInline::FlatReadFloat64((r6 + 11168));
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    r28 = (r4 + 19288);
    r27 = (r5 + 10752);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 48), r7);
    r30 = 0;
    r26 = 0;
    goto loc_8088CB1C;
}

loc_8088C5FC:
{
    r0 = MemoryInline::FlatRead32((r1 + 72));
    r14 = 0;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r29 + r0);
    r4 = MemoryInline::FlatRead32((r3 + 1032));
    r0 = MemoryInline::FlatRead8((r4 + 155));
}

loc_8088C618:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8088C62C;
    }
}

loc_8088C61C:
{
    r0 = MemoryInline::FlatRead8((r4 + 157));
}

loc_8088C624:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8088C62C;
    }
}

loc_8088C628:
{
    r14 = 1;
}

loc_8088C62C:
{
    r0 = MemoryInline::FlatRead32((r1 + 72));
    r0 = (r0 * 20);
    r25 = (r29 + r0);
    r0 = MemoryInline::FlatRead8((r25 + 2084));
}

loc_8088C640:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8088C654;
    }
}

loc_8088C644:
{
}

loc_8088C648:
{
    if ((static_cast<int32_t>(r14) != static_cast<int32_t>(0))) {
        goto loc_8088C654;
    }
}

loc_8088C64C:
{
    r30 = (r30 + 1);
    goto loc_8088CAFC;
}

loc_8088C654:
{
    r3 = 0x809C0000u;
    r4 = (r4 + 48);
    r3 = MemoryInline::FlatRead32((r3 + 16216));
    r5 = (r1 + 32);
    // inline leaf 0x807E08E4 (22 guest instruction(s))
}

loc_inl1_0x807E08E4:
{
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 144));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 156));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteRamFloat32(r5, f4.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 152));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 164));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteRamFloat32((r5 + 4), f0.d);
    r0 = MemoryInline::FlatRead8((r3 + 20));
}

loc_inl1_0x807E0924:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x807E0928:
{
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 30568));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    MemoryInline::FlatWriteRamFloat32(r5, f0.d);
    goto loc_inl1_cont_807E08E4;
}

loc_inl1_return:
{
}

loc_inl1_cont_807E08E4:
{
    // end of inlined leaf 0x807E08E4
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 1040u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 1040u, (r29 + 2068));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 1044u, (r29 + 2072));
        }
    }
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r3);
    r0 = (r0 ^ -2147483648);
    r3 = MemoryInline::FlatRead8((r25 + 2084));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8088C68C:
{
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f31.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = PPC_Fctiwz(f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 56), f1.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f0.d);
    r12 = fctiwzword0;
    r24 = fctiwzword1;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8088C6EC;
    }
}

loc_8088C6C4:
{
}

loc_8088C6C8:
{
    if ((static_cast<int32_t>(r14) == static_cast<int32_t>(0))) {
        goto loc_8088C6EC;
    }
}

loc_8088C6CC:
{
    r0 = MemoryInline::FlatRead32((r25 + 2088));
}

loc_8088C6D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r12))) {
        goto loc_8088C6EC;
    }
}

loc_8088C6D8:
{
    r0 = MemoryInline::FlatRead32((r25 + 2092));
}

loc_8088C6E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r24))) {
        goto loc_8088C6EC;
    }
}

loc_8088C6E4:
{
    r30 = (r30 + 1);
    goto loc_8088CAFC;
}

loc_8088C6EC:
{
    r0 = MemoryInline::FlatRead32((r25 + 2076));
}

loc_8088C6F4:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r19 = (r27 + r0);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8088C9CC;
    }
}

loc_8088C700:
{
    MemoryInline::FlatWrite8((r25 + 2084), static_cast<uint8_t>(r26));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 1032u, (r29 + 2060));
    r6 = MemoryInline::FlatRead32((r25 + 2088));
    r5 = MemoryInline::FlatRead32((r25 + 2092));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8088C714:
{
    MemoryInline::FlatWriteRam32((r1 + 24), r6);
    r0 = MemoryInline::FlatRead32((r25 + 2076));
    MemoryInline::FlatWriteRam32((r1 + 28), r5);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8088C808;
    }
}

loc_8088C724:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & -16);
    r8 = 0;
    r11 = (r27 + r0);
    r3 = MemoryInline::FlatRead32((r11 + 12));
    r15 = MemoryInline::FlatRead32((r11 + 8));
    r4 = (static_cast<int32_t>(r3) >> 1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r15);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r15) >> 1);
    r10 = (r5 - r4);
    r9 = (r6 - r0);
    goto loc_8088C800;
}

loc_8088C74C:
{
    r7 = (r10 + r8);
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(0))) {
        goto loc_8088C7FC;
    }
}

loc_8088C754:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 1044u, (r29 + 2072));
}

loc_8088C75C:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r0))) {
        goto loc_8088C7FC;
    }
}

loc_8088C760:
{
    r6 = (r8 * r15);
    r15 = MemoryInline::FlatRead32((r11 + 8));
    r5 = 0;
    ctr = r15;
}

loc_8088C774:
{
    if ((static_cast<int32_t>(r15) <= static_cast<int32_t>(0))) {
        goto loc_8088C7FC;
    }
}

loc_8088C778:
{
    r4 = (r9 + r5);
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_8088C7F4;
    }
}

loc_8088C780:
{
    r16 = MemoryInline::ReadResolved32(guest_range_1, 1040u, (r29 + 2068));
}

loc_8088C788:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r16))) {
        goto loc_8088C7F4;
    }
}

loc_8088C78C:
{
    r17 = MemoryInline::FlatRead32(r11);
    r0 = (r6 + r5);
    r17_addr_4 = (r17 + r0);
    r0 = MemoryInline::FlatRead8(r17_addr_4);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_7 & 1);
}

loc_8088C79C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8088C7F4;
    }
}

loc_8088C7A0:
{
    r17 = MemoryInline::ReadResolved32(guest_range_1, 1032u, (r29 + 2060));
}

loc_8088C7A8:
{
    if ((static_cast<int32_t>(r17) == static_cast<int32_t>(0))) {
        goto loc_8088C7F4;
    }
}

loc_8088C7AC:
{
    r21 = MemoryInline::ReadResolved32(guest_range_1, 1044u, (r29 + 2072));
    r0 = (r7 & 65535);
    r20 = (r4 & 3);
    r18_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r18 = (r18_rot_4 & 65520);
    r21 = (r21 + -1);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(2));
    r4 = (r4_rot_4 & 65532);
    r21 = (r21 - r0);
    r0 = (r20 + r18);
    r16_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(2));
    r16 = (r16_rot_4 & 12);
    r18 = (r16 + r0);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(30));
    r0 = (r0_rot_8 & 16383);
    r16 = PPC_Divw(static_cast<int32_t>(r18), static_cast<int32_t>(r4));
    r16 = (r16 * r4);
    r0 = (r0 * r4);
    r4 = (r18 - r16);
    r0 = (r4 + r0);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & 131070);
    r17_addr_5 = (r17 + r0);
    MemoryInline::FlatWrite16(r17_addr_5, static_cast<uint16_t>(r26));
}

loc_8088C7F4:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8088C778;
    }
}

loc_8088C7FC:
{
    r8 = (r8 + 1);
}

loc_8088C800:
{
}

loc_8088C804:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(r3))) {
        goto loc_8088C74C;
    }
}

loc_8088C808:
{
    r18 = 0;
    r31 = (r31 + 1);
    goto loc_8088C9BC;
}

loc_8088C814:
{
    r0 = (r18 & 255);
    r0 = (r0 * 20);
    r5 = (r29 + r0);
    r0 = MemoryInline::FlatRead8((r5 + 2084));
}

loc_8088C828:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8088C9B8;
    }
}

loc_8088C82C:
{
    r3 = MemoryInline::FlatRead32((r5 + 2088));
    r0 = MemoryInline::FlatRead32((r25 + 2088));
    r6 = MemoryInline::FlatRead32((r25 + 2092));
    r4 = (r0 - r3);
    r0 = MemoryInline::FlatRead32((r5 + 2092));
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r4);
    r6 = (r6 - r0);
    r7 = MemoryInline::FlatRead32((r5 + 2076));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    r6 = (r6 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 52), r6);
    r4_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(4));
    r4 = (r4_rot_9 & -16);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    r17 = (r27 + r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r4 = MemoryInline::FlatRead32((r19 + 8));
    f1.d = std::fabs(f1.d);
    r22 = MemoryInline::FlatRead32((r17 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    r4 = (r4 + r22);
    f0.d = PPC_Fctiwz(f1.d);
    f1.d = std::fabs(f2.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f0.d);
    f0.d = PPC_Fctiwz(f1.d);
    r6 = fctiwzword2;
    MemoryInline::FlatWriteRamFloat64((r1 + 56), f0.d);
}

loc_8088C89C:
{
    r7 = MemoryInline::FlatRead32((r1 + 60));
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r6))) {
        goto loc_8088C9B8;
    }
}

loc_8088C8A4:
{
    r6 = MemoryInline::FlatRead32((r19 + 12));
    r4 = MemoryInline::FlatRead32((r17 + 12));
    r6 = (r6 + r4);
}

loc_8088C8B4:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r7))) {
        goto loc_8088C9B8;
    }
}

loc_8088C8B8:
{
    r6 = MemoryInline::ReadResolved32(guest_range_1, 1032u, (r29 + 2060));
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
}

loc_8088C8C4:
{
    r5 = MemoryInline::FlatRead32((r5 + 2080));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8088C9B4;
    }
}

loc_8088C8D0:
{
    r7 = (static_cast<int32_t>(r4) >> 1);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
    r5 = (r5_rot_3 & -32);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r22);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r6 = (static_cast<int32_t>(r22) >> 1);
    r9 = 0;
    r11 = (r0 - r7);
    r23 = (r28 + r5);
    r10 = (r3 - r6);
    goto loc_8088C9AC;
}

loc_8088C8F0:
{
    r8 = (r11 + r9);
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(0))) {
        goto loc_8088C9A8;
    }
}

loc_8088C8F8:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 1044u, (r29 + 2072));
}

loc_8088C900:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r0))) {
        goto loc_8088C9A8;
    }
}

loc_8088C904:
{
    r7 = (r9 * r22);
    r22 = MemoryInline::FlatRead32((r17 + 8));
    r6 = 0;
    ctr = r22;
}

loc_8088C918:
{
    if ((static_cast<int32_t>(r22) <= static_cast<int32_t>(0))) {
        goto loc_8088C9A8;
    }
}

loc_8088C91C:
{
    r16 = (r10 + r6);
    if ((static_cast<int32_t>(r16) < static_cast<int32_t>(0))) {
        goto loc_8088C9A0;
    }
}

loc_8088C924:
{
    r21 = MemoryInline::ReadResolved32(guest_range_1, 1040u, (r29 + 2068));
}

loc_8088C92C:
{
    if ((static_cast<int32_t>(r16) >= static_cast<int32_t>(r21))) {
        goto loc_8088C9A0;
    }
}

loc_8088C930:
{
    r3 = MemoryInline::FlatRead32(r17);
    r0 = (r7 + r6);
    r3_addr_5 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_5);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_16 & 1);
}

loc_8088C940:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8088C9A0;
    }
}

loc_8088C944:
{
    r20 = MemoryInline::ReadResolved32(guest_range_1, 1032u, (r29 + 2060));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_17 & 30);
    r23_addr_5 = (r23 + r0);
    r5 = MemoryInline::FlatRead16(r23_addr_5);
}

loc_8088C954:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_8088C9A0;
    }
}

loc_8088C958:
{
    r3 = MemoryInline::ReadResolved32(guest_range_1, 1044u, (r29 + 2072));
    r15 = (r16 & 3);
    r0 = (r8 & 65535);
    r16_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(2));
    r16 = (r16_rot_11 & 65520);
    r3 = (r3 + -1);
    r21_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(2));
    r21 = (r21_rot_5 & 65532);
    r0 = (r3 - r0);
    r3 = (r15 + r16);
    r15_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r15 = (r15_rot_5 & 12);
    r3 = (r15 + r3);
    r15_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r15 = (r15_rot_6 & 16383);
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r21));
    r0 = (r0 * r21);
    r15 = (r15 * r21);
    r0 = (r3 - r0);
    r0 = (r0 + r15);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_18 & 131070);
    r20_addr_5 = (r20 + r0);
    MemoryInline::FlatWrite16(r20_addr_5, static_cast<uint16_t>(r5));
}

loc_8088C9A0:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8088C91C;
    }
}

loc_8088C9A8:
{
    r9 = (r9 + 1);
}

loc_8088C9AC:
{
}

loc_8088C9B0:
{
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(r4))) {
        goto loc_8088C8F0;
    }
}

loc_8088C9B4:
{
    r31 = (r31 + 1);
}

loc_8088C9B8:
{
    r18 = (r18 + 1);
}

loc_8088C9BC:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r29 + 1028));
    r3 = (r18 & 255);
}

loc_8088C9C8:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8088C814;
    }
}

loc_8088C9CC:
{
}

loc_8088C9D0:
{
    if ((static_cast<int32_t>(r14) == static_cast<int32_t>(0))) {
        goto loc_8088CAF8;
    }
}

loc_8088C9D4:
{
    MemoryInline::FlatWrite32((r25 + 2088), r12);
    r0 = 1;
    MemoryInline::FlatWrite32((r25 + 2092), r24);
    MemoryInline::FlatWrite8((r25 + 2084), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 1032u, (r29 + 2060));
    MemoryInline::FlatWriteRam32((r1 + 8), r12);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8088C9F0:
{
    r3 = MemoryInline::FlatRead32((r25 + 2080));
    MemoryInline::FlatWriteRam32((r1 + 12), r24);
    r0 = MemoryInline::FlatRead32((r25 + 2076));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8088CAF4;
    }
}

loc_8088CA00:
{
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_24 & -16);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(5));
    r3 = (r3_rot_2 & -32);
    r11 = (r27 + r0);
    r8 = 0;
    r0 = MemoryInline::FlatRead32((r11 + 12));
    r14 = (r28 + r3);
    r15 = MemoryInline::FlatRead32((r11 + 8));
    r4 = (static_cast<int32_t>(r0) >> 1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r15);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r15) >> 1);
    r10 = (r24 - r4);
    r9 = (r12 - r3);
    goto loc_8088CAEC;
}

loc_8088CA30:
{
    r7 = (r10 + r8);
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(0))) {
        goto loc_8088CAE8;
    }
}

loc_8088CA38:
{
    r3 = MemoryInline::ReadResolved32(guest_range_1, 1044u, (r29 + 2072));
}

loc_8088CA40:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r3))) {
        goto loc_8088CAE8;
    }
}

loc_8088CA44:
{
    r6 = (r8 * r15);
    r15 = MemoryInline::FlatRead32((r11 + 8));
    r5 = 0;
    ctr = r15;
}

loc_8088CA58:
{
    if ((static_cast<int32_t>(r15) <= static_cast<int32_t>(0))) {
        goto loc_8088CAE8;
    }
}

loc_8088CA5C:
{
    r20 = (r9 + r5);
    if ((static_cast<int32_t>(r20) < static_cast<int32_t>(0))) {
        goto loc_8088CAE0;
    }
}

loc_8088CA64:
{
    r3 = MemoryInline::ReadResolved32(guest_range_1, 1040u, (r29 + 2068));
}

loc_8088CA6C:
{
    if ((static_cast<int32_t>(r20) >= static_cast<int32_t>(r3))) {
        goto loc_8088CAE0;
    }
}

loc_8088CA70:
{
    r12 = MemoryInline::FlatRead32(r11);
    r4 = (r6 + r5);
    r12_addr_4 = (r12 + r4);
    r16 = MemoryInline::FlatRead8(r12_addr_4);
    r4_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(29));
    r4 = (r4_rot_14 & 1);
}

loc_8088CA80:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8088CAE0;
    }
}

loc_8088CA84:
{
    r12 = MemoryInline::ReadResolved32(guest_range_1, 1032u, (r29 + 2060));
    r4_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(29));
    r4 = (r4_rot_15 & 30);
    r14_addr_4 = (r14 + r4);
    r4 = MemoryInline::FlatRead16(r14_addr_4);
}

loc_8088CA94:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_8088CAE0;
    }
}

loc_8088CA98:
{
    r18 = MemoryInline::ReadResolved32(guest_range_1, 1044u, (r29 + 2072));
    r19 = (r7 & 65535);
    r17 = (r20 & 3);
    r16_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(2));
    r16 = (r16_rot_19 & 65520);
    r18 = (r18 + -1);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_5 & 65532);
    r19 = (r18 - r19);
    r16 = (r17 + r16);
    r17_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r19), static_cast<uint32_t>(2));
    r17 = (r17_rot_4 & 12);
    r18 = (r17 + r16);
    r16_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r19), static_cast<uint32_t>(30));
    r16 = (r16_rot_20 & 16383);
    r17 = PPC_Divw(static_cast<int32_t>(r18), static_cast<int32_t>(r3));
    r17 = (r17 * r3);
    r3 = (r16 * r3);
    r16 = (r18 - r17);
    r3 = (r16 + r3);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 131070);
    r12_addr_5 = (r12 + r3);
    MemoryInline::FlatWrite16(r12_addr_5, static_cast<uint16_t>(r4));
}

loc_8088CAE0:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8088CA5C;
    }
}

loc_8088CAE8:
{
    r8 = (r8 + 1);
}

loc_8088CAEC:
{
}

loc_8088CAF0:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(r0))) {
        goto loc_8088CA30;
    }
}

loc_8088CAF4:
{
    r31 = (r31 + 1);
}

loc_8088CAF8:
{
    r30 = (r30 + 1);
}

loc_8088CAFC:
{
    r3 = MemoryInline::FlatRead32((r1 + 72));
    r30 = (r30 + 1);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r29 + 1028));
    r3 = (r3 + 1);
    r0_subfc_sub_2 = r0;
    r0 = (r3 - r0_subfc_sub_2);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0_subfc_sub_2) ? 1u : 0u) << 29);
    r0_subfe_rb_2 = r0;
    r0_not_2 = ~(r0);
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r0_not_2 + r0_subfe_rb_2);
    r0 = (r0 + r0_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_subfe_rb_2)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0 = (r3 & r0);
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
}

loc_8088CB1C:
{
    r3 = 0x808E0000u;
    r0 = MemoryInline::FlatRead32((r3 + -11328));
}

loc_8088CB28:
{
    if ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(r0))) {
        goto loc_8088CB38;
    }
}

loc_8088CB2C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r29 + 1028), 0, 1048u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r29 + 1028));
}

loc_8088CB34:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r0))) {
        goto loc_8088C5FC;
    }
}

loc_8088CB38:
{
    r3 = MemoryInline::FlatRead32((r29 + 2060));
    r0 = MemoryInline::FlatRead32((r1 + 72));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8088CB44:
{
    MemoryInline::FlatWrite32((r29 + 7196), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8088CB54;
    }
}

loc_8088CB4C:
{
    r4 = MemoryInline::FlatRead32((r29 + 2064));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A16B8u>(ctx);
}

loc_8088CB54:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 160);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 160));
    // inline leaf 0x800215B8 (19 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -72));
            r15 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 56u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 64u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 68u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215B8
    r0 = MemoryInline::FlatRead32((r1 + 180));
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFDFFB gpr_write=0xFFFFDFFB gpr_return=0x00000018 fpr_read=0x8000001F fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8088C5A0 func_8088C5A0 preserves=false fpr_mask=0x80000000
