#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807F8380(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    goto loc_807F8380;

loc_807F8380:
{
    r7 = 0x808B0000u;
    r0 = 1;
    r7 = (r7 + 11588);
    MemoryInline::FlatWrite32(r3, r7);
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r6));
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_807F8380_statefree(uint32_t native_r3, uint32_t native_r4, uint32_t native_r5, uint32_t native_r6)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = native_r5;
    uint32_t cached_r6 = native_r6;
    uint32_t cached_r7 = 0;

    goto loc_807F8380;

loc_807F8380:
{
    cached_r7 = 0x808B0000u;
    cached_r0 = 1;
    cached_r7 = (cached_r7 + 11588);
    MemoryInline::FlatWrite32(cached_r3, cached_r7);
    MemoryInline::FlatWrite8((cached_r3 + 10), static_cast<uint8_t>(cached_r0));
    MemoryInline::FlatWrite16((cached_r3 + 4), static_cast<uint16_t>(cached_r4));
    MemoryInline::FlatWrite8((cached_r3 + 6), static_cast<uint8_t>(cached_r5));
    MemoryInline::FlatWrite16((cached_r3 + 8), static_cast<uint16_t>(cached_r6));

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r7) };
}

}
// RECOMP_STATE_FREE_ABI address=0x807F8380 symbol=func_807F8380_statefree gpr_in=0x00000078 gpr_out=0x00000081 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000081 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807F8380 func_807F8380 preserves=true fpr_mask=0x00000000

