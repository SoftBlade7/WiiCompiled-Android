#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80518AB8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_80518AB8;

loc_80518AB8:
{
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE void func_80518AB8_statefree(uint32_t native_r3, uint32_t native_r4, PPC_FPR native_f1)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    PPC_FPR cached_f0 = PPC_FPR{};
    PPC_FPR cached_f1 = native_f1;
    PPC_FPR cached_f2 = PPC_FPR{};
    PPC_FPR cached_f3 = PPC_FPR{};

    goto loc_80518AB8;

loc_80518AB8:
{
    cached_f3.d = MemoryInline::FlatReadFloat32((cached_r4 + 8));
    cached_f2.d = MemoryInline::FlatReadFloat32((cached_r4 + 4));
    cached_f0.d = MemoryInline::FlatReadFloat32(cached_r4);
    cached_f3.d = PpcFmulsInline(cached_f3.d, cached_f1.d);
    cached_f2.d = PpcFmulsInline(cached_f2.d, cached_f1.d);
    cached_f0.d = PpcFmulsInline(cached_f0.d, cached_f1.d);
    MemoryInline::FlatWriteFloat32((cached_r3 + 8), cached_f3.d);
    MemoryInline::FlatWriteFloat32(cached_r3, cached_f0.d);
    MemoryInline::FlatWriteFloat32((cached_r3 + 4), cached_f2.d);

return;
}

}
// RECOMP_STATE_FREE_ABI address=0x80518AB8 symbol=func_80518AB8_statefree gpr_in=0x00000018 gpr_out=0x00000000 fpr_in=0x00000002 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000002 fpr_write=0x0000000D fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80518AB8 func_80518AB8 preserves=true fpr_mask=0x00000000

