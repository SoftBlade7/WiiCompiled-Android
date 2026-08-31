#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DA140(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801DA140;

loc_801DA140:
{
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_801DA148:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(48))) {
        goto loc_801DA15C;
    }
}

loc_801DA14C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(57));
}

loc_801DA150:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801DA15C;
    }
}

loc_801DA154:
{
    r3 = (r4 + -48);
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_801DA15C:
{
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_801DA164:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(65))) {
        goto loc_801DA178;
    }
}

loc_801DA168:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(70));
}

loc_801DA16C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801DA178;
    }
}

loc_801DA170:
{
    r3 = (r4 + -55);
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_801DA178:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(97));
}

loc_801DA180:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801DA194;
    }
}

loc_801DA184:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(102));
}

loc_801DA188:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801DA194;
    }
}

loc_801DA18C:
{
    r3 = (r3 + -87);
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_801DA194:
{
    r3 = -1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_801DA140_statefree_v0(uint32_t native_r3, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;

    uint32_t cached_cr = 0;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_801DA140;

loc_801DA140:
{
    cached_r4 = (static_cast<int32_t>(static_cast<int8_t>(cached_r3)));
}

loc_801DA148:
{
    if ((static_cast<int32_t>(cached_r4) < static_cast<int32_t>(48))) {
        goto loc_801DA15C;
    }
}

loc_801DA14C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(57));
}

loc_801DA150:
{
    if (((cached_cr & 0x40000000u) != 0)) {
        goto loc_801DA15C;
    }
}

loc_801DA154:
{
    cached_r3 = (cached_r4 + -48);

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_r4) };
}

loc_801DA15C:
{
    cached_r4 = (static_cast<int32_t>(static_cast<int8_t>(cached_r3)));
}

loc_801DA164:
{
    if ((static_cast<int32_t>(cached_r4) < static_cast<int32_t>(65))) {
        goto loc_801DA178;
    }
}

loc_801DA168:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(70));
}

loc_801DA16C:
{
    if (((cached_cr & 0x40000000u) != 0)) {
        goto loc_801DA178;
    }
}

loc_801DA170:
{
    cached_r3 = (cached_r4 + -55);

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_r4) };
}

loc_801DA178:
{
    cached_r3 = (static_cast<int32_t>(static_cast<int8_t>(cached_r3)));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(97));
}

loc_801DA180:
{
    if (((cached_cr & 0x80000000u) != 0)) {
        goto loc_801DA194;
    }
}

loc_801DA184:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(102));
}

loc_801DA188:
{
    if (((cached_cr & 0x40000000u) != 0)) {
        goto loc_801DA194;
    }
}

loc_801DA18C:
{
    cached_r3 = (cached_r3 + -87);

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_r4) };
}

loc_801DA194:
{
    cached_r3 = -1;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_r4) };
}

}
// RECOMP_STATE_FREE_ABI address=0x801DA140 symbol=func_801DA140_statefree_v0 gpr_in=0x00000008 gpr_out=0x00000018 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_801DA140_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_801DA140;

loc_801DA140:
{
    cached_r4 = (static_cast<int32_t>(static_cast<int8_t>(cached_r3)));
}

loc_801DA148:
{
    if ((static_cast<int32_t>(cached_r4) < static_cast<int32_t>(48))) {
        goto loc_801DA15C;
    }
}

loc_801DA14C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(57));
}

loc_801DA150:
{
    if (((cached_cr & 0x40000000u) != 0)) {
        goto loc_801DA15C;
    }
}

loc_801DA154:
{
    cached_r3 = (cached_r4 + -48);

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_r4) };
}

loc_801DA15C:
{
    cached_r4 = (static_cast<int32_t>(static_cast<int8_t>(cached_r3)));
}

loc_801DA164:
{
    if ((static_cast<int32_t>(cached_r4) < static_cast<int32_t>(65))) {
        goto loc_801DA178;
    }
}

loc_801DA168:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(70));
}

loc_801DA16C:
{
    if (((cached_cr & 0x40000000u) != 0)) {
        goto loc_801DA178;
    }
}

loc_801DA170:
{
    cached_r3 = (cached_r4 + -55);

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_r4) };
}

loc_801DA178:
{
    cached_r3 = (static_cast<int32_t>(static_cast<int8_t>(cached_r3)));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(97));
}

loc_801DA180:
{
    if (((cached_cr & 0x80000000u) != 0)) {
        goto loc_801DA194;
    }
}

loc_801DA184:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(102));
}

loc_801DA188:
{
    if (((cached_cr & 0x40000000u) != 0)) {
        goto loc_801DA194;
    }
}

loc_801DA18C:
{
    cached_r3 = (cached_r3 + -87);

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_r4) };
}

loc_801DA194:
{
    cached_r3 = -1;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_r4) };
}

}
// RECOMP_STATE_FREE_ABI address=0x801DA140 symbol=func_801DA140_statefree gpr_in=0x00000008 gpr_out=0x00000018 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000018 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801DA140 func_801DA140 preserves=true fpr_mask=0x00000000

