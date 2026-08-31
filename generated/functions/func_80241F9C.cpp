#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80241F9C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80241F9C;

loc_80241F9C:
{
    r0 = (r4 & 255);
    r3 = 0;
}

loc_80241FA8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(129))) {
        goto loc_80241FB4;
    }
}

loc_80241FAC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(159));
}

loc_80241FB0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80241FC4;
    }
}

loc_80241FB4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(224));
}

loc_80241FB8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_80241FBC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(252));
}

loc_80241FC0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_return;
    }
}

loc_80241FC4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000011 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80241F9C func_80241F9C preserves=true fpr_mask=0x00000000
