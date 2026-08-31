#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806756A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806756A4;

loc_806756A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_806756A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806756B8;
    }
}

loc_806756AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_806756B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806756C0;
    }
}

loc_806756B4:
{
    // inline leaf 0x806756C8 (2 guest instruction(s))
    r3 = 0;
    // end of inlined leaf 0x806756C8
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806756B8:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806756C0:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806756A4 func_806756A4 preserves=true fpr_mask=0x00000000
