#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805461BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_805461BC;

loc_805461BC:
{
    r5 = 65536;
    r0 = (r5 + -29504);
    r0 = (r4 * r0);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 240));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_805461BC_statefree(uint32_t native_r3, uint32_t native_r4)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = 0;

    goto loc_805461BC;

loc_805461BC:
{
    cached_r5 = 65536;
    cached_r0 = (cached_r5 + -29504);
    cached_r0 = (cached_r4 * cached_r0);
    cached_r3 = (cached_r3 + cached_r0);
    cached_r3 = MemoryInline::FlatRead16((cached_r3 + 240));

return { static_cast<uint64_t>(cached_r3), static_cast<uint64_t>(cached_r5) };
}

}
// RECOMP_STATE_FREE_ABI address=0x805461BC symbol=func_805461BC_statefree gpr_in=0x00000018 gpr_out=0x00000028 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805461BC func_805461BC preserves=true fpr_mask=0x00000000

