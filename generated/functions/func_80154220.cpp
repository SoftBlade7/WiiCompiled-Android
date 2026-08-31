#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80154220(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80154220;

loc_80154220:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 10), 0, 10u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 18));
    r0 = (r0 & 1);
}

loc_80154228:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80154234;
    }
}

loc_8015422C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 10));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
}

loc_80154234:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 18));
    r0 = (r0 & 2);
}

loc_8015423C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80154248;
    }
}

loc_80154240:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 11));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
}

loc_80154248:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 18));
    r0 = (r0 & 4);
}

loc_80154250:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8015425C;
    }
}

loc_80154254:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 12));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
}

loc_8015425C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 18));
    r0 = (r0 & 8);
}

loc_80154264:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80154270;
    }
}

loc_80154268:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 13));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
}

loc_80154270:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 18));
    r0 = (r0 & 16);
}

loc_80154278:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80154284;
    }
}

loc_8015427C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 14));
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
}

loc_80154284:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 18));
    r0 = (r0 & 16128);
}

loc_8015428C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80154298;
    }
}

loc_80154290:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r4 + 15));
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
}

loc_80154298:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 18));
    r0 = (r0 & 32);
}

loc_801542A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801542AC;
    }
}

loc_801542A4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r4 + 16));
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r0));
}

loc_801542AC:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 18));
    r0 = (r0 & 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801542B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_801542B8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r4 + 17));
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80154220 func_80154220 preserves=true fpr_mask=0x00000000
