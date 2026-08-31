#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066B8B8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r10_rot_6 = 0;
    uint32_t r10_rot_7 = 0;
    uint32_t r10_rot_8 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r26_rot_3 = 0;
    uint32_t r26_rot_4 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
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
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8066B8B8;

loc_8066B8B8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r0 = MemoryInline::FlatRead32((r3 + 16884));
    r27 = r3;
    r28 = r5;
    r29 = r6;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8066B8E0:
{
    r30 = r7;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066BCA4;
    }
}

loc_8066B8E8:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10424));
    r26 = (r3 + 131072);
    r3 = MemoryInline::FlatRead32((r26 + 20476));
    r3 = (r3 + 131072);
    r3 = (r3 + 13064);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80548B8Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_8066B90C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066B918;
    }
}

loc_8066B910:
{
    r3 = 0;
    goto loc_8066BCA8;
}

loc_8066B918:
{
    r0 = (r3 & 255);
    r3 = MemoryInline::FlatRead32((r26 + 20476));
    r0 = (r0 * 900);
    r3 = (r3 + 131072);
    r3 = (r3 + 13064);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8066B938:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8066B944;
    }
}

loc_8066B93C:
{
    r31 = (r3 + 12);
    goto loc_8066B948;
}

loc_8066B944:
{
    r31 = 0;
}

loc_8066B948:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_8066B94C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066B95C;
    }
}

loc_8066B950:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(1));
}

loc_8066B954:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066BADC;
    }
}

loc_8066B958:
{
    goto loc_8066BC58;
}

loc_8066B95C:
{
    r3 = MemoryInline::FlatRead32((r31 + 224));
    r0 = 1127219200;
    guest_range_1 = MemoryInline::ResolveRangeHost(r29, 0, 31u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r29, r3);
    r8 = 0x808A0000u;
    r7 = 0x808A0000u;
    r5 = 1172832256;
    r10 = MemoryInline::FlatRead32((r31 + 232));
    r6 = (r5 + -19853);
    r9 = MemoryInline::FlatRead32((r31 + 228));
    r4 = 65536;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r11 = (r4 + -5536);
    r0 = (r9 - r10);
    f0.d = MemoryInline::FlatReadFloat32((r7 + -21984));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f2.d = MemoryInline::FlatReadFloat64((r8 + -21976));
    r3 = 274857984;
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r0 = (r3 + 19923);
    r7 = 1;
    r3 = (r29 + 32);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    r4 = (r31 + 236);
    r5 = 100;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r29 + 4), f0.d);
    r8 = MemoryInline::FlatRead32((r31 + 228));
    r9 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r6)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r29 + 18), static_cast<uint8_t>(r7));
    r12 = (static_cast<int32_t>(r9) >> 14);
    r9 = (static_cast<int32_t>(r9) >> 14);
    r10_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r10 = (r10_rot_4 & 1);
    r26_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(1));
    r26 = (r26_rot_2 & 1);
    r9 = (r9 + r10);
    r9 = (r9 * r11);
    r10 = (r12 + r26);
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r29 + 12), static_cast<uint16_t>(r10));
    r9 = (r8 - r9);
    r9 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r9))) >> 32));
    r10 = (static_cast<int32_t>(r9) >> 6);
    r9 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r12 = (r12_rot_2 & 1);
    r10 = (r10 + r12);
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r29 + 14), static_cast<uint8_t>(r10));
    r9 = (static_cast<int32_t>(r9) >> 6);
    r10_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r10 = (r10_rot_5 & 1);
    r9 = (r9 + r10);
    r9 = (r9 * 1000);
    r8 = (r8 - r9);
    MemoryInline::WriteResolved16(guest_range_1, 16u, (r29 + 16), static_cast<uint16_t>(r8));
    r8 = MemoryInline::FlatRead32((r31 + 232));
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r6)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    MemoryInline::WriteResolved8(guest_range_1, 30u, (r29 + 30), static_cast<uint8_t>(r7));
    r9 = (static_cast<int32_t>(r6) >> 14);
    r6 = (static_cast<int32_t>(r6) >> 14);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r7 = (r7_rot_3 & 1);
    r10_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r10 = (r10_rot_6 & 1);
    r6 = (r6 + r7);
    r6 = (r6 * r11);
    r7 = (r9 + r10);
    MemoryInline::WriteResolved16(guest_range_1, 24u, (r29 + 24), static_cast<uint16_t>(r7));
    r6 = (r8 - r6);
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    r6 = (static_cast<int32_t>(r6) >> 6);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r7 = (r7_rot_4 & 1);
    r6 = (r6 + r7);
    MemoryInline::WriteResolved8(guest_range_1, 26u, (r29 + 26), static_cast<uint8_t>(r6));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(6) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 6);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r6 = (r6_rot_2 & 1);
    r0 = (r0 + r6);
    r0 = (r0 * 1000);
    r0 = (r8 - r0);
    MemoryInline::WriteResolved16(guest_range_1, 28u, (r29 + 28), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r31 + 312));
    r3 = (r29 + 124);
    MemoryInline::FlatWrite32((r29 + 108), r0);
    r4 = (r31 + 316);
    r5 = 100;
    r0 = MemoryInline::FlatRead8((r31 + 313));
    MemoryInline::FlatWrite32((r29 + 112), r0);
    r0 = MemoryInline::FlatRead8((r31 + 314));
    MemoryInline::FlatWrite32((r29 + 116), r0);
    r0 = MemoryInline::FlatRead8((r31 + 315));
    MemoryInline::FlatWrite8((r29 + 120), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8066BAC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066BC58;
    }
}

loc_8066BAC4:
{
    r3 = MemoryInline::FlatRead8((r31 + 420));
    r0 = (r3 + -255);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    goto loc_8066BC58;
}

loc_8066BADC:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = 1127219200;
    guest_range_2 = MemoryInline::ResolveRangeHost(r29, 0, 31u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, r29, r3);
    r8 = 0x808A0000u;
    r7 = 0x808A0000u;
    r5 = 1172832256;
    r10 = MemoryInline::FlatRead32((r31 + 8));
    r6 = (r5 + -19853);
    r9 = MemoryInline::FlatRead32((r31 + 4));
    r4 = 65536;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r11 = (r4 + -5536);
    r0 = (r9 - r10);
    f0.d = MemoryInline::FlatReadFloat32((r7 + -21984));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f2.d = MemoryInline::FlatReadFloat64((r8 + -21976));
    r3 = 274857984;
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r0 = (r3 + 19923);
    r7 = 1;
    r3 = (r29 + 32);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    r4 = (r31 + 12);
    r5 = 100;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r29 + 4), f0.d);
    r8 = MemoryInline::FlatRead32((r31 + 4));
    r9 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r6)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    MemoryInline::WriteResolved8(guest_range_2, 18u, (r29 + 18), static_cast<uint8_t>(r7));
    r12 = (static_cast<int32_t>(r9) >> 14);
    r9 = (static_cast<int32_t>(r9) >> 14);
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r10 = (r10_rot_1 & 1);
    r26_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(1));
    r26 = (r26_rot_1 & 1);
    r9 = (r9 + r10);
    r9 = (r9 * r11);
    r10 = (r12 + r26);
    MemoryInline::WriteResolved16(guest_range_2, 12u, (r29 + 12), static_cast<uint16_t>(r10));
    r9 = (r8 - r9);
    r9 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r9))) >> 32));
    r10 = (static_cast<int32_t>(r9) >> 6);
    r9 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r12_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r12 = (r12_rot_1 & 1);
    r10 = (r10 + r12);
    MemoryInline::WriteResolved8(guest_range_2, 14u, (r29 + 14), static_cast<uint8_t>(r10));
    r9 = (static_cast<int32_t>(r9) >> 6);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r10 = (r10_rot_2 & 1);
    r9 = (r9 + r10);
    r9 = (r9 * 1000);
    r8 = (r8 - r9);
    MemoryInline::WriteResolved16(guest_range_2, 16u, (r29 + 16), static_cast<uint16_t>(r8));
    r8 = MemoryInline::FlatRead32((r31 + 8));
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r6)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    MemoryInline::WriteResolved8(guest_range_2, 30u, (r29 + 30), static_cast<uint8_t>(r7));
    r9 = (static_cast<int32_t>(r6) >> 14);
    r6 = (static_cast<int32_t>(r6) >> 14);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r7 = (r7_rot_1 & 1);
    r10_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r10 = (r10_rot_3 & 1);
    r6 = (r6 + r7);
    r6 = (r6 * r11);
    r7 = (r9 + r10);
    MemoryInline::WriteResolved16(guest_range_2, 24u, (r29 + 24), static_cast<uint16_t>(r7));
    r6 = (r8 - r6);
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    r6 = (static_cast<int32_t>(r6) >> 6);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r8))) >> 32));
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r7 = (r7_rot_2 & 1);
    r6 = (r6 + r7);
    MemoryInline::WriteResolved8(guest_range_2, 26u, (r29 + 26), static_cast<uint8_t>(r6));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(6) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 6);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r6 = (r6_rot_1 & 1);
    r0 = (r0 + r6);
    r0 = (r0 * 1000);
    r0 = (r8 - r0);
    MemoryInline::WriteResolved16(guest_range_2, 28u, (r29 + 28), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r31 + 88));
    r3 = (r29 + 124);
    MemoryInline::FlatWrite32((r29 + 108), r0);
    r4 = (r31 + 92);
    r5 = 100;
    r0 = MemoryInline::FlatRead8((r31 + 89));
    MemoryInline::FlatWrite32((r29 + 112), r0);
    r0 = MemoryInline::FlatRead8((r31 + 90));
    MemoryInline::FlatWrite32((r29 + 116), r0);
    r0 = MemoryInline::FlatRead8((r31 + 91));
    MemoryInline::FlatWrite8((r29 + 120), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8066BC40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066BC58;
    }
}

loc_8066BC44:
{
    r3 = MemoryInline::FlatRead8((r31 + 196));
    r0 = (r3 + -255);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
}

loc_8066BC58:
{
    r3 = r27;
    r4 = r28;
    ctx->lr = 0x8066BC64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8066BCC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066BC68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066BC94;
    }
}

loc_8066BC6C:
{
    r0 = MemoryInline::FlatRead32(r29);
    r0 = (r0 * 100);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r3));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    MemoryInline::FlatWrite32(r29, r0);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8066BC88;
    }
}

loc_8066BC80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(100));
}

loc_8066BC84:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8066BC9C;
    }
}

loc_8066BC88:
{
    r0 = 100;
    MemoryInline::FlatWrite32(r29, r0);
    goto loc_8066BC9C;
}

loc_8066BC94:
{
    r0 = 100;
    MemoryInline::FlatWrite32(r29, r0);
}

loc_8066BC9C:
{
    r3 = 1;
    goto loc_8066BCA8;
}

loc_8066BCA4:
{
    r3 = 0;
}

loc_8066BCA8:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC001FFB gpr_write=0xFC001FFB gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8066B8B8 func_8066B8B8 preserves=true fpr_mask=0x00000000
