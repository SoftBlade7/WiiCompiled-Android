#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E6A0C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801E6A0C;

loc_801E6A0C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801E6A18:
{
    r10 = r4;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801E6A34;
    }
}

loc_801E6A30:
{
    r10 = 0;
}

loc_801E6A34:
{
    r3 = -1240793088;
    r4 = 0x88890000u;
    r0 = (r3 + 24759);
    r5 = (r1 + 11);
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r10))) >> 32));
    r3 = (r1 + 8);
    r0 = (r4 + -30583);
    r4 = (r1 + 10);
    r6 = (r6 + r10);
    r8 = (static_cast<int32_t>(r6) >> 10);
    r6 = (static_cast<int32_t>(r6) >> 10);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r7 = (r7_rot_0 & 1);
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_0 & 1);
    r6 = (r6 + r7);
    r7 = (r6 * 1440);
    r31 = (r8 + r9);
    r6 = r31;
    r10 = (r10 - r7);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r10))) >> 32));
    r0 = (r0 + r10);
    r8 = (static_cast<int32_t>(r0) >> 5);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 5);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r7 = (r7_rot_1 & 1);
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_1 & 1);
    r0 = (r0 + r7);
    r0 = (r0 * 60);
    r7 = (r8 + r9);
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r7));
    r0 = (r10 - r0);
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r0));
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
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801E6F2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 7u, true, false);
    r3 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r1 + 8));
    r4 = 0x80250000u;
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost(r30, 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r30 + 20), r3);
    r4 = (r4 + 12504);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r1 + 10));
    r3 = (r3 + -1);
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r30 + 16), r3);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r1 + 11));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r30 + 12), r3);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r1 + 12));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r30 + 8), r3);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r1 + 14));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r30 + 4), r3);
        MemoryInline::WriteResolved32(guest_range_1, 0u, r30, r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r30 + 32), r0);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r30 + 36), r0);
    }
    r5 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r1 + 10));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r1 + 11));
    r5 = (r5 + -1);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_0 & -2);
    r4_addr_0 = (r4 + r5);
    r4 = MemoryInline::FlatRead16(r4_addr_0);
    r3 = (r3 + r4);
    r3 = (r3 + -1);
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r30 + 28), r3);
    r5 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r1 + 8));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(30));
    r3 = (r3_rot_0 & -1073741824);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    r3 = (r3 - r4);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -1);
    r3 = (r3 + r4);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801E6B54;
    }
}

loc_801E6B30:
{
    r3 = 1374420992;
    r3 = (r3 + -31457);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r3) >> 5);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r3 = (r3 + r4);
    r3 = (r3 * 100);
    r3 = (r5 - r3);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801E6B78;
    }
}

loc_801E6B54:
{
    r3 = 1374420992;
    r3 = (r3 + -31457);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(7) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r3) >> 7);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_3 & 1);
    r3 = (r3 + r4);
    r3 = (r3 * 400);
    r3 = (r5 - r3);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801E6B7C;
    }
}

loc_801E6B78:
{
    r0 = 1;
}

loc_801E6B7C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801E6B80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E6B9C;
    }
}

loc_801E6B84:
{
    r0 = MemoryInline::FlatRead8((r1 + 10));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_801E6B8C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801E6B9C;
    }
}

loc_801E6B90:
{
    r3 = MemoryInline::FlatRead32((r30 + 28));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r30 + 28), r0);
}

loc_801E6B9C:
{
    r3 = 0x92490000u;
    r5 = (r31 + 1);
    r0 = (r3 + 9363);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    r3 = 0;
    r0 = (r0 + r5);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 2);
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_6 & 1);
    r0 = (r0 + r4);
    r0 = (r0 * 7);
    r0 = (r5 - r0);
    MemoryInline::FlatWrite32((r30 + 24), r0);
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
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
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000181B gpr_write=0xC0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801E6A0C func_801E6A0C preserves=true fpr_mask=0x00000000
