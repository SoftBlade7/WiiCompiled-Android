#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802333B8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r26_addze_src_0 = 0;
    uint32_t r26_addze_src_1 = 0;
    uint32_t r26_addze_src_2 = 0;
    uint32_t r26_ca_0 = 0;
    uint32_t r26_ca_1 = 0;
    uint32_t r26_ca_2 = 0;
    uint32_t r5_addze_src_0 = 0;
    uint32_t r5_addze_src_1 = 0;
    uint32_t r5_addze_src_2 = 0;
    uint32_t r5_ca_0 = 0;
    uint32_t r5_ca_1 = 0;
    uint32_t r5_ca_2 = 0;
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_802333B8;

loc_802333B8:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 36u, (r1 + 36), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 8), r26);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r1 + 12), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r1 + 16), r28);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r1 + 20), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r1 + 24), r30);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r1 + 28), r31);
    }
    r30 = r4;
    r31 = r9;
    r0 = MemoryInline::FlatRead16(r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_802333D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802333F8;
    }
}

loc_802333DC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2047));
}

loc_802333E0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_802333F8;
    }
}

loc_802333E4:
{
    r0 = MemoryInline::FlatRead16((r5 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_802333EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802333F8;
    }
}

loc_802333F0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2047));
}

loc_802333F4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80233404;
    }
}

loc_802333F8:
{
    r3 = 0x80000000u;
    r3 = (r3 + 1);
    goto loc_80233538;
}

loc_80233404:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(100));
}

loc_80233408:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80233418;
    }
}

loc_8023340C:
{
    r3 = 0x80000000u;
    r3 = (r3 + 2);
    goto loc_80233538;
}

loc_80233418:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 1148u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r4 + 44), r7);
    r28 = 0x80250000u;
    r7 = 0x80250000u;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80233428:
{
    MemoryInline::WriteResolved32(guest_range_0, 560u, (r4 + 560), r8);
    r27 = (r4 + 32);
    r28 = (r28 + 31304);
    r29 = (r4 + 28);
    r0 = MemoryInline::FlatRead16(r5);
    r12 = (r4 + 16);
    MemoryInline::WriteResolved16(guest_range_0, 0u, r4, static_cast<uint16_t>(r0));
    r11 = (r4 + 20);
    r10 = (r4 + 36);
    r0 = (r4 + 40);
    r26 = MemoryInline::FlatRead16((r5 + 2));
    r7 = (r7 + 31368);
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r4 + 2), static_cast<uint16_t>(r26));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r4 + 4), static_cast<uint8_t>(r6));
    r26 = MemoryInline::FlatRead16(r5);
    r26 = (r26 + -1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r26);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r26 = (static_cast<int32_t>(r26) >> 3);
    r26_addze_src_1 = r26;
    r26_ca_1 = (xer >> 29) & 1u;
    r26 = (r26_addze_src_1 + r26_ca_1);
    r26 = (r26 + 1);
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r4 + 6), static_cast<uint16_t>(r26));
    r5 = MemoryInline::FlatRead16((r5 + 2));
    r5 = (r5 + -1);
    MemoryInline::WriteResolved32(guest_range_0, 1076u, (r4 + 1076), r27);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r5);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r5 = (static_cast<int32_t>(r5) >> 3);
    r5_addze_src_1 = r5;
    r5_ca_1 = (xer >> 29) & 1u;
    r5 = (r5_addze_src_1 + r5_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_addze_src_1)) + static_cast<uint64_t>(static_cast<uint32_t>(0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::WriteResolved32(guest_range_0, 1080u, (r4 + 1080), r27);
    r5 = (r5 + 1);
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r4 + 8), static_cast<uint16_t>(r5));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1084u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1084u, (r4 + 1084), r28);
        MemoryInline::WriteResolved32(guest_range_0, 1088u, (r4 + 1088), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1092u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1092u, (r4 + 1092), r8);
        MemoryInline::WriteResolved32(guest_range_0, 1096u, (r4 + 1096), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1100u, (r4 + 1100), r12);
        MemoryInline::WriteResolved32(guest_range_0, 1104u, (r4 + 1104), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1108u, (r4 + 1108), r9);
        MemoryInline::WriteResolved32(guest_range_0, 1112u, (r4 + 1112), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1116u, (r4 + 1116), r0);
        MemoryInline::WriteResolved32(guest_range_0, 1120u, (r4 + 1120), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1124u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1124u, (r4 + 1124), r28);
        MemoryInline::WriteResolved32(guest_range_0, 1128u, (r4 + 1128), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1132u, (r4 + 1132), r29);
        MemoryInline::WriteResolved32(guest_range_0, 1136u, (r4 + 1136), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1140u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1140u, (r4 + 1140), r11);
        MemoryInline::WriteResolved32(guest_range_0, 1144u, (r4 + 1144), r9);
    }
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802334E0;
    }
}

loc_802334DC:
{
    r6 = 1;
}

loc_802334E0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(50));
}

loc_802334E4:
{
    r4 = r30;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802334F8;
    }
}

loc_802334EC:
{
    r0 = 5000;
    r5 = PPC_Divwu(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    goto loc_80233500;
}

loc_802334F8:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r5 = (200 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(200) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
}

loc_80233500:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80233A90u>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r5 = 0;
    r0 = (r31 + -16);
    r4 = 32;
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 10), 0, 34u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r30 + 10), static_cast<uint16_t>(r5));
    r3 = 0;
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r30 + 12), static_cast<uint16_t>(r5));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 6u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 6u, (r30 + 16), r5);
        MemoryInline::WriteResolved32(guest_range_1, 10u, (r30 + 20), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 14u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 14u, (r30 + 24), r31);
        MemoryInline::WriteResolved32(guest_range_1, 18u, (r30 + 28), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 22u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 22u, (r30 + 32), r5);
        MemoryInline::WriteResolved32(guest_range_1, 26u, (r30 + 36), r5);
    }
    MemoryInline::WriteResolved32(guest_range_1, 30u, (r30 + 40), r5);
}

loc_80233538:
{
    r26 = MemoryInline::FlatRead32((r1 + 8));
    r27 = MemoryInline::FlatRead32((r1 + 12));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFE01FFB gpr_write=0xFFE01FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802333B8 func_802333B8 preserves=true fpr_mask=0x00000000
