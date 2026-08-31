#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80157D94(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80157D94;

loc_80157D94:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80157DA0:
{
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    r8 = (r1 + 8);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80157EEC;
    }
}

loc_80157DB0:
{
}

loc_80157DB4:
{
    r7 = (r4 + 65536);
    r7 = (r7 + -8);
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(8))) {
        goto loc_80157EAC;
    }
}

loc_80157DC0:
{
    r9 = (r7 & 65535);
    r0 = 25;
    r7 = (r9 + 7);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(29));
    r7 = (r7_rot_1 & 536870911);
    ctr = r7;
}

loc_80157DD8:
{
    if ((static_cast<uint32_t>(r9) <= static_cast<uint32_t>(0))) {
        goto loc_80157EAC;
    }
}

loc_80157DDC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r8, 0, 24u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r8, static_cast<uint8_t>(r0));
    r6 = (r6 + 8);
    guest_range_1 = MemoryInline::ResolveRangeHost(r5, 0, 16u, true, false);
    r7 = MemoryInline::ReadResolved16(guest_range_1, 0u, r5);
    r7 = (static_cast<int32_t>(r7) >> 8);
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r8 + 1), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 0u, r5);
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r8 + 2), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r8 + 3), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r5 + 2));
    r7 = (static_cast<int32_t>(r7) >> 8);
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r8 + 4), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r5 + 2));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r8 + 5), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r8 + 6), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r5 + 4));
    r7 = (static_cast<int32_t>(r7) >> 8);
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r8 + 7), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r5 + 4));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r8 + 8), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r8 + 9), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r5 + 6));
    r7 = (static_cast<int32_t>(r7) >> 8);
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r8 + 10), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r5 + 6));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r8 + 11), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r8 + 12), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r5 + 8));
    r7 = (static_cast<int32_t>(r7) >> 8);
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r8 + 13), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r5 + 8));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r8 + 14), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r8 + 15), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r5 + 10));
    r7 = (static_cast<int32_t>(r7) >> 8);
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r8 + 16), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r5 + 10));
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r8 + 17), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r8 + 18), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r5 + 12));
    r7 = (static_cast<int32_t>(r7) >> 8);
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r8 + 19), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r5 + 12));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r8 + 20), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r8 + 21), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r5 + 14));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r7 = (static_cast<int32_t>(r7) >> 8);
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r8 + 22), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r5 + 14));
    r5 = (r5 + 16);
    MemoryInline::WriteResolved8(guest_range_0, 23u, (r8 + 23), static_cast<uint8_t>(r7));
    r8 = (r8 + 24);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80157DDC;
    }
}

loc_80157EAC:
{
    r7 = (r6 & 65535);
    r9 = 25;
    r0 = (r4 - r7);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r4));
}

loc_80157EC0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80157EEC;
    }
}

loc_80157EC4:
{
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r9));
    r6 = (r6 + 1);
    r0 = MemoryInline::FlatRead16(r5);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8((r8 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16(r5);
    r5 = (r5 + 2);
    MemoryInline::FlatWrite8((r8 + 2), static_cast<uint8_t>(r0));
    r8 = (r8 + 3);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80157EC4;
    }
}

loc_80157EEC:
{
    r7 = (r1 + 8);
    r4 = 1;
    r6 = (r8 - r7);
    r5 = 6;
    ctx->lr = 0x80157F00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80157924u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80157D94 func_80157D94 preserves=true fpr_mask=0x00000000
