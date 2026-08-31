#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80739320(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80739320;

loc_80739320:
{
    r3 = MemoryInline::FlatRead32((r3 + 144));
}

loc_80739E14:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(401));
}

loc_80739E18:
{
    r3 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80739ED8;
    }
}

loc_80739E20:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80739E88;
    }
}

loc_80739E24:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(222));
}

loc_80739E28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80739ED8;
    }
}

loc_80739E2C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80739E5C;
    }
}

loc_80739E30:
{
}

loc_80739E34:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(217))) {
        goto loc_80739E50;
    }
}

loc_80739E38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(204));
}

loc_80739E3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80739ED8;
    }
}

loc_80739E40:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_80739E44:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(214));
}

loc_80739E48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80739ED8;
    }
}

loc_80739E4C:
{
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80739E50:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(219));
}

loc_80739E54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80739ED8;
    }
}

loc_80739E58:
{
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80739E5C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(229));
}

loc_80739E60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80739ED8;
    }
}

loc_80739E64:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80739E74;
    }
}

loc_80739E68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(226));
}

loc_80739E6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80739ED8;
    }
}

loc_80739E70:
{
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80739E74:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(235));
}

loc_80739E78:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_80739E7C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(231));
}

loc_80739E80:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80739ED8;
    }
}

loc_80739E84:
{
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80739E88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(420));
}

loc_80739E8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80739ED8;
    }
}

loc_80739E90:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80739EC4;
    }
}

loc_80739E94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(408));
}

loc_80739E98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80739E9C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80739EB8;
    }
}

loc_80739EA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(403));
}

loc_80739EA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80739ED8;
    }
}

loc_80739EA8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_80739EAC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(406));
}

loc_80739EB0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80739ED8;
    }
}

loc_80739EB4:
{
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80739EB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(410));
}

loc_80739EBC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_80739EC0:
{
    goto loc_80739ED8;
}

loc_80739EC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(515));
}

loc_80739EC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80739ED8;
    }
}

loc_80739ECC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_80739ED0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(424));
}

loc_80739ED4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80739ED8:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_80739320_statefree(uint32_t native_r3, uint32_t native_r4, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_80739320;

loc_80739320:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 144));
}

loc_80739E14:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(401));
}

loc_80739E18:
{
    cached_r3 = 0;
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80739ED8;
    }
}

loc_80739E20:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80739E88;
    }
}

loc_80739E24:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(222));
}

loc_80739E28:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80739ED8;
    }
}

loc_80739E2C:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80739E5C;
    }
}

loc_80739E30:
{
}

loc_80739E34:
{
    if ((static_cast<int32_t>(cached_r4) >= static_cast<int32_t>(217))) {
        goto loc_80739E50;
    }
}

loc_80739E38:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(204));
}

loc_80739E3C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80739ED8;
    }
}

loc_80739E40:
{
    if (((cached_cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_80739E44:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(214));
}

loc_80739E48:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80739ED8;
    }
}

loc_80739E4C:
{
return static_cast<uint64_t>(cached_r3);
}

loc_80739E50:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(219));
}

loc_80739E54:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80739ED8;
    }
}

loc_80739E58:
{
return static_cast<uint64_t>(cached_r3);
}

loc_80739E5C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(229));
}

loc_80739E60:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80739ED8;
    }
}

loc_80739E64:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80739E74;
    }
}

loc_80739E68:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(226));
}

loc_80739E6C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80739ED8;
    }
}

loc_80739E70:
{
return static_cast<uint64_t>(cached_r3);
}

loc_80739E74:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(235));
}

loc_80739E78:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_80739E7C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(231));
}

loc_80739E80:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80739ED8;
    }
}

loc_80739E84:
{
return static_cast<uint64_t>(cached_r3);
}

loc_80739E88:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(420));
}

loc_80739E8C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80739ED8;
    }
}

loc_80739E90:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80739EC4;
    }
}

loc_80739E94:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(408));
}

loc_80739E98:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80739E9C:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80739EB8;
    }
}

loc_80739EA0:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(403));
}

loc_80739EA4:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80739ED8;
    }
}

loc_80739EA8:
{
    if (((cached_cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_80739EAC:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(406));
}

loc_80739EB0:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80739ED8;
    }
}

loc_80739EB4:
{
return static_cast<uint64_t>(cached_r3);
}

loc_80739EB8:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(410));
}

loc_80739EBC:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_80739EC0:
{
    goto loc_80739ED8;
}

loc_80739EC4:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(515));
}

loc_80739EC8:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80739ED8;
    }
}

loc_80739ECC:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_80739ED0:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(424));
}

loc_80739ED4:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80739ED8:
{
    cached_r3 = 1;
return static_cast<uint64_t>(cached_r3);
}

loc_return:
{
return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x80739320 symbol=func_80739320_statefree gpr_in=0x00000018 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80739320 func_80739320 preserves=true fpr_mask=0x00000000

