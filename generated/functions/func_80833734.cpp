#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80833734(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80833734;

loc_80833734:
{
}

loc_80833738:
{
    r0 = 0;
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(32))) {
        goto loc_8083374C;
    }
}

loc_80833740:
{
}

loc_80833744:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(42))) {
        goto loc_8083374C;
    }
}

loc_80833748:
{
    r0 = 1;
}

loc_8083374C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80833750:
{
    r0 = 9999;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8083375C;
    }
}

loc_80833758:
{
    r0 = (r3 + 9368);
}

loc_8083375C:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80833734 func_80833734 preserves=true fpr_mask=0x00000000
