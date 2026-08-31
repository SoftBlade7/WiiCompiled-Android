#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800EECEC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];

    goto loc_800EECEC;

loc_800EECEC:
{
    // inline leaf 0x800ED680 (4 guest instruction(s))
    r3 = 0x802F0000u;
    r3 = (r3 + 7352);
    r3 = MemoryInline::FlatRead32((r3 + 440));
    // end of inlined leaf 0x800ED680
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_800EECEC_statefree()
{

    uint32_t cached_r3 = 0;

    goto loc_800EECEC;

loc_800EECEC:
{
    // inline leaf 0x800ED680 (4 guest instruction(s))
    cached_r3 = 0x802F0000u;
    cached_r3 = (cached_r3 + 7352);
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 440));
    // end of inlined leaf 0x800ED680
return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x800EECEC symbol=func_800EECEC_statefree gpr_in=0x00000000 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800EECEC func_800EECEC preserves=true fpr_mask=0x00000000

