#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80631C10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80631C10;

loc_80631C10:
{
}

loc_80631C14:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(149))) {
        goto loc_80631C2C;
    }
}

loc_80631C18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(16));
}

loc_80631C1C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631C48;
    }
}

loc_80631C20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80631C24:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631C40;
    }
}

loc_80631C28:
{
    goto loc_80631C60;
}

loc_80631C2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(179));
}

loc_80631C30:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631C60;
    }
}

loc_80631C34:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(173));
}

loc_80631C38:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631C58;
    }
}

loc_80631C3C:
{
    goto loc_80631C50;
}

loc_80631C40:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631C48:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631C50:
{
    r3 = 2;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631C58:
{
    r3 = 4;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631C60:
{
    r3 = -1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_80631C10_statefree_v0(uint32_t native_r3, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;

    uint32_t cached_cr = 0;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_80631C10;

loc_80631C10:
{
}

loc_80631C14:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(149))) {
        goto loc_80631C2C;
    }
}

loc_80631C18:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(16));
}

loc_80631C1C:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631C48;
    }
}

loc_80631C20:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(0));
}

loc_80631C24:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631C40;
    }
}

loc_80631C28:
{
    goto loc_80631C60;
}

loc_80631C2C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(179));
}

loc_80631C30:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631C60;
    }
}

loc_80631C34:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(173));
}

loc_80631C38:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631C58;
    }
}

loc_80631C3C:
{
    goto loc_80631C50;
}

loc_80631C40:
{
    cached_r3 = 0;
return static_cast<uint64_t>(cached_r3);
}

loc_80631C48:
{
    cached_r3 = 1;
return static_cast<uint64_t>(cached_r3);
}

loc_80631C50:
{
    cached_r3 = 2;
return static_cast<uint64_t>(cached_r3);
}

loc_80631C58:
{
    cached_r3 = 4;
return static_cast<uint64_t>(cached_r3);
}

loc_80631C60:
{
    cached_r3 = -1;
return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x80631C10 symbol=func_80631C10_statefree_v0 gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE uint64_t func_80631C10_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_80631C10;

loc_80631C10:
{
}

loc_80631C14:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(149))) {
        goto loc_80631C2C;
    }
}

loc_80631C18:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(16));
}

loc_80631C1C:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631C48;
    }
}

loc_80631C20:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(0));
}

loc_80631C24:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631C40;
    }
}

loc_80631C28:
{
    goto loc_80631C60;
}

loc_80631C2C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(179));
}

loc_80631C30:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631C60;
    }
}

loc_80631C34:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(173));
}

loc_80631C38:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631C58;
    }
}

loc_80631C3C:
{
    goto loc_80631C50;
}

loc_80631C40:
{
    cached_r3 = 0;
return static_cast<uint64_t>(cached_r3);
}

loc_80631C48:
{
    cached_r3 = 1;
return static_cast<uint64_t>(cached_r3);
}

loc_80631C50:
{
    cached_r3 = 2;
return static_cast<uint64_t>(cached_r3);
}

loc_80631C58:
{
    cached_r3 = 4;
return static_cast<uint64_t>(cached_r3);
}

loc_80631C60:
{
    cached_r3 = -1;
return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x80631C10 symbol=func_80631C10_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80631C10 func_80631C10 preserves=true fpr_mask=0x00000000

