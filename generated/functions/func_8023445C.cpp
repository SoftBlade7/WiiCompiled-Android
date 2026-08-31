#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023445C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r10_rot_6 = 0;
    uint32_t r11_addr_0 = 0;
    uint32_t r11_addr_1 = 0;
    uint32_t r11_addr_2 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r11_rot_4 = 0;
    uint32_t r12_addr_0 = 0;
    uint32_t r12_addr_1 = 0;
    uint32_t r12_addr_2 = 0;
    uint32_t r12_addr_3 = 0;
    uint32_t r12_addr_4 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_10 = 0;
    uint32_t r7_rot_11 = 0;
    uint32_t r7_rot_12 = 0;
    uint32_t r7_rot_13 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r7_rot_8 = 0;
    uint32_t r7_rot_9 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_10 = 0;
    uint32_t r8_rot_11 = 0;
    uint32_t r8_rot_12 = 0;
    uint32_t r8_rot_13 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint32_t r8_rot_8 = 0;
    uint32_t r8_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t xer = ctx->xer;

    goto loc_8023445C;

loc_8023445C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r9 = (r4 + 2);
    r8 = 0;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 8), 0, 28u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r5 + 20));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r5 + 32));
    r6 = MemoryInline::FlatRead32(r6);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r5 + 16));
    r6 = (r0 - r6);
    r0 = 1;
    r6 = (r7 + r6);
    MemoryInline::FlatWrite32(r3, r6);
    r6 = 0x80000000u;
}

loc_80234498:
{
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r7 = (r7_rot_2 & -4);
    r8 = MemoryInline::FlatRead16(r9);
    r5_addr_2 = (r5 + r7);
    r10 = MemoryInline::FlatRead32(r5_addr_2);
    r9 = (r9 + 4);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(16));
    r8 = (r8_rot_2 & -65536);
    r7 = MemoryInline::FlatRead32(r10);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r8);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(16) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r8 = (static_cast<int32_t>(r8) >> 16);
    r12 = (r8 - r7);
    MemoryInline::FlatWrite32(r10, r8);
    if ((static_cast<int32_t>(r12) >= static_cast<int32_t>(0))) {
        goto loc_802344CC;
    }
}

loc_802344C0:
{
    r7 = (0 - r12);
    r12 = (r12 + -1);
    goto loc_802344D0;
}

loc_802344CC:
{
    r7 = r12;
}

loc_802344D0:
{
}

loc_802344D4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_802344E0;
    }
}

loc_802344D8:
{
    r30 = 0;
    goto loc_802344F4;
}

loc_802344E0:
{
    r30 = 1;
    goto loc_802344EC;
}

loc_802344E8:
{
    r30 = (r30 + 1);
}

loc_802344EC:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r7 = (static_cast<int32_t>(r7) >> 1);
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_802344E8;
    }
}

loc_802344F4:
{
    r11 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + 8));
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r10 = (r10_rot_2 & -4);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r5 + 28));
    r8 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
    r11_addr_2 = (r11 + r10);
    r11 = MemoryInline::FlatRead32(r11_addr_2);
    r8 = (r8 + -1);
    r12 = (r12 & r8);
    r10 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r5 + 24));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r11);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(24) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r29 = (static_cast<int32_t>(r11) >> 24);
    r8 = (r11 & 16777215);
    r11 = PPC_Slw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r30));
    r7 = MemoryInline::FlatRead32(r7);
    r31 = (r29 + r30);
    r8 = MemoryInline::FlatRead32(r10);
    r11 = (r12 | r11);
    r7 = (r7 - r31);
    r7 = PPC_Slw(static_cast<uint32_t>(r11), static_cast<uint32_t>(r7));
    r7 = (r8 | r7);
    MemoryInline::FlatWrite32(r10, r7);
    r8 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r5 + 28));
    r7 = MemoryInline::FlatRead32(r8);
    r7 = (r7 - r31);
    MemoryInline::FlatWrite32(r8, r7);
    goto loc_802345BC;
}

loc_80234554:
{
    r8 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r5 + 20));
    r8 = MemoryInline::FlatRead32(r8);
}

loc_80234560:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8023456C;
    }
}

loc_80234564:
{
    r8 = (r6 + 4);
    goto loc_802345D0;
}

loc_8023456C:
{
    r8 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r5 + 24));
    r7 = MemoryInline::FlatRead32(r3);
    r8 = MemoryInline::FlatRead32(r8);
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(8));
    r8 = (r8_rot_4 & 255);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r8));
    r7 = MemoryInline::FlatRead32(r3);
    r7 = (r7 + 1);
    MemoryInline::FlatWrite32(r3, r7);
    r8 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r5 + 20));
    r7 = MemoryInline::FlatRead32(r8);
    r7 = (r7 + -1);
    MemoryInline::FlatWrite32(r8, r7);
    r8 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r5 + 24));
    r7 = MemoryInline::FlatRead32(r8);
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r7 = (r7_rot_4 & -256);
    MemoryInline::FlatWrite32(r8, r7);
    r8 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r5 + 28));
    r7 = MemoryInline::FlatRead32(r8);
    r7 = (r7 + 8);
    MemoryInline::FlatWrite32(r8, r7);
}

loc_802345BC:
{
    r7 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r5 + 28));
    r7 = MemoryInline::FlatRead32(r7);
}

loc_802345C8:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(24))) {
        goto loc_80234554;
    }
}

loc_802345CC:
{
    r8 = 0;
}

loc_802345D0:
{
    r8 = (r8 + -2147483648);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(4));
}

loc_802345D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802345E8;
    }
}

loc_802345DC:
{
    r3 = 0x80000000u;
    r3 = (r3 + 4);
    goto loc_8023493C;
}

loc_802345E8:
{
    r29 = 0;
}

loc_802345EC:
{
    r8 = MemoryInline::FlatRead16(r9);
    r9 = (r9 + 4);
    r8_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(16));
    r8 = (r8_rot_7 & -65536);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r8);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(16) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r8 = (static_cast<int32_t>(r8) >> 16);
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80234608;
    }
}

loc_80234600:
{
    r29 = (r29 + 1);
    goto loc_802345EC;
}

loc_80234608:
{
}

loc_8023460C:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(16384))) {
        goto loc_8023484C;
    }
}

loc_80234610:
{
}

loc_80234614:
{
    r10 = r29;
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_80234624;
    }
}

loc_8023461C:
{
    r30 = 0;
    goto loc_80234638;
}

loc_80234624:
{
    r30 = 1;
    goto loc_80234630;
}

loc_8023462C:
{
    r30 = (r30 + 1);
}

loc_80234630:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r10);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r10 = (static_cast<int32_t>(r10) >> 1);
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8023462C;
    }
}

loc_80234638:
{
    r31 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 12));
    r12_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r12 = (r12_rot_3 & -4);
    r10 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
    r11 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r5 + 24));
    r31_addr_3 = (r31 + r12);
    r12 = MemoryInline::FlatRead32(r31_addr_3);
    r10 = (r10 + -1);
    r31 = (r29 & r10);
    r10 = MemoryInline::FlatRead32(r11);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r12);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(24) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r29 = (static_cast<int32_t>(r12) >> 24);
    r12 = (r12 & 16777215);
    r12 = PPC_Slw(static_cast<uint32_t>(r12), static_cast<uint32_t>(r30));
    r30 = (r29 + r30);
    r12 = (r31 | r12);
    r7 = (r7 - r30);
    r7 = PPC_Slw(static_cast<uint32_t>(r12), static_cast<uint32_t>(r7));
    r7 = (r10 | r7);
    MemoryInline::FlatWrite32(r11, r7);
    r10 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r5 + 28));
    r7 = MemoryInline::FlatRead32(r10);
    r7 = (r7 - r30);
    MemoryInline::FlatWrite32(r10, r7);
    goto loc_802346F8;
}

loc_80234690:
{
    r7 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r5 + 20));
    r7 = MemoryInline::FlatRead32(r7);
}

loc_8023469C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_802346A8;
    }
}

loc_802346A0:
{
    r7 = (r6 + 4);
    goto loc_8023470C;
}

loc_802346A8:
{
    r10 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r5 + 24));
    r7 = MemoryInline::FlatRead32(r3);
    r10 = MemoryInline::FlatRead32(r10);
    r10_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(8));
    r10 = (r10_rot_5 & 255);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r10));
    r7 = MemoryInline::FlatRead32(r3);
    r7 = (r7 + 1);
    MemoryInline::FlatWrite32(r3, r7);
    r10 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r5 + 20));
    r7 = MemoryInline::FlatRead32(r10);
    r7 = (r7 + -1);
    MemoryInline::FlatWrite32(r10, r7);
    r10 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r5 + 24));
    r7 = MemoryInline::FlatRead32(r10);
    r7_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r7 = (r7_rot_7 & -256);
    MemoryInline::FlatWrite32(r10, r7);
    r10 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r5 + 28));
    r7 = MemoryInline::FlatRead32(r10);
    r7 = (r7 + 8);
    MemoryInline::FlatWrite32(r10, r7);
}

loc_802346F8:
{
    r7 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r5 + 28));
    r30 = MemoryInline::FlatRead32(r7);
}

loc_80234704:
{
    if ((static_cast<uint32_t>(r30) <= static_cast<uint32_t>(24))) {
        goto loc_80234690;
    }
}

loc_80234708:
{
    r7 = 0;
}

loc_8023470C:
{
    r7 = (r7 + -2147483648);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(4));
}

loc_80234714:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80234724;
    }
}

loc_80234718:
{
    r3 = 0x80000000u;
    r3 = (r3 + 4);
    goto loc_8023493C;
}

loc_80234724:
{
}

loc_80234728:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(0))) {
        goto loc_80234738;
    }
}

loc_8023472C:
{
    r7 = (0 - r8);
    r8 = (r8 + -1);
    goto loc_8023473C;
}

loc_80234738:
{
    r7 = r8;
}

loc_8023473C:
{
}

loc_80234740:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8023474C;
    }
}

loc_80234744:
{
    r31 = 0;
    goto loc_80234760;
}

loc_8023474C:
{
    r31 = 1;
    goto loc_80234758;
}

loc_80234754:
{
    r31 = (r31 + 1);
}

loc_80234758:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r7 = (static_cast<int32_t>(r7) >> 1);
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80234754;
    }
}

loc_80234760:
{
    r12 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + 8));
    r11_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r11 = (r11_rot_3 & -4);
    r7 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r31));
    r10 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r5 + 24));
    r12_addr_3 = (r12 + r11);
    r12 = MemoryInline::FlatRead32(r12_addr_3);
    r7 = (r7 + -1);
    r11 = (r8 & r7);
    r8 = MemoryInline::FlatRead32(r10);
    r7 = (r12 & 16777215);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r12);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(24) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r29 = (static_cast<int32_t>(r12) >> 24);
    r7 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r31));
    r12 = (r29 + r31);
    r11 = (r11 | r7);
    r7 = (r30 - r12);
    r7 = PPC_Slw(static_cast<uint32_t>(r11), static_cast<uint32_t>(r7));
    r7 = (r8 | r7);
    MemoryInline::FlatWrite32(r10, r7);
    r8 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r5 + 28));
    r7 = MemoryInline::FlatRead32(r8);
    r7 = (r7 - r12);
    MemoryInline::FlatWrite32(r8, r7);
    goto loc_80234820;
}

loc_802347B8:
{
    r8 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r5 + 20));
    r8 = MemoryInline::FlatRead32(r8);
}

loc_802347C4:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_802347D0;
    }
}

loc_802347C8:
{
    r8 = (r6 + 4);
    goto loc_80234834;
}

loc_802347D0:
{
    r8 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r5 + 24));
    r7 = MemoryInline::FlatRead32(r3);
    r8 = MemoryInline::FlatRead32(r8);
    r8_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(8));
    r8 = (r8_rot_9 & 255);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r8));
    r7 = MemoryInline::FlatRead32(r3);
    r7 = (r7 + 1);
    MemoryInline::FlatWrite32(r3, r7);
    r8 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r5 + 20));
    r7 = MemoryInline::FlatRead32(r8);
    r7 = (r7 + -1);
    MemoryInline::FlatWrite32(r8, r7);
    r8 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r5 + 24));
    r7 = MemoryInline::FlatRead32(r8);
    r7_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r7 = (r7_rot_9 & -256);
    MemoryInline::FlatWrite32(r8, r7);
    r8 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r5 + 28));
    r7 = MemoryInline::FlatRead32(r8);
    r7 = (r7 + 8);
    MemoryInline::FlatWrite32(r8, r7);
}

loc_80234820:
{
    r7 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r5 + 28));
    r7 = MemoryInline::FlatRead32(r7);
}

loc_8023482C:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(24))) {
        goto loc_802347B8;
    }
}

loc_80234830:
{
    r8 = 0;
}

loc_80234834:
{
    r8 = (r8 + -2147483648);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(4));
}

loc_8023483C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802345E8;
    }
}

loc_80234840:
{
    r3 = 0x80000000u;
    r3 = (r3 + 4);
    goto loc_8023493C;
}

loc_8023484C:
{
}

loc_80234850:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80234924;
    }
}

loc_80234854:
{
    r8 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 12));
    r11 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r5 + 24));
    r8 = MemoryInline::FlatRead32((r8 + 28));
    r10 = MemoryInline::FlatRead32(r11);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r8);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(24) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r12 = (static_cast<int32_t>(r8) >> 24);
    r8 = (r8 & 16777215);
    r7 = (r7 - r12);
    r7 = PPC_Slw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r7));
    r7 = (r10 | r7);
    MemoryInline::FlatWrite32(r11, r7);
    r8 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r5 + 28));
    r7 = MemoryInline::FlatRead32(r8);
    r7 = (r7 - r12);
    MemoryInline::FlatWrite32(r8, r7);
    goto loc_802348F8;
}

loc_80234890:
{
    r7 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r5 + 20));
    r7 = MemoryInline::FlatRead32(r7);
}

loc_8023489C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_802348A8;
    }
}

loc_802348A0:
{
    r7 = (r6 + 4);
    goto loc_8023490C;
}

loc_802348A8:
{
    r8 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r5 + 24));
    r7 = MemoryInline::FlatRead32(r3);
    r8 = MemoryInline::FlatRead32(r8);
    r8_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(8));
    r8 = (r8_rot_11 & 255);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r8));
    r7 = MemoryInline::FlatRead32(r3);
    r7 = (r7 + 1);
    MemoryInline::FlatWrite32(r3, r7);
    r8 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r5 + 20));
    r7 = MemoryInline::FlatRead32(r8);
    r7 = (r7 + -1);
    MemoryInline::FlatWrite32(r8, r7);
    r8 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r5 + 24));
    r7 = MemoryInline::FlatRead32(r8);
    r7_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r7 = (r7_rot_11 & -256);
    MemoryInline::FlatWrite32(r8, r7);
    r8 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r5 + 28));
    r7 = MemoryInline::FlatRead32(r8);
    r7 = (r7 + 8);
    MemoryInline::FlatWrite32(r8, r7);
}

loc_802348F8:
{
    r7 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r5 + 28));
    r7 = MemoryInline::FlatRead32(r7);
}

loc_80234904:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(24))) {
        goto loc_80234890;
    }
}

loc_80234908:
{
    r7 = 0;
}

loc_8023490C:
{
    r7 = (r7 + -2147483648);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(4));
}

loc_80234914:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80234924;
    }
}

loc_80234918:
{
    r3 = 0x80000000u;
    r3 = (r3 + 4);
    goto loc_8023493C;
}

loc_80234924:
{
    r7 = (r9 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_80234928:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80234938;
    }
}

loc_8023492C:
{
    r9 = r4;
    r8 = 1;
    goto loc_80234498;
}

loc_80234938:
{
    r3 = 0;
}

loc_8023493C:
{
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
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
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0001FFB gpr_write=0xE0001FCB gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8023445C func_8023445C preserves=true fpr_mask=0x00000000
