#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A2B08(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_805A2B08;

loc_805A2B08:
{
    f3.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    ctx->fpr[0] = f0;
    ctx->fpr[3] = f3;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_805A2B08_statefree(uint32_t native_r3, PPC_FPR native_f1, PPC_FPR native_f2, PPC_FPR native_f3)
{

    uint32_t cached_r3 = native_r3;
    PPC_FPR cached_f0 = PPC_FPR{};
    PPC_FPR cached_f1 = native_f1;
    PPC_FPR cached_f2 = native_f2;
    PPC_FPR cached_f3 = PPC_FPR{};

    goto loc_805A2B08;

loc_805A2B08:
{
    cached_f3.d = MemoryInline::FlatReadFloat32(cached_r3);
    cached_f0.d = static_cast<double>(PpcForceSingleValueInline(cached_f1.d - cached_f3.d));
    cached_f0.d = PpcFmulsInline(cached_f2.d, cached_f0.d);
    cached_f0.d = static_cast<double>(PpcForceSingleValueInline(cached_f3.d + cached_f0.d));
    MemoryInline::FlatWriteFloat32(cached_r3, cached_f0.d);

    return cached_f3.raw;
}


    return cached_f3.raw;
}
// RECOMP_STATE_FREE_ABI address=0x805A2B08 symbol=func_805A2B08_statefree gpr_in=0x00000008 gpr_out=0x00000000 fpr_in=0x00000006 fpr_out=0x00000008 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000006 fpr_write=0x00000009 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805A2B08 func_805A2B08 preserves=true fpr_mask=0x00000000

