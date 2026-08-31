#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8054B1D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lhzux_8054B234_loc_0 = 0;
    uint32_t addr_lhzux_8054B278_loc_0 = 0;
    uint32_t addr_lhzux_8054B2BC_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mdest_2 = 0;
    uint32_t r4_mdest_3 = 0;
    uint32_t r4_mdest_4 = 0;
    uint32_t r4_mdest_5 = 0;
    uint32_t r4_mdest_6 = 0;
    uint32_t r4_mdest_7 = 0;
    uint32_t r4_mdest_8 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_2 = 0;
    uint32_t r4_mrot_3 = 0;
    uint32_t r4_mrot_4 = 0;
    uint32_t r4_mrot_5 = 0;
    uint32_t r4_mrot_6 = 0;
    uint32_t r4_mrot_7 = 0;
    uint32_t r4_mrot_8 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8054B1D4;

loc_8054B1D4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 13u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8054B1DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8054B1E0:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r3 + 6));
    r0 = 3;
    r6 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r3 + 10));
    r10 = -1;
    r5 = (r4 + -1);
    r11 = 0;
    ctr = r0;
}

loc_8054B1FC:
{
    r0 = (r5 - r6);
}

loc_8054B204:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_8054B2E0;
    }
}

loc_8054B208:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 4));
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r9 = (r9_rot_2 & -4);
    r8 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r3 + 8));
    r7 = (r4 + -1);
    r0 = (r7 - r8);
}

loc_8054B220:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_8054B258;
    }
}

loc_8054B224:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r0 = (r0 + r9);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r4 = MemoryInline::FlatRead32((r4 + 12));
    addr_lhzux_8054B234_loc_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhzux_8054B234_loc_0);
    r4 = addr_lhzux_8054B234_loc_0;
    r4 = MemoryInline::FlatRead16((r4 + 32));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r4_mrot_2 = (r4_rot_2 & 16711680);
    r4_mdest_2 = (r4 & -16711681);
    r4 = (r4_mdest_2 | r4_mrot_2);
}

loc_8054B244:
{
    if ((static_cast<uint32_t>(r10) <= static_cast<uint32_t>(r4))) {
        goto loc_8054B24C;
    }
}

loc_8054B248:
{
    r10 = r4;
}

loc_8054B24C:
{
}

loc_8054B250:
{
    if ((static_cast<uint32_t>(r11) >= static_cast<uint32_t>(r4))) {
        goto loc_8054B258;
    }
}

loc_8054B254:
{
    r11 = r4;
}

loc_8054B258:
{
    r7 = (r7 + 1);
    r0 = (r7 - r8);
}

loc_8054B264:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_8054B29C;
    }
}

loc_8054B268:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r0 = (r0 + r9);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r4 = MemoryInline::FlatRead32((r4 + 12));
    addr_lhzux_8054B278_loc_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhzux_8054B278_loc_0);
    r4 = addr_lhzux_8054B278_loc_0;
    r4 = MemoryInline::FlatRead16((r4 + 32));
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r4_mrot_4 = (r4_rot_4 & 16711680);
    r4_mdest_4 = (r4 & -16711681);
    r4 = (r4_mdest_4 | r4_mrot_4);
}

loc_8054B288:
{
    if ((static_cast<uint32_t>(r10) <= static_cast<uint32_t>(r4))) {
        goto loc_8054B290;
    }
}

loc_8054B28C:
{
    r10 = r4;
}

loc_8054B290:
{
}

loc_8054B294:
{
    if ((static_cast<uint32_t>(r11) >= static_cast<uint32_t>(r4))) {
        goto loc_8054B29C;
    }
}

loc_8054B298:
{
    r11 = r4;
}

loc_8054B29C:
{
    r7 = (r7 + 1);
    r0 = (r7 - r8);
}

loc_8054B2A8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_8054B2E0;
    }
}

loc_8054B2AC:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r0 = (r0 + r9);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r4 = MemoryInline::FlatRead32((r4 + 12));
    addr_lhzux_8054B2BC_loc_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhzux_8054B2BC_loc_0);
    r4 = addr_lhzux_8054B2BC_loc_0;
    r4 = MemoryInline::FlatRead16((r4 + 32));
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r4_mrot_6 = (r4_rot_6 & 16711680);
    r4_mdest_6 = (r4 & -16711681);
    r4 = (r4_mdest_6 | r4_mrot_6);
}

loc_8054B2CC:
{
    if ((static_cast<uint32_t>(r10) <= static_cast<uint32_t>(r4))) {
        goto loc_8054B2D4;
    }
}

loc_8054B2D0:
{
    r10 = r4;
}

loc_8054B2D4:
{
}

loc_8054B2D8:
{
    if ((static_cast<uint32_t>(r11) >= static_cast<uint32_t>(r4))) {
        goto loc_8054B2E0;
    }
}

loc_8054B2DC:
{
    r11 = r4;
}

loc_8054B2E0:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8054B1FC;
    }
}

loc_8054B2E8:
{
    r0 = (r10 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_8054B2F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8054B2F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r11), static_cast<int32_t>(0));
}

loc_8054B2F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8054B2FC:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 16), r10);
    MemoryInline::FlatWrite32((r3 + 20), r11);
    MemoryInline::FlatWrite8((r3 + 13), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
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
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000FF1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8054B1D4 func_8054B1D4 preserves=true fpr_mask=0x00000000
