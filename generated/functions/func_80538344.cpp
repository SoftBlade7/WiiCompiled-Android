#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80538344(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80538344;

loc_80538344:
{
    r3 = 0x80890000u;
    r3 = (r3 + 568);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 40u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80538350:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053835C;
    }
}

loc_80538354:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8053835C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80538364:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80538370;
    }
}

loc_80538368:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80538370:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80538378:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80538384;
    }
}

loc_8053837C:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80538384:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8053838C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80538398;
    }
}

loc_80538390:
{
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80538398:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_805383A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805383AC;
    }
}

loc_805383A4:
{
    r3 = 4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_805383AC:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_805383B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805383C0;
    }
}

loc_805383B8:
{
    r3 = 5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_805383C0:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_805383C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805383D4;
    }
}

loc_805383CC:
{
    r3 = 6;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_805383D4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_805383DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805383E8;
    }
}

loc_805383E0:
{
    r3 = 7;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_805383E8:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_805383F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805383FC;
    }
}

loc_805383F4:
{
    r3 = 8;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_805383FC:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80538404:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80538410;
    }
}

loc_80538408:
{
    r3 = 9;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80538410:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80538344_statefree(uint32_t native_r4, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;
    uint32_t cached_r4 = native_r4;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    goto loc_80538344;

loc_80538344:
{
    cached_r3 = 0x80890000u;
    cached_r3 = (cached_r3 + 568);
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r3, 0, 40u, true, false);
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, cached_r3);
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(cached_r0));
}

loc_80538350:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_8053835C;
    }
}

loc_80538354:
{
    cached_r3 = 0;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_8053835C:
{
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (cached_r3 + 4));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(cached_r0));
}

loc_80538364:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_80538370;
    }
}

loc_80538368:
{
    cached_r3 = 1;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80538370:
{
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (cached_r3 + 8));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(cached_r0));
}

loc_80538378:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_80538384;
    }
}

loc_8053837C:
{
    cached_r3 = 2;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80538384:
{
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (cached_r3 + 12));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(cached_r0));
}

loc_8053838C:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_80538398;
    }
}

loc_80538390:
{
    cached_r3 = 3;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80538398:
{
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (cached_r3 + 16));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(cached_r0));
}

loc_805383A0:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_805383AC;
    }
}

loc_805383A4:
{
    cached_r3 = 4;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_805383AC:
{
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (cached_r3 + 20));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(cached_r0));
}

loc_805383B4:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_805383C0;
    }
}

loc_805383B8:
{
    cached_r3 = 5;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_805383C0:
{
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (cached_r3 + 24));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(cached_r0));
}

loc_805383C8:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_805383D4;
    }
}

loc_805383CC:
{
    cached_r3 = 6;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_805383D4:
{
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (cached_r3 + 28));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(cached_r0));
}

loc_805383DC:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_805383E8;
    }
}

loc_805383E0:
{
    cached_r3 = 7;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_805383E8:
{
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (cached_r3 + 32));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(cached_r0));
}

loc_805383F0:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_805383FC;
    }
}

loc_805383F4:
{
    cached_r3 = 8;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_805383FC:
{
    cached_r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (cached_r3 + 36));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r4), static_cast<int32_t>(cached_r0));
}

loc_80538404:
{
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_80538410;
    }
}

loc_80538408:
{
    cached_r3 = 9;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

loc_80538410:
{
    cached_r3 = -1;

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80538344 symbol=func_80538344_statefree gpr_in=0x00000010 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80538344 func_80538344 preserves=true fpr_mask=0x00000000

