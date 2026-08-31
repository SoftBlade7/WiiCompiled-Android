#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807028E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807028E4;

loc_807028E4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10392));
    r0 = MemoryInline::FlatRead8((r3 + 2212));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_807028F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80702900;
    }
}

loc_807028F8:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80702900:
{
    r0 = MemoryInline::FlatRead8((r3 + 2213));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80702908:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80702914;
    }
}

loc_8070290C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80702914:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10232));
}

loc_80702920:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8070292C;
    }
}

loc_80702924:
{
    r0 = MemoryInline::FlatRead8((r3 + 112));
    goto loc_80702930;
}

loc_8070292C:
{
    r0 = 0;
}

loc_80702930:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80702934:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80702940;
    }
}

loc_80702938:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80702940:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10320));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80702950:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80702964;
    }
}

loc_80702954:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80702958:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80702964;
    }
}

loc_8070295C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80702964:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_807028E4_statefree_v0(uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;

    uint32_t cached_cr = 0;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_807028E4;

loc_807028E4:
{
    cached_r3 = 0x809C0000u;
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 10392));
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 2212));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(1));
}

loc_807028F4:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_80702900;
    }
}

loc_807028F8:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80702900:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 2213));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(1));
}

loc_80702908:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_80702914;
    }
}

loc_8070290C:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80702914:
{
    cached_r3 = 0x809C0000u;
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 10232));
}

loc_80702920:
{
    if ((static_cast<int32_t>(cached_r3) == static_cast<int32_t>(0))) {
        goto loc_8070292C;
    }
}

loc_80702924:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 112));
    goto loc_80702930;
}

loc_8070292C:
{
    cached_r0 = 0;
}

loc_80702930:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_80702934:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80702940;
    }
}

loc_80702938:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80702940:
{
    cached_r3 = 0x809C0000u;
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 10320));
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 8));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(3));
}

loc_80702950:
{
    if (((cached_cr & 0x80000000u) != 0)) {
        goto loc_80702964;
    }
}

loc_80702954:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(4));
}

loc_80702958:
{
    if (((cached_cr & 0x40000000u) != 0)) {
        goto loc_80702964;
    }
}

loc_8070295C:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80702964:
{
    cached_r3 = 0;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x807028E4 symbol=func_807028E4_statefree_v0 gpr_in=0x00000000 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_807028E4_statefree(uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_807028E4;

loc_807028E4:
{
    cached_r3 = 0x809C0000u;
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 10392));
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 2212));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(1));
}

loc_807028F4:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_80702900;
    }
}

loc_807028F8:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80702900:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 2213));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(1));
}

loc_80702908:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_80702914;
    }
}

loc_8070290C:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80702914:
{
    cached_r3 = 0x809C0000u;
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 10232));
}

loc_80702920:
{
    if ((static_cast<int32_t>(cached_r3) == static_cast<int32_t>(0))) {
        goto loc_8070292C;
    }
}

loc_80702924:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 112));
    goto loc_80702930;
}

loc_8070292C:
{
    cached_r0 = 0;
}

loc_80702930:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_80702934:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80702940;
    }
}

loc_80702938:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80702940:
{
    cached_r3 = 0x809C0000u;
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 10320));
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 8));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(3));
}

loc_80702950:
{
    if (((cached_cr & 0x80000000u) != 0)) {
        goto loc_80702964;
    }
}

loc_80702954:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(4));
}

loc_80702958:
{
    if (((cached_cr & 0x40000000u) != 0)) {
        goto loc_80702964;
    }
}

loc_8070295C:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80702964:
{
    cached_r3 = 0;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x807028E4 symbol=func_807028E4_statefree gpr_in=0x00000000 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807028E4 func_807028E4 preserves=true fpr_mask=0x00000000

