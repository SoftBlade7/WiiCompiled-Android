#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801FD6A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801FD6A4;

loc_801FD6A4:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FD6A8:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_801FD6B4;
    }
}

loc_801FD6AC:
{
    r3 = 10;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_801FD6B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_801FD6B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FD6C4;
    }
}

loc_801FD6BC:
{
    r3 = 10;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_801FD6C4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 44), r4);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 48), r5);
    }
    if (((cr & 0x02000000u) != 0)) {
        goto loc_801FD704;
    }
}

loc_801FD6D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FD704;
    }
}

loc_801FD6D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801FD6D8:
{
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 4), r6);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FD6EC;
    }
}

loc_801FD6E0:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r4, r0);
    MemoryInline::FlatWrite32((r4 + 4), r0);
}

loc_801FD6EC:
{
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 16), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 8), r0);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 12), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 24), r0);
}

loc_801FD704:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801FD6A4 func_801FD6A4 preserves=true fpr_mask=0x00000000
