#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80634B80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80634B80;

loc_80634B80:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(178));
}

loc_80634B84:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80634C88;
    }
}

loc_80634B88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(120));
}

loc_80634B8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80634C40;
    }
}

loc_80634B90:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80634BE8;
    }
}

loc_80634B94:
{
}

loc_80634B98:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(8))) {
        goto loc_80634BC4;
    }
}

loc_80634B9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(4));
}

loc_80634BA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80634C68;
    }
}

loc_80634BA4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80634BB8;
    }
}

loc_80634BA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80634BAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80634C70;
    }
}

loc_80634BB0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80634C48;
    }
}

loc_80634BB4:
{
    goto loc_80634C80;
}

loc_80634BB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(6));
}

loc_80634BBC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80634C30;
    }
}

loc_80634BC0:
{
    goto loc_80634C60;
}

loc_80634BC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(20));
}

loc_80634BC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80634C78;
    }
}

loc_80634BCC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80634BDC;
    }
}

loc_80634BD0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(16));
}

loc_80634BD4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80634C58;
    }
}

loc_80634BD8:
{
    goto loc_80634C80;
}

loc_80634BDC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(64));
}

loc_80634BE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80634C50;
    }
}

loc_80634BE4:
{
    goto loc_80634C80;
}

loc_80634BE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(152));
}

loc_80634BEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80634C40;
    }
}

loc_80634BF0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80634C18;
    }
}

loc_80634BF4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(149));
}

loc_80634BF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80634C58;
    }
}

loc_80634BFC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80634C0C;
    }
}

loc_80634C00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(122));
}

loc_80634C04:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80634C80;
    }
}

loc_80634C08:
{
    goto loc_80634C38;
}

loc_80634C0C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(151));
}

loc_80634C10:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80634C80;
    }
}

loc_80634C14:
{
    goto loc_80634C78;
}

loc_80634C18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(173));
}

loc_80634C1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80634C30;
    }
}

loc_80634C20:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80634C80;
    }
}

loc_80634C24:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(155));
}

loc_80634C28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80634C50;
    }
}

loc_80634C2C:
{
    goto loc_80634C80;
}

loc_80634C30:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80634C38:
{
    r3 = 2;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80634C40:
{
    r3 = 3;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80634C48:
{
    r3 = 4;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80634C50:
{
    r3 = 5;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80634C58:
{
    r3 = 6;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80634C60:
{
    r3 = 7;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80634C68:
{
    r3 = 8;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80634C70:
{
    r3 = 9;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80634C78:
{
    r3 = 10;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80634C80:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80634C88:
{
    r3 = -1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80634B80_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_80634B80;

loc_80634B80:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r3), static_cast<uint32_t>(178));
}

loc_80634B84:
{
    if (((cached_cr & 0x40000000u) != 0)) {
        goto loc_80634C88;
    }
}

loc_80634B88:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(120));
}

loc_80634B8C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80634C40;
    }
}

loc_80634B90:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80634BE8;
    }
}

loc_80634B94:
{
}

loc_80634B98:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(8))) {
        goto loc_80634BC4;
    }
}

loc_80634B9C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(4));
}

loc_80634BA0:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80634C68;
    }
}

loc_80634BA4:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80634BB8;
    }
}

loc_80634BA8:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(0));
}

loc_80634BAC:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80634C70;
    }
}

loc_80634BB0:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80634C48;
    }
}

loc_80634BB4:
{
    goto loc_80634C80;
}

loc_80634BB8:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(6));
}

loc_80634BBC:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80634C30;
    }
}

loc_80634BC0:
{
    goto loc_80634C60;
}

loc_80634BC4:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(20));
}

loc_80634BC8:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80634C78;
    }
}

loc_80634BCC:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80634BDC;
    }
}

loc_80634BD0:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(16));
}

loc_80634BD4:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80634C58;
    }
}

loc_80634BD8:
{
    goto loc_80634C80;
}

loc_80634BDC:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(64));
}

loc_80634BE0:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80634C50;
    }
}

loc_80634BE4:
{
    goto loc_80634C80;
}

loc_80634BE8:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(152));
}

loc_80634BEC:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80634C40;
    }
}

loc_80634BF0:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80634C18;
    }
}

loc_80634BF4:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(149));
}

loc_80634BF8:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80634C58;
    }
}

loc_80634BFC:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80634C0C;
    }
}

loc_80634C00:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(122));
}

loc_80634C04:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80634C80;
    }
}

loc_80634C08:
{
    goto loc_80634C38;
}

loc_80634C0C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(151));
}

loc_80634C10:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80634C80;
    }
}

loc_80634C14:
{
    goto loc_80634C78;
}

loc_80634C18:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(173));
}

loc_80634C1C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80634C30;
    }
}

loc_80634C20:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80634C80;
    }
}

loc_80634C24:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(155));
}

loc_80634C28:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80634C50;
    }
}

loc_80634C2C:
{
    goto loc_80634C80;
}

loc_80634C30:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80634C38:
{
    cached_r3 = 2;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80634C40:
{
    cached_r3 = 3;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80634C48:
{
    cached_r3 = 4;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80634C50:
{
    cached_r3 = 5;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80634C58:
{
    cached_r3 = 6;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80634C60:
{
    cached_r3 = 7;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80634C68:
{
    cached_r3 = 8;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80634C70:
{
    cached_r3 = 9;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80634C78:
{
    cached_r3 = 10;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80634C80:
{
    cached_r3 = 1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80634C88:
{
    cached_r3 = -1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80634B80 symbol=func_80634B80_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80634B80 func_80634B80 preserves=true fpr_mask=0x00000000

