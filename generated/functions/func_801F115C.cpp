#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F115C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mdest_2 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_mrot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r7_mdest_0 = 0;
    uint32_t r7_mdest_1 = 0;
    uint32_t r7_mdest_2 = 0;
    uint32_t r7_mrot_0 = 0;
    uint32_t r7_mrot_1 = 0;
    uint32_t r7_mrot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r9_mdest_0 = 0;
    uint32_t r9_mdest_1 = 0;
    uint32_t r9_mdest_2 = 0;
    uint32_t r9_mrot_0 = 0;
    uint32_t r9_mrot_1 = 0;
    uint32_t r9_mrot_2 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801F115C;

loc_801F115C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F1160:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F116C;
    }
}

loc_801F1164:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801F1168:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F1174;
    }
}

loc_801F116C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_801F1174:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 512u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 0u, r3);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r5_mrot_0 = (r5_rot_0 & 65280);
    r5_mdest_0 = (r5 & -65281);
    r5 = (r5_mdest_0 | r5_mrot_0);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 2));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 3));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r5_mrot_1 = (r5_rot_1 & 16711680);
    r5_mdest_1 = (r5 & -16711681);
    r5 = (r5_mdest_1 | r5_mrot_1);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 485u, (r3 + 485));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r5_mrot_2 = (r5_rot_2 & -16777216);
    r5_mdest_2 = (r5 & 16777215);
    r5 = (r5_mdest_2 | r5_mrot_2);
    r9 = MemoryInline::ReadResolved8(guest_range_0, 484u, (r3 + 484));
    r0 = (r5 + -1096876032);
    r5 = MemoryInline::ReadResolved8(guest_range_0, 509u, (r3 + 509));
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r9_mrot_0 = (r9_rot_0 & 65280);
    r9_mdest_0 = (r9 & -65281);
    r9 = (r9_mdest_0 | r9_mrot_0);
    r8 = MemoryInline::ReadResolved8(guest_range_0, 486u, (r3 + 486));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 508u, (r3 + 508));
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r7_mrot_0 = (r7_rot_0 & 65280);
    r7_mdest_0 = (r7 & -65281);
    r7 = (r7_mdest_0 | r7_mrot_0);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 510u, (r3 + 510));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(21074));
}

loc_801F11B8:
{
    r5 = MemoryInline::ReadResolved8(guest_range_0, 487u, (r3 + 487));
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(16));
    r9_mrot_1 = (r9_rot_1 & 16711680);
    r9_mdest_1 = (r9 & -16711681);
    r9 = (r9_mdest_1 | r9_mrot_1);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 511u, (r3 + 511));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r7_mrot_1 = (r7_rot_1 & 16711680);
    r7_mdest_1 = (r7 & -16711681);
    r7 = (r7_mdest_1 | r7_mrot_1);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r9_mrot_2 = (r9_rot_2 & -16777216);
    r9_mdest_2 = (r9 & 16777215);
    r9 = (r9_mdest_2 | r9_mrot_2);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r7_mrot_2 = (r7_rot_2 & -16777216);
    r7_mdest_2 = (r7 & 16777215);
    r7 = (r7_mdest_2 | r7_mrot_2);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F11F8;
    }
}

loc_801F11D4:
{
    r0 = (r9 + -1631649792);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(29298));
}

loc_801F11DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F11F8;
    }
}

loc_801F11E0:
{
    r0 = (r7 + 1437270016);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(0));
}

loc_801F11E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F11F8;
    }
}

loc_801F11EC:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_801F1200;
}

loc_801F11F8:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r4, r0);
}

loc_801F1200:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003D9 gpr_write=0x000003E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F115C func_801F115C preserves=true fpr_mask=0x00000000
