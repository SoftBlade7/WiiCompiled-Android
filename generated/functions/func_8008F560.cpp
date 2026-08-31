#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008F560(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8008F560;

loc_8008F560:
{
    f5.d = MemoryInline::FlatReadFloat32((r2 + -28712));
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    SetCRFloatResident(cr, 0, f1.d, f5.d);
}

loc_8008F56C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8008F574;
    }
}

loc_8008F570:
{
    goto loc_8008F588;
}

loc_8008F574:
{
    f5.d = MemoryInline::FlatReadFloat32((r2 + -28708));
    SetCRFloatResident(cr, 0, f1.d, f5.d);
}

loc_8008F57C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8008F584;
    }
}

loc_8008F580:
{
    goto loc_8008F588;
}

loc_8008F584:
{
    f5.d = f1.d;
}

loc_8008F588:
{
    r6 = MemoryInline::FlatRead32((r3 + 156));
    r0 = MemoryInline::FlatRead32((r3 + 160));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r6));
}

loc_8008F594:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8008F5A0;
    }
}

loc_8008F598:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 152));
    goto loc_8008F5E8;
}

loc_8008F5A0:
{
    r5 = 1127219200;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = (r6 ^ -2147483648);
    f4.d = MemoryInline::FlatReadFloat64((r2 + -28704));
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 152));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 148));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteRam32((r1 + 16), r5);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_8008F5E8:
{
    r0 = 0;
    MemoryInline::FlatWriteFloat32((r3 + 148), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 152), f5.d);
    MemoryInline::FlatWrite32((r3 + 156), r4);
    MemoryInline::FlatWrite32((r3 + 160), r0);
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x00000063 gpr_return=0x00000000 fpr_read=0x0000003E fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008F560 func_8008F560 preserves=true fpr_mask=0x00000000
