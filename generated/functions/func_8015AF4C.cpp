#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015AF4C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8015AF4C;

loc_8015AF4C:
{
    r0 = 9;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 5u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r3, static_cast<uint8_t>(r0));
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 11u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r4 + 8));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r6 = MemoryInline::ReadResolved8(guest_range_1, 10u, (r4 + 10));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(5));
}

loc_8015AF70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015AFD4;
    }
}

loc_8015AF74:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8015AF84;
    }
}

loc_8015AF78:
{
}

loc_8015AF7C:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(4))) {
        goto loc_8015AF8C;
    }
}

loc_8015AF80:
{
    goto loc_8015AFD4;
}

loc_8015AF84:
{
}

loc_8015AF88:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(9))) {
        goto loc_8015AFD4;
    }
}

loc_8015AF8C:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & 2040);
    r6 = (r3 + 5);
    r0 = (r0 | 5);
    r5 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 4), static_cast<uint8_t>(r0));
    goto loc_8015AFC0;
}

loc_8015AFAC:
{
    r3 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
    r3_addr_2 = (r3 + r5);
    r0 = MemoryInline::FlatRead8(r3_addr_2);
    r5 = (r5 + 1);
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    r6 = (r6 + 1);
}

loc_8015AFC0:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_8015AFC8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8015AFAC;
    }
}

loc_8015AFCC:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_8015AFD4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
}

loc_8015AFDC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(16))) {
        goto loc_8015B058;
    }
}

loc_8015AFE0:
{
    r5 = 0x80280000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r5 = (r5 + 32168);
    r5_addr_1 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_1);
    ctr = r5;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8015B058u:
        goto loc_8015B058;
        break;
    case 0x8015AFF8u:
        goto loc_8015AFF8;
        break;
    case 0x8015B008u:
        goto loc_8015B008;
        break;
    case 0x8015B01Cu:
        goto loc_8015B01C;
        break;
    case 0x8015B030u:
        goto loc_8015B030;
        break;
    case 0x8015B044u:
        goto loc_8015B044;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_8015AFF8:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & 248);
    r6 = (r3 + 4);
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    goto loc_8015B070;
}

loc_8015B008:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & 2040);
    r6 = (r3 + 4);
    r0 = (r0 | 1);
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    goto loc_8015B070;
}

loc_8015B01C:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & 2040);
    r6 = (r3 + 4);
    r0 = (r0 | 2);
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    goto loc_8015B070;
}

loc_8015B030:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r0 = (r0_rot_6 & 2040);
    r6 = (r3 + 4);
    r0 = (r0 | 3);
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    goto loc_8015B070;
}

loc_8015B044:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r0 = (r0_rot_7 & 2040);
    r6 = (r3 + 4);
    r0 = (r0 | 4);
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    goto loc_8015B070;
}

loc_8015B058:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r0 = (r0_rot_9 & 2040);
    r6 = (r3 + 5);
    r0 = (r0 | 5);
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 4), static_cast<uint8_t>(r0));
}

loc_8015B070:
{
    r5 = 0;
    goto loc_8015B08C;
}

loc_8015B078:
{
    r3 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
    r3_addr_4 = (r3 + r5);
    r0 = MemoryInline::FlatRead8(r3_addr_4);
    r5 = (r5 + 1);
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    r6 = (r6 + 1);
}

loc_8015B08C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_8015B094:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8015B078;
    }
}

loc_8015B098:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8015AF4C func_8015AF4C preserves=true fpr_mask=0x00000000
