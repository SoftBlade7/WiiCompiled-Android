#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A8680(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800A8680;

loc_800A8680:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008E1C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r0 = 4;
    f6.d = MemoryInline::FlatReadFloat32((r2 + -28040));
    r6 = 0;
    f5.d = MemoryInline::FlatReadFloat64((r2 + -28032));
    r5 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28036));
    r4 = 1127219200;
    r3 = 1;
    ctr = r0;
    // nop
}

loc_800A86C0:
{
    MemoryInline::FlatWriteFloat32((r31 + 3644), f6.d);
}

loc_800A86C8:
{
    MemoryInline::FlatWriteFloat32((r31 + 3648), f6.d);
    MemoryInline::FlatWrite32((r31 + 3652), r5);
    MemoryInline::FlatWrite32((r31 + 3656), r5);
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r5))) {
        goto loc_800A86E0;
    }
}

loc_800A86D8:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 3648));
    goto loc_800A871C;
}

loc_800A86E0:
{
    r0 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 3648));
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 3644));
    f4.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f5.d));
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
}

loc_800A871C:
{
    MemoryInline::FlatWriteFloat32((r31 + 3644), f1.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r5));
}

loc_800A8724:
{
    MemoryInline::FlatWriteFloat32((r31 + 3648), f0.d);
    MemoryInline::FlatWrite32((r31 + 3652), r3);
    MemoryInline::FlatWrite32((r31 + 3656), r5);
    MemoryInline::FlatWriteFloat32((r31 + 3660), f6.d);
    MemoryInline::FlatWriteFloat32((r31 + 3664), f6.d);
    MemoryInline::FlatWrite32((r31 + 3668), r5);
    MemoryInline::FlatWrite32((r31 + 3672), r5);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800A874C;
    }
}

loc_800A8744:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 3664));
    goto loc_800A8788;
}

loc_800A874C:
{
    r0 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 3664));
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 3660));
    f4.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f5.d));
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
}

loc_800A8788:
{
    MemoryInline::FlatWriteFloat32((r31 + 3660), f1.d);
    r6 = (r6 + 1);
    MemoryInline::FlatWriteFloat32((r31 + 3664), f0.d);
    MemoryInline::FlatWrite32((r31 + 3668), r3);
    MemoryInline::FlatWrite32((r31 + 3672), r5);
    r31 = (r31 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800A86C0;
    }
}

loc_800A87A4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000007F gpr_write=0x8000007B gpr_return=0x00000018 fpr_read=0x0000007F fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800A8680 func_800A8680 preserves=true fpr_mask=0x00000000
