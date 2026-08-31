#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8061A32C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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
    uint32_t cr = ctx->cr;

    goto loc_8061A32C;

loc_8061A32C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 31488));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8061A344:
{
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8061A398;
    }
}

loc_8061A34C:
{
    r4 = MemoryInline::FlatRead32((r3 + 64));
    r0 = 1127219200;
    r5 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = (r4 ^ -2147483648);
    f2.d = MemoryInline::FlatReadFloat64((r5 + 31496));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r31 = 0x809C0000u;
    r4 = (r31 + 7552);
    r3 = (r3 + 168);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x805556A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f0.d = MemoryInline::FlatReadFloat32((r31 + 7552));
    f0.d = (-(f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    goto loc_8061A408;
}

loc_8061A398:
{
    r4 = MemoryInline::FlatRead32((r3 + 64));
    r0 = 1127219200;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r5 = 0x80890000u;
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r6 = 0x809C0000u;
    f2.d = MemoryInline::FlatReadFloat64((r5 + 31496));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f4.d = MemoryInline::FlatReadFloat32((r3 + 20));
    r4 = (r6 + 7552);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r6 + 7552));
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f2.d = (-(f3.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f4.d, f1.d);
}

loc_8061A3EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8061A3F4;
    }
}

loc_8061A3F0:
{
    goto loc_8061A408;
}

loc_8061A3F4:
{
    SetCRFloatResident(cr, 0, f4.d, f3.d);
}

loc_8061A3F8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8061A404;
    }
}

loc_8061A3FC:
{
    f1.d = f3.d;
    goto loc_8061A408;
}

loc_8061A404:
{
    f1.d = f4.d;
}

loc_8061A408:
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000007B gpr_write=0x80000FFB gpr_return=0x00000018 fpr_read=0x0000003F fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8061A32C func_8061A32C preserves=true fpr_mask=0x00000000
