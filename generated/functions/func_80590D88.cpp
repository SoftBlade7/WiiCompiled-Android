#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80590D88(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_80590D88;

loc_80590D88:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 44));
    // inline leaf 0x805674F4 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 248), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x805674F4
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_80590D88_statefree(uint32_t native_r3, uint32_t native_r4)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    goto loc_80590D88;

loc_80590D88:
{
    cached_r3 = MemoryInline::FlatRead32(cached_r3);
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 44));
    // inline leaf 0x805674F4 (2 guest instruction(s))
    MemoryInline::FlatWrite8((cached_r3 + 248), static_cast<uint8_t>(cached_r4));
    // end of inlined leaf 0x805674F4
return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x80590D88 symbol=func_80590D88_statefree gpr_in=0x00000018 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80590D88 func_80590D88 preserves=true fpr_mask=0x00000000

