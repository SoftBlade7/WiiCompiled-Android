#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80649DA4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80649DA4;

loc_80649DA4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(20100));
}

loc_80649DA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80649DB4;
    }
}

loc_80649DAC:
{
    r3 = 4601;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80649DB4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(20101));
}

loc_80649DB8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80649DC4;
    }
}

loc_80649DBC:
{
    r3 = 4602;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80649DC4:
{
    r0 = (r3 + -20102);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
}

loc_80649DCC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80649DD8;
    }
}

loc_80649DD0:
{
    r3 = 4603;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80649DD8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(20110));
}

loc_80649DDC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80649DE8;
    }
}

loc_80649DE0:
{
    r3 = 4604;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80649DE8:
{
    r0 = (r3 + -20111);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(888));
}

loc_80649DF0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80649DFC;
    }
}

loc_80649DF4:
{
    r3 = 4605;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80649DFC:
{
    r0 = (r3 + -23000);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(999));
}

loc_80649E04:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80649E10;
    }
}

loc_80649E08:
{
    r3 = 4606;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80649E10:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(29000));
}

loc_80649E14:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80649E20;
    }
}

loc_80649E18:
{
    r3 = 4607;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80649E20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(29001));
}

loc_80649E24:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80649E30;
    }
}

loc_80649E28:
{
    r3 = 4608;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80649E30:
{
    r0 = (r3 + -31000);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(999));
}

loc_80649E38:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80649E44;
    }
}

loc_80649E3C:
{
    r3 = 4609;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80649E44:
{
    r4 = (r3 + -65536);
    r0 = (r4 + 32536);
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r0), static_cast<uint32_t>(999));
}

loc_80649E50:
{
    if (((cr & 0x04000000u) != 0)) {
        goto loc_80649E5C;
    }
}

loc_80649E54:
{
    r3 = 4609;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80649E5C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(32001));
}

loc_80649E60:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80649E6C;
    }
}

loc_80649E64:
{
    r3 = 4611;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80649E6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(32002));
}

loc_80649E70:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80649E7C;
    }
}

loc_80649E74:
{
    r3 = 4612;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80649E7C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(32003));
}

loc_80649E80:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80649E8C;
    }
}

loc_80649E84:
{
    r3 = 4613;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80649E8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(32004));
}

loc_80649E90:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80649E9C;
    }
}

loc_80649E94:
{
    r3 = 4614;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80649E9C:
{
    if (((cr & 0x04000000u) != 0)) {
        goto loc_80649EA8;
    }
}

loc_80649EA0:
{
    r3 = 4615;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80649EA8:
{
    r0 = (r4 + 15436);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(99));
}

loc_80649EB0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80649EBC;
    }
}

loc_80649EB4:
{
    r3 = 4616;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80649EBC:
{
    r0 = (r4 + 15336);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(99));
}

loc_80649EC4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80649ED0;
    }
}

loc_80649EC8:
{
    r3 = 4617;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80649ED0:
{
    r0 = (r4 + 15236);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(99));
}

loc_80649ED8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80649EE4;
    }
}

loc_80649EDC:
{
    r3 = 4618;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80649EE4:
{
    r0 = (r4 + 15136);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(99));
}

loc_80649EEC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80649EF8;
    }
}

loc_80649EF0:
{
    r3 = 4619;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80649EF8:
{
    r0 = (r4 + 14496);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
}

loc_80649F00:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80649F0C;
    }
}

loc_80649F04:
{
    r3 = 4621;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80649F0C:
{
    r0 = (r4 + 14536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(99));
}

loc_80649F14:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80649F20;
    }
}

loc_80649F18:
{
    r3 = 4620;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80649F20:
{
    r0 = (r4 + 14236);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(99));
}

loc_80649F28:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80649F34;
    }
}

loc_80649F2C:
{
    r3 = 4622;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80649F34:
{
    r0 = (r4 + 14136);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(99));
}

loc_80649F3C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80649F48;
    }
}

loc_80649F40:
{
    r3 = 4623;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80649F48:
{
    r0 = (r4 + 13536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(199));
}

loc_80649F50:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80649F5C;
    }
}

loc_80649F54:
{
    r3 = 4623;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80649F5C:
{
    r0 = (r4 + 13336);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(99));
}

loc_80649F64:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80649F70;
    }
}

loc_80649F68:
{
    r3 = 4624;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80649F70:
{
    r0 = (r4 + 13136);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(99));
}

loc_80649F78:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80649F84;
    }
}

loc_80649F7C:
{
    r3 = 4625;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80649F84:
{
    r0 = (r4 + 13036);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(99));
}

loc_80649F8C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80649F98;
    }
}

loc_80649F90:
{
    r3 = 4626;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80649F98:
{
    r0 = (r4 + 12836);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(99));
}

loc_80649FA0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80649FAC;
    }
}

loc_80649FA4:
{
    r3 = 4627;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80649FAC:
{
    r0 = (r4 + 11536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(99));
}

loc_80649FB4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80649FC0;
    }
}

loc_80649FB8:
{
    r3 = 4628;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80649FC0:
{
    r0 = (r4 + 5536);
    r3 = 4600;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(39999));
}

loc_80649FCC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_return;
    }
}

loc_80649FD0:
{
    r3 = 4629;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80649DA4_statefree(uint32_t native_r0, uint32_t native_r3, uint32_t native_r4, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = native_r0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;

    goto loc_80649DA4;

loc_80649DA4:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(20100));
}

loc_80649DA8:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_80649DB4;
    }
}

loc_80649DAC:
{
    cached_r3 = 4601;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80649DB4:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(20101));
}

loc_80649DB8:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_80649DC4;
    }
}

loc_80649DBC:
{
    cached_r3 = 4602;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80649DC4:
{
    cached_r0 = (cached_r3 + -20102);
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(7));
}

loc_80649DCC:
{
    if (((cached_cr & 0x40000000u) != 0)) {
        goto loc_80649DD8;
    }
}

loc_80649DD0:
{
    cached_r3 = 4603;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80649DD8:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(20110));
}

loc_80649DDC:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_80649DE8;
    }
}

loc_80649DE0:
{
    cached_r3 = 4604;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80649DE8:
{
    cached_r0 = (cached_r3 + -20111);
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(888));
}

loc_80649DF0:
{
    if (((cached_cr & 0x40000000u) != 0)) {
        goto loc_80649DFC;
    }
}

loc_80649DF4:
{
    cached_r3 = 4605;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80649DFC:
{
    cached_r0 = (cached_r3 + -23000);
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(999));
}

loc_80649E04:
{
    if (((cached_cr & 0x40000000u) != 0)) {
        goto loc_80649E10;
    }
}

loc_80649E08:
{
    cached_r3 = 4606;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80649E10:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(29000));
}

loc_80649E14:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_80649E20;
    }
}

loc_80649E18:
{
    cached_r3 = 4607;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80649E20:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(29001));
}

loc_80649E24:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_80649E30;
    }
}

loc_80649E28:
{
    cached_r3 = 4608;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80649E30:
{
    cached_r0 = (cached_r3 + -31000);
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(999));
}

loc_80649E38:
{
    if (((cached_cr & 0x40000000u) != 0)) {
        goto loc_80649E44;
    }
}

loc_80649E3C:
{
    cached_r3 = 4609;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80649E44:
{
    cached_r4 = (cached_r3 + -65536);
    cached_r0 = (cached_r4 + 32536);
    SetCRResident(cached_cr, cached_xer, 1, static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(999));
}

loc_80649E50:
{
    if (((cached_cr & 0x04000000u) != 0)) {
        goto loc_80649E5C;
    }
}

loc_80649E54:
{
    cached_r3 = 4609;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80649E5C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(32001));
}

loc_80649E60:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_80649E6C;
    }
}

loc_80649E64:
{
    cached_r3 = 4611;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80649E6C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(32002));
}

loc_80649E70:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_80649E7C;
    }
}

loc_80649E74:
{
    cached_r3 = 4612;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80649E7C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(32003));
}

loc_80649E80:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_80649E8C;
    }
}

loc_80649E84:
{
    cached_r3 = 4613;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80649E8C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(32004));
}

loc_80649E90:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_80649E9C;
    }
}

loc_80649E94:
{
    cached_r3 = 4614;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80649E9C:
{
    if (((cached_cr & 0x04000000u) != 0)) {
        goto loc_80649EA8;
    }
}

loc_80649EA0:
{
    cached_r3 = 4615;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80649EA8:
{
    cached_r0 = (cached_r4 + 15436);
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(99));
}

loc_80649EB0:
{
    if (((cached_cr & 0x40000000u) != 0)) {
        goto loc_80649EBC;
    }
}

loc_80649EB4:
{
    cached_r3 = 4616;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80649EBC:
{
    cached_r0 = (cached_r4 + 15336);
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(99));
}

loc_80649EC4:
{
    if (((cached_cr & 0x40000000u) != 0)) {
        goto loc_80649ED0;
    }
}

loc_80649EC8:
{
    cached_r3 = 4617;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80649ED0:
{
    cached_r0 = (cached_r4 + 15236);
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(99));
}

loc_80649ED8:
{
    if (((cached_cr & 0x40000000u) != 0)) {
        goto loc_80649EE4;
    }
}

loc_80649EDC:
{
    cached_r3 = 4618;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80649EE4:
{
    cached_r0 = (cached_r4 + 15136);
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(99));
}

loc_80649EEC:
{
    if (((cached_cr & 0x40000000u) != 0)) {
        goto loc_80649EF8;
    }
}

loc_80649EF0:
{
    cached_r3 = 4619;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80649EF8:
{
    cached_r0 = (cached_r4 + 14496);
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(9));
}

loc_80649F00:
{
    if (((cached_cr & 0x40000000u) != 0)) {
        goto loc_80649F0C;
    }
}

loc_80649F04:
{
    cached_r3 = 4621;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80649F0C:
{
    cached_r0 = (cached_r4 + 14536);
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(99));
}

loc_80649F14:
{
    if (((cached_cr & 0x40000000u) != 0)) {
        goto loc_80649F20;
    }
}

loc_80649F18:
{
    cached_r3 = 4620;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80649F20:
{
    cached_r0 = (cached_r4 + 14236);
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(99));
}

loc_80649F28:
{
    if (((cached_cr & 0x40000000u) != 0)) {
        goto loc_80649F34;
    }
}

loc_80649F2C:
{
    cached_r3 = 4622;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80649F34:
{
    cached_r0 = (cached_r4 + 14136);
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(99));
}

loc_80649F3C:
{
    if (((cached_cr & 0x40000000u) != 0)) {
        goto loc_80649F48;
    }
}

loc_80649F40:
{
    cached_r3 = 4623;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80649F48:
{
    cached_r0 = (cached_r4 + 13536);
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(199));
}

loc_80649F50:
{
    if (((cached_cr & 0x40000000u) != 0)) {
        goto loc_80649F5C;
    }
}

loc_80649F54:
{
    cached_r3 = 4623;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80649F5C:
{
    cached_r0 = (cached_r4 + 13336);
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(99));
}

loc_80649F64:
{
    if (((cached_cr & 0x40000000u) != 0)) {
        goto loc_80649F70;
    }
}

loc_80649F68:
{
    cached_r3 = 4624;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80649F70:
{
    cached_r0 = (cached_r4 + 13136);
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(99));
}

loc_80649F78:
{
    if (((cached_cr & 0x40000000u) != 0)) {
        goto loc_80649F84;
    }
}

loc_80649F7C:
{
    cached_r3 = 4625;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80649F84:
{
    cached_r0 = (cached_r4 + 13036);
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(99));
}

loc_80649F8C:
{
    if (((cached_cr & 0x40000000u) != 0)) {
        goto loc_80649F98;
    }
}

loc_80649F90:
{
    cached_r3 = 4626;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80649F98:
{
    cached_r0 = (cached_r4 + 12836);
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(99));
}

loc_80649FA0:
{
    if (((cached_cr & 0x40000000u) != 0)) {
        goto loc_80649FAC;
    }
}

loc_80649FA4:
{
    cached_r3 = 4627;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80649FAC:
{
    cached_r0 = (cached_r4 + 11536);
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(99));
}

loc_80649FB4:
{
    if (((cached_cr & 0x40000000u) != 0)) {
        goto loc_80649FC0;
    }
}

loc_80649FB8:
{
    cached_r3 = 4628;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80649FC0:
{
    cached_r0 = (cached_r4 + 5536);
    cached_r3 = 4600;
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(39999));
}

loc_80649FCC:
{
    if (((cached_cr & 0x40000000u) != 0)) {
        goto loc_return;
    }
}

loc_80649FD0:
{
    cached_r3 = 4629;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_return:
{

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80649DA4 symbol=func_80649DA4_statefree gpr_in=0x00000019 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x03 cr_out=0x03 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80649DA4 func_80649DA4 preserves=true fpr_mask=0x00000000

