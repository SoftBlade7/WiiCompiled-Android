#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80631AF8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80631AF8;

loc_80631AF8:
{
}

loc_80631AFC:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(104))) {
        goto loc_80631B40;
    }
}

loc_80631B00:
{
}

loc_80631B04:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(81))) {
        goto loc_80631B28;
    }
}

loc_80631B08:
{
}

loc_80631B0C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(16))) {
        goto loc_80631B1C;
    }
}

loc_80631B10:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80631B14:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631B78;
    }
}

loc_80631B18:
{
    goto loc_80631BE8;
}

loc_80631B1C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(72));
}

loc_80631B20:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631B88;
    }
}

loc_80631B24:
{
    goto loc_80631B80;
}

loc_80631B28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(90));
}

loc_80631B2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80631BA0;
    }
}

loc_80631B30:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631BA8;
    }
}

loc_80631B34:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(84));
}

loc_80631B38:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631B98;
    }
}

loc_80631B3C:
{
    goto loc_80631B90;
}

loc_80631B40:
{
}

loc_80631B44:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(135))) {
        goto loc_80631B60;
    }
}

loc_80631B48:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(130));
}

loc_80631B4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80631BC0;
    }
}

loc_80631B50:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631BC8;
    }
}

loc_80631B54:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(127));
}

loc_80631B58:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631BB8;
    }
}

loc_80631B5C:
{
    goto loc_80631BB0;
}

loc_80631B60:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(148));
}

loc_80631B64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80631BE0;
    }
}

loc_80631B68:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631BE8;
    }
}

loc_80631B6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(144));
}

loc_80631B70:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631BD8;
    }
}

loc_80631B74:
{
    goto loc_80631BD0;
}

loc_80631B78:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631B80:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631B88:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631B90:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631B98:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631BA0:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631BA8:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631BB0:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631BB8:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631BC0:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631BC8:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631BD0:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631BD8:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631BE0:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631BE8:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80631AF8_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_80631AF8;

loc_80631AF8:
{
}

loc_80631AFC:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(104))) {
        goto loc_80631B40;
    }
}

loc_80631B00:
{
}

loc_80631B04:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(81))) {
        goto loc_80631B28;
    }
}

loc_80631B08:
{
}

loc_80631B0C:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(16))) {
        goto loc_80631B1C;
    }
}

loc_80631B10:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(0));
}

loc_80631B14:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631B78;
    }
}

loc_80631B18:
{
    goto loc_80631BE8;
}

loc_80631B1C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(72));
}

loc_80631B20:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631B88;
    }
}

loc_80631B24:
{
    goto loc_80631B80;
}

loc_80631B28:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(90));
}

loc_80631B2C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80631BA0;
    }
}

loc_80631B30:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631BA8;
    }
}

loc_80631B34:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(84));
}

loc_80631B38:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631B98;
    }
}

loc_80631B3C:
{
    goto loc_80631B90;
}

loc_80631B40:
{
}

loc_80631B44:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(135))) {
        goto loc_80631B60;
    }
}

loc_80631B48:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(130));
}

loc_80631B4C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80631BC0;
    }
}

loc_80631B50:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631BC8;
    }
}

loc_80631B54:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(127));
}

loc_80631B58:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631BB8;
    }
}

loc_80631B5C:
{
    goto loc_80631BB0;
}

loc_80631B60:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(148));
}

loc_80631B64:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80631BE0;
    }
}

loc_80631B68:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631BE8;
    }
}

loc_80631B6C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(144));
}

loc_80631B70:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631BD8;
    }
}

loc_80631B74:
{
    goto loc_80631BD0;
}

loc_80631B78:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631B80:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631B88:
{
    cached_r3 = 1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631B90:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631B98:
{
    cached_r3 = 1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631BA0:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631BA8:
{
    cached_r3 = 1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631BB0:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631BB8:
{
    cached_r3 = 1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631BC0:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631BC8:
{
    cached_r3 = 1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631BD0:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631BD8:
{
    cached_r3 = 1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631BE0:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631BE8:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80631AF8 symbol=func_80631AF8_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80631AF8 func_80631AF8 preserves=true fpr_mask=0x00000000

