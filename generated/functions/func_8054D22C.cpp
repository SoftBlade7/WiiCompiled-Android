#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8054D22C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;

    goto loc_8054D22C;

loc_8054D22C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = 1127219200;
    r4 = 0x808B0000u;
    r5 = MemoryInline::FlatRead8((r4 + 15732));
    r4 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f2.d = MemoryInline::FlatReadFloat64((r4 + 3760));
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_8054D260:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8054D2C0;
    }
}

loc_8054D264:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    r4 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 3900));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 32), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8054D284:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8054D298;
    }
}

loc_8054D288:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 32), f0.d);
}

loc_8054D298:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    r4 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat64((r4 + 3760));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8054D2B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8054D2C0;
    }
}

loc_8054D2B8:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_8054D2C0:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x00000033 gpr_return=0x00000010 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8054D22C func_8054D22C preserves=true fpr_mask=0x00000000
