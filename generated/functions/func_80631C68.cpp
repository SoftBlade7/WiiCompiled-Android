#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80631C68(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80631C68;

loc_80631C68:
{
}

loc_80631C6C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(104))) {
        goto loc_80631D1C;
    }
}

loc_80631C70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(46));
}

loc_80631C74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80631E10;
    }
}

loc_80631C78:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631CCC;
    }
}

loc_80631C7C:
{
}

loc_80631C80:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(27))) {
        goto loc_80631CA8;
    }
}

loc_80631C84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(15));
}

loc_80631C88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80631DD0;
    }
}

loc_80631C8C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631C9C;
    }
}

loc_80631C90:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80631C94:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631DC8;
    }
}

loc_80631C98:
{
    goto loc_80631EF0;
}

loc_80631C9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(25));
}

loc_80631CA0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631DE0;
    }
}

loc_80631CA4:
{
    goto loc_80631DD8;
}

loc_80631CA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(31));
}

loc_80631CAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80631DF8;
    }
}

loc_80631CB0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631CC0;
    }
}

loc_80631CB4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(30));
}

loc_80631CB8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631DF0;
    }
}

loc_80631CBC:
{
    goto loc_80631DE8;
}

loc_80631CC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(40));
}

loc_80631CC4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631E08;
    }
}

loc_80631CC8:
{
    goto loc_80631E00;
}

loc_80631CCC:
{
}

loc_80631CD0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(63))) {
        goto loc_80631CFC;
    }
}

loc_80631CD4:
{
}

loc_80631CD8:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(57))) {
        goto loc_80631CF0;
    }
}

loc_80631CDC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(53));
}

loc_80631CE0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631E28;
    }
}

loc_80631CE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(50));
}

loc_80631CE8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631E20;
    }
}

loc_80631CEC:
{
    goto loc_80631E18;
}

loc_80631CF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(59));
}

loc_80631CF4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631E38;
    }
}

loc_80631CF8:
{
    goto loc_80631E30;
}

loc_80631CFC:
{
}

loc_80631D00:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(72))) {
        goto loc_80631D10;
    }
}

loc_80631D04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(69));
}

loc_80631D08:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631E48;
    }
}

loc_80631D0C:
{
    goto loc_80631E40;
}

loc_80631D10:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(85));
}

loc_80631D14:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631E58;
    }
}

loc_80631D18:
{
    goto loc_80631E50;
}

loc_80631D1C:
{
}

loc_80631D20:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(144))) {
        goto loc_80631D7C;
    }
}

loc_80631D24:
{
}

loc_80631D28:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(120))) {
        goto loc_80631D54;
    }
}

loc_80631D2C:
{
}

loc_80631D30:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(110))) {
        goto loc_80631D48;
    }
}

loc_80631D34:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(108));
}

loc_80631D38:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631E70;
    }
}

loc_80631D3C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(106));
}

loc_80631D40:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631E68;
    }
}

loc_80631D44:
{
    goto loc_80631E60;
}

loc_80631D48:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(112));
}

loc_80631D4C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631E80;
    }
}

loc_80631D50:
{
    goto loc_80631E78;
}

loc_80631D54:
{
}

loc_80631D58:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(127))) {
        goto loc_80631D70;
    }
}

loc_80631D5C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(125));
}

loc_80631D60:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631E98;
    }
}

loc_80631D64:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(122));
}

loc_80631D68:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631E90;
    }
}

loc_80631D6C:
{
    goto loc_80631E88;
}

loc_80631D70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(140));
}

loc_80631D74:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631EA8;
    }
}

loc_80631D78:
{
    goto loc_80631EA0;
}

loc_80631D7C:
{
}

loc_80631D80:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(163))) {
        goto loc_80631DA8;
    }
}

loc_80631D84:
{
}

loc_80631D88:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(154))) {
        goto loc_80631D9C;
    }
}

loc_80631D8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(148));
}

loc_80631D90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80631EB8;
    }
}

loc_80631D94:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631EC0;
    }
}

loc_80631D98:
{
    goto loc_80631EB0;
}

loc_80631D9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(161));
}

loc_80631DA0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631ED0;
    }
}

loc_80631DA4:
{
    goto loc_80631EC8;
}

loc_80631DA8:
{
}

loc_80631DAC:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(173))) {
        goto loc_80631DBC;
    }
}

loc_80631DB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(170));
}

loc_80631DB4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631EE0;
    }
}

loc_80631DB8:
{
    goto loc_80631ED8;
}

loc_80631DBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(179));
}

loc_80631DC0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631EF0;
    }
}

loc_80631DC4:
{
    goto loc_80631EE8;
}

loc_80631DC8:
{
    r3 = -1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631DD0:
{
    r3 = 206;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631DD8:
{
    r3 = -1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631DE0:
{
    r3 = 86;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631DE8:
{
    r3 = 87;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631DF0:
{
    r3 = 89;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631DF8:
{
    r3 = 90;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631E00:
{
    r3 = 89;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631E08:
{
    r3 = 90;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631E10:
{
    r3 = 89;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631E18:
{
    r3 = 90;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631E20:
{
    r3 = 207;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631E28:
{
    r3 = -1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631E30:
{
    r3 = 206;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631E38:
{
    r3 = -1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631E40:
{
    r3 = 84;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631E48:
{
    r3 = 83;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631E50:
{
    r3 = 85;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631E58:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631E60:
{
    r3 = 91;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631E68:
{
    r3 = -1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631E70:
{
    r3 = 91;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631E78:
{
    r3 = -1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631E80:
{
    r3 = 91;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631E88:
{
    r3 = -1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631E90:
{
    r3 = 2;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631E98:
{
    r3 = 3;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631EA0:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631EA8:
{
    r3 = 83;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631EB0:
{
    r3 = 115;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631EB8:
{
    r3 = -1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631EC0:
{
    r3 = -1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631EC8:
{
    r3 = 2;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631ED0:
{
    r3 = 3;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631ED8:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631EE0:
{
    r3 = 4;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631EE8:
{
    r3 = -1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631EF0:
{
    r3 = -1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80631C68_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_80631C68;

loc_80631C68:
{
}

loc_80631C6C:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(104))) {
        goto loc_80631D1C;
    }
}

loc_80631C70:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(46));
}

loc_80631C74:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80631E10;
    }
}

loc_80631C78:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631CCC;
    }
}

loc_80631C7C:
{
}

loc_80631C80:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(27))) {
        goto loc_80631CA8;
    }
}

loc_80631C84:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(15));
}

loc_80631C88:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80631DD0;
    }
}

loc_80631C8C:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631C9C;
    }
}

loc_80631C90:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(0));
}

loc_80631C94:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631DC8;
    }
}

loc_80631C98:
{
    goto loc_80631EF0;
}

loc_80631C9C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(25));
}

loc_80631CA0:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631DE0;
    }
}

loc_80631CA4:
{
    goto loc_80631DD8;
}

loc_80631CA8:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(31));
}

loc_80631CAC:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80631DF8;
    }
}

loc_80631CB0:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631CC0;
    }
}

loc_80631CB4:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(30));
}

loc_80631CB8:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631DF0;
    }
}

loc_80631CBC:
{
    goto loc_80631DE8;
}

loc_80631CC0:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(40));
}

loc_80631CC4:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631E08;
    }
}

loc_80631CC8:
{
    goto loc_80631E00;
}

loc_80631CCC:
{
}

loc_80631CD0:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(63))) {
        goto loc_80631CFC;
    }
}

loc_80631CD4:
{
}

loc_80631CD8:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(57))) {
        goto loc_80631CF0;
    }
}

loc_80631CDC:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(53));
}

loc_80631CE0:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631E28;
    }
}

loc_80631CE4:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(50));
}

loc_80631CE8:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631E20;
    }
}

loc_80631CEC:
{
    goto loc_80631E18;
}

loc_80631CF0:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(59));
}

loc_80631CF4:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631E38;
    }
}

loc_80631CF8:
{
    goto loc_80631E30;
}

loc_80631CFC:
{
}

loc_80631D00:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(72))) {
        goto loc_80631D10;
    }
}

loc_80631D04:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(69));
}

loc_80631D08:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631E48;
    }
}

loc_80631D0C:
{
    goto loc_80631E40;
}

loc_80631D10:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(85));
}

loc_80631D14:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631E58;
    }
}

loc_80631D18:
{
    goto loc_80631E50;
}

loc_80631D1C:
{
}

loc_80631D20:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(144))) {
        goto loc_80631D7C;
    }
}

loc_80631D24:
{
}

loc_80631D28:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(120))) {
        goto loc_80631D54;
    }
}

loc_80631D2C:
{
}

loc_80631D30:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(110))) {
        goto loc_80631D48;
    }
}

loc_80631D34:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(108));
}

loc_80631D38:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631E70;
    }
}

loc_80631D3C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(106));
}

loc_80631D40:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631E68;
    }
}

loc_80631D44:
{
    goto loc_80631E60;
}

loc_80631D48:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(112));
}

loc_80631D4C:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631E80;
    }
}

loc_80631D50:
{
    goto loc_80631E78;
}

loc_80631D54:
{
}

loc_80631D58:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(127))) {
        goto loc_80631D70;
    }
}

loc_80631D5C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(125));
}

loc_80631D60:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631E98;
    }
}

loc_80631D64:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(122));
}

loc_80631D68:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631E90;
    }
}

loc_80631D6C:
{
    goto loc_80631E88;
}

loc_80631D70:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(140));
}

loc_80631D74:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631EA8;
    }
}

loc_80631D78:
{
    goto loc_80631EA0;
}

loc_80631D7C:
{
}

loc_80631D80:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(163))) {
        goto loc_80631DA8;
    }
}

loc_80631D84:
{
}

loc_80631D88:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(154))) {
        goto loc_80631D9C;
    }
}

loc_80631D8C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(148));
}

loc_80631D90:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80631EB8;
    }
}

loc_80631D94:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631EC0;
    }
}

loc_80631D98:
{
    goto loc_80631EB0;
}

loc_80631D9C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(161));
}

loc_80631DA0:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631ED0;
    }
}

loc_80631DA4:
{
    goto loc_80631EC8;
}

loc_80631DA8:
{
}

loc_80631DAC:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(173))) {
        goto loc_80631DBC;
    }
}

loc_80631DB0:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(170));
}

loc_80631DB4:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631EE0;
    }
}

loc_80631DB8:
{
    goto loc_80631ED8;
}

loc_80631DBC:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(179));
}

loc_80631DC0:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631EF0;
    }
}

loc_80631DC4:
{
    goto loc_80631EE8;
}

loc_80631DC8:
{
    cached_r3 = -1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631DD0:
{
    cached_r3 = 206;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631DD8:
{
    cached_r3 = -1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631DE0:
{
    cached_r3 = 86;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631DE8:
{
    cached_r3 = 87;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631DF0:
{
    cached_r3 = 89;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631DF8:
{
    cached_r3 = 90;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631E00:
{
    cached_r3 = 89;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631E08:
{
    cached_r3 = 90;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631E10:
{
    cached_r3 = 89;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631E18:
{
    cached_r3 = 90;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631E20:
{
    cached_r3 = 207;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631E28:
{
    cached_r3 = -1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631E30:
{
    cached_r3 = 206;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631E38:
{
    cached_r3 = -1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631E40:
{
    cached_r3 = 84;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631E48:
{
    cached_r3 = 83;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631E50:
{
    cached_r3 = 85;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631E58:
{
    cached_r3 = 1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631E60:
{
    cached_r3 = 91;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631E68:
{
    cached_r3 = -1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631E70:
{
    cached_r3 = 91;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631E78:
{
    cached_r3 = -1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631E80:
{
    cached_r3 = 91;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631E88:
{
    cached_r3 = -1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631E90:
{
    cached_r3 = 2;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631E98:
{
    cached_r3 = 3;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631EA0:
{
    cached_r3 = 1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631EA8:
{
    cached_r3 = 83;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631EB0:
{
    cached_r3 = 115;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631EB8:
{
    cached_r3 = -1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631EC0:
{
    cached_r3 = -1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631EC8:
{
    cached_r3 = 2;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631ED0:
{
    cached_r3 = 3;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631ED8:
{
    cached_r3 = 1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631EE0:
{
    cached_r3 = 4;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631EE8:
{
    cached_r3 = -1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631EF0:
{
    cached_r3 = -1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80631C68 symbol=func_80631C68_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80631C68 func_80631C68 preserves=true fpr_mask=0x00000000

