#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807BC97C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807BC97C;

loc_807BC97C:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 - r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_807BC98C:
{
    r0 = 0;
    r4 = 20;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 38u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 4), r4);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 8), r0);
    }
    MemoryInline::WriteResolved8(guest_range_0, 37u, (r3 + 41), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 24), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 16), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 20), r0);
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r3 + 28), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 32), r0);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 36), r0);
    }
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
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_807BC97C_statefree(uint32_t native_r3, uint32_t native_r4, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    uint32_t cached_cr = native_cr;
    uint32_t cached_xer = native_xer;

    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    goto loc_807BC97C;

loc_807BC97C:
{
    cached_r0 = MemoryInline::FlatRead32((cached_r3 + 8));
    cached_r0 = (cached_r0 - cached_r4);
    SetCRResident(cached_cr, cached_xer, 0, static_cast<int32_t>(cached_r0), static_cast<int32_t>(0));
    MemoryInline::FlatWrite32((cached_r3 + 8), cached_r0);
    if (((cached_cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_807BC98C:
{
    cached_r0 = 0;
    cached_r4 = 20;
    guest_range_0 = MemoryInline::ResolveRangeHost((cached_r3 + 4), 0, 38u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r4)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (cached_r3 + 4), cached_r4);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (cached_r3 + 8), cached_r0);
    }
    MemoryInline::WriteResolved8(guest_range_0, 37u, (cached_r3 + 41), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved32(guest_range_0, 20u, (cached_r3 + 24), cached_r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r0)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (cached_r3 + 12), cached_r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (cached_r3 + 16), cached_r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 16u, (cached_r3 + 20), cached_r0);
    MemoryInline::WriteResolved8(guest_range_0, 24u, (cached_r3 + 28), static_cast<uint8_t>(cached_r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(cached_r0)) << 32) | static_cast<uint32_t>(cached_r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (cached_r3 + 32), cached_r0);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (cached_r3 + 36), cached_r0);
    }

return { static_cast<uint64_t>(cached_r4), static_cast<uint64_t>(cached_cr) };
}

loc_return:
{

return { static_cast<uint64_t>(cached_r4), static_cast<uint64_t>(cached_cr) };
}

}
// RECOMP_STATE_FREE_ABI address=0x807BC97C symbol=func_807BC97C_statefree gpr_in=0x00000018 gpr_out=0x00000010 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807BC97C func_807BC97C preserves=true fpr_mask=0x00000000

