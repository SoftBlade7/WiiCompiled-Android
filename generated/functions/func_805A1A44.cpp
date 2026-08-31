#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A1A44(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_805A1A44;

loc_805A1A44:
{
    r5 = 0x809C0000u;
    r0 = 0;
    r5 = (r5 + 6560);
    r4 = 12;
    MemoryInline::FlatWriteRam8(r5, static_cast<uint8_t>(r0));
    r3 = (r5 + 8);
    MemoryInline::FlatWriteRam32((r5 + 4), r0);
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
    ctx->gpr[5] = r5;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_805A1A44_statefree()
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;
    uint32_t cached_r4 = 0;
    uint32_t cached_r5 = 0;

    goto loc_805A1A44;

loc_805A1A44:
{
    cached_r5 = 0x809C0000u;
    cached_r0 = 0;
    cached_r5 = (cached_r5 + 6560);
    cached_r4 = 12;
    MemoryInline::FlatWriteRam8(cached_r5, static_cast<uint8_t>(cached_r0));
    cached_r3 = (cached_r5 + 8);
    MemoryInline::FlatWriteRam32((cached_r5 + 4), cached_r0);
    // inline leaf 0x800AEF60 (6 guest instruction(s))
    cached_r0 = 0;
    MemoryInline::FlatWriteRam32(cached_r3, cached_r0);
    MemoryInline::FlatWriteRam32((cached_r3 + 4), cached_r0);
    MemoryInline::FlatWriteRam16((cached_r3 + 8), static_cast<uint16_t>(cached_r0));
    MemoryInline::FlatWriteRam16((cached_r3 + 10), static_cast<uint16_t>(cached_r4));
    // end of inlined leaf 0x800AEF60


    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r5) };
}

}
// RECOMP_STATE_FREE_ABI address=0x805A1A44 symbol=func_805A1A44_statefree gpr_in=0x00000000 gpr_out=0x00000021 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805A1A44 func_805A1A44 preserves=true fpr_mask=0x00000000

