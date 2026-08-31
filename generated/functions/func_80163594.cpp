#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80163594(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80163594;

loc_80163594:
{
    r4 = 0x80340000u;
    r4 = (r4 + 12704);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r4));
}

loc_801635A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801635AC;
    }
}

loc_801635A4:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_801635AC:
{
}

loc_80166AC8:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_80163594_statefree_v0(uint32_t native_r3, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;

    uint32_t cached_cr = 0;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_80163594;

loc_80163594:
{
    cached_r4 = 0x80340000u;
    cached_r4 = (cached_r4 + 12704);
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r3), static_cast<uint32_t>(cached_r4));
}

loc_801635A0:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_801635AC;
    }
}

loc_801635A4:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_r4) };
}

loc_801635AC:
{
}

loc_80166AC8:
{
    cached_r3 = 0;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_r4) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80163594 symbol=func_80163594_statefree_v0 gpr_in=0x00000008 gpr_out=0x00000018 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80163594_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_80163594;

loc_80163594:
{
    cached_r4 = 0x80340000u;
    cached_r4 = (cached_r4 + 12704);
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r3), static_cast<uint32_t>(cached_r4));
}

loc_801635A0:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_801635AC;
    }
}

loc_801635A4:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_r4) };
}

loc_801635AC:
{
}

loc_80166AC8:
{
    cached_r3 = 0;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_r4) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80163594 symbol=func_80163594_statefree gpr_in=0x00000008 gpr_out=0x00000018 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000018 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80163594 func_80163594 preserves=true fpr_mask=0x00000000

