#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800327D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
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
    uint32_t r24_psq_tmp_0 = 0;
    uint32_t r24_psq_tmp_1 = 0;
    uint32_t r24_psq_tmp_2 = 0;
    uint32_t r24_psq_tmp_3 = 0;
    uint32_t r24_psq_tmp_4 = 0;
    uint32_t r24_psq_tmp_5 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_10 = 0;
    uint32_t r28_rot_11 = 0;
    uint32_t r28_rot_12 = 0;
    uint32_t r28_rot_13 = 0;
    uint32_t r28_rot_14 = 0;
    uint32_t r28_rot_15 = 0;
    uint32_t r28_rot_16 = 0;
    uint32_t r28_rot_17 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r28_rot_3 = 0;
    uint32_t r28_rot_4 = 0;
    uint32_t r28_rot_5 = 0;
    uint32_t r28_rot_6 = 0;
    uint32_t r28_rot_7 = 0;
    uint32_t r28_rot_8 = 0;
    uint32_t r28_rot_9 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_10 = 0;
    uint32_t r3_psq_tmp_11 = 0;
    uint32_t r3_psq_tmp_12 = 0;
    uint32_t r3_psq_tmp_13 = 0;
    uint32_t r3_psq_tmp_14 = 0;
    uint32_t r3_psq_tmp_15 = 0;
    uint32_t r3_psq_tmp_16 = 0;
    uint32_t r3_psq_tmp_17 = 0;
    uint32_t r3_psq_tmp_18 = 0;
    uint32_t r3_psq_tmp_19 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_20 = 0;
    uint32_t r3_psq_tmp_21 = 0;
    uint32_t r3_psq_tmp_22 = 0;
    uint32_t r3_psq_tmp_23 = 0;
    uint32_t r3_psq_tmp_24 = 0;
    uint32_t r3_psq_tmp_25 = 0;
    uint32_t r3_psq_tmp_26 = 0;
    uint32_t r3_psq_tmp_27 = 0;
    uint32_t r3_psq_tmp_28 = 0;
    uint32_t r3_psq_tmp_29 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_30 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint32_t r3_psq_tmp_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_7 = 0;
    uint32_t r4_psq_tmp_8 = 0;
    uint32_t r4_psq_tmp_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_10 = 0;
    uint32_t r5_psq_tmp_11 = 0;
    uint32_t r5_psq_tmp_12 = 0;
    uint32_t r5_psq_tmp_13 = 0;
    uint32_t r5_psq_tmp_14 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_4 = 0;
    uint32_t r5_psq_tmp_5 = 0;
    uint32_t r5_psq_tmp_6 = 0;
    uint32_t r5_psq_tmp_7 = 0;
    uint32_t r5_psq_tmp_8 = 0;
    uint32_t r5_psq_tmp_9 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;
    uint8_t* guest_range_9 = nullptr;

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
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800327D0;

loc_800327D0:
{
    MemoryInline::FlatWriteRam32((r1 + -304), r1);
    r1 = (r1 + -304);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 308), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 288), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 296);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 288);
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
    f31.d = f1.d;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800327F4:
{
    r12 = 1127219200;
    r11 = 0;
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 200), r12);
    MemoryInline::FlatWriteRam32((r1 + 208), r12);
    r24 = r3;
    r31 = r4;
    r30 = r5;
    MemoryInline::FlatWrite32((r3 + 16), r11);
    r29 = r6;
    r28 = r7;
    r27 = r8;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r25 = r9;
    r26 = r10;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80032838;
    }
}

loc_80032834:
{
    r31 = 1;
}

loc_80032838:
{
    MemoryInline::FlatWrite32((r3 + 200), r7);
    r23 = 0;
    r4 = MemoryInline::FlatRead32((r7 + 16));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r7 + 16), r0);
    MemoryInline::FlatWrite32((r3 + 216), r23);
    MemoryInline::FlatWrite16((r3 + 226), static_cast<uint16_t>(r23));
    // inline leaf 0x80035940 (3 guest instruction(s))
    r3 = 0x802B0000u;
    r3 = (r3 + 30096);
    // end of inlined leaf 0x80035940
    r4 = MemoryInline::FlatRead32((r28 + 36));
    r5 = r28;
    r3 = (r24 + 32);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r0 + r4);
    r4 = (r4 + 12);
    ctx->lr = 0x80032874u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800324B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
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
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    guest_range_6 = MemoryInline::ResolveRangeHost((r24 + 153), 0, 76u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_6, 43u, (r24 + 196), f31.d);
    r3 = 0x81020000u;
    r5 = 196608;
    r4 = 255;
    MemoryInline::WriteResolved16(guest_range_6, 67u, (r24 + 220), static_cast<uint16_t>(r23));
    r0 = (r3 + 1033);
    r5 = (r5 + 17405);
    f6.d = MemoryInline::FlatReadFloat32(r30);
    r6 = MemoryInline::FlatRead32((r28 + 32));
    f5.d = MemoryInline::FlatReadFloat32((r30 + 4));
    r3 = MemoryInline::FlatRead32((r6 + 236));
    f4.d = MemoryInline::FlatReadFloat32((r30 + 8));
    r3 = (r3 * r5);
    f3.d = MemoryInline::FlatReadFloat32(r29);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30928));
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    MemoryInline::FlatWrite32((r6 + 236), r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r3 = (r3_rot_0 & 65535);
    if (!MemoryInline::WriteResolvedPair16(guest_range_6, 69u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r31)))) {
        MemoryInline::WriteResolved16(guest_range_6, 69u, (r24 + 222), r3);
        MemoryInline::WriteResolved16(guest_range_6, 71u, (r24 + 224), r31);
    }
    MemoryInline::WriteResolved8(guest_range_6, 75u, (r24 + 228), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r28 + 32));
    r3 = MemoryInline::FlatRead32((r4 + 236));
    r3 = (r3 * r5);
    r3 = (r3 + 2555904);
    r3 = (r3 + -24893);
    MemoryInline::FlatWrite32((r4 + 236), r3);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r4 = (r4_rot_0 & 65535);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 19u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 19u, (r24 + 172), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 23u, (r24 + 176), f5.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_6, 27u, (r24 + 180), f4.d);
    r0 = (r0 + r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(7) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 7);
    MemoryInline::WriteResolvedFloat32(guest_range_6, 31u, (r24 + 184), f6.d);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 + r3);
    MemoryInline::WriteResolvedFloat32(guest_range_6, 35u, (r24 + 188), f5.d);
    r0 = (r0 * 254);
    MemoryInline::WriteResolvedFloat32(guest_range_6, 39u, (r24 + 192), f4.d);
    r3 = (r4 - r0);
    MemoryInline::WriteResolvedFloat32(guest_range_6, 7u, (r24 + 160), f3.d);
    r0 = (r3 + -126);
    MemoryInline::WriteResolved8(guest_range_6, 0u, (r24 + 153), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 11u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 11u, (r24 + 164), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 15u, (r24 + 168), f0.d);
    }
    r3 = MemoryInline::FlatRead32((r28 + 32));
    r23 = MemoryInline::FlatRead32((r3 + 188));
    r23 = (r23 + 132);
    f0.d = MemoryInline::FlatReadFloat32(r23);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80032948:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80032964;
    }
}

loc_8003294C:
{
    f0.d = MemoryInline::FlatReadFloat32((r23 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80032954:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80032964;
    }
}

loc_80032958:
{
    f0.d = MemoryInline::FlatReadFloat32((r23 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80032960:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800329BC;
    }
}

loc_80032964:
{
    r4 = (r1 + 152);
    ctx->lr = 0x8003296Cu;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80029A60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r3 = (r1 + 152);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80199FC8u>(ctx);
    r3 = ctx->gpr[3];
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
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30928));
    r4 = r23;
    MemoryInline::FlatWriteRamFloat32((r1 + 196), f0.d);
    r3 = (r1 + 152);
    r5 = (r1 + 40);
    MemoryInline::FlatWriteRamFloat32((r1 + 180), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 164), f0.d);
    // inline leaf 0x8019A91C (21 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_1));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_2));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 24);
    PpcSetPairedFprInline(f9, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_3));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f8.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 0u>(ctx, r5, f6.d);
    PpcSetPairedFprInline(f11, PPC_PsMaddInline(f9.d, f1.d, f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_4));
    PpcSetPairedFprInline(f12, PPC_PsSum0Inline(f11.d, f11.d, PPC_PsFromScalarInline(f12.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_5 = (r3 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_5));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_1 = (r5 + 4);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_1, f12.d);
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_2 = (r5 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_2, f6.d);
    // end of inlined leaf 0x8019A91C
    r3 = (r1 + 40);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r24_psq_tmp_1 = (r24 + 160);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r24_psq_tmp_1));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f1, PPC_PsAddInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r24_psq_tmp_2 = (r24 + 168);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r24_psq_tmp_2));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r24_psq_tmp_3 = (r24 + 160);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r24_psq_tmp_3, f1.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_6 = (r3 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_6));
    PpcSetPairedFprInline(f1, PPC_PsAddInline(f0.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r24_psq_tmp_4 = (r24 + 168);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r24_psq_tmp_4, f1.d);
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
    f6.d = PPC_PsToScalarInline(f6.d);
    f8.d = PPC_PsToScalarInline(f8.d);
    f9.d = PPC_PsToScalarInline(f9.d);
    f10.d = PPC_PsToScalarInline(f10.d);
    f11.d = PPC_PsToScalarInline(f11.d);
    f12.d = PPC_PsToScalarInline(f12.d);
}

loc_800329BC:
{
}

loc_800329C0:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80032A54;
    }
}

loc_800329C4:
{
    r4 = (r24 + 172);
    r3 = r27;
    r5 = r4;
    // inline leaf 0x8019A91C (21 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_3 = (r4 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_3));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_8 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_8));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_9 = (r3 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_9));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_10 = (r3 + 24);
    PpcSetPairedFprInline(f9, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_10));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f8.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5, f6.d);
    PpcSetPairedFprInline(f11, PPC_PsMaddInline(f9.d, f1.d, f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_11 = (r3 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_11));
    PpcSetPairedFprInline(f12, PPC_PsSum0Inline(f11.d, f11.d, PPC_PsFromScalarInline(f12.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_12 = (r3 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_12));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_4 = (r5 + 4);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_4, f12.d);
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_5 = (r5 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_5, f6.d);
    // end of inlined leaf 0x8019A91C
    guest_range_2 = MemoryInline::ResolveRangeHost(r27, 0, 48u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, r27);
    r4 = (r24 + 160);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r27 + 4));
    r5 = r4;
    guest_range_7 = MemoryInline::ResolveRangeHost((r1 + 104), 0, 48u, false, true);
    MemoryInline::WriteResolved32(guest_range_7, 4u, (r1 + 108), r0);
    r3 = (r1 + 104);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30928));
    MemoryInline::WriteResolved32(guest_range_7, 0u, (r1 + 104), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r27 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r27 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_7, 12u, (r1 + 116), r0);
        MemoryInline::WriteResolved32(guest_range_7, 8u, (r1 + 112), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r27 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r27 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_7, 20u, (r1 + 124), r0);
        MemoryInline::WriteResolved32(guest_range_7, 16u, (r1 + 120), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r27 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r27 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_7, 28u, (r1 + 132), r0);
        MemoryInline::WriteResolved32(guest_range_7, 24u, (r1 + 128), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r27 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r27 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_7, 36u, (r1 + 140), r0);
        MemoryInline::WriteResolved32(guest_range_7, 32u, (r1 + 136), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r27 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r27 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_7, 44u, (r1 + 148), r0);
        MemoryInline::WriteResolved32(guest_range_7, 40u, (r1 + 144), r6);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_7, 44u, (r1 + 148), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_7, 28u, (r1 + 132), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_7, 12u, (r1 + 116), f0.d);
    // inline leaf 0x8019A91C (21 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_4 = (r4 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_4));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_13 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_13));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_14 = (r3 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_14));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_15 = (r3 + 24);
    PpcSetPairedFprInline(f9, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_15));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f8.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5, f6.d);
    PpcSetPairedFprInline(f11, PPC_PsMaddInline(f9.d, f1.d, f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_16 = (r3 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_16));
    PpcSetPairedFprInline(f12, PPC_PsSum0Inline(f11.d, f11.d, f12.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_17 = (r3 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_17));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_6 = (r5 + 4);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_6, f12.d);
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_7 = (r5 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_7, f6.d);
    // end of inlined leaf 0x8019A91C
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    f4.d = PPC_PsToScalarInline(f4.d);
    f5.d = PPC_PsToScalarInline(f5.d);
    f6.d = PPC_PsToScalarInline(f6.d);
    f8.d = PPC_PsToScalarInline(f8.d);
    f9.d = PPC_PsToScalarInline(f9.d);
    f10.d = PPC_PsToScalarInline(f10.d);
    f11.d = PPC_PsToScalarInline(f11.d);
    f12.d = PPC_PsToScalarInline(f12.d);
}

loc_80032A54:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30928));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_80032A5C:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30972));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    MemoryInline::FlatWriteFloat32((r24 + 204), f1.d);
    MemoryInline::FlatWriteFloat32((r24 + 208), f0.d);
    MemoryInline::FlatWriteFloat32((r24 + 212), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800331C8;
    }
}

loc_80032A7C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_80032A80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800331C8;
    }
}

loc_80032A84:
{
    r0 = MemoryInline::FlatRead16(r25);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80032A8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80032B70;
    }
}

loc_80032A90:
{
    r3 = MemoryInline::FlatRead32((r26 + 200));
    r4 = (r1 + 56);
    ctx->lr = 0x80032A9Cu;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80035260u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30928));
    r3 = (r1 + 56);
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    r4 = (r26 + 160);
    r5 = (r1 + 28);
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    // inline leaf 0x8019A91C (21 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_6 = (r4 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_6));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_19 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_19));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_20 = (r3 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_20));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, PPC_PsFromScalarInline(f6.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_21 = (r3 + 24);
    PpcSetPairedFprInline(f9, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_21));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f8.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 0u>(ctx, r5, f6.d);
    PpcSetPairedFprInline(f11, PPC_PsMaddInline(f9.d, f1.d, f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_22 = (r3 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_22));
    PpcSetPairedFprInline(f12, PPC_PsSum0Inline(f11.d, f11.d, PPC_PsFromScalarInline(f12.d)));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_23 = (r3 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_23));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_9 = (r5 + 4);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_9, f12.d);
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_10 = (r5 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_10, f6.d);
    // end of inlined leaf 0x8019A91C
    r3 = MemoryInline::FlatRead32((r24 + 200));
    r4 = (r1 + 56);
    ctx->lr = 0x80032AC8u;
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80035260u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30928));
    r3 = (r1 + 56);
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    r4 = r3;
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80199FC8u>(ctx);
    r3 = ctx->gpr[3];
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
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    r4 = (r1 + 28);
    r3 = (r1 + 56);
    r5 = r4;
    // inline leaf 0x8019A91C (21 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_7 = (r4 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r4_psq_tmp_7));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_24 = (r3 + 8);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_24));
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_25 = (r3 + 16);
    PpcSetPairedFprInline(f8, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_25));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_26 = (r3 + 24);
    PpcSetPairedFprInline(f9, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_26));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f8.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 0u>(ctx, r5, f6.d);
    PpcSetPairedFprInline(f11, PPC_PsMaddInline(f9.d, f1.d, f10.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_27 = (r3 + 32);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_27));
    PpcSetPairedFprInline(f12, PPC_PsSum0Inline(f11.d, f11.d, f12.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_28 = (r3 + 40);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_28));
    PpcSetPairedFprInline(f4, PPC_PsMulInline(f2.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_11 = (r5 + 4);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_11, f12.d);
    PpcSetPairedFprInline(f5, PPC_PsMaddInline(f3.d, f1.d, f4.d));
    PpcSetPairedFprInline(f6, PPC_PsSum0Inline(f5.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r5_psq_tmp_12 = (r5 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r5_psq_tmp_12, f6.d);
    // end of inlined leaf 0x8019A91C
    r0 = MemoryInline::FlatRead16(r25);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f7.d = MemoryInline::FlatReadFloat64((r2 + -30912));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 204), r0);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 200));
    f6.d = MemoryInline::FlatReadFloat32((r2 + -30924));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f7.d));
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    f3.d = MemoryInline::FlatReadFloat32((r24 + 160));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 208));
    f2.d = PpcFmulsInline(f0.d, f2.d);
    MemoryInline::FlatWriteRam32((r1 + 204), r0);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f7.d));
    f1.d = MemoryInline::FlatReadFloat32((r24 + 164));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 200));
    f5.d = PpcFmulsInline(f6.d, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f7.d));
    f0.d = MemoryInline::FlatReadFloat32((r24 + 168));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f5.d));
    MemoryInline::FlatWriteFloat32((r24 + 160), f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f3.d = PpcFmulsInline(f3.d, f4.d);
    f3.d = PpcFmulsInline(f6.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f3.d));
    MemoryInline::FlatWriteFloat32((r24 + 164), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = PpcFmulsInline(f6.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r24 + 168), f0.d);
    f8.d = PPC_PsToScalarInline(f8.d);
    f9.d = PPC_PsToScalarInline(f9.d);
    f10.d = PPC_PsToScalarInline(f10.d);
    f11.d = PPC_PsToScalarInline(f11.d);
    f12.d = PPC_PsToScalarInline(f12.d);
}

loc_80032B70:
{
    r6 = MemoryInline::FlatRead8((r25 + 2));
}

loc_80032B78:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80032CEC;
    }
}

loc_80032B7C:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r26 + 48), 0, 181u, true, false);
    r4 = MemoryInline::ReadResolved8(guest_range_3, 180u, (r26 + 228));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r26 + 48));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 8u, (r26 + 56));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(255));
}

loc_80032B8C:
{
    f3.d = PpcFmulsInline(f1.d, f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80032BDC;
    }
}

loc_80032B94:
{
    r3 = MemoryInline::ReadResolved32(guest_range_3, 152u, (r26 + 200));
    r5 = MemoryInline::FlatRead8((r3 + 137));
}

loc_80032BA0:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r5))) {
        goto loc_80032BDC;
    }
}

loc_80032BA4:
{
    r0 = MemoryInline::FlatRead8((r3 + 138));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -30912));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30924));
    r0 = (100 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(100) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r0 = (r0 * r4);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r5));
    r0 = (r3 + r0);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 208));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f3.d = PpcFmulsInline(f3.d, f0.d);
}

loc_80032BDC:
{
    MemoryInline::FlatWriteRam32((r1 + 204), r6);
    r3 = MemoryInline::ReadResolved32(guest_range_3, 152u, (r26 + 200));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -30944));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 88));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 200));
    f3.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30924));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r24 + 48), f0.d);
    r6 = MemoryInline::ReadResolved32(guest_range_3, 152u, (r26 + 200));
    r3 = MemoryInline::FlatRead32((r6 + 36));
    r0 = MemoryInline::FlatRead16((r3 + 156));
    r0 = (r0 & 24576);
}

loc_80032C1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(16384))) {
        goto loc_80032C34;
    }
}

loc_80032C20:
{
}

loc_80032C24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8192))) {
        goto loc_80032C44;
    }
}

loc_80032C28:
{
}

loc_80032C2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(24576))) {
        goto loc_80032C54;
    }
}

loc_80032C30:
{
    goto loc_80032C64;
}

loc_80032C34:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 4u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 4u, (r26 + 52));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 8u, (r26 + 56));
        }
    }
    f3.d = PpcFmulsInline(f1.d, f0.d);
    goto loc_80032C70;
}

loc_80032C44:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r26 + 48));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 12u, (r26 + 60));
    f3.d = PpcFmulsInline(f1.d, f0.d);
    goto loc_80032C70;
}

loc_80032C54:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r26 + 48));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 8u, (r26 + 56));
    f3.d = PpcFmulsInline(f1.d, f0.d);
    goto loc_80032C70;
}

loc_80032C64:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 4u, (r26 + 52));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 12u, (r26 + 60));
    f3.d = PpcFmulsInline(f1.d, f0.d);
}

loc_80032C70:
{
    r4 = MemoryInline::ReadResolved8(guest_range_3, 180u, (r26 + 228));
}

loc_80032C78:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_80032CC0;
    }
}

loc_80032C7C:
{
    r5 = MemoryInline::FlatRead8((r6 + 137));
}

loc_80032C84:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r5))) {
        goto loc_80032CC0;
    }
}

loc_80032C88:
{
    r0 = MemoryInline::FlatRead8((r6 + 138));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -30912));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30924));
    r0 = (100 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(100) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r0 = (r0 * r4);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r5));
    r0 = (r3 + r0);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 208));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f3.d = PpcFmulsInline(f3.d, f0.d);
}

loc_80032CC0:
{
    r0 = MemoryInline::FlatRead8((r25 + 2));
    MemoryInline::FlatWriteRam32((r1 + 204), r0);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 92));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -30944));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 200));
    f3.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30924));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r24 + 52), f0.d);
}

loc_80032CEC:
{
    r0 = MemoryInline::FlatRead8((r25 + 3));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80032CF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80032F20;
    }
}

loc_80032CF8:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -30936), 0, 8u, true, false);
    r12 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r2 + -30936));
    r4 = r26;
    r11 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r2 + -30935));
    r5 = (r1 + 12);
    r10 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r2 + -30934));
    r6 = (r1 + 8);
    r9 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r2 + -30933));
    r8 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r2 + -30932));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r2 + -30931));
    r3 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r2 + -30930));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r2 + -30929));
    guest_range_8 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_8, 4u, (r1 + 12), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_8, 5u, (r1 + 13), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_8, 6u, (r1 + 14), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_8, 7u, (r1 + 15), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_8, 0u, (r1 + 8), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_8, 1u, (r1 + 9), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_8, 2u, (r1 + 10), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_8, 3u, (r1 + 11), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r26 + 200));
    ctx->lr = 0x80032D4Cu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80035510u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    xer = ctx->xer;
    r30 = r26;
    r29 = r24;
    r27 = 0;
    r31 = 1374420992;
}

loc_80032D5C:
{
    r5 = MemoryInline::FlatRead8((r25 + 8));
}

loc_80032D64:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80032E34;
    }
}

loc_80032D68:
{
    r0 = (r5 & 1);
}

loc_80032D6C:
{
    r28 = 255;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80032DB0;
    }
}

loc_80032D74:
{
    r0 = MemoryInline::FlatRead8((r26 + 228));
    r4 = MemoryInline::FlatRead8((r30 + 35));
}

loc_80032D80:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_80032DA0;
    }
}

loc_80032D84:
{
    r3 = MemoryInline::FlatRead32((r26 + 200));
    r3 = MemoryInline::FlatRead8((r3 + 136));
}

loc_80032D90:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r3))) {
        goto loc_80032DA0;
    }
}

loc_80032D94:
{
    r0 = (r4 * r0);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r3));
    r4 = (r0 & 255);
}

loc_80032DA0:
{
    r3 = (r4 + 1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & -256);
    r28 = (r0 - r3);
    r28_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(24));
    r28 = (r28_rot_2 & 16777215);
}

loc_80032DB0:
{
    r0 = (r5 & 2);
}

loc_80032DB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80032DF0;
    }
}

loc_80032DB8:
{
    r4 = MemoryInline::FlatRead8((r26 + 228));
    r0 = MemoryInline::FlatRead8((r30 + 39));
}

loc_80032DC4:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_80032DE4;
    }
}

loc_80032DC8:
{
    r3 = MemoryInline::FlatRead32((r26 + 200));
    r3 = MemoryInline::FlatRead8((r3 + 136));
}

loc_80032DD4:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r3))) {
        goto loc_80032DE4;
    }
}

loc_80032DD8:
{
    r0 = (r0 * r4);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r3));
    r0 = (r0 & 255);
}

loc_80032DE4:
{
    r3 = (r28 * r0);
    r28 = (r3 + 255);
    r28_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(24));
    r28 = (r28_rot_4 & 16777215);
}

loc_80032DF0:
{
    r0 = (r5 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80032DF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80032E1C;
    }
}

loc_80032DF8:
{
    r3 = r26;
    ctx->lr = 0x80032E00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800331F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r1 + 15));
    r3 = (r28 * r3);
    r3 = (r3 + 255);
    r3 = (r3 * r0);
    r28 = (r3 + 255);
    r28_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(16));
    r28 = (r28_rot_6 & 65535);
}

loc_80032E1C:
{
    r0 = MemoryInline::FlatRead8((r25 + 3));
    r3 = (r31 + -31457);
    r0 = (r28 * r0);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r3) * static_cast<uint64_t>(r0)) >> 32));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_4 & 255);
    MemoryInline::FlatWrite8((r29 + 35), static_cast<uint8_t>(r0));
}

loc_80032E34:
{
    r5 = MemoryInline::FlatRead8((r25 + 9));
}

loc_80032E3C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80032F0C;
    }
}

loc_80032E40:
{
    r0 = (r5 & 1);
}

loc_80032E44:
{
    r28 = 255;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80032E88;
    }
}

loc_80032E4C:
{
    r0 = MemoryInline::FlatRead8((r26 + 228));
    r4 = MemoryInline::FlatRead8((r30 + 35));
}

loc_80032E58:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_80032E78;
    }
}

loc_80032E5C:
{
    r3 = MemoryInline::FlatRead32((r26 + 200));
    r3 = MemoryInline::FlatRead8((r3 + 136));
}

loc_80032E68:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r3))) {
        goto loc_80032E78;
    }
}

loc_80032E6C:
{
    r0 = (r4 * r0);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r3));
    r4 = (r0 & 255);
}

loc_80032E78:
{
    r3 = (r4 + 1);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0 = (r0_rot_6 & -256);
    r28 = (r0 - r3);
    r28_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(24));
    r28 = (r28_rot_9 & 16777215);
}

loc_80032E88:
{
    r0 = (r5 & 2);
}

loc_80032E8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80032EC8;
    }
}

loc_80032E90:
{
    r4 = MemoryInline::FlatRead8((r26 + 228));
    r0 = MemoryInline::FlatRead8((r30 + 39));
}

loc_80032E9C:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_80032EBC;
    }
}

loc_80032EA0:
{
    r3 = MemoryInline::FlatRead32((r26 + 200));
    r3 = MemoryInline::FlatRead8((r3 + 136));
}

loc_80032EAC:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r3))) {
        goto loc_80032EBC;
    }
}

loc_80032EB0:
{
    r0 = (r0 * r4);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r3));
    r0 = (r0 & 255);
}

loc_80032EBC:
{
    r3 = (r28 * r0);
    r28 = (r3 + 255);
    r28_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(24));
    r28 = (r28_rot_11 & 16777215);
}

loc_80032EC8:
{
    r0 = (r5 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80032ECC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80032EF4;
    }
}

loc_80032ED0:
{
    r3 = r26;
    ctx->lr = 0x80032ED8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800331F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r1 + 15));
    r3 = (r28 * r3);
    r3 = (r3 + 255);
    r3 = (r3 * r0);
    r28 = (r3 + 255);
    r28_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(16));
    r28 = (r28_rot_13 & 65535);
}

loc_80032EF4:
{
    r0 = MemoryInline::FlatRead8((r25 + 3));
    r3 = (r31 + -31457);
    r0 = (r28 * r0);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r3) * static_cast<uint64_t>(r0)) >> 32));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_8 & 255);
    MemoryInline::FlatWrite8((r29 + 39), static_cast<uint8_t>(r0));
}

loc_80032F0C:
{
    r27 = (r27 + 1);
    r29 = (r29 + 8);
}

loc_80032F18:
{
    r30 = (r30 + 8);
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(2))) {
        goto loc_80032D5C;
    }
}

loc_80032F20:
{
    r7 = MemoryInline::FlatRead8((r25 + 4));
}

loc_80032F28:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80033084;
    }
}

loc_80032F2C:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r26 + 32), 0, 15u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_4, 0u, (r26 + 32));
    r3 = 1374420992;
    r5 = MemoryInline::ReadResolved8(guest_range_4, 1u, (r26 + 33));
    r6 = (r3 + -31457);
    r4 = (r0 * r7);
    r0 = MemoryInline::ReadResolved8(guest_range_4, 2u, (r26 + 34));
    r3 = (r5 * r7);
    r0 = (r0 * r7);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r6)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r4 = (static_cast<int32_t>(r4) >> 5);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r6)) * static_cast<int64_t>(static_cast<int32_t>(r3))) >> 32));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & 1);
    r4 = (r4 + r5);
    guest_range_9 = MemoryInline::ResolveRangeHost((r24 + 32), 0, 15u, false, true);
    MemoryInline::WriteResolved8(guest_range_9, 0u, (r24 + 32), static_cast<uint8_t>(r4));
    r3 = (static_cast<int32_t>(r3) >> 5);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r6)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r3 = (r3 + r4);
    MemoryInline::WriteResolved8(guest_range_9, 1u, (r24 + 33), static_cast<uint8_t>(r3));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r0 = (r0 + r3);
    MemoryInline::WriteResolved8(guest_range_9, 2u, (r24 + 34), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 4u, (r26 + 36));
    r5 = MemoryInline::ReadResolved8(guest_range_4, 5u, (r26 + 37));
    r4 = (r0 * r7);
    r0 = MemoryInline::ReadResolved8(guest_range_4, 6u, (r26 + 38));
    r3 = (r5 * r7);
    r0 = (r0 * r7);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r6)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r4 = (static_cast<int32_t>(r4) >> 5);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r6)) * static_cast<int64_t>(static_cast<int32_t>(r3))) >> 32));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & 1);
    r4 = (r4 + r5);
    MemoryInline::WriteResolved8(guest_range_9, 4u, (r24 + 36), static_cast<uint8_t>(r4));
    r3 = (static_cast<int32_t>(r3) >> 5);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r6)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    r3 = (r3 + r4);
    MemoryInline::WriteResolved8(guest_range_9, 5u, (r24 + 37), static_cast<uint8_t>(r3));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    r0 = (r0 + r3);
    MemoryInline::WriteResolved8(guest_range_9, 6u, (r24 + 38), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 8u, (r26 + 40));
    r5 = MemoryInline::ReadResolved8(guest_range_4, 9u, (r26 + 41));
    r4 = (r0 * r7);
    r0 = MemoryInline::ReadResolved8(guest_range_4, 10u, (r26 + 42));
    r3 = (r5 * r7);
    r0 = (r0 * r7);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r6)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r4 = (static_cast<int32_t>(r4) >> 5);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r6)) * static_cast<int64_t>(static_cast<int32_t>(r3))) >> 32));
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r5 = (r5_rot_3 & 1);
    r4 = (r4 + r5);
    MemoryInline::WriteResolved8(guest_range_9, 8u, (r24 + 40), static_cast<uint8_t>(r4));
    r3 = (static_cast<int32_t>(r3) >> 5);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r6)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_3 & 1);
    r3 = (r3 + r4);
    MemoryInline::WriteResolved8(guest_range_9, 9u, (r24 + 41), static_cast<uint8_t>(r3));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    r0 = (r0 + r3);
    MemoryInline::WriteResolved8(guest_range_9, 10u, (r24 + 42), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 12u, (r26 + 44));
    r5 = MemoryInline::ReadResolved8(guest_range_4, 13u, (r26 + 45));
    r4 = (r0 * r7);
    r0 = MemoryInline::ReadResolved8(guest_range_4, 14u, (r26 + 46));
    r3 = (r5 * r7);
    r0 = (r0 * r7);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r6)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r4 = (static_cast<int32_t>(r4) >> 5);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r6)) * static_cast<int64_t>(static_cast<int32_t>(r3))) >> 32));
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r5 = (r5_rot_4 & 1);
    r4 = (r4 + r5);
    MemoryInline::WriteResolved8(guest_range_9, 12u, (r24 + 44), static_cast<uint8_t>(r4));
    r3 = (static_cast<int32_t>(r3) >> 5);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r6)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_4 & 1);
    r3 = (r3 + r4);
    MemoryInline::WriteResolved8(guest_range_9, 13u, (r24 + 45), static_cast<uint8_t>(r3));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    r0 = (r0 + r3);
    MemoryInline::WriteResolved8(guest_range_9, 14u, (r24 + 46), static_cast<uint8_t>(r0));
}

loc_80033084:
{
    r0 = MemoryInline::FlatRead8((r25 + 7));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8003308C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800331C8;
    }
}

loc_80033090:
{
    r0 = MemoryInline::FlatRead8((r26 + 154));
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -30944));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 208));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30920));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f4.d = MemoryInline::FlatReadFloat32((r26 + 64));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -30956));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30960));
    f3.d = PpcFmulsInline(f0.d, f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30952));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f2.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001B418u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f5.d = MemoryInline::FlatReadFloat64((r2 + -30944));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -30920));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -30956));
    f4.d = PPC_Fctiwz(f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30960));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30952));
    fctiwzword0 = PPC_FprLowWordInline(f4.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 216), f4.d);
    r3 = fctiwzword0;
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0 = (r0_rot_11 & -16777216);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_7 & 1);
    r0 = (r0 - r3);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_12 & -1);
    r0 = (r0 + r3);
    MemoryInline::FlatWrite8((r24 + 154), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 155));
    MemoryInline::FlatWriteRam32((r1 + 204), r0);
    f6.d = MemoryInline::FlatReadFloat32((r26 + 68));
    f4.d = MemoryInline::FlatReadFloat64((r1 + 200));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f5.d));
    f3.d = PpcFmulsInline(f3.d, f4.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f6.d / f2.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001B418u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f5.d = MemoryInline::FlatReadFloat64((r2 + -30944));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -30920));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -30956));
    f4.d = PPC_Fctiwz(f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30960));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30952));
    fctiwzword1 = PPC_FprLowWordInline(f4.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 224), f4.d);
    r3 = fctiwzword1;
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0 = (r0_rot_13 & -16777216);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_8 & 1);
    r0 = (r0 - r3);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_14 & -1);
    r0 = (r0 + r3);
    MemoryInline::FlatWrite8((r24 + 155), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 156));
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    f6.d = MemoryInline::FlatReadFloat32((r26 + 72));
    f4.d = MemoryInline::FlatReadFloat64((r1 + 208));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f5.d));
    f3.d = PpcFmulsInline(f3.d, f4.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f6.d / f2.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001B418u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword2;
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0 = (r0_rot_15 & -16777216);
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_9 & 1);
    r0 = (r0 - r3);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_16 & -1);
    r0 = (r0 + r3);
    MemoryInline::FlatWrite8((r24 + 156), static_cast<uint8_t>(r0));
}

loc_800331C8:
{
    r3 = 1;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 288));
    r11 = (r1 + 288);
    // inline leaf 0x800215DC (10 guest instruction(s))
    guest_range_5 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_5, 12u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_5, 16u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_5, 20u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_5, 24u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_5, 28u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_5, 32u, (r11 + -4));
    // end of inlined leaf 0x800215DC
    r0 = MemoryInline::FlatRead32((r1 + 308));
    ctx->lr = r0;
    r1 = (r1 + 304);
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
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF801FFF gpr_write=0xFF801FFB gpr_return=0x00000018 fpr_read=0xFF00FFFF fpr_write=0xFF00FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800327D0 func_800327D0 preserves=false fpr_mask=0x80000000
