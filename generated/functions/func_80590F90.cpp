#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80590F90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_80590F90;

loc_80590F90:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 84));
    // inline leaf 0x8056B8EC (9 guest instruction(s))
    r4 = 0x80890000u;
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 5824));
    MemoryInline::FlatWrite16((r3 + 32), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r3 + 16), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 24), f0.d);
    MemoryInline::FlatWrite8((r3 + 30), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 31), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8056B8EC
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_80590F90_statefree(uint32_t native_r3, PPC_FPR native_f0)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;
    PPC_FPR cached_f0 = PPC_FPR{};

    goto loc_80590F90;

loc_80590F90:
{
    cached_r3 = MemoryInline::FlatRead32(cached_r3);
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 84));
    // inline leaf 0x8056B8EC (9 guest instruction(s))
    cached_r4 = 0x80890000u;
    cached_r0 = 0;
    cached_f0.d = MemoryInline::FlatReadFloat32((cached_r4 + 5824));
    MemoryInline::FlatWrite16((cached_r3 + 32), static_cast<uint16_t>(cached_r0));
    MemoryInline::FlatWriteFloat32((cached_r3 + 16), cached_f0.d);
    MemoryInline::FlatWriteFloat32((cached_r3 + 24), cached_f0.d);
    MemoryInline::FlatWrite8((cached_r3 + 30), static_cast<uint8_t>(cached_r0));
    MemoryInline::FlatWrite8((cached_r3 + 31), static_cast<uint8_t>(cached_r0));
    // end of inlined leaf 0x8056B8EC

return cached_f0.raw;
}


    return cached_f0.raw;
}
// RECOMP_STATE_FREE_ABI address=0x80590F90 symbol=func_80590F90_statefree gpr_in=0x00000008 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000001 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80590F90 func_80590F90 preserves=true fpr_mask=0x00000000

