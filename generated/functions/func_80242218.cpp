#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80242218(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_10 = 0;
    uint32_t r6_addr_11 = 0;
    uint32_t r6_addr_12 = 0;
    uint32_t r6_addr_13 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r6_addr_6 = 0;
    uint32_t r6_addr_7 = 0;
    uint32_t r6_addr_8 = 0;
    uint32_t r6_addr_9 = 0;
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

    goto loc_80242218;

loc_80242218:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(0));
}

loc_8024221C:
{
    r7 = 0;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_80242224:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80242228:
{
    ctr = r0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80242300;
    }
}

loc_80242230:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 8), 0, 28u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 32));
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 8));
    r0 = (r7 + r0);
    r7 = (r7 + 1);
    r6_addr_2 = (r6 + r0);
    r0 = MemoryInline::FlatRead8(r6_addr_2);
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r4, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 32));
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 8));
    r0 = (r7 + r0);
    r7 = (r7 + 1);
    r6_addr_3 = (r6 + r0);
    r0 = MemoryInline::FlatRead8(r6_addr_3);
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r4 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 32));
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 8));
    r0 = (r7 + r0);
    r7 = (r7 + 1);
    r6_addr_4 = (r6 + r0);
    r0 = MemoryInline::FlatRead8(r6_addr_4);
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r4 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 32));
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 8));
    r0 = (r7 + r0);
    r7 = (r7 + 1);
    r6_addr_5 = (r6 + r0);
    r0 = MemoryInline::FlatRead8(r6_addr_5);
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r4 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 32));
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 8));
    r0 = (r7 + r0);
    r7 = (r7 + 1);
    r6_addr_6 = (r6 + r0);
    r0 = MemoryInline::FlatRead8(r6_addr_6);
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r4 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 32));
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 8));
    r0 = (r7 + r0);
    r7 = (r7 + 1);
    r6_addr_7 = (r6 + r0);
    r0 = MemoryInline::FlatRead8(r6_addr_7);
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r4 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 32));
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 8));
    r0 = (r7 + r0);
    r7 = (r7 + 1);
    r6_addr_8 = (r6 + r0);
    r0 = MemoryInline::FlatRead8(r6_addr_8);
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r4 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 32));
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 8));
    r0 = (r7 + r0);
    r7 = (r7 + 1);
    r6_addr_9 = (r6 + r0);
    r0 = MemoryInline::FlatRead8(r6_addr_9);
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r4 + 7), static_cast<uint8_t>(r0));
    r4 = (r4 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80242230;
    }
}

loc_802422F8:
{
    r5 = (r5 & 7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_802422FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80242300:
{
    ctr = r5;
}

loc_80242304:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r6 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r7 + r0);
    r7 = (r7 + 1);
    r6_addr_12 = (r6 + r0);
    r0 = MemoryInline::FlatRead8(r6_addr_12);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80242304;
    }
}

loc_80242324:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80242218 func_80242218 preserves=true fpr_mask=0x00000000
