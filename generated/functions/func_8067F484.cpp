#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8067F484(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;

    goto loc_8067F484;

loc_8067F484:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x808A0000u;
    r4 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 1127219200;
    f5.d = MemoryInline::FlatReadFloat64((r5 + -11752));
    r7 = MemoryInline::FlatRead32((r3 + 396));
    r6 = MemoryInline::FlatRead32((r3 + 428));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r6 = (r6 - r7);
    f2.d = MemoryInline::FlatReadFloat32((r4 + -11688));
    r5 = (r6 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r5);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 444));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f2.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 448));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 424));
    f4.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f5.d));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f3.d = PpcFmulsInline(f3.d, f4.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f5.d));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 432), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8067F50C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8067F514;
    }
}

loc_8067F510:
{
    MemoryInline::FlatWriteFloat32((r3 + 432), f0.d);
}

loc_8067F514:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 432));
    r4 = 475;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 424));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    ctx->lr = 0x8067F528u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8082051Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFEF gpr_write=0x000010FB gpr_return=0x00000018 fpr_read=0xFFFFFFFD fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x8067F484 func_8067F484 preserves=true fpr_mask=0x00000000
