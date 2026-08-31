#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80702640(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_80702640;

loc_80702640:
{
    r3 = (r3 + -148);
    // inline leaf 0x80700BBC (8 guest instruction(s))
    r4 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + 96));
    r0 = MemoryInline::FlatRead32((r4 + 9896));
    r5 = (r5 & -241);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & -16);
    r5 = (r5 | r0);
    MemoryInline::FlatWrite32((r3 + 96), r5);
    // end of inlined leaf 0x80700BBC
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80702640 func_80702640 preserves=true fpr_mask=0x00000000
