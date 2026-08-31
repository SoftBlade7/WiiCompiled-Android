#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80546468(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_80546468;

loc_80546468:
{
    r6 = 65536;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r4 = (r6 + -29504);
    r4 = (r5 * r4);
    r3 = (r3 + r4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 136));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r3 = (r3_rot_0 & 3);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_80546468_statefree(uint32_t native_r3, uint32_t native_r4, uint32_t native_r5)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = native_r5;
    uint32_t cached_r6 = 0;

    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;

    goto loc_80546468;

loc_80546468:
{
    cached_r6 = 65536;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r4), static_cast<uint32_t>(1));
    cached_r0 = (r0_rot_0 & -2);
    cached_r4 = (cached_r6 + -29504);
    cached_r4 = (cached_r5 * cached_r4);
    cached_r3 = (cached_r3 + cached_r4);
    cached_r3 = (cached_r3 + cached_r0);
    cached_r0 = MemoryInline::FlatRead16((cached_r3 + 136));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(26));
    cached_r3 = (r3_rot_0 & 3);


    return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x80546468 symbol=func_80546468_statefree gpr_in=0x00000038 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000059 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80546468 func_80546468 preserves=true fpr_mask=0x00000000

