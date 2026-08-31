#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8016E568(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r10 = ctx->gpr[10];

    goto loc_8016E568;

loc_8016E568:
{
    r0 = MemoryInline::FlatRead32((r10 + 132));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(6));
    r0_mrot_0 = (r0_rot_0 & 4032);
    r0_mdest_0 = (r0 & -4033);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWrite32((r10 + 132), r0);
}

loc_8016E594:
{
    r0 = MemoryInline::FlatRead32((r10 + 1532));
    r0 = (r0 | 67108864);
    MemoryInline::FlatWrite32((r10 + 1532), r0);
    ctx->gpr[0] = r0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000440 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8016E568 func_8016E568 preserves=true fpr_mask=0x00000000
