#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807DCC20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];

    goto loc_807DCC20;

loc_807DCC20:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f5.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f4.d = (-(f2.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = (-(f0.d));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 24));
    f2.d = (-(f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 40));
    MemoryInline::FlatWriteFloat32((r3 + 4), f5.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 20), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 24), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 36), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 40), f0.d);
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807DCC20 func_807DCC20 preserves=true fpr_mask=0x00000000
