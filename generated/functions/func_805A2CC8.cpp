#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A2CC8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];

    goto loc_805A2CC8;

loc_805A2CC8:
{
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteFloat32(r3, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE void func_805A2CC8_statefree(uint32_t native_r3, uint32_t native_r4, uint32_t native_r5)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = native_r5;
    PPC_FPR cached_f0 = PPC_FPR{};
    PPC_FPR cached_f1 = PPC_FPR{};
    PPC_FPR cached_f2 = PPC_FPR{};
    PPC_FPR cached_f3 = PPC_FPR{};
    PPC_FPR cached_f4 = PPC_FPR{};

    goto loc_805A2CC8;

loc_805A2CC8:
{
    cached_f1.d = MemoryInline::FlatReadFloat32(cached_r4);
    cached_f0.d = MemoryInline::FlatReadFloat32(cached_r5);
    cached_f3.d = MemoryInline::FlatReadFloat32((cached_r4 + 4));
    cached_f4.d = static_cast<double>(PpcForceSingleValueInline(cached_f1.d + cached_f0.d));
    cached_f2.d = MemoryInline::FlatReadFloat32((cached_r5 + 4));
    cached_f1.d = MemoryInline::FlatReadFloat32((cached_r4 + 8));
    cached_f0.d = MemoryInline::FlatReadFloat32((cached_r5 + 8));
    cached_f2.d = static_cast<double>(PpcForceSingleValueInline(cached_f3.d + cached_f2.d));
    MemoryInline::FlatWriteFloat32(cached_r3, cached_f4.d);
    cached_f0.d = static_cast<double>(PpcForceSingleValueInline(cached_f1.d + cached_f0.d));
    MemoryInline::FlatWriteFloat32((cached_r3 + 4), cached_f2.d);
    MemoryInline::FlatWriteFloat32((cached_r3 + 8), cached_f0.d);


return;
}

}
// RECOMP_STATE_FREE_ABI address=0x805A2CC8 symbol=func_805A2CC8_statefree gpr_in=0x00000038 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805A2CC8 func_805A2CC8 preserves=true fpr_mask=0x00000000

