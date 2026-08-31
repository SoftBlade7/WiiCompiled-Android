#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805B50F8(CpuContext* MKW_RESTRICT ctx)
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
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];

    goto loc_805B50F8;

loc_805B50F8:
{
    f10.d = MemoryInline::FlatReadFloat32(r5);
    r3 = r4;
    f7.d = MemoryInline::FlatReadFloat32(r6);
    f3.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f9.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f4.d = PpcFmulsInline(f10.d, f7.d);
    f12.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f0.d = PpcFmulsInline(f3.d, f7.d);
    f2.d = PpcFmulsInline(f3.d, f9.d);
    f11.d = MemoryInline::FlatReadFloat32((r6 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f5.d = PpcFmulsInline(f12.d, f11.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f4.d = PpcFmulsInline(f3.d, f11.d);
    f6.d = PpcFmulsInline(f1.d, f7.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f2.d));
    f3.d = PpcFmulsInline(f12.d, f7.d);
    f5.d = PpcFmulsInline(f1.d, f9.d);
    f2.d = PpcFmulsInline(f1.d, f11.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f4.d));
    f1.d = PpcFmulsInline(f10.d, f9.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    f3.d = PpcFmulsInline(f10.d, f11.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f6.d = PpcFmulsInline(f12.d, f9.d);
    f1.d = (-(f8.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f6.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    // inline leaf 0x80239DFC (5 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 12), f1.d);
    MemoryInline::FlatWriteFloat32(r3, f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f4.d);
    // end of inlined leaf 0x80239DFC
    ctx->gpr[3] = r3;
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

// RECOMP_GUEST_ABI gpr_read=0x00000070 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00001FFF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805B50F8 func_805B50F8 preserves=true fpr_mask=0x00000000
