#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805CD94C(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_805CD94C;

loc_805CD94C:
{
    r4 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 193u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r4);
    r0 = -1;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r4);
    MemoryInline::WriteResolved32(guest_range_0, 72u, (r3 + 72), r4);
    MemoryInline::WriteResolved8(guest_range_0, 108u, (r3 + 108), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 120u, (r3 + 120), r0);
    MemoryInline::WriteResolved32(guest_range_0, 156u, (r3 + 156), r4);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r4);
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r4);
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r3 + 76), r4);
    MemoryInline::WriteResolved8(guest_range_0, 109u, (r3 + 109), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 124u, (r3 + 124), r0);
    MemoryInline::WriteResolved32(guest_range_0, 160u, (r3 + 160), r4);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r4);
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 44), r4);
    MemoryInline::WriteResolved32(guest_range_0, 80u, (r3 + 80), r4);
    MemoryInline::WriteResolved8(guest_range_0, 110u, (r3 + 110), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 128u, (r3 + 128), r0);
    MemoryInline::WriteResolved32(guest_range_0, 164u, (r3 + 164), r4);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r4);
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 48), r4);
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r3 + 84), r4);
    MemoryInline::WriteResolved8(guest_range_0, 111u, (r3 + 111), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 132u, (r3 + 132), r0);
    MemoryInline::WriteResolved32(guest_range_0, 168u, (r3 + 168), r4);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r4);
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 52), r4);
    MemoryInline::WriteResolved32(guest_range_0, 88u, (r3 + 88), r4);
    MemoryInline::WriteResolved8(guest_range_0, 112u, (r3 + 112), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 136u, (r3 + 136), r0);
    MemoryInline::WriteResolved32(guest_range_0, 172u, (r3 + 172), r4);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r4);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 56), r4);
    MemoryInline::WriteResolved32(guest_range_0, 92u, (r3 + 92), r4);
    MemoryInline::WriteResolved8(guest_range_0, 113u, (r3 + 113), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 140u, (r3 + 140), r0);
    MemoryInline::WriteResolved32(guest_range_0, 176u, (r3 + 176), r4);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r4);
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r3 + 60), r4);
    MemoryInline::WriteResolved32(guest_range_0, 96u, (r3 + 96), r4);
    MemoryInline::WriteResolved8(guest_range_0, 114u, (r3 + 114), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 144u, (r3 + 144), r0);
    MemoryInline::WriteResolved32(guest_range_0, 180u, (r3 + 180), r4);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r4);
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r3 + 64), r4);
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r3 + 100), r4);
    MemoryInline::WriteResolved8(guest_range_0, 115u, (r3 + 115), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r3 + 148), r0);
    MemoryInline::WriteResolved32(guest_range_0, 184u, (r3 + 184), r4);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r4);
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r3 + 68), r4);
    MemoryInline::WriteResolved32(guest_range_0, 104u, (r3 + 104), r4);
    MemoryInline::WriteResolved8(guest_range_0, 116u, (r3 + 116), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 152u, (r3 + 152), r0);
    MemoryInline::WriteResolved32(guest_range_0, 188u, (r3 + 188), r4);
    MemoryInline::WriteResolved8(guest_range_0, 192u, (r3 + 192), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_805CD94C_statefree(uint32_t native_r3)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;

    uint8_t* guest_range_0 = nullptr;

    goto loc_805CD94C;

loc_805CD94C:
{
    cached_r4 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r3, 0, 193u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, cached_r3, cached_r4);
    cached_r0 = -1;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (cached_r3 + 36), cached_r4);
    MemoryInline::WriteResolved32(guest_range_0, 72u, (cached_r3 + 72), cached_r4);
    MemoryInline::WriteResolved8(guest_range_0, 108u, (cached_r3 + 108), static_cast<uint8_t>(cached_r4));
    MemoryInline::WriteResolved32(guest_range_0, 120u, (cached_r3 + 120), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 156u, (cached_r3 + 156), cached_r4);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (cached_r3 + 4), cached_r4);
    MemoryInline::WriteResolved32(guest_range_0, 40u, (cached_r3 + 40), cached_r4);
    MemoryInline::WriteResolved32(guest_range_0, 76u, (cached_r3 + 76), cached_r4);
    MemoryInline::WriteResolved8(guest_range_0, 109u, (cached_r3 + 109), static_cast<uint8_t>(cached_r4));
    MemoryInline::WriteResolved32(guest_range_0, 124u, (cached_r3 + 124), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 160u, (cached_r3 + 160), cached_r4);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (cached_r3 + 8), cached_r4);
    MemoryInline::WriteResolved32(guest_range_0, 44u, (cached_r3 + 44), cached_r4);
    MemoryInline::WriteResolved32(guest_range_0, 80u, (cached_r3 + 80), cached_r4);
    MemoryInline::WriteResolved8(guest_range_0, 110u, (cached_r3 + 110), static_cast<uint8_t>(cached_r4));
    MemoryInline::WriteResolved32(guest_range_0, 128u, (cached_r3 + 128), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 164u, (cached_r3 + 164), cached_r4);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (cached_r3 + 12), cached_r4);
    MemoryInline::WriteResolved32(guest_range_0, 48u, (cached_r3 + 48), cached_r4);
    MemoryInline::WriteResolved32(guest_range_0, 84u, (cached_r3 + 84), cached_r4);
    MemoryInline::WriteResolved8(guest_range_0, 111u, (cached_r3 + 111), static_cast<uint8_t>(cached_r4));
    MemoryInline::WriteResolved32(guest_range_0, 132u, (cached_r3 + 132), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 168u, (cached_r3 + 168), cached_r4);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (cached_r3 + 16), cached_r4);
    MemoryInline::WriteResolved32(guest_range_0, 52u, (cached_r3 + 52), cached_r4);
    MemoryInline::WriteResolved32(guest_range_0, 88u, (cached_r3 + 88), cached_r4);
    MemoryInline::WriteResolved8(guest_range_0, 112u, (cached_r3 + 112), static_cast<uint8_t>(cached_r4));
    MemoryInline::WriteResolved32(guest_range_0, 136u, (cached_r3 + 136), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 172u, (cached_r3 + 172), cached_r4);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (cached_r3 + 20), cached_r4);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (cached_r3 + 56), cached_r4);
    MemoryInline::WriteResolved32(guest_range_0, 92u, (cached_r3 + 92), cached_r4);
    MemoryInline::WriteResolved8(guest_range_0, 113u, (cached_r3 + 113), static_cast<uint8_t>(cached_r4));
    MemoryInline::WriteResolved32(guest_range_0, 140u, (cached_r3 + 140), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 176u, (cached_r3 + 176), cached_r4);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (cached_r3 + 24), cached_r4);
    MemoryInline::WriteResolved32(guest_range_0, 60u, (cached_r3 + 60), cached_r4);
    MemoryInline::WriteResolved32(guest_range_0, 96u, (cached_r3 + 96), cached_r4);
    MemoryInline::WriteResolved8(guest_range_0, 114u, (cached_r3 + 114), static_cast<uint8_t>(cached_r4));
    MemoryInline::WriteResolved32(guest_range_0, 144u, (cached_r3 + 144), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 180u, (cached_r3 + 180), cached_r4);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (cached_r3 + 28), cached_r4);
    MemoryInline::WriteResolved32(guest_range_0, 64u, (cached_r3 + 64), cached_r4);
    MemoryInline::WriteResolved32(guest_range_0, 100u, (cached_r3 + 100), cached_r4);
    MemoryInline::WriteResolved8(guest_range_0, 115u, (cached_r3 + 115), static_cast<uint8_t>(cached_r4));
    MemoryInline::WriteResolved32(guest_range_0, 148u, (cached_r3 + 148), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 184u, (cached_r3 + 184), cached_r4);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (cached_r3 + 32), cached_r4);
    MemoryInline::WriteResolved32(guest_range_0, 68u, (cached_r3 + 68), cached_r4);
    MemoryInline::WriteResolved32(guest_range_0, 104u, (cached_r3 + 104), cached_r4);
    MemoryInline::WriteResolved8(guest_range_0, 116u, (cached_r3 + 116), static_cast<uint8_t>(cached_r4));
    MemoryInline::WriteResolved32(guest_range_0, 152u, (cached_r3 + 152), cached_r0);
    MemoryInline::WriteResolved32(guest_range_0, 188u, (cached_r3 + 188), cached_r4);
    MemoryInline::WriteResolved8(guest_range_0, 192u, (cached_r3 + 192), static_cast<uint8_t>(cached_r4));

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r4) };
}

}
// RECOMP_STATE_FREE_ABI address=0x805CD94C symbol=func_805CD94C_statefree gpr_in=0x00000008 gpr_out=0x00000011 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805CD94C func_805CD94C preserves=true fpr_mask=0x00000000

