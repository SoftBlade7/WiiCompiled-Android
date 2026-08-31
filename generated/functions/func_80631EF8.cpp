#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80631EF8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80631EF8;

loc_80631EF8:
{
}

loc_80631EFC:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(72))) {
        goto loc_80631F64;
    }
}

loc_80631F00:
{
}

loc_80631F04:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(53))) {
        goto loc_80631F34;
    }
}

loc_80631F08:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(14));
}

loc_80631F0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80631FD8;
    }
}

loc_80631F10:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631F28;
    }
}

loc_80631F14:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(13));
}

loc_80631F18:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631FD0;
    }
}

loc_80631F1C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80631F20:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631FC8;
    }
}

loc_80631F24:
{
    goto loc_80632078;
}

loc_80631F28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(16));
}

loc_80631F2C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631FE8;
    }
}

loc_80631F30:
{
    goto loc_80631FE0;
}

loc_80631F34:
{
}

loc_80631F38:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(61))) {
        goto loc_80631F50;
    }
}

loc_80631F3C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(59));
}

loc_80631F40:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80632000;
    }
}

loc_80631F44:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(57));
}

loc_80631F48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631FF8;
    }
}

loc_80631F4C:
{
    goto loc_80631FF0;
}

loc_80631F50:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(69));
}

loc_80631F54:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80632018;
    }
}

loc_80631F58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(63));
}

loc_80631F5C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80632010;
    }
}

loc_80631F60:
{
    goto loc_80632008;
}

loc_80631F64:
{
}

loc_80631F68:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(140))) {
        goto loc_80631F9C;
    }
}

loc_80631F6C:
{
}

loc_80631F70:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(122))) {
        goto loc_80631F88;
    }
}

loc_80631F74:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(104));
}

loc_80631F78:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80632030;
    }
}

loc_80631F7C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(85));
}

loc_80631F80:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80632028;
    }
}

loc_80631F84:
{
    goto loc_80632020;
}

loc_80631F88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(127));
}

loc_80631F8C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80632048;
    }
}

loc_80631F90:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(125));
}

loc_80631F94:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80632040;
    }
}

loc_80631F98:
{
    goto loc_80632038;
}

loc_80631F9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(148));
}

loc_80631FA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80632060;
    }
}

loc_80631FA4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631FB4;
    }
}

loc_80631FA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(144));
}

loc_80631FAC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80632058;
    }
}

loc_80631FB0:
{
    goto loc_80632050;
}

loc_80631FB4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(179));
}

loc_80631FB8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80632078;
    }
}

loc_80631FBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(173));
}

loc_80631FC0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80632070;
    }
}

loc_80631FC4:
{
    goto loc_80632068;
}

loc_80631FC8:
{
    r3 = -1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631FD0:
{
    r3 = 8;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631FD8:
{
    r3 = -1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631FE0:
{
    r3 = 9;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631FE8:
{
    r3 = -1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631FF0:
{
    r3 = 8;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631FF8:
{
    r3 = 9;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80632000:
{
    r3 = 10;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80632008:
{
    r3 = 11;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80632010:
{
    r3 = 5;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80632018:
{
    r3 = 6;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80632020:
{
    r3 = 7;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80632028:
{
    r3 = 3;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80632030:
{
    r3 = -1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80632038:
{
    r3 = 2;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80632040:
{
    r3 = 4;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80632048:
{
    r3 = 3;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80632050:
{
    r3 = 6;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80632058:
{
    r3 = 12;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80632060:
{
    r3 = -1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80632068:
{
    r3 = -1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80632070:
{
    r3 = -1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80632078:
{
    r3 = -1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80631EF8_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_80631EF8;

loc_80631EF8:
{
}

loc_80631EFC:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(72))) {
        goto loc_80631F64;
    }
}

loc_80631F00:
{
}

loc_80631F04:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(53))) {
        goto loc_80631F34;
    }
}

loc_80631F08:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(14));
}

loc_80631F0C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80631FD8;
    }
}

loc_80631F10:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631F28;
    }
}

loc_80631F14:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(13));
}

loc_80631F18:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631FD0;
    }
}

loc_80631F1C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(0));
}

loc_80631F20:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631FC8;
    }
}

loc_80631F24:
{
    goto loc_80632078;
}

loc_80631F28:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(16));
}

loc_80631F2C:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631FE8;
    }
}

loc_80631F30:
{
    goto loc_80631FE0;
}

loc_80631F34:
{
}

loc_80631F38:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(61))) {
        goto loc_80631F50;
    }
}

loc_80631F3C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(59));
}

loc_80631F40:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80632000;
    }
}

loc_80631F44:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(57));
}

loc_80631F48:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631FF8;
    }
}

loc_80631F4C:
{
    goto loc_80631FF0;
}

loc_80631F50:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(69));
}

loc_80631F54:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80632018;
    }
}

loc_80631F58:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(63));
}

loc_80631F5C:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80632010;
    }
}

loc_80631F60:
{
    goto loc_80632008;
}

loc_80631F64:
{
}

loc_80631F68:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(140))) {
        goto loc_80631F9C;
    }
}

loc_80631F6C:
{
}

loc_80631F70:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(122))) {
        goto loc_80631F88;
    }
}

loc_80631F74:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(104));
}

loc_80631F78:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80632030;
    }
}

loc_80631F7C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(85));
}

loc_80631F80:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80632028;
    }
}

loc_80631F84:
{
    goto loc_80632020;
}

loc_80631F88:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(127));
}

loc_80631F8C:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80632048;
    }
}

loc_80631F90:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(125));
}

loc_80631F94:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80632040;
    }
}

loc_80631F98:
{
    goto loc_80632038;
}

loc_80631F9C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(148));
}

loc_80631FA0:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80632060;
    }
}

loc_80631FA4:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631FB4;
    }
}

loc_80631FA8:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(144));
}

loc_80631FAC:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80632058;
    }
}

loc_80631FB0:
{
    goto loc_80632050;
}

loc_80631FB4:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(179));
}

loc_80631FB8:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80632078;
    }
}

loc_80631FBC:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(173));
}

loc_80631FC0:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80632070;
    }
}

loc_80631FC4:
{
    goto loc_80632068;
}

loc_80631FC8:
{
    cached_r3 = -1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631FD0:
{
    cached_r3 = 8;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631FD8:
{
    cached_r3 = -1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631FE0:
{
    cached_r3 = 9;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631FE8:
{
    cached_r3 = -1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631FF0:
{
    cached_r3 = 8;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631FF8:
{
    cached_r3 = 9;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80632000:
{
    cached_r3 = 10;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80632008:
{
    cached_r3 = 11;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80632010:
{
    cached_r3 = 5;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80632018:
{
    cached_r3 = 6;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80632020:
{
    cached_r3 = 7;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80632028:
{
    cached_r3 = 3;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80632030:
{
    cached_r3 = -1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80632038:
{
    cached_r3 = 2;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80632040:
{
    cached_r3 = 4;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80632048:
{
    cached_r3 = 3;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80632050:
{
    cached_r3 = 6;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80632058:
{
    cached_r3 = 12;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80632060:
{
    cached_r3 = -1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80632068:
{
    cached_r3 = -1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80632070:
{
    cached_r3 = -1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80632078:
{
    cached_r3 = -1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80631EF8 symbol=func_80631EF8_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80631EF8 func_80631EF8 preserves=true fpr_mask=0x00000000

