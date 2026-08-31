#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F5964(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800F5964;

loc_800F5964:
{
    r3 = 0x802F0000u;
    r3 = (r3 + 9280);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 12), 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F5974:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F5980;
    }
}

loc_800F5978:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_800F5980:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F5988:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F59D4;
    }
}

loc_800F598C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F5994:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F59D4;
    }
}

loc_800F5998:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F59A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F59D4;
    }
}

loc_800F59A4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F59AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F59D4;
    }
}

loc_800F59B0:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F59B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F59D4;
    }
}

loc_800F59BC:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F59C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F59D4;
    }
}

loc_800F59C8:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F59D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F59DC;
    }
}

loc_800F59D4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_800F59DC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_800F5964_statefree_v0(uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;

    uint32_t cached_cr = 0;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    goto loc_800F5964;

loc_800F5964:
{
    cached_r3 = 0x802F0000u;
    cached_r3 = (cached_r3 + 9280);
    guest_range_0 = MemoryInline::ResolveRangeHost((cached_r3 + 12), 0, 32u, true, false);
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (cached_r3 + 12));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_800F5974:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_800F5980;
    }
}

loc_800F5978:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_800F5980:
{
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (cached_r3 + 20));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_800F5988:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_800F59D4;
    }
}

loc_800F598C:
{
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (cached_r3 + 32));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_800F5994:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_800F59D4;
    }
}

loc_800F5998:
{
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (cached_r3 + 16));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_800F59A0:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_800F59D4;
    }
}

loc_800F59A4:
{
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (cached_r3 + 36));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_800F59AC:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_800F59D4;
    }
}

loc_800F59B0:
{
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (cached_r3 + 24));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_800F59B8:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_800F59D4;
    }
}

loc_800F59BC:
{
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (cached_r3 + 28));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_800F59C4:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_800F59D4;
    }
}

loc_800F59C8:
{
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (cached_r3 + 40));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_800F59D0:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_800F59DC;
    }
}

loc_800F59D4:
{
    cached_r3 = 0;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_800F59DC:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x800F5964 symbol=func_800F5964_statefree_v0 gpr_in=0x00000000 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_800F5964_statefree(uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    goto loc_800F5964;

loc_800F5964:
{
    cached_r3 = 0x802F0000u;
    cached_r3 = (cached_r3 + 9280);
    guest_range_0 = MemoryInline::ResolveRangeHost((cached_r3 + 12), 0, 32u, true, false);
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (cached_r3 + 12));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_800F5974:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_800F5980;
    }
}

loc_800F5978:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_800F5980:
{
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (cached_r3 + 20));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_800F5988:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_800F59D4;
    }
}

loc_800F598C:
{
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (cached_r3 + 32));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_800F5994:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_800F59D4;
    }
}

loc_800F5998:
{
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (cached_r3 + 16));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_800F59A0:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_800F59D4;
    }
}

loc_800F59A4:
{
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (cached_r3 + 36));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_800F59AC:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_800F59D4;
    }
}

loc_800F59B0:
{
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (cached_r3 + 24));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_800F59B8:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_800F59D4;
    }
}

loc_800F59BC:
{
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (cached_r3 + 28));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_800F59C4:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_800F59D4;
    }
}

loc_800F59C8:
{
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (cached_r3 + 40));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_800F59D0:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_800F59DC;
    }
}

loc_800F59D4:
{
    cached_r3 = 0;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_800F59DC:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x800F5964 symbol=func_800F5964_statefree gpr_in=0x00000000 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800F5964 func_800F5964 preserves=true fpr_mask=0x00000000

