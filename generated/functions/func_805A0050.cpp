#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A0050(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    goto loc_805A0050;

loc_805A0050:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f5.d = MemoryInline::FlatReadFloat32((r3 + 136));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f5.d));
    f6.d = MemoryInline::FlatReadFloat32((r3 + 140));
    f3.d = MemoryInline::FlatReadFloat32(r4);
    f8.d = MemoryInline::FlatReadFloat32((r3 + 132));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    f4.d = PpcFmulsInline(f2.d, f1.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f8.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    f3.d = PpcFmulsInline(f0.d, f1.d);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f5.d = PpcFmulsInline(f7.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f7.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f5.d));
    MemoryInline::FlatWriteFloat32((r3 + 136), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 140), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 132), f1.d);
    MemoryInline::FlatWriteFloat32((r4 + 176), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 136));
    MemoryInline::FlatWriteFloat32((r4 + 180), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 140));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f3.d);
    MemoryInline::FlatWriteFloat32((r4 + 184), f0.d);
    r1 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
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

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x00000012 gpr_return=0x00000010 fpr_read=0x00000002 fpr_write=0x000001FF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805A0050 func_805A0050 preserves=true fpr_mask=0x00000000
