#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023A540(CpuContext* MKW_RESTRICT ctx)
{
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
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];

    goto loc_8023A540;

loc_8023A540:
{
    f7.d = MemoryInline::FlatReadFloat32(r4);
    f6.d = MemoryInline::FlatReadFloat32(r5);
    f5.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f3.d = PpcFmulsInline(f7.d, f6.d);
    f10.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = PpcFmulsInline(f5.d, f6.d);
    f2.d = PpcFmulsInline(f5.d, f4.d);
    f9.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f1.d = PpcFmulsInline(f7.d, f4.d);
    f8.d = PpcFmulsInline(f10.d, f9.d);
    f11.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f12.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = PpcFmulsInline(f7.d, f9.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f2.d));
    f2.d = PpcFmulsInline(f10.d, f6.d);
    f0.d = PpcFmulsInline(f11.d, f9.d);
    f3.d = (-(f3.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteFloat32((r6 + 12), f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f12.d + f0.d));
    f1.d = PpcFmulsInline(f11.d, f4.d);
    MemoryInline::FlatWriteFloat32((r6 + 8), f0.d);
    f3.d = PpcFmulsInline(f5.d, f9.d);
    f2.d = PpcFmulsInline(f10.d, f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f1.d));
    f0.d = PpcFmulsInline(f11.d, f6.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteFloat32((r6 + 4), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32(r6, f0.d);
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000070 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00001FFF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8023A540 func_8023A540 preserves=true fpr_mask=0x00000000
