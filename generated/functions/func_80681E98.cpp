#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80681E98(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80681E98;

loc_80681E98:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -192), 0, 200u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 196u, (r1 + 196), r0);
    r11 = (r1 + 192);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 172u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 172u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_1, 176u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 180u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 180u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_1, 184u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 188u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r0 = MemoryInline::FlatRead8((r3 + 84));
    r8 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_1, 128u, (r1 + 128), r8);
    r28 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80681EC0:
{
    r27 = r4;
    MemoryInline::FlatWriteRam32((r1 + 136), r8);
    r29 = r5;
    r30 = r6;
    r31 = r7;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80681EE0;
    }
}

loc_80681ED8:
{
    r5 = (r3 + 72);
    goto loc_80681F10;
}

loc_80681EE0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 8);
    r4 = (r28 + 88);
    ctx->lr = 0x80681EF4u;
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8067EAECu>(ctx);
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
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r5 = (r28 + 72);
    MemoryInline::FlatWriteFloat32((r28 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r28 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r28 + 80), f0.d);
}

loc_80681F10:
{
    r3 = (r1 + 80);
    r4 = (r28 + 60);
    r6 = (r28 + 48);
    ctx->lr = 0x80681F20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8022FC34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
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
    cr = ctx->cr;
    r3 = (r1 + 80);
    r4 = (r1 + 32);
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8022FABCu>(ctx);
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    r5 = r27;
    r3 = (r1 + 20);
    r4 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->xer = xer;
    InvokeDirectCpu<0x802303F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    guest_range_0 = MemoryInline::ResolveRangeHost((r28 + 192), 0, 40u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r28 + 192));
    r3 = 0x808A0000u;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    f1.d = MemoryInline::FlatReadFloat64((r3 + -11528));
    r0 = (r0 + r4);
    f3.d = std::fabs(f2.d);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 128));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_80681F70:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80681FA4;
    }
}

loc_80681F74:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r28 + 196));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 28));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r0 = (r0 + r3);
    f4.d = std::fabs(f3.d);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 140), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 136));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_80681FA0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80681FAC;
    }
}

loc_80681FA4:
{
    r3 = 0;
    goto loc_80682148;
}

loc_80681FAC:
{
    f1.d = PPC_Fctiwz(f2.d);
    r10 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r28 + 216));
    f0.d = PPC_Fctiwz(f3.d);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r28 + 220));
    fctiwzword0 = PPC_FprLowWordInline(f1.d);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = (r0 + r10);
    r8 = (static_cast<int32_t>(r0) >> 1);
    r9 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r28 + 224));
    r7 = fctiwzword0;
    r3 = 0x808A0000u;
    r4 = fctiwzword1;
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r5 = (r5_rot_0 & 1);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r28 + 228));
    r7 = PPC_Divw(static_cast<int32_t>(r7), static_cast<int32_t>(r9));
    f0.d = MemoryInline::FlatReadFloat32((r3 + -11536));
    r3 = (r5 + r6);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80681FF8:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r3) >> 1);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r0));
    r6 = (r8 + r7);
    r3 = (r3 + r0);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80682010;
    }
}

loc_8068200C:
{
    r6 = (r6 + -1);
}

loc_80682010:
{
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r4 + -11536));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80682020:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80682028;
    }
}

loc_80682024:
{
    r3 = (r3 + -1);
}

loc_80682028:
{
    r0 = (r9 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 140), r0);
    r4 = 0x808A0000u;
    r5 = 0x808A0000u;
    f6.d = MemoryInline::FlatReadFloat64((r4 + -11528));
    r0 = (r10 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 136));
    r4 = (r6 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r0 = (r3 ^ -2147483648);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 128));
    f5.d = MemoryInline::FlatReadFloat32((r5 + -11520));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f6.d));
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32(r30, f0.d);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r28 + 228));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    r5 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 140), r5);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r28 + 220));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 136));
    r5 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 132), r5);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 128));
    MemoryInline::FlatWriteRam32((r1 + 140), r0);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    MemoryInline::FlatWriteRam32((r1 + 132), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 136));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 128));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f6.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    f1.d = PpcFmulsInline(f4.d, f5.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f3.d));
    MemoryInline::FlatWriteFloat32(r31, f1.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r28 + 224));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r28 + 228));
        }
    }
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 132), r4);
    r0 = (r0 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 128));
    MemoryInline::FlatWriteRam32((r1 + 140), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 136));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80682108:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8068212C;
    }
}

loc_8068210C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r28 + 216));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & -2);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r0 = (r3 * r0);
    r3 = (r4 + r0);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r29, r0);
    goto loc_80682144;
}

loc_8068212C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r28 + 216));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & -2);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r0 = (r3 * r0);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32(r29, r0);
}

loc_80682144:
{
    r3 = 1;
}

loc_80682148:
{
    r11 = (r1 + 192);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 196));
    ctx->lr = r0;
    r1 = (r1 + 192);
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
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF8003FFF gpr_write=0xF8001FFB gpr_return=0x00000018 fpr_read=0xFF000FFF fpr_write=0xFF003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80681E98 func_80681E98 preserves=true fpr_mask=0x00000000
