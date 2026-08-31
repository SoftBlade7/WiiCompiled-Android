#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801B3FA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addze_src_0 = 0;
    uint32_t r4_ca_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801B3FA0;

loc_801B3FA0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -25084), 0, 4u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25084));
    r3 = MemoryInline::FlatRead32((r4 + 1692));
    r0 = (r3 + 2);
    MemoryInline::FlatWrite32((r4 + 1692), r0);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25084));
    r3 = MemoryInline::FlatRead32((r4 + 1692));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 1692), r0);
    r0 = MemoryInline::FlatRead8(r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_801B3FC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B3FD4;
    }
}

loc_801B3FCC:
{
    r3 = 12;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_801B3FD4:
{
    r0 = 3;
    r8 = 0;
    r3 = 1;
    ctr = r0;
}

loc_801B3FE4:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25084));
    r0 = (r8 & 255);
    r6 = (r0 * 6);
    r4 = MemoryInline::FlatRead32((r5 + 1692));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r5 + 1692), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25084));
    r4 = MemoryInline::FlatRead32((r5 + 1692));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r5 + 1692), r0);
    r4 = MemoryInline::FlatRead8(r4);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25084));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r5 = (static_cast<int32_t>(r4) >> 4);
    r7 = (r4 & 15);
    r4 = (r0 + r6);
    MemoryInline::FlatWrite8((r4 + 1665), static_cast<uint8_t>(r5));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r5));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25084));
    r4 = (r4 + r6);
    MemoryInline::FlatWrite8((r4 + 1666), static_cast<uint8_t>(r7));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25084));
    r4 = MemoryInline::FlatRead8((r5 + 1704));
    r0 = (r4 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B404C;
    }
}

loc_801B4044:
{
    r3 = 15;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_801B404C:
{
    r0 = (r7 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r4 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B4064;
    }
}

loc_801B405C:
{
    r3 = 15;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_801B4064:
{
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801B3FE4;
    }
}

loc_801B406C:
{
    r4 = MemoryInline::FlatRead32((r5 + 1692));
    r0 = 0;
    r3 = 0;
    r4 = (r4 + 3);
    MemoryInline::FlatWrite32((r5 + 1692), r4);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25084));
    r4 = MemoryInline::FlatRead16((r5 + 1682));
    r4 = (r4 + 15);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 4);
    r4_addze_src_0 = r4;
    r4_ca_0 = (xer >> 29) & 1u;
    r4 = (r4_addze_src_0 + r4_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_addze_src_0)) + static_cast<uint64_t>(static_cast<uint32_t>(0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWrite16((r5 + 1686), static_cast<uint16_t>(r4));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25084));
    MemoryInline::FlatWrite16((r4 + 1668), static_cast<uint16_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25084));
    MemoryInline::FlatWrite16((r4 + 1674), static_cast<uint16_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25084));
    MemoryInline::FlatWrite16((r4 + 1680), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801B3FA0 func_801B3FA0 preserves=true fpr_mask=0x00000000
