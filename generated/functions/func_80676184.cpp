#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80676184(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80676184;

loc_80676184:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80676188:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806761A8;
    }
}

loc_8067618C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_80676190:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806761B0;
    }
}

loc_80676194:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_80676198:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806761B8;
    }
}

loc_8067619C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(3));
}

loc_806761A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806761C0;
    }
}

loc_806761A4:
{
    // inline leaf 0x806761C8 (2 guest instruction(s))
    r3 = 1;
    // end of inlined leaf 0x806761C8
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806761A8:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806761B0:
{
    r3 = 2;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806761B8:
{
    r3 = 3;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806761C0:
{
    r3 = 4;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000010 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80676184 func_80676184 preserves=true fpr_mask=0x00000000
