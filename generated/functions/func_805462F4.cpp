#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805462F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_805462F4;

loc_805462F4:
{
    r3 = (r3 + 65536);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
    r0 = (r0_rot_0 & 8160);
    r3 = (r3 + r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + -28636), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_805462F4_statefree(uint32_t native_r3, uint32_t native_r4, uint32_t native_r5, uint32_t native_r6)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = native_r5;
    uint32_t cached_r6 = native_r6;

    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;

    goto loc_805462F4;

loc_805462F4:
{
    cached_r3 = (cached_r3 + 65536);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r5), static_cast<uint32_t>(5));
    cached_r0 = (r0_rot_0 & 8160);
    cached_r3 = (cached_r3 + cached_r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(cached_r6), static_cast<uint32_t>(2));
    cached_r0 = (r0_rot_1 & 1020);
    cached_r3 = (cached_r3 + cached_r0);
    MemoryInline::FlatWrite32((cached_r3 + -28636), cached_r4);

    return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x805462F4 symbol=func_805462F4_statefree gpr_in=0x00000078 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805462F4 func_805462F4 preserves=true fpr_mask=0x00000000

