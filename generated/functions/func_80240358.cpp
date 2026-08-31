#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80240358(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r5_subfic_ra_0 = 0;
    uint32_t r5_subfic_ra_1 = 0;
    uint32_t r5_subfic_ra_2 = 0;
    uint32_t r5_subfic_ra_3 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80240358;

loc_80240358:
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
    r0 = 1127219200;
    r22 = r3;
    r30 = 0x80380000u;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = MemoryInline::FlatRead32((r13 + -23936));
    r24 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r25 = r5;
    r30 = (r30 + 17536);
    ctx->lr = 0x802403A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8023DBD8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r28 = (r22 * 12);
    r31 = (r30 + 0);
    r29 = r3;
    r31_addr_0 = (r31 + r28);
    r0 = MemoryInline::FlatRead32(r31_addr_0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_802403B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80240818;
    }
}

loc_802403BC:
{
}

loc_802403C0:
{
    f31.d = MemoryInline::FlatReadFloat32(r3);
    f30.d = MemoryInline::FlatReadFloat32((r3 + 4));
    r27 = 0;
    r26 = 1;
    if ((static_cast<uint32_t>(r22) <= static_cast<uint32_t>(1))) {
        goto loc_802403E8;
    }
}

loc_802403D4:
{
}

loc_802403D8:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(2))) {
        goto loc_802405D8;
    }
}

loc_802403DC:
{
}

loc_802403E0:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(3))) {
        goto loc_80240674;
    }
}

loc_802403E4:
{
    goto loc_80240764;
}

loc_802403E8:
{
}

loc_802403EC:
{
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(0))) {
        goto loc_802403F8;
    }
}

loc_802403F0:
{
    f3.d = MemoryInline::FlatReadFloat32((r2 + -24292));
    goto loc_802403FC;
}

loc_802403F8:
{
    f3.d = MemoryInline::FlatReadFloat32((r2 + -24288));
}

loc_802403FC:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r4 = (r30 + 48);
    r5 = MemoryInline::FlatRead16((r13 + -23736));
    r6 = (r30 + 72);
    f1.d = PpcFmulsInline(f0.d, f3.d);
    f7.d = MemoryInline::FlatReadFloat64((r2 + -24272));
    r5_subfic_ra_1 = r5;
    r5 = (640 - r5_subfic_ra_1);
    r0 = MemoryInline::FlatRead16((r13 + -23734));
    MemoryInline::FlatWriteRamFloat32((r4 + 8), f1.d);
    f2.d = PPC_Fctiwz(f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    r0_subfic_ra_1 = r0;
    r0 = (528 - r0_subfic_ra_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(528) >= static_cast<uint32_t>(r0_subfic_ra_1) ? 1u : 0u) << 29);
    fctiwzword0 = PPC_FprLowWordInline(f2.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f2.d);
    r3 = (r5 ^ -2147483648);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    fctiwzword1 = PPC_FprLowWordInline(f2.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f2.d);
    r0 = (r0 ^ -2147483648);
    r9 = fctiwzword0;
    f0.d = PPC_Fctiwz(f0.d);
    r5 = fctiwzword1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24284));
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r8 = (r8_rot_1 & 1);
    r5 = (r5 & 1);
    r7 = (r5 ^ r8);
    r5 = fctiwzword2;
    r7 = (r7 - r8);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    r8 = (r9 + r7);
    f3.d = MemoryInline::FlatReadFloat32((r2 + -24280));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r7 = (r7_rot_1 & 1);
    r5 = (r5 & 1);
    r5 = (r5 ^ r7);
    r8 = (r8 ^ -2147483648);
    r5 = (r5 - r7);
    r7 = fctiwzword3;
    MemoryInline::FlatWriteRam32((r1 + 20), r8);
    r5 = (r7 + r5);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24296));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r5 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r5);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f7.d));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 24));
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f7.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f7.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f7.d));
    MemoryInline::FlatWriteRamFloat32((r4 + 8), f6.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r4 + 12), f5.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r30 + 48), f4.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_802404E8:
{
    MemoryInline::FlatWriteRamFloat32((r30 + 72), f4.d);
    MemoryInline::FlatWriteRamFloat32((r4 + 4), f3.d);
    MemoryInline::FlatWriteRamFloat32((r6 + 4), f3.d);
    MemoryInline::FlatWriteRamFloat32((r6 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32((r6 + 12), f1.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80240504;
    }
}

loc_80240500:
{
    MemoryInline::FlatWriteRamFloat32((r6 + 8), f0.d);
}

loc_80240504:
{
    r3 = (r30 + 72);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24296));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80240514:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8024051C;
    }
}

loc_80240518:
{
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f0.d);
}

loc_8024051C:
{
    r3 = (r30 + 72);
    r4 = (r30 + 48);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = PPC_Fctiwz(f0.d);
    f31.d = MemoryInline::FlatReadFloat32((r30 + 48));
    f1.d = PPC_Fctiwz(f1.d);
    f30.d = MemoryInline::FlatReadFloat32((r4 + 4));
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    r26 = fctiwzword4;
    MemoryInline::FlatWriteRamFloat64((r1 + 56), f1.d);
    r0 = (r26 & 65535);
}

loc_8024054C:
{
    r29 = MemoryInline::FlatRead32((r1 + 60));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8024055C;
    }
}

loc_80240554:
{
    r0 = (r29 & 65535);
}

loc_80240558:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80240564;
    }
}

loc_8024055C:
{
    r26 = 0;
    goto loc_802405B0;
}

loc_80240564:
{
    // inline leaf 0x80243174 (10 guest instruction(s))
}

loc_inl1_0x80243174:
{
    r3 = MemoryInline::FlatRead32((r13 + -23700));
    r4 = MemoryInline::FlatRead32((r3 + 52));
    MemoryInline::FlatWrite32((r13 + -23700), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl1_0x80243184:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_0x80243190;
    }
}

loc_inl1_0x80243188:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r4 + 48), r0);
}

loc_inl1_0x80243190:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 52), r0);
}

loc_inl1_cont_80243174:
{
    // end of inlined leaf 0x80243174
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r26));
    r0 = 6;
    r26 = r3;
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r29));
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    r12 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8024058Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead16(r26);
    r6 = 0;
    r4 = MemoryInline::FlatRead16((r26 + 2));
    r7 = 1;
    r5 = MemoryInline::FlatRead8((r26 + 5));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80170614u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    r3 = r26;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8024319Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_802405B0:
{
    r3 = (r30 + 0);
}

loc_802405B8:
{
    r3_addr_3 = (r3 + r28);
    MemoryInline::FlatWrite32(r3_addr_3, r26);
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_802405CC;
    }
}

loc_802405C0:
{
    r0 = MemoryInline::FlatRead8((r26 + 20));
    r0 = (r0 & -17);
    MemoryInline::FlatWrite8((r26 + 20), static_cast<uint8_t>(r0));
}

loc_802405CC:
{
    // inline leaf 0x80240E00 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -27728));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x80240E00
    r26 = r3;
    goto loc_80240764;
}

loc_802405D8:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = PPC_Fctiwz(f0.d);
    f1.d = PPC_Fctiwz(f1.d);
    fctiwzword5 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    r29 = fctiwzword5;
    MemoryInline::FlatWriteRamFloat64((r1 + 56), f1.d);
    r0 = (r29 & 65535);
}

loc_802405F8:
{
    r23 = MemoryInline::FlatRead32((r1 + 60));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80240608;
    }
}

loc_80240600:
{
    r0 = (r23 & 65535);
}

loc_80240604:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80240610;
    }
}

loc_80240608:
{
    r29 = 0;
    goto loc_8024065C;
}

loc_80240610:
{
    // inline leaf 0x80243174 (10 guest instruction(s))
}

loc_inl3_0x80243174:
{
    r3 = MemoryInline::FlatRead32((r13 + -23700));
    r4 = MemoryInline::FlatRead32((r3 + 52));
    MemoryInline::FlatWrite32((r13 + -23700), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl3_0x80243184:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl3_0x80243190;
    }
}

loc_inl3_0x80243188:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r4 + 48), r0);
}

loc_inl3_0x80243190:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 52), r0);
}

loc_inl3_cont_80243174:
{
    // end of inlined leaf 0x80243174
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r29));
    r0 = 6;
    r29 = r3;
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r23));
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    r12 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80240638u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead16(r29);
    r6 = 0;
    r4 = MemoryInline::FlatRead16((r29 + 2));
    r7 = 1;
    r5 = MemoryInline::FlatRead8((r29 + 5));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80170614u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    r3 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8024319Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8024065C:
{
    r3 = (r30 + 0);
    r3_addr_2 = (r3 + r28);
    MemoryInline::FlatWrite32(r3_addr_2, r29);
    r0 = MemoryInline::FlatRead8((r29 + 20));
    r0 = (r0 & -17);
    MemoryInline::FlatWrite8((r29 + 20), static_cast<uint8_t>(r0));
    goto loc_80240764;
}

loc_80240674:
{
    // inline leaf 0x80240E0C (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -27728));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80240E0C
}

loc_8024067C:
{
    r27 = 6;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80240688;
    }
}

loc_80240684:
{
    r27 = 4;
}

loc_80240688:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24288));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 12));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    f1.d = PPC_Fctiwz(f1.d);
    fctiwzword6 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    r23 = fctiwzword6;
    MemoryInline::FlatWriteRamFloat64((r1 + 56), f1.d);
    r0 = (r23 & 65535);
}

loc_802406B4:
{
    r22 = MemoryInline::FlatRead32((r1 + 60));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802406C4;
    }
}

loc_802406BC:
{
    r0 = (r22 & 65535);
}

loc_802406C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802406CC;
    }
}

loc_802406C4:
{
    r29 = 0;
    goto loc_80240714;
}

loc_802406CC:
{
    // inline leaf 0x80243174 (10 guest instruction(s))
}

loc_inl5_0x80243174:
{
    r3 = MemoryInline::FlatRead32((r13 + -23700));
    r4 = MemoryInline::FlatRead32((r3 + 52));
    MemoryInline::FlatWrite32((r13 + -23700), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl5_0x80243184:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl5_0x80243190;
    }
}

loc_inl5_0x80243188:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r4 + 48), r0);
}

loc_inl5_0x80243190:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 52), r0);
}

loc_inl5_cont_80243174:
{
    // end of inlined leaf 0x80243174
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r23));
    r29 = r3;
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r22));
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r27));
    r12 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x802406F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead16(r29);
    r6 = 0;
    r4 = MemoryInline::FlatRead16((r29 + 2));
    r7 = 1;
    r5 = MemoryInline::FlatRead8((r29 + 5));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80170614u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    r3 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8024319Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80240714:
{
    r3 = (r30 + 0);
    r4 = MemoryInline::FlatRead8((r2 + -25832));
    r3_addr_1 = (r3 + r28);
    MemoryInline::FlatWrite32(r3_addr_1, r29);
    r27 = 1;
    r3 = MemoryInline::FlatRead8((r2 + -25831));
    r5 = MemoryInline::FlatRead8((r29 + 20));
    r0 = MemoryInline::FlatRead8((r2 + -25830));
    r5 = (r5 | 8);
    MemoryInline::FlatWrite8((r29 + 20), static_cast<uint8_t>(r5));
    r5 = MemoryInline::FlatRead8((r2 + -25829));
    MemoryInline::FlatWrite8((r29 + 32), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r2 + -25828));
    MemoryInline::FlatWrite8((r29 + 33), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r2 + -25827));
    MemoryInline::FlatWrite8((r29 + 34), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r2 + -25826));
    MemoryInline::FlatWrite8((r29 + 35), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r29 + 36), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r29 + 37), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r29 + 38), static_cast<uint8_t>(r0));
}

loc_80240764:
{
    r31_addr_1 = (r31 + r28);
    r0 = MemoryInline::FlatRead32(r31_addr_1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8024076C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80240818;
    }
}

loc_80240770:
{
    r0 = (r30 + 0);
}

loc_80240778:
{
    r5 = (r0 + r28);
    MemoryInline::FlatWrite32((r5 + 4), r25);
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_802407C0;
    }
}

loc_80240784:
{
    r4 = MemoryInline::FlatRead32(r5);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead8((r4 + 20));
    r0 = MemoryInline::FlatRead8((r1 + 8));
    r3 = (r3 | 2);
    MemoryInline::FlatWrite8((r4 + 20), static_cast<uint8_t>(r3));
    r4 = MemoryInline::FlatRead8((r1 + 9));
    r5 = MemoryInline::FlatRead32(r5);
    r3 = MemoryInline::FlatRead8((r1 + 10));
    MemoryInline::FlatWrite8((r5 + 21), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 11));
    MemoryInline::FlatWrite8((r5 + 22), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 23), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 24), static_cast<uint8_t>(r0));
}

loc_802407C0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24296));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_802407C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802407D0;
    }
}

loc_802407CC:
{
    f31.d = f0.d;
}

loc_802407D0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24296));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_802407D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802407E0;
    }
}

loc_802407DC:
{
    f30.d = f0.d;
}

loc_802407E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_802407E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80240818;
    }
}

loc_802407E8:
{
    f1.d = PPC_Fctiwz(f31.d);
    r31_addr_2 = (r31 + r28);
    r3 = MemoryInline::FlatRead32(r31_addr_2);
    f0.d = PPC_Fctiwz(f30.d);
    r6 = r27;
    fctiwzword7 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 56), f1.d);
    r7 = -1;
    fctiwzword8 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    r4 = fctiwzword7;
    r5 = fctiwzword8;
    r4 = (r4 & 65535);
    r5 = (r5 & 65535);
    ctx->lr = 0x80240818u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80214C74u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80240818:
{
    r31_addr_4 = (r31 + r28);
    r3 = MemoryInline::FlatRead32(r31_addr_4);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 112));
    r11 = (r1 + 112);
    // inline leaf 0x800215D8 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D8
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80240358 func_80240358 preserves=false fpr_mask=0xC0000000
