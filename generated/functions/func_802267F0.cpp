#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802267F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_802267F0;

loc_802267F0:
{
    r5 = 0x80220000u;
    r4 = r3;
    r3 = (r5 + 25700);
    // inline leaf 0x800240A0 (5 guest instruction(s))
    r5 = 0x802A0000u;
    r5 = (r5 + 28856);
    MemoryInline::FlatWriteRam32((r5 + 840), r3);
    MemoryInline::FlatWriteRam32((r5 + 844), r4);
    // end of inlined leaf 0x800240A0
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE void func_802267F0_statefree(uint32_t native_r3)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;
    uint32_t cached_r5 = 0;

    goto loc_802267F0;

loc_802267F0:
{
    cached_r5 = 0x80220000u;
    cached_r4 = cached_r3;
    cached_r3 = (cached_r5 + 25700);
    // inline leaf 0x800240A0 (5 guest instruction(s))
    cached_r5 = 0x802A0000u;
    cached_r5 = (cached_r5 + 28856);
    MemoryInline::FlatWriteRam32((cached_r5 + 840), cached_r3);
    MemoryInline::FlatWriteRam32((cached_r5 + 844), cached_r4);
    // end of inlined leaf 0x800240A0

return;
}

}
// RECOMP_STATE_FREE_ABI address=0x802267F0 symbol=func_802267F0_statefree gpr_in=0x00000008 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000038 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802267F0 func_802267F0 preserves=true fpr_mask=0x00000000

