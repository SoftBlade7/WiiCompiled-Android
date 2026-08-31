#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801B3E6C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801B3E6C;

loc_801B3E6C:
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
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
}

loc_801B3E94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B3EA0;
    }
}

loc_801B3E98:
{
    r3 = 10;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801B3EA0:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25084));
    r4 = MemoryInline::FlatRead32((r5 + 1692));
    r3 = MemoryInline::FlatRead8(r4);
    r0 = MemoryInline::FlatRead8((r4 + 1));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_0 = (r0_rot_0 & 65280);
    r0_mdest_0 = (r0 & -65281);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWrite16((r5 + 1684), static_cast<uint16_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25084));
    r3 = MemoryInline::FlatRead32((r4 + 1692));
    r0 = (r3 + 2);
    MemoryInline::FlatWrite32((r4 + 1692), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25084));
    r4 = MemoryInline::FlatRead32((r5 + 1692));
    r3 = MemoryInline::FlatRead8(r4);
    r0 = MemoryInline::FlatRead8((r4 + 1));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_1 = (r0_rot_1 & 65280);
    r0_mdest_1 = (r0 & -65281);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryInline::FlatWrite16((r5 + 1682), static_cast<uint16_t>(r0));
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

loc_801B3F08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B3F14;
    }
}

loc_801B3F0C:
{
    r3 = 12;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801B3F14:
{
    r0 = 3;
    r7 = 0;
    ctr = r0;
}

loc_801B3F20:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25084));
    r0 = (r7 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801B3F28:
{
    r3 = MemoryInline::FlatRead32((r4 + 1692));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 1692), r0);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25084));
    r3 = MemoryInline::FlatRead32((r4 + 1692));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 1692), r0);
    r3 = MemoryInline::FlatRead8(r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B3F54;
    }
}

loc_801B3F4C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(34));
}

loc_801B3F50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801B3F64;
    }
}

loc_801B3F54:
{
    r0 = (r7 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801B3F58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B3F6C;
    }
}

loc_801B3F5C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
}

loc_801B3F60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B3F6C;
    }
}

loc_801B3F64:
{
    r3 = 19;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_801B3F6C:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -25084));
    r0 = (r7 & 255);
    r0 = (r0 * 6);
    r7 = (r7 + 1);
    r5 = MemoryInline::FlatRead32((r6 + 1692));
    r4 = MemoryInline::FlatRead8(r5);
    r3 = (r6 + r0);
    r0 = (r5 + 1);
    MemoryInline::FlatWrite8((r3 + 1664), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32((r6 + 1692), r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801B3F20;
    }
}

loc_801B3F98:
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002099 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801B3E6C func_801B3E6C preserves=true fpr_mask=0x00000000
