#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015AD7C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8015AD7C;

loc_8015AD7C:
{
}

loc_8015AD80:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8015AD94;
    }
}

loc_8015AD84:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r0 = (r0 - r5);
    r7 = (r0 & 65535);
    goto loc_8015AD98;
}

loc_8015AD94:
{
    r7 = 5;
}

loc_8015AD98:
{
}

loc_8015AD9C:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(255))) {
        goto loc_8015ADBC;
    }
}

loc_8015ADA0:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r0 = (r0_rot_3 & 255);
    r6 = 54;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r6));
    r6 = (r3 + 3);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r7));
    goto loc_8015ADCC;
}

loc_8015ADBC:
{
    r0 = 53;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r7));
    r6 = (r3 + 2);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
}

loc_8015ADCC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8015ADD0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015ADFC;
    }
}

loc_8015ADD4:
{
    r0 = 10;
    r3 = 0;
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r6 + 4), static_cast<uint8_t>(r0));
    r6 = (r6 + 5);
    goto loc_8015AF44;
}

loc_8015ADFC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8015AE00:
{
    r3 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015AF44;
    }
}

loc_8015AE08:
{
}

loc_8015AE0C:
{
    r7 = (r5 + 65536);
    r7 = (r7 + -8);
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(8))) {
        goto loc_8015AF04;
    }
}

loc_8015AE18:
{
    r8 = (r7 & 65535);
    r0 = 9;
    r7 = (r8 + 7);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(29));
    r7 = (r7_rot_1 & 536870911);
    ctr = r7;
}

loc_8015AE30:
{
    if ((static_cast<uint32_t>(r8) <= static_cast<uint32_t>(0))) {
        goto loc_8015AF04;
    }
}

loc_8015AE34:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r6, 0, 24u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r6, static_cast<uint8_t>(r0));
    r3 = (r3 + 8);
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 16u, true, false);
    r7 = MemoryInline::ReadResolved16(guest_range_1, 0u, r4);
    r7 = (static_cast<int32_t>(r7) >> 8);
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r6 + 1), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 0u, r4);
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r6 + 2), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r6 + 3), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r4 + 2));
    r7 = (static_cast<int32_t>(r7) >> 8);
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r6 + 4), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r4 + 2));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r6 + 5), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r6 + 6), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r4 + 4));
    r7 = (static_cast<int32_t>(r7) >> 8);
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r6 + 7), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r4 + 4));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r6 + 8), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r6 + 9), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r4 + 6));
    r7 = (static_cast<int32_t>(r7) >> 8);
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r6 + 10), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r4 + 6));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r6 + 11), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r6 + 12), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r4 + 8));
    r7 = (static_cast<int32_t>(r7) >> 8);
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r6 + 13), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r6 + 14), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r6 + 15), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r4 + 10));
    r7 = (static_cast<int32_t>(r7) >> 8);
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r6 + 16), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r4 + 10));
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r6 + 17), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r6 + 18), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r4 + 12));
    r7 = (static_cast<int32_t>(r7) >> 8);
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r6 + 19), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r4 + 12));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r6 + 20), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r6 + 21), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r4 + 14));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r7 = (static_cast<int32_t>(r7) >> 8);
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r6 + 22), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r4 + 14));
    r4 = (r4 + 16);
    MemoryInline::WriteResolved8(guest_range_0, 23u, (r6 + 23), static_cast<uint8_t>(r7));
    r6 = (r6 + 24);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8015AE34;
    }
}

loc_8015AF04:
{
    r7 = (r3 & 65535);
    r8 = 9;
    r0 = (r5 - r7);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r5));
}

loc_8015AF18:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8015AF44;
    }
}

loc_8015AF1C:
{
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r8));
    r3 = (r3 + 1);
    r0 = MemoryInline::FlatRead16(r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r0));
    r6 = (r6 + 3);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8015AF1C;
    }
}

loc_8015AF44:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001D9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8015AD7C func_8015AD7C preserves=true fpr_mask=0x00000000
