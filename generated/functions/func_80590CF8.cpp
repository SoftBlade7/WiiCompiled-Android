#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80590CF8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_80590CF8;

loc_80590CF8:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80590CF8_statefree(uint32_t native_r3, PPC_FPR native_f1)
{

    uint32_t cached_r3 = native_r3;
    PPC_FPR cached_f1 = PPC_FPR{};

    goto loc_80590CF8;

loc_80590CF8:
{
    cached_r3 = MemoryInline::FlatRead32(cached_r3);
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 40));
    cached_f1.d = MemoryInline::FlatReadFloat32((cached_r3 + 32));
return { static_cast<uint64_t>(cached_r3), cached_f1.raw };
}

}
// RECOMP_STATE_FREE_ABI address=0x80590CF8 symbol=func_80590CF8_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000002 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80590CF8 func_80590CF8 preserves=true fpr_mask=0x00000000

