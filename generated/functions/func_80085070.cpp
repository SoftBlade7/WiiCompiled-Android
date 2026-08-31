#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80085070(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r2 = ctx->gpr[2];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];

    goto loc_80085070;

loc_80085070:
{
    f6.d = PpcFmulsInline(f5.d, f5.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28964));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f5.d));
    f5.d = PpcFmulsInline(f7.d, f5.d);
    f0.d = PpcFmulsInline(f0.d, f5.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f7.d));
    f5.d = PpcFmulsInline(f5.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f0.d));
    f4.d = PpcFmulsInline(f7.d, f2.d);
    f2.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000004 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x0000003E fpr_write=0x000000F7 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80085070 func_80085070 preserves=true fpr_mask=0x00000000
