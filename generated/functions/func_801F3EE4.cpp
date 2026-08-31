#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F3EE4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_10 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mdest_6 = 0;
    uint32_t r0_mdest_7 = 0;
    uint32_t r0_mdest_8 = 0;
    uint32_t r0_mdest_9 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_10 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_mrot_6 = 0;
    uint32_t r0_mrot_7 = 0;
    uint32_t r0_mrot_8 = 0;
    uint32_t r0_mrot_9 = 0;
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
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801F3EE4;

loc_801F3EE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F3EE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F3EF4;
    }
}

loc_801F3EEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801F3EF0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F3EFC;
    }
}

loc_801F3EF4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_801F3EFC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801F3F00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F3F14;
    }
}

loc_801F3F04:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r5 + 4), r0);
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_801F3F28;
}

loc_801F3F14:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F3F1C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F3F24;
    }
}

loc_801F3F20:
{
    MemoryInline::FlatWrite32((r5 + 4), r4);
}

loc_801F3F24:
{
    MemoryInline::FlatWrite32(r5, r4);
}

loc_801F3F28:
{
    r0 = 4;
    r3 = (r3 + 446);
    ctr = r0;
}

loc_801F3F34:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 16u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r3);
    guest_range_1 = MemoryInline::ResolveRangeHost((r5 + 8), 0, 20u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r5 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 4));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r5 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r5 + 12), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 3));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 2));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0_mrot_2 = (r0_rot_2 & 65280);
    r0_mdest_2 = (r0 & -65281);
    r0 = (r0_mdest_2 | r0_mrot_2);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r6 = (r6_rot_2 & 768);
    r4 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 63);
    r4 = (r6 + r4);
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r5 + 10), static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r5 + 13), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 6));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0_mrot_3 = (r0_rot_3 & 65280);
    r0_mdest_3 = (r0 & -65281);
    r0 = (r0_mdest_3 | r0_mrot_3);
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r5 + 16), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 7));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 6));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0_mrot_4 = (r0_rot_4 & 65280);
    r0_mdest_4 = (r0 & -65281);
    r0 = (r0_mdest_4 | r0_mrot_4);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r6 = (r6_rot_3 & 768);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(8) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 63);
    r4 = (r6 + r4);
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r5 + 14), static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r5 + 17), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r3 + 9));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r3 + 8));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0_mrot_5 = (r0_rot_5 & 65280);
    r0_mdest_5 = (r0 & -65281);
    r0 = (r0_mdest_5 | r0_mrot_5);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r3 + 10));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r3 + 11));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r0_mrot_6 = (r0_rot_6 & 16711680);
    r0_mdest_6 = (r0 & -16711681);
    r0 = (r0_mdest_6 | r0_mrot_6);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r0_mrot_7 = (r0_rot_7 & -16777216);
    r0_mdest_7 = (r0 & 16777215);
    r0 = (r0_mdest_7 | r0_mrot_7);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r5 + 20), r0);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r3 + 14));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r3 + 13));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r3 + 12));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 15u, (r3 + 15));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0_mrot_8 = (r0_rot_8 & 65280);
    r0_mdest_8 = (r0 & -65281);
    r0 = (r0_mdest_8 | r0_mrot_8);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r0_mrot_9 = (r0_rot_9 & 16711680);
    r0_mdest_9 = (r0 & -16711681);
    r0 = (r0_mdest_9 | r0_mrot_9);
    r3 = (r3 + 16);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r0_mrot_10 = (r0_rot_10 & -16777216);
    r0_mdest_10 = (r0 & 16777215);
    r0 = (r0_mdest_10 | r0_mrot_10);
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r5 + 24), r0);
    r5 = (r5 + 20);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801F3F34;
    }
}

loc_801F3FF0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801F3EE4 func_801F3EE4 preserves=true fpr_mask=0x00000000
