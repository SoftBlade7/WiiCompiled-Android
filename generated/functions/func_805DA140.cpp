#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805DA140(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
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
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r21_rot_0 = 0;
    uint32_t r21_rot_1 = 0;
    uint32_t r21_rot_2 = 0;
    uint32_t r21_rot_3 = 0;
    uint32_t r21_rot_4 = 0;
    uint32_t r21_rot_5 = 0;
    uint32_t r21_rot_6 = 0;
    uint32_t r21_rot_7 = 0;
    uint32_t r21_rot_8 = 0;
    uint32_t r22_rot_0 = 0;
    uint32_t r22_rot_1 = 0;
    uint32_t r22_rot_2 = 0;
    uint32_t r23_rot_0 = 0;
    uint32_t r23_rot_1 = 0;
    uint32_t r23_rot_2 = 0;
    uint32_t r23_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
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
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
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
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805DA140;

loc_805DA140:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -224), 0, 232u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -224), r1);
    r1 = (r1 + -224);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 228u, (r1 + 228), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 208u, (r1 + 208), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 192u, (r1 + 192), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 176u, (r1 + 176), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 160u, (r1 + 160), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 144u, (r1 + 144), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    r11 = (r1 + 144);
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
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r4 = 1127219200;
    r28 = 0x80890000u;
    MemoryInline::WriteResolved32(guest_range_2, 64u, (r1 + 64), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_805DA190:
{
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 72), r4);
    r28 = (r28 + 18400);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DAC00;
    }
}

loc_805DA1A0:
{
    r0 = MemoryInline::FlatRead8((r3 + 10816));
}

loc_805DA1A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805DA1B8;
    }
}

loc_805DA1AC:
{
    r4 = MemoryInline::FlatRead32((r3 + 10812));
    f1.d = MemoryInline::FlatReadFloat32(r28);
    // inline leaf 0x80602488 (7 guest instruction(s))
}

loc_inl1_0x80602488:
{
}

loc_inl1_0x8060248C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(-1))) {
        goto loc_inl1_0x80602494;
    }
}

loc_inl1_0x80602490:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
}

loc_inl1_0x80602494:
{
    r0 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 24), f1.d);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
}

loc_inl1_cont_80602488:
{
    // end of inlined leaf 0x80602488
}

loc_805DA1B8:
{
    f28.d = MemoryInline::FlatReadFloat64((r28 + 320));
    r20 = 0;
    f27.d = MemoryInline::FlatReadFloat32((r28 + 312));
    r25 = 0;
    r27 = 0x809C0000u;
    r26 = 1;
    r18 = -1;
    goto loc_805DA2E0;
}

loc_805DA1D8:
{
    r5 = MemoryInline::FlatRead32((r27 + 8408));
    r3 = (r29 + r20);
    r21 = MemoryInline::FlatRead8((r3 + 10972));
    r0 = MemoryInline::FlatRead32((r5 + 10524));
    r23_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(31));
    r23 = (r23_rot_2 & 255);
    r0 = (r0 * 88);
    r4 = PPC_Slw(static_cast<uint32_t>(r26), static_cast<uint32_t>(r23));
    r3 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 72));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805DA2DC;
    }
}

loc_805DA204:
{
    r0 = (r21 * 416);
    r4 = 4;
    r3 = (r29 + r0);
    r3 = (r3 + 608);
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r19 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805DA224:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DA234;
    }
}

loc_805DA228:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_805DA22C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DA270;
    }
}

loc_805DA230:
{
    goto loc_805DA27C;
}

loc_805DA234:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // inline leaf 0x800829D0 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3 = MemoryInline::FlatRead16((r3 + 8));
    // end of inlined leaf 0x800829D0
    r0 = (r3 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f0.d = MemoryInline::FlatReadFloat32((r19 + 60));
    r3 = r19;
    f1.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r4 = 3;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f28.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f27.d - f0.d));
    ctx->lr = 0x805DA26Cu;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063CA98u>(ctx);
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
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805DA27C;
}

loc_805DA270:
{
    f1.d = MemoryInline::FlatReadFloat32(r28);
    r4 = 3;
    ctx->lr = 0x805DA27Cu;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063C91Cu>(ctx);
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
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805DA27C:
{
    r4 = r21;
    r3 = (r29 + 10820);
    ctx->lr = 0x805DA288u;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805FAA84u>(ctx);
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
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r23;
    r3 = (r29 + 11016);
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
    ctx->cr = cr;
    InvokeDirectCpu<0x805DB278u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    cr = ctx->cr;
    r3 = (r29 + r23);
    r4 = r20;
    MemoryInline::FlatWrite8((r3 + 11001), static_cast<uint8_t>(r25));
    goto loc_805DA2B4;
}

loc_805DA2A4:
{
    r3 = (r29 + r4);
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead8((r3 + 10973));
    MemoryInline::FlatWrite8((r3 + 10972), static_cast<uint8_t>(r0));
}

loc_805DA2B4:
{
    r3 = MemoryInline::FlatRead32((r29 + 10984));
    r0 = (r3 + -1);
}

loc_805DA2C0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_805DA2A4;
    }
}

loc_805DA2C4:
{
    r3 = (r29 + r3);
    MemoryInline::FlatWrite8((r3 + 10971), static_cast<uint8_t>(r18));
    r3 = MemoryInline::FlatRead32((r29 + 10984));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r29 + 10984), r0);
    goto loc_805DA2E0;
}

loc_805DA2DC:
{
    r20 = (r20 + 1);
}

loc_805DA2E0:
{
    r0 = MemoryInline::FlatRead32((r29 + 10984));
}

loc_805DA2E8:
{
    if ((static_cast<int32_t>(r20) < static_cast<int32_t>(r0))) {
        goto loc_805DA1D8;
    }
}

loc_805DA2EC:
{
    r19 = 0x80890000u;
    f27.d = MemoryInline::FlatReadFloat64((r28 + 304));
    f28.d = MemoryInline::FlatReadFloat32((r28 + 296));
    r19 = (r19 + 19268);
    f29.d = MemoryInline::FlatReadFloat32((r28 + 300));
    r20 = 0;
    f30.d = MemoryInline::FlatReadFloat32((r28 + 292));
    r18 = 0;
    f31.d = MemoryInline::FlatReadFloat32(r28);
    r26 = 0x809C0000u;
    r25 = 1;
}

loc_805DA318:
{
    r5 = MemoryInline::FlatRead32((r26 + 8408));
    r4 = (r20 & 255);
    r3 = PPC_Slw(static_cast<uint32_t>(r25), static_cast<uint32_t>(r4));
    r0 = MemoryInline::FlatRead32((r5 + 10524));
    r0 = (r0 * 88);
    r6 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r6 + 72));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805DA4B4;
    }
}

loc_805DA33C:
{
    r0 = MemoryInline::FlatRead32((r29 + 10984));
    r7 = 0;
    r8 = 0;
    ctr = r0;
}

loc_805DA350:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_805DA378;
    }
}

loc_805DA354:
{
    r3 = (r29 + r8);
    r0 = MemoryInline::FlatRead8((r3 + 10972));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_6 & 255);
}

loc_805DA364:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_805DA370;
    }
}

loc_805DA368:
{
    r7 = 1;
    goto loc_805DA378;
}

loc_805DA370:
{
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805DA354;
    }
}

loc_805DA378:
{
}

loc_805DA37C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_805DA4B4;
    }
}

loc_805DA380:
{
    r0 = MemoryInline::FlatRead8((r6 + 89));
    r3 = (r20 & 255);
}

loc_805DA38C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_805DA3A4;
    }
}

loc_805DA390:
{
    r0 = MemoryInline::FlatRead32((r5 + 10524));
    r0 = (r0 * 88);
    r3 = (r5 + r0);
    r27 = MemoryInline::FlatRead8((r3 + 88));
    goto loc_805DA3BC;
}

loc_805DA3A4:
{
    r0 = MemoryInline::FlatRead32((r5 + 10524));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & 1020);
    r0 = (r0 * 88);
    r0 = (r5 + r0);
    r3 = (r3 + r0);
    r27 = MemoryInline::FlatRead8((r3 + 91));
}

loc_805DA3BC:
{
    r21_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(1));
    r21 = (r21_rot_2 & 510);
    r22 = 0;
    goto loc_805DA4AC;
}

loc_805DA3C8:
{
    r0 = MemoryInline::FlatRead32((r29 + 10984));
    r3 = (r22 & 255);
    r5 = (r3 + r21);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f30.d);
    r3 = (r29 + r0);
    r4 = 4;
    MemoryInline::FlatWrite8((r3 + 10972), static_cast<uint8_t>(r5));
    r0 = (r5 & 255);
    r0 = (r0 * 416);
    r3 = MemoryInline::FlatRead32((r29 + 10984));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f30.d);
    r5 = (r3 + 1);
    r6 = (r5 + -1);
    r3 = (r29 + r0);
    r0 = (r6 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    r23 = (r3 + 456);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    r3 = (r23 + 152);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f27.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    MemoryInline::FlatWrite32((r29 + 10984), r5);
    f1.d = PpcFmulsInline(f28.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f27.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f31.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f29.d, f0.d);
    MemoryInline::FlatWriteFloat32((r23 + 408), f0.d);
    r5 = MemoryInline::FlatRead32((r23 + 404));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    MemoryInline::FlatWriteFloat32((r5 + 44), f0.d);
    MemoryInline::FlatWriteFloat32((r5 + 48), f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
    MemoryInline::FlatWriteFloat32((r5 + 52), f31.d);
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    f1.d = MemoryInline::FlatReadFloat32(r28);
    r4 = 1;
    ctx->lr = 0x805DA464u;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063C91Cu>(ctx);
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
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r23;
    r4 = (r19 + 399);
    r5 = (r19 + 405);
    ctx->lr = 0x805DA474u;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063E0F0u>(ctx);
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
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r23;
    r4 = (r19 + 416);
    r5 = (r19 + 431);
    ctx->lr = 0x805DA484u;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063E0F0u>(ctx);
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
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r23;
    r4 = (r19 + 442);
    r5 = (r19 + 457);
    ctx->lr = 0x805DA494u;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063E0F0u>(ctx);
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
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite8((r23 + 412), static_cast<uint8_t>(r18));
    r3 = r23;
    r4 = 58;
    r5 = -1;
    ctx->lr = 0x805DA4A8u;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8063D74Cu>(ctx);
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
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r22 = (r22 + 1);
}

loc_805DA4AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(r27));
}

loc_805DA4B0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805DA3C8;
    }
}

loc_805DA4B4:
{
    r20 = (r20 + 1);
}

loc_805DA4BC:
{
    if ((static_cast<uint32_t>(r20) < static_cast<uint32_t>(24))) {
        goto loc_805DA318;
    }
}

loc_805DA4C0:
{
    f4.d = MemoryInline::FlatReadFloat64((r28 + 304));
    r4 = 0;
    f2.d = MemoryInline::FlatReadFloat32((r28 + 296));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 300));
    goto loc_805DA520;
}

loc_805DA4D4:
{
    r3 = (r3 + -1);
    r0 = (r4 ^ -2147483648);
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 76), r3);
    r3 = (r29 + r4);
    r4 = (r4 + 1);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 72));
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    r0 = MemoryInline::FlatRead8((r3 + 10972));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    f3.d = PpcFmulsInline(f2.d, f3.d);
    r0 = (r0 * 416);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    r3 = (r29 + r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 864), f0.d);
}

loc_805DA520:
{
    r3 = MemoryInline::FlatRead32((r29 + 10984));
}

loc_805DA528:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r3))) {
        goto loc_805DA4D4;
    }
}

loc_805DA52C:
{
    r23 = 0x809C0000u;
    r19 = 0;
    r23 = (r23 + 7180);
    r27 = 0x809C0000u;
    r26 = 0x809C0000u;
    r28 = 0x809C0000u;
    r25 = 1;
}

loc_805DA548:
{
    r4 = MemoryInline::FlatRead32((r26 + 8408));
    r3 = (r19 & 255);
    r20 = PPC_Slw(static_cast<uint32_t>(r25), static_cast<uint32_t>(r3));
    r0 = MemoryInline::FlatRead32((r4 + 10524));
    r0 = (r0 * 88);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 72));
    r0 = (r20 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805DA6C8;
    }
}

loc_805DA56C:
{
    r0 = MemoryInline::FlatRead8((r4 + 89));
}

loc_805DA574:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_805DA580;
    }
}

loc_805DA578:
{
    r24 = MemoryInline::FlatRead8((r4 + 88));
    goto loc_805DA58C;
}

loc_805DA580:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r19), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & 1020);
    r3 = (r0 + r4);
    r24 = MemoryInline::FlatRead8((r3 + 91));
}

loc_805DA58C:
{
    r21_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r19), static_cast<uint32_t>(1));
    r21 = (r21_rot_5 & 510);
    r18 = 0;
    goto loc_805DA6C0;
}

loc_805DA598:
{
    r0 = (r18 & 255);
    r3 = (r29 + 10820);
    r0 = (r0 + r21);
    r22 = (r0 & 255);
    r4 = r22;
    // inline leaf 0x805FA930 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r3_addr_6 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_6);
    // end of inlined leaf 0x805FA930
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_14 & 1);
}

loc_805DA5BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805DA6BC;
    }
}

loc_805DA5C0:
{
    r3 = MemoryInline::FlatRead32((r26 + 8408));
    r5 = (r19 & 255);
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 89));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_805DA5DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DA600;
    }
}

loc_805DA5E0:
{
    r4 = MemoryInline::FlatRead32((r27 + 7736));
    r5 = r18;
    r6 = r22;
    r3 = (r29 + 10820);
    r4 = MemoryInline::FlatRead32((r4 + 152));
    r4 = (r4 + 568);
    ctx->lr = 0x805DA5FCu;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805FAF34u>(ctx);
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
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805DA6BC;
}

loc_805DA600:
{
    r3 = MemoryInline::FlatRead32((r28 + 8456));
    r0 = MemoryInline::FlatRead32((r3 + 2528));
    r0 = (r20 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DA6BC;
    }
}

loc_805DA610:
{
    r4 = r22;
    r3 = (r29 + 10820);
    r6 = (r18 & 255);
    ctx->lr = 0x805DA620u;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805FA8B8u>(ctx);
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
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r18), static_cast<int32_t>(0));
}

loc_805DA624:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DA6BC;
    }
}

loc_805DA628:
{
    r3 = MemoryInline::FlatRead32((r27 + 7736));
    r4 = (r19 & 255);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 1028));
    ctx->lr = 0x805DA63Cu;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805D2D44u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805DA640:
{
    r22 = r3;
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_805DA6BC;
    }
}

loc_805DA648:
{
    r3 = MemoryInline::FlatRead32((r27 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r17 = MemoryInline::FlatRead32((r3 + 608));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r17), static_cast<int32_t>(0));
}

loc_805DA658:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DA664;
    }
}

loc_805DA65C:
{
    r17 = 0;
    goto loc_805DA6B0;
}

loc_805DA664:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DA6AC;
    }
}

loc_805DA668:
{
    r12 = MemoryInline::FlatRead32(r17);
    r3 = r17;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805DA67Cu;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805DA694;
}

loc_805DA680:
{
}

loc_805DA684:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r23))) {
        goto loc_805DA690;
    }
}

loc_805DA688:
{
    r0 = 1;
    goto loc_805DA6A0;
}

loc_805DA690:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805DA694:
{
}

loc_805DA698:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805DA680;
    }
}

loc_805DA69C:
{
    r0 = 0;
}

loc_805DA6A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805DA6A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DA6AC;
    }
}

loc_805DA6A8:
{
    goto loc_805DA6B0;
}

loc_805DA6AC:
{
    r17 = 0;
}

loc_805DA6B0:
{
    r3 = r17;
    r4 = r22;
    ctx->lr = 0x805DA6BCu;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805D4C8Cu>(ctx);
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
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805DA6BC:
{
    r18 = (r18 + 1);
}

loc_805DA6C0:
{
}

loc_805DA6C4:
{
    if ((static_cast<int32_t>(r18) < static_cast<int32_t>(r24))) {
        goto loc_805DA598;
    }
}

loc_805DA6C8:
{
    r19 = (r19 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r19), static_cast<uint32_t>(12));
}

loc_805DA6D0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805DA548;
    }
}

loc_805DA6D4:
{
    r3 = (r29 + 11016);
    ctx->lr = 0x805DA6DCu;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805DAF38u>(ctx);
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
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r29 + 10988));
}

loc_805DA6E4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_805DA6F0;
    }
}

loc_805DA6E8:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 10988), r0);
}

loc_805DA6F0:
{
    r0 = MemoryInline::FlatRead8((r29 + 10992));
}

loc_805DA6F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805DA804;
    }
}

loc_805DA6FC:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8408));
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 139));
}

loc_805DA718:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805DA740;
    }
}

loc_805DA71C:
{
    r0 = MemoryInline::FlatRead32((r4 + 64));
}

loc_805DA724:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_805DA740;
    }
}

loc_805DA728:
{
    r0 = MemoryInline::FlatRead8((r4 + 90));
}

loc_805DA730:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805DA740;
    }
}

loc_805DA734:
{
    r0 = MemoryInline::FlatRead32((r4 + 72));
    r0 = (r0 & 1);
}

loc_805DA73C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805DA760;
    }
}

loc_805DA740:
{
    r0 = MemoryInline::FlatRead32((r29 + 10988));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(180));
}

loc_805DA748:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805DAC00;
    }
}

loc_805DA74C:
{
    r3 = 1;
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 10816), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite32((r29 + 10812), r0);
    goto loc_805DAC00;
}

loc_805DA760:
{
    r0 = MemoryInline::FlatRead32((r29 + 10988));
}

loc_805DA768:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(5400))) {
        goto loc_805DA7FC;
    }
}

loc_805DA76C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r17 = MemoryInline::FlatRead32((r3 + 636));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r17), static_cast<int32_t>(0));
}

loc_805DA780:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DA78C;
    }
}

loc_805DA784:
{
    r17 = 0;
    goto loc_805DA7E0;
}

loc_805DA78C:
{
    r18 = 0x809C0000u;
    r18 = (r18 + 7208);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DA7DC;
    }
}

loc_805DA798:
{
    r12 = MemoryInline::FlatRead32(r17);
    r3 = r17;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805DA7ACu;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805DA7C4;
}

loc_805DA7B0:
{
}

loc_805DA7B4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r18))) {
        goto loc_805DA7C0;
    }
}

loc_805DA7B8:
{
    r0 = 1;
    goto loc_805DA7D0;
}

loc_805DA7C0:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805DA7C4:
{
}

loc_805DA7C8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805DA7B0;
    }
}

loc_805DA7CC:
{
    r0 = 0;
}

loc_805DA7D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805DA7D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DA7DC;
    }
}

loc_805DA7D8:
{
    goto loc_805DA7E0;
}

loc_805DA7DC:
{
    r17 = 0;
}

loc_805DA7E0:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r17 + 3516), r0);
    r3 = 1;
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 10816), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite32((r29 + 10812), r0);
    goto loc_805DAC00;
}

loc_805DA7FC:
{
    // inline leaf 0x806568F0 (6 guest instruction(s))
}

loc_inl6_0x806568F0:
{
    r0 = MemoryInline::FlatRead32((r3 + 236));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_inl6_0x806568F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x806568FC:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 236), r0);
    goto loc_inl6_cont_806568F0;
}

loc_inl6_return:
{
}

loc_inl6_cont_806568F0:
{
    // end of inlined leaf 0x806568F0
    goto loc_805DAC00;
}

loc_805DA804:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r20 = MemoryInline::FlatRead32((r3 + 604));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r20), static_cast<int32_t>(0));
}

loc_805DA818:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DA824;
    }
}

loc_805DA81C:
{
    r20 = 0;
    goto loc_805DA878;
}

loc_805DA824:
{
    r18 = 0x809C0000u;
    r18 = (r18 + 7264);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DA874;
    }
}

loc_805DA830:
{
    r12 = MemoryInline::FlatRead32(r20);
    r3 = r20;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805DA844u;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805DA85C;
}

loc_805DA848:
{
}

loc_805DA84C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r18))) {
        goto loc_805DA858;
    }
}

loc_805DA850:
{
    r0 = 1;
    goto loc_805DA868;
}

loc_805DA858:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805DA85C:
{
}

loc_805DA860:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805DA848;
    }
}

loc_805DA864:
{
    r0 = 0;
}

loc_805DA868:
{
}

loc_805DA86C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805DA874;
    }
}

loc_805DA870:
{
    goto loc_805DA878;
}

loc_805DA874:
{
    r20 = 0;
}

loc_805DA878:
{
    r0 = MemoryInline::FlatRead8((r29 + 10992));
    r17 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805DA884:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_805DA8F8;
    }
}

loc_805DA888:
{
    r0 = MemoryInline::FlatRead32((r29 + 11256));
}

loc_805DA890:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_805DA8B4;
    }
}

loc_805DA894:
{
    r0 = MemoryInline::FlatRead32((r29 + 10988));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3600));
}

loc_805DA89C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805DA8F8;
    }
}

loc_805DA8A0:
{
    r3 = r20;
    ctx->lr = 0x805DA8A8u;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805E5FE8u>(ctx);
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
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = -1;
    MemoryInline::FlatWrite32((r29 + 10988), r0);
    goto loc_805DA8F8;
}

loc_805DA8B4:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_805DA8CC;
    }
}

loc_805DA8B8:
{
    r0 = MemoryInline::FlatRead32((r29 + 10988));
}

loc_805DA8C0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(90))) {
        goto loc_805DA8F8;
    }
}

loc_805DA8C4:
{
    r17 = 1;
    goto loc_805DA8F8;
}

loc_805DA8CC:
{
}

loc_805DA8D0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(12))) {
        goto loc_805DA8E8;
    }
}

loc_805DA8D4:
{
    r0 = MemoryInline::FlatRead32((r29 + 10988));
}

loc_805DA8DC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(180))) {
        goto loc_805DA8F8;
    }
}

loc_805DA8E0:
{
    r17 = 1;
    goto loc_805DA8F8;
}

loc_805DA8E8:
{
    r0 = MemoryInline::FlatRead32((r29 + 10988));
}

loc_805DA8F0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(120))) {
        goto loc_805DA8F8;
    }
}

loc_805DA8F4:
{
    r17 = 1;
}

loc_805DA8F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r17), static_cast<int32_t>(0));
}

loc_805DA8FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DAC00;
    }
}

loc_805DA900:
{
    r0 = MemoryInline::FlatRead32((r29 + 11256));
}

loc_805DA908:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_805DA95C;
    }
}

loc_805DA90C:
{
    r0 = MemoryInline::FlatRead32((r29 + 11016));
    r5 = r29;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r4 = 0;
    r31 = MemoryInline::FlatRead8((r29 + 11020));
    r30 = MemoryInline::FlatRead8((r29 + 11021));
    goto loc_805DA948;
}

loc_805DA928:
{
    r0 = MemoryInline::FlatRead32((r5 + 11024));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r5 + 11016), r0);
    r0 = MemoryInline::FlatRead8((r5 + 11028));
    MemoryInline::FlatWrite8((r5 + 11020), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 11029));
    MemoryInline::FlatWrite8((r5 + 11021), static_cast<uint8_t>(r0));
    r5 = (r5 + 8);
}

loc_805DA948:
{
    r3 = MemoryInline::FlatRead32((r29 + 11256));
    r0 = (r3 + -1);
}

loc_805DA954:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_805DA928;
    }
}

loc_805DA958:
{
    MemoryInline::FlatWrite32((r29 + 11256), r0);
}

loc_805DA95C:
{
    r0 = MemoryInline::FlatRead32((r1 + 28));
    r21_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r21 = (r21_rot_7 & 255);
}

loc_805DA968:
{
    if ((static_cast<uint32_t>(r21) != static_cast<uint32_t>(1))) {
        goto loc_805DAA20;
    }
}

loc_805DA96C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8408));
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 90));
}

loc_805DA988:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805DA998;
    }
}

loc_805DA98C:
{
    r0 = MemoryInline::FlatRead32((r3 + 72));
    r0 = (r0 & 1);
}

loc_805DA994:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805DAA20;
    }
}

loc_805DA998:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 10992), static_cast<uint8_t>(r0));
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r17 = MemoryInline::FlatRead32((r3 + 636));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r17), static_cast<int32_t>(0));
}

loc_805DA9B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DA9C0;
    }
}

loc_805DA9B8:
{
    r17 = 0;
    goto loc_805DAA14;
}

loc_805DA9C0:
{
    r18 = 0x809C0000u;
    r18 = (r18 + 7208);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DAA10;
    }
}

loc_805DA9CC:
{
    r12 = MemoryInline::FlatRead32(r17);
    r3 = r17;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805DA9E0u;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805DA9F8;
}

loc_805DA9E4:
{
}

loc_805DA9E8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r18))) {
        goto loc_805DA9F4;
    }
}

loc_805DA9EC:
{
    r0 = 1;
    goto loc_805DAA04;
}

loc_805DA9F4:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805DA9F8:
{
}

loc_805DA9FC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805DA9E4;
    }
}

loc_805DAA00:
{
    r0 = 0;
}

loc_805DAA04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805DAA08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DAA10;
    }
}

loc_805DAA0C:
{
    goto loc_805DAA14;
}

loc_805DAA10:
{
    r17 = 0;
}

loc_805DAA14:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r17 + 3516), r0);
    goto loc_805DAC00;
}

loc_805DAA20:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r21), static_cast<uint32_t>(2));
}

loc_805DAA24:
{
    r3 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DAA98;
    }
}

loc_805DAA2C:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 8408));
    r0 = MemoryInline::FlatRead32((r4 + 10524));
    r4 = (r4 + 89);
    r0 = (r0 * 88);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r0));
}

loc_805DAA48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DAA88;
    }
}

loc_805DAA4C:
{
    r4 = 0x809C0000u;
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r4 + 8456));
    r0 = (r31 * 192);
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r4 = (r1 + 40);
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 368));
    r5 = MemoryInline::FlatRead32((r5 + 372));
    MemoryInline::FlatWriteRam32((r1 + 44), r5);
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 1028));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805D23D8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    goto loc_805DAA98;
}

loc_805DAA88:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
}

loc_805DAA8C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DAA98;
    }
}

loc_805DAA90:
{
    r3 = (r29 + r30);
    r3 = MemoryInline::FlatRead8((r3 + 11001));
}

loc_805DAA98:
{
    r0 = MemoryInline::FlatRead32((r1 + 28));
    r4 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = (r1 + 20);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805DACB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r4 = 0x809C0000u;
    r5 = 0;
    r0 = -1;
    MemoryInline::FlatWriteRam16((r1 + 18), static_cast<uint16_t>(r5));
    r4 = MemoryInline::FlatRead32((r4 + 8408));
    r18 = r3;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r0 = MemoryInline::FlatRead32((r4 + 10524));
    r0 = (r0 * 88);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 89));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
}

loc_805DAAE0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DAB10;
    }
}

loc_805DAAE4:
{
    r19 = 0x809C0000u;
    r4 = (r1 + 18);
    r3 = MemoryInline::FlatRead32((r19 + -10424));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8054A9E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r19 + -10424));
    r4 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8054AA08u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r19 + -10424));
    r4 = (r1 + 24);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8054A9B8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    goto loc_805DAB38;
}

loc_805DAB10:
{
    r3 = 0x809C0000u;
    r0 = (r31 * 192);
    r3 = MemoryInline::FlatRead32((r3 + 8456));
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 380));
    MemoryInline::FlatWriteRam16((r1 + 18), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 382));
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 376));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
}

loc_805DAB38:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r21), static_cast<uint32_t>(1));
}

loc_805DAB3C:
{
    r17 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DAB60;
    }
}

loc_805DAB44:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r21), static_cast<uint32_t>(2));
}

loc_805DAB48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DAB68;
    }
}

loc_805DAB4C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r21), static_cast<uint32_t>(3));
}

loc_805DAB50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DAB70;
    }
}

loc_805DAB54:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r21), static_cast<uint32_t>(4));
}

loc_805DAB58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805DAB78;
    }
}

loc_805DAB5C:
{
    goto loc_805DAB7C;
}

loc_805DAB60:
{
    r17 = 2;
    goto loc_805DAB7C;
}

loc_805DAB68:
{
    r17 = 1;
    goto loc_805DAB7C;
}

loc_805DAB70:
{
    r17 = 0;
    goto loc_805DAB7C;
}

loc_805DAB78:
{
    r17 = 0;
}

loc_805DAB7C:
{
    r22_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
    r22 = (r22_rot_1 & 510);
    r3 = (r29 + 10820);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 254);
    // inline leaf 0x805FA930 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & -4);
    r3_addr_8 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_8);
    // end of inlined leaf 0x805FA930
    r19 = r3;
    r3 = (r29 + 10820);
    r4 = (r22 & 255);
    // inline leaf 0x805FA930 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_17 & -4);
    r3_addr_9 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_9);
    // end of inlined leaf 0x805FA930
    r0 = (r22 & 255);
    r4 = r3;
    r0 = (r0 * 416);
    r3 = r20;
    r8 = r18;
    r9 = r17;
    r5 = (r29 + r0);
    r10 = r19;
    r0 = (r5 + 828);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r5 = MemoryInline::FlatRead16((r1 + 18));
    r6 = MemoryInline::FlatRead16((r1 + 16));
    r7 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = 0x805DABD4u;
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805E5A0Cu>(ctx);
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
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
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
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805DABD8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 10988), r0);
    if ((static_cast<uint32_t>(r21) != static_cast<uint32_t>(2))) {
        goto loc_805DABF0;
    }
}

loc_805DABE4:
{
    r3 = (r29 + r31);
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 11001), static_cast<uint8_t>(r0));
}

loc_805DABF0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r21), static_cast<uint32_t>(1));
}

loc_805DABF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805DAC00;
    }
}

loc_805DABF8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 10992), static_cast<uint8_t>(r0));
}

loc_805DAC00:
{
    r0 = MemoryInline::FlatRead8((r29 + 10992));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_19 & 134217727);
    MemoryInline::FlatWrite8((r29 + 10568), static_cast<uint8_t>(r0));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 208));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 192));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 176));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::FlatReadFloat64((r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::FlatReadFloat64((r1 + 144));
    r11 = (r1 + 144);
    // inline leaf 0x800215C4 (16 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -60), 0, 60u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -60));
            r18 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -56));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -52));
            r20 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r11 + -4));
    // end of inlined leaf 0x800215C4
    r0 = MemoryInline::FlatRead32((r1 + 228));
    ctx->lr = r0;
    r1 = (r1 + 224);
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
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805DA140 func_805DA140 preserves=false fpr_mask=0xF8000000
