#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80233E34(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lbzux_80233EA4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r25_mdest_0 = 0;
    uint32_t r25_mdest_1 = 0;
    uint32_t r25_mdest_2 = 0;
    uint32_t r25_mdest_3 = 0;
    uint32_t r25_mdest_4 = 0;
    uint32_t r25_mrot_0 = 0;
    uint32_t r25_mrot_1 = 0;
    uint32_t r25_mrot_2 = 0;
    uint32_t r25_mrot_3 = 0;
    uint32_t r25_mrot_4 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r25_rot_1 = 0;
    uint32_t r25_rot_2 = 0;
    uint32_t r25_rot_3 = 0;
    uint32_t r25_rot_4 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r26_rot_3 = 0;
    uint32_t r26_rot_4 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r28_rot_3 = 0;
    uint32_t r28_rot_4 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r29_rot_3 = 0;
    uint32_t r29_rot_4 = 0;
    uint32_t r29_rot_5 = 0;
    uint32_t r29_rot_6 = 0;
    uint32_t r29_rot_7 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_addr_1 = 0;
    uint32_t r9_addr_2 = 0;
    uint32_t r9_addr_3 = 0;
    uint32_t r9_addr_4 = 0;
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80233E34;

loc_80233E34:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 100u, (r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_1, 80u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 84u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 92u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r3 = (r8 * r9);
    r12 = MemoryInline::FlatRead32((r1 + 104));
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -24928), 0, 40u, true, false);
    f12.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 32u, (r2 + -24896));
    r11 = 0;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            f11.d = PpcBitCastToFloatInline(resolved_pair.first);
            f10.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f11.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -24928));
            f10.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -24924));
        }
    }
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r3 = (r4 + r3);
    r9 = (r4 + r0);
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -24920));
    r0 = 1127219200;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 12u);
        if (resolved_pair.valid) {
            f7.d = PpcBitCastToFloatInline(resolved_pair.first);
            f5.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -24916));
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -24912));
        }
    }
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r2 + -24908));
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 24u, (r2 + -24904));
    ctr = r8;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_80233E8C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80234064;
    }
}

loc_80233E90:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_80233E94:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80233EC0;
    }
}

loc_80233E98:
{
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(3));
    r8 = (r8_rot_2 & -32);
    r29_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r29 = (r29_rot_2 & 6);
    r8 = (r4 + r8);
    addr_lbzux_80233EA4_loc_0 = (r29 + r8);
    r8 = MemoryInline::FlatRead8(addr_lbzux_80233EA4_loc_0);
    r29 = addr_lbzux_80233EA4_loc_0;
    r25 = MemoryInline::FlatRead8((r29 + 1));
    r25_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(8));
    r25_mrot_2 = (r25_rot_2 & 65280);
    r25_mdest_2 = (r25 & -65281);
    r25 = (r25_mdest_2 | r25_mrot_2);
    r26_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(21));
    r26 = (r26_rot_2 & 31);
    r28_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(26));
    r28 = (r28_rot_2 & 31);
    r8 = (r25 & 31);
    goto loc_80233FE4;
}

loc_80233EC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(1));
}

loc_80233EC4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80233EF4;
    }
}

loc_80233EC8:
{
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(4));
    r8 = (r8_rot_3 & -64);
    r29_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r29 = (r29_rot_3 & 6);
    r8 = (r4 + r8);
    r30 = (r29 + r8);
    r8 = MemoryInline::FlatRead8((r30 + 1));
    r29 = MemoryInline::FlatRead8((r30 + 32));
    r26 = (static_cast<int32_t>(r8) >> 3);
    r8 = MemoryInline::FlatRead8((r30 + 33));
    r28 = (static_cast<int32_t>(r29) >> 3);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r8);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r8 = (static_cast<int32_t>(r8) >> 3);
    goto loc_80233FE4;
}

loc_80233EF4:
{
    r29 = (r11 & 7);
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(2));
    r8 = (r8_rot_4 & -32);
    r8 = (r29 + r8);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4_addr_2 = (r4 + r8);
    r30 = MemoryInline::FlatRead8(r4_addr_2);
    MemoryInline::FlatWriteRam32((r1 + 12), r30);
    r3_addr_2 = (r3 + r8);
    r29 = MemoryInline::FlatRead8(r3_addr_2);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f12.d));
    r9_addr_2 = (r9 + r8);
    r8 = MemoryInline::FlatRead8(r9_addr_2);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f11.d));
    MemoryInline::FlatWriteRam32((r1 + 28), r8);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f12.d));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    f8.d = PpcFmulsInline(f9.d, f2.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f10.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f12.d));
    f0.d = (f1.d * f6.d);
    f13.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f10.d));
    f2.d = PpcFmulsInline(f5.d, f6.d);
    f0.d = (f8.d + f0.d);
    f6.d = PpcFmulsInline(f7.d, f13.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f2.d));
    f2.d = PpcFmulsInline(f3.d, f13.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f6.d));
    f0.d = PPC_Fctiwz(f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    f4.d = PPC_Fctiwz(f6.d);
    fctiwzword1 = PPC_FprLowWordInline(f4.d);
    f0.d = PPC_Fctiwz(f2.d);
    r8 = fctiwzword0;
    r26 = fctiwzword1;
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f0.d);
}

loc_80233F90:
{
    r28 = MemoryInline::FlatRead32((r1 + 44));
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(0))) {
        goto loc_80233F9C;
    }
}

loc_80233F98:
{
    r26 = 0;
}

loc_80233F9C:
{
}

loc_80233FA0:
{
    if ((static_cast<int32_t>(r26) <= static_cast<int32_t>(255))) {
        goto loc_80233FA8;
    }
}

loc_80233FA4:
{
    r26 = 255;
}

loc_80233FA8:
{
}

loc_80233FAC:
{
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(0))) {
        goto loc_80233FB4;
    }
}

loc_80233FB0:
{
    r28 = 0;
}

loc_80233FB4:
{
}

loc_80233FB8:
{
    if ((static_cast<int32_t>(r28) <= static_cast<int32_t>(255))) {
        goto loc_80233FC0;
    }
}

loc_80233FBC:
{
    r28 = 255;
}

loc_80233FC0:
{
}

loc_80233FC4:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(0))) {
        goto loc_80233FCC;
    }
}

loc_80233FC8:
{
    r8 = 0;
}

loc_80233FCC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(255));
}

loc_80233FD0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80233FD8;
    }
}

loc_80233FD4:
{
    r8 = 255;
}

loc_80233FD8:
{
    r26 = (static_cast<int32_t>(r26) >> 3);
    r28 = (static_cast<int32_t>(r28) >> 3);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r8);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r8 = (static_cast<int32_t>(r8) >> 3);
}

loc_80233FE4:
{
    r29_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r29 = (r29_rot_5 & -4);
    r8_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r8 = (r8_rot_6 & -4);
    r27 = (r10 + r29);
    r11 = (r11 + 1);
    r29_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r29 = (r29_rot_6 & -4);
    r26 = (r10 + r8);
    r28 = (r10 + r29);
    r8 = MemoryInline::FlatRead32((r27 + 384));
    r29 = MemoryInline::FlatRead32((r26 + 640));
    r31 = MemoryInline::FlatRead32((r28 + 512));
    r30 = (r29 + r8);
    r29 = MemoryInline::FlatRead32((r26 + 1024));
    r30 = (r31 + r30);
    r8 = MemoryInline::FlatRead32((r27 + 768));
    r25 = (static_cast<int32_t>(r30) >> 16);
    r31 = MemoryInline::FlatRead32((r28 + 896));
    r29 = (r29 + r8);
    r30 = MemoryInline::FlatRead32((r26 + 256));
    r29 = (r31 + r29);
    r8 = MemoryInline::FlatRead32(r27);
    r31 = MemoryInline::FlatRead32((r28 + 128));
    r26 = (static_cast<int32_t>(r29) >> 16);
    r8 = (r30 + r8);
    r8 = (r31 + r8);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r8);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(16) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r8 = (static_cast<int32_t>(r8) >> 16);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r8));
    r5 = (r5 + 1);
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r25));
    r6 = (r6 + 1);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r26));
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80233E90;
    }
}

loc_80234064:
{
    r11 = (r1 + 96);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE001FFF gpr_write=0xFE001BEB gpr_return=0x00000008 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80233E34 func_80233E34 preserves=true fpr_mask=0x00000000
