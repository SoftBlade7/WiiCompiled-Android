#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80227724(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_80227724;

loc_80227724:
{
    r5 = 0x802A0000u;
    r5 = (r5 + 12416);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 60u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 56), r5);
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 54u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r4 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r4 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r4 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r4 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r4 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 28), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r4 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r4 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r4 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 40), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 44u, (r4 + 44));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 44), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 48u, (r4 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r3 + 48), f0.d);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 52u, (r4 + 52));
    MemoryInline::WriteResolved16(guest_range_0, 52u, (r3 + 52), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80227724_statefree(uint32_t native_r3, uint32_t native_r4, PPC_FPR native_f0)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = 0;
    PPC_FPR cached_f0 = PPC_FPR{};

    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    goto loc_80227724;

loc_80227724:
{
    cached_r5 = 0x802A0000u;
    cached_r5 = (cached_r5 + 12416);
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r3, 0, 60u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (cached_r3 + 56), cached_r5);
    guest_range_1 = MemoryInline::ResolveRangeHost(cached_r4, 0, 54u, true, false);
    cached_r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, cached_r4);
    MemoryInline::WriteResolved32(guest_range_0, 0u, cached_r3, cached_r0);
    cached_r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (cached_r4 + 4));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (cached_r3 + 4), cached_r0);
    cached_f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (cached_r4 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (cached_r3 + 8), cached_f0.d);
    cached_f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (cached_r4 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (cached_r3 + 12), cached_f0.d);
    cached_f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (cached_r4 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (cached_r3 + 16), cached_f0.d);
    cached_f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (cached_r4 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (cached_r3 + 20), cached_f0.d);
    cached_f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (cached_r4 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (cached_r3 + 24), cached_f0.d);
    cached_f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (cached_r4 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (cached_r3 + 28), cached_f0.d);
    cached_f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (cached_r4 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (cached_r3 + 32), cached_f0.d);
    cached_f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (cached_r4 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (cached_r3 + 36), cached_f0.d);
    cached_f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (cached_r4 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (cached_r3 + 40), cached_f0.d);
    cached_f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 44u, (cached_r4 + 44));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (cached_r3 + 44), cached_f0.d);
    cached_f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 48u, (cached_r4 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (cached_r3 + 48), cached_f0.d);
    cached_r0 = MemoryInline::ReadResolved16(guest_range_1, 52u, (cached_r4 + 52));
    MemoryInline::WriteResolved16(guest_range_0, 52u, (cached_r3 + 52), static_cast<uint16_t>(cached_r0));

return { static_cast<uint64_t>(cached_r5), cached_f0.raw };
}

}
// RECOMP_STATE_FREE_ABI address=0x80227724 symbol=func_80227724_statefree gpr_in=0x00000018 gpr_out=0x00000020 fpr_in=0x00000000 fpr_out=0x00000001 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000021 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80227724 func_80227724 preserves=true fpr_mask=0x00000000

