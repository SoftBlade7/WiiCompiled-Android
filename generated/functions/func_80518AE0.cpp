#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80518AE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80518AE0;

loc_80518AE0:
{
    r3 = MemoryInline::FlatRead32((r3 + 56));
}

loc_80518AE8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80518AF4;
    }
}

loc_80518AEC:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_80518AF8;
}

loc_80518AF4:
{
    r0 = 0;
}

loc_80518AF8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80518AFC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80518B24;
    }
}

loc_80518B00:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80518B08:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80518B1C;
    }
}

loc_80518B0C:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 262140);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80518B1C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80518B24:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_80518AE0_statefree_v1(uint32_t native_r3, uint32_t native_r4, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;

    goto loc_80518AE0;

loc_80518AE0:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 56));
}

loc_80518AE8:
{
    if ((static_cast<int32_t>(cached_r3) == static_cast<int32_t>(0))) {
        goto loc_80518AF4;
    }
}

loc_80518AEC:
{
    cached_r0 = MemoryInline::FlatRead16((cached_r3 + 4));
    goto loc_80518AF8;
}

loc_80518AF4:
{
    cached_r0 = 0;
}

loc_80518AF8:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r4), static_cast<uint32_t>(cached_r0));
}

loc_80518AFC:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80518B24;
    }
}

loc_80518B00:
{
    cached_r0 = MemoryInline::FlatRead16((cached_r3 + 4));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r4), static_cast<uint32_t>(cached_r0));
}

loc_80518B08:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80518B1C;
    }
}

loc_80518B0C:
{
    cached_r3 = MemoryInline::FlatRead32(cached_r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r4), static_cast<uint32_t>(2));
    cached_r0 = (r0_rot_0 & 262140);
    r3_addr_0 = (cached_r3 + cached_r0);
    cached_r3 = MemoryInline::FlatRead32(r3_addr_0);

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80518B1C:
{
    cached_r3 = 0;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80518B24:
{
    cached_r3 = 0;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80518AE0 symbol=func_80518AE0_statefree_v1 gpr_in=0x00000018 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_80518AE0_statefree_v0(uint32_t native_r3, uint32_t native_r4, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    uint32_t cached_cr = 0;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;

    goto loc_80518AE0;

loc_80518AE0:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 56));
}

loc_80518AE8:
{
    if ((static_cast<int32_t>(cached_r3) == static_cast<int32_t>(0))) {
        goto loc_80518AF4;
    }
}

loc_80518AEC:
{
    cached_r0 = MemoryInline::FlatRead16((cached_r3 + 4));
    goto loc_80518AF8;
}

loc_80518AF4:
{
    cached_r0 = 0;
}

loc_80518AF8:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r4), static_cast<uint32_t>(cached_r0));
}

loc_80518AFC:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80518B24;
    }
}

loc_80518B00:
{
    cached_r0 = MemoryInline::FlatRead16((cached_r3 + 4));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r4), static_cast<uint32_t>(cached_r0));
}

loc_80518B08:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80518B1C;
    }
}

loc_80518B0C:
{
    cached_r3 = MemoryInline::FlatRead32(cached_r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r4), static_cast<uint32_t>(2));
    cached_r0 = (r0_rot_0 & 262140);
    r3_addr_0 = (cached_r3 + cached_r0);
    cached_r3 = MemoryInline::FlatRead32(r3_addr_0);

return static_cast<uint64_t>(cached_r3);
}

loc_80518B1C:
{
    cached_r3 = 0;

return static_cast<uint64_t>(cached_r3);
}

loc_80518B24:
{
    cached_r3 = 0;

return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x80518AE0 symbol=func_80518AE0_statefree_v0 gpr_in=0x00000018 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80518AE0_statefree(uint32_t native_r3, uint32_t native_r4, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;

    goto loc_80518AE0;

loc_80518AE0:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 56));
}

loc_80518AE8:
{
    if ((static_cast<int32_t>(cached_r3) == static_cast<int32_t>(0))) {
        goto loc_80518AF4;
    }
}

loc_80518AEC:
{
    cached_r0 = MemoryInline::FlatRead16((cached_r3 + 4));
    goto loc_80518AF8;
}

loc_80518AF4:
{
    cached_r0 = 0;
}

loc_80518AF8:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r4), static_cast<uint32_t>(cached_r0));
}

loc_80518AFC:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80518B24;
    }
}

loc_80518B00:
{
    cached_r0 = MemoryInline::FlatRead16((cached_r3 + 4));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r4), static_cast<uint32_t>(cached_r0));
}

loc_80518B08:
{
    if (((cached_cr & 0x80000000u) == 0)) {
        goto loc_80518B1C;
    }
}

loc_80518B0C:
{
    cached_r3 = MemoryInline::FlatRead32(cached_r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r4), static_cast<uint32_t>(2));
    cached_r0 = (r0_rot_0 & 262140);
    r3_addr_0 = (cached_r3 + cached_r0);
    cached_r3 = MemoryInline::FlatRead32(r3_addr_0);

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80518B1C:
{
    cached_r3 = 0;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80518B24:
{
    cached_r3 = 0;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80518AE0 symbol=func_80518AE0_statefree gpr_in=0x00000018 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80518AE0 func_80518AE0 preserves=true fpr_mask=0x00000000

