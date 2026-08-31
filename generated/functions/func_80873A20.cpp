#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80873A20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80873A20;

loc_80873A20:
{
    r0 = MemoryInline::FlatRead32((r3 + 2928));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(7));
}

loc_80873A2C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_80873A30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_80873A34:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_return;
    }
}

loc_80873A38:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_80873A20_statefree_v0(uint32_t native_r3, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cached_cr = 0;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_80873A20;

loc_80873A20:
{
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 2928));
    cached_r3 = 0;
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(7));
}

loc_80873A2C:
{
    if (((cached_cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_80873A30:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(10));
}

loc_80873A34:
{
    if (((cached_cr & 0x40000000u) != 0)) {
        goto loc_return;
    }
}

loc_80873A38:
{
    cached_r3 = 1;

return static_cast<uint64_t>(cached_r3);
}

loc_return:
{

return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x80873A20 symbol=func_80873A20_statefree_v0 gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE uint64_t func_80873A20_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_80873A20;

loc_80873A20:
{
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 2928));
    cached_r3 = 0;
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(7));
}

loc_80873A2C:
{
    if (((cached_cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_80873A30:
{
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(10));
}

loc_80873A34:
{
    if (((cached_cr & 0x40000000u) != 0)) {
        goto loc_return;
    }
}

loc_80873A38:
{
    cached_r3 = 1;

return static_cast<uint64_t>(cached_r3);
}

loc_return:
{

return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x80873A20 symbol=func_80873A20_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80873A20 func_80873A20 preserves=true fpr_mask=0x00000000

