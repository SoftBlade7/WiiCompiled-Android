#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80547F98(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    goto loc_80547F98;

loc_80547F98:
{
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE void func_80547F98_statefree(uint32_t native_r3, uint32_t native_r4)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = 0;
    uint32_t cached_r6 = 0;
    uint32_t cached_r7 = 0;

    goto loc_80547F98;

loc_80547F98:
{
    cached_r7 = MemoryInline::FlatRead8(cached_r4);
    cached_r6 = MemoryInline::FlatRead8((cached_r4 + 1));
    cached_r5 = MemoryInline::FlatRead8((cached_r4 + 2));
    cached_r0 = MemoryInline::FlatRead8((cached_r4 + 3));
    MemoryInline::FlatWrite8(cached_r3, static_cast<uint8_t>(cached_r7));
    MemoryInline::FlatWrite8((cached_r3 + 1), static_cast<uint8_t>(cached_r6));
    MemoryInline::FlatWrite8((cached_r3 + 2), static_cast<uint8_t>(cached_r5));
    MemoryInline::FlatWrite8((cached_r3 + 3), static_cast<uint8_t>(cached_r0));


    return;
}

}
// RECOMP_STATE_FREE_ABI address=0x80547F98 symbol=func_80547F98_statefree gpr_in=0x00000018 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x000000E1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80547F98 func_80547F98 preserves=true fpr_mask=0x00000000

