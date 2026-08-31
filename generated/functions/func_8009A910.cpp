#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009A910(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_8009A910;

loc_8009A910:
{
    r3 = (r3 + 256);
    // inline leaf 0x800997D0 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 240), f1.d);
    // end of inlined leaf 0x800997D0
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_8009A910_statefree(uint32_t native_r3, PPC_FPR native_f1)
{

    uint32_t cached_r3 = native_r3;
    PPC_FPR cached_f1 = native_f1;

    goto loc_8009A910;

loc_8009A910:
{
    cached_r3 = (cached_r3 + 256);
    // inline leaf 0x800997D0 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((cached_r3 + 240), cached_f1.d);
    // end of inlined leaf 0x800997D0
return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x8009A910 symbol=func_8009A910_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000002 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000002 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009A910 func_8009A910 preserves=true fpr_mask=0x00000000

