#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8002B100(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r0_rot_28 = 0;
    uint32_t r0_rot_29 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_30 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r22_rot_0 = 0;
    uint32_t r22_rot_1 = 0;
    uint32_t r22_rot_2 = 0;
    uint32_t r23_rot_0 = 0;
    uint32_t r23_rot_1 = 0;
    uint32_t r23_rot_2 = 0;
    uint32_t r23_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
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
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_addr_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r7_rot_8 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint32_t r9_rot_6 = 0;
    uint32_t r9_rot_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8002B100;

loc_8002B100:
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
    // inline leaf 0x8002158C (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002158C
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 20u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, r3);
    r8 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 32), r8);
    r29 = r3;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(171));
}

loc_8002B130:
{
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 40), r8);
    r23 = r5;
    r31 = r6;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002B150;
    }
}

loc_8002B144:
{
    r6 = r7;
    ctx->lr = 0x8002B14Cu;
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
    InvokeDirectCpu<0x8002E9B0u>(ctx);
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
    goto loc_8002C090;
}

loc_8002B150:
{
    r4 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r3 + 8));
    r26 = (r3 + 32);
    r8 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r3 + 12));
    r6 = 0;
}

loc_8002B164:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r3 + 16));
    r25 = (r26 + r8);
    r27 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r3 + 3));
    r24 = (r25 + r0);
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(1))) {
        goto loc_8002B188;
    }
}

loc_8002B178:
{
    f4.d = MemoryInline::FlatReadFloat32((r2 + -31088));
    r6 = r23;
    r7 = 0;
    goto loc_8002B45C;
}

loc_8002B188:
{
    r22 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r3 + 4));
    r8 = (r22 & 32);
}

loc_8002B190:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8002B264;
    }
}

loc_8002B194:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r3 + 5));
}

loc_8002B19C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8002B264;
    }
}

loc_8002B1A0:
{
    r0 = (r22 & 128);
}

loc_8002B1A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002B1D0;
    }
}

loc_8002B1A8:
{
    r0 = (r4 + -1);
    r7 = (r5 & 65535);
}

loc_8002B1B4:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r0))) {
        goto loc_8002B1BC;
    }
}

loc_8002B1B8:
{
    r7 = (r0 & 65535);
}

loc_8002B1BC:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r7);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31080));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8002B45C;
}

loc_8002B1D0:
{
}

loc_8002B1D4:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(1))) {
        goto loc_8002B1F4;
    }
}

loc_8002B1D8:
{
    r0 = (r4 + -1);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31072));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8002B254;
}

loc_8002B1F4:
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

loc_8002B244:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002B254;
    }
}

loc_8002B248:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
}

loc_8002B254:
{
    f0.d = PPC_Fctiwz(f4.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r7 = fctiwzword0;
    goto loc_8002B45C;
}

loc_8002B264:
{
    r0 = (r22 & 128);
}

loc_8002B268:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002B334;
    }
}

loc_8002B26C:
{
    r7 = (r4 + -1);
    r0 = (r22 & 64);
}

loc_8002B274:
{
    r6 = PPC_Divwu(static_cast<uint32_t>(r5), static_cast<uint32_t>(r7));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002B2B0;
    }
}

loc_8002B27C:
{
}

loc_8002B280:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8002B2A0;
    }
}

loc_8002B284:
{
    r3 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r3 + 5));
}

loc_8002B28C:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r3))) {
        goto loc_8002B2A0;
    }
}

loc_8002B290:
{
    r0 = (r3 + -1);
    r7 = (r7 & 65535);
    r6 = (r0 & 255);
    goto loc_8002B31C;
}

loc_8002B2A0:
{
    r0 = (r6 * r7);
    r0 = (r5 - r0);
    r7 = (r0 & 65535);
    goto loc_8002B31C;
}

loc_8002B2B0:
{
}

loc_8002B2B4:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8002B2F4;
    }
}

loc_8002B2B8:
{
    r8 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r3 + 5));
}

loc_8002B2C0:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r8))) {
        goto loc_8002B2F4;
    }
}

loc_8002B2C4:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r0 = (r8 & 1);
    r3 = (r0 ^ r4);
    r4 = (r3 - r4);
    r0 = (r8 + -1);
    r4 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    r3 = (r7 & 65535);
    r6 = (r0 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 1);
    r0 = (0 - r0);
    r7 = (r3 & ~r0);
    goto loc_8002B31C;
}

loc_8002B2F4:
{
    r0 = (r6 & 1);
}

loc_8002B2F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002B30C;
    }
}

loc_8002B2FC:
{
    r0 = (r6 * r7);
    r0 = (r5 - r0);
    r7 = (r0 & 65535);
    goto loc_8002B31C;
}

loc_8002B30C:
{
    r0 = (r6 + 1);
    r0 = (r7 * r0);
    r0 = (r0 - r5);
    r7 = (r0 & 65535);
}

loc_8002B31C:
{
    r0 = (r7 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31080));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8002B45C;
}

loc_8002B334:
{
    r6 = (r7 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
}

loc_8002B33C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8002B390;
    }
}

loc_8002B340:
{
    r0 = (r22 & 64);
}

loc_8002B344:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002B360;
    }
}

loc_8002B348:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r3 + 5));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & 1);
    r0 = (r0 & 1);
    r0 = (r0 ^ r5);
    r0 = (r0 - r5);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002B36C;
    }
}

loc_8002B360:
{
    r0 = (r4 + -1);
    r7 = (r0 & 65535);
    goto loc_8002B370;
}

loc_8002B36C:
{
    r7 = 0;
}

loc_8002B370:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r7);
    r3 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r3 + 5));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31080));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r0 = (r3 + -1);
    r6 = (r0 & 255);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8002B45C;
}

loc_8002B390:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r3 + 5));
    r28 = (r4 + -1);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    r0 = (r28 ^ -2147483648);
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
    r4 = (r3 * r28);
    MemoryInline::FlatWriteRam32((r1 + 36), r23);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31080));
    r0 = (r22 & 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8002B404:
{
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r6 = r3;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteRam32((r1 + 44), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f1.d = PpcFmulsInline(f1.d, f31.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002B42C;
    }
}

loc_8002B428:
{
    goto loc_8002B450;
}

loc_8002B42C:
{
    r0 = (r3 & 1);
}

loc_8002B430:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002B438;
    }
}

loc_8002B434:
{
    goto loc_8002B450;
}

loc_8002B438:
{
    r0 = (r28 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31072));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
}

loc_8002B450:
{
    f0.d = PPC_Fctiwz(f4.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r7 = fctiwzword1;
}

loc_8002B45C:
{
    r3 = 0x80270000u;
    r4 = 0x80270000u;
    r3 = (r3 + 8936);
    r3_addr_1 = (r3 + r27);
    r9 = MemoryInline::FlatRead8(r3_addr_1);
    r4 = (r4 + 9192);
    r4_addr_1 = (r4 + r27);
    r8 = MemoryInline::FlatRead8(r4_addr_1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(0));
}

loc_8002B478:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002C090;
    }
}

loc_8002B47C:
{
    r11 = (r7 & 65535);
    r3 = MemoryInline::FlatRead16(r26);
    r0 = (r11 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    r5 = (r3 + -1);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    guest_range_2 = MemoryInline::ResolveRangeHost((r2 + -31088), 0, 52u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 16u, (r2 + -31072));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 40));
    r7 = (r0 + r5);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 28u, (r2 + -31060));
    r4 = (r26 + 4);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    r3 = (r3 + 12);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & -8);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r12 = (static_cast<int32_t>(r7) >> 1);
    r28 = 0;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f1.d = std::fabs(f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8002B4D0:
{
    r22 = cr;
    r9 = MemoryInline::FlatRead16((r26 + 4));
    r22_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(1));
    r22 = (r22_rot_1 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r11), static_cast<int32_t>(r9));
}

loc_8002B4E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002B4F0;
    }
}

loc_8002B4E4:
{
    r5 = 0;
    r22 = 1;
    goto loc_8002B5AC;
}

loc_8002B4F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002B518;
    }
}

loc_8002B4F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8002B4F8:
{
    r5 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002B508;
    }
}

loc_8002B500:
{
    r22 = 1;
    goto loc_8002B5AC;
}

loc_8002B508:
{
}

loc_8002B50C:
{
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(0))) {
        goto loc_8002B5AC;
    }
}

loc_8002B510:
{
    r4_addr_2 = (r4 + r3);
    r23 = MemoryInline::FlatRead16(r4_addr_2);
    goto loc_8002B5AC;
}

loc_8002B518:
{
    r7 = (r5 * r3);
    r4_addr_3 = (r4 + r7);
    r23 = MemoryInline::FlatRead16(r4_addr_3);
}

loc_8002B524:
{
    if ((static_cast<int32_t>(r23) > static_cast<int32_t>(r11))) {
        goto loc_8002B530;
    }
}

loc_8002B528:
{
    r22 = 1;
    goto loc_8002B5AC;
}

loc_8002B530:
{
    r7 = (r12 * r3);
    r4_addr_4 = (r4 + r7);
    r10 = MemoryInline::FlatRead16(r4_addr_4);
    goto loc_8002B59C;
}

loc_8002B540:
{
}

loc_8002B544:
{
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(r10))) {
        goto loc_8002B568;
    }
}

loc_8002B548:
{
}

loc_8002B54C:
{
    r5 = r12;
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(0))) {
        goto loc_8002B5AC;
    }
}

loc_8002B554:
{
    r7 = (r12 + 1);
    r9 = r10;
    r7 = (r7 * r3);
    r4_addr_6 = (r4 + r7);
    r23 = MemoryInline::FlatRead16(r4_addr_6);
    goto loc_8002B5AC;
}

loc_8002B568:
{
}

loc_8002B56C:
{
    if ((static_cast<int32_t>(r10) >= static_cast<int32_t>(r11))) {
        goto loc_8002B57C;
    }
}

loc_8002B570:
{
    r28 = r12;
    r9 = r10;
    goto loc_8002B584;
}

loc_8002B57C:
{
    r5 = r12;
    r23 = r10;
}

loc_8002B584:
{
    r10 = (r28 + r5);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r7 = (r7_rot_2 & 1);
    r7 = (r7 + r10);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r12 = (static_cast<int32_t>(r7) >> 1);
    r7 = (r12 * r3);
    r4_addr_7 = (r4 + r7);
    r10 = MemoryInline::FlatRead16(r4_addr_7);
}

loc_8002B59C:
{
}

loc_8002B5A0:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r12))) {
        goto loc_8002B540;
    }
}

loc_8002B5A4:
{
    r5 = r28;
    r22 = 0;
}

loc_8002B5AC:
{
}

loc_8002B5B0:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_8002B73C;
    }
}

loc_8002B5B4:
{
    r3 = (r5 * r3);
    r3 = (r4 + r3);
    r12 = MemoryInline::FlatRead8((r3 + 2));
    r3 = (r3 + 12);
}

loc_8002B5C8:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_8002B600;
    }
}

loc_8002B5CC:
{
    r4 = 1;
    goto loc_8002B5F4;
}

loc_8002B5D8:
{
    r0 = (r27 & r4);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002B5EC;
    }
}

loc_8002B5E0:
{
    f0.d = MemoryInline::FlatReadFloat32(r3);
    r3 = (r3 + 4);
    MemoryInline::FlatWriteFloat32(r30, f0.d);
}

loc_8002B5EC:
{
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_5 & 65534);
    r30 = (r30 + 4);
}

loc_8002B5F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r8));
}

loc_8002B5F8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002B5D8;
    }
}

loc_8002B5FC:
{
    goto loc_8002C090;
}

loc_8002B600:
{
    r4 = 923860992;
    r3 = MemoryInline::FlatRead16(r3);
    r4 = (r4 + -26649);
    r9 = 1065484288;
    r4 = (r3 * r4);
    r7 = 816250880;
    r11 = (r9 + -2507);
    r10 = MemoryInline::FlatRead16((r29 + 6));
    r5 = 524288;
    r9 = (r7 + 16787);
    r7 = (r5 + -18135);
    r5 = (r4 + 327680);
    r4 = (r12 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8002B634:
{
    r4 = (r5 + -16557);
    r6 = (r6 * r7);
    r11 = (r31 * r11);
    r4 = (r6 + r4);
    r5 = (r10 * r9);
    r5 = (r11 + r5);
    r4 = (r5 + r4);
    MemoryInline::FlatWriteRam32((r1 + 24), r4);
    r6 = MemoryInline::FlatRead8((r1 + 26));
    r4 = MemoryInline::FlatRead8((r1 + 27));
    r5 = MemoryInline::FlatRead8((r1 + 25));
    r6 = (r6 ^ r4);
    r4 = MemoryInline::FlatRead8((r1 + 24));
    r5 = (r5 ^ r6);
    MemoryInline::FlatWriteRam8((r1 + 26), static_cast<uint8_t>(r6));
    r4 = (r4 ^ r5);
    MemoryInline::FlatWriteRam8((r1 + 25), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 24), static_cast<uint8_t>(r4));
    r7 = MemoryInline::FlatRead32((r1 + 24));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002B694;
    }
}

loc_8002B684:
{
    r0 = (r3 * r0);
    r3 = (r25 + r0);
    r4 = (r3 + 4);
    goto loc_8002B6C8;
}

loc_8002B694:
{
    r5 = MemoryInline::FlatRead16(r24);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(16));
    r6 = (r6_rot_1 & 65535);
    r3 = 196608;
    r4 = PPC_Divwu(static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
    r3 = (r3 + 17405);
    r4 = (r4 * r5);
    r4 = (r6 - r4);
    r0 = (r0 * r4);
    r3 = (r7 * r3);
    r4 = (r24 + r0);
    r4 = (r4 + 4);
    r7 = (r3 + 2555904);
    r7 = (r7 + -24893);
}

loc_8002B6C8:
{
    r3 = 196608;
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 8u, (r2 + -31080));
    r0 = (r3 + 17405);
    r5 = 1;
    goto loc_8002B730;
}

loc_8002B6E0:
{
    r3 = (r27 & r5);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8002B728;
    }
}

loc_8002B6E8:
{
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(16));
    r3 = (r3_rot_3 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f3.d = MemoryInline::FlatReadFloat32(r4);
    r4 = (r4 + 8);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteFloat32(r30, f0.d);
    r3 = MemoryInline::FlatRead8((r29 + 4));
    r3 = (r3 & 4);
}

loc_8002B718:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8002B728;
    }
}

loc_8002B71C:
{
    r3 = (r7 * r0);
    r7 = (r3 + 2555904);
    r7 = (r7 + -24893);
}

loc_8002B728:
{
    r5_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_6 & 65534);
    r30 = (r30 + 4);
}

loc_8002B730:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r8));
}

loc_8002B734:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002B6E0;
    }
}

loc_8002B738:
{
    goto loc_8002C090;
}

loc_8002B73C:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r29 + 4), 0, 4u, true, false);
    r11 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r29 + 4));
    r7 = r6;
    r10 = (r11 & 64);
}

loc_8002B748:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_8002B7B4;
    }
}

loc_8002B74C:
{
    r12 = (r11 & 32);
}

loc_8002B750:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_8002B760;
    }
}

loc_8002B754:
{
    r10 = MemoryInline::ReadResolved8(guest_range_3, 1u, (r29 + 5));
}

loc_8002B75C:
{
    if ((static_cast<uint32_t>(r10) <= static_cast<uint32_t>(1))) {
        goto loc_8002B7B4;
    }
}

loc_8002B760:
{
    r22 = (r6 & 1);
}

loc_8002B764:
{
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(0))) {
        goto loc_8002B798;
    }
}

loc_8002B768:
{
    r10 = MemoryInline::FlatRead16(r26);
    r11 = (r5 + 1);
    r10 = (r10 + -1);
}

loc_8002B778:
{
    if ((static_cast<int32_t>(r11) < static_cast<int32_t>(r10))) {
        goto loc_8002B798;
    }
}

loc_8002B77C:
{
}

loc_8002B780:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_8002B794;
    }
}

loc_8002B784:
{
    r10 = MemoryInline::ReadResolved8(guest_range_3, 1u, (r29 + 5));
    r10 = (r10 + -1);
}

loc_8002B790:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r10))) {
        goto loc_8002B798;
    }
}

loc_8002B794:
{
    r7 = (r6 + 1);
}

loc_8002B798:
{
}

loc_8002B79C:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_8002B7B4;
    }
}

loc_8002B7A0:
{
}

loc_8002B7A4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8002B7B4;
    }
}

loc_8002B7A8:
{
}

loc_8002B7AC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8002B7B4;
    }
}

loc_8002B7B0:
{
    r6 = (r6 + 1);
}

loc_8002B7B4:
{
    r11 = (r9 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 44), r11);
    r10 = (r23 & 65535);
    r9 = (r5 + 1);
    r10 = (r10 - r11);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 8u, (r2 + -31080));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    r10 = (r10 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r10);
    r5 = (r5 * r3);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 16u, (r2 + -31072));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r9 = (r9 * r3);
    r10 = (r4 + r5);
    r3 = MemoryInline::FlatRead8((r10 + 2));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    r5 = (r10 + 12);
    r11 = (0 - r3);
    r9 = (r4 + r9);
    r11 = (r11 | r3);
    r4 = MemoryInline::FlatRead8((r9 + 2));
    r12_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r12 = (r12_rot_1 & 1);
}

loc_8002B818:
{
    r11 = (0 - r4);
    r11 = (r11 | r4);
    r10 = (r10 + 4);
    r9 = (r9 + 12);
    r11_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r11 = (r11_rot_1 & 1);
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_8002B954;
    }
}

loc_8002B830:
{
}

loc_8002B834:
{
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_8002B954;
    }
}

loc_8002B838:
{
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 40u, (r2 + -31048));
    r4 = 1;
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 48u, (r2 + -31040));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 36u, (r2 + -31052));
    goto loc_8002B948;
}

loc_8002B850:
{
    r0 = (r27 & r4);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002B93C;
    }
}

loc_8002B858:
{
    f9.d = MemoryInline::FlatReadFloat32(r5);
    f6.d = MemoryInline::FlatReadFloat32(r9);
    SetCRFloatResident(cr, 0, f9.d, f6.d);
}

loc_8002B864:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002B86C;
    }
}

loc_8002B868:
{
    goto loc_8002B930;
}

loc_8002B86C:
{
    r3 = MemoryInline::FlatRead8(r10);
    r0 = (r3 & 3);
}

loc_8002B874:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002B88C;
    }
}

loc_8002B878:
{
}

loc_8002B87C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8002B89C;
    }
}

loc_8002B880:
{
}

loc_8002B884:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8002B930;
    }
}

loc_8002B888:
{
    goto loc_8002B92C;
}

loc_8002B88C:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f9.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f0.d));
    goto loc_8002B930;
}

loc_8002B89C:
{
}

loc_8002B8A0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8002B8C4;
    }
}

loc_8002B8A4:
{
    f4.d = PpcFmulsInline(f5.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f9.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f0.d));
    goto loc_8002B930;
}

loc_8002B8C4:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_7 & 1);
}

loc_8002B8C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002B8D4;
    }
}

loc_8002B8CC:
{
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31088));
    goto loc_8002B8D8;
}

loc_8002B8D4:
{
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r2 + -31044));
}

loc_8002B8D8:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r0 = (r0_rot_8 & 1);
}

loc_8002B8DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002B8E8;
    }
}

loc_8002B8E0:
{
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31088));
    goto loc_8002B8EC;
}

loc_8002B8E8:
{
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r2 + -31044));
}

loc_8002B8EC:
{
    f4.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f8.d));
    f0.d = PpcFmulsInline(f3.d, f7.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f9.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f5.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f8.d));
    f6.d = PpcFmulsInline(f2.d, f6.d);
    f4.d = PpcFmulsInline(f2.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f4.d = PpcFmulsInline(f2.d, f4.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f0.d));
    f0.d = PpcFmulsInline(f6.d, f0.d);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f0.d));
    goto loc_8002B930;
}

loc_8002B92C:
{
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31088));
}

loc_8002B930:
{
    MemoryInline::FlatWriteFloat32(r30, f9.d);
    r5 = (r5 + 4);
    r9 = (r9 + 4);
}

loc_8002B93C:
{
    r4_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_7 & 65534);
    r10 = (r10 + 1);
    r30 = (r30 + 4);
}

loc_8002B948:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r8));
}

loc_8002B94C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002B850;
    }
}

loc_8002B950:
{
    goto loc_8002C090;
}

loc_8002B954:
{
}

loc_8002B958:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_8002BB78;
    }
}

loc_8002B95C:
{
}

loc_8002B960:
{
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_8002BB78;
    }
}

loc_8002B964:
{
    r7 = 923860992;
    r4 = MemoryInline::FlatRead16(r5);
    r5 = (r7 + -26649);
    r23 = 1065484288;
    r5 = (r4 * r5);
    r11 = 816250880;
    r7 = 524288;
    r12 = MemoryInline::ReadResolved16(guest_range_3, 2u, (r29 + 6));
    r23 = (r23 + -2507);
    r7 = (r7 + -18135);
    r11 = (r11 + 16787);
    r5 = (r5 + 327680);
    r3 = (r3 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8002B998:
{
    r3 = (r5 + -16557);
    r6 = (r6 * r7);
    r23 = (r31 * r23);
    r3 = (r6 + r3);
    r5 = (r12 * r11);
    r5 = (r23 + r5);
    r3 = (r5 + r3);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r6 = MemoryInline::FlatRead8((r1 + 22));
    r3 = MemoryInline::FlatRead8((r1 + 23));
    r5 = MemoryInline::FlatRead8((r1 + 21));
    r6 = (r6 ^ r3);
    r3 = MemoryInline::FlatRead8((r1 + 20));
    r5 = (r5 ^ r6);
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r6));
    r3 = (r3 ^ r5);
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r1 + 20));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002B9F8;
    }
}

loc_8002B9E8:
{
    r0 = (r4 * r0);
    r4 = (r25 + r0);
    r6 = (r4 + 4);
    goto loc_8002BA2C;
}

loc_8002B9F8:
{
    r6 = MemoryInline::FlatRead16(r24);
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r7 = (r7_rot_4 & 65535);
    r4 = 196608;
    r5 = PPC_Divwu(static_cast<uint32_t>(r7), static_cast<uint32_t>(r6));
    r4 = (r4 + 17405);
    r5 = (r5 * r6);
    r5 = (r7 - r5);
    r3 = (r3 * r4);
    r0 = (r0 * r5);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    r4 = (r24 + r0);
    r6 = (r4 + 4);
}

loc_8002BA2C:
{
    f7.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 8u, (r2 + -31080));
    r7 = 1;
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 40u, (r2 + -31048));
    r4 = 196608;
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 48u, (r2 + -31040));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 36u, (r2 + -31052));
    goto loc_8002BB6C;
}

loc_8002BA48:
{
    r0 = (r27 & r7);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002BB60;
    }
}

loc_8002BA50:
{
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_12 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r29 + 4));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f4.d = MemoryInline::FlatReadFloat32((r6 + 4));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8002BA68:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f7.d));
    f6.d = MemoryInline::FlatReadFloat32(r6);
    r6 = (r6 + 8);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f0.d));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002BA90;
    }
}

loc_8002BA80:
{
    r0 = (r4 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
}

loc_8002BA90:
{
    r5 = MemoryInline::FlatRead8(r10);
    f6.d = MemoryInline::FlatReadFloat32(r9);
    r0 = (r5 & 3);
}

loc_8002BA9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002BAB4;
    }
}

loc_8002BAA0:
{
}

loc_8002BAA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8002BAC4;
    }
}

loc_8002BAA8:
{
}

loc_8002BAAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8002BB58;
    }
}

loc_8002BAB0:
{
    goto loc_8002BB54;
}

loc_8002BAB4:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f10.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f0.d));
    goto loc_8002BB58;
}

loc_8002BAC4:
{
}

loc_8002BAC8:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(1))) {
        goto loc_8002BAEC;
    }
}

loc_8002BACC:
{
    f4.d = PpcFmulsInline(f5.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f10.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f0.d));
    goto loc_8002BB58;
}

loc_8002BAEC:
{
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r0 = (r0_rot_13 & 1);
}

loc_8002BAF0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002BAFC;
    }
}

loc_8002BAF4:
{
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31088));
    goto loc_8002BB00;
}

loc_8002BAFC:
{
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r2 + -31044));
}

loc_8002BB00:
{
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(30));
    r0 = (r0_rot_14 & 1);
}

loc_8002BB04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002BB10;
    }
}

loc_8002BB08:
{
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31088));
    goto loc_8002BB14;
}

loc_8002BB10:
{
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r2 + -31044));
}

loc_8002BB14:
{
    f4.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f9.d));
    f0.d = PpcFmulsInline(f3.d, f8.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f10.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f5.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f9.d));
    f6.d = PpcFmulsInline(f2.d, f6.d);
    f4.d = PpcFmulsInline(f2.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f4.d = PpcFmulsInline(f2.d, f4.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f0.d));
    f0.d = PpcFmulsInline(f6.d, f0.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f0.d));
    goto loc_8002BB58;
}

loc_8002BB54:
{
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31088));
}

loc_8002BB58:
{
    MemoryInline::FlatWriteFloat32(r30, f10.d);
    r9 = (r9 + 4);
}

loc_8002BB60:
{
    r7_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_7 & 65534);
    r10 = (r10 + 1);
    r30 = (r30 + 4);
}

loc_8002BB6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r8));
}

loc_8002BB70:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002BA48;
    }
}

loc_8002BB74:
{
    goto loc_8002C090;
}

loc_8002BB78:
{
}

loc_8002BB7C:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_8002BDA0;
    }
}

loc_8002BB80:
{
}

loc_8002BB84:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_8002BDA0;
    }
}

loc_8002BB88:
{
    r6 = 923860992;
    r3 = MemoryInline::FlatRead16(r9);
    r6 = (r6 + -26649);
    r23 = 1065484288;
    r6 = (r3 * r6);
    r11 = 816250880;
    r9 = 524288;
    r12 = MemoryInline::ReadResolved16(guest_range_3, 2u, (r29 + 6));
    r23 = (r23 + -2507);
    r9 = (r9 + -18135);
    r11 = (r11 + 16787);
    r6 = (r6 + 327680);
    r4 = (r4 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8002BBBC:
{
    r4 = (r6 + -16557);
    r7 = (r7 * r9);
    r23 = (r31 * r23);
    r4 = (r7 + r4);
    r6 = (r12 * r11);
    r6 = (r23 + r6);
    r4 = (r6 + r4);
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    r7 = MemoryInline::FlatRead8((r1 + 18));
    r4 = MemoryInline::FlatRead8((r1 + 19));
    r6 = MemoryInline::FlatRead8((r1 + 17));
    r7 = (r7 ^ r4);
    r4 = MemoryInline::FlatRead8((r1 + 16));
    r6 = (r6 ^ r7);
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r7));
    r4 = (r4 ^ r6);
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r1 + 16));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002BC1C;
    }
}

loc_8002BC0C:
{
    r0 = (r3 * r0);
    r3 = (r25 + r0);
    r7 = (r3 + 4);
    goto loc_8002BC50;
}

loc_8002BC1C:
{
    r7 = MemoryInline::FlatRead16(r24);
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r9 = (r9_rot_1 & 65535);
    r3 = 196608;
    r6 = PPC_Divwu(static_cast<uint32_t>(r9), static_cast<uint32_t>(r7));
    r3 = (r3 + 17405);
    r6 = (r6 * r7);
    r6 = (r9 - r6);
    r0 = (r0 * r6);
    r3 = (r4 * r3);
    r4 = (r24 + r0);
    r7 = (r4 + 4);
    r4 = (r3 + 2555904);
    r4 = (r4 + -24893);
}

loc_8002BC50:
{
    f7.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 8u, (r2 + -31080));
    r9 = 1;
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 40u, (r2 + -31048));
    r6 = 196608;
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 48u, (r2 + -31040));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 36u, (r2 + -31052));
    goto loc_8002BD94;
}

loc_8002BC70:
{
    r0 = (r27 & r9);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002BD88;
    }
}

loc_8002BC78:
{
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r0 = (r0_rot_18 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r29 + 4));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f4.d = MemoryInline::FlatReadFloat32((r7 + 4));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8002BC90:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f7.d));
    f6.d = MemoryInline::FlatReadFloat32(r7);
    r7 = (r7 + 8);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f0.d));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002BCB8;
    }
}

loc_8002BCA8:
{
    r0 = (r6 + 17405);
    r3 = (r4 * r0);
    r4 = (r3 + 2555904);
    r4 = (r4 + -24893);
}

loc_8002BCB8:
{
    r3 = MemoryInline::FlatRead8(r10);
    f8.d = MemoryInline::FlatReadFloat32(r5);
    r0 = (r3 & 3);
}

loc_8002BCC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002BCDC;
    }
}

loc_8002BCC8:
{
}

loc_8002BCCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8002BCEC;
    }
}

loc_8002BCD0:
{
}

loc_8002BCD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8002BD80;
    }
}

loc_8002BCD8:
{
    goto loc_8002BD7C;
}

loc_8002BCDC:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f8.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f0.d));
    goto loc_8002BD80;
}

loc_8002BCEC:
{
}

loc_8002BCF0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8002BD14;
    }
}

loc_8002BCF4:
{
    f4.d = PpcFmulsInline(f5.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f8.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f0.d));
    goto loc_8002BD80;
}

loc_8002BD14:
{
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_19 & 1);
}

loc_8002BD18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002BD24;
    }
}

loc_8002BD1C:
{
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31088));
    goto loc_8002BD28;
}

loc_8002BD24:
{
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r2 + -31044));
}

loc_8002BD28:
{
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r0 = (r0_rot_20 & 1);
}

loc_8002BD2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002BD38;
    }
}

loc_8002BD30:
{
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31088));
    goto loc_8002BD3C;
}

loc_8002BD38:
{
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r2 + -31044));
}

loc_8002BD3C:
{
    f4.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f10.d));
    f0.d = PpcFmulsInline(f3.d, f9.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f8.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f5.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f10.d));
    f6.d = PpcFmulsInline(f2.d, f6.d);
    f4.d = PpcFmulsInline(f2.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f4.d = PpcFmulsInline(f2.d, f4.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f0.d));
    f0.d = PpcFmulsInline(f6.d, f0.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f0.d));
    goto loc_8002BD80;
}

loc_8002BD7C:
{
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31088));
}

loc_8002BD80:
{
    MemoryInline::FlatWriteFloat32(r30, f8.d);
    r5 = (r5 + 4);
}

loc_8002BD88:
{
    r9_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_4 & 65534);
    r10 = (r10 + 1);
    r30 = (r30 + 4);
}

loc_8002BD94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(r8));
}

loc_8002BD98:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002BC70;
    }
}

loc_8002BD9C:
{
    goto loc_8002C090;
}

loc_8002BDA0:
{
    r11 = 1065484288;
    r23 = 816250880;
    r28 = (r11 + -2507);
    r12 = 524288;
    r11 = 923860992;
    r26 = MemoryInline::ReadResolved16(guest_range_3, 2u, (r29 + 6));
    r12 = (r12 + -18135);
    r23 = (r23 + 16787);
    r3 = (r3 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8002BDC4:
{
    r5 = MemoryInline::FlatRead16(r5);
    r11 = (r11 + -26649);
    r11 = (r5 * r11);
    r28 = (r31 * r28);
    r11 = (r11 + 327680);
    r3 = (r26 * r23);
    r6 = (r6 * r12);
    r3 = (r28 + r3);
    r6 = (r6 + r3);
    r6 = (r6 + r11);
    r6 = (r6 + -16557);
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    r12 = MemoryInline::FlatRead8((r1 + 14));
    r6 = MemoryInline::FlatRead8((r1 + 15));
    r11 = MemoryInline::FlatRead8((r1 + 13));
    r12 = (r12 ^ r6);
    r6 = MemoryInline::FlatRead8((r1 + 12));
    r11 = (r11 ^ r12);
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r12));
    r6 = (r6 ^ r11);
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r11));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead32((r1 + 12));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002BE34;
    }
}

loc_8002BE24:
{
    r5 = (r5 * r0);
    r5 = (r25 + r5);
    r11 = (r5 + 4);
    goto loc_8002BE68;
}

loc_8002BE34:
{
    r12 = MemoryInline::FlatRead16(r24);
    r23_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r23 = (r23_rot_1 & 65535);
    r5 = 196608;
    r11 = PPC_Divwu(static_cast<uint32_t>(r23), static_cast<uint32_t>(r12));
    r5 = (r5 + 17405);
    r11 = (r11 * r12);
    r11 = (r23 - r11);
    r11 = (r0 * r11);
    r5 = (r6 * r5);
    r6 = (r24 + r11);
    r11 = (r6 + 4);
    r6 = (r5 + 2555904);
    r6 = (r6 + -24893);
}

loc_8002BE68:
{
    r5 = 524288;
    r12 = 923860992;
    r23 = (r5 + -18135);
    r5 = MemoryInline::FlatRead16(r9);
    r9 = (r12 + -26649);
    r4 = (r4 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8002BE80:
{
    r7 = (r7 * r23);
    r4 = (r5 * r9);
    r3 = (r7 + r3);
    r4 = (r4 + 327680);
    r3 = (r3 + r4);
    r3 = (r3 + -16557);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r7 = MemoryInline::FlatRead8((r1 + 10));
    r3 = MemoryInline::FlatRead8((r1 + 11));
    r4 = MemoryInline::FlatRead8((r1 + 9));
    r7 = (r7 ^ r3);
    r3 = MemoryInline::FlatRead8((r1 + 8));
    r4 = (r4 ^ r7);
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r7));
    r3 = (r3 ^ r4);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r1 + 8));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002BEDC;
    }
}

loc_8002BECC:
{
    r0 = (r5 * r0);
    r4 = (r25 + r0);
    r9 = (r4 + 4);
    goto loc_8002BF10;
}

loc_8002BEDC:
{
    r7 = MemoryInline::FlatRead16(r24);
    r9_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r9 = (r9_rot_5 & 65535);
    r4 = 196608;
    r5 = PPC_Divwu(static_cast<uint32_t>(r9), static_cast<uint32_t>(r7));
    r4 = (r4 + 17405);
    r5 = (r5 * r7);
    r5 = (r9 - r5);
    r3 = (r3 * r4);
    r0 = (r0 * r5);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    r4 = (r24 + r0);
    r9 = (r4 + 4);
}

loc_8002BF10:
{
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 8u, (r2 + -31080));
    r12 = 1;
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 40u, (r2 + -31048));
    r5 = 196608;
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 48u, (r2 + -31040));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 36u, (r2 + -31052));
    goto loc_8002C088;
}

loc_8002BF30:
{
    r0 = (r27 & r12);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002C07C;
    }
}

loc_8002BF38:
{
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r0 = (r0_rot_24 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r29 + 4));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f3.d = MemoryInline::FlatReadFloat32((r11 + 4));
    r7 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8002BF50:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f6.d = MemoryInline::FlatReadFloat32(r11);
    r11 = (r11 + 8);
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f1.d));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002BF78;
    }
}

loc_8002BF68:
{
    r0 = (r5 + 17405);
    r4 = (r6 * r0);
    r6 = (r4 + 2555904);
    r6 = (r6 + -24893);
}

loc_8002BF78:
{
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_25 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f6.d = MemoryInline::FlatReadFloat32((r9 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8002BF88:
{
    f3.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f8.d = MemoryInline::FlatReadFloat32(r9);
    r9 = (r9 + 8);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f3.d = PpcFmulsInline(f6.d, f3.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f3.d));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002BFB4;
    }
}

loc_8002BFA4:
{
    r0 = (r5 + 17405);
    r3 = (r3 * r0);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
}

loc_8002BFB4:
{
    r4 = MemoryInline::FlatRead8(r10);
    r0 = (r4 & 3);
}

loc_8002BFBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002BFD4;
    }
}

loc_8002BFC0:
{
}

loc_8002BFC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8002BFE4;
    }
}

loc_8002BFC8:
{
}

loc_8002BFCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8002C078;
    }
}

loc_8002BFD0:
{
    goto loc_8002C074;
}

loc_8002BFD4:
{
    f3.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f1.d));
    f3.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f3.d));
    goto loc_8002C078;
}

loc_8002BFE4:
{
}

loc_8002BFE8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(1))) {
        goto loc_8002C00C;
    }
}

loc_8002BFEC:
{
    f6.d = PpcFmulsInline(f7.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f1.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f6.d));
    f3.d = PpcFmulsInline(f6.d, f3.d);
    f3.d = PpcFmulsInline(f2.d, f3.d);
    f3.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f3.d));
    goto loc_8002C078;
}

loc_8002C00C:
{
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
    r0 = (r0_rot_26 & 1);
}

loc_8002C010:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002C01C;
    }
}

loc_8002C014:
{
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31088));
    goto loc_8002C020;
}

loc_8002C01C:
{
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r2 + -31044));
}

loc_8002C020:
{
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(30));
    r0 = (r0_rot_27 & 1);
}

loc_8002C024:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002C030;
    }
}

loc_8002C028:
{
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31088));
    goto loc_8002C034;
}

loc_8002C030:
{
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r2 + -31044));
}

loc_8002C034:
{
    f6.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f10.d));
    f3.d = PpcFmulsInline(f5.d, f9.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f1.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f7.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f10.d));
    f8.d = PpcFmulsInline(f2.d, f8.d);
    f6.d = PpcFmulsInline(f2.d, f6.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f6.d = PpcFmulsInline(f2.d, f6.d);
    f3.d = PpcFmulsInline(f2.d, f3.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f3.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f3.d));
    f3.d = PpcFmulsInline(f8.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f3.d));
    goto loc_8002C078;
}

loc_8002C074:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31088));
}

loc_8002C078:
{
    MemoryInline::FlatWriteFloat32(r30, f1.d);
}

loc_8002C07C:
{
    r12_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(1));
    r12 = (r12_rot_3 & 65534);
    r10 = (r10 + 1);
    r30 = (r30 + 4);
}

loc_8002C088:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(r8));
}

loc_8002C08C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002BF30;
    }
}

loc_8002C090:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 96);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 96));
    // inline leaf 0x800215D8 (11 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D8
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFC01FFF gpr_write=0xFFC01FFB gpr_return=0x00000018 fpr_read=0x800007FF fpr_write=0x800007FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xC1 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8002B100 func_8002B100 preserves=false fpr_mask=0x80000000
