#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800727D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800727D0;

loc_800727D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800727D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800727FC;
    }
}

loc_800727D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_800727DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80072804;
    }
}

loc_800727E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_800727E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007280C;
    }
}

loc_800727E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(3));
}

loc_800727EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80072814;
    }
}

loc_800727F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(4));
}

loc_800727F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007281C;
    }
}

loc_800727F8:
{
    goto loc_80072824;
}

loc_800727FC:
{
    r3 = MemoryInline::FlatRead32((r3 + 292));
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80072804:
{
    r3 = MemoryInline::FlatRead32((r3 + 296));
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8007280C:
{
    r3 = MemoryInline::FlatRead32((r3 + 300));
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80072814:
{
    r3 = MemoryInline::FlatRead32((r3 + 304));
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8007281C:
{
    r3 = MemoryInline::FlatRead32((r3 + 308));
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80072824:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_800727D0_statefree_v0(uint32_t native_r3, uint32_t native_r4, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_800727D0;

loc_800727D0:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(0));
}

loc_800727D4:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_800727FC;
    }
}

loc_800727D8:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(1));
}

loc_800727DC:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80072804;
    }
}

loc_800727E0:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(2));
}

loc_800727E4:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_8007280C;
    }
}

loc_800727E8:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(3));
}

loc_800727EC:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80072814;
    }
}

loc_800727F0:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(4));
}

loc_800727F4:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_8007281C;
    }
}

loc_800727F8:
{
    goto loc_80072824;
}

loc_800727FC:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 292));
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80072804:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 296));
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_8007280C:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 300));
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80072814:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 304));
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_8007281C:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 308));
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80072824:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x800727D0 symbol=func_800727D0_statefree_v0 gpr_in=0x00000018 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_800727D0_statefree(uint32_t native_r3, uint32_t native_r4, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_800727D0;

loc_800727D0:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(0));
}

loc_800727D4:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_800727FC;
    }
}

loc_800727D8:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(1));
}

loc_800727DC:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80072804;
    }
}

loc_800727E0:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(2));
}

loc_800727E4:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_8007280C;
    }
}

loc_800727E8:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(3));
}

loc_800727EC:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80072814;
    }
}

loc_800727F0:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(4));
}

loc_800727F4:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_8007281C;
    }
}

loc_800727F8:
{
    goto loc_80072824;
}

loc_800727FC:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 292));
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80072804:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 296));
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_8007280C:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 300));
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80072814:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 304));
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_8007281C:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 308));
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80072824:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x800727D0 symbol=func_800727D0_statefree gpr_in=0x00000018 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800727D0 func_800727D0 preserves=true fpr_mask=0x00000000

