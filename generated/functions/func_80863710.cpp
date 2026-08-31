#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80863710(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80863710;

loc_80863710:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80863714:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80863718:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80863720:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80863738;
    }
}

loc_80863724:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(11));
}

loc_80863728:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80863744;
    }
}

loc_8086372C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(9));
}

loc_80863730:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80863750;
    }
}

loc_80863734:
{
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

loc_80863738:
{
    r0 = 5;
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

loc_80863744:
{
    r0 = 6;
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

loc_80863750:
{
    r0 = 6;
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80863710 func_80863710 preserves=true fpr_mask=0x00000000
