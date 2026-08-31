#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80631A58(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80631A58;

loc_80631A58:
{
}

loc_80631A5C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(88))) {
        goto loc_80631A88;
    }
}

loc_80631A60:
{
}

loc_80631A64:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(72))) {
        goto loc_80631A7C;
    }
}

loc_80631A68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(16));
}

loc_80631A6C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631AB8;
    }
}

loc_80631A70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80631A74:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631AB0;
    }
}

loc_80631A78:
{
    goto loc_80631AF0;
}

loc_80631A7C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(85));
}

loc_80631A80:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631AC8;
    }
}

loc_80631A84:
{
    goto loc_80631AC0;
}

loc_80631A88:
{
}

loc_80631A8C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(104))) {
        goto loc_80631AA4;
    }
}

loc_80631A90:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(94));
}

loc_80631A94:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631AE0;
    }
}

loc_80631A98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(90));
}

loc_80631A9C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631AD8;
    }
}

loc_80631AA0:
{
    goto loc_80631AD0;
}

loc_80631AA4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(149));
}

loc_80631AA8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80631AF0;
    }
}

loc_80631AAC:
{
    goto loc_80631AE8;
}

loc_80631AB0:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631AB8:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631AC0:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631AC8:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631AD0:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631AD8:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631AE0:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631AE8:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80631AF0:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_80631A58_statefree_v1(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_80631A58;

loc_80631A58:
{
}

loc_80631A5C:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(88))) {
        goto loc_80631A88;
    }
}

loc_80631A60:
{
}

loc_80631A64:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(72))) {
        goto loc_80631A7C;
    }
}

loc_80631A68:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(16));
}

loc_80631A6C:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631AB8;
    }
}

loc_80631A70:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(0));
}

loc_80631A74:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631AB0;
    }
}

loc_80631A78:
{
    goto loc_80631AF0;
}

loc_80631A7C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(85));
}

loc_80631A80:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631AC8;
    }
}

loc_80631A84:
{
    goto loc_80631AC0;
}

loc_80631A88:
{
}

loc_80631A8C:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(104))) {
        goto loc_80631AA4;
    }
}

loc_80631A90:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(94));
}

loc_80631A94:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631AE0;
    }
}

loc_80631A98:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(90));
}

loc_80631A9C:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631AD8;
    }
}

loc_80631AA0:
{
    goto loc_80631AD0;
}

loc_80631AA4:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(149));
}

loc_80631AA8:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631AF0;
    }
}

loc_80631AAC:
{
    goto loc_80631AE8;
}

loc_80631AB0:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631AB8:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631AC0:
{
    cached_r3 = 1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631AC8:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631AD0:
{
    cached_r3 = 1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631AD8:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631AE0:
{
    cached_r3 = 1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631AE8:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631AF0:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80631A58 symbol=func_80631A58_statefree_v1 gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_80631A58_statefree_v0(uint32_t native_r3, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;

    uint32_t cached_cr = 0;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_80631A58;

loc_80631A58:
{
}

loc_80631A5C:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(88))) {
        goto loc_80631A88;
    }
}

loc_80631A60:
{
}

loc_80631A64:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(72))) {
        goto loc_80631A7C;
    }
}

loc_80631A68:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(16));
}

loc_80631A6C:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631AB8;
    }
}

loc_80631A70:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(0));
}

loc_80631A74:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631AB0;
    }
}

loc_80631A78:
{
    goto loc_80631AF0;
}

loc_80631A7C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(85));
}

loc_80631A80:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631AC8;
    }
}

loc_80631A84:
{
    goto loc_80631AC0;
}

loc_80631A88:
{
}

loc_80631A8C:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(104))) {
        goto loc_80631AA4;
    }
}

loc_80631A90:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(94));
}

loc_80631A94:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631AE0;
    }
}

loc_80631A98:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(90));
}

loc_80631A9C:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631AD8;
    }
}

loc_80631AA0:
{
    goto loc_80631AD0;
}

loc_80631AA4:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(149));
}

loc_80631AA8:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631AF0;
    }
}

loc_80631AAC:
{
    goto loc_80631AE8;
}

loc_80631AB0:
{
    cached_r3 = 0;
return static_cast<uint64_t>(cached_r3);
}

loc_80631AB8:
{
    cached_r3 = 0;
return static_cast<uint64_t>(cached_r3);
}

loc_80631AC0:
{
    cached_r3 = 1;
return static_cast<uint64_t>(cached_r3);
}

loc_80631AC8:
{
    cached_r3 = 0;
return static_cast<uint64_t>(cached_r3);
}

loc_80631AD0:
{
    cached_r3 = 1;
return static_cast<uint64_t>(cached_r3);
}

loc_80631AD8:
{
    cached_r3 = 0;
return static_cast<uint64_t>(cached_r3);
}

loc_80631AE0:
{
    cached_r3 = 1;
return static_cast<uint64_t>(cached_r3);
}

loc_80631AE8:
{
    cached_r3 = 0;
return static_cast<uint64_t>(cached_r3);
}

loc_80631AF0:
{
    cached_r3 = 0;
return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x80631A58 symbol=func_80631A58_statefree_v0 gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80631A58_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_80631A58;

loc_80631A58:
{
}

loc_80631A5C:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(88))) {
        goto loc_80631A88;
    }
}

loc_80631A60:
{
}

loc_80631A64:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(72))) {
        goto loc_80631A7C;
    }
}

loc_80631A68:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(16));
}

loc_80631A6C:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631AB8;
    }
}

loc_80631A70:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(0));
}

loc_80631A74:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631AB0;
    }
}

loc_80631A78:
{
    goto loc_80631AF0;
}

loc_80631A7C:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(85));
}

loc_80631A80:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631AC8;
    }
}

loc_80631A84:
{
    goto loc_80631AC0;
}

loc_80631A88:
{
}

loc_80631A8C:
{
    if ((static_cast<int32_t>(cached_r3) >= static_cast<int32_t>(104))) {
        goto loc_80631AA4;
    }
}

loc_80631A90:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(94));
}

loc_80631A94:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631AE0;
    }
}

loc_80631A98:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(90));
}

loc_80631A9C:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631AD8;
    }
}

loc_80631AA0:
{
    goto loc_80631AD0;
}

loc_80631AA4:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(149));
}

loc_80631AA8:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80631AF0;
    }
}

loc_80631AAC:
{
    goto loc_80631AE8;
}

loc_80631AB0:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631AB8:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631AC0:
{
    cached_r3 = 1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631AC8:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631AD0:
{
    cached_r3 = 1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631AD8:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631AE0:
{
    cached_r3 = 1;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631AE8:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80631AF0:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80631A58 symbol=func_80631A58_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80631A58 func_80631A58 preserves=true fpr_mask=0x00000000

