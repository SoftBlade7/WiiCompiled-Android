#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806AA4CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806AA4CC;

loc_806AA4CC:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 8656));
    r0 = MemoryInline::FlatRead8((r4 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806AA4DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_806AA4E0:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806AA4E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_806AA4EC:
{
    r0 = MemoryInline::FlatRead8((r3 + 150));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806AA4F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806AA4FC;
    }
}

loc_806AA4F8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_806AA4FC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 84), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_806AA4CC_statefree_v0(uint32_t native_r3, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;

    uint32_t cached_cr = 0;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_806AA4CC;

loc_806AA4CC:
{
    cached_r4 = 0x809C0000u;
    cached_r4 = MemoryInline::FlatRead32((cached_r4 + 8656));
    cached_r0 = MemoryInline::FlatRead8((cached_r4 + 16));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_806AA4DC:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_806AA4E0:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 4));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_806AA4E8:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_806AA4EC:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 150));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_806AA4F4:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_806AA4FC;
    }
}

loc_806AA4F8:
{

return static_cast<uint64_t>(cached_r0);
}

loc_806AA4FC:
{
    cached_r0 = 0;
    MemoryInline::FlatWrite32((cached_r3 + 84), cached_r0);

return static_cast<uint64_t>(cached_r0);
}

loc_return:
{

return static_cast<uint64_t>(cached_r0);
}


    return static_cast<uint64_t>(cached_r0);
}
// RECOMP_STATE_FREE_ABI address=0x806AA4CC symbol=func_806AA4CC_statefree_v0 gpr_in=0x00000008 gpr_out=0x00000001 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE uint64_t func_806AA4CC_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;

    goto loc_806AA4CC;

loc_806AA4CC:
{
    cached_r4 = 0x809C0000u;
    cached_r4 = MemoryInline::FlatRead32((cached_r4 + 8656));
    cached_r0 = MemoryInline::FlatRead8((cached_r4 + 16));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_806AA4DC:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_806AA4E0:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 4));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_806AA4E8:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_806AA4EC:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 150));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_806AA4F4:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_806AA4FC;
    }
}

loc_806AA4F8:
{

return static_cast<uint64_t>(cached_r0);
}

loc_806AA4FC:
{
    cached_r0 = 0;
    MemoryInline::FlatWrite32((cached_r3 + 84), cached_r0);

return static_cast<uint64_t>(cached_r0);
}

loc_return:
{

return static_cast<uint64_t>(cached_r0);
}


    return static_cast<uint64_t>(cached_r0);
}
// RECOMP_STATE_FREE_ABI address=0x806AA4CC symbol=func_806AA4CC_statefree gpr_in=0x00000008 gpr_out=0x00000001 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806AA4CC func_806AA4CC preserves=true fpr_mask=0x00000000

