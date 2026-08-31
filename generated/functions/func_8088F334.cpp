#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8088F334(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_8088F334;

loc_8088F334:
{
    r6 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r6 + 19592));
    MemoryInline::FlatWrite32(r5, r0);
    MemoryInline::FlatWrite32((r5 + 4), r4);
    MemoryInline::FlatWrite32((r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 19592), r5);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY void func_8088F334_statefree_v0(uint32_t native_r3, uint32_t native_r4, uint32_t native_r5)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = native_r5;
    uint32_t cached_r6 = 0;

    goto loc_8088F334;

loc_8088F334:
{
    cached_r6 = 0x809C0000u;
    cached_r0 = MemoryInline::FlatRead32((cached_r6 + 19592));
    MemoryInline::FlatWrite32(cached_r5, cached_r0);
    MemoryInline::FlatWrite32((cached_r5 + 4), cached_r4);
    MemoryInline::FlatWrite32((cached_r5 + 8), cached_r3);
    MemoryInline::FlatWriteRam32((cached_r6 + 19592), cached_r5);

    return;
}

}
// RECOMP_STATE_FREE_ABI address=0x8088F334 symbol=func_8088F334_statefree_v0 gpr_in=0x00000038 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE uint64_t func_8088F334_statefree(uint32_t native_r3, uint32_t native_r4, uint32_t native_r5)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = native_r5;
    uint32_t cached_r6 = 0;

    goto loc_8088F334;

loc_8088F334:
{
    cached_r6 = 0x809C0000u;
    cached_r0 = MemoryInline::FlatRead32((cached_r6 + 19592));
    MemoryInline::FlatWrite32(cached_r5, cached_r0);
    MemoryInline::FlatWrite32((cached_r5 + 4), cached_r4);
    MemoryInline::FlatWrite32((cached_r5 + 8), cached_r3);
    MemoryInline::FlatWriteRam32((cached_r6 + 19592), cached_r5);

    return static_cast<uint64_t>(cached_r6);
}


    return static_cast<uint64_t>(cached_r6);
}
// RECOMP_STATE_FREE_ABI address=0x8088F334 symbol=func_8088F334_statefree gpr_in=0x00000038 gpr_out=0x00000040 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000041 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8088F334 func_8088F334 preserves=true fpr_mask=0x00000000

