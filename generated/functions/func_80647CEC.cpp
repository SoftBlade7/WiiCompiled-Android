#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80647CEC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80647CEC;

loc_80647CEC:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(130));
}

loc_80647D00:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80647DB0;
    }
}

loc_80647D04:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80647D48;
    }
}

loc_80647D08:
{
}

loc_80647D0C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(94))) {
        goto loc_80647D30;
    }
}

loc_80647D10:
{
}

loc_80647D14:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(88))) {
        goto loc_80647D24;
    }
}

loc_80647D18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(85));
}

loc_80647D1C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80647D80;
    }
}

loc_80647D20:
{
    goto loc_80647DB0;
}

loc_80647D24:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(91));
}

loc_80647D28:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80647D88;
    }
}

loc_80647D2C:
{
    goto loc_80647DB0;
}

loc_80647D30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(127));
}

loc_80647D34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80647DB0;
    }
}

loc_80647D38:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80647DA0;
    }
}

loc_80647D3C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(125));
}

loc_80647D40:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80647D98;
    }
}

loc_80647D44:
{
    goto loc_80647DB0;
}

loc_80647D48:
{
}

loc_80647D4C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(161))) {
        goto loc_80647D68;
    }
}

loc_80647D50:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(135));
}

loc_80647D54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80647DA8;
    }
}

loc_80647D58:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80647DB0;
    }
}

loc_80647D5C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(133));
}

loc_80647D60:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80647DB0;
    }
}

loc_80647D64:
{
    goto loc_80647D90;
}

loc_80647D68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(165));
}

loc_80647D6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80647D90;
    }
}

loc_80647D70:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80647DB0;
    }
}

loc_80647D74:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(163));
}

loc_80647D78:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80647DB0;
    }
}

loc_80647D7C:
{
    goto loc_80647D98;
}

loc_80647D80:
{
    r3 = 2033;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80647D88:
{
    r3 = 2034;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80647D90:
{
    r3 = 5050;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80647D98:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80647DA0:
{
    r3 = 4003;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80647DA8:
{
    r3 = 6605;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80647DB0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000001 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80647CEC func_80647CEC preserves=true fpr_mask=0x00000000
