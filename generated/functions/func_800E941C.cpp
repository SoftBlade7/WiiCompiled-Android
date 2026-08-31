#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E941C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_10 = nullptr;
    uint8_t* guest_range_11 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;
    uint8_t* guest_range_9 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800E941C;

loc_800E941C:
{
}

loc_800E9420:
{
    r6 = r3;
    r9 = r6;
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(32))) {
        goto loc_800E9574;
    }
}

loc_800E942C:
{
    r7 = (r3 ^ r4);
    r0 = (r7 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800E9434:
{
    r7 = (r7 & 15);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E95A4;
    }
}

loc_800E943C:
{
    r0 = (r7 & 2);
}

loc_800E9440:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E946C;
    }
}

loc_800E9444:
{
    r0 = (r3 & 1);
    r0_subfic_ra_0 = r0;
    r0 = (2 - r0_subfic_ra_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(2) >= static_cast<uint32_t>(r0_subfic_ra_0) ? 1u : 0u) << 29);
}

loc_800E9450:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E95AC;
    }
}

loc_800E9454:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    r6 = (r3 + 1);
    r5 = (r5 + -1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_800E95AC;
}

loc_800E946C:
{
    r0 = (r7 & 4);
}

loc_800E9470:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E94D4;
    }
}

loc_800E9474:
{
    r0 = (r3 & 3);
    r7 = (4 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(4) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(3));
}

loc_800E9480:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E949C;
    }
}

loc_800E9484:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E9898;
    }
}

loc_800E9488:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(1));
}

loc_800E948C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E94BC;
    }
}

loc_800E9490:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E94AC;
    }
}

loc_800E9494:
{
    goto loc_800E9898;
}

loc_800E949C:
{
    r0 = MemoryInline::FlatRead8(r4);
    r9 = (r3 + 1);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
}

loc_800E94AC:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r0));
    r9 = (r9 + 1);
}

loc_800E94BC:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    r6 = (r9 + 1);
    r5 = (r5 - r7);
    MemoryInline::FlatWrite8(r9, static_cast<uint8_t>(r0));
    goto loc_800E9898;
}

loc_800E94D4:
{
    r0 = (r3 & 7);
    r8 = (8 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(8) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
}

loc_800E94E0:
{
    if ((static_cast<uint32_t>(r8) > static_cast<uint32_t>(8))) {
        goto loc_800E9A80;
    }
}

loc_800E94E4:
{
    r7 = 0x80280000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r7 = (r7 + -25712);
    r7_addr_1 = (r7 + r0);
    r7 = MemoryInline::FlatRead32(r7_addr_1);
    ctr = r7;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800E9A80u:
        goto loc_800E9A80;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_800E9574:
{
    r0 = (r3 & 7);
}

loc_800E9578:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800E9584;
    }
}

loc_800E957C:
{
    r0 = (r4 & 7);
}

loc_800E9580:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E9A80;
    }
}

loc_800E9584:
{
    r0 = (r3 & 3);
}

loc_800E9588:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800E9594;
    }
}

loc_800E958C:
{
    r0 = (r4 & 3);
}

loc_800E9590:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E9898;
    }
}

loc_800E9594:
{
    r0 = (r3 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800E9598:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E95A4;
    }
}

loc_800E959C:
{
    r0 = (r4 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800E95A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E95AC;
    }
}

loc_800E95A4:
{
    r3 = r6;
    ctx->gpr[0] = r0;
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
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_800E95AC:
{
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r3 = (r3_rot_0 & 2147483647);
}

loc_800E95B0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E9880;
    }
}

loc_800E95B4:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r7 = (static_cast<int32_t>(r3) >> 4);
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(0))) {
        goto loc_800E976C;
    }
}

loc_800E95BC:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
}

loc_800E95C0:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E96DC;
    }
}

loc_800E95C8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 64u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, r4);
    guest_range_1 = MemoryInline::ResolveRangeHost(r6, 0, 64u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, r6, static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r4 + 2));
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r6 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r4 + 4));
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r6 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r4 + 6));
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r6 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 8));
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r6 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r4 + 10));
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r6 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r4 + 12));
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r6 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r4 + 14));
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r6 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r4 + 16));
    MemoryInline::WriteResolved16(guest_range_1, 16u, (r6 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 18u, (r4 + 18));
    MemoryInline::WriteResolved16(guest_range_1, 18u, (r6 + 18), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 20u, (r4 + 20));
    MemoryInline::WriteResolved16(guest_range_1, 20u, (r6 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 22u, (r4 + 22));
    MemoryInline::WriteResolved16(guest_range_1, 22u, (r6 + 22), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 24u, (r4 + 24));
    MemoryInline::WriteResolved16(guest_range_1, 24u, (r6 + 24), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 26u, (r4 + 26));
    MemoryInline::WriteResolved16(guest_range_1, 26u, (r6 + 26), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 28u, (r4 + 28));
    MemoryInline::WriteResolved16(guest_range_1, 28u, (r6 + 28), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 30u, (r4 + 30));
    MemoryInline::WriteResolved16(guest_range_1, 30u, (r6 + 30), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 32u, (r4 + 32));
    MemoryInline::WriteResolved16(guest_range_1, 32u, (r6 + 32), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 34u, (r4 + 34));
    MemoryInline::WriteResolved16(guest_range_1, 34u, (r6 + 34), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 36u, (r4 + 36));
    MemoryInline::WriteResolved16(guest_range_1, 36u, (r6 + 36), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 38u, (r4 + 38));
    MemoryInline::WriteResolved16(guest_range_1, 38u, (r6 + 38), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 40u, (r4 + 40));
    MemoryInline::WriteResolved16(guest_range_1, 40u, (r6 + 40), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 42u, (r4 + 42));
    MemoryInline::WriteResolved16(guest_range_1, 42u, (r6 + 42), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 44u, (r4 + 44));
    MemoryInline::WriteResolved16(guest_range_1, 44u, (r6 + 44), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 46u, (r4 + 46));
    MemoryInline::WriteResolved16(guest_range_1, 46u, (r6 + 46), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 48u, (r4 + 48));
    MemoryInline::WriteResolved16(guest_range_1, 48u, (r6 + 48), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 50u, (r4 + 50));
    MemoryInline::WriteResolved16(guest_range_1, 50u, (r6 + 50), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 52u, (r4 + 52));
    MemoryInline::WriteResolved16(guest_range_1, 52u, (r6 + 52), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 54u, (r4 + 54));
    MemoryInline::WriteResolved16(guest_range_1, 54u, (r6 + 54), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 56u, (r4 + 56));
    MemoryInline::WriteResolved16(guest_range_1, 56u, (r6 + 56), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 58u, (r4 + 58));
    MemoryInline::WriteResolved16(guest_range_1, 58u, (r6 + 58), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 60u, (r4 + 60));
    MemoryInline::WriteResolved16(guest_range_1, 60u, (r6 + 60), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 62u, (r4 + 62));
    r4 = (r4 + 64);
    MemoryInline::WriteResolved16(guest_range_1, 62u, (r6 + 62), static_cast<uint16_t>(r0));
    r6 = (r6 + 64);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800E95C8;
    }
}

loc_800E96D4:
{
    r7 = (r7 & 1);
}

loc_800E96D8:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_800E976C;
    }
}

loc_800E96DC:
{
    ctr = r7;
}

loc_800E96E0:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_2, 0u, r4);
    guest_range_3 = MemoryInline::ResolveRangeHost(r6, 0, 32u, false, true);
    MemoryInline::WriteResolved16(guest_range_3, 0u, r6, static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 2u, (r4 + 2));
    MemoryInline::WriteResolved16(guest_range_3, 2u, (r6 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 4u, (r4 + 4));
    MemoryInline::WriteResolved16(guest_range_3, 4u, (r6 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 6u, (r4 + 6));
    MemoryInline::WriteResolved16(guest_range_3, 6u, (r6 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolved16(guest_range_3, 8u, (r6 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 10u, (r4 + 10));
    MemoryInline::WriteResolved16(guest_range_3, 10u, (r6 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 12u, (r4 + 12));
    MemoryInline::WriteResolved16(guest_range_3, 12u, (r6 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 14u, (r4 + 14));
    MemoryInline::WriteResolved16(guest_range_3, 14u, (r6 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 16u, (r4 + 16));
    MemoryInline::WriteResolved16(guest_range_3, 16u, (r6 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 18u, (r4 + 18));
    MemoryInline::WriteResolved16(guest_range_3, 18u, (r6 + 18), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 20u, (r4 + 20));
    MemoryInline::WriteResolved16(guest_range_3, 20u, (r6 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 22u, (r4 + 22));
    MemoryInline::WriteResolved16(guest_range_3, 22u, (r6 + 22), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 24u, (r4 + 24));
    MemoryInline::WriteResolved16(guest_range_3, 24u, (r6 + 24), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 26u, (r4 + 26));
    MemoryInline::WriteResolved16(guest_range_3, 26u, (r6 + 26), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 28u, (r4 + 28));
    MemoryInline::WriteResolved16(guest_range_3, 28u, (r6 + 28), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 30u, (r4 + 30));
    r4 = (r4 + 32);
    MemoryInline::WriteResolved16(guest_range_3, 30u, (r6 + 30), static_cast<uint16_t>(r0));
    r6 = (r6 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800E96E0;
    }
}

loc_800E976C:
{
    r0 = (r3 & 15);
}

loc_800E9774:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(15))) {
        goto loc_800E9880;
    }
}

loc_800E9778:
{
    r3 = 0x80280000u;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r3 + -25776);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800E9880u:
        goto loc_800E9880;
        break;
    case 0x800E9870u:
        goto loc_800E9870;
        break;
    case 0x800E9860u:
        goto loc_800E9860;
        break;
    case 0x800E9850u:
        goto loc_800E9850;
        break;
    case 0x800E9840u:
        goto loc_800E9840;
        break;
    case 0x800E9830u:
        goto loc_800E9830;
        break;
    case 0x800E9820u:
        goto loc_800E9820;
        break;
    case 0x800E9810u:
        goto loc_800E9810;
        break;
    case 0x800E9800u:
        goto loc_800E9800;
        break;
    case 0x800E97F0u:
        goto loc_800E97F0;
        break;
    case 0x800E97E0u:
        goto loc_800E97E0;
        break;
    case 0x800E97D0u:
        goto loc_800E97D0;
        break;
    case 0x800E97C0u:
        goto loc_800E97C0;
        break;
    case 0x800E97B0u:
        goto loc_800E97B0;
        break;
    case 0x800E97A0u:
        goto loc_800E97A0;
        break;
    case 0x800E9790u:
        goto loc_800E9790;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_800E9790:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    r6 = (r6 + 2);
}

loc_800E97A0:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    r6 = (r6 + 2);
}

loc_800E97B0:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    r6 = (r6 + 2);
}

loc_800E97C0:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    r6 = (r6 + 2);
}

loc_800E97D0:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    r6 = (r6 + 2);
}

loc_800E97E0:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    r6 = (r6 + 2);
}

loc_800E97F0:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    r6 = (r6 + 2);
}

loc_800E9800:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    r6 = (r6 + 2);
}

loc_800E9810:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    r6 = (r6 + 2);
}

loc_800E9820:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    r6 = (r6 + 2);
}

loc_800E9830:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    r6 = (r6 + 2);
}

loc_800E9840:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    r6 = (r6 + 2);
}

loc_800E9850:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    r6 = (r6 + 2);
}

loc_800E9860:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    r6 = (r6 + 2);
}

loc_800E9870:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    r6 = (r6 + 2);
}

loc_800E9880:
{
    r0 = (r5 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_800E9888:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_800E988C:
{
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_800E9898:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(30));
    r3 = (r3_rot_1 & 1073741823);
}

loc_800E989C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E9A2C;
    }
}

loc_800E98A0:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r7 = (static_cast<int32_t>(r3) >> 3);
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(0))) {
        goto loc_800E9998;
    }
}

loc_800E98A8:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(31));
    r0 = (r0_rot_6 & 2147483647);
}

loc_800E98AC:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E9948;
    }
}

loc_800E98B4:
{
    guest_range_4 = MemoryInline::ResolveRangeHost(r4, 0, 64u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 0u, r4);
    guest_range_5 = MemoryInline::ResolveRangeHost(r6, 0, 64u, false, true);
    MemoryInline::WriteResolved32(guest_range_5, 0u, r6, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_5, 4u, (r6 + 4), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_5, 8u, (r6 + 8), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r4 + 12));
    MemoryInline::WriteResolved32(guest_range_5, 12u, (r6 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r4 + 16));
    MemoryInline::WriteResolved32(guest_range_5, 16u, (r6 + 16), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r4 + 20));
    MemoryInline::WriteResolved32(guest_range_5, 20u, (r6 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r4 + 24));
    MemoryInline::WriteResolved32(guest_range_5, 24u, (r6 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r4 + 28));
    MemoryInline::WriteResolved32(guest_range_5, 28u, (r6 + 28), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r4 + 32));
    MemoryInline::WriteResolved32(guest_range_5, 32u, (r6 + 32), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r4 + 36));
    MemoryInline::WriteResolved32(guest_range_5, 36u, (r6 + 36), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r4 + 40));
    MemoryInline::WriteResolved32(guest_range_5, 40u, (r6 + 40), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 44u, (r4 + 44));
    MemoryInline::WriteResolved32(guest_range_5, 44u, (r6 + 44), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 48u, (r4 + 48));
    MemoryInline::WriteResolved32(guest_range_5, 48u, (r6 + 48), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 52u, (r4 + 52));
    MemoryInline::WriteResolved32(guest_range_5, 52u, (r6 + 52), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 56u, (r4 + 56));
    MemoryInline::WriteResolved32(guest_range_5, 56u, (r6 + 56), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 60u, (r4 + 60));
    r4 = (r4 + 64);
    MemoryInline::WriteResolved32(guest_range_5, 60u, (r6 + 60), r0);
    r6 = (r6 + 64);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800E98B4;
    }
}

loc_800E9940:
{
    r7 = (r7 & 1);
}

loc_800E9944:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_800E9998;
    }
}

loc_800E9948:
{
    ctr = r7;
}

loc_800E994C:
{
    guest_range_6 = MemoryInline::ResolveRangeHost(r4, 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 0u, r4);
    guest_range_7 = MemoryInline::ResolveRangeHost(r6, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_7, 0u, r6, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 4u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_7, 4u, (r6 + 4), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_7, 8u, (r6 + 8), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 12u, (r4 + 12));
    MemoryInline::WriteResolved32(guest_range_7, 12u, (r6 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 16u, (r4 + 16));
    MemoryInline::WriteResolved32(guest_range_7, 16u, (r6 + 16), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 20u, (r4 + 20));
    MemoryInline::WriteResolved32(guest_range_7, 20u, (r6 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 24u, (r4 + 24));
    MemoryInline::WriteResolved32(guest_range_7, 24u, (r6 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 28u, (r4 + 28));
    r4 = (r4 + 32);
    MemoryInline::WriteResolved32(guest_range_7, 28u, (r6 + 28), r0);
    r6 = (r6 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800E994C;
    }
}

loc_800E9998:
{
    r0 = (r3 & 7);
}

loc_800E99A0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(7))) {
        goto loc_800E9A2C;
    }
}

loc_800E99A4:
{
    r3 = 0x80280000u;
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r3 + -25808);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800E9A2Cu:
        goto loc_800E9A2C;
        break;
    case 0x800E9A1Cu:
        goto loc_800E9A1C;
        break;
    case 0x800E9A0Cu:
        goto loc_800E9A0C;
        break;
    case 0x800E99FCu:
        goto loc_800E99FC;
        break;
    case 0x800E99ECu:
        goto loc_800E99EC;
        break;
    case 0x800E99DCu:
        goto loc_800E99DC;
        break;
    case 0x800E99CCu:
        goto loc_800E99CC;
        break;
    case 0x800E99BCu:
        goto loc_800E99BC;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_800E99BC:
{
    r0 = MemoryInline::FlatRead32(r4);
    r4 = (r4 + 4);
    MemoryInline::FlatWrite32(r6, r0);
    r6 = (r6 + 4);
}

loc_800E99CC:
{
    r0 = MemoryInline::FlatRead32(r4);
    r4 = (r4 + 4);
    MemoryInline::FlatWrite32(r6, r0);
    r6 = (r6 + 4);
}

loc_800E99DC:
{
    r0 = MemoryInline::FlatRead32(r4);
    r4 = (r4 + 4);
    MemoryInline::FlatWrite32(r6, r0);
    r6 = (r6 + 4);
}

loc_800E99EC:
{
    r0 = MemoryInline::FlatRead32(r4);
    r4 = (r4 + 4);
    MemoryInline::FlatWrite32(r6, r0);
    r6 = (r6 + 4);
}

loc_800E99FC:
{
    r0 = MemoryInline::FlatRead32(r4);
    r4 = (r4 + 4);
    MemoryInline::FlatWrite32(r6, r0);
    r6 = (r6 + 4);
}

loc_800E9A0C:
{
    r0 = MemoryInline::FlatRead32(r4);
    r4 = (r4 + 4);
    MemoryInline::FlatWrite32(r6, r0);
    r6 = (r6 + 4);
}

loc_800E9A1C:
{
    r0 = MemoryInline::FlatRead32(r4);
    r4 = (r4 + 4);
    MemoryInline::FlatWrite32(r6, r0);
    r6 = (r6 + 4);
}

loc_800E9A2C:
{
    r0 = (r5 & 3);
    r3 = r6;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_800E9A38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E9A64;
    }
}

loc_800E9A3C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E9A4C;
    }
}

loc_800E9A40:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_800E9A44:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E9A74;
    }
}

loc_800E9A48:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_800E9A4C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_800E9A50:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_800E9A54:
{
    r0 = MemoryInline::FlatRead8(r4);
    r3 = (r6 + 1);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
}

loc_800E9A64:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
}

loc_800E9A74:
{
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_800E9A80:
{
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r7 = (r7_rot_1 & 536870911);
}

loc_800E9A84:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_800E9D0C;
    }
}

loc_800E9A88:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r8 = (static_cast<int32_t>(r7) >> 3);
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(0))) {
        goto loc_800E9C40;
    }
}

loc_800E9A90:
{
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(31));
    r0 = (r0_rot_11 & 2147483647);
}

loc_800E9A94:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E9BB0;
    }
}

loc_800E9A9C:
{
    guest_range_8 = MemoryInline::ResolveRangeHost(r4, 0, 128u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 0u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 0u, r4);
            r3 = MemoryInline::ReadResolved32(guest_range_8, 4u, (r4 + 4));
        }
    }
    guest_range_9 = MemoryInline::ResolveRangeHost(r6, 0, 128u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_9, 4u, (r6 + 4), r3);
        MemoryInline::WriteResolved32(guest_range_9, 0u, r6, r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 8u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 8u, (r4 + 8));
            r3 = MemoryInline::ReadResolved32(guest_range_8, 12u, (r4 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_9, 12u, (r6 + 12), r3);
        MemoryInline::WriteResolved32(guest_range_9, 8u, (r6 + 8), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 16u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 16u, (r4 + 16));
            r3 = MemoryInline::ReadResolved32(guest_range_8, 20u, (r4 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_9, 20u, (r6 + 20), r3);
        MemoryInline::WriteResolved32(guest_range_9, 16u, (r6 + 16), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 24u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 24u, (r4 + 24));
            r3 = MemoryInline::ReadResolved32(guest_range_8, 28u, (r4 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_9, 28u, (r6 + 28), r3);
        MemoryInline::WriteResolved32(guest_range_9, 24u, (r6 + 24), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 32u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 32u, (r4 + 32));
            r3 = MemoryInline::ReadResolved32(guest_range_8, 36u, (r4 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_9, 36u, (r6 + 36), r3);
        MemoryInline::WriteResolved32(guest_range_9, 32u, (r6 + 32), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 40u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 40u, (r4 + 40));
            r3 = MemoryInline::ReadResolved32(guest_range_8, 44u, (r4 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_9, 44u, (r6 + 44), r3);
        MemoryInline::WriteResolved32(guest_range_9, 40u, (r6 + 40), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 48u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 48u, (r4 + 48));
            r3 = MemoryInline::ReadResolved32(guest_range_8, 52u, (r4 + 52));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_9, 52u, (r6 + 52), r3);
        MemoryInline::WriteResolved32(guest_range_9, 48u, (r6 + 48), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 56u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 56u, (r4 + 56));
            r3 = MemoryInline::ReadResolved32(guest_range_8, 60u, (r4 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_9, 60u, (r6 + 60), r3);
        MemoryInline::WriteResolved32(guest_range_9, 56u, (r6 + 56), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 64u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 64u, (r4 + 64));
            r3 = MemoryInline::ReadResolved32(guest_range_8, 68u, (r4 + 68));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_9, 68u, (r6 + 68), r3);
        MemoryInline::WriteResolved32(guest_range_9, 64u, (r6 + 64), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 72u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 72u, (r4 + 72));
            r3 = MemoryInline::ReadResolved32(guest_range_8, 76u, (r4 + 76));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_9, 76u, (r6 + 76), r3);
        MemoryInline::WriteResolved32(guest_range_9, 72u, (r6 + 72), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 80u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 80u, (r4 + 80));
            r3 = MemoryInline::ReadResolved32(guest_range_8, 84u, (r4 + 84));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_9, 84u, (r6 + 84), r3);
        MemoryInline::WriteResolved32(guest_range_9, 80u, (r6 + 80), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 88u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 88u, (r4 + 88));
            r3 = MemoryInline::ReadResolved32(guest_range_8, 92u, (r4 + 92));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_9, 92u, (r6 + 92), r3);
        MemoryInline::WriteResolved32(guest_range_9, 88u, (r6 + 88), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 96u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 96u, (r4 + 96));
            r3 = MemoryInline::ReadResolved32(guest_range_8, 100u, (r4 + 100));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_9, 100u, (r6 + 100), r3);
        MemoryInline::WriteResolved32(guest_range_9, 96u, (r6 + 96), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 104u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 104u, (r4 + 104));
            r3 = MemoryInline::ReadResolved32(guest_range_8, 108u, (r4 + 108));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_9, 108u, (r6 + 108), r3);
        MemoryInline::WriteResolved32(guest_range_9, 104u, (r6 + 104), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 112u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 112u, (r4 + 112));
            r3 = MemoryInline::ReadResolved32(guest_range_8, 116u, (r4 + 116));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_9, 116u, (r6 + 116), r3);
        MemoryInline::WriteResolved32(guest_range_9, 112u, (r6 + 112), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_8, 120u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_8, 120u, (r4 + 120));
            r3 = MemoryInline::ReadResolved32(guest_range_8, 124u, (r4 + 124));
        }
    }
    r4 = (r4 + 128);
    if (!MemoryInline::WriteResolvedPair32(guest_range_9, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_9, 124u, (r6 + 124), r3);
        MemoryInline::WriteResolved32(guest_range_9, 120u, (r6 + 120), r0);
    }
    r6 = (r6 + 128);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800E9A9C;
    }
}

loc_800E9BA8:
{
    r8 = (r8 & 1);
}

loc_800E9BAC:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_800E9C40;
    }
}

loc_800E9BB0:
{
    ctr = r8;
}

loc_800E9BB4:
{
    guest_range_10 = MemoryInline::ResolveRangeHost(r4, 0, 64u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 0u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_10, 0u, r4);
            r3 = MemoryInline::ReadResolved32(guest_range_10, 4u, (r4 + 4));
        }
    }
    guest_range_11 = MemoryInline::ResolveRangeHost(r6, 0, 64u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_11, 4u, (r6 + 4), r3);
        MemoryInline::WriteResolved32(guest_range_11, 0u, r6, r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 8u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_10, 8u, (r4 + 8));
            r3 = MemoryInline::ReadResolved32(guest_range_10, 12u, (r4 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_11, 12u, (r6 + 12), r3);
        MemoryInline::WriteResolved32(guest_range_11, 8u, (r6 + 8), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 16u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_10, 16u, (r4 + 16));
            r3 = MemoryInline::ReadResolved32(guest_range_10, 20u, (r4 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_11, 20u, (r6 + 20), r3);
        MemoryInline::WriteResolved32(guest_range_11, 16u, (r6 + 16), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 24u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_10, 24u, (r4 + 24));
            r3 = MemoryInline::ReadResolved32(guest_range_10, 28u, (r4 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_11, 28u, (r6 + 28), r3);
        MemoryInline::WriteResolved32(guest_range_11, 24u, (r6 + 24), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 32u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_10, 32u, (r4 + 32));
            r3 = MemoryInline::ReadResolved32(guest_range_10, 36u, (r4 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_11, 36u, (r6 + 36), r3);
        MemoryInline::WriteResolved32(guest_range_11, 32u, (r6 + 32), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 40u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_10, 40u, (r4 + 40));
            r3 = MemoryInline::ReadResolved32(guest_range_10, 44u, (r4 + 44));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_11, 44u, (r6 + 44), r3);
        MemoryInline::WriteResolved32(guest_range_11, 40u, (r6 + 40), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 48u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_10, 48u, (r4 + 48));
            r3 = MemoryInline::ReadResolved32(guest_range_10, 52u, (r4 + 52));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_11, 52u, (r6 + 52), r3);
        MemoryInline::WriteResolved32(guest_range_11, 48u, (r6 + 48), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_10, 56u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_10, 56u, (r4 + 56));
            r3 = MemoryInline::ReadResolved32(guest_range_10, 60u, (r4 + 60));
        }
    }
    r4 = (r4 + 64);
    if (!MemoryInline::WriteResolvedPair32(guest_range_11, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_11, 60u, (r6 + 60), r3);
        MemoryInline::WriteResolved32(guest_range_11, 56u, (r6 + 56), r0);
    }
    r6 = (r6 + 64);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800E9BB4;
    }
}

loc_800E9C40:
{
    r0 = (r7 & 7);
}

loc_800E9C48:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(7))) {
        goto loc_800E9D0C;
    }
}

loc_800E9C4C:
{
    r3 = 0x80280000u;
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r3 = (r3 + -25840);
    r3_addr_5 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800E9D0Cu:
        goto loc_800E9D0C;
        break;
    case 0x800E9CF4u:
        goto loc_800E9CF4;
        break;
    case 0x800E9CDCu:
        goto loc_800E9CDC;
        break;
    case 0x800E9CC4u:
        goto loc_800E9CC4;
        break;
    case 0x800E9CACu:
        goto loc_800E9CAC;
        break;
    case 0x800E9C94u:
        goto loc_800E9C94;
        break;
    case 0x800E9C7Cu:
        goto loc_800E9C7C;
        break;
    case 0x800E9C64u:
        goto loc_800E9C64;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_800E9C64:
{
    r0 = MemoryInline::FlatRead32(r4);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    MemoryInline::FlatWrite32((r6 + 4), r3);
    MemoryInline::FlatWrite32(r6, r0);
    r6 = (r6 + 8);
}

loc_800E9C7C:
{
    r0 = MemoryInline::FlatRead32(r4);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    MemoryInline::FlatWrite32((r6 + 4), r3);
    MemoryInline::FlatWrite32(r6, r0);
    r6 = (r6 + 8);
}

loc_800E9C94:
{
    r0 = MemoryInline::FlatRead32(r4);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    MemoryInline::FlatWrite32((r6 + 4), r3);
    MemoryInline::FlatWrite32(r6, r0);
    r6 = (r6 + 8);
}

loc_800E9CAC:
{
    r0 = MemoryInline::FlatRead32(r4);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    MemoryInline::FlatWrite32((r6 + 4), r3);
    MemoryInline::FlatWrite32(r6, r0);
    r6 = (r6 + 8);
}

loc_800E9CC4:
{
    r0 = MemoryInline::FlatRead32(r4);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    MemoryInline::FlatWrite32((r6 + 4), r3);
    MemoryInline::FlatWrite32(r6, r0);
    r6 = (r6 + 8);
}

loc_800E9CDC:
{
    r0 = MemoryInline::FlatRead32(r4);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    MemoryInline::FlatWrite32((r6 + 4), r3);
    MemoryInline::FlatWrite32(r6, r0);
    r6 = (r6 + 8);
}

loc_800E9CF4:
{
    r0 = MemoryInline::FlatRead32(r4);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    MemoryInline::FlatWrite32((r6 + 4), r3);
    MemoryInline::FlatWrite32(r6, r0);
    r6 = (r6 + 8);
}

loc_800E9D0C:
{
    r0 = (r5 & 7);
    r5 = r6;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
}

loc_800E9D18:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_return;
    }
}

loc_800E9D1C:
{
    r3 = 0x80280000u;
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & -4);
    r3 = (r3 + -25872);
    r3_addr_7 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_7);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800E9D9Cu:
        goto loc_800E9D9C;
        break;
    case 0x800E9D94u:
        goto loc_800E9D94;
        break;
    case 0x800E9D84u:
        goto loc_800E9D84;
        break;
    case 0x800E9D74u:
        goto loc_800E9D74;
        break;
    case 0x800E9D64u:
        goto loc_800E9D64;
        break;
    case 0x800E9D54u:
        goto loc_800E9D54;
        break;
    case 0x800E9D44u:
        goto loc_800E9D44;
        break;
    case 0x800E9D34u:
        goto loc_800E9D34;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_800E9D34:
{
    r0 = MemoryInline::FlatRead8(r4);
    r5 = (r6 + 1);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
}

loc_800E9D44:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
}

loc_800E9D54:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
}

loc_800E9D64:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
}

loc_800E9D74:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
}

loc_800E9D84:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
}

loc_800E9D94:
{
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
}

loc_800E9D9C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800E941C func_800E941C preserves=true fpr_mask=0x00000000
