#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805AEC24(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    goto loc_805AEC24;

loc_805AEC24:
{
    f5.d = MemoryInline::FlatReadFloat32(r6);
    f4.d = MemoryInline::FlatReadFloat32(r5);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f2.d = PpcFmulsInline(f5.d, f4.d);
    f8.d = MemoryInline::FlatReadFloat32((r6 + 8));
    f0.d = PpcFmulsInline(f1.d, f3.d);
    f7.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f6.d = PpcFmulsInline(f8.d, f7.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f0.d));
    f2.d = PpcFmulsInline(f1.d, f6.d);
    f0.d = PpcFmulsInline(f5.d, f6.d);
    f1.d = PpcFmulsInline(f8.d, f6.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 8), f1.d);
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f0.d));
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x000001FF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805AEC24 func_805AEC24 preserves=true fpr_mask=0x00000000
