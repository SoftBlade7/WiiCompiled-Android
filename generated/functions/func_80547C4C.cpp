#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80547C4C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
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

    goto loc_80547C4C;

loc_80547C4C:
{
    r7 = 65536;
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 4), 0, 16u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r4 + 10));
    r7 = (r7 + -29504);
    r6 = (r6 * r7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80547C60:
{
    r3 = (r3 + r6);
    r7 = (r3 + 8);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80547D04;
    }
}

loc_80547C6C:
{
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r8 = (r8_rot_0 & 524280);
    r3 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r4 + 4));
    r6 = (r7 + r8);
    r5 = 99;
    r0 = MemoryInline::FlatRead32((r6 + 22064));
}

loc_80547C84:
{
    r0 = (r0 | -2147483648);
    MemoryInline::FlatWrite32((r6 + 22064), r0);
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(99))) {
        goto loc_80547C94;
    }
}

loc_80547C90:
{
    r5 = r3;
}

loc_80547C94:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r4 + 4));
    r3 = MemoryInline::FlatRead32((r6 + 22064));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r3_mrot_0 = (r3_rot_0 & 2130706432);
    r3_mdest_0 = (r3 & -2130706433);
    r3 = (r3_mdest_0 | r3_mrot_0);
}

loc_80547CA4:
{
    MemoryInline::FlatWrite32((r6 + 22064), r3);
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_80547CB4;
    }
}

loc_80547CAC:
{
    r5 = 59;
    goto loc_80547CB8;
}

loc_80547CB4:
{
    r5 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 6));
}

loc_80547CB8:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r4 + 4));
    r3 = MemoryInline::FlatRead32((r6 + 22064));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(17));
    r3_mrot_1 = (r3_rot_1 & 16646144);
    r3_mdest_1 = (r3 & -16646145);
    r3 = (r3_mdest_1 | r3_mrot_1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(99));
}

loc_80547CC8:
{
    MemoryInline::FlatWrite32((r6 + 22064), r3);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80547CD8;
    }
}

loc_80547CD0:
{
    r0 = 999;
    goto loc_80547CDC;
}

loc_80547CD8:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r4 + 8));
}

loc_80547CDC:
{
    r6 = (r7 + r8);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 12));
    r5 = MemoryInline::FlatRead32((r6 + 22064));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r5_mrot_0 = (r5_rot_0 & 130944);
    r5_mdest_0 = (r5 & -130945);
    r5 = (r5_mdest_0 | r5_mrot_0);
    MemoryInline::FlatWrite32((r6 + 22064), r5);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r4 + 16));
    MemoryInline::FlatWrite32((r6 + 22068), r3);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r5_mrot_1 = (r5_rot_1 & 112);
    r5_mdest_1 = (r5 & -113);
    r5 = (r5_mdest_1 | r5_mrot_1);
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

loc_80547D04:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & 524280);
    r3 = (r7 + r0);
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
// RECOMP_REGISTRATION base 0x80547C4C func_80547C4C preserves=true fpr_mask=0x00000000
