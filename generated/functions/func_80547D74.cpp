#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80547D74(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80547D74;

loc_80547D74:
{
    r7 = 65536;
    r0 = MemoryInline::FlatRead8((r4 + 10));
    r7 = (r7 + -29504);
    r6 = (r6 * r7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80547D88:
{
    r7 = (r3 + r6);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80547E0C;
    }
}

loc_80547D90:
{
    r3 = MemoryInline::FlatRead16((r4 + 4));
    r6 = 99;
    r0 = MemoryInline::FlatRead32((r7 + 452));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(25));
    r0_mrot_0 = (r0_rot_0 & 2113929216);
    r0_mdest_0 = (r0 & -2113929217);
    r0 = (r0_mdest_0 | r0_mrot_0);
}

loc_80547DA4:
{
    MemoryInline::FlatWrite32((r7 + 452), r0);
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(99))) {
        goto loc_80547DB0;
    }
}

loc_80547DAC:
{
    r6 = r3;
}

loc_80547DB0:
{
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r3 = MemoryInline::FlatRead32((r7 + 452));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(18));
    r3_mrot_0 = (r3_rot_0 & 33292288);
    r3_mdest_0 = (r3 & -33292289);
    r3 = (r3_mdest_0 | r3_mrot_0);
}

loc_80547DC0:
{
    MemoryInline::FlatWrite32((r7 + 452), r3);
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_80547DD0;
    }
}

loc_80547DC8:
{
    r5 = 59;
    goto loc_80547DD4;
}

loc_80547DD0:
{
    r5 = MemoryInline::FlatRead8((r4 + 6));
}

loc_80547DD4:
{
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r3 = MemoryInline::FlatRead32((r7 + 452));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(11));
    r3_mrot_1 = (r3_rot_1 & 260096);
    r3_mdest_1 = (r3 & -260097);
    r3 = (r3_mdest_1 | r3_mrot_1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(99));
}

loc_80547DE4:
{
    MemoryInline::FlatWrite32((r7 + 452), r3);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80547DF4;
    }
}

loc_80547DEC:
{
    r3 = 999;
    goto loc_80547DF8;
}

loc_80547DF4:
{
    r3 = MemoryInline::FlatRead16((r4 + 8));
}

loc_80547DF8:
{
    r0 = MemoryInline::FlatRead32((r7 + 452));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0_mrot_1 = (r0_rot_1 & 2046);
    r0_mdest_1 = (r0 & -2047);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r0 = (r0 | -2147483648);
    MemoryInline::FlatWrite32((r7 + 452), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_80547E0C:
{
    r0 = MemoryInline::FlatRead32((r7 + 452));
    r0 = (r0 & 1);
    MemoryInline::FlatWrite32((r7 + 452), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80547D74 func_80547D74 preserves=true fpr_mask=0x00000000
