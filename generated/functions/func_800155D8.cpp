#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800155D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
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

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800155D8;

loc_800155D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800155DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800155EC;
    }
}

loc_800155E0:
{
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(10));
    r0 = (r0_rot_1 & 7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800155E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800155F4;
    }
}

loc_800155EC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_800155F4:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(12));
    r0 = (r0_rot_2 & 3);
}

loc_800155F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80015610;
    }
}

loc_800155FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80015600:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001563C;
    }
}

loc_80015604:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80015608:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80015644;
    }
}

loc_8001560C:
{
    goto loc_80015648;
}

loc_80015610:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80015614:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80015628;
    }
}

loc_80015618:
{
    r0 = 2;
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
    r5_mrot_1 = (r5_rot_1 & 3145728);
    r5_mdest_1 = (r5 & -3145729);
    r5 = (r5_mdest_1 | r5_mrot_1);
    MemoryInline::FlatWrite32((r3 + 4), r5);
    goto loc_80015648;
}

loc_80015628:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80015648;
    }
}

loc_8001562C:
{
    r0 = 1;
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
    r5_mrot_2 = (r5_rot_2 & 3145728);
    r5_mdest_2 = (r5 & -3145729);
    r5 = (r5_mdest_2 | r5_mrot_2);
    MemoryInline::FlatWrite32((r3 + 4), r5);
    goto loc_80015648;
}

loc_8001563C:
{
    r4 = 1;
    goto loc_80015648;
}

loc_80015644:
{
    r4 = -1;
}

loc_80015648:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800155D8 func_800155D8 preserves=true fpr_mask=0x00000000
