#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80072A20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80072A20;

loc_80072A20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80072A24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80072A44;
    }
}

loc_80072A28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_80072A2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80072A4C;
    }
}

loc_80072A30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_80072A34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80072A54;
    }
}

loc_80072A38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(3));
}

loc_80072A3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80072A5C;
    }
}

loc_80072A40:
{
    goto loc_80072A64;
}

loc_80072A44:
{
    r3 = MemoryInline::FlatRead32((r3 + 264));
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80072A4C:
{
    r3 = MemoryInline::FlatRead32((r3 + 268));
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80072A54:
{
    r3 = MemoryInline::FlatRead32((r3 + 272));
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80072A5C:
{
    r3 = MemoryInline::FlatRead32((r3 + 276));
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80072A64:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_80072A20_statefree_v1(uint32_t native_r3, uint32_t native_r4, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_80072A20;

loc_80072A20:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(0));
}

loc_80072A24:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80072A44;
    }
}

loc_80072A28:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(1));
}

loc_80072A2C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80072A4C;
    }
}

loc_80072A30:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(2));
}

loc_80072A34:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80072A54;
    }
}

loc_80072A38:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(3));
}

loc_80072A3C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80072A5C;
    }
}

loc_80072A40:
{
    goto loc_80072A64;
}

loc_80072A44:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 264));
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80072A4C:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 268));
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80072A54:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 272));
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80072A5C:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 276));
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80072A64:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80072A20 symbol=func_80072A20_statefree_v1 gpr_in=0x00000018 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_80072A20_statefree_v0(uint32_t native_r3, uint32_t native_r4, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    uint32_t cached_cr = 0;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_80072A20;

loc_80072A20:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(0));
}

loc_80072A24:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80072A44;
    }
}

loc_80072A28:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(1));
}

loc_80072A2C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80072A4C;
    }
}

loc_80072A30:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(2));
}

loc_80072A34:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80072A54;
    }
}

loc_80072A38:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(3));
}

loc_80072A3C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80072A5C;
    }
}

loc_80072A40:
{
    goto loc_80072A64;
}

loc_80072A44:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 264));
return static_cast<uint64_t>(cached_r3);
}

loc_80072A4C:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 268));
return static_cast<uint64_t>(cached_r3);
}

loc_80072A54:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 272));
return static_cast<uint64_t>(cached_r3);
}

loc_80072A5C:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 276));
return static_cast<uint64_t>(cached_r3);
}

loc_80072A64:
{
    cached_r3 = 0;
return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x80072A20 symbol=func_80072A20_statefree_v0 gpr_in=0x00000018 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80072A20_statefree(uint32_t native_r3, uint32_t native_r4, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_80072A20;

loc_80072A20:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(0));
}

loc_80072A24:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80072A44;
    }
}

loc_80072A28:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(1));
}

loc_80072A2C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80072A4C;
    }
}

loc_80072A30:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(2));
}

loc_80072A34:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80072A54;
    }
}

loc_80072A38:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(3));
}

loc_80072A3C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80072A5C;
    }
}

loc_80072A40:
{
    goto loc_80072A64;
}

loc_80072A44:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 264));
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80072A4C:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 268));
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80072A54:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 272));
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80072A5C:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 276));
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80072A64:
{
    cached_r3 = 0;
return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80072A20 symbol=func_80072A20_statefree gpr_in=0x00000018 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80072A20 func_80072A20 preserves=true fpr_mask=0x00000000

