#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800BC440(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800BC440;

loc_800BC440:
{
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800BC448:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800BC454;
    }
}

loc_800BC44C:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_800BC454:
{
    r3 = MemoryInline::FlatRead32((r3 + 6964));
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_800BC440_statefree_v0(uint32_t native_r13, uint32_t native_xer)
{

    uint32_t cached_r3 = 0;
    uint32_t cached_r13 = native_r13;

    uint32_t cached_cr = 0;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_800BC440;

loc_800BC440:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r13 + -26984));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(0));
}

loc_800BC448:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_800BC454;
    }
}

loc_800BC44C:
{
    cached_r3 = 0;
return static_cast<uint64_t>(cached_r3);
}

loc_800BC454:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 6964));
return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x800BC440 symbol=func_800BC440_statefree_v0 gpr_in=0x00002000 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE uint64_t func_800BC440_statefree(uint32_t native_r13, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r3 = 0;
    uint32_t cached_r13 = native_r13;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_800BC440;

loc_800BC440:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r13 + -26984));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r3), static_cast<int32_t>(0));
}

loc_800BC448:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_800BC454;
    }
}

loc_800BC44C:
{
    cached_r3 = 0;
return static_cast<uint64_t>(cached_r3);
}

loc_800BC454:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 6964));
return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x800BC440 symbol=func_800BC440_statefree gpr_in=0x00002000 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800BC440 func_800BC440 preserves=true fpr_mask=0x00000000

