#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8016DC34(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_8016DC34;

loc_8016DC34:
{
    r5 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = 1;
    r3 = 0;
    r4 = 0;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
    r3_mrot_0 = (r3_rot_0 & 1536);
    r3_mdest_0 = (r3 & -1537);
    r3 = (r3_mdest_0 | r3_mrot_0);
    MemoryInline::FlatWrite32((r5 + 20), r3);
    MemoryInline::FlatWrite32((r5 + 24), r4);
    MemoryInline::FlatWrite8((r5 + 1316), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 1317), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead32((r5 + 1532));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r5 + 1532), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000004 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8016DC34 func_8016DC34 preserves=true fpr_mask=0x00000000
