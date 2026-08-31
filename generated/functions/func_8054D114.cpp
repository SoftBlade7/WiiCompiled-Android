#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8054D114(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r6_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    goto loc_8054D114;

loc_8054D114:
{
    r7 = 0x808B0000u;
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r6 = (r6_rot_0 & 255);
    r7 = (r7 + 15552);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0 = (r0_rot_0 & 255);
    MemoryInline::FlatWriteRam8((r7 + 176), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r7 + 177), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r7 + 178), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r7 + 179), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r7 + 180), static_cast<uint8_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_8054D114_statefree(uint32_t native_r3, uint32_t native_r4, uint32_t native_r5)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = native_r5;
    uint32_t cached_r6 = 0;
    uint32_t cached_r7 = 0;

    uint32_t r0_rot_0 = 0;
    uint32_t r6_rot_0 = 0;

    goto loc_8054D114;

loc_8054D114:
{
    cached_r7 = 0x808B0000u;
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r3), static_cast<uint32_t>(16));
    cached_r6 = (r6_rot_0 & 255);
    cached_r7 = (cached_r7 + 15552);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r3), static_cast<uint32_t>(24));
    cached_r0 = (r0_rot_0 & 255);
    MemoryInline::FlatWriteRam8((cached_r7 + 176), static_cast<uint8_t>(cached_r6));
    MemoryInline::FlatWriteRam8((cached_r7 + 177), static_cast<uint8_t>(cached_r0));
    MemoryInline::FlatWriteRam8((cached_r7 + 178), static_cast<uint8_t>(cached_r3));
    MemoryInline::FlatWriteRam8((cached_r7 + 179), static_cast<uint8_t>(cached_r4));
    MemoryInline::FlatWriteRam8((cached_r7 + 180), static_cast<uint8_t>(cached_r5));

return { static_cast<uint64_t>(cached_r6), static_cast<uint64_t>(cached_r7) };
}

}
// RECOMP_STATE_FREE_ABI address=0x8054D114 symbol=func_8054D114_statefree gpr_in=0x00000038 gpr_out=0x000000C0 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x000000C1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8054D114 func_8054D114 preserves=true fpr_mask=0x00000000

