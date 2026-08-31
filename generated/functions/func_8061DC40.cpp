#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8061DC40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8061DC40;

loc_8061DC40:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8061DC54:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(85))) {
        goto loc_8061DC60;
    }
}

loc_8061DC58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(87));
}

loc_8061DC5C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8061DC84;
    }
}

loc_8061DC60:
{
}

loc_8061DC64:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(91))) {
        goto loc_8061DC70;
    }
}

loc_8061DC68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(93));
}

loc_8061DC6C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8061DC84;
    }
}

loc_8061DC70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(131));
}

loc_8061DC74:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8061DC94;
    }
}

loc_8061DC78:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(132));
}

loc_8061DC7C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8061DC8C;
    }
}

loc_8061DC80:
{
    goto loc_8061DC94;
}

loc_8061DC84:
{
    r3 = 141;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8061DC8C:
{
    r3 = 142;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8061DC94:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000001 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8061DC40 func_8061DC40 preserves=true fpr_mask=0x00000000
