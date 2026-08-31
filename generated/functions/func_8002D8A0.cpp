#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8002D8A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
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
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r23_addr_0 = 0;
    uint32_t r23_addr_1 = 0;
    uint32_t r23_addr_10 = 0;
    uint32_t r23_addr_11 = 0;
    uint32_t r23_addr_12 = 0;
    uint32_t r23_addr_13 = 0;
    uint32_t r23_addr_14 = 0;
    uint32_t r23_addr_15 = 0;
    uint32_t r23_addr_16 = 0;
    uint32_t r23_addr_17 = 0;
    uint32_t r23_addr_18 = 0;
    uint32_t r23_addr_19 = 0;
    uint32_t r23_addr_2 = 0;
    uint32_t r23_addr_20 = 0;
    uint32_t r23_addr_21 = 0;
    uint32_t r23_addr_22 = 0;
    uint32_t r23_addr_23 = 0;
    uint32_t r23_addr_24 = 0;
    uint32_t r23_addr_25 = 0;
    uint32_t r23_addr_26 = 0;
    uint32_t r23_addr_27 = 0;
    uint32_t r23_addr_3 = 0;
    uint32_t r23_addr_4 = 0;
    uint32_t r23_addr_5 = 0;
    uint32_t r23_addr_6 = 0;
    uint32_t r23_addr_7 = 0;
    uint32_t r23_addr_8 = 0;
    uint32_t r23_addr_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_14 = 0;
    uint32_t r3_rot_15 = 0;
    uint32_t r3_rot_16 = 0;
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
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    uint32_t xer = ctx->xer;

    goto loc_8002D8A0;

loc_8002D8A0:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 96);
    // inline leaf 0x8002157C (15 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002157C
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 20u, true, false);
    r11 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r3 + 4));
    r10 = 1127219200;
    r0 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r3 + 12));
    r30 = (r3 + 32);
    r9 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r3 + 16));
    r12 = (r11 & 32);
}

loc_8002D8D4:
{
    r8 = (r30 + r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r3 + 20));
    r29 = (r9 + r8);
    MemoryInline::FlatWriteRam32((r1 + 8), r10);
    r31 = r3;
    r21 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r10);
    r20 = r5;
    r22 = r6;
    r18 = r7;
    r28 = (r29 + r0);
    r26 = 0;
    r19 = 0;
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_8002D94C;
    }
}

loc_8002D90C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r3 + 5));
}

loc_8002D914:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8002D94C;
    }
}

loc_8002D918:
{
    r0 = (r11 & 128);
}

loc_8002D91C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002D938;
    }
}

loc_8002D920:
{
    r27 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r3 + 8));
}

loc_8002D928:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r27))) {
        goto loc_8002D930;
    }
}

loc_8002D92C:
{
    goto loc_8002DBDC;
}

loc_8002D930:
{
    r27 = (r5 & 65535);
    goto loc_8002DBDC;
}

loc_8002D938:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r3 + 8));
    r0 = (r0 * r5);
    r0 = PPC_Divwu(static_cast<uint32_t>(r0), static_cast<uint32_t>(r7));
    r27 = (r0 & 65535);
    goto loc_8002DBDC;
}

loc_8002D94C:
{
    r0 = (r11 & 128);
}

loc_8002D950:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002DA24;
    }
}

loc_8002D954:
{
    r27 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r3 + 8));
}

loc_8002D95C:
{
    if ((static_cast<uint32_t>(r27) <= static_cast<uint32_t>(1))) {
        goto loc_8002D968;
    }
}

loc_8002D960:
{
    r0 = (r11 & 64);
}

loc_8002D964:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002D99C;
    }
}

loc_8002D968:
{
    r26 = PPC_Divwu(static_cast<uint32_t>(r5), static_cast<uint32_t>(r27));
}

loc_8002D970:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_8002D98C;
    }
}

loc_8002D974:
{
    r3 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r3 + 5));
}

loc_8002D97C:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(r3))) {
        goto loc_8002D98C;
    }
}

loc_8002D980:
{
    r0 = (r3 + -1);
    r26 = (r0 & 255);
    goto loc_8002DBDC;
}

loc_8002D98C:
{
    r0 = (r26 * r27);
    r0 = (r5 - r0);
    r27 = (r0 & 65535);
    goto loc_8002DBDC;
}

loc_8002D99C:
{
    r6 = (r27 + -1);
}

loc_8002D9A4:
{
    r26 = PPC_Divwu(static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_8002D9F8;
    }
}

loc_8002D9AC:
{
    r4 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r3 + 5));
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r26), static_cast<uint32_t>(r4));
}

loc_8002D9B4:
{
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8002D9F8;
    }
}

loc_8002D9B8:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r4 & 1);
    r0 = (r0 ^ r3);
    r0 = (r0 - r3);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002D9E8;
    }
}

loc_8002D9CC:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_8002D9E0;
    }
}

loc_8002D9D0:
{
    r0 = (r26 * r6);
    r0 = (r5 - r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002D9E0;
    }
}

loc_8002D9DC:
{
    r19 = 1;
}

loc_8002D9E0:
{
    r27 = 0;
    goto loc_8002D9EC;
}

loc_8002D9E8:
{
    r27 = (r6 & 65535);
}

loc_8002D9EC:
{
    r0 = (r4 + -1);
    r26 = (r0 & 255);
    goto loc_8002DBDC;
}

loc_8002D9F8:
{
    r0 = (r26 & 1);
}

loc_8002D9FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002DA10;
    }
}

loc_8002DA00:
{
    r0 = (r26 * r6);
    r0 = (r5 - r0);
    r27 = (r0 & 65535);
    goto loc_8002DBDC;
}

loc_8002DA10:
{
    r0 = (r26 + 1);
    r0 = (r6 * r0);
    r0 = (r0 - r5);
    r27 = (r0 & 65535);
    goto loc_8002DBDC;
}

loc_8002DA24:
{
}

loc_8002DA28:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r7))) {
        goto loc_8002DA68;
    }
}

loc_8002DA2C:
{
    r0 = (r11 & 64);
}

loc_8002DA30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002DA4C;
    }
}

loc_8002DA34:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r3 + 5));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r0 = (r0 & 1);
    r0 = (r0 ^ r4);
    r0 = (r0 - r4);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002DA54;
    }
}

loc_8002DA4C:
{
    r27 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r3 + 8));
    goto loc_8002DA58;
}

loc_8002DA54:
{
    r27 = 0;
}

loc_8002DA58:
{
    r3 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r3 + 5));
    r0 = (r3 + -1);
    r26 = (r0 & 255);
    goto loc_8002DBDC;
}

loc_8002DA68:
{
    r23 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r23), static_cast<uint32_t>(1));
}

loc_8002DA70:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002DA7C;
    }
}

loc_8002DA74:
{
    r0 = (r11 & 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8002DA78:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002DB10;
    }
}

loc_8002DA7C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r3 + 5));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f4.d = MemoryInline::FlatReadFloat64((r2 + -31080));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r23);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r7);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 12), r23);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f31.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
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
    r0 = (r3 * r23);
    MemoryInline::FlatWriteRam32((r1 + 20), r20);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31080));
    r26 = r3;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = PpcFmulsInline(f1.d, f31.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r27 = fctiwzword0;
    goto loc_8002DBDC;
}

loc_8002DB10:
{
    r23 = (r23 + -1);
    r24 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r3 + 5));
    MemoryInline::FlatWriteRam32((r1 + 12), r24);
    r0 = (r23 ^ -2147483648);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31072));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f4.d = MemoryInline::FlatReadFloat64((r2 + -31080));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r7);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -31064));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
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
    r26 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r23));
}

loc_8002DB74:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(r24))) {
        goto loc_8002DBB4;
    }
}

loc_8002DB78:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r0 = (r24 & 1);
    r0 = (r0 ^ r3);
    r0 = (r0 - r3);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002DBA4;
    }
}

loc_8002DB8C:
{
    r0 = (r18 + -1);
}

loc_8002DB94:
{
    if ((static_cast<uint32_t>(r20) != static_cast<uint32_t>(r0))) {
        goto loc_8002DB9C;
    }
}

loc_8002DB98:
{
    r19 = 1;
}

loc_8002DB9C:
{
    r27 = 0;
    goto loc_8002DBA8;
}

loc_8002DBA4:
{
    r27 = (r23 & 65535);
}

loc_8002DBA8:
{
    r0 = (r24 + -1);
    r26 = (r0 & 255);
    goto loc_8002DBDC;
}

loc_8002DBB4:
{
    r0 = (r26 & 1);
}

loc_8002DBB8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002DBCC;
    }
}

loc_8002DBBC:
{
    r0 = (r26 * r23);
    r0 = (r3 - r0);
    r27 = (r0 & 65535);
    goto loc_8002DBDC;
}

loc_8002DBCC:
{
    r0 = (r26 + 1);
    r0 = (r23 * r0);
    r0 = (r0 - r3);
    r27 = (r0 & 65535);
}

loc_8002DBDC:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 4), 0, 6u, true, false);
    r4 = MemoryInline::ReadResolved8(guest_range_2, 0u, (r31 + 4));
    r24 = 0;
    r3 = (r4 & 32);
}

loc_8002DBE8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8002DC34;
    }
}

loc_8002DBEC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r31 + 5));
}

loc_8002DBF4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8002DC34;
    }
}

loc_8002DBF8:
{
    r0 = (r4 & 128);
}

loc_8002DBFC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002DC1C;
    }
}

loc_8002DC00:
{
    r25 = MemoryInline::ReadResolved16(guest_range_2, 4u, (r31 + 8));
    r0 = (r20 + 1);
}

loc_8002DC0C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r25))) {
        goto loc_8002DC14;
    }
}

loc_8002DC10:
{
    goto loc_8002DEC8;
}

loc_8002DC14:
{
    r25 = (r0 & 65535);
    goto loc_8002DEC8;
}

loc_8002DC1C:
{
    r3 = MemoryInline::ReadResolved16(guest_range_2, 4u, (r31 + 8));
    r0 = (r20 + 1);
    r0 = (r3 * r0);
    r0 = PPC_Divwu(static_cast<uint32_t>(r0), static_cast<uint32_t>(r18));
    r25 = (r0 & 65535);
    goto loc_8002DEC8;
}

loc_8002DC34:
{
    r0 = (r4 & 128);
}

loc_8002DC38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002DD10;
    }
}

loc_8002DC3C:
{
    r25 = MemoryInline::ReadResolved16(guest_range_2, 4u, (r31 + 8));
}

loc_8002DC44:
{
    if ((static_cast<uint32_t>(r25) <= static_cast<uint32_t>(1))) {
        goto loc_8002DC50;
    }
}

loc_8002DC48:
{
    r0 = (r4 & 64);
}

loc_8002DC4C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002DC8C;
    }
}

loc_8002DC50:
{
    r0 = (r20 + 1);
}

loc_8002DC58:
{
    r24 = PPC_Divwu(static_cast<uint32_t>(r0), static_cast<uint32_t>(r25));
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8002DC78;
    }
}

loc_8002DC60:
{
    r3 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r31 + 5));
}

loc_8002DC68:
{
    if ((static_cast<uint32_t>(r24) < static_cast<uint32_t>(r3))) {
        goto loc_8002DC78;
    }
}

loc_8002DC6C:
{
    r0 = (r3 + -1);
    r24 = (r0 & 255);
    goto loc_8002DEC8;
}

loc_8002DC78:
{
    r3 = (r24 * r25);
    r0 = (r20 + 1);
    r0 = (r0 - r3);
    r25 = (r0 & 65535);
    goto loc_8002DEC8;
}

loc_8002DC8C:
{
    r6 = (r25 + -1);
    r0 = (r20 + 1);
    r24 = PPC_Divwu(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
}

loc_8002DC9C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8002DCDC;
    }
}

loc_8002DCA0:
{
    r5 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r31 + 5));
}

loc_8002DCA8:
{
    if ((static_cast<uint32_t>(r24) < static_cast<uint32_t>(r5))) {
        goto loc_8002DCDC;
    }
}

loc_8002DCAC:
{
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r4 = (r4_rot_5 & 1);
    r0 = (r5 & 1);
    r3 = (r0 ^ r4);
    r4 = (r3 - r4);
    r0 = (r5 + -1);
    r4 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    r3 = (r6 & 65535);
    r24 = (r0 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 1);
    r0 = (0 - r0);
    r25 = (r3 & ~r0);
    goto loc_8002DEC8;
}

loc_8002DCDC:
{
    r0 = (r24 & 1);
}

loc_8002DCE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002DCF8;
    }
}

loc_8002DCE4:
{
    r3 = (r24 * r6);
    r0 = (r20 + 1);
    r0 = (r0 - r3);
    r25 = (r0 & 65535);
    goto loc_8002DEC8;
}

loc_8002DCF8:
{
    r0 = (r24 + 1);
    r3 = (r6 * r0);
    r0 = (r3 + -1);
    r0 = (r0 - r20);
    r25 = (r0 & 65535);
    goto loc_8002DEC8;
}

loc_8002DD10:
{
    r3 = (r20 + 1);
}

loc_8002DD18:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r18))) {
        goto loc_8002DD58;
    }
}

loc_8002DD1C:
{
    r0 = (r4 & 64);
}

loc_8002DD20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002DD3C;
    }
}

loc_8002DD24:
{
    r0 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r31 + 5));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    r0 = (r0 & 1);
    r0 = (r0 ^ r3);
    r0 = (r0 - r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002DD44;
    }
}

loc_8002DD3C:
{
    r25 = MemoryInline::ReadResolved16(guest_range_2, 4u, (r31 + 8));
    goto loc_8002DD48;
}

loc_8002DD44:
{
    r25 = 0;
}

loc_8002DD48:
{
    r3 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r31 + 5));
    r0 = (r3 + -1);
    r24 = (r0 & 255);
    goto loc_8002DEC8;
}

loc_8002DD58:
{
    r23 = MemoryInline::ReadResolved16(guest_range_2, 4u, (r31 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r23), static_cast<uint32_t>(1));
}

loc_8002DD60:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002DD6C;
    }
}

loc_8002DD64:
{
    r0 = (r4 & 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8002DD68:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002DE08;
    }
}

loc_8002DD6C:
{
    r3 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r31 + 5));
    r0 = (r20 + 1);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    f4.d = MemoryInline::FlatReadFloat64((r2 + -31080));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r23);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r18);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 12), r23);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f31.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
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
    r0 = (r3 * r23);
    r4 = (r20 + 1);
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    r24 = r3;
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31080));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = PpcFmulsInline(f1.d, f31.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r25 = fctiwzword1;
    goto loc_8002DEC8;
}

loc_8002DE08:
{
    r23 = (r23 + -1);
    r25 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r31 + 5));
    MemoryInline::FlatWriteRam32((r1 + 12), r25);
    r0 = (r23 ^ -2147483648);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31072));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f4.d = MemoryInline::FlatReadFloat64((r2 + -31080));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r18);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -31064));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
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
    r24 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r23));
}

loc_8002DE6C:
{
    if ((static_cast<uint32_t>(r24) < static_cast<uint32_t>(r25))) {
        goto loc_8002DEA0;
    }
}

loc_8002DE70:
{
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(1));
    r4 = (r4_rot_6 & 1);
    r0 = (r25 & 1);
    r3 = (r0 ^ r4);
    r4 = (r3 - r4);
    r0 = (r25 + -1);
    r4 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    r3 = (r23 & 65535);
    r24 = (r0 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 1);
    r0 = (0 - r0);
    r25 = (r3 & ~r0);
    goto loc_8002DEC8;
}

loc_8002DEA0:
{
    r0 = (r24 & 1);
}

loc_8002DEA4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002DEB8;
    }
}

loc_8002DEA8:
{
    r0 = (r24 * r23);
    r0 = (r3 - r0);
    r25 = (r0 & 65535);
    goto loc_8002DEC8;
}

loc_8002DEB8:
{
    r0 = (r24 + 1);
    r0 = (r23 * r0);
    r0 = (r0 - r3);
    r25 = (r0 & 65535);
}

loc_8002DEC8:
{
}

loc_8002DECC:
{
    r3 = (r25 & 65535);
    r23 = (r30 + 4);
    if ((static_cast<uint32_t>(r26) != static_cast<uint32_t>(r24))) {
        goto loc_8002E108;
    }
}

loc_8002DED8:
{
    r0 = (r27 & 65535);
}

loc_8002DEE0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8002DEF0;
    }
}

loc_8002DEE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r19), static_cast<int32_t>(0));
}

loc_8002DEE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002E634;
    }
}

loc_8002DEEC:
{
    r25 = 1;
}

loc_8002DEF0:
{
    r0 = (r27 & 65535);
    r3 = (r25 & 65535);
}

loc_8002DEFC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r3))) {
        goto loc_8002E004;
    }
}

loc_8002DF00:
{
    r3 = MemoryInline::FlatRead16(r30);
    r5 = 0;
    r4 = MemoryInline::FlatRead16(r23);
    r19 = (r3 + -1);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r19), static_cast<uint32_t>(1));
    r3 = (r3_rot_8 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_8002DF18:
{
    r3 = (r3 + r19);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r3) >> 1);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8002DF28;
    }
}

loc_8002DF24:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002DF30;
    }
}

loc_8002DF28:
{
    r19 = 0;
    goto loc_8002DFA4;
}

loc_8002DF30:
{
    r3 = (r19 * 24);
    r23_addr_1 = (r23 + r3);
    r3 = MemoryInline::FlatRead16(r23_addr_1);
}

loc_8002DF3C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_8002DFA4;
    }
}

loc_8002DF40:
{
}

loc_8002DF48:
{
    r3 = (r4 * 24);
    r23_addr_2 = (r23 + r3);
    r3 = MemoryInline::FlatRead16(r23_addr_2);
    goto loc_8002DF98;
}

loc_8002DF58:
{
}

loc_8002DF5C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r3))) {
        goto loc_8002DF68;
    }
}

loc_8002DF60:
{
    r19 = r4;
    goto loc_8002DF80;
}

loc_8002DF68:
{
}

loc_8002DF6C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_8002DF74;
    }
}

loc_8002DF70:
{
    r5 = r4;
}

loc_8002DF74:
{
}

loc_8002DF78:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_8002DF80;
    }
}

loc_8002DF7C:
{
    r19 = r4;
}

loc_8002DF80:
{
    r4 = (r5 + r19);
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_10 & 1);
    r3 = (r3 + r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r3) >> 1);
    r3 = (r4 * 24);
    r23_addr_4 = (r23 + r3);
    r3 = MemoryInline::FlatRead16(r23_addr_4);
}

loc_8002DF98:
{
}

loc_8002DF9C:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r4))) {
        goto loc_8002DF58;
    }
}

loc_8002DFA0:
{
    r19 = r5;
}

loc_8002DFA4:
{
    r0 = (r19 * 24);
    r18 = (r25 & 65535);
    r20 = (r27 & 65535);
    r23 = (r23 + r0);
    goto loc_8002DFF4;
}

loc_8002DFB8:
{
    r0 = MemoryInline::FlatRead16(r23);
}

loc_8002DFC0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r20))) {
        goto loc_8002DFEC;
    }
}

loc_8002DFC4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r18), static_cast<uint32_t>(r0));
}

loc_8002DFC8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002E634;
    }
}

loc_8002DFCC:
{
    r3 = r23;
    r4 = r22;
    r5 = r31;
    r6 = r28;
    r7 = r29;
    r8 = r21;
    r9 = r26;
    ctx->lr = 0x8002DFECu;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8002D730u>(ctx);
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
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
}

loc_8002DFEC:
{
    r23 = (r23 + 24);
    r19 = (r19 + 1);
}

loc_8002DFF4:
{
    r0 = MemoryInline::FlatRead16(r30);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r19), static_cast<int32_t>(r0));
}

loc_8002DFFC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8002DFB8;
    }
}

loc_8002E000:
{
    goto loc_8002E634;
}

loc_8002E004:
{
    r3 = MemoryInline::FlatRead16(r30);
    r5 = 0;
    r4 = MemoryInline::FlatRead16(r23);
    r19 = (r3 + -1);
    r3_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r19), static_cast<uint32_t>(1));
    r3 = (r3_rot_12 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_8002E01C:
{
    r3 = (r3 + r19);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r3) >> 1);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8002E02C;
    }
}

loc_8002E028:
{
    goto loc_8002E034;
}

loc_8002E02C:
{
    r19 = 0;
    goto loc_8002E0AC;
}

loc_8002E034:
{
    r3 = (r19 * 24);
    r23_addr_6 = (r23 + r3);
    r3 = MemoryInline::FlatRead16(r23_addr_6);
}

loc_8002E040:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_8002E0AC;
    }
}

loc_8002E044:
{
}

loc_8002E048:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r3))) {
        goto loc_8002E050;
    }
}

loc_8002E04C:
{
    goto loc_8002E0AC;
}

loc_8002E050:
{
    r3 = (r4 * 24);
    r23_addr_7 = (r23 + r3);
    r3 = MemoryInline::FlatRead16(r23_addr_7);
    goto loc_8002E0A0;
}

loc_8002E060:
{
}

loc_8002E064:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r3))) {
        goto loc_8002E070;
    }
}

loc_8002E068:
{
    r5 = r4;
    goto loc_8002E088;
}

loc_8002E070:
{
}

loc_8002E074:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_8002E07C;
    }
}

loc_8002E078:
{
    r5 = r4;
}

loc_8002E07C:
{
}

loc_8002E080:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_8002E088;
    }
}

loc_8002E084:
{
    r19 = r4;
}

loc_8002E088:
{
    r4 = (r5 + r19);
    r3_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_14 & 1);
    r3 = (r3 + r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r3) >> 1);
    r3 = (r4 * 24);
    r23_addr_9 = (r23 + r3);
    r3 = MemoryInline::FlatRead16(r23_addr_9);
}

loc_8002E0A0:
{
}

loc_8002E0A4:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r4))) {
        goto loc_8002E060;
    }
}

loc_8002E0A8:
{
    r19 = r5;
}

loc_8002E0AC:
{
    r0 = (r19 * 24);
    r18 = (r25 & 65535);
    r20 = (r27 & 65535);
    r23 = (r23 + r0);
    goto loc_8002E0FC;
}

loc_8002E0C0:
{
    r0 = MemoryInline::FlatRead16(r23);
}

loc_8002E0C8:
{
    if ((static_cast<uint32_t>(r20) < static_cast<uint32_t>(r0))) {
        goto loc_8002E0F4;
    }
}

loc_8002E0CC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r18));
}

loc_8002E0D0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002E634;
    }
}

loc_8002E0D4:
{
    r3 = r23;
    r4 = r22;
    r5 = r31;
    r6 = r28;
    r7 = r29;
    r8 = r21;
    r9 = r26;
    ctx->lr = 0x8002E0F4u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8002D730u>(ctx);
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
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
}

loc_8002E0F4:
{
    r23 = (r23 + -24);
    r19 = (r19 + -1);
}

loc_8002E0FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r19), static_cast<int32_t>(0));
}

loc_8002E100:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002E0C0;
    }
}

loc_8002E104:
{
    goto loc_8002E634;
}

loc_8002E108:
{
    r0 = MemoryInline::FlatRead8((r31 + 4));
    r0 = (r0 & 64);
}

loc_8002E110:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002E49C;
    }
}

loc_8002E114:
{
    r20 = (r26 & 1);
}

loc_8002E118:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(0))) {
        goto loc_8002E228;
    }
}

loc_8002E11C:
{
    r3 = MemoryInline::FlatRead16(r30);
    r4 = (r27 & 65535);
    r5 = MemoryInline::FlatRead16(r23);
    r6 = 0;
    r19 = (r3 + -1);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r19), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r5));
}

loc_8002E138:
{
    r0 = (r0 + r19);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r0) >> 1);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8002E148;
    }
}

loc_8002E144:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002E150;
    }
}

loc_8002E148:
{
    r19 = 0;
    goto loc_8002E1C4;
}

loc_8002E150:
{
    r0 = (r19 * 24);
    r23_addr_11 = (r23 + r0);
    r0 = MemoryInline::FlatRead16(r23_addr_11);
}

loc_8002E15C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r4))) {
        goto loc_8002E1C4;
    }
}

loc_8002E160:
{
}

loc_8002E168:
{
    r0 = (r3 * 24);
    r23_addr_12 = (r23 + r0);
    r0 = MemoryInline::FlatRead16(r23_addr_12);
    goto loc_8002E1B8;
}

loc_8002E178:
{
}

loc_8002E17C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_8002E188;
    }
}

loc_8002E180:
{
    r19 = r3;
    goto loc_8002E1A0;
}

loc_8002E188:
{
}

loc_8002E18C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r4))) {
        goto loc_8002E194;
    }
}

loc_8002E190:
{
    r6 = r3;
}

loc_8002E194:
{
}

loc_8002E198:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r4))) {
        goto loc_8002E1A0;
    }
}

loc_8002E19C:
{
    r19 = r3;
}

loc_8002E1A0:
{
    r3 = (r6 + r19);
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
    r3 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r3 * 24);
    r23_addr_14 = (r23 + r0);
    r0 = MemoryInline::FlatRead16(r23_addr_14);
}

loc_8002E1B8:
{
}

loc_8002E1BC:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r3))) {
        goto loc_8002E178;
    }
}

loc_8002E1C0:
{
    r19 = r6;
}

loc_8002E1C4:
{
    r0 = (r19 * 24);
    r18 = (r27 & 65535);
    r27 = (r23 + r0);
    goto loc_8002E218;
}

loc_8002E1D4:
{
    r4 = MemoryInline::FlatRead16(r27);
}

loc_8002E1DC:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r18))) {
        goto loc_8002E210;
    }
}

loc_8002E1E0:
{
    r3 = MemoryInline::FlatRead16((r31 + 8));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8002E1EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002E328;
    }
}

loc_8002E1F0:
{
    r3 = r27;
    r4 = r22;
    r5 = r31;
    r6 = r28;
    r7 = r29;
    r8 = r21;
    r9 = r26;
    ctx->lr = 0x8002E210u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8002D730u>(ctx);
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
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
}

loc_8002E210:
{
    r27 = (r27 + 24);
    r19 = (r19 + 1);
}

loc_8002E218:
{
    r0 = MemoryInline::FlatRead16(r30);
}

loc_8002E220:
{
    if ((static_cast<int32_t>(r19) < static_cast<int32_t>(r0))) {
        goto loc_8002E1D4;
    }
}

loc_8002E224:
{
    goto loc_8002E328;
}

loc_8002E228:
{
    r3 = MemoryInline::FlatRead16(r30);
    r4 = (r27 & 65535);
    r5 = MemoryInline::FlatRead16(r23);
    r6 = 0;
    r19 = (r3 + -1);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r19), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r5));
}

loc_8002E244:
{
    r0 = (r0 + r19);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r0) >> 1);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8002E254;
    }
}

loc_8002E250:
{
    goto loc_8002E25C;
}

loc_8002E254:
{
    r19 = 0;
    goto loc_8002E2D4;
}

loc_8002E25C:
{
    r0 = (r19 * 24);
    r23_addr_16 = (r23 + r0);
    r0 = MemoryInline::FlatRead16(r23_addr_16);
}

loc_8002E268:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r4))) {
        goto loc_8002E2D4;
    }
}

loc_8002E26C:
{
}

loc_8002E270:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_8002E278;
    }
}

loc_8002E274:
{
    goto loc_8002E2D4;
}

loc_8002E278:
{
    r0 = (r3 * 24);
    r23_addr_17 = (r23 + r0);
    r0 = MemoryInline::FlatRead16(r23_addr_17);
    goto loc_8002E2C8;
}

loc_8002E288:
{
}

loc_8002E28C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_8002E298;
    }
}

loc_8002E290:
{
    r6 = r3;
    goto loc_8002E2B0;
}

loc_8002E298:
{
}

loc_8002E29C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r4))) {
        goto loc_8002E2A4;
    }
}

loc_8002E2A0:
{
    r6 = r3;
}

loc_8002E2A4:
{
}

loc_8002E2A8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r4))) {
        goto loc_8002E2B0;
    }
}

loc_8002E2AC:
{
    r19 = r3;
}

loc_8002E2B0:
{
    r3 = (r6 + r19);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & 1);
    r0 = (r0 + r3);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r3 * 24);
    r23_addr_19 = (r23 + r0);
    r0 = MemoryInline::FlatRead16(r23_addr_19);
}

loc_8002E2C8:
{
}

loc_8002E2CC:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r3))) {
        goto loc_8002E288;
    }
}

loc_8002E2D0:
{
    r19 = r6;
}

loc_8002E2D4:
{
    r0 = (r19 * 24);
    r18 = (r27 & 65535);
    r27 = (r23 + r0);
    goto loc_8002E320;
}

loc_8002E2E4:
{
    r0 = MemoryInline::FlatRead16(r27);
}

loc_8002E2EC:
{
    if ((static_cast<uint32_t>(r18) < static_cast<uint32_t>(r0))) {
        goto loc_8002E318;
    }
}

loc_8002E2F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8002E2F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002E328;
    }
}

loc_8002E2F8:
{
    r3 = r27;
    r4 = r22;
    r5 = r31;
    r6 = r28;
    r7 = r29;
    r8 = r21;
    r9 = r26;
    ctx->lr = 0x8002E318u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8002D730u>(ctx);
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
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
}

loc_8002E318:
{
    r27 = (r27 + -24);
    r19 = (r19 + -1);
}

loc_8002E320:
{
}

loc_8002E324:
{
    if ((static_cast<int32_t>(r19) >= static_cast<int32_t>(0))) {
        goto loc_8002E2E4;
    }
}

loc_8002E328:
{
    r18 = (r26 + 1);
    goto loc_8002E3E4;
}

loc_8002E330:
{
}

loc_8002E334:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(0))) {
        goto loc_8002E390;
    }
}

loc_8002E338:
{
    r19 = r23;
    r27 = 0;
    goto loc_8002E380;
}

loc_8002E344:
{
    r3 = MemoryInline::FlatRead16((r31 + 8));
    r4 = MemoryInline::FlatRead16(r19);
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8002E354:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002E3E0;
    }
}

loc_8002E358:
{
    r3 = r19;
    r4 = r22;
    r5 = r31;
    r6 = r28;
    r7 = r29;
    r8 = r21;
    r9 = r26;
    ctx->lr = 0x8002E378u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8002D730u>(ctx);
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
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    r19 = (r19 + 24);
    r27 = (r27 + 1);
}

loc_8002E380:
{
    r0 = MemoryInline::FlatRead16(r30);
}

loc_8002E388:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r0))) {
        goto loc_8002E344;
    }
}

loc_8002E38C:
{
    goto loc_8002E3E0;
}

loc_8002E390:
{
    r3 = MemoryInline::FlatRead16(r30);
    r19 = (r3 + -1);
    r0 = (r19 * 24);
    r27 = (r23 + r0);
    goto loc_8002E3D8;
}

loc_8002E3A4:
{
    r0 = MemoryInline::FlatRead16(r27);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8002E3AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002E3E0;
    }
}

loc_8002E3B0:
{
    r3 = r27;
    r4 = r22;
    r5 = r31;
    r6 = r28;
    r7 = r29;
    r8 = r21;
    r9 = r26;
    ctx->lr = 0x8002E3D0u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8002D730u>(ctx);
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
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    r27 = (r27 + -24);
    r19 = (r19 + -1);
}

loc_8002E3D8:
{
}

loc_8002E3DC:
{
    if ((static_cast<int32_t>(r19) >= static_cast<int32_t>(0))) {
        goto loc_8002E3A4;
    }
}

loc_8002E3E0:
{
    r18 = (r18 + 1);
}

loc_8002E3E4:
{
}

loc_8002E3E8:
{
    if ((static_cast<uint32_t>(r18) < static_cast<uint32_t>(r24))) {
        goto loc_8002E330;
    }
}

loc_8002E3EC:
{
    r0 = (r24 & 1);
}

loc_8002E3F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002E444;
    }
}

loc_8002E3F4:
{
    r18 = (r25 & 65535);
    r19 = 0;
    goto loc_8002E434;
}

loc_8002E400:
{
    r0 = MemoryInline::FlatRead16(r23);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r18), static_cast<uint32_t>(r0));
}

loc_8002E408:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002E634;
    }
}

loc_8002E40C:
{
    r3 = r23;
    r4 = r22;
    r5 = r31;
    r6 = r28;
    r7 = r29;
    r8 = r21;
    r9 = r26;
    ctx->lr = 0x8002E42Cu;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8002D730u>(ctx);
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
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    r23 = (r23 + 24);
    r19 = (r19 + 1);
}

loc_8002E434:
{
    r0 = MemoryInline::FlatRead16(r30);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r19), static_cast<int32_t>(r0));
}

loc_8002E43C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8002E400;
    }
}

loc_8002E440:
{
    goto loc_8002E634;
}

loc_8002E444:
{
    r3 = MemoryInline::FlatRead16(r30);
    r18 = (r25 & 65535);
    r19 = (r3 + -1);
    r0 = (r19 * 24);
    r20 = (r23 + r0);
    goto loc_8002E490;
}

loc_8002E45C:
{
    r0 = MemoryInline::FlatRead16(r20);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r18), static_cast<uint32_t>(r0));
}

loc_8002E464:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002E634;
    }
}

loc_8002E468:
{
    r3 = r20;
    r4 = r22;
    r5 = r31;
    r6 = r28;
    r7 = r29;
    r8 = r21;
    r9 = r26;
    ctx->lr = 0x8002E488u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8002D730u>(ctx);
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
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    r20 = (r20 + -24);
    r19 = (r19 + -1);
}

loc_8002E490:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r19), static_cast<int32_t>(0));
}

loc_8002E494:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002E45C;
    }
}

loc_8002E498:
{
    goto loc_8002E634;
}

loc_8002E49C:
{
    r3 = MemoryInline::FlatRead16(r30);
    r4 = (r27 & 65535);
    r5 = MemoryInline::FlatRead16(r23);
    r6 = 0;
    r20 = (r3 + -1);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r20), static_cast<uint32_t>(1));
    r0 = (r0_rot_13 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r5));
}

loc_8002E4B8:
{
    r0 = (r0 + r20);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r0) >> 1);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8002E4C8;
    }
}

loc_8002E4C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002E4D0;
    }
}

loc_8002E4C8:
{
    r20 = 0;
    goto loc_8002E544;
}

loc_8002E4D0:
{
    r0 = (r20 * 24);
    r23_addr_22 = (r23 + r0);
    r0 = MemoryInline::FlatRead16(r23_addr_22);
}

loc_8002E4DC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r4))) {
        goto loc_8002E544;
    }
}

loc_8002E4E0:
{
}

loc_8002E4E8:
{
    r0 = (r3 * 24);
    r23_addr_23 = (r23 + r0);
    r0 = MemoryInline::FlatRead16(r23_addr_23);
    goto loc_8002E538;
}

loc_8002E4F8:
{
}

loc_8002E4FC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_8002E508;
    }
}

loc_8002E500:
{
    r20 = r3;
    goto loc_8002E520;
}

loc_8002E508:
{
}

loc_8002E50C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r4))) {
        goto loc_8002E514;
    }
}

loc_8002E510:
{
    r6 = r3;
}

loc_8002E514:
{
}

loc_8002E518:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r4))) {
        goto loc_8002E520;
    }
}

loc_8002E51C:
{
    r20 = r3;
}

loc_8002E520:
{
    r3 = (r6 + r20);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_15 & 1);
    r0 = (r0 + r3);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r3 * 24);
    r23_addr_25 = (r23 + r0);
    r0 = MemoryInline::FlatRead16(r23_addr_25);
}

loc_8002E538:
{
}

loc_8002E53C:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r3))) {
        goto loc_8002E4F8;
    }
}

loc_8002E540:
{
    r20 = r6;
}

loc_8002E544:
{
    r0 = (r20 * 24);
    r18 = (r27 & 65535);
    r19 = (r23 + r0);
    goto loc_8002E588;
}

loc_8002E554:
{
    r0 = MemoryInline::FlatRead16(r19);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r18));
}

loc_8002E55C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8002E580;
    }
}

loc_8002E560:
{
    r3 = r19;
    r4 = r22;
    r5 = r31;
    r6 = r28;
    r7 = r29;
    r8 = r21;
    r9 = r26;
    ctx->lr = 0x8002E580u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8002D730u>(ctx);
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
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
}

loc_8002E580:
{
    r19 = (r19 + 24);
    r20 = (r20 + 1);
}

loc_8002E588:
{
    r0 = MemoryInline::FlatRead16(r30);
}

loc_8002E590:
{
    if ((static_cast<int32_t>(r20) < static_cast<int32_t>(r0))) {
        goto loc_8002E554;
    }
}

loc_8002E594:
{
    r20 = (r26 + 1);
    goto loc_8002E5E0;
}

loc_8002E59C:
{
    r19 = r23;
    r18 = 0;
    goto loc_8002E5D0;
}

loc_8002E5A8:
{
    r3 = r19;
    r4 = r22;
    r5 = r31;
    r6 = r28;
    r7 = r29;
    r8 = r21;
    r9 = r26;
    ctx->lr = 0x8002E5C8u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8002D730u>(ctx);
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
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    r19 = (r19 + 24);
    r18 = (r18 + 1);
}

loc_8002E5D0:
{
    r0 = MemoryInline::FlatRead16(r30);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r18), static_cast<int32_t>(r0));
}

loc_8002E5D8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8002E5A8;
    }
}

loc_8002E5DC:
{
    r20 = (r20 + 1);
}

loc_8002E5E0:
{
}

loc_8002E5E4:
{
    if ((static_cast<uint32_t>(r20) < static_cast<uint32_t>(r24))) {
        goto loc_8002E59C;
    }
}

loc_8002E5E8:
{
    r18 = (r25 & 65535);
    r19 = 0;
    goto loc_8002E628;
}

loc_8002E5F4:
{
    r0 = MemoryInline::FlatRead16(r23);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r18), static_cast<uint32_t>(r0));
}

loc_8002E5FC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002E634;
    }
}

loc_8002E600:
{
    r3 = r23;
    r4 = r22;
    r5 = r31;
    r6 = r28;
    r7 = r29;
    r8 = r21;
    r9 = r26;
    ctx->lr = 0x8002E620u;
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
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8002D730u>(ctx);
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
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    r23 = (r23 + 24);
    r19 = (r19 + 1);
}

loc_8002E628:
{
    r0 = MemoryInline::FlatRead16(r30);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r19), static_cast<int32_t>(r0));
}

loc_8002E630:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8002E5F4;
    }
}

loc_8002E634:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 96);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 96));
    // inline leaf 0x800215C8 (15 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 32u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 40u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_3, 40u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_3, 44u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 48u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_3, 48u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_3, 52u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215C8
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
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
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFC1FFF gpr_write=0xFFFC1FFB gpr_return=0x00000018 fpr_read=0x8000001F fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0xC3 cr_write=0xC3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8002D8A0 func_8002D8A0 preserves=false fpr_mask=0x80000000
