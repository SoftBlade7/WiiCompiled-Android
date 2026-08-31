#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8002D160(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mdest_2 = 0;
    uint32_t r4_mdest_3 = 0;
    uint32_t r4_mdest_4 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_2 = 0;
    uint32_t r4_mrot_3 = 0;
    uint32_t r4_mrot_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_10 = 0;
    uint32_t r4_rot_11 = 0;
    uint32_t r4_rot_12 = 0;
    uint32_t r4_rot_13 = 0;
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
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_10 = 0;
    uint32_t r6_rot_11 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r6_rot_8 = 0;
    uint32_t r6_rot_9 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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

    goto loc_8002D160;

loc_8002D160:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 80);
    // inline leaf 0x80021590 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -4), r31);
    // end of inlined leaf 0x80021590
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 20u, true, false);
    r10 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r3 + 4));
    r9 = 1127219200;
    r0 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r3 + 12));
    r30 = (r3 + 32);
    r8 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r3 + 16));
    r11 = (r10 & 32);
}

loc_8002D194:
{
    r29 = (r30 + r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r3 + 20));
    r28 = (r29 + r8);
    r24 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r9);
    r31 = r3;
    r25 = r5;
    r26 = r6;
    MemoryInline::FlatWriteRam32((r1 + 24), r9);
    r27 = (r28 + r0);
    r4 = 0;
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_8002D204;
    }
}

loc_8002D1C4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r3 + 5));
}

loc_8002D1CC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8002D204;
    }
}

loc_8002D1D0:
{
    r0 = (r10 & 128);
}

loc_8002D1D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002D1F0;
    }
}

loc_8002D1D8:
{
    r8 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r3 + 8));
}

loc_8002D1E0:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r8))) {
        goto loc_8002D1E8;
    }
}

loc_8002D1E4:
{
    goto loc_8002D478;
}

loc_8002D1E8:
{
    r8 = (r5 & 65535);
    goto loc_8002D478;
}

loc_8002D1F0:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r3 + 8));
    r0 = (r0 * r5);
    r0 = PPC_Divwu(static_cast<uint32_t>(r0), static_cast<uint32_t>(r7));
    r8 = (r0 & 65535);
    goto loc_8002D478;
}

loc_8002D204:
{
    r0 = (r10 & 128);
}

loc_8002D208:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002D2CC;
    }
}

loc_8002D20C:
{
    r8 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r3 + 8));
}

loc_8002D214:
{
    if ((static_cast<uint32_t>(r8) <= static_cast<uint32_t>(1))) {
        goto loc_8002D220;
    }
}

loc_8002D218:
{
    r0 = (r10 & 64);
}

loc_8002D21C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002D254;
    }
}

loc_8002D220:
{
    r4 = PPC_Divwu(static_cast<uint32_t>(r5), static_cast<uint32_t>(r8));
}

loc_8002D228:
{
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_8002D244;
    }
}

loc_8002D22C:
{
    r3 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r3 + 5));
}

loc_8002D234:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r3))) {
        goto loc_8002D244;
    }
}

loc_8002D238:
{
    r0 = (r3 + -1);
    r4 = (r0 & 255);
    goto loc_8002D478;
}

loc_8002D244:
{
    r0 = (r4 * r8);
    r0 = (r5 - r0);
    r8 = (r0 & 65535);
    goto loc_8002D478;
}

loc_8002D254:
{
    r7 = (r8 + -1);
}

loc_8002D25C:
{
    r4 = PPC_Divwu(static_cast<uint32_t>(r5), static_cast<uint32_t>(r7));
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_8002D2A0;
    }
}

loc_8002D264:
{
    r6 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r3 + 5));
}

loc_8002D26C:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r6))) {
        goto loc_8002D2A0;
    }
}

loc_8002D270:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r0 = (r6 & 1);
    r3 = (r0 ^ r4);
    r4 = (r3 - r4);
    r0 = (r6 + -1);
    r5 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    r3 = (r7 & 65535);
    r4 = (r0 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 1);
    r0 = (0 - r0);
    r8 = (r3 & ~r0);
    goto loc_8002D478;
}

loc_8002D2A0:
{
    r0 = (r4 & 1);
}

loc_8002D2A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002D2B8;
    }
}

loc_8002D2A8:
{
    r0 = (r4 * r7);
    r0 = (r5 - r0);
    r8 = (r0 & 65535);
    goto loc_8002D478;
}

loc_8002D2B8:
{
    r0 = (r4 + 1);
    r0 = (r7 * r0);
    r0 = (r0 - r5);
    r8 = (r0 & 65535);
    goto loc_8002D478;
}

loc_8002D2CC:
{
}

loc_8002D2D0:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r7))) {
        goto loc_8002D310;
    }
}

loc_8002D2D4:
{
    r0 = (r10 & 64);
}

loc_8002D2D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002D2F4;
    }
}

loc_8002D2DC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r3 + 5));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    r0 = (r0 & 1);
    r0 = (r0 ^ r4);
    r0 = (r0 - r4);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8002D2FC;
    }
}

loc_8002D2F4:
{
    r8 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r3 + 8));
    goto loc_8002D300;
}

loc_8002D2FC:
{
    r8 = 0;
}

loc_8002D300:
{
    r3 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r3 + 5));
    r0 = (r3 + -1);
    r4 = (r0 & 255);
    goto loc_8002D478;
}

loc_8002D310:
{
    r23 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r23), static_cast<uint32_t>(1));
}

loc_8002D318:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8002D324;
    }
}

loc_8002D31C:
{
    r0 = (r10 & 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8002D320:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002D3B8;
    }
}

loc_8002D324:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r3 + 5));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f4.d = MemoryInline::FlatReadFloat64((r2 + -31080));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 28), r23);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r7);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 28), r5);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 24));
    MemoryInline::FlatWriteRam32((r1 + 20), r23);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
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
    MemoryInline::FlatWriteRam32((r1 + 28), r25);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31080));
    r4 = r3;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = PpcFmulsInline(f1.d, f31.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r8 = fctiwzword0;
    goto loc_8002D478;
}

loc_8002D3B8:
{
    r25 = (r23 + -1);
    r23 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r3 + 5));
    MemoryInline::FlatWriteRam32((r1 + 20), r23);
    r0 = (r25 ^ -2147483648);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31072));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f4.d = MemoryInline::FlatReadFloat64((r2 + -31080));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    MemoryInline::FlatWriteRam32((r1 + 28), r7);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -31064));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
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
    r4 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r25));
}

loc_8002D41C:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r23))) {
        goto loc_8002D450;
    }
}

loc_8002D420:
{
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(1));
    r4 = (r4_rot_5 & 1);
    r0 = (r23 & 1);
    r3 = (r0 ^ r4);
    r4 = (r3 - r4);
    r0 = (r23 + -1);
    r5 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    r3 = (r25 & 65535);
    r4 = (r0 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 1);
    r0 = (0 - r0);
    r8 = (r3 & ~r0);
    goto loc_8002D478;
}

loc_8002D450:
{
    r0 = (r4 & 1);
}

loc_8002D454:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8002D468;
    }
}

loc_8002D458:
{
    r0 = (r4 * r25);
    r0 = (r3 - r0);
    r8 = (r0 & 65535);
    goto loc_8002D478;
}

loc_8002D468:
{
    r0 = (r4 + 1);
    r0 = (r25 * r0);
    r0 = (r0 - r3);
    r8 = (r0 & 65535);
}

loc_8002D478:
{
    r0 = MemoryInline::FlatRead8((r31 + 1));
}

loc_8002D480:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(104))) {
        goto loc_8002D498;
    }
}

loc_8002D484:
{
}

loc_8002D488:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(108))) {
        goto loc_8002D4A4;
    }
}

loc_8002D48C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(112));
}

loc_8002D490:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002D4B0;
    }
}

loc_8002D494:
{
    goto loc_8002D704;
}

loc_8002D498:
{
    r3 = (r24 + 136);
    r0 = 0;
    goto loc_8002D4C0;
}

loc_8002D4A4:
{
    r3 = (r24 + 140);
    r0 = 1;
    goto loc_8002D4C0;
}

loc_8002D4B0:
{
    r3 = (r24 + 144);
    r0 = 2;
}

loc_8002D4C0:
{
    r6 = MemoryInline::FlatRead16(r30);
    r8 = (r8 & 65535);
    r7 = MemoryInline::FlatRead16((r30 + 4));
    r5 = (r30 + 4);
    r10 = (r6 + -1);
    r9 = 0;
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r6 = (r6_rot_1 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(r7));
}

loc_8002D4E0:
{
    r6 = (r6 + r10);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r6);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r7 = (static_cast<int32_t>(r6) >> 1);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8002D4F0;
    }
}

loc_8002D4EC:
{
    goto loc_8002D4F8;
}

loc_8002D4F0:
{
    r10 = 0;
    goto loc_8002D56C;
}

loc_8002D4F8:
{
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(4));
    r6 = (r6_rot_2 & -16);
    r5_addr_1 = (r5 + r6);
    r6 = MemoryInline::FlatRead16(r5_addr_1);
}

loc_8002D504:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r8))) {
        goto loc_8002D56C;
    }
}

loc_8002D508:
{
}

loc_8002D50C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(r6))) {
        goto loc_8002D514;
    }
}

loc_8002D510:
{
    goto loc_8002D56C;
}

loc_8002D514:
{
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(4));
    r6 = (r6_rot_3 & -16);
    r5_addr_2 = (r5 + r6);
    r6 = MemoryInline::FlatRead16(r5_addr_2);
    goto loc_8002D560;
}

loc_8002D520:
{
}

loc_8002D524:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(r6))) {
        goto loc_8002D530;
    }
}

loc_8002D528:
{
    r9 = r7;
    goto loc_8002D548;
}

loc_8002D530:
{
}

loc_8002D534:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r8))) {
        goto loc_8002D53C;
    }
}

loc_8002D538:
{
    r9 = r7;
}

loc_8002D53C:
{
}

loc_8002D540:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r8))) {
        goto loc_8002D548;
    }
}

loc_8002D544:
{
    r10 = r7;
}

loc_8002D548:
{
    r7 = (r9 + r10);
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r6 = (r6_rot_5 & 1);
    r7 = (r6 + r7);
    r6_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r6 = (r6_rot_6 & -16);
    r5_addr_4 = (r5 + r6);
    r6 = MemoryInline::FlatRead16(r5_addr_4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r7 = (static_cast<int32_t>(r7) >> 1);
}

loc_8002D560:
{
}

loc_8002D564:
{
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(r7))) {
        goto loc_8002D520;
    }
}

loc_8002D568:
{
    r10 = r9;
}

loc_8002D56C:
{
    r6_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(4));
    r6 = (r6_rot_8 & -16);
    r5 = (r5 + r6);
    r12 = MemoryInline::FlatRead8((r5 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8002D57C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002D590;
    }
}

loc_8002D580:
{
    r7 = MemoryInline::FlatRead8((r5 + 12));
    r8 = MemoryInline::FlatRead8((r5 + 13));
    r5 = MemoryInline::FlatRead16((r5 + 14));
    goto loc_8002D6A4;
}

loc_8002D590:
{
    r6 = 923860992;
    r5 = MemoryInline::FlatRead16((r5 + 12));
    r6 = (r6 + -26649);
    r9 = 1065484288;
    r6 = (r5 * r6);
    r8 = 816250880;
    r11 = (r9 + -2507);
    r10 = MemoryInline::FlatRead16((r31 + 6));
    r7 = 524288;
    r9 = (r8 + 16787);
    r8 = (r7 + -18135);
    r7 = (r6 + 327680);
    r6 = (r12 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8002D5C4:
{
    r11 = (r26 * r11);
    r7 = (r7 + -16557);
    r6 = (r10 * r9);
    r4 = (r4 * r8);
    r6 = (r11 + r6);
    r4 = (r4 + r7);
    r4 = (r6 + r4);
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r7 = MemoryInline::FlatRead8((r1 + 10));
    r4 = MemoryInline::FlatRead8((r1 + 11));
    r6 = MemoryInline::FlatRead8((r1 + 9));
    r7 = (r7 ^ r4);
    r4 = MemoryInline::FlatRead8((r1 + 8));
    r6 = (r6 ^ r7);
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r7));
    r4 = (r4 ^ r6);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r4));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8002D678;
    }
}

loc_8002D610:
{
    r4_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r4 = (r4_rot_7 & 524280);
    r4 = (r29 + r4);
    r6 = MemoryInline::FlatRead8((r4 + 8));
    r7 = MemoryInline::FlatRead8((r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(1));
}

loc_8002D624:
{
    r8 = MemoryInline::FlatRead8((r4 + 5));
    r5 = MemoryInline::FlatRead16((r4 + 6));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002D644;
    }
}

loc_8002D630:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(2));
}

loc_8002D634:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002D658;
    }
}

loc_8002D638:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(3));
}

loc_8002D63C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8002D66C;
    }
}

loc_8002D640:
{
    goto loc_8002D6A4;
}

loc_8002D644:
{
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r4_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r4 = (r4_rot_9 & 1);
    r4_mrot_2 = (r8 & 2);
    r4_mdest_2 = (r4 & -3);
    r4 = (r4_mdest_2 | r4_mrot_2);
    r8 = r4;
    goto loc_8002D6A4;
}

loc_8002D658:
{
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r4_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r4 = (r4_rot_8 & 2);
    r4_mrot_1 = (r8 & 1);
    r4_mdest_1 = (r4 & -2);
    r4 = (r4_mdest_1 | r4_mrot_1);
    r8 = r4;
    goto loc_8002D6A4;
}

loc_8002D66C:
{
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r8 = (r8_rot_1 & 3);
    goto loc_8002D6A4;
}

loc_8002D678:
{
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r5 = MemoryInline::FlatRead16(r28);
    r6_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r6 = (r6_rot_9 & 65535);
    r4 = PPC_Divwu(static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
    r4 = (r4 * r5);
    r4 = (r6 - r4);
    r4_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_10 & -4);
    r4 = (r28 + r4);
    r7 = MemoryInline::FlatRead8((r4 + 4));
    r8 = MemoryInline::FlatRead8((r4 + 5));
    r5 = MemoryInline::FlatRead16((r4 + 6));
}

loc_8002D6A4:
{
    r4_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r4 = (r4_rot_12 & 262140);
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r9 = (r9_rot_1 & -4);
    r5 = (r27 + r4);
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r10 = (r10_rot_1 & -2);
    r6 = MemoryInline::FlatRead32((r5 + 4));
    r5 = (r7 & 15);
    MemoryInline::FlatWrite32(r3, r6);
    r4 = 15;
    r3 = 3;
    r0 = (r8 & 3);
    r6 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r9));
    r7 = MemoryInline::FlatRead16((r24 + 148));
    r4 = MemoryInline::FlatRead8((r24 + 150));
    r3 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r10));
    r6 = (r7 & ~r6);
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r9));
    r3 = (r4 & ~r3);
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r10));
    r4 = (r6 & 65535);
    r3 = (r3 & 255);
    r4 = (r4 | r5);
    MemoryInline::FlatWrite16((r24 + 148), static_cast<uint16_t>(r4));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite8((r24 + 150), static_cast<uint8_t>(r0));
}

loc_8002D704:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 80);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 80));
    // inline leaf 0x800215DC (10 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -4));
    // end of inlined leaf 0x800215DC
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF801FFF gpr_write=0xFF801FFB gpr_return=0x00000018 fpr_read=0x8000001F fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8002D160 func_8002D160 preserves=false fpr_mask=0x80000000
