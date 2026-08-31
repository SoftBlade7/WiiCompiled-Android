#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8006D480(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];

    goto loc_8006D480;

loc_8006D480:
{
    f6.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f2.d));
    f8.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 24));
    f9.d = PpcFmulsInline(f9.d, f11.d);
    f7.d = PpcFmulsInline(f8.d, f11.d);
    MemoryInline::FlatWriteFloat32(r3, f10.d);
    f3.d = PpcFmulsInline(f3.d, f5.d);
    f2.d = PpcFmulsInline(f2.d, f5.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f9.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f7.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f6.d);
    MemoryInline::FlatWriteFloat32((r3 + 16), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 20), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 24), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 28), f0.d);
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000EBF fpr_write=0x000003CD fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8006D480 func_8006D480 preserves=true fpr_mask=0x00000000
