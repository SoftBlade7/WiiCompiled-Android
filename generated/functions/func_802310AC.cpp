#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802310AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_802310AC;

loc_802310AC:
{
    r0 = (r3 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_802310B0:
{
    r4 = 2;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802310C0;
    }
}

loc_802310B8:
{
    r4 = (r4 | 12);
    goto loc_802310D8;
}

loc_802310C0:
{
    r0 = (r3 & 2);
}

loc_802310C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802310CC;
    }
}

loc_802310C8:
{
    r4 = (r4 | 4);
}

loc_802310CC:
{
    r0 = (r3 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_802310D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802310D8;
    }
}

loc_802310D4:
{
    r4 = (r4 | 8);
}

loc_802310D8:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802310AC func_802310AC preserves=true fpr_mask=0x00000000
