#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806D1D10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];

    goto loc_806D1D10;

loc_806D1D10:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r6 = 0x808A0000u;
    r5 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 1127219200;
    f1.d = MemoryInline::FlatReadFloat64((r6 + -440));
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    f2.d = MemoryInline::FlatReadFloat32((r5 + -408));
    r4 = MemoryInline::FlatRead32((r3 + 228));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = (r4 ^ -2147483648);
    r7 = MemoryInline::FlatRead32((r3 + 32));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r4 = 0x808A0000u;
    r0 = MemoryInline::FlatRead16((r3 + 44));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f4.d = MemoryInline::FlatReadFloat32((r7 + 28));
    r0 = (r0 | 1);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 224));
    f0.d = MemoryInline::FlatReadFloat32((r4 + -404));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r7 + 32));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r7 + 24));
    MemoryInline::FlatWriteFloat32((r3 + 48), f1.d);
    MemoryInline::FlatWrite16((r3 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r3 + 52), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 56), f3.d);
    f1.d = PpcFmulsInline(f0.d, f2.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
    f0.d = MemoryInline::FlatReadFloat32((r31 + 176));
    r0 = MemoryInline::FlatRead16((r31 + 44));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 52));
    r0 = (r0 | 1);
    r3 = MemoryInline::FlatRead32((r31 + 228));
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r0));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 228), r0);
    MemoryInline::FlatWriteFloat32((r31 + 52), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000000E gpr_write=0x800000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806D1D10 func_806D1D10 preserves=true fpr_mask=0x00000000
