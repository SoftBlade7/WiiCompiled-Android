#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8000D160(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8000D160;

loc_8000D160:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r3 = (r1 + 52);
    r0 = (r0 + r4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r0) >> 1);
    ctx->lr = 0x8000D174u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000CF2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = (r1 + 52);
    r3 = r31;
    r5 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000CBB8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r30 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000D188:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000D280;
    }
}

loc_8000D18C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 42u, true, false);
    r3 = MemoryInline::ReadResolved16(guest_range_0, 0u, r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8000D194:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r31 + 2));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 42u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 2u, (r1 + 10), r0);
        MemoryInline::WriteResolved16(guest_range_1, 0u, (r1 + 8), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 4u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r31 + 4));
            r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r31 + 6));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 6u, (r1 + 14), r0);
        MemoryInline::WriteResolved16(guest_range_1, 4u, (r1 + 12), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r31 + 8));
            r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r31 + 10));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 10u, (r1 + 18), r0);
        MemoryInline::WriteResolved16(guest_range_1, 8u, (r1 + 16), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 12u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r31 + 12));
            r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r31 + 14));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 14u, (r1 + 22), r0);
        MemoryInline::WriteResolved16(guest_range_1, 12u, (r1 + 20), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r31 + 16));
            r0 = MemoryInline::ReadResolved16(guest_range_0, 18u, (r31 + 18));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 18u, (r1 + 26), r0);
        MemoryInline::WriteResolved16(guest_range_1, 16u, (r1 + 24), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 20u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved16(guest_range_0, 20u, (r31 + 20));
            r0 = MemoryInline::ReadResolved16(guest_range_0, 22u, (r31 + 22));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 22u, (r1 + 30), r0);
        MemoryInline::WriteResolved16(guest_range_1, 20u, (r1 + 28), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved16(guest_range_0, 24u, (r31 + 24));
            r0 = MemoryInline::ReadResolved16(guest_range_0, 26u, (r31 + 26));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 26u, (r1 + 34), r0);
        MemoryInline::WriteResolved16(guest_range_1, 24u, (r1 + 32), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 28u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved16(guest_range_0, 28u, (r31 + 28));
            r0 = MemoryInline::ReadResolved16(guest_range_0, 30u, (r31 + 30));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 30u, (r1 + 38), r0);
        MemoryInline::WriteResolved16(guest_range_1, 28u, (r1 + 36), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved16(guest_range_0, 32u, (r31 + 32));
            r0 = MemoryInline::ReadResolved16(guest_range_0, 34u, (r31 + 34));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 34u, (r1 + 42), r0);
        MemoryInline::WriteResolved16(guest_range_1, 32u, (r1 + 40), r3);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 36u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved16(guest_range_0, 36u, (r31 + 36));
            r0 = MemoryInline::ReadResolved16(guest_range_0, 38u, (r31 + 38));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 36u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 38u, (r1 + 46), r0);
        MemoryInline::WriteResolved16(guest_range_1, 36u, (r1 + 44), r3);
    }
    r0 = MemoryInline::ReadResolved16(guest_range_0, 40u, (r31 + 40));
    MemoryInline::WriteResolved16(guest_range_1, 40u, (r1 + 48), static_cast<uint16_t>(r0));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8000D258;
    }
}

loc_8000D23C:
{
    r4 = 0x80240000u;
    r3 = (r1 + 52);
    r4 = (r4 + 24640);
    r5 = 0;
    r4 = (r4 + 161);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000CE40u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    goto loc_8000D270;
}

loc_8000D258:
{
    r4 = 0x80240000u;
    r3 = (r1 + 52);
    r4 = (r4 + 24640);
    r5 = -1;
    r4 = (r4 + 157);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000CE40u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_8000D270:
{
    r3 = r31;
    r4 = (r1 + 8);
    r5 = (r1 + 52);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000CBB8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8000D280:
{
    r0 = MemoryInline::FlatRead32((r1 + 116));
    r31 = MemoryInline::FlatRead32((r1 + 108));
    r30 = MemoryInline::FlatRead32((r1 + 104));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0001FFB gpr_write=0xE0001FFB gpr_return=0x00000018 fpr_read=0x00003FFE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8000D160 func_8000D160 preserves=true fpr_mask=0x00000000
