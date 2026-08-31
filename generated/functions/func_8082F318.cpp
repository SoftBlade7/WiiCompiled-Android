#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082F318(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];

    goto loc_8082F318;

loc_8082F318:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r6 = 1127219200;
    r7 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = 0x808E0000u;
    r5 = 0x808B0000u;
    f4.d = MemoryInline::FlatReadFloat64((r7 + -14040));
    r9 = MemoryInline::FlatRead16((r3 + -30128));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r3 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    r8 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r9));
    r0 = (r9 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f2.d = MemoryInline::FlatReadFloat32((r5 + -14032));
    MemoryInline::FlatWriteRam32((r1 + 16), r6);
    f0.d = MemoryInline::FlatReadFloat32((r3 + -14028));
    r0 = (r8 * r9);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    r0 = (r4 - r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x80085110u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r3 = 0x808E0000u;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r3 + -30116));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000016 gpr_write=0x000003FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8082F318 func_8082F318 preserves=true fpr_mask=0x00000000
