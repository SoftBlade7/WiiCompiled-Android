#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80225F04(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_80225F04;

loc_80225F04:
{
    r3 = 0x80380000u;
    r4 = 24;
    r3 = (r3 + 16800);
    // inline leaf 0x800AEF60 (6 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    MemoryInline::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r4));
    // end of inlined leaf 0x800AEF60
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE void func_80225F04_statefree()
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;
    uint32_t cached_r4 = 0;

    goto loc_80225F04;

loc_80225F04:
{
    cached_r3 = 0x80380000u;
    cached_r4 = 24;
    cached_r3 = (cached_r3 + 16800);
    // inline leaf 0x800AEF60 (6 guest instruction(s))
    cached_r0 = 0;
    MemoryInline::FlatWriteRam32(cached_r3, cached_r0);
    MemoryInline::FlatWriteRam32((cached_r3 + 4), cached_r0);
    MemoryInline::FlatWriteRam16((cached_r3 + 8), static_cast<uint16_t>(cached_r0));
    MemoryInline::FlatWriteRam16((cached_r3 + 10), static_cast<uint16_t>(cached_r4));
    // end of inlined leaf 0x800AEF60

return;
}

}
// RECOMP_STATE_FREE_ABI address=0x80225F04 symbol=func_80225F04_statefree gpr_in=0x00000000 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80225F04 func_80225F04 preserves=true fpr_mask=0x00000000

