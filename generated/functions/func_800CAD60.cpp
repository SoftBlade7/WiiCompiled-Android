#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CAD60(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_800CAD60;

loc_800CAD60:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 22u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 4));
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 22u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
    r5 = (r5 & -32);
    r0 = (r0 & -32);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_800CAD74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CAD80;
    }
}

loc_800CAD78:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_800CAD80:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 8));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    r5 = (r5 & -64);
    r0 = (r0 & -64);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_800CAD94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CADA0;
    }
}

loc_800CAD98:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_800CADA0:
{
    r5 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r3 + 14));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r4 + 14));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_800CADAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CADB8;
    }
}

loc_800CADB0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_800CADB8:
{
    r5 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r3 + 16));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 16u, (r4 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_800CADC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CADD0;
    }
}

loc_800CADC8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_800CADD0:
{
    r5 = MemoryInline::ReadResolved16(guest_range_0, 18u, (r3 + 18));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 18u, (r4 + 18));
    r5 = (r5 & 65534);
    r0 = (r0 & 65534);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_800CADE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CADF0;
    }
}

loc_800CADE8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_800CADF0:
{
    r5 = MemoryInline::ReadResolved16(guest_range_0, 20u, (r3 + 20));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 20u, (r4 + 20));
    r5 = (r5 & 65534);
    r0 = (r0 & 65534);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_800CAE04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CAE10;
    }
}

loc_800CAE08:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_800CAE10:
{
    r5 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r3 + 12));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r4 + 12));
    r5 = (r5 & 65528);
    r0 = (r0 & 65528);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_800CAE24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CAE30;
    }
}

loc_800CAE28:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_800CAE30:
{
    r5 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r3 + 2));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r4 + 2));
    r5 = (r5 & 65504);
    r0 = (r0 & 65504);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_800CAE44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CAE50;
    }
}

loc_800CAE48:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_800CAE50:
{
    r3 = MemoryInline::ReadResolved16(guest_range_0, 0u, r3);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 0u, r4);
    r3 = (r3 & 65472);
    r0 = (r0 & 65472);
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800CAD60 func_800CAD60 preserves=true fpr_mask=0x00000000
