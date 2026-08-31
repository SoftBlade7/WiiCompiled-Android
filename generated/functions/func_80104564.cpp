#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80104564(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80104564;

loc_80104564:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 1476));
    goto loc_80104594;
}

loc_80104570:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_80104578:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80104590;
    }
}

loc_8010457C:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80104584:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80104590;
    }
}

loc_80104588:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80104590:
{
    r3 = MemoryInline::FlatRead32((r3 + 32));
}

loc_80104594:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80104598:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80104570;
    }
}

loc_8010459C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_80104564_statefree_v0(uint32_t native_r0, uint32_t native_r3, uint32_t native_xer)
{

    uint32_t cached_r0 = native_r0;
    uint32_t cached_r3 = native_r3;

    uint32_t cached_cr = 0;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_80104564;

loc_80104564:
{
    cached_r3 = MemoryInline::FlatRead32(cached_r3);
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 1476));
    goto loc_80104594;
}

loc_80104570:
{
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 8));
}

loc_80104578:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_80104590;
    }
}

loc_8010457C:
{
    cached_r0 = MemoryInline::FlatRead32(cached_r3);
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(3));
}

loc_80104584:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80104590;
    }
}

loc_80104588:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80104590:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 32));
}

loc_80104594:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(0));
}

loc_80104598:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_80104570;
    }
}

loc_8010459C:
{
    cached_r3 = 0;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80104564 symbol=func_80104564_statefree_v0 gpr_in=0x00000009 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80104564_statefree(uint32_t native_r0, uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = native_r0;
    uint32_t cached_r3 = native_r3;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_80104564;

loc_80104564:
{
    cached_r3 = MemoryInline::FlatRead32(cached_r3);
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 1476));
    goto loc_80104594;
}

loc_80104570:
{
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 8));
}

loc_80104578:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_80104590;
    }
}

loc_8010457C:
{
    cached_r0 = MemoryInline::FlatRead32(cached_r3);
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(3));
}

loc_80104584:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80104590;
    }
}

loc_80104588:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80104590:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 32));
}

loc_80104594:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(0));
}

loc_80104598:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_80104570;
    }
}

loc_8010459C:
{
    cached_r3 = 0;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80104564 symbol=func_80104564_statefree gpr_in=0x00000009 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80104564 func_80104564 preserves=true fpr_mask=0x00000000

