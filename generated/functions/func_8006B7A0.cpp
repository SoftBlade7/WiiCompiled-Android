#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8006B7A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    goto loc_8006B7A0;

loc_8006B7A0:
{
    f4.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteFloat32((r31 + 8), f4.d);
    MemoryInline::FlatWriteFloat32((r31 + 24), f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f8.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = (-(f3.d));
    f4.d = PpcFmulsInline(f3.d, f5.d);
    f6.d = PpcFmulsInline(f8.d, f7.d);
    f3.d = PpcFmulsInline(f2.d, f7.d);
    f2.d = PpcFmulsInline(f8.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 12), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 28), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[6] = f6;
    ctx->fpr[8] = f8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x80000002 gpr_write=0x80000003 gpr_return=0x00000000 fpr_read=0x000001BF fpr_write=0x0000015F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8006B7A0 func_8006B7A0 preserves=true fpr_mask=0x00000000
