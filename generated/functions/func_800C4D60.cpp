#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800C4D60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800C4D60;

loc_800C4D60:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(64));
}

loc_800C4D64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C4D94;
    }
}

loc_800C4D68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(96));
}

loc_800C4D6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C4D94;
    }
}

loc_800C4D70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(128));
}

loc_800C4D74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C4D9C;
    }
}

loc_800C4D78:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(224));
}

loc_800C4D7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C4D9C;
    }
}

loc_800C4D80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(256));
}

loc_800C4D84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C4DA4;
    }
}

loc_800C4D88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(480));
}

loc_800C4D8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C4DA4;
    }
}

loc_800C4D90:
{
    goto loc_800C4DAC;
}

loc_800C4D94:
{
    r3 = 64;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_800C4D9C:
{
    r3 = 128;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_800C4DA4:
{
    r3 = 256;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_800C4DAC:
{
    r3 = 64;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_800C4D60_statefree_v0(uint32_t native_r3, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;

    uint32_t cached_cr = 0;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_800C4D60;

loc_800C4D60:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(64));
}

loc_800C4D64:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_800C4D94;
    }
}

loc_800C4D68:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(96));
}

loc_800C4D6C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_800C4D94;
    }
}

loc_800C4D70:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(128));
}

loc_800C4D74:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_800C4D9C;
    }
}

loc_800C4D78:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(224));
}

loc_800C4D7C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_800C4D9C;
    }
}

loc_800C4D80:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(256));
}

loc_800C4D84:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_800C4DA4;
    }
}

loc_800C4D88:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(480));
}

loc_800C4D8C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_800C4DA4;
    }
}

loc_800C4D90:
{
    goto loc_800C4DAC;
}

loc_800C4D94:
{
    cached_r3 = 64;
return static_cast<uint64_t>(cached_r3);
}

loc_800C4D9C:
{
    cached_r3 = 128;
return static_cast<uint64_t>(cached_r3);
}

loc_800C4DA4:
{
    cached_r3 = 256;
return static_cast<uint64_t>(cached_r3);
}

loc_800C4DAC:
{
    cached_r3 = 64;
return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x800C4D60 symbol=func_800C4D60_statefree_v0 gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE uint64_t func_800C4D60_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_800C4D60;

loc_800C4D60:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(64));
}

loc_800C4D64:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_800C4D94;
    }
}

loc_800C4D68:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(96));
}

loc_800C4D6C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_800C4D94;
    }
}

loc_800C4D70:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(128));
}

loc_800C4D74:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_800C4D9C;
    }
}

loc_800C4D78:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(224));
}

loc_800C4D7C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_800C4D9C;
    }
}

loc_800C4D80:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(256));
}

loc_800C4D84:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_800C4DA4;
    }
}

loc_800C4D88:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(480));
}

loc_800C4D8C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_800C4DA4;
    }
}

loc_800C4D90:
{
    goto loc_800C4DAC;
}

loc_800C4D94:
{
    cached_r3 = 64;
return static_cast<uint64_t>(cached_r3);
}

loc_800C4D9C:
{
    cached_r3 = 128;
return static_cast<uint64_t>(cached_r3);
}

loc_800C4DA4:
{
    cached_r3 = 256;
return static_cast<uint64_t>(cached_r3);
}

loc_800C4DAC:
{
    cached_r3 = 64;
return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x800C4D60 symbol=func_800C4D60_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800C4D60 func_800C4D60 preserves=true fpr_mask=0x00000000

