#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008A5A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8008A5A0;

loc_8008A5A0:
{
}

loc_8008A5A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8008A5AC;
    }
}

loc_8008A5A8:
{
    r3 = (r3 + -2147483648);
}

loc_8008A5AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(3));
}

loc_8008A5B0:
{
    r0 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008A5CC;
    }
}

loc_8008A5B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(2));
}

loc_8008A5BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008A5EC;
    }
}

loc_8008A5C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(1));
}

loc_8008A5C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008A5F4;
    }
}

loc_8008A5C8:
{
    goto loc_8008A5FC;
}

loc_8008A5CC:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r4 = (r4 - r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(28));
    r0 = (r0_rot_3 & 268435455);
    r3 = (r0 * 14);
    r0 = (r4 & 15);
    r3 = (r0 + r3);
    r0 = (r3 + -2);
    goto loc_8008A5FC;
}

loc_8008A5EC:
{
    r0 = (r4 - r3);
    goto loc_8008A5FC;
}

loc_8008A5F4:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r4 - r0);
}

loc_8008A5FC:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008A5A0 func_8008A5A0 preserves=true fpr_mask=0x00000000
