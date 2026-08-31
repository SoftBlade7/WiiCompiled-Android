#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F6390(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_801F6390;

loc_801F6390:
{
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r4 = (r3 + 20);
    r3 = (r5 + 4);
}

loc_801FD72C:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 20), r0);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_801F6390_statefree(uint32_t native_r3)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;
    uint32_t cached_r5 = 0;

    goto loc_801F6390;

loc_801F6390:
{
    cached_r5 = MemoryInline::FlatRead32((cached_r3 + 8));
    cached_r4 = (cached_r3 + 20);
    cached_r3 = (cached_r5 + 4);
}

loc_801FD72C:
{
    cached_r0 = MemoryInline::FlatRead32((cached_r4 + 4));
    MemoryInline::FlatWrite32((cached_r3 + 20), cached_r0);
    cached_r0 = MemoryInline::FlatRead32(cached_r4);
    MemoryInline::FlatWrite32((cached_r3 + 16), cached_r0);


    return static_cast<uint64_t>(cached_r0);
}


    return static_cast<uint64_t>(cached_r0);
}
// RECOMP_STATE_FREE_ABI address=0x801F6390 symbol=func_801F6390_statefree gpr_in=0x00000008 gpr_out=0x00000001 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F6390 func_801F6390 preserves=true fpr_mask=0x00000000

