#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80548A40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mdest_2 = 0;
    uint32_t r5_mdest_3 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_mrot_2 = 0;
    uint32_t r5_mrot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r8_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80548A40;

loc_80548A40:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 4), 0, 16u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r4 + 10));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80548A48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80548AE4;
    }
}

loc_80548A4C:
{
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r8 = (r8_rot_0 & 524280);
    r5 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r4 + 4));
    r7 = (r3 + r8);
    r6 = 99;
    r0 = MemoryInline::FlatRead32((r7 + 22064));
}

loc_80548A64:
{
    r0 = (r0 | -2147483648);
    MemoryInline::FlatWrite32((r7 + 22064), r0);
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(99))) {
        goto loc_80548A74;
    }
}

loc_80548A70:
{
    r6 = r5;
}

loc_80548A74:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r4 + 4));
    r5 = MemoryInline::FlatRead32((r7 + 22064));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(24));
    r5_mrot_0 = (r5_rot_0 & 2130706432);
    r5_mdest_0 = (r5 & -2130706433);
    r5 = (r5_mdest_0 | r5_mrot_0);
}

loc_80548A84:
{
    MemoryInline::FlatWrite32((r7 + 22064), r5);
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_80548A94;
    }
}

loc_80548A8C:
{
    r6 = 59;
    goto loc_80548A98;
}

loc_80548A94:
{
    r6 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 6));
}

loc_80548A98:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r4 + 4));
    r5 = MemoryInline::FlatRead32((r7 + 22064));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(17));
    r5_mrot_1 = (r5_rot_1 & 16646144);
    r5_mdest_1 = (r5 & -16646145);
    r5 = (r5_mdest_1 | r5_mrot_1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(99));
}

loc_80548AA8:
{
    MemoryInline::FlatWrite32((r7 + 22064), r5);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80548AB8;
    }
}

loc_80548AB0:
{
    r0 = 999;
    goto loc_80548ABC;
}

loc_80548AB8:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r4 + 8));
}

loc_80548ABC:
{
    r6 = (r3 + r8);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 12));
    r5 = MemoryInline::FlatRead32((r6 + 22064));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r5_mrot_2 = (r5_rot_2 & 130944);
    r5_mdest_2 = (r5 & -130945);
    r5 = (r5_mdest_2 | r5_mrot_2);
    MemoryInline::FlatWrite32((r6 + 22064), r5);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r4 + 16));
    MemoryInline::FlatWrite32((r6 + 22068), r3);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r5_mrot_3 = (r5_rot_3 & 112);
    r5_mdest_3 = (r5 & -113);
    r5 = (r5_mdest_3 | r5_mrot_3);
    MemoryInline::FlatWrite32((r6 + 22064), r5);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

loc_80548AE4:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & 524280);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 22064));
    r0 = (r0 & 2147483647);
    MemoryInline::FlatWrite32((r3 + 22064), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80548A40 func_80548A40 preserves=true fpr_mask=0x00000000
