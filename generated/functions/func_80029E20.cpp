#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80029E20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t fctiwzword6 = 0;
    uint32_t fctiwzword7 = 0;
    uint32_t fctiwzword8 = 0;
    uint32_t fctiwzword9 = 0;
    uint32_t r0_addze_src_0 = 0;
    uint32_t r0_addze_src_1 = 0;
    uint32_t r0_addze_src_2 = 0;
    uint32_t r0_addze_src_3 = 0;
    uint32_t r0_addze_src_4 = 0;
    uint32_t r0_addze_src_5 = 0;
    uint32_t r0_addze_src_6 = 0;
    uint32_t r0_addze_src_7 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r0_ca_5 = 0;
    uint32_t r0_ca_6 = 0;
    uint32_t r0_ca_7 = 0;
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
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r10_rot_6 = 0;
    uint32_t r10_rot_7 = 0;
    uint32_t r10_rot_8 = 0;
    uint32_t r10_rot_9 = 0;
    uint32_t r11_addze_src_0 = 0;
    uint32_t r11_addze_src_1 = 0;
    uint32_t r11_addze_src_2 = 0;
    uint32_t r11_addze_src_3 = 0;
    uint32_t r11_addze_src_4 = 0;
    uint32_t r11_ca_0 = 0;
    uint32_t r11_ca_1 = 0;
    uint32_t r11_ca_2 = 0;
    uint32_t r11_ca_3 = 0;
    uint32_t r11_ca_4 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_10 = 0;
    uint32_t r11_rot_11 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r11_rot_4 = 0;
    uint32_t r11_rot_5 = 0;
    uint32_t r11_rot_6 = 0;
    uint32_t r11_rot_7 = 0;
    uint32_t r11_rot_8 = 0;
    uint32_t r11_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r27_addr_3 = 0;
    uint32_t r27_addr_4 = 0;
    uint32_t r27_addr_5 = 0;
    uint32_t r27_addr_6 = 0;
    uint32_t r27_addr_7 = 0;
    uint32_t r27_addr_8 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r9_addze_src_0 = 0;
    uint32_t r9_addze_src_1 = 0;
    uint32_t r9_addze_src_2 = 0;
    uint32_t r9_addze_src_3 = 0;
    uint32_t r9_addze_src_4 = 0;
    uint32_t r9_addze_src_5 = 0;
    uint32_t r9_addze_src_6 = 0;
    uint32_t r9_addze_src_7 = 0;
    uint32_t r9_ca_0 = 0;
    uint32_t r9_ca_1 = 0;
    uint32_t r9_ca_2 = 0;
    uint32_t r9_ca_3 = 0;
    uint32_t r9_ca_4 = 0;
    uint32_t r9_ca_5 = 0;
    uint32_t r9_ca_6 = 0;
    uint32_t r9_ca_7 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_10 = 0;
    uint32_t r9_rot_11 = 0;
    uint32_t r9_rot_12 = 0;
    uint32_t r9_rot_13 = 0;
    uint32_t r9_rot_14 = 0;
    uint32_t r9_rot_15 = 0;
    uint32_t r9_rot_16 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint32_t r9_rot_6 = 0;
    uint32_t r9_rot_7 = 0;
    uint32_t r9_rot_8 = 0;
    uint32_t r9_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;

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

    goto loc_80029E20;

loc_80029E20:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 128);
    // inline leaf 0x80021574 (17 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -64), r16);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -60), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x80021574
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 20u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, r3);
    r8 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 32), r8);
    r29 = r3;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(171));
}

loc_80029E50:
{
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 40), r8);
    r16 = r5;
    r31 = r6;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80029E70;
    }
}

loc_80029E64:
{
    r6 = r7;
    ctx->lr = 0x80029E6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8002E660u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    goto loc_8002B0D8;
}

loc_80029E70:
{
    r4 = 0x80270000u;
    r25 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r3 + 3));
    r4 = (r4 + 8936);
    r6 = 0x80270000u;
    r4_addr_1 = (r4 + r25);
    r9 = MemoryInline::FlatRead8(r4_addr_1);
    r6 = (r6 + 9192);
    r6_addr_1 = (r6 + r25);
    r24 = MemoryInline::FlatRead8(r6_addr_1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(0));
}

loc_80029E90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002B0D8;
    }
}

loc_80029E94:
{
    r4 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r3 + 8));
    r8 = (r9 + 13);
    r6 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r3 + 12));
    r22 = (r3 + 32);
}

loc_80029EA8:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r3 + 16));
    r21 = (r22 + r6);
    r23 = (r8 & -2);
    r20 = (r21 + r0);
    r28_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r28 = (r28_rot_1 & -2);
    r19 = 0;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(1))) {
        goto loc_80029ED4;
    }
}

loc_80029EC4:
{
    f4.d = MemoryInline::FlatReadFloat32((r2 + -31088));
    r19 = r16;
    r4 = 0;
    goto loc_8002A1A8;
}

loc_80029ED4:
{
    r27 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r3 + 4));
    r6 = (r27 & 32);
}

loc_80029EDC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80029FB0;
    }
}

loc_80029EE0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r3 + 5));
}

loc_80029EE8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80029FB0;
    }
}

loc_80029EEC:
{
    r0 = (r27 & 128);
}

loc_80029EF0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80029F1C;
    }
}

loc_80029EF4:
{
    r0 = (r4 + -1);
    r4 = (r5 & 65535);
}

loc_80029F00:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r0))) {
        goto loc_80029F08;
    }
}

loc_80029F04:
{
    r4 = (r0 & 65535);
}

loc_80029F08:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31080));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8002A1A8;
}

loc_80029F1C:
{
}

loc_80029F20:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(1))) {
        goto loc_80029F40;
    }
}

loc_80029F24:
{
    r0 = (r4 + -1);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31072));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_80029FA0;
}

loc_80029F40:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r5);
    r0 = (r4 + -1);
    r3 = (r0 ^ -2147483648);
    f5.d = MemoryInline::FlatReadFloat64((r2 + -31080));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r0 = (r7 + -1);
    MemoryInline::FlatWriteRam32((r1 + 44), r3);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f3.d = MemoryInline::FlatReadFloat64((r2 + -31072));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    MemoryInline::FlatWriteRam32((r1 + 44), r3);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f4.d = PpcFmulsInline(f4.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_80029F90:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80029FA0;
    }
}

loc_80029F94:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
}

loc_80029FA0:
{
    f0.d = PPC_Fctiwz(f4.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    r4 = fctiwzword0;
    goto loc_8002A1A8;
}

loc_80029FB0:
{
    r0 = (r27 & 128);
}

loc_80029FB4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002A080;
    }
}

loc_80029FB8:
{
    r7 = (r4 + -1);
    r0 = (r27 & 64);
}

loc_80029FC0:
{
    r19 = PPC_Divwu(static_cast<uint32_t>(r5), static_cast<uint32_t>(r7));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80029FFC;
    }
}

loc_80029FC8:
{
}

loc_80029FCC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80029FEC;
    }
}

loc_80029FD0:
{
    r3 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r3 + 5));
}

loc_80029FD8:
{
    if ((static_cast<uint32_t>(r19) < static_cast<uint32_t>(r3))) {
        goto loc_80029FEC;
    }
}

loc_80029FDC:
{
    r0 = (r3 + -1);
    r4 = (r7 & 65535);
    r19 = (r0 & 255);
    goto loc_8002A068;
}

loc_80029FEC:
{
    r0 = (r19 * r7);
    r0 = (r5 - r0);
    r4 = (r0 & 65535);
    goto loc_8002A068;
}

loc_80029FFC:
{
}

loc_8002A000:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8002A040;
    }
}

loc_8002A004:
{
    r6 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r3 + 5));
}

loc_8002A00C:
{
    if ((static_cast<uint32_t>(r19) < static_cast<uint32_t>(r6))) {
        goto loc_8002A040;
    }
}

loc_8002A010:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r0 = (r6 & 1);
    r3 = (r0 ^ r4);
    r4 = (r3 - r4);
    r0 = (r6 + -1);
    r4 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    r3 = (r7 & 65535);
    r19 = (r0 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 1);
    r0 = (0 - r0);
    r4 = (r3 & ~r0);
    goto loc_8002A068;
}

loc_8002A040:
{
    r0 = (r19 & 1);
}

loc_8002A044:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002A058;
    }
}

loc_8002A048:
{
    r0 = (r19 * r7);
    r0 = (r5 - r0);
    r4 = (r0 & 65535);
    goto loc_8002A068;
}

loc_8002A058:
{
    r0 = (r19 + 1);
    r0 = (r7 * r0);
    r0 = (r0 - r5);
    r4 = (r0 & 65535);
}

loc_8002A068:
{
    r0 = (r4 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31080));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8002A1A8;
}

loc_8002A080:
{
    r6 = (r7 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
}

loc_8002A088:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8002A0DC;
    }
}

loc_8002A08C:
{
    r0 = (r27 & 64);
}

loc_8002A090:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002A0AC;
    }
}

loc_8002A094:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r3 + 5));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & 1);
    r0 = (r0 & 1);
    r0 = (r0 ^ r5);
    r0 = (r0 - r5);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002A0B8;
    }
}

loc_8002A0AC:
{
    r0 = (r4 + -1);
    r4 = (r0 & 65535);
    goto loc_8002A0BC;
}

loc_8002A0B8:
{
    r4 = 0;
}

loc_8002A0BC:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    r3 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r3 + 5));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31080));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r0 = (r3 + -1);
    r19 = (r0 & 255);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8002A1A8;
}

loc_8002A0DC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r3 + 5));
    r26 = (r4 + -1);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    r0 = (r26 ^ -2147483648);
    f5.d = MemoryInline::FlatReadFloat64((r2 + -31080));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -31072));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    MemoryInline::FlatWriteRam32((r1 + 44), r6);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    MemoryInline::FlatWriteRam32((r1 + 36), r5);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 32));
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f31.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = PpcFmulsInline(f1.d, f31.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r4 = (r3 * r26);
    MemoryInline::FlatWriteRam32((r1 + 36), r16);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31080));
    r0 = (r27 & 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8002A150:
{
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r19 = r3;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteRam32((r1 + 44), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f1.d = PpcFmulsInline(f1.d, f31.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002A178;
    }
}

loc_8002A174:
{
    goto loc_8002A19C;
}

loc_8002A178:
{
    r0 = (r3 & 1);
}

loc_8002A17C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002A184;
    }
}

loc_8002A180:
{
    goto loc_8002A19C;
}

loc_8002A184:
{
    r0 = (r26 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31072));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
}

loc_8002A19C:
{
    f0.d = PPC_Fctiwz(f4.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    r4 = fctiwzword1;
}

loc_8002A1A8:
{
    r4 = (r4 & 65535);
    r3 = MemoryInline::FlatRead16(r22);
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    r18 = (r3 + -1);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31072));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 40));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r18), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
    r0 = (r0 + r18);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31060));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    r27 = (r22 + 4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r5 = (static_cast<int32_t>(r0) >> 1);
    r6 = 0;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f1.d = std::fabs(f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8002A1F0:
{
    r7 = cr;
    r17 = MemoryInline::FlatRead16((r22 + 4));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_1 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r17));
}

loc_8002A200:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002A210;
    }
}

loc_8002A204:
{
    r18 = 0;
    r7 = 1;
    goto loc_8002A2CC;
}

loc_8002A210:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002A238;
    }
}

loc_8002A214:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r18), static_cast<int32_t>(0));
}

loc_8002A218:
{
    r18 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002A228;
    }
}

loc_8002A220:
{
    r7 = 1;
    goto loc_8002A2CC;
}

loc_8002A228:
{
}

loc_8002A22C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8002A2CC;
    }
}

loc_8002A230:
{
    r27_addr_1 = (r27 + r23);
    r16 = MemoryInline::FlatRead16(r27_addr_1);
    goto loc_8002A2CC;
}

loc_8002A238:
{
    r0 = (r18 * r23);
    r27_addr_2 = (r27 + r0);
    r16 = MemoryInline::FlatRead16(r27_addr_2);
}

loc_8002A244:
{
    if ((static_cast<int32_t>(r16) > static_cast<int32_t>(r4))) {
        goto loc_8002A250;
    }
}

loc_8002A248:
{
    r7 = 1;
    goto loc_8002A2CC;
}

loc_8002A250:
{
    r0 = (r5 * r23);
    r27_addr_3 = (r27 + r0);
    r3 = MemoryInline::FlatRead16(r27_addr_3);
    goto loc_8002A2BC;
}

loc_8002A260:
{
}

loc_8002A264:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r3))) {
        goto loc_8002A288;
    }
}

loc_8002A268:
{
}

loc_8002A26C:
{
    r18 = r5;
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8002A2CC;
    }
}

loc_8002A274:
{
    r0 = (r5 + 1);
    r17 = r3;
    r0 = (r0 * r23);
    r27_addr_5 = (r27 + r0);
    r16 = MemoryInline::FlatRead16(r27_addr_5);
    goto loc_8002A2CC;
}

loc_8002A288:
{
}

loc_8002A28C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r4))) {
        goto loc_8002A29C;
    }
}

loc_8002A290:
{
    r6 = r5;
    r17 = r3;
    goto loc_8002A2A4;
}

loc_8002A29C:
{
    r18 = r5;
    r16 = r3;
}

loc_8002A2A4:
{
    r3 = (r6 + r18);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 1);
    r0 = (r0 + r3);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r5 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r5 * r23);
    r27_addr_6 = (r27 + r0);
    r3 = MemoryInline::FlatRead16(r27_addr_6);
}

loc_8002A2BC:
{
}

loc_8002A2C0:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r5))) {
        goto loc_8002A260;
    }
}

loc_8002A2C4:
{
    r18 = r6;
    r7 = 0;
}

loc_8002A2CC:
{
}

loc_8002A2D0:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8002A46C;
    }
}

loc_8002A2D4:
{
    r0 = (r18 * r23);
    r4 = (r27 + r0);
    r9 = MemoryInline::FlatRead8((r4 + 2));
    r4 = (r4 + 12);
}

loc_8002A2E8:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8002A320;
    }
}

loc_8002A2EC:
{
    r3 = 1;
    goto loc_8002A314;
}

loc_8002A2F8:
{
    r0 = (r25 & r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002A30C;
    }
}

loc_8002A300:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
}

loc_8002A30C:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 65534);
    r30 = (r30 + 1);
}

loc_8002A314:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r24));
}

loc_8002A318:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002A2F8;
    }
}

loc_8002A31C:
{
    goto loc_8002B0D8;
}

loc_8002A320:
{
    r3 = 923860992;
    r0 = MemoryInline::FlatRead16(r4);
    r3 = (r3 + -26649);
    r6 = 1065484288;
    r3 = (r0 * r3);
    r5 = 816250880;
    r8 = (r6 + -2507);
    r7 = MemoryInline::FlatRead16((r29 + 6));
    r4 = 524288;
    r6 = (r5 + 16787);
    r5 = (r4 + -18135);
    r4 = (r3 + 327680);
    r3 = (r9 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8002A354:
{
    r3 = (r4 + -16557);
    r5 = (r19 * r5);
    r8 = (r31 * r8);
    r3 = (r5 + r3);
    r4 = (r7 * r6);
    r4 = (r8 + r4);
    r3 = (r4 + r3);
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    r5 = MemoryInline::FlatRead8((r1 + 26));
    r3 = MemoryInline::FlatRead8((r1 + 27));
    r4 = MemoryInline::FlatRead8((r1 + 25));
    r5 = (r5 ^ r3);
    r3 = MemoryInline::FlatRead8((r1 + 24));
    r4 = (r4 ^ r5);
    MemoryInline::FlatWriteRam8((r1 + 26), static_cast<uint8_t>(r5));
    r3 = (r3 ^ r4);
    MemoryInline::FlatWriteRam8((r1 + 25), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 24), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r1 + 24));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002A3B4;
    }
}

loc_8002A3A4:
{
    r0 = (r0 * r28);
    r4 = (r21 + r0);
    r7 = (r4 + 4);
    goto loc_8002A3E8;
}

loc_8002A3B4:
{
    r6 = MemoryInline::FlatRead16(r20);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r7 = (r7_rot_2 & 65535);
    r4 = 196608;
    r5 = PPC_Divwu(static_cast<uint32_t>(r7), static_cast<uint32_t>(r6));
    r0 = (r4 + 17405);
    r4 = (r5 * r6);
    r4 = (r7 - r4);
    r4 = (r28 * r4);
    r3 = (r3 * r0);
    r4 = (r20 + r4);
    r7 = (r4 + 4);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
}

loc_8002A3E8:
{
    r8 = 1;
    r4 = 196608;
    goto loc_8002A460;
}

loc_8002A3F8:
{
    r0 = (r25 & r8);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002A43C;
    }
}

loc_8002A400:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_9 & 65535);
    r5 = MemoryInline::FlatRead8((r7 + 1));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r6 = MemoryInline::FlatRead8(r7);
    r0 = (r5 * r0);
    r7 = (r7 + 2);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(15) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 15);
    r0_addze_src_2 = r0;
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_2 + r0_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_addze_src_2)) + static_cast<uint64_t>(static_cast<uint32_t>(0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0 = (r6 + r0);
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8002A42C;
    }
}

loc_8002A428:
{
    r0 = 0;
}

loc_8002A42C:
{
}

loc_8002A430:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(255))) {
        goto loc_8002A438;
    }
}

loc_8002A434:
{
    r0 = 255;
}

loc_8002A438:
{
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
}

loc_8002A43C:
{
    r0 = MemoryInline::FlatRead8((r29 + 4));
    r0 = (r0 & 4);
}

loc_8002A444:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002A458;
    }
}

loc_8002A448:
{
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
}

loc_8002A458:
{
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_2 & 65534);
    r30 = (r30 + 1);
}

loc_8002A460:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(r24));
}

loc_8002A464:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002A3F8;
    }
}

loc_8002A468:
{
    goto loc_8002B0D8;
}

loc_8002A46C:
{
    r3 = MemoryInline::FlatRead8((r29 + 4));
    r26 = r19;
    r0 = (r3 & 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8002A478:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002A4E4;
    }
}

loc_8002A47C:
{
    r5 = (r3 & 32);
}

loc_8002A480:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8002A490;
    }
}

loc_8002A484:
{
    r0 = MemoryInline::FlatRead8((r29 + 5));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8002A48C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002A4E4;
    }
}

loc_8002A490:
{
    r6 = (r19 & 1);
}

loc_8002A494:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8002A4C8;
    }
}

loc_8002A498:
{
    r3 = MemoryInline::FlatRead16(r22);
    r4 = (r18 + 1);
    r0 = (r3 + -1);
}

loc_8002A4A8:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_8002A4C8;
    }
}

loc_8002A4AC:
{
}

loc_8002A4B0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8002A4C4;
    }
}

loc_8002A4B4:
{
    r3 = MemoryInline::FlatRead8((r29 + 5));
    r0 = (r3 + -1);
}

loc_8002A4C0:
{
    if ((static_cast<uint32_t>(r19) >= static_cast<uint32_t>(r0))) {
        goto loc_8002A4C8;
    }
}

loc_8002A4C4:
{
    r26 = (r19 + 1);
}

loc_8002A4C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8002A4CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002A4E4;
    }
}

loc_8002A4D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r18), static_cast<int32_t>(0));
}

loc_8002A4D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002A4E4;
    }
}

loc_8002A4D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r19), static_cast<int32_t>(0));
}

loc_8002A4DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002A4E4;
    }
}

loc_8002A4E0:
{
    r19 = (r19 + 1);
}

loc_8002A4E4:
{
    r0 = (r17 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31080));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31056));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f1.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r4 = (r17 & 65535);
    r0 = (r16 & 65535);
    r4 = (r0 - r4);
    r5 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r4));
    r0 = (r18 + 1);
    r3 = (r18 * r23);
    r6 = (r27 + r3);
    r3 = (r0 * r23);
    r0 = MemoryInline::FlatRead8((r6 + 2));
    r4 = (r6 + 12);
    r7 = (r6 + 4);
    r8 = (0 - r0);
    r6 = (r27 + r3);
    r3 = MemoryInline::FlatRead8((r6 + 2));
    r8 = (r8 | r0);
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_1 & 1);
}

loc_8002A548:
{
    r6 = (r6 + 12);
    r8 = (0 - r3);
    r8 = (r8 | r3);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_3 & 1);
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8002A720;
    }
}

loc_8002A55C:
{
}

loc_8002A560:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8002A720;
    }
}

loc_8002A564:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r2 + -31088), 0, 56u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 8u, (r2 + -31080));
    r10 = 1;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r2 + -31056));
    f10.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 16u, (r2 + -31072));
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 40u, (r2 + -31048));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 48u, (r2 + -31040));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 36u, (r2 + -31052));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31088));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 52u, (r2 + -31036));
    goto loc_8002A714;
}

loc_8002A590:
{
    r0 = (r25 & r10);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002A708;
    }
}

loc_8002A598:
{
    r9 = MemoryInline::FlatRead8(r6);
    r8 = MemoryInline::FlatRead8(r4);
}

loc_8002A5A4:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(r9))) {
        goto loc_8002A5B0;
    }
}

loc_8002A5A8:
{
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r8));
    goto loc_8002A700;
}

loc_8002A5B0:
{
    r3 = MemoryInline::FlatRead8(r7);
    r0 = (r3 & 3);
}

loc_8002A5B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002A5D0;
    }
}

loc_8002A5BC:
{
}

loc_8002A5C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8002A5E8;
    }
}

loc_8002A5C4:
{
}

loc_8002A5C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8002A6FC;
    }
}

loc_8002A5CC:
{
    goto loc_8002A6F8;
}

loc_8002A5D0:
{
    r0 = (r9 - r8);
    r0 = (r5 * r0);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_14 & 65535);
    r0 = (r8 + r0);
    r8 = (r0 & 255);
    goto loc_8002A6FC;
}

loc_8002A5E8:
{
    MemoryInline::FlatWriteRam32((r1 + 44), r5);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_8002A5F0:
{
    f2.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f13.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002A648;
    }
}

loc_8002A600:
{
    r0 = (r9 - r8);
    f7.d = PpcFmulsInline(f8.d, f13.d);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f7.d));
    MemoryInline::FlatWriteRam32((r1 + 36), r8);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f10.d));
    f9.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f2.d = PpcFmulsInline(f7.d, f2.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f1.d));
    f2.d = PpcFmulsInline(f13.d, f2.d);
    f2.d = PpcFmulsInline(f13.d, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f2.d));
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword2 = PPC_FprLowWordInline(f2.d);
    r8 = fctiwzword2;
    goto loc_8002A6FC;
}

loc_8002A648:
{
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r0 = (r0_rot_12 & 1);
}

loc_8002A64C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002A658;
    }
}

loc_8002A650:
{
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31088));
    goto loc_8002A65C;
}

loc_8002A658:
{
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r2 + -31044));
}

loc_8002A65C:
{
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_13 & 1);
}

loc_8002A660:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002A66C;
    }
}

loc_8002A664:
{
    f12.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31088));
    goto loc_8002A670;
}

loc_8002A66C:
{
    f12.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r2 + -31044));
}

loc_8002A670:
{
    f7.d = static_cast<double>(PpcForceSingleValueInline(f12.d + f9.d));
    r0 = (r9 - r8);
    f2.d = PpcFmulsInline(f6.d, f12.d);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r8);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f8.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f9.d));
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f11.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f7.d = PpcFmulsInline(f13.d, f7.d);
    f9.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f2.d));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f10.d));
    f7.d = PpcFmulsInline(f13.d, f7.d);
    f2.d = PpcFmulsInline(f13.d, f2.d);
    f9.d = PpcFmulsInline(f13.d, f9.d);
    f11.d = static_cast<double>(PpcForceSingleValueInline(f11.d - f1.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f12.d + f2.d));
    f2.d = PpcFmulsInline(f9.d, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f11.d + f2.d));
    SetCRFloatResident(cr, 0, f2.d, f4.d);
}

loc_8002A6C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002A6D4;
    }
}

loc_8002A6CC:
{
    r8 = 0;
    goto loc_8002A6FC;
}

loc_8002A6D4:
{
    SetCRFloatResident(cr, 0, f2.d, f3.d);
}

loc_8002A6D8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002A6E4;
    }
}

loc_8002A6DC:
{
    r8 = 255;
    goto loc_8002A6FC;
}

loc_8002A6E4:
{
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword3 = PPC_FprLowWordInline(f2.d);
    r8 = fctiwzword3;
    goto loc_8002A6FC;
}

loc_8002A6F8:
{
    r8 = 0;
}

loc_8002A6FC:
{
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r8));
}

loc_8002A700:
{
    r4 = (r4 + 1);
    r6 = (r6 + 1);
}

loc_8002A708:
{
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r10 = (r10_rot_2 & 65534);
    r7 = (r7 + 1);
    r30 = (r30 + 1);
}

loc_8002A714:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(r24));
}

loc_8002A718:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002A590;
    }
}

loc_8002A71C:
{
    goto loc_8002B0D8;
}

loc_8002A720:
{
}

loc_8002A724:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_8002AA04;
    }
}

loc_8002A728:
{
}

loc_8002A72C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8002AA04;
    }
}

loc_8002A730:
{
    r8 = 923860992;
    r3 = MemoryInline::FlatRead16(r4);
    r4 = (r8 + -26649);
    r11 = 1065484288;
    r4 = (r3 * r4);
    r9 = 816250880;
    r8 = 524288;
    r10 = MemoryInline::FlatRead16((r29 + 6));
    r11 = (r11 + -2507);
    r8 = (r8 + -18135);
    r9 = (r9 + 16787);
    r4 = (r4 + 327680);
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8002A764:
{
    r0 = (r4 + -16557);
    r8 = (r19 * r8);
    r11 = (r31 * r11);
    r0 = (r8 + r0);
    r4 = (r10 * r9);
    r4 = (r11 + r4);
    r0 = (r4 + r0);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r8 = MemoryInline::FlatRead8((r1 + 22));
    r0 = MemoryInline::FlatRead8((r1 + 23));
    r4 = MemoryInline::FlatRead8((r1 + 21));
    r8 = (r8 ^ r0);
    r0 = MemoryInline::FlatRead8((r1 + 20));
    r4 = (r4 ^ r8);
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r8));
    r0 = (r0 ^ r4);
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r1 + 20));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002A7C4;
    }
}

loc_8002A7B4:
{
    r0 = (r3 * r28);
    r3 = (r21 + r0);
    r3 = (r3 + 4);
    goto loc_8002A7F8;
}

loc_8002A7C4:
{
    r9 = MemoryInline::FlatRead16(r20);
    r10_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r10 = (r10_rot_3 & 65535);
    r3 = 196608;
    r8 = PPC_Divwu(static_cast<uint32_t>(r10), static_cast<uint32_t>(r9));
    r0 = (r3 + 17405);
    r3 = (r8 * r9);
    r3 = (r10 - r3);
    r3 = (r28 * r3);
    r4 = (r4 * r0);
    r3 = (r20 + r3);
    r3 = (r3 + 4);
    r4 = (r4 + 2555904);
    r4 = (r4 + -24893);
}

loc_8002A7F8:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r2 + -31088), 0, 56u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 8u, (r2 + -31080));
    r0 = 1;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 32u, (r2 + -31056));
    r8 = 196608;
    f10.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 16u, (r2 + -31072));
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 40u, (r2 + -31048));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 48u, (r2 + -31040));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 36u, (r2 + -31052));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r2 + -31088));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 52u, (r2 + -31036));
    goto loc_8002A9F8;
}

loc_8002A828:
{
    r9 = (r25 & r0);
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_8002A9D0;
    }
}

loc_8002A830:
{
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r9 = (r9_rot_3 & 65535);
    r10 = MemoryInline::FlatRead8((r3 + 1));
    r9 = (static_cast<int32_t>(static_cast<int16_t>(r9)));
    r11 = MemoryInline::FlatRead8(r3);
    r9 = (r10 * r9);
    r3 = (r3 + 2);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r9);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(15) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r9 = (static_cast<int32_t>(r9) >> 15);
    r9_addze_src_2 = r9;
    r9_ca_2 = (xer >> 29) & 1u;
    r9 = (r9_addze_src_2 + r9_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r9_addze_src_2)) + static_cast<uint64_t>(static_cast<uint32_t>(0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r9_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r12 = (r11 + r9);
    if ((static_cast<int32_t>(r12) >= static_cast<int32_t>(0))) {
        goto loc_8002A85C;
    }
}

loc_8002A858:
{
    r12 = 0;
}

loc_8002A85C:
{
}

loc_8002A860:
{
    if ((static_cast<int32_t>(r12) <= static_cast<int32_t>(255))) {
        goto loc_8002A868;
    }
}

loc_8002A864:
{
    r12 = 255;
}

loc_8002A868:
{
    r10 = MemoryInline::FlatRead8(r7);
    r11 = MemoryInline::FlatRead8(r6);
    r9 = (r10 & 3);
}

loc_8002A874:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_8002A88C;
    }
}

loc_8002A878:
{
}

loc_8002A87C:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(1))) {
        goto loc_8002A8A8;
    }
}

loc_8002A880:
{
}

loc_8002A884:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(2))) {
        goto loc_8002A9BC;
    }
}

loc_8002A888:
{
    goto loc_8002A9C4;
}

loc_8002A88C:
{
    r10 = (r12 & 255);
    r9 = (r11 - r10);
    r9 = (r5 * r9);
    r9_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(16));
    r9 = (r9_rot_6 & 65535);
    r9 = (r10 + r9);
    r9 = (r9 & 255);
    goto loc_8002A9C8;
}

loc_8002A8A8:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r5);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
}

loc_8002A8B0:
{
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f13.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002A90C;
    }
}

loc_8002A8C0:
{
    r10 = (r12 & 255);
    f2.d = PpcFmulsInline(f8.d, f13.d);
    r9 = (r11 - r10);
    MemoryInline::FlatWriteRam32((r1 + 44), r10);
    r9 = (r9 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r9);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    f9.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f1.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f10.d));
    f2.d = PpcFmulsInline(f7.d, f2.d);
    f2.d = PpcFmulsInline(f13.d, f2.d);
    f2.d = PpcFmulsInline(f13.d, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f2.d));
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword4 = PPC_FprLowWordInline(f2.d);
    r9 = fctiwzword4;
    goto loc_8002A9C8;
}

loc_8002A90C:
{
    r9_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(30));
    r9 = (r9_rot_4 & 1);
}

loc_8002A910:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8002A91C;
    }
}

loc_8002A914:
{
    f11.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r2 + -31088));
    goto loc_8002A920;
}

loc_8002A91C:
{
    f11.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 44u, (r2 + -31044));
}

loc_8002A920:
{
    r9_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(29));
    r9 = (r9_rot_5 & 1);
}

loc_8002A924:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8002A930;
    }
}

loc_8002A928:
{
    f12.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r2 + -31088));
    goto loc_8002A934;
}

loc_8002A930:
{
    f12.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 44u, (r2 + -31044));
}

loc_8002A934:
{
    f7.d = static_cast<double>(PpcForceSingleValueInline(f12.d + f11.d));
    r10 = (r12 & 255);
    f2.d = PpcFmulsInline(f6.d, f12.d);
    r9 = (r11 - r10);
    r9 = (r9 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r9);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f8.d));
    f9.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f11.d));
    MemoryInline::FlatWriteRam32((r1 + 44), r10);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f10.d));
    f7.d = PpcFmulsInline(f13.d, f7.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f2.d));
    f11.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f9.d = PpcFmulsInline(f13.d, f9.d);
    f7.d = PpcFmulsInline(f13.d, f7.d);
    f2.d = PpcFmulsInline(f13.d, f2.d);
    f11.d = static_cast<double>(PpcForceSingleValueInline(f11.d - f1.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f12.d + f2.d));
    f2.d = PpcFmulsInline(f9.d, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f11.d + f2.d));
    SetCRFloatResident(cr, 0, f2.d, f4.d);
}

loc_8002A990:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002A99C;
    }
}

loc_8002A994:
{
    r9 = 0;
    goto loc_8002A9C8;
}

loc_8002A99C:
{
    SetCRFloatResident(cr, 0, f2.d, f3.d);
}

loc_8002A9A0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002A9AC;
    }
}

loc_8002A9A4:
{
    r9 = 255;
    goto loc_8002A9C8;
}

loc_8002A9AC:
{
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword5 = PPC_FprLowWordInline(f2.d);
    r9 = fctiwzword5;
    goto loc_8002A9C8;
}

loc_8002A9BC:
{
    r9 = (r12 & 255);
    goto loc_8002A9C8;
}

loc_8002A9C4:
{
    r9 = 0;
}

loc_8002A9C8:
{
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r9));
    r6 = (r6 + 1);
}

loc_8002A9D0:
{
    r9 = MemoryInline::FlatRead8((r29 + 4));
    r9 = (r9 & 4);
}

loc_8002A9D8:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8002A9EC;
    }
}

loc_8002A9DC:
{
    r9 = (r8 + 17405);
    r4 = (r4 * r9);
    r4 = (r4 + 2555904);
    r4 = (r4 + -24893);
}

loc_8002A9EC:
{
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_19 & 65534);
    r7 = (r7 + 1);
    r30 = (r30 + 1);
}

loc_8002A9F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r24));
}

loc_8002A9FC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002A828;
    }
}

loc_8002AA00:
{
    goto loc_8002B0D8;
}

loc_8002AA04:
{
}

loc_8002AA08:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8002ACE0;
    }
}

loc_8002AA0C:
{
}

loc_8002AA10:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8002ACE0;
    }
}

loc_8002AA14:
{
    r8 = 923860992;
    r0 = MemoryInline::FlatRead16(r6);
    r6 = (r8 + -26649);
    r11 = 1065484288;
    r6 = (r0 * r6);
    r9 = 816250880;
    r8 = 524288;
    r10 = MemoryInline::FlatRead16((r29 + 6));
    r11 = (r11 + -2507);
    r8 = (r8 + -18135);
    r9 = (r9 + 16787);
    r6 = (r6 + 327680);
    r3 = (r3 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8002AA48:
{
    r3 = (r6 + -16557);
    r8 = (r26 * r8);
    r11 = (r31 * r11);
    r3 = (r8 + r3);
    r6 = (r10 * r9);
    r6 = (r11 + r6);
    r3 = (r6 + r3);
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r8 = MemoryInline::FlatRead8((r1 + 18));
    r3 = MemoryInline::FlatRead8((r1 + 19));
    r6 = MemoryInline::FlatRead8((r1 + 17));
    r8 = (r8 ^ r3);
    r3 = MemoryInline::FlatRead8((r1 + 16));
    r6 = (r6 ^ r8);
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r8));
    r3 = (r3 ^ r6);
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r1 + 16));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002AAA8;
    }
}

loc_8002AA98:
{
    r0 = (r0 * r28);
    r6 = (r21 + r0);
    r6 = (r6 + 4);
    goto loc_8002AADC;
}

loc_8002AAA8:
{
    r9 = MemoryInline::FlatRead16(r20);
    r10_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r10 = (r10_rot_5 & 65535);
    r6 = 196608;
    r8 = PPC_Divwu(static_cast<uint32_t>(r10), static_cast<uint32_t>(r9));
    r0 = (r6 + 17405);
    r6 = (r8 * r9);
    r6 = (r10 - r6);
    r6 = (r28 * r6);
    r3 = (r3 * r0);
    r6 = (r20 + r6);
    r6 = (r6 + 4);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
}

loc_8002AADC:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r2 + -31088), 0, 56u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 8u, (r2 + -31080));
    r0 = 1;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 32u, (r2 + -31056));
    r8 = 196608;
    f10.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 16u, (r2 + -31072));
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 40u, (r2 + -31048));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 48u, (r2 + -31040));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 36u, (r2 + -31052));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 0u, (r2 + -31088));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 52u, (r2 + -31036));
    goto loc_8002ACD4;
}

loc_8002AB08:
{
    r9 = (r25 & r0);
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_8002ACAC;
    }
}

loc_8002AB10:
{
    r9_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r9 = (r9_rot_10 & 65535);
    r10 = MemoryInline::FlatRead8((r6 + 1));
    r9 = (static_cast<int32_t>(static_cast<int16_t>(r9)));
    r11 = MemoryInline::FlatRead8(r6);
    r9 = (r10 * r9);
    r6 = (r6 + 2);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r9);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(15) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r9 = (static_cast<int32_t>(r9) >> 15);
    r9_addze_src_5 = r9;
    r9_ca_5 = (xer >> 29) & 1u;
    r9 = (r9_addze_src_5 + r9_ca_5);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r9_addze_src_5)) + static_cast<uint64_t>(static_cast<uint32_t>(0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r9_ca_5)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r12 = (r11 + r9);
    if ((static_cast<int32_t>(r12) >= static_cast<int32_t>(0))) {
        goto loc_8002AB3C;
    }
}

loc_8002AB38:
{
    r12 = 0;
}

loc_8002AB3C:
{
}

loc_8002AB40:
{
    if ((static_cast<int32_t>(r12) <= static_cast<int32_t>(255))) {
        goto loc_8002AB48;
    }
}

loc_8002AB44:
{
    r12 = 255;
}

loc_8002AB48:
{
    r11 = MemoryInline::FlatRead8(r7);
    r10 = MemoryInline::FlatRead8(r4);
    r9 = (r11 & 3);
}

loc_8002AB54:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_8002AB6C;
    }
}

loc_8002AB58:
{
}

loc_8002AB5C:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(1))) {
        goto loc_8002AB88;
    }
}

loc_8002AB60:
{
}

loc_8002AB64:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(2))) {
        goto loc_8002ACA4;
    }
}

loc_8002AB68:
{
    goto loc_8002ACA0;
}

loc_8002AB6C:
{
    r9 = (r12 & 255);
    r9 = (r9 - r10);
    r9 = (r5 * r9);
    r9_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(16));
    r9 = (r9_rot_13 & 65535);
    r9 = (r10 + r9);
    r10 = (r9 & 255);
    goto loc_8002ACA4;
}

loc_8002AB88:
{
    MemoryInline::FlatWriteRam32((r1 + 44), r5);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
}

loc_8002AB90:
{
    f2.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f13.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002ABEC;
    }
}

loc_8002ABA0:
{
    r9 = (r12 & 255);
    f2.d = PpcFmulsInline(f8.d, f13.d);
    r9 = (r9 - r10);
    MemoryInline::FlatWriteRam32((r1 + 36), r10);
    r9 = (r9 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r9);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    f9.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f1.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f10.d));
    f2.d = PpcFmulsInline(f7.d, f2.d);
    f2.d = PpcFmulsInline(f13.d, f2.d);
    f2.d = PpcFmulsInline(f13.d, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f2.d));
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword6 = PPC_FprLowWordInline(f2.d);
    r10 = fctiwzword6;
    goto loc_8002ACA4;
}

loc_8002ABEC:
{
    r9_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(30));
    r9 = (r9_rot_11 & 1);
}

loc_8002ABF0:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8002ABFC;
    }
}

loc_8002ABF4:
{
    f11.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 0u, (r2 + -31088));
    goto loc_8002AC00;
}

loc_8002ABFC:
{
    f11.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 44u, (r2 + -31044));
}

loc_8002AC00:
{
    r9_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(29));
    r9 = (r9_rot_12 & 1);
}

loc_8002AC04:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8002AC10;
    }
}

loc_8002AC08:
{
    f12.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 0u, (r2 + -31088));
    goto loc_8002AC14;
}

loc_8002AC10:
{
    f12.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 44u, (r2 + -31044));
}

loc_8002AC14:
{
    f7.d = static_cast<double>(PpcForceSingleValueInline(f12.d + f11.d));
    r9 = (r12 & 255);
    f2.d = PpcFmulsInline(f6.d, f12.d);
    r9 = (r9 - r10);
    r9 = (r9 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r9);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f8.d));
    f9.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f11.d));
    MemoryInline::FlatWriteRam32((r1 + 36), r10);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f10.d));
    f7.d = PpcFmulsInline(f13.d, f7.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f2.d));
    f11.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f9.d = PpcFmulsInline(f13.d, f9.d);
    f7.d = PpcFmulsInline(f13.d, f7.d);
    f2.d = PpcFmulsInline(f13.d, f2.d);
    f11.d = static_cast<double>(PpcForceSingleValueInline(f11.d - f1.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f12.d + f2.d));
    f2.d = PpcFmulsInline(f9.d, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f11.d + f2.d));
    SetCRFloatResident(cr, 0, f2.d, f4.d);
}

loc_8002AC70:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002AC7C;
    }
}

loc_8002AC74:
{
    r10 = 0;
    goto loc_8002ACA4;
}

loc_8002AC7C:
{
    SetCRFloatResident(cr, 0, f2.d, f3.d);
}

loc_8002AC80:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002AC8C;
    }
}

loc_8002AC84:
{
    r10 = 255;
    goto loc_8002ACA4;
}

loc_8002AC8C:
{
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword7 = PPC_FprLowWordInline(f2.d);
    r10 = fctiwzword7;
    goto loc_8002ACA4;
}

loc_8002ACA0:
{
    r10 = 0;
}

loc_8002ACA4:
{
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r10));
    r4 = (r4 + 1);
}

loc_8002ACAC:
{
    r9 = MemoryInline::FlatRead8((r29 + 4));
    r9 = (r9 & 4);
}

loc_8002ACB4:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8002ACC8;
    }
}

loc_8002ACB8:
{
    r9 = (r8 + 17405);
    r3 = (r3 * r9);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
}

loc_8002ACC8:
{
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_21 & 65534);
    r7 = (r7 + 1);
    r30 = (r30 + 1);
}

loc_8002ACD4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r24));
}

loc_8002ACD8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002AB08;
    }
}

loc_8002ACDC:
{
    goto loc_8002B0D8;
}

loc_8002ACE0:
{
    r8 = 1065484288;
    r10 = 816250880;
    r12 = (r8 + -2507);
    r9 = 524288;
    r8 = 923860992;
    r11 = MemoryInline::FlatRead16((r29 + 6));
    r10 = (r10 + 16787);
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8002AD00:
{
    r4 = MemoryInline::FlatRead16(r4);
    r8 = (r8 + -26649);
    r9 = (r9 + -18135);
    r0 = (r11 * r10);
    r12 = (r31 * r12);
    r8 = (r4 * r8);
    r0 = (r12 + r0);
    r10 = (r19 * r9);
    r9 = (r8 + 327680);
    r8 = (r10 + r0);
    r8 = (r8 + r9);
    r8 = (r8 + -16557);
    MemoryInline::FlatWriteRam32((r1 + 12), r8);
    r10 = MemoryInline::FlatRead8((r1 + 14));
    r8 = MemoryInline::FlatRead8((r1 + 15));
    r9 = MemoryInline::FlatRead8((r1 + 13));
    r10 = (r10 ^ r8);
    r8 = MemoryInline::FlatRead8((r1 + 12));
    r9 = (r9 ^ r10);
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r10));
    r8 = (r8 ^ r9);
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r8));
    r8 = MemoryInline::FlatRead32((r1 + 12));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002AD74;
    }
}

loc_8002AD64:
{
    r4 = (r4 * r28);
    r4 = (r21 + r4);
    r9 = (r4 + 4);
    goto loc_8002ADA8;
}

loc_8002AD74:
{
    r10 = MemoryInline::FlatRead16(r20);
    r11_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(16));
    r11 = (r11_rot_1 & 65535);
    r4 = 196608;
    r9 = PPC_Divwu(static_cast<uint32_t>(r11), static_cast<uint32_t>(r10));
    r4 = (r4 + 17405);
    r9 = (r9 * r10);
    r9 = (r11 - r9);
    r9 = (r28 * r9);
    r4 = (r8 * r4);
    r8 = (r20 + r9);
    r9 = (r8 + 4);
    r8 = (r4 + 2555904);
    r8 = (r8 + -24893);
}

loc_8002ADA8:
{
    r4 = 524288;
    r10 = 923860992;
    r11 = (r4 + -18135);
    r4 = MemoryInline::FlatRead16(r6);
    r6 = (r10 + -26649);
    r3 = (r3 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8002ADC0:
{
    r10 = (r26 * r11);
    r3 = (r4 * r6);
    r0 = (r10 + r0);
    r3 = (r3 + 327680);
    r3 = (r0 + r3);
    r0 = (r3 + -16557);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r6 = MemoryInline::FlatRead8((r1 + 10));
    r0 = MemoryInline::FlatRead8((r1 + 11));
    r3 = MemoryInline::FlatRead8((r1 + 9));
    r6 = (r6 ^ r0);
    r0 = MemoryInline::FlatRead8((r1 + 8));
    r3 = (r3 ^ r6);
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r6));
    r0 = (r0 ^ r3);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r6 = MemoryInline::FlatRead32((r1 + 8));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002AE1C;
    }
}

loc_8002AE0C:
{
    r0 = (r4 * r28);
    r3 = (r21 + r0);
    r4 = (r3 + 4);
    goto loc_8002AE50;
}

loc_8002AE1C:
{
    r10 = MemoryInline::FlatRead16(r20);
    r11_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r11 = (r11_rot_3 & 65535);
    r3 = 196608;
    r4 = PPC_Divwu(static_cast<uint32_t>(r11), static_cast<uint32_t>(r10));
    r0 = (r3 + 17405);
    r3 = (r4 * r10);
    r3 = (r11 - r3);
    r4 = (r28 * r3);
    r3 = (r6 * r0);
    r4 = (r20 + r4);
    r4 = (r4 + 4);
    r6 = (r3 + 2555904);
    r6 = (r6 + -24893);
}

loc_8002AE50:
{
    guest_range_5 = MemoryInline::ResolveRangeHost((r2 + -31088), 0, 56u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 8u, (r2 + -31080));
    r10 = 1;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 32u, (r2 + -31056));
    r3 = 196608;
    f10.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 16u, (r2 + -31072));
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 40u, (r2 + -31048));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 48u, (r2 + -31040));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 36u, (r2 + -31052));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 0u, (r2 + -31088));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 52u, (r2 + -31036));
    goto loc_8002B0D0;
}

loc_8002AE80:
{
    r0 = (r25 & r10);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002B09C;
    }
}

loc_8002AE88:
{
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(16));
    r0 = (r0_rot_23 & 65535);
    r11 = MemoryInline::FlatRead8((r9 + 1));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r12 = MemoryInline::FlatRead8(r9);
    r0 = (r11 * r0);
    r9 = (r9 + 2);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(15) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 15);
    r0_addze_src_5 = r0;
    r0_ca_5 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_5 + r0_ca_5);
    r0 = (r12 + r0);
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8002AEB4;
    }
}

loc_8002AEB0:
{
    r0 = 0;
}

loc_8002AEB4:
{
}

loc_8002AEB8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(255))) {
        goto loc_8002AEC0;
    }
}

loc_8002AEBC:
{
    r0 = 255;
}

loc_8002AEC0:
{
    r11 = MemoryInline::FlatRead8((r29 + 4));
    r17 = (r11 & 4);
}

loc_8002AEC8:
{
    if ((static_cast<int32_t>(r17) != static_cast<int32_t>(0))) {
        goto loc_8002AEDC;
    }
}

loc_8002AECC:
{
    r11 = (r3 + 17405);
    r8 = (r8 * r11);
    r8 = (r8 + 2555904);
    r8 = (r8 + -24893);
}

loc_8002AEDC:
{
    r11_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r11 = (r11_rot_6 & 65535);
    r12 = MemoryInline::FlatRead8((r4 + 1));
    r11 = (static_cast<int32_t>(static_cast<int16_t>(r11)));
    r16 = MemoryInline::FlatRead8(r4);
    r11 = (r12 * r11);
    r4 = (r4 + 2);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r11);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(15) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r11 = (static_cast<int32_t>(r11) >> 15);
    r11_addze_src_2 = r11;
    r11_ca_2 = (xer >> 29) & 1u;
    r11 = (r11_addze_src_2 + r11_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r11_addze_src_2)) + static_cast<uint64_t>(static_cast<uint32_t>(0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r11_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r16 = (r16 + r11);
    if ((static_cast<int32_t>(r16) >= static_cast<int32_t>(0))) {
        goto loc_8002AF08;
    }
}

loc_8002AF04:
{
    r16 = 0;
}

loc_8002AF08:
{
}

loc_8002AF0C:
{
    if ((static_cast<int32_t>(r16) <= static_cast<int32_t>(255))) {
        goto loc_8002AF14;
    }
}

loc_8002AF10:
{
    r16 = 255;
}

loc_8002AF14:
{
}

loc_8002AF18:
{
    if ((static_cast<int32_t>(r17) != static_cast<int32_t>(0))) {
        goto loc_8002AF2C;
    }
}

loc_8002AF1C:
{
    r11 = (r3 + 17405);
    r6 = (r6 * r11);
    r6 = (r6 + 2555904);
    r6 = (r6 + -24893);
}

loc_8002AF2C:
{
    r12 = MemoryInline::FlatRead8(r7);
    r11 = (r12 & 3);
}

loc_8002AF34:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_8002AF4C;
    }
}

loc_8002AF38:
{
}

loc_8002AF3C:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(1))) {
        goto loc_8002AF6C;
    }
}

loc_8002AF40:
{
}

loc_8002AF44:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(2))) {
        goto loc_8002B088;
    }
}

loc_8002AF48:
{
    goto loc_8002B090;
}

loc_8002AF4C:
{
    r11 = (r0 & 255);
    r0 = (r16 & 255);
    r0 = (r0 - r11);
    r0 = (r5 * r0);
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_24 & 65535);
    r0 = (r11 + r0);
    r0 = (r0 & 255);
    goto loc_8002B094;
}

loc_8002AF6C:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r5);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r12), static_cast<uint32_t>(1));
}

loc_8002AF74:
{
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f13.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002AFD4;
    }
}

loc_8002AF84:
{
    r11 = (r0 & 255);
    r0 = (r16 & 255);
    r0 = (r0 - r11);
    f7.d = PpcFmulsInline(f8.d, f13.d);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f7.d));
    MemoryInline::FlatWriteRam32((r1 + 44), r11);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f10.d));
    f9.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f2.d = PpcFmulsInline(f7.d, f2.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f1.d));
    f2.d = PpcFmulsInline(f13.d, f2.d);
    f2.d = PpcFmulsInline(f13.d, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f2.d));
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword8 = PPC_FprLowWordInline(f2.d);
    r0 = fctiwzword8;
    goto loc_8002B094;
}

loc_8002AFD4:
{
    r11_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(30));
    r11 = (r11_rot_7 & 1);
}

loc_8002AFD8:
{
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_8002AFE4;
    }
}

loc_8002AFDC:
{
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 0u, (r2 + -31088));
    goto loc_8002AFE8;
}

loc_8002AFE4:
{
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 44u, (r2 + -31044));
}

loc_8002AFE8:
{
    r11_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(29));
    r11 = (r11_rot_8 & 1);
}

loc_8002AFEC:
{
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_8002AFF8;
    }
}

loc_8002AFF0:
{
    f12.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 0u, (r2 + -31088));
    goto loc_8002AFFC;
}

loc_8002AFF8:
{
    f12.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 44u, (r2 + -31044));
}

loc_8002AFFC:
{
    f7.d = static_cast<double>(PpcForceSingleValueInline(f12.d + f9.d));
    r11 = (r0 & 255);
    f2.d = PpcFmulsInline(f6.d, f12.d);
    r0 = (r16 & 255);
    r0 = (r0 - r11);
    MemoryInline::FlatWriteRam32((r1 + 44), r11);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f8.d));
    r0 = (r0 ^ -2147483648);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f9.d));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f11.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f7.d = PpcFmulsInline(f13.d, f7.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f2.d));
    f9.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f11.d = static_cast<double>(PpcForceSingleValueInline(f11.d - f1.d));
    f7.d = PpcFmulsInline(f13.d, f7.d);
    f2.d = PpcFmulsInline(f13.d, f2.d);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f10.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f2.d));
    f7.d = PpcFmulsInline(f13.d, f9.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f12.d + f2.d));
    f2.d = PpcFmulsInline(f7.d, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f11.d + f2.d));
    SetCRFloatResident(cr, 0, f2.d, f4.d);
}

loc_8002B05C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002B068;
    }
}

loc_8002B060:
{
    r0 = 0;
    goto loc_8002B094;
}

loc_8002B068:
{
    SetCRFloatResident(cr, 0, f2.d, f3.d);
}

loc_8002B06C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002B078;
    }
}

loc_8002B070:
{
    r0 = 255;
    goto loc_8002B094;
}

loc_8002B078:
{
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword9 = PPC_FprLowWordInline(f2.d);
    r0 = fctiwzword9;
    goto loc_8002B094;
}

loc_8002B088:
{
    r0 = (r0 & 255);
    goto loc_8002B094;
}

loc_8002B090:
{
    r0 = 0;
}

loc_8002B094:
{
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    goto loc_8002B0C4;
}

loc_8002B09C:
{
    r0 = MemoryInline::FlatRead8((r29 + 4));
    r0 = (r0 & 4);
}

loc_8002B0A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002B0C4;
    }
}

loc_8002B0A8:
{
    r0 = (r3 + 17405);
    r8 = (r8 * r0);
    r6 = (r6 * r0);
    r8 = (r8 + 2555904);
    r8 = (r8 + -24893);
    r6 = (r6 + 2555904);
    r6 = (r6 + -24893);
}

loc_8002B0C4:
{
    r10_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r10 = (r10_rot_8 & 65534);
    r7 = (r7 + 1);
    r30 = (r30 + 1);
}

loc_8002B0D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(r24));
}

loc_8002B0D4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002AE80;
    }
}

loc_8002B0D8:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 128);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 128));
    // inline leaf 0x800215C0 (17 guest instruction(s))
    guest_range_6 = MemoryInline::ResolveRangeHost((r11 + -64), 0, 64u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 0u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_6, 0u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_6, 4u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 8u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_6, 8u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_6, 12u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 16u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_6, 16u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_6, 20u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 24u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_6, 24u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_6, 28u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 32u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_6, 32u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_6, 36u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 40u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_6, 40u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_6, 44u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 48u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_6, 48u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_6, 52u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 56u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_6, 56u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_6, 60u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215C0
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
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFF1FFF gpr_write=0xFFFF1FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xC1 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80029E20 func_80029E20 preserves=false fpr_mask=0x80000000
