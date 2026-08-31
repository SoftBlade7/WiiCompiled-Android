#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015B52C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
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
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8015B52C;

loc_8015B52C:
{
    r0 = 0;
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 5u, true, false);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 0u, r3);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r6);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r6) >> 3);
    r6 = (r6 & 7);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
}

loc_8015B544:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015B550;
    }
}

loc_8015B548:
{
    r3 = (r3 + 1);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_8015B550:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(6));
}

loc_8015B554:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015B580;
    }
}

loc_8015B558:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8015B568;
    }
}

loc_8015B55C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(5));
}

loc_8015B560:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8015B574;
    }
}

loc_8015B564:
{
    goto loc_8015B5CC;
}

loc_8015B568:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(8));
}

loc_8015B56C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8015B5CC;
    }
}

loc_8015B570:
{
    goto loc_8015B59C;
}

loc_8015B574:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
    r6 = (r3 + 2);
    goto loc_8015B5D4;
}

loc_8015B580:
{
    r7 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
    r6 = (r3 + 3);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 2));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r3 = (r3_rot_1 & -256);
    r0 = (r3 + r0);
    r0 = (r0 & 65535);
    goto loc_8015B5D4;
}

loc_8015B59C:
{
    r8 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
    r6 = (r3 + 5);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 2));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 3));
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(24));
    r8 = (r8_rot_1 & -16777216);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 4));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(16));
    r7 = (r7_rot_1 & -65536);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & -256);
    r3 = (r7 + r3);
    r0 = (r8 + r0);
    r0 = (r3 + r0);
    goto loc_8015B5D4;
}

loc_8015B5CC:
{
    r3 = (r3 + 1);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_8015B5D4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_8015B5D8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8015B5E4;
    }
}

loc_8015B5DC:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_8015B5E4:
{
    r0 = (r6 + r0);
    goto loc_8015B76C;
}

loc_8015B5EC:
{
    r4 = MemoryInline::FlatRead8(r6);
    r6 = (r6 + 1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r4) >> 3);
    r4 = (r4 & 7);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_8015B600:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015B60C;
    }
}

loc_8015B604:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_8015B60C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(5));
}

loc_8015B610:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015B650;
    }
}

loc_8015B614:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8015B630;
    }
}

loc_8015B618:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_8015B61C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015B648;
    }
}

loc_8015B620:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8015B6A8;
    }
}

loc_8015B624:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_8015B628:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8015B640;
    }
}

loc_8015B62C:
{
    goto loc_8015B6A8;
}

loc_8015B630:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(7));
}

loc_8015B634:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015B678;
    }
}

loc_8015B638:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8015B6A8;
    }
}

loc_8015B63C:
{
    goto loc_8015B65C;
}

loc_8015B640:
{
    r3 = 2;
    goto loc_8015B6B0;
}

loc_8015B648:
{
    r3 = 4;
    goto loc_8015B6B0;
}

loc_8015B650:
{
    r3 = MemoryInline::FlatRead8(r6);
    r6 = (r6 + 1);
    goto loc_8015B6B0;
}

loc_8015B65C:
{
    r4 = MemoryInline::FlatRead8(r6);
    r3 = MemoryInline::FlatRead8((r6 + 1));
    r6 = (r6 + 2);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r4 = (r4_rot_2 & -256);
    r3 = (r4 + r3);
    r3 = (r3 & 65535);
    goto loc_8015B6B0;
}

loc_8015B678:
{
    r7 = MemoryInline::FlatRead8(r6);
    r4 = MemoryInline::FlatRead8((r6 + 1));
    r3 = MemoryInline::FlatRead8((r6 + 2));
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r8 = (r8_rot_4 & -16777216);
    r7 = MemoryInline::FlatRead8((r6 + 3));
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r4 = (r4_rot_3 & -65536);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_4 & -256);
    r6 = (r6 + 4);
    r4 = (r8 + r4);
    r3 = (r7 + r3);
    r3 = (r4 + r3);
    goto loc_8015B6B0;
}

loc_8015B6A8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_8015B6B0:
{
}

loc_8015B6B4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(2))) {
        goto loc_8015B6F4;
    }
}

loc_8015B6B8:
{
    r7 = MemoryInline::FlatRead8(r6);
    r3 = MemoryInline::FlatRead16(r5);
    r4 = MemoryInline::FlatRead8((r6 + 1));
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r7 = (r7_rot_4 & -256);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_6 & -4);
    r6 = (r6 + 2);
    r4 = (r7 + r4);
    r3 = (r5 + r3);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r4));
    r3 = MemoryInline::FlatRead16(r5);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_7 & -4);
    r4 = (r5 + r3);
    r3 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r3));
    goto loc_8015B74C;
}

loc_8015B6F4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
}

loc_8015B6F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015B744;
    }
}

loc_8015B6FC:
{
    r7 = MemoryInline::FlatRead8(r6);
    r3 = MemoryInline::FlatRead16(r5);
    r4 = MemoryInline::FlatRead8((r6 + 1));
    r7_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r7 = (r7_rot_5 & -256);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_8 & -4);
    r4 = (r7 + r4);
    r3 = (r5 + r3);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r4));
    r7 = MemoryInline::FlatRead8((r6 + 2));
    r3 = MemoryInline::FlatRead16(r5);
    r4 = MemoryInline::FlatRead8((r6 + 3));
    r7_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r7 = (r7_rot_6 & -256);
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_9 & -4);
    r6 = (r6 + 4);
    r4 = (r7 + r4);
    r3 = (r5 + r3);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r4));
    goto loc_8015B74C;
}

loc_8015B744:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_8015B74C:
{
    r3 = MemoryInline::FlatRead16(r5);
    r4 = (r3 + 1);
    r3 = (r4 & 65535);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
}

loc_8015B760:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8015B76C;
    }
}

loc_8015B764:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_8015B76C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_8015B770:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8015B5EC;
    }
}

loc_8015B774:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001D9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8015B52C func_8015B52C preserves=true fpr_mask=0x00000000
