#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80146790(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r10_rot_6 = 0;
    uint32_t r11_ca_0 = 0;
    uint32_t r11_ca_1 = 0;
    uint32_t r11_ca_2 = 0;
    uint32_t r11_ca_3 = 0;
    uint32_t r11_ca_4 = 0;
    uint32_t r11_ca_5 = 0;
    uint32_t r11_ca_6 = 0;
    uint32_t r12_ca_0 = 0;
    uint32_t r12_ca_1 = 0;
    uint32_t r12_ca_2 = 0;
    uint32_t r12_ca_3 = 0;
    uint32_t r12_ca_4 = 0;
    uint32_t r12_ca_5 = 0;
    uint32_t r29_ca_0 = 0;
    uint32_t r29_ca_1 = 0;
    uint32_t r29_ca_2 = 0;
    uint32_t r29_ca_3 = 0;
    uint32_t r29_ca_4 = 0;
    uint32_t r29_ca_5 = 0;
    uint32_t r29_ca_6 = 0;
    uint32_t r29_ca_7 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_10 = 0;
    uint32_t r4_addr_11 = 0;
    uint32_t r4_addr_12 = 0;
    uint32_t r4_addr_13 = 0;
    uint32_t r4_addr_14 = 0;
    uint32_t r4_addr_15 = 0;
    uint32_t r4_addr_16 = 0;
    uint32_t r4_addr_17 = 0;
    uint32_t r4_addr_18 = 0;
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
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_10 = 0;
    uint32_t r5_rot_11 = 0;
    uint32_t r5_rot_12 = 0;
    uint32_t r5_rot_13 = 0;
    uint32_t r5_rot_14 = 0;
    uint32_t r5_rot_15 = 0;
    uint32_t r5_rot_16 = 0;
    uint32_t r5_rot_17 = 0;
    uint32_t r5_rot_18 = 0;
    uint32_t r5_rot_19 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_20 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_rot_9 = 0;
    uint32_t r6_ca_0 = 0;
    uint32_t r6_ca_1 = 0;
    uint32_t r6_ca_2 = 0;
    uint32_t r6_ca_3 = 0;
    uint32_t r6_ca_4 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint32_t r7_addr_5 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r8_ca_0 = 0;
    uint32_t r8_ca_1 = 0;
    uint32_t r8_ca_2 = 0;
    uint32_t r8_ca_3 = 0;
    uint32_t r8_ca_4 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint32_t r9_ca_0 = 0;
    uint32_t r9_ca_1 = 0;
    uint32_t r9_ca_2 = 0;
    uint32_t r9_ca_3 = 0;
    uint32_t r9_ca_4 = 0;
    uint32_t r9_ca_5 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint32_t r9_rot_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80146790;

loc_80146790:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 52u, (r1 + 52), r0);
    MemoryInline::WriteResolved32(guest_range_2, 44u, (r1 + 44), r31);
    r31 = r4;
    MemoryInline::WriteResolved32(guest_range_2, 40u, (r1 + 40), r30);
    r30 = r3;
    r3 = 2;
    MemoryInline::WriteResolved32(guest_range_2, 36u, (r1 + 36), r29);
    r29 = 0x80250000u;
    r29 = (r29 + -13808);
    guest_range_0 = MemoryInline::ResolveRangeHost(r29, 0, 10u, true, false);
    r12 = MemoryInline::ReadResolved8(guest_range_0, 0u, r29);
    r11 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r29 + 1));
    r10 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r29 + 2));
    r9 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r29 + 3));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r29 + 4));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r29 + 5));
    r6 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r29 + 6));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r29 + 7));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r29 + 8));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r29 + 9));
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r1 + 8), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_2, 9u, (r1 + 9), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_2, 10u, (r1 + 10), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_2, 11u, (r1 + 11), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_2, 12u, (r1 + 12), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_2, 13u, (r1 + 13), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 14u, (r1 + 14), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_2, 15u, (r1 + 15), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 16u, (r1 + 16), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 17u, (r1 + 17), static_cast<uint8_t>(r0));
    ctx->lr = 0x8014680Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8012ED54u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80146810:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8014681C;
    }
}

loc_80146814:
{
    r3 = 0;
    goto loc_80146B94;
}

loc_8014681C:
{
    r4 = 13;
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 2), 0, 19u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r3 + 2), static_cast<uint16_t>(r4));
    r5 = 63;
    r4 = 12;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r31));
}

loc_80146834:
{
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = 10;
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r3 + 8), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r3 + 9), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r3 + 10), static_cast<uint8_t>(r0));
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80146B3C;
    }
}

loc_8014684C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(78));
}

loc_80146850:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80146B3C;
    }
}

loc_80146854:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r30), static_cast<int32_t>(r31));
}

loc_80146858:
{
    if (((cr & 0x04000000u) != 0)) {
        goto loc_80146B3C;
    }
}

loc_8014685C:
{
    r11 = (r31 - r30);
    r7 = (r31 + -8);
    r12 = (r11 + 1);
}

loc_8014686C:
{
    if ((static_cast<int32_t>(r12) <= static_cast<int32_t>(8))) {
        goto loc_80146AEC;
    }
}

loc_80146870:
{
    r5 = 0;
    r6 = 0;
    r8 = 0;
    r9 = 0;
    r10 = 0;
    if (((cr & 0x04000000u) != 0)) {
        goto loc_8014689C;
    }
}

loc_80146888:
{
    r4 = 0x80000000u;
    r0 = (r4 + -2);
}

loc_80146894:
{
    if ((static_cast<int32_t>(r31) > static_cast<int32_t>(r0))) {
        goto loc_8014689C;
    }
}

loc_80146898:
{
    r10 = 1;
}

loc_8014689C:
{
}

loc_801468A0:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_801468B8;
    }
}

loc_801468A4:
{
    r4 = 0x80000000u;
    r0 = (r4 + -2);
}

loc_801468B0:
{
    if ((static_cast<int32_t>(r30) > static_cast<int32_t>(r0))) {
        goto loc_801468B8;
    }
}

loc_801468B4:
{
    r9 = 1;
}

loc_801468B8:
{
}

loc_801468BC:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_801468D0;
    }
}

loc_801468C0:
{
    r0 = (r30 + -2147483648);
}

loc_801468C8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_801468D0;
    }
}

loc_801468CC:
{
    r8 = 1;
}

loc_801468D0:
{
}

loc_801468D4:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8014690C;
    }
}

loc_801468D8:
{
    r0 = (0 - r30);
    r8 = (r31 & -2147483648);
    r0 = (r0 & -2147483648);
    r4 = 1;
}

loc_801468EC:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(r0))) {
        goto loc_80146900;
    }
}

loc_801468F0:
{
    r0 = (r11 & -2147483648);
}

loc_801468F8:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(r0))) {
        goto loc_80146900;
    }
}

loc_801468FC:
{
    r4 = 0;
}

loc_80146900:
{
}

loc_80146904:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8014690C;
    }
}

loc_80146908:
{
    r6 = 1;
}

loc_8014690C:
{
}

loc_80146910:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80146938;
    }
}

loc_80146914:
{
    r0 = (r11 & -2147483648);
}

loc_80146918:
{
    r4 = 1;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8014692C;
    }
}

loc_80146920:
{
    r0 = (r12 & -2147483648);
}

loc_80146924:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8014692C;
    }
}

loc_80146928:
{
    r4 = 0;
}

loc_8014692C:
{
}

loc_80146930:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80146938;
    }
}

loc_80146934:
{
    r5 = 1;
}

loc_80146938:
{
}

loc_8014693C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80146AEC;
    }
}

loc_80146940:
{
    r5 = (r7 + 8);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r30);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r30) >> 3);
    r5 = (r5 - r30);
    r4 = (r1 + 8);
    r6_ca_1 = (xer >> 29) & 1u;
    r6 = (r0 + r6_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0)) + static_cast<uint64_t>(static_cast<uint32_t>(0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r6_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0 = 1;
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r5 = (r5_rot_1 & 536870911);
    r6 = (r4 + r6);
    ctr = r5;
}

loc_80146968:
{
    if ((static_cast<int32_t>(r30) > static_cast<int32_t>(r7))) {
        goto loc_80146AEC;
    }
}

loc_8014696C:
{
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(29));
    r5 = (r5_rot_3 & -536870912);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r8 = (r8_rot_2 & 1);
    r5 = (r5 - r8);
    r10 = MemoryInline::FlatRead8(r6);
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r5 = (r5_rot_4 & -1);
    r7 = (r30 + 1);
    r5 = (r5 + r8);
    r9 = (r30 + 2);
    r5 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r8 = (r30 + 3);
    r11 = (r10 & ~r5);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r10 = (r10_rot_2 & 1);
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r11));
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(29));
    r5 = (r5_rot_5 & -536870912);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r11 = (static_cast<int32_t>(r7) >> 3);
    r7 = (r30 + 4);
    r5 = (r5 - r10);
    r6 = (r6 + 1);
    r29_ca_2 = (xer >> 29) & 1u;
    r29 = (r11 + r29_ca_2);
    r5_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r5 = (r5_rot_6 & -1);
    r4_addr_2 = (r4 + r29);
    r12 = MemoryInline::FlatRead8(r4_addr_2);
    r10 = (r5 + r10);
    r11 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r10));
    r5_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(29));
    r5 = (r5_rot_7 & -536870912);
    r10_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r10 = (r10_rot_3 & 1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r9);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r9 = (static_cast<int32_t>(r9) >> 3);
    r11 = (r12 & ~r11);
    r5 = (r5 - r10);
    r4_addr_3 = (r4 + r29);
    MemoryInline::FlatWrite8(r4_addr_3, static_cast<uint8_t>(r11));
    r29_ca_3 = (xer >> 29) & 1u;
    r29 = (r9 + r29_ca_3);
    r9 = (r30 + 5);
    r5_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r5 = (r5_rot_8 & -1);
    r4_addr_4 = (r4 + r29);
    r12 = MemoryInline::FlatRead8(r4_addr_4);
    r5 = (r5 + r10);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r8);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r10 = (static_cast<int32_t>(r8) >> 3);
    r11 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r12 = (r12 & ~r11);
    r5_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r5 = (r5_rot_9 & -536870912);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_3 & 1);
    r4_addr_5 = (r4 + r29);
    MemoryInline::FlatWrite8(r4_addr_5, static_cast<uint8_t>(r12));
    r5 = (r5 - r8);
    r11_ca_2 = (xer >> 29) & 1u;
    r11 = (r10 + r11_ca_2);
    r5_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r5 = (r5_rot_10 & -1);
    r4_addr_6 = (r4 + r11);
    r10 = MemoryInline::FlatRead8(r4_addr_6);
    r8 = (r5 + r8);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r5 = (static_cast<int32_t>(r7) >> 3);
    r8 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r8));
    r10 = (r10 & ~r8);
    r29_ca_4 = (xer >> 29) & 1u;
    r29 = (r5 + r29_ca_4);
    r4_addr_7 = (r4 + r11);
    MemoryInline::FlatWrite8(r4_addr_7, static_cast<uint8_t>(r10));
    r5_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(29));
    r5 = (r5_rot_11 & -536870912);
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r8 = (r8_rot_4 & 1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r9);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r7 = (static_cast<int32_t>(r9) >> 3);
    r5 = (r5 - r8);
    r4_addr_8 = (r4 + r29);
    r11 = MemoryInline::FlatRead8(r4_addr_8);
    r5_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r5 = (r5_rot_12 & -1);
    r12_ca_2 = (xer >> 29) & 1u;
    r12 = (r7 + r12_ca_2);
    r5 = (r5 + r8);
    r8 = (r30 + 6);
    r10 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r5_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(29));
    r5 = (r5_rot_13 & -536870912);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_2 & 1);
    r10 = (r11 & ~r10);
    r4_addr_9 = (r4 + r29);
    MemoryInline::FlatWrite8(r4_addr_9, static_cast<uint8_t>(r10));
    r5 = (r5 - r9);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r7 = (r7_rot_2 & -1);
    r9 = (r7 + r9);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r8);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r5 = (static_cast<int32_t>(r8) >> 3);
    r11_ca_3 = (xer >> 29) & 1u;
    r11 = (r5 + r11_ca_3);
    r7 = (r30 + 7);
    r4_addr_10 = (r4 + r12);
    r10 = MemoryInline::FlatRead8(r4_addr_10);
    r9 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r9));
    r5_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r5 = (r5_rot_14 & -536870912);
    r30 = (r30 + 8);
    r10 = (r10 & ~r9);
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_3 & 1);
    r4_addr_11 = (r4 + r12);
    MemoryInline::FlatWrite8(r4_addr_11, static_cast<uint8_t>(r10));
    r5 = (r5 - r9);
    r5_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r5 = (r5_rot_15 & -1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r8 = (static_cast<int32_t>(r7) >> 3);
    r5 = (r5 + r9);
    r4_addr_12 = (r4 + r11);
    r10 = MemoryInline::FlatRead8(r4_addr_12);
    r9 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r5_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(29));
    r5 = (r5_rot_16 & -536870912);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_3 & 1);
    r9 = (r10 & ~r9);
    r5 = (r5 - r7);
    r4_addr_13 = (r4 + r11);
    MemoryInline::FlatWrite8(r4_addr_13, static_cast<uint8_t>(r9));
    r9_ca_2 = (xer >> 29) & 1u;
    r9 = (r8 + r9_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r8)) + static_cast<uint64_t>(static_cast<uint32_t>(0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r9_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r5 = (r5_rot_17 & -1);
    r4_addr_14 = (r4 + r9);
    r8 = MemoryInline::FlatRead8(r4_addr_14);
    r5 = (r5 + r7);
    r5 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r5 = (r8 & ~r5);
    r4_addr_15 = (r4 + r9);
    MemoryInline::FlatWrite8(r4_addr_15, static_cast<uint8_t>(r5));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8014696C;
    }
}

loc_80146AEC:
{
    r0 = (r31 + 1);
    r7 = (r1 + 8);
    r0 = (r0 - r30);
    r5 = 1;
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r31));
}

loc_80146B04:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80146B3C;
    }
}

loc_80146B08:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & -536870912);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r30);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r6 = (static_cast<int32_t>(r30) >> 3);
    r30 = (r30 + 1);
    r0 = (r0 - r4);
    r8_ca_2 = (xer >> 29) & 1u;
    r8 = (r6 + r8_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6)) + static_cast<uint64_t>(static_cast<uint32_t>(0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r8_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & -1);
    r7_addr_2 = (r7 + r8);
    r6 = MemoryInline::FlatRead8(r7_addr_2);
    r0 = (r0 + r4);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 & ~r0);
    r7_addr_3 = (r7 + r8);
    MemoryInline::FlatWrite8(r7_addr_3, static_cast<uint8_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80146B08;
    }
}

loc_80146B3C:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 10u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r1 + 8));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r3 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 1u, (r1 + 9));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r3 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 2u, (r1 + 10));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r3 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 3u, (r1 + 11));
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r3 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 4u, (r1 + 12));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r3 + 15), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 5u, (r1 + 13));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r3 + 16), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 6u, (r1 + 14));
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r3 + 17), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 7u, (r1 + 15));
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r3 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 8u, (r1 + 16));
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r3 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 9u, (r1 + 17));
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r3 + 20), static_cast<uint8_t>(r0));
    ctx->lr = 0x80146B90u;
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80142664u>(ctx);
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 1;
}

loc_80146B94:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xF0001FFB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x03 xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80146790 func_80146790 preserves=true fpr_mask=0x00000000
