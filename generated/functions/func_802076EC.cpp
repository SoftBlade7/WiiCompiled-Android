#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802076EC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_802076EC;

loc_802076EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_802076F0:
{
    r0 = (r3 & 255);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80207734;
    }
}

loc_802076F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80207760;
    }
}

loc_802076FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_80207700:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80207708;
    }
}

loc_80207704:
{
    goto loc_80207760;
}

loc_80207708:
{
}

loc_8020770C:
{
    r3 = 0;
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(129))) {
        goto loc_8020771C;
    }
}

loc_80207714:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(159));
}

loc_80207718:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8020772C;
    }
}

loc_8020771C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(224));
}

loc_80207720:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_80207724:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(252));
}

loc_80207728:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_return;
    }
}

loc_8020772C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80207734:
{
}

loc_80207738:
{
    r3 = 0;
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(64))) {
        goto loc_80207748;
    }
}

loc_80207740:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(126));
}

loc_80207744:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80207758;
    }
}

loc_80207748:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(128));
}

loc_8020774C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_80207750:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(252));
}

loc_80207754:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_return;
    }
}

loc_80207758:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80207760:
{
    r3 = 0;
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

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802076EC func_802076EC preserves=true fpr_mask=0x00000000
