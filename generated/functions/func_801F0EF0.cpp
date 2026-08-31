#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F0EF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801F0EF0;

loc_801F0EF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F0EF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F0F00;
    }
}

loc_801F0EF8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801F0EFC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F0F08;
    }
}

loc_801F0F00:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_801F0F08:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 488), 0, 8u, true, false);
    r5 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 489));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 488));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0_mrot_0 = (r0_rot_0 & 65280);
    r0_mdest_0 = (r0 & -65281);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 490));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 491));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r0_mrot_1 = (r0_rot_1 & 16711680);
    r0_mdest_1 = (r0 & -16711681);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r0_mrot_2 = (r0_rot_2 & -16777216);
    r0_mdest_2 = (r0 & 16777215);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::FlatWrite32(r4, r0);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 494));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 493));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 492));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 495));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0_mrot_3 = (r0_rot_3 & 65280);
    r0_mdest_3 = (r0 & -65281);
    r0 = (r0_mdest_3 | r0_mrot_3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r0_mrot_4 = (r0_rot_4 & 16711680);
    r0_mdest_4 = (r0 & -16711681);
    r0 = (r0_mdest_4 | r0_mrot_4);
    r3 = 0;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r0_mrot_5 = (r0_rot_5 & -16777216);
    r0_mdest_5 = (r0 & 16777215);
    r0 = (r0_mdest_5 | r0_mrot_5);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x000000E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F0EF0 func_801F0EF0 preserves=true fpr_mask=0x00000000
