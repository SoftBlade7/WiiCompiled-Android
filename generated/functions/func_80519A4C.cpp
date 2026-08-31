#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80519A4C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80519A4C;

loc_80519A4C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 120), 0, 76u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 120));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80519A54:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80519A60;
    }
}

loc_80519A58:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80519A60:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 128));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80519A68:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80519A74;
    }
}

loc_80519A6C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80519A74:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r3 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80519A7C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80519A88;
    }
}

loc_80519A80:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80519A88:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 144));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80519A90:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80519A9C;
    }
}

loc_80519A94:
{
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80519A9C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 152));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80519AA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80519AB0;
    }
}

loc_80519AA8:
{
    r3 = 4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80519AB0:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r3 + 160));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80519AB8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80519AC4;
    }
}

loc_80519ABC:
{
    r3 = 5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80519AC4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r3 + 168));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80519ACC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80519AD8;
    }
}

loc_80519AD0:
{
    r3 = 6;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80519AD8:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r3 + 176));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80519AE0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80519AEC;
    }
}

loc_80519AE4:
{
    r3 = 7;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80519AEC:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r3 + 184));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80519AF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80519B00;
    }
}

loc_80519AF8:
{
    r3 = 8;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80519B00:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 72u, (r3 + 192));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80519B08:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80519B14;
    }
}

loc_80519B0C:
{
    r3 = 9;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80519B14:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80519A4C func_80519A4C preserves=true fpr_mask=0x00000000
