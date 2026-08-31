#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8002C0B0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r10_addr_0 = 0;
    uint32_t r10_addr_1 = 0;
    uint32_t r10_addr_2 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r12_rot_5 = 0;
    uint32_t r12_rot_6 = 0;
    uint32_t r12_rot_7 = 0;
    uint32_t r12_rot_8 = 0;
    uint32_t r12_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r21_rot_0 = 0;
    uint32_t r21_rot_1 = 0;
    uint32_t r21_rot_2 = 0;
    uint32_t r21_rot_3 = 0;
    uint32_t r21_rot_4 = 0;
    uint32_t r24_rot_0 = 0;
    uint32_t r24_rot_1 = 0;
    uint32_t r24_rot_2 = 0;
    uint32_t r24_rot_3 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r27_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_10 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;
    uint32_t r5_addr_7 = 0;
    uint32_t r5_addr_8 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_10 = 0;
    uint32_t r9_rot_11 = 0;
    uint32_t r9_rot_12 = 0;
    uint32_t r9_rot_13 = 0;
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8002C0B0;

loc_8002C0B0:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 112);
    // inline leaf 0x80021588 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -44), r21);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -4), r31);
    // end of inlined leaf 0x80021588
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 3), 0, 17u, true, false);
    r8 = MemoryInline::ReadResolved16(guest_range_1, 5u, (r3 + 8));
    r10 = 1127219200;
    r9 = MemoryInline::ReadResolved32(guest_range_1, 9u, (r3 + 12));
    r25 = (r3 + 32);
}

loc_8002C0E0:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 13u, (r3 + 16));
    r24 = (r25 + r9);
    MemoryInline::FlatWriteRam32((r1 + 32), r10);
    r30 = r6;
    r26 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r3 + 3));
    MemoryInline::FlatWriteRam32((r1 + 40), r10);
    r28 = r3;
    r29 = r4;
    r31 = r5;
    r23 = (r24 + r0);
    r6 = 0;
    if ((static_cast<uint32_t>(r8) > static_cast<uint32_t>(1))) {
        goto loc_8002C120;
    }
}

loc_8002C110:
{
    f4.d = MemoryInline::FlatReadFloat32((r2 + -31088));
    r6 = r31;
    r7 = 0;
    goto loc_8002C3F4;
}

loc_8002C120:
{
    r22 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r3 + 4));
    r4 = (r22 & 32);
}

loc_8002C128:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8002C1FC;
    }
}

loc_8002C12C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r3 + 5));
}

loc_8002C134:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8002C1FC;
    }
}

loc_8002C138:
{
    r0 = (r22 & 128);
}

loc_8002C13C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002C168;
    }
}

loc_8002C140:
{
    r0 = (r8 + -1);
    r7 = (r5 & 65535);
}

loc_8002C14C:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r0))) {
        goto loc_8002C154;
    }
}

loc_8002C150:
{
    r7 = (r0 & 65535);
}

loc_8002C154:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r7);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31080));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8002C3F4;
}

loc_8002C168:
{
}

loc_8002C16C:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(1))) {
        goto loc_8002C18C;
    }
}

loc_8002C170:
{
    r0 = (r8 + -1);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31072));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8002C1EC;
}

loc_8002C18C:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r5);
    r0 = (r8 + -1);
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

loc_8002C1DC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002C1EC;
    }
}

loc_8002C1E0:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
}

loc_8002C1EC:
{
    f0.d = PPC_Fctiwz(f4.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r7 = fctiwzword0;
    goto loc_8002C3F4;
}

loc_8002C1FC:
{
    r0 = (r22 & 128);
}

loc_8002C200:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002C2CC;
    }
}

loc_8002C204:
{
    r7 = (r8 + -1);
    r0 = (r22 & 64);
}

loc_8002C20C:
{
    r6 = PPC_Divwu(static_cast<uint32_t>(r5), static_cast<uint32_t>(r7));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002C248;
    }
}

loc_8002C214:
{
}

loc_8002C218:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8002C238;
    }
}

loc_8002C21C:
{
    r3 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r3 + 5));
}

loc_8002C224:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r3))) {
        goto loc_8002C238;
    }
}

loc_8002C228:
{
    r0 = (r3 + -1);
    r7 = (r7 & 65535);
    r6 = (r0 & 255);
    goto loc_8002C2B4;
}

loc_8002C238:
{
    r0 = (r6 * r7);
    r0 = (r5 - r0);
    r7 = (r0 & 65535);
    goto loc_8002C2B4;
}

loc_8002C248:
{
}

loc_8002C24C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8002C28C;
    }
}

loc_8002C250:
{
    r8 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r3 + 5));
}

loc_8002C258:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r8))) {
        goto loc_8002C28C;
    }
}

loc_8002C25C:
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
    goto loc_8002C2B4;
}

loc_8002C28C:
{
    r0 = (r6 & 1);
}

loc_8002C290:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002C2A4;
    }
}

loc_8002C294:
{
    r0 = (r6 * r7);
    r0 = (r5 - r0);
    r7 = (r0 & 65535);
    goto loc_8002C2B4;
}

loc_8002C2A4:
{
    r0 = (r6 + 1);
    r0 = (r7 * r0);
    r0 = (r0 - r5);
    r7 = (r0 & 65535);
}

loc_8002C2B4:
{
    r0 = (r7 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31080));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8002C3F4;
}

loc_8002C2CC:
{
    r4 = (r7 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
}

loc_8002C2D4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8002C328;
    }
}

loc_8002C2D8:
{
    r0 = (r22 & 64);
}

loc_8002C2DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002C2F8;
    }
}

loc_8002C2E0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r3 + 5));
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_3 & 1);
    r0 = (r0 & 1);
    r0 = (r0 ^ r4);
    r0 = (r0 - r4);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002C304;
    }
}

loc_8002C2F8:
{
    r0 = (r8 + -1);
    r7 = (r0 & 65535);
    goto loc_8002C308;
}

loc_8002C304:
{
    r7 = 0;
}

loc_8002C308:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r7);
    r3 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r3 + 5));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31080));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r0 = (r3 + -1);
    r6 = (r0 & 255);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_8002C3F4;
}

loc_8002C328:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r3 + 5));
    r27 = (r8 + -1);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    r0 = (r27 ^ -2147483648);
    f5.d = MemoryInline::FlatReadFloat64((r2 + -31080));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -31072));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    MemoryInline::FlatWriteRam32((r1 + 44), r4);
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
    r4 = (r3 * r27);
    MemoryInline::FlatWriteRam32((r1 + 36), r31);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31080));
    r0 = (r22 & 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8002C39C:
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
        goto loc_8002C3C4;
    }
}

loc_8002C3C0:
{
    goto loc_8002C3E8;
}

loc_8002C3C4:
{
    r0 = (r3 & 1);
}

loc_8002C3C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002C3D0;
    }
}

loc_8002C3CC:
{
    goto loc_8002C3E8;
}

loc_8002C3D0:
{
    r0 = (r27 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31072));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
}

loc_8002C3E8:
{
    f0.d = PPC_Fctiwz(f4.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r7 = fctiwzword1;
}

loc_8002C3F4:
{
    r3 = 0x80270000u;
    r4 = 0x80270000u;
    r3 = (r3 + 8936);
    r3_addr_0 = (r3 + r26);
    r5 = MemoryInline::FlatRead8(r3_addr_0);
    r4 = (r4 + 9192);
    r4_addr_0 = (r4 + r26);
    r8 = MemoryInline::FlatRead8(r4_addr_0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8002C410:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002D13C;
    }
}

loc_8002C414:
{
    r0 = (r7 & 65535);
    r4 = MemoryInline::FlatRead16(r25);
    r3 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r3);
    r10 = (r4 + -1);
    r4_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r4 = (r4_rot_7 & -4);
    guest_range_2 = MemoryInline::ResolveRangeHost((r2 + -31088), 0, 52u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 16u, (r2 + -31072));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 40));
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r9 = (r9_rot_1 & -8);
    r7 = (r3 + r10);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 28u, (r2 + -31060));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    r5 = (r25 + 4);
    r4 = (r4 + 12);
    r3 = (r9 + 4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r22 = (static_cast<int32_t>(r7) >> 1);
    r27 = 0;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f1.d = std::fabs(f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8002C46C:
{
    r7 = cr;
    r11 = MemoryInline::FlatRead16((r25 + 4));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_1 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r11));
}

loc_8002C47C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8002C48C;
    }
}

loc_8002C480:
{
    r10 = 0;
    r7 = 1;
    goto loc_8002C544;
}

loc_8002C48C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002C4B4;
    }
}

loc_8002C490:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(0));
}

loc_8002C494:
{
    r10 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002C4A4;
    }
}

loc_8002C49C:
{
    r7 = 1;
    goto loc_8002C544;
}

loc_8002C4A4:
{
}

loc_8002C4A8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8002C544;
    }
}

loc_8002C4AC:
{
    r5_addr_1 = (r5 + r4);
    r31 = MemoryInline::FlatRead16(r5_addr_1);
    goto loc_8002C544;
}

loc_8002C4B4:
{
    r12 = (r10 * r4);
    r5_addr_2 = (r5 + r12);
    r31 = MemoryInline::FlatRead16(r5_addr_2);
}

loc_8002C4C0:
{
    if ((static_cast<int32_t>(r31) > static_cast<int32_t>(r0))) {
        goto loc_8002C4CC;
    }
}

loc_8002C4C4:
{
    r7 = 1;
    goto loc_8002C544;
}

loc_8002C4CC:
{
    r12 = (r22 * r4);
    r5_addr_3 = (r5 + r12);
    r12 = MemoryInline::FlatRead16(r5_addr_3);
    goto loc_8002C534;
}

loc_8002C4D8:
{
}

loc_8002C4DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r12))) {
        goto loc_8002C500;
    }
}

loc_8002C4E0:
{
}

loc_8002C4E4:
{
    r10 = r22;
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8002C544;
    }
}

loc_8002C4EC:
{
    r0 = (r22 + 1);
    r11 = r12;
    r0 = (r0 * r4);
    r5_addr_5 = (r5 + r0);
    r31 = MemoryInline::FlatRead16(r5_addr_5);
    goto loc_8002C544;
}

loc_8002C500:
{
}

loc_8002C504:
{
    if ((static_cast<int32_t>(r12) >= static_cast<int32_t>(r0))) {
        goto loc_8002C514;
    }
}

loc_8002C508:
{
    r27 = r22;
    r11 = r12;
    goto loc_8002C51C;
}

loc_8002C514:
{
    r10 = r22;
    r31 = r12;
}

loc_8002C51C:
{
    r22 = (r27 + r10);
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(1));
    r12 = (r12_rot_2 & 1);
    r12 = (r12 + r22);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r12);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r22 = (static_cast<int32_t>(r12) >> 1);
    r12 = (r22 * r4);
    r5_addr_6 = (r5 + r12);
    r12 = MemoryInline::FlatRead16(r5_addr_6);
}

loc_8002C534:
{
}

loc_8002C538:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r22))) {
        goto loc_8002C4D8;
    }
}

loc_8002C53C:
{
    r10 = r27;
    r7 = 0;
}

loc_8002C544:
{
}

loc_8002C548:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8002C70C;
    }
}

loc_8002C54C:
{
    r0 = (r10 * r4);
    r5 = (r5 + r0);
    r22 = MemoryInline::FlatRead8((r5 + 2));
    r5 = (r5 + 12);
}

loc_8002C560:
{
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(0))) {
        goto loc_8002C598;
    }
}

loc_8002C564:
{
    r3 = 1;
    goto loc_8002C58C;
}

loc_8002C570:
{
    r0 = (r26 & r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002C584;
    }
}

loc_8002C578:
{
    f0.d = MemoryInline::FlatReadFloat32(r5);
    r5 = (r5 + 4);
    MemoryInline::FlatWriteFloat32(r29, f0.d);
}

loc_8002C584:
{
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 65534);
    r29 = (r29 + 4);
}

loc_8002C58C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r8));
}

loc_8002C590:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002C570;
    }
}

loc_8002C594:
{
    goto loc_8002D13C;
}

loc_8002C598:
{
    r4 = 923860992;
    r0 = MemoryInline::FlatRead16(r5);
    r4 = (r4 + -26649);
    r10 = 1065484288;
    r4 = (r0 * r4);
    r7 = 816250880;
    r12 = (r10 + -2507);
    r11 = MemoryInline::FlatRead16((r28 + 6));
    r5 = 524288;
    r10 = (r7 + 16787);
    r7 = (r5 + -18135);
    r5 = (r4 + 327680);
    r4 = (r22 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8002C5CC:
{
    r4 = (r5 + -16557);
    r6 = (r6 * r7);
    r12 = (r30 * r12);
    r4 = (r6 + r4);
    r5 = (r11 * r10);
    r5 = (r12 + r5);
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
    r4 = MemoryInline::FlatRead32((r1 + 24));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002C62C;
    }
}

loc_8002C61C:
{
    r0 = (r0 * r3);
    r3 = (r24 + r0);
    r6 = (r3 + 4);
    goto loc_8002C660;
}

loc_8002C62C:
{
    r7 = MemoryInline::FlatRead16(r23);
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r10 = (r10_rot_1 & 65535);
    r5 = 196608;
    r6 = PPC_Divwu(static_cast<uint32_t>(r10), static_cast<uint32_t>(r7));
    r0 = (r5 + 17405);
    r5 = (r6 * r7);
    r5 = (r10 - r5);
    r5 = (r3 * r5);
    r3 = (r4 * r0);
    r4 = (r23 + r5);
    r6 = (r4 + 4);
    r4 = (r3 + 2555904);
    r4 = (r4 + -24893);
}

loc_8002C660:
{
    r6_addr_1 = (r6 + r9);
    r0 = MemoryInline::FlatRead8(r6_addr_1);
    r7 = 0;
}

loc_8002C66C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002C690;
    }
}

loc_8002C670:
{
    r0 = (r4 & 65536);
}

loc_8002C674:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002C67C;
    }
}

loc_8002C678:
{
    r7 = 1;
}

loc_8002C67C:
{
    r3 = 196608;
    r0 = (r3 + 17405);
    r3 = (r4 * r0);
    r4 = (r3 + 2555904);
    r4 = (r4 + -24893);
}

loc_8002C690:
{
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 8u, (r2 + -31080));
    r9 = 1;
    r5 = 196608;
    goto loc_8002C700;
}

loc_8002C6A0:
{
    r0 = (r26 & r9);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002C6DC;
    }
}

loc_8002C6A8:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r0 = (r0_rot_5 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f2.d = MemoryInline::FlatReadFloat32((r6 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8002C6B8:
{
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f3.d = MemoryInline::FlatReadFloat32(r6);
    r6 = (r6 + 8);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002C6D8;
    }
}

loc_8002C6D4:
{
    f0.d = (-(f0.d));
}

loc_8002C6D8:
{
    MemoryInline::FlatWriteFloat32(r29, f0.d);
}

loc_8002C6DC:
{
    r0 = MemoryInline::FlatRead8((r28 + 4));
    r29 = (r29 + 4);
    r0 = (r0 & 4);
}

loc_8002C6E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002C6FC;
    }
}

loc_8002C6EC:
{
    r0 = (r5 + 17405);
    r3 = (r4 * r0);
    r4 = (r3 + 2555904);
    r4 = (r4 + -24893);
}

loc_8002C6FC:
{
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_3 & 65534);
}

loc_8002C700:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(r8));
}

loc_8002C704:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002C6A0;
    }
}

loc_8002C708:
{
    goto loc_8002D13C;
}

loc_8002C70C:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r28 + 4), 0, 4u, true, false);
    r12 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r28 + 4));
    r7 = r6;
    r0 = (r12 & 64);
}

loc_8002C718:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002C784;
    }
}

loc_8002C71C:
{
    r27 = (r12 & 32);
}

loc_8002C720:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_8002C730;
    }
}

loc_8002C724:
{
    r0 = MemoryInline::ReadResolved8(guest_range_3, 1u, (r28 + 5));
}

loc_8002C72C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8002C784;
    }
}

loc_8002C730:
{
    r21 = (r6 & 1);
}

loc_8002C734:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(0))) {
        goto loc_8002C768;
    }
}

loc_8002C738:
{
    r12 = MemoryInline::FlatRead16(r25);
    r22 = (r10 + 1);
    r0 = (r12 + -1);
}

loc_8002C748:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(r0))) {
        goto loc_8002C768;
    }
}

loc_8002C74C:
{
}

loc_8002C750:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_8002C764;
    }
}

loc_8002C754:
{
    r12 = MemoryInline::ReadResolved8(guest_range_3, 1u, (r28 + 5));
    r0 = (r12 + -1);
}

loc_8002C760:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r0))) {
        goto loc_8002C768;
    }
}

loc_8002C764:
{
    r7 = (r6 + 1);
}

loc_8002C768:
{
}

loc_8002C76C:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_8002C784;
    }
}

loc_8002C770:
{
}

loc_8002C774:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8002C784;
    }
}

loc_8002C778:
{
}

loc_8002C77C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8002C784;
    }
}

loc_8002C780:
{
    r6 = (r6 + 1);
}

loc_8002C784:
{
    r12 = (r11 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 44), r12);
    r11 = (r31 & 65535);
    r0 = (r10 + 1);
    r11 = (r11 - r12);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 8u, (r2 + -31080));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    r11 = (r11 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r11);
    r10 = (r10 * r4);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 16u, (r2 + -31072));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r11 = (r5 + r10);
    r12 = (r0 * r4);
    r0 = MemoryInline::FlatRead8((r11 + 2));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    r10 = (r11 + 12);
    r4 = (0 - r0);
    r11 = (r11 + 4);
    r5 = (r5 + r12);
    r12 = (r4 | r0);
    r4 = MemoryInline::FlatRead8((r5 + 2));
    r21_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(1));
    r21 = (r21_rot_1 & 1);
}

loc_8002C7EC:
{
    r5 = (r5 + 12);
    r12 = (0 - r4);
    r12 = (r12 | r4);
    r12_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(1));
    r12 = (r12_rot_4 & 1);
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(0))) {
        goto loc_8002C924;
    }
}

loc_8002C800:
{
}

loc_8002C804:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_8002C924;
    }
}

loc_8002C808:
{
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 40u, (r2 + -31048));
    r4 = 1;
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 48u, (r2 + -31040));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 36u, (r2 + -31052));
    goto loc_8002C918;
}

loc_8002C820:
{
    r0 = (r26 & r4);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002C90C;
    }
}

loc_8002C828:
{
    f9.d = MemoryInline::FlatReadFloat32(r10);
    f6.d = MemoryInline::FlatReadFloat32(r5);
    SetCRFloatResident(cr, 0, f9.d, f6.d);
}

loc_8002C834:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002C83C;
    }
}

loc_8002C838:
{
    goto loc_8002C900;
}

loc_8002C83C:
{
    r3 = MemoryInline::FlatRead8(r11);
    r0 = (r3 & 3);
}

loc_8002C844:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002C85C;
    }
}

loc_8002C848:
{
}

loc_8002C84C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8002C86C;
    }
}

loc_8002C850:
{
}

loc_8002C854:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8002C900;
    }
}

loc_8002C858:
{
    goto loc_8002C8FC;
}

loc_8002C85C:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f9.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f0.d));
    goto loc_8002C900;
}

loc_8002C86C:
{
}

loc_8002C870:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8002C894;
    }
}

loc_8002C874:
{
    f4.d = PpcFmulsInline(f5.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f9.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f0.d));
    goto loc_8002C900;
}

loc_8002C894:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_8 & 1);
}

loc_8002C898:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002C8A4;
    }
}

loc_8002C89C:
{
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31088));
    goto loc_8002C8A8;
}

loc_8002C8A4:
{
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r2 + -31044));
}

loc_8002C8A8:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r0 = (r0_rot_9 & 1);
}

loc_8002C8AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002C8B8;
    }
}

loc_8002C8B0:
{
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31088));
    goto loc_8002C8BC;
}

loc_8002C8B8:
{
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r2 + -31044));
}

loc_8002C8BC:
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
    goto loc_8002C900;
}

loc_8002C8FC:
{
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31088));
}

loc_8002C900:
{
    MemoryInline::FlatWriteFloat32(r29, f9.d);
    r10 = (r10 + 4);
    r5 = (r5 + 4);
}

loc_8002C90C:
{
    r4_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_9 & 65534);
    r11 = (r11 + 1);
    r29 = (r29 + 4);
}

loc_8002C918:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r8));
}

loc_8002C91C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002C820;
    }
}

loc_8002C920:
{
    goto loc_8002D13C;
}

loc_8002C924:
{
}

loc_8002C928:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_8002CB84;
    }
}

loc_8002C92C:
{
}

loc_8002C930:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_8002CB84;
    }
}

loc_8002C934:
{
    r7 = 923860992;
    r4 = MemoryInline::FlatRead16(r10);
    r7 = (r7 + -26649);
    r25 = 1065484288;
    r7 = (r4 * r7);
    r12 = 816250880;
    r10 = 524288;
    r22 = MemoryInline::ReadResolved16(guest_range_3, 2u, (r28 + 6));
    r25 = (r25 + -2507);
    r12 = (r12 + 16787);
    r10 = (r10 + -18135);
    r7 = (r7 + 327680);
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8002C968:
{
    r0 = (r7 + -16557);
    r7 = (r6 * r10);
    r25 = (r30 * r25);
    r0 = (r7 + r0);
    r12 = (r22 * r12);
    r6 = (r25 + r12);
    r0 = (r6 + r0);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r7 = MemoryInline::FlatRead8((r1 + 22));
    r0 = MemoryInline::FlatRead8((r1 + 23));
    r6 = MemoryInline::FlatRead8((r1 + 21));
    r7 = (r7 ^ r0);
    r0 = MemoryInline::FlatRead8((r1 + 20));
    r6 = (r6 ^ r7);
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r7));
    r0 = (r0 ^ r6);
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r0));
    r6 = MemoryInline::FlatRead32((r1 + 20));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002C9C8;
    }
}

loc_8002C9B8:
{
    r0 = (r4 * r3);
    r3 = (r24 + r0);
    r7 = (r3 + 4);
    goto loc_8002C9FC;
}

loc_8002C9C8:
{
    r10 = MemoryInline::FlatRead16(r23);
    r12_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r12 = (r12_rot_5 & 65535);
    r4 = 196608;
    r7 = PPC_Divwu(static_cast<uint32_t>(r12), static_cast<uint32_t>(r10));
    r0 = (r4 + 17405);
    r4 = (r7 * r10);
    r4 = (r12 - r4);
    r4 = (r3 * r4);
    r3 = (r6 * r0);
    r4 = (r23 + r4);
    r7 = (r4 + 4);
    r6 = (r3 + 2555904);
    r6 = (r6 + -24893);
}

loc_8002C9FC:
{
    r7_addr_1 = (r7 + r9);
    r0 = MemoryInline::FlatRead8(r7_addr_1);
    r9 = 0;
}

loc_8002CA08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002CA2C;
    }
}

loc_8002CA0C:
{
    r0 = (r6 & 65536);
}

loc_8002CA10:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002CA18;
    }
}

loc_8002CA14:
{
    r9 = 1;
}

loc_8002CA18:
{
    r3 = 196608;
    r0 = (r3 + 17405);
    r3 = (r6 * r0);
    r6 = (r3 + 2555904);
    r6 = (r6 + -24893);
}

loc_8002CA2C:
{
    f7.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 8u, (r2 + -31080));
    r10 = 1;
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 40u, (r2 + -31048));
    r4 = 196608;
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 48u, (r2 + -31040));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 36u, (r2 + -31052));
    goto loc_8002CB78;
}

loc_8002CA48:
{
    r0 = (r26 & r10);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002CB50;
    }
}

loc_8002CA50:
{
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r0 = (r0_rot_13 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f4.d = MemoryInline::FlatReadFloat32((r7 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(0));
}

loc_8002CA60:
{
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f6.d = MemoryInline::FlatReadFloat32(r7);
    r7 = (r7 + 8);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f7.d));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f0.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002CA80;
    }
}

loc_8002CA7C:
{
    f10.d = (-(f10.d));
}

loc_8002CA80:
{
    r3 = MemoryInline::FlatRead8(r11);
    f6.d = MemoryInline::FlatReadFloat32(r5);
    r0 = (r3 & 3);
}

loc_8002CA8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002CAA4;
    }
}

loc_8002CA90:
{
}

loc_8002CA94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8002CAB4;
    }
}

loc_8002CA98:
{
}

loc_8002CA9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8002CB48;
    }
}

loc_8002CAA0:
{
    goto loc_8002CB44;
}

loc_8002CAA4:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f10.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f0.d));
    goto loc_8002CB48;
}

loc_8002CAB4:
{
}

loc_8002CAB8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8002CADC;
    }
}

loc_8002CABC:
{
    f4.d = PpcFmulsInline(f5.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f10.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f0.d));
    goto loc_8002CB48;
}

loc_8002CADC:
{
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_14 & 1);
}

loc_8002CAE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002CAEC;
    }
}

loc_8002CAE4:
{
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31088));
    goto loc_8002CAF0;
}

loc_8002CAEC:
{
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r2 + -31044));
}

loc_8002CAF0:
{
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r0 = (r0_rot_15 & 1);
}

loc_8002CAF4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002CB00;
    }
}

loc_8002CAF8:
{
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31088));
    goto loc_8002CB04;
}

loc_8002CB00:
{
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r2 + -31044));
}

loc_8002CB04:
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
    goto loc_8002CB48;
}

loc_8002CB44:
{
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31088));
}

loc_8002CB48:
{
    MemoryInline::FlatWriteFloat32(r29, f10.d);
    r5 = (r5 + 4);
}

loc_8002CB50:
{
    r0 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r28 + 4));
    r11 = (r11 + 1);
    r29 = (r29 + 4);
    r0 = (r0 & 4);
}

loc_8002CB60:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002CB74;
    }
}

loc_8002CB64:
{
    r0 = (r4 + 17405);
    r3 = (r6 * r0);
    r6 = (r3 + 2555904);
    r6 = (r6 + -24893);
}

loc_8002CB74:
{
    r10_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r10 = (r10_rot_4 & 65534);
}

loc_8002CB78:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(r8));
}

loc_8002CB7C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002CA48;
    }
}

loc_8002CB80:
{
    goto loc_8002D13C;
}

loc_8002CB84:
{
}

loc_8002CB88:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(0))) {
        goto loc_8002CDE4;
    }
}

loc_8002CB8C:
{
}

loc_8002CB90:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_8002CDE4;
    }
}

loc_8002CB94:
{
    r6 = 923860992;
    r0 = MemoryInline::FlatRead16(r5);
    r5 = (r6 + -26649);
    r25 = 1065484288;
    r5 = (r0 * r5);
    r12 = 816250880;
    r6 = 524288;
    r22 = MemoryInline::ReadResolved16(guest_range_3, 2u, (r28 + 6));
    r25 = (r25 + -2507);
    r6 = (r6 + -18135);
    r12 = (r12 + 16787);
    r5 = (r5 + 327680);
    r4 = (r4 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8002CBC8:
{
    r4 = (r5 + -16557);
    r6 = (r7 * r6);
    r25 = (r30 * r25);
    r4 = (r6 + r4);
    r5 = (r22 * r12);
    r5 = (r25 + r5);
    r4 = (r5 + r4);
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    r6 = MemoryInline::FlatRead8((r1 + 18));
    r4 = MemoryInline::FlatRead8((r1 + 19));
    r5 = MemoryInline::FlatRead8((r1 + 17));
    r6 = (r6 ^ r4);
    r4 = MemoryInline::FlatRead8((r1 + 16));
    r5 = (r5 ^ r6);
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r6));
    r4 = (r4 ^ r5);
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r1 + 16));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002CC28;
    }
}

loc_8002CC18:
{
    r0 = (r0 * r3);
    r3 = (r24 + r0);
    r6 = (r3 + 4);
    goto loc_8002CC5C;
}

loc_8002CC28:
{
    r7 = MemoryInline::FlatRead16(r23);
    r12_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r12 = (r12_rot_7 & 65535);
    r5 = 196608;
    r6 = PPC_Divwu(static_cast<uint32_t>(r12), static_cast<uint32_t>(r7));
    r0 = (r5 + 17405);
    r5 = (r6 * r7);
    r5 = (r12 - r5);
    r5 = (r3 * r5);
    r3 = (r4 * r0);
    r4 = (r23 + r5);
    r6 = (r4 + 4);
    r4 = (r3 + 2555904);
    r4 = (r4 + -24893);
}

loc_8002CC5C:
{
    r6_addr_2 = (r6 + r9);
    r0 = MemoryInline::FlatRead8(r6_addr_2);
    r7 = 0;
}

loc_8002CC68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002CC8C;
    }
}

loc_8002CC6C:
{
    r0 = (r4 & 65536);
}

loc_8002CC70:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002CC78;
    }
}

loc_8002CC74:
{
    r7 = 1;
}

loc_8002CC78:
{
    r3 = 196608;
    r0 = (r3 + 17405);
    r3 = (r4 * r0);
    r4 = (r3 + 2555904);
    r4 = (r4 + -24893);
}

loc_8002CC8C:
{
    f7.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 8u, (r2 + -31080));
    r9 = 1;
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 40u, (r2 + -31048));
    r5 = 196608;
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 48u, (r2 + -31040));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 36u, (r2 + -31052));
    goto loc_8002CDD8;
}

loc_8002CCA8:
{
    r0 = (r26 & r9);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002CDB0;
    }
}

loc_8002CCB0:
{
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r0 = (r0_rot_19 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f4.d = MemoryInline::FlatReadFloat32((r6 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8002CCC0:
{
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f6.d = MemoryInline::FlatReadFloat32(r6);
    r6 = (r6 + 8);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f7.d));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f0.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002CCE0;
    }
}

loc_8002CCDC:
{
    f6.d = (-(f6.d));
}

loc_8002CCE0:
{
    r3 = MemoryInline::FlatRead8(r11);
    f8.d = MemoryInline::FlatReadFloat32(r10);
    r0 = (r3 & 3);
}

loc_8002CCEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002CD04;
    }
}

loc_8002CCF0:
{
}

loc_8002CCF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8002CD14;
    }
}

loc_8002CCF8:
{
}

loc_8002CCFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8002CDA8;
    }
}

loc_8002CD00:
{
    goto loc_8002CDA4;
}

loc_8002CD04:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f8.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f0.d));
    goto loc_8002CDA8;
}

loc_8002CD14:
{
}

loc_8002CD18:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8002CD3C;
    }
}

loc_8002CD1C:
{
    f4.d = PpcFmulsInline(f5.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f8.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f0.d));
    goto loc_8002CDA8;
}

loc_8002CD3C:
{
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_20 & 1);
}

loc_8002CD40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002CD4C;
    }
}

loc_8002CD44:
{
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31088));
    goto loc_8002CD50;
}

loc_8002CD4C:
{
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r2 + -31044));
}

loc_8002CD50:
{
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r0 = (r0_rot_21 & 1);
}

loc_8002CD54:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002CD60;
    }
}

loc_8002CD58:
{
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31088));
    goto loc_8002CD64;
}

loc_8002CD60:
{
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r2 + -31044));
}

loc_8002CD64:
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
    goto loc_8002CDA8;
}

loc_8002CDA4:
{
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31088));
}

loc_8002CDA8:
{
    MemoryInline::FlatWriteFloat32(r29, f8.d);
    r10 = (r10 + 4);
}

loc_8002CDB0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r28 + 4));
    r11 = (r11 + 1);
    r29 = (r29 + 4);
    r0 = (r0 & 4);
}

loc_8002CDC0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002CDD4;
    }
}

loc_8002CDC4:
{
    r0 = (r5 + 17405);
    r3 = (r4 * r0);
    r4 = (r3 + 2555904);
    r4 = (r4 + -24893);
}

loc_8002CDD4:
{
    r9_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_5 & 65534);
}

loc_8002CDD8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(r8));
}

loc_8002CDDC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002CCA8;
    }
}

loc_8002CDE0:
{
    goto loc_8002D13C;
}

loc_8002CDE4:
{
    r12 = 1065484288;
    r27 = 816250880;
    r22 = (r12 + -2507);
    r25 = 524288;
    r12 = 923860992;
    r31 = MemoryInline::ReadResolved16(guest_range_3, 2u, (r28 + 6));
    r25 = (r25 + -18135);
    r27 = (r27 + 16787);
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8002CE08:
{
    r10 = MemoryInline::FlatRead16(r10);
    r12 = (r12 + -26649);
    r12 = (r10 * r12);
    r30 = (r30 * r22);
    r12 = (r12 + 327680);
    r0 = (r31 * r27);
    r6 = (r6 * r25);
    r0 = (r30 + r0);
    r6 = (r6 + r0);
    r6 = (r6 + r12);
    r6 = (r6 + -16557);
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    r25 = MemoryInline::FlatRead8((r1 + 14));
    r6 = MemoryInline::FlatRead8((r1 + 15));
    r12 = MemoryInline::FlatRead8((r1 + 13));
    r25 = (r25 ^ r6);
    r6 = MemoryInline::FlatRead8((r1 + 12));
    r12 = (r12 ^ r25);
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r25));
    r6 = (r6 ^ r12);
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r12));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead32((r1 + 12));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002CE78;
    }
}

loc_8002CE68:
{
    r10 = (r10 * r3);
    r10 = (r24 + r10);
    r10 = (r10 + 4);
    goto loc_8002CEAC;
}

loc_8002CE78:
{
    r25 = MemoryInline::FlatRead16(r23);
    r27_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r27 = (r27_rot_1 & 65535);
    r10 = 196608;
    r12 = PPC_Divwu(static_cast<uint32_t>(r27), static_cast<uint32_t>(r25));
    r10 = (r10 + 17405);
    r12 = (r12 * r25);
    r12 = (r27 - r12);
    r6 = (r6 * r10);
    r12 = (r3 * r12);
    r6 = (r6 + 2555904);
    r6 = (r6 + -24893);
    r10 = (r23 + r12);
    r10 = (r10 + 4);
}

loc_8002CEAC:
{
    r25 = 524288;
    r12 = 923860992;
    r25 = (r25 + -18135);
    r5 = MemoryInline::FlatRead16(r5);
    r7 = (r7 * r25);
    r12 = (r12 + -26649);
    r4 = (r4 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8002CEC8:
{
    r4 = (r5 * r12);
    r0 = (r7 + r0);
    r4 = (r4 + 327680);
    r4 = (r0 + r4);
    r0 = (r4 + -16557);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r7 = MemoryInline::FlatRead8((r1 + 10));
    r0 = MemoryInline::FlatRead8((r1 + 11));
    r4 = MemoryInline::FlatRead8((r1 + 9));
    r7 = (r7 ^ r0);
    r0 = MemoryInline::FlatRead8((r1 + 8));
    r4 = (r4 ^ r7);
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r7));
    r0 = (r0 ^ r4);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r1 + 8));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002CF20;
    }
}

loc_8002CF10:
{
    r0 = (r5 * r3);
    r3 = (r24 + r0);
    r3 = (r3 + 4);
    goto loc_8002CF54;
}

loc_8002CF20:
{
    r12 = MemoryInline::FlatRead16(r23);
    r24_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r24 = (r24_rot_1 & 65535);
    r5 = 196608;
    r7 = PPC_Divwu(static_cast<uint32_t>(r24), static_cast<uint32_t>(r12));
    r0 = (r5 + 17405);
    r5 = (r7 * r12);
    r5 = (r24 - r5);
    r3 = (r3 * r5);
    r4 = (r4 * r0);
    r3 = (r23 + r3);
    r3 = (r3 + 4);
    r4 = (r4 + 2555904);
    r4 = (r4 + -24893);
}

loc_8002CF54:
{
    r10_addr_1 = (r10 + r9);
    r5 = MemoryInline::FlatRead8(r10_addr_1);
    r0 = 0;
}

loc_8002CF60:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8002CF84;
    }
}

loc_8002CF64:
{
    r5 = (r6 & 65536);
}

loc_8002CF68:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8002CF70;
    }
}

loc_8002CF6C:
{
    r0 = 1;
}

loc_8002CF70:
{
    r5 = 196608;
    r5 = (r5 + 17405);
    r5 = (r6 * r5);
    r6 = (r5 + 2555904);
    r6 = (r6 + -24893);
}

loc_8002CF84:
{
    r3_addr_1 = (r3 + r9);
    r7 = MemoryInline::FlatRead8(r3_addr_1);
    r5 = 0;
}

loc_8002CF90:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8002CFB4;
    }
}

loc_8002CF94:
{
    r7 = (r4 & 65536);
}

loc_8002CF98:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8002CFA0;
    }
}

loc_8002CF9C:
{
    r5 = 1;
}

loc_8002CFA0:
{
    r7 = 196608;
    r7 = (r7 + 17405);
    r4 = (r4 * r7);
    r4 = (r4 + 2555904);
    r4 = (r4 + -24893);
}

loc_8002CFB4:
{
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 8u, (r2 + -31080));
    r21 = 1;
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 40u, (r2 + -31048));
    r7 = 196608;
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 48u, (r2 + -31040));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 36u, (r2 + -31052));
    goto loc_8002D134;
}

loc_8002CFD0:
{
    r9 = (r26 & r21);
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_8002D100;
    }
}

loc_8002CFD8:
{
    r9_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r9 = (r9_rot_7 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 44), r9);
    f3.d = MemoryInline::FlatReadFloat32((r10 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8002CFE8:
{
    f1.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f6.d = MemoryInline::FlatReadFloat32(r10);
    r10 = (r10 + 8);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f1.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002D008;
    }
}

loc_8002D004:
{
    f1.d = (-(f1.d));
}

loc_8002D008:
{
    r9_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r9 = (r9_rot_8 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 36), r9);
    f6.d = MemoryInline::FlatReadFloat32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8002D018:
{
    f3.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f8.d = MemoryInline::FlatReadFloat32(r3);
    r3 = (r3 + 8);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f3.d = PpcFmulsInline(f6.d, f3.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f3.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002D038;
    }
}

loc_8002D034:
{
    f8.d = (-(f8.d));
}

loc_8002D038:
{
    r12 = MemoryInline::FlatRead8(r11);
    r9 = (r12 & 3);
}

loc_8002D040:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_8002D058;
    }
}

loc_8002D044:
{
}

loc_8002D048:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(1))) {
        goto loc_8002D068;
    }
}

loc_8002D04C:
{
}

loc_8002D050:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(2))) {
        goto loc_8002D0FC;
    }
}

loc_8002D054:
{
    goto loc_8002D0F8;
}

loc_8002D058:
{
    f3.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f1.d));
    f3.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f3.d));
    goto loc_8002D0FC;
}

loc_8002D068:
{
}

loc_8002D06C:
{
    if ((static_cast<uint32_t>(r12) != static_cast<uint32_t>(1))) {
        goto loc_8002D090;
    }
}

loc_8002D070:
{
    f6.d = PpcFmulsInline(f7.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f1.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f6.d));
    f3.d = PpcFmulsInline(f6.d, f3.d);
    f3.d = PpcFmulsInline(f2.d, f3.d);
    f3.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f3.d));
    goto loc_8002D0FC;
}

loc_8002D090:
{
    r9_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(29));
    r9 = (r9_rot_9 & 1);
}

loc_8002D094:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8002D0A0;
    }
}

loc_8002D098:
{
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31088));
    goto loc_8002D0A4;
}

loc_8002D0A0:
{
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r2 + -31044));
}

loc_8002D0A4:
{
    r9_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(30));
    r9 = (r9_rot_10 & 1);
}

loc_8002D0A8:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8002D0B4;
    }
}

loc_8002D0AC:
{
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31088));
    goto loc_8002D0B8;
}

loc_8002D0B4:
{
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r2 + -31044));
}

loc_8002D0B8:
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
    goto loc_8002D0FC;
}

loc_8002D0F8:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r2 + -31088));
}

loc_8002D0FC:
{
    MemoryInline::FlatWriteFloat32(r29, f1.d);
}

loc_8002D100:
{
    r9 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r28 + 4));
    r11 = (r11 + 1);
    r29 = (r29 + 4);
    r9 = (r9 & 4);
}

loc_8002D110:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8002D130;
    }
}

loc_8002D114:
{
    r9 = (r7 + 17405);
    r6 = (r6 * r9);
    r4 = (r4 * r9);
    r6 = (r6 + 2555904);
    r6 = (r6 + -24893);
    r4 = (r4 + 2555904);
    r4 = (r4 + -24893);
}

loc_8002D130:
{
    r21_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(1));
    r21 = (r21_rot_3 & 65534);
}

loc_8002D134:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(r8));
}

loc_8002D138:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002CFD0;
    }
}

loc_8002D13C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 112);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 112));
    // inline leaf 0x800215D4 (12 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 24u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 32u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r11 + -4));
    // end of inlined leaf 0x800215D4
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFE01FFF gpr_write=0xFFE01FFB gpr_return=0x00000018 fpr_read=0x800007FF fpr_write=0x800007FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xC1 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8002C0B0 func_8002C0B0 preserves=false fpr_mask=0x80000000
