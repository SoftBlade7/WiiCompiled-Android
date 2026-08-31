#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008AE30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8008AE30;

loc_8008AE30:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 30), 0, 24u, true, false);
    r5 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 30));
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 24u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 0u, r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_8008AE3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008AE48;
    }
}

loc_8008AE40:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8008AE48:
{
    r5 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r3 + 32));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r4 + 2));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_8008AE54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008AE60;
    }
}

loc_8008AE58:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8008AE60:
{
    r5 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 34));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_8008AE6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008AE78;
    }
}

loc_8008AE70:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8008AE78:
{
    r5 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r3 + 36));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r4 + 6));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_8008AE84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008AE90;
    }
}

loc_8008AE88:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8008AE90:
{
    r5 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r3 + 38));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r4 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_8008AE9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008AEA8;
    }
}

loc_8008AEA0:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8008AEA8:
{
    r5 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r3 + 40));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r4 + 10));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_8008AEB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008AEC0;
    }
}

loc_8008AEB8:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8008AEC0:
{
    r5 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r3 + 42));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r4 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_8008AECC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008AED8;
    }
}

loc_8008AED0:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8008AED8:
{
    r5 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r3 + 44));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r4 + 14));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_8008AEE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008AEF0;
    }
}

loc_8008AEE8:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8008AEF0:
{
    r5 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r3 + 46));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 16u, (r4 + 16));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_8008AEFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008AF08;
    }
}

loc_8008AF00:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8008AF08:
{
    r5 = MemoryInline::ReadResolved16(guest_range_0, 18u, (r3 + 48));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 18u, (r4 + 18));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_8008AF14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008AF20;
    }
}

loc_8008AF18:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8008AF20:
{
    r5 = MemoryInline::ReadResolved16(guest_range_0, 20u, (r3 + 50));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 20u, (r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_8008AF2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008AF38;
    }
}

loc_8008AF30:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8008AF38:
{
    r5 = MemoryInline::ReadResolved16(guest_range_0, 22u, (r3 + 52));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 22u, (r4 + 22));
    r3 = (r0 - r5);
    r0 = (r5 - r0);
    r0 = (r3 | r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_8008AE30_statefree(uint32_t native_r3, uint32_t native_r4, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = 0;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    goto loc_8008AE30;

loc_8008AE30:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((cached_r3 + 30), 0, 24u, true, false);
    cached_r5 = MemoryInline::ReadResolved16(guest_range_0, 0u, (cached_r3 + 30));
    guest_range_1 = MemoryInline::ResolveRangeHost(cached_r4, 0, 24u, true, false);
    cached_r0 = MemoryInline::ReadResolved16(guest_range_1, 0u, cached_r4);
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r5), static_cast<uint32_t>(cached_r0));
}

loc_8008AE3C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_8008AE48;
    }
}

loc_8008AE40:
{
    cached_r3 = 1;

return static_cast<uint64_t>(cached_r3);
}

loc_8008AE48:
{
    cached_r5 = MemoryInline::ReadResolved16(guest_range_0, 2u, (cached_r3 + 32));
    cached_r0 = MemoryInline::ReadResolved16(guest_range_1, 2u, (cached_r4 + 2));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r5), static_cast<uint32_t>(cached_r0));
}

loc_8008AE54:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_8008AE60;
    }
}

loc_8008AE58:
{
    cached_r3 = 1;

return static_cast<uint64_t>(cached_r3);
}

loc_8008AE60:
{
    cached_r5 = MemoryInline::ReadResolved16(guest_range_0, 4u, (cached_r3 + 34));
    cached_r0 = MemoryInline::ReadResolved16(guest_range_1, 4u, (cached_r4 + 4));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r5), static_cast<uint32_t>(cached_r0));
}

loc_8008AE6C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_8008AE78;
    }
}

loc_8008AE70:
{
    cached_r3 = 1;

return static_cast<uint64_t>(cached_r3);
}

loc_8008AE78:
{
    cached_r5 = MemoryInline::ReadResolved16(guest_range_0, 6u, (cached_r3 + 36));
    cached_r0 = MemoryInline::ReadResolved16(guest_range_1, 6u, (cached_r4 + 6));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r5), static_cast<uint32_t>(cached_r0));
}

loc_8008AE84:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_8008AE90;
    }
}

loc_8008AE88:
{
    cached_r3 = 1;

return static_cast<uint64_t>(cached_r3);
}

loc_8008AE90:
{
    cached_r5 = MemoryInline::ReadResolved16(guest_range_0, 8u, (cached_r3 + 38));
    cached_r0 = MemoryInline::ReadResolved16(guest_range_1, 8u, (cached_r4 + 8));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r5), static_cast<uint32_t>(cached_r0));
}

loc_8008AE9C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_8008AEA8;
    }
}

loc_8008AEA0:
{
    cached_r3 = 1;

return static_cast<uint64_t>(cached_r3);
}

loc_8008AEA8:
{
    cached_r5 = MemoryInline::ReadResolved16(guest_range_0, 10u, (cached_r3 + 40));
    cached_r0 = MemoryInline::ReadResolved16(guest_range_1, 10u, (cached_r4 + 10));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r5), static_cast<uint32_t>(cached_r0));
}

loc_8008AEB4:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_8008AEC0;
    }
}

loc_8008AEB8:
{
    cached_r3 = 1;

return static_cast<uint64_t>(cached_r3);
}

loc_8008AEC0:
{
    cached_r5 = MemoryInline::ReadResolved16(guest_range_0, 12u, (cached_r3 + 42));
    cached_r0 = MemoryInline::ReadResolved16(guest_range_1, 12u, (cached_r4 + 12));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r5), static_cast<uint32_t>(cached_r0));
}

loc_8008AECC:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_8008AED8;
    }
}

loc_8008AED0:
{
    cached_r3 = 1;

return static_cast<uint64_t>(cached_r3);
}

loc_8008AED8:
{
    cached_r5 = MemoryInline::ReadResolved16(guest_range_0, 14u, (cached_r3 + 44));
    cached_r0 = MemoryInline::ReadResolved16(guest_range_1, 14u, (cached_r4 + 14));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r5), static_cast<uint32_t>(cached_r0));
}

loc_8008AEE4:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_8008AEF0;
    }
}

loc_8008AEE8:
{
    cached_r3 = 1;

return static_cast<uint64_t>(cached_r3);
}

loc_8008AEF0:
{
    cached_r5 = MemoryInline::ReadResolved16(guest_range_0, 16u, (cached_r3 + 46));
    cached_r0 = MemoryInline::ReadResolved16(guest_range_1, 16u, (cached_r4 + 16));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r5), static_cast<uint32_t>(cached_r0));
}

loc_8008AEFC:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_8008AF08;
    }
}

loc_8008AF00:
{
    cached_r3 = 1;

return static_cast<uint64_t>(cached_r3);
}

loc_8008AF08:
{
    cached_r5 = MemoryInline::ReadResolved16(guest_range_0, 18u, (cached_r3 + 48));
    cached_r0 = MemoryInline::ReadResolved16(guest_range_1, 18u, (cached_r4 + 18));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r5), static_cast<uint32_t>(cached_r0));
}

loc_8008AF14:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_8008AF20;
    }
}

loc_8008AF18:
{
    cached_r3 = 1;

return static_cast<uint64_t>(cached_r3);
}

loc_8008AF20:
{
    cached_r5 = MemoryInline::ReadResolved16(guest_range_0, 20u, (cached_r3 + 50));
    cached_r0 = MemoryInline::ReadResolved16(guest_range_1, 20u, (cached_r4 + 20));
    SetCRResident(cached_cr, cached_xer, 0, static_cast<uint32_t>(cached_r5), static_cast<uint32_t>(cached_r0));
}

loc_8008AF2C:
{
    if (((cached_cr & 0x20000000u) != 0)) {
        goto loc_8008AF38;
    }
}

loc_8008AF30:
{
    cached_r3 = 1;

return static_cast<uint64_t>(cached_r3);
}

loc_8008AF38:
{
    cached_r5 = MemoryInline::ReadResolved16(guest_range_0, 22u, (cached_r3 + 52));
    cached_r0 = MemoryInline::ReadResolved16(guest_range_1, 22u, (cached_r4 + 22));
    cached_r3 = (cached_r0 - cached_r5);
    cached_r0 = (cached_r5 - cached_r0);
    cached_r0 = (cached_r3 | cached_r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(1));
    cached_r3 = (r3_rot_0 & 1);

return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x8008AE30 symbol=func_8008AE30_statefree gpr_in=0x00000018 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008AE30 func_8008AE30 preserves=true fpr_mask=0x00000000

