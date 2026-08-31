#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8011A504(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8011A504;

loc_8011A504:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 128), 0, 82u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 156));
    r5 = 6;
    r4 = 4;
    r0 = 1;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8011A518:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 136), 0, 80u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 140), r5);
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 136), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 76u, (r3 + 212), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011A540;
    }
}

loc_8011A528:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r3 + 172));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8011A530:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011A540;
    }
}

loc_8011A534:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r3 + 188));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8011A53C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011A548;
    }
}

loc_8011A540:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_8011A548:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 132));
}

loc_8011A550:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8011A578;
    }
}

loc_8011A554:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 128));
}

loc_8011A55C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8011A578;
    }
}

loc_8011A560:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 148));
}

loc_8011A568:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_8011A578;
    }
}

loc_8011A56C:
{
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 140), r0);
    goto loc_8011A6F4;
}

loc_8011A578:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 148));
}

loc_8011A580:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_8011A590;
    }
}

loc_8011A584:
{
    r0 = 1;
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 140), r0);
    goto loc_8011A6F4;
}

loc_8011A590:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 128));
}

loc_8011A598:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8011A5D8;
    }
}

loc_8011A59C:
{
}

loc_8011A5A0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8011A5D8;
    }
}

loc_8011A5A4:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 48u, (r3 + 176));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 64u, (r3 + 192));
    r0 = (r0 - r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r0) >> 31);
    r0 = (r4 ^ r0);
    r0 = (r0 - r4);
}

loc_8011A5C0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(1))) {
        goto loc_8011A5D8;
    }
}

loc_8011A5C4:
{
    r4 = 5;
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 140), r4);
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 136), r0);
    }
    goto loc_8011A6F4;
}

loc_8011A5D8:
{
}

loc_8011A5DC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8011A61C;
    }
}

loc_8011A5E0:
{
}

loc_8011A5E4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8011A61C;
    }
}

loc_8011A5E8:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 48u, (r3 + 176));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 64u, (r3 + 192));
    r0 = (r0 - r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r0) >> 31);
    r0 = (r4 ^ r0);
    r0 = (r0 - r4);
}

loc_8011A604:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(1))) {
        goto loc_8011A61C;
    }
}

loc_8011A608:
{
    r4 = 5;
    r0 = 2;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 140), r4);
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 136), r0);
    }
    goto loc_8011A6F4;
}

loc_8011A61C:
{
}

loc_8011A620:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8011A660;
    }
}

loc_8011A624:
{
}

loc_8011A628:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8011A660;
    }
}

loc_8011A62C:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 48u, (r3 + 176));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 64u, (r3 + 192));
    r0 = (r0 - r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r0) >> 31);
    r0 = (r4 ^ r0);
    r0 = (r0 - r4);
}

loc_8011A648:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(1))) {
        goto loc_8011A660;
    }
}

loc_8011A64C:
{
    r4 = 5;
    r0 = 3;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 140), r4);
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 136), r0);
    }
    goto loc_8011A6F4;
}

loc_8011A660:
{
}

loc_8011A664:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8011A6A4;
    }
}

loc_8011A668:
{
}

loc_8011A66C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8011A6A4;
    }
}

loc_8011A670:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 48u, (r3 + 176));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 64u, (r3 + 192));
    r0 = (r0 - r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r0) >> 31);
    r0 = (r4 ^ r0);
    r0 = (r0 - r4);
}

loc_8011A68C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(1))) {
        goto loc_8011A6A4;
    }
}

loc_8011A690:
{
    r4 = 5;
    r0 = 1;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 140), r4);
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 136), r0);
    }
    goto loc_8011A6F4;
}

loc_8011A6A4:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8011A6A8:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_8011A6B8;
    }
}

loc_8011A6AC:
{
    r0 = 4;
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 140), r0);
    goto loc_8011A6F4;
}

loc_8011A6B8:
{
}

loc_8011A6BC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8011A6D0;
    }
}

loc_8011A6C0:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_8011A6D0;
    }
}

loc_8011A6C4:
{
    r0 = 3;
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 140), r0);
    goto loc_8011A6F4;
}

loc_8011A6D0:
{
}

loc_8011A6D4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8011A6EC;
    }
}

loc_8011A6D8:
{
}

loc_8011A6DC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8011A6EC;
    }
}

loc_8011A6E0:
{
    r0 = 2;
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 140), r0);
    goto loc_8011A6F4;
}

loc_8011A6EC:
{
    r0 = 6;
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 140), r0);
}

loc_8011A6F4:
{
    r6 = MemoryInline::ReadResolved16(guest_range_0, 24u, (r3 + 152));
    r5 = MemoryInline::ReadResolved16(guest_range_0, 32u, (r3 + 160));
}

loc_8011A700:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r6))) {
        goto loc_8011A730;
    }
}

loc_8011A704:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 48u, (r3 + 176));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 40u, (r3 + 168));
}

loc_8011A710:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8011A730;
    }
}

loc_8011A714:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 64u, (r3 + 192));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 56u, (r3 + 184));
}

loc_8011A720:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8011A730;
    }
}

loc_8011A724:
{
    r0 = 1;
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 144), r0);
    goto loc_8011A79C;
}

loc_8011A730:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 48u, (r3 + 176));
}

loc_8011A738:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r4))) {
        goto loc_8011A754;
    }
}

loc_8011A73C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 64u, (r3 + 192));
}

loc_8011A744:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8011A754;
    }
}

loc_8011A748:
{
    r0 = 2;
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 144), r0);
    goto loc_8011A79C;
}

loc_8011A754:
{
}

loc_8011A758:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r6))) {
        goto loc_8011A778;
    }
}

loc_8011A75C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 64u, (r3 + 192));
    r0 = (r0 - r4);
}

loc_8011A768:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8011A778;
    }
}

loc_8011A76C:
{
    r0 = 4;
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 144), r0);
    goto loc_8011A79C;
}

loc_8011A778:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 64u, (r3 + 192));
    r0 = (r0 - r4);
}

loc_8011A784:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8011A794;
    }
}

loc_8011A788:
{
    r0 = 3;
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 144), r0);
    goto loc_8011A79C;
}

loc_8011A794:
{
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 144), r0);
}

loc_8011A79C:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 80u, (r3 + 208));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8011A7A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011A7BC;
    }
}

loc_8011A7A8:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 32u, (r3 + 160));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_8011A7B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011A7BC;
    }
}

loc_8011A7B4:
{
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 76u, (r3 + 212), r0);
}

loc_8011A7BC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8011A504 func_8011A504 preserves=true fpr_mask=0x00000000
