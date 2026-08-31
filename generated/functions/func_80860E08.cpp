#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80860E08(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80860E08;

loc_80860E08:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(419));
}

loc_80860E0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80860ED4;
    }
}

loc_80860E10:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80860E50;
    }
}

loc_80860E14:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(241));
}

loc_80860E18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80860EB4;
    }
}

loc_80860E1C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80860E38;
    }
}

loc_80860E20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(235));
}

loc_80860E24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80860EA4;
    }
}

loc_80860E28:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80860F24;
    }
}

loc_80860E2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(24));
}

loc_80860E30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80860E94;
    }
}

loc_80860E34:
{
    goto loc_80860F24;
}

loc_80860E38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(379));
}

loc_80860E3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80860F14;
    }
}

loc_80860E40:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80860F24;
    }
}

loc_80860E44:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(243));
}

loc_80860E48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80860F24;
    }
}

loc_80860E4C:
{
    goto loc_80860EC4;
}

loc_80860E50:
{
}

loc_80860E54:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(503))) {
        goto loc_80860E7C;
    }
}

loc_80860E58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(428));
}

loc_80860E5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80860EF4;
    }
}

loc_80860E60:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80860E70;
    }
}

loc_80860E64:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(427));
}

loc_80860E68:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80860EE4;
    }
}

loc_80860E6C:
{
    goto loc_80860F24;
}

loc_80860E70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(501));
}

loc_80860E74:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80860F04;
    }
}

loc_80860E78:
{
    goto loc_80860F24;
}

loc_80860E7C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(754));
}

loc_80860E80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80860F14;
    }
}

loc_80860E84:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80860F24;
    }
}

loc_80860E88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(506));
}

loc_80860E8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80860F04;
    }
}

loc_80860E90:
{
    goto loc_80860F24;
}

loc_80860E94:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -1632);
    r3 = (r3 + 280);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80860EA4:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -1632);
    r3 = (r3 + 293);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80860EB4:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -1632);
    r3 = (r3 + 307);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80860EC4:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -1632);
    r3 = (r3 + 321);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80860ED4:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -1632);
    r3 = (r3 + 337);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80860EE4:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -1632);
    r3 = (r3 + 352);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80860EF4:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -1632);
    r3 = (r3 + 369);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80860F04:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -1632);
    r3 = (r3 + 386);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80860F14:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -1632);
    r3 = (r3 + 400);
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80860F24:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_80860E08_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_80860E08;

loc_80860E08:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(419));
}

loc_80860E0C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80860ED4;
    }
}

loc_80860E10:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80860E50;
    }
}

loc_80860E14:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(241));
}

loc_80860E18:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80860EB4;
    }
}

loc_80860E1C:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80860E38;
    }
}

loc_80860E20:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(235));
}

loc_80860E24:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80860EA4;
    }
}

loc_80860E28:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80860F24;
    }
}

loc_80860E2C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(24));
}

loc_80860E30:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80860E94;
    }
}

loc_80860E34:
{
    goto loc_80860F24;
}

loc_80860E38:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(379));
}

loc_80860E3C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80860F14;
    }
}

loc_80860E40:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80860F24;
    }
}

loc_80860E44:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(243));
}

loc_80860E48:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80860F24;
    }
}

loc_80860E4C:
{
    goto loc_80860EC4;
}

loc_80860E50:
{
}

loc_80860E54:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(503))) {
        goto loc_80860E7C;
    }
}

loc_80860E58:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(428));
}

loc_80860E5C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80860EF4;
    }
}

loc_80860E60:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80860E70;
    }
}

loc_80860E64:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(427));
}

loc_80860E68:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80860EE4;
    }
}

loc_80860E6C:
{
    goto loc_80860F24;
}

loc_80860E70:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(501));
}

loc_80860E74:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80860F04;
    }
}

loc_80860E78:
{
    goto loc_80860F24;
}

loc_80860E7C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(754));
}

loc_80860E80:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80860F14;
    }
}

loc_80860E84:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80860F24;
    }
}

loc_80860E88:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(506));
}

loc_80860E8C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80860F04;
    }
}

loc_80860E90:
{
    goto loc_80860F24;
}

loc_80860E94:
{
    cached_r3 = 0x808B0000u;
    cached_r3 = (cached_r3 + -1632);
    cached_r3 = (cached_r3 + 280);
return static_cast<uint64_t>(cached_r3);
}

loc_80860EA4:
{
    cached_r3 = 0x808B0000u;
    cached_r3 = (cached_r3 + -1632);
    cached_r3 = (cached_r3 + 293);
return static_cast<uint64_t>(cached_r3);
}

loc_80860EB4:
{
    cached_r3 = 0x808B0000u;
    cached_r3 = (cached_r3 + -1632);
    cached_r3 = (cached_r3 + 307);
return static_cast<uint64_t>(cached_r3);
}

loc_80860EC4:
{
    cached_r3 = 0x808B0000u;
    cached_r3 = (cached_r3 + -1632);
    cached_r3 = (cached_r3 + 321);
return static_cast<uint64_t>(cached_r3);
}

loc_80860ED4:
{
    cached_r3 = 0x808B0000u;
    cached_r3 = (cached_r3 + -1632);
    cached_r3 = (cached_r3 + 337);
return static_cast<uint64_t>(cached_r3);
}

loc_80860EE4:
{
    cached_r3 = 0x808B0000u;
    cached_r3 = (cached_r3 + -1632);
    cached_r3 = (cached_r3 + 352);
return static_cast<uint64_t>(cached_r3);
}

loc_80860EF4:
{
    cached_r3 = 0x808B0000u;
    cached_r3 = (cached_r3 + -1632);
    cached_r3 = (cached_r3 + 369);
return static_cast<uint64_t>(cached_r3);
}

loc_80860F04:
{
    cached_r3 = 0x808B0000u;
    cached_r3 = (cached_r3 + -1632);
    cached_r3 = (cached_r3 + 386);
return static_cast<uint64_t>(cached_r3);
}

loc_80860F14:
{
    cached_r3 = 0x808B0000u;
    cached_r3 = (cached_r3 + -1632);
    cached_r3 = (cached_r3 + 400);
return static_cast<uint64_t>(cached_r3);
}

loc_80860F24:
{
    cached_r3 = 0;
return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x80860E08 symbol=func_80860E08_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80860E08 func_80860E08 preserves=true fpr_mask=0x00000000

