#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80833704(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80833704;

loc_80833704:
{
}

loc_80833708:
{
    r0 = 0;
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_8083371C;
    }
}

loc_80833710:
{
}

loc_80833714:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(2))) {
        goto loc_8083371C;
    }
}

loc_80833718:
{
    r0 = 1;
}

loc_8083371C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80833720:
{
    r0 = 9999;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8083372C;
    }
}

loc_80833728:
{
    r0 = (r3 + 9353);
}

loc_8083372C:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_80833704_statefree_v0(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_80833704;

loc_80833704:
{
}

loc_80833708:
{
    cached_r0 = 0;
    if ((static_cast<int32_t>(cached_r3) < static_cast<int32_t>(0))) {
        goto loc_8083371C;
    }
}

loc_80833710:
{
}

loc_80833714:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(2))) {
        goto loc_8083371C;
    }
}

loc_80833718:
{
    cached_r0 = 1;
}

loc_8083371C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_80833720:
{
    cached_r0 = 9999;
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_8083372C;
    }
}

loc_80833728:
{
    cached_r0 = (cached_r3 + 9353);
}

loc_8083372C:
{
    cached_r3 = cached_r0;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80833704 symbol=func_80833704_statefree_v0 gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80833704_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_80833704;

loc_80833704:
{
}

loc_80833708:
{
    cached_r0 = 0;
    if ((static_cast<int32_t>(cached_r3) < static_cast<int32_t>(0))) {
        goto loc_8083371C;
    }
}

loc_80833710:
{
}

loc_80833714:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(2))) {
        goto loc_8083371C;
    }
}

loc_80833718:
{
    cached_r0 = 1;
}

loc_8083371C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_80833720:
{
    cached_r0 = 9999;
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_8083372C;
    }
}

loc_80833728:
{
    cached_r0 = (cached_r3 + 9353);
}

loc_8083372C:
{
    cached_r3 = cached_r0;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80833704 symbol=func_80833704_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80833704 func_80833704 preserves=true fpr_mask=0x00000000

