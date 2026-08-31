#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80111778(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80111778;

loc_80111778:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8011177C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80111788;
    }
}

loc_80111780:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_80111788:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8011178C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80111798;
    }
}

loc_80111790:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_80111798:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8011179C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801117A8;
    }
}

loc_801117A0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_801117A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_801117AC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801117B8;
    }
}

loc_801117B0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_801117B8:
{
    r7 = 0;
    r0 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r4, r3);
    r3 = 1;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r4 + 4), r5);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r4 + 8), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r4 + 12), r7);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r4 + 16), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r4 + 20), r7);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r4 + 24), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r4 + 28), r0);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r4 + 32), r7);
    }
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r7));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000089 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80111778 func_80111778 preserves=true fpr_mask=0x00000000
