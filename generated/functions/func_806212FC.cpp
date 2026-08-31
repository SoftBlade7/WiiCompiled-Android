#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806212FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806212FC;

loc_806212FC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 21u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 20u, (r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80621304:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80621310;
    }
}

loc_80621308:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80621310:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_80621318:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80621324;
    }
}

loc_8062131C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80621324:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8062132C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80621338;
    }
}

loc_80621330:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80621338:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80621340:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8062134C;
    }
}

loc_80621344:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8062134C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80621354:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80621360;
    }
}

loc_80621358:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80621360:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 3));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80621368:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80621374;
    }
}

loc_8062136C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80621374:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8062137C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80621388;
    }
}

loc_80621380:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80621388:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80621390:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8062139C;
    }
}

loc_80621394:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8062139C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_806212FC_statefree_v0(uint32_t native_r3, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cached_cr = 0;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    goto loc_806212FC;

loc_806212FC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r3, 0, 21u, true, false);
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 20u, (cached_r3 + 20));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_80621304:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80621310;
    }
}

loc_80621308:
{
    cached_r3 = 0;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80621310:
{
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (cached_r3 + 8));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(-1));
}

loc_80621318:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80621324;
    }
}

loc_8062131C:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80621324:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, cached_r3);
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_8062132C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80621338;
    }
}

loc_80621330:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80621338:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (cached_r3 + 1));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_80621340:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_8062134C;
    }
}

loc_80621344:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_8062134C:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (cached_r3 + 2));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_80621354:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80621360;
    }
}

loc_80621358:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80621360:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (cached_r3 + 3));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_80621368:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80621374;
    }
}

loc_8062136C:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80621374:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (cached_r3 + 4));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_8062137C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80621388;
    }
}

loc_80621380:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80621388:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (cached_r3 + 5));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_80621390:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_8062139C;
    }
}

loc_80621394:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_8062139C:
{
    cached_r3 = 0;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x806212FC symbol=func_806212FC_statefree_v0 gpr_in=0x00000008 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_806212FC_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    goto loc_806212FC;

loc_806212FC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r3, 0, 21u, true, false);
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 20u, (cached_r3 + 20));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_80621304:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80621310;
    }
}

loc_80621308:
{
    cached_r3 = 0;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80621310:
{
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (cached_r3 + 8));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(-1));
}

loc_80621318:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80621324;
    }
}

loc_8062131C:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80621324:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, cached_r3);
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_8062132C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80621338;
    }
}

loc_80621330:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80621338:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (cached_r3 + 1));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_80621340:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_8062134C;
    }
}

loc_80621344:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_8062134C:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (cached_r3 + 2));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_80621354:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80621360;
    }
}

loc_80621358:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80621360:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (cached_r3 + 3));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_80621368:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80621374;
    }
}

loc_8062136C:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80621374:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (cached_r3 + 4));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_8062137C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_80621388;
    }
}

loc_80621380:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80621388:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (cached_r3 + 5));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
}

loc_80621390:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_8062139C;
    }
}

loc_80621394:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_8062139C:
{
    cached_r3 = 0;

return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x806212FC symbol=func_806212FC_statefree gpr_in=0x00000008 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806212FC func_806212FC preserves=true fpr_mask=0x00000000

