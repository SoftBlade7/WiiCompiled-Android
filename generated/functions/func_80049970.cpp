#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80049970(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_80049970;

loc_80049970:
{
    r9 = MemoryInline::FlatRead32(r4);
    r8 = MemoryInline::FlatRead32((r4 + 4));
    r7 = MemoryInline::FlatRead32((r4 + 8));
    r6 = MemoryInline::FlatRead32((r4 + 12));
    r5 = MemoryInline::FlatRead32((r4 + 16));
    r0 = MemoryInline::FlatRead32((r4 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 24));
    MemoryInline::FlatWrite32(r3, r9);
    MemoryInline::FlatWrite32((r3 + 4), r8);
    MemoryInline::FlatWrite32((r3 + 8), r7);
    MemoryInline::FlatWrite32((r3 + 12), r6);
    MemoryInline::FlatWrite32((r3 + 16), r5);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    MemoryInline::FlatWriteFloat32((r3 + 24), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80049970_statefree(uint32_t native_r3, uint32_t native_r4, PPC_FPR native_f0)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = 0;
    uint32_t cached_r6 = 0;
    uint32_t cached_r7 = 0;
    uint32_t cached_r8 = 0;
    uint32_t cached_r9 = 0;
    PPC_FPR cached_f0 = PPC_FPR{};

    goto loc_80049970;

loc_80049970:
{
    cached_r9 = MemoryInline::FlatRead32(cached_r4);
    cached_r8 = MemoryInline::FlatRead32((cached_r4 + 4));
    cached_r7 = MemoryInline::FlatRead32((cached_r4 + 8));
    cached_r6 = MemoryInline::FlatRead32((cached_r4 + 12));
    cached_r5 = MemoryInline::FlatRead32((cached_r4 + 16));
    cached_r0 = MemoryInline::FlatRead32((cached_r4 + 20));
    cached_f0.d = MemoryInline::FlatReadFloat32((cached_r4 + 24));
    MemoryInline::FlatWrite32(cached_r3, cached_r9);
    MemoryInline::FlatWrite32((cached_r3 + 4), cached_r8);
    MemoryInline::FlatWrite32((cached_r3 + 8), cached_r7);
    MemoryInline::FlatWrite32((cached_r3 + 12), cached_r6);
    MemoryInline::FlatWrite32((cached_r3 + 16), cached_r5);
    MemoryInline::FlatWrite32((cached_r3 + 20), cached_r0);
    MemoryInline::FlatWriteFloat32((cached_r3 + 24), cached_f0.d);



return { static_cast<uint64_t>(cached_r9), cached_f0.raw };
}

}
// RECOMP_STATE_FREE_ABI address=0x80049970 symbol=func_80049970_statefree gpr_in=0x00000018 gpr_out=0x00000200 fpr_in=0x00000000 fpr_out=0x00000001 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x000003E1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80049970 func_80049970 preserves=true fpr_mask=0x00000000

