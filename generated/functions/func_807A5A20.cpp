#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A5A20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;

    goto loc_807A5A20;

loc_807A5A20:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r5 = 0x808A0000u;
    r5 = (r5 + 21600);
    r0 = 1127219200;
    r4 = MemoryInline::FlatRead32((r3 + 476));
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 368u, true, false);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 192u, (r5 + 192));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 200u, (r5 + 200));
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r5);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 360u, (r5 + 360));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_807A5A5C:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A5A6C;
    }
}

loc_807A5A64:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 240u, (r5 + 240));
    goto loc_807A5A84;
}

loc_807A5A6C:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 316u, (r5 + 316));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 240u, (r5 + 240));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
}

loc_807A5A84:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 240u, (r5 + 240));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807A5A8C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807A5A94;
    }
}

loc_807A5A90:
{
    goto loc_807A5AA8;
}

loc_807A5A94:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 192u, (r5 + 192));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807A5A9C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807A5AA4;
    }
}

loc_807A5AA0:
{
    goto loc_807A5AA8;
}

loc_807A5AA4:
{
    f1.d = f0.d;
}

loc_807A5AA8:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 456));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 324u, (r5 + 324));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_807A5AB8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807A5AC0;
    }
}

loc_807A5ABC:
{
    goto loc_807A5AC4;
}

loc_807A5AC0:
{
    f2.d = f0.d;
}

loc_807A5AC4:
{
    MemoryInline::FlatWriteFloat32((r3 + 456), f2.d);
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000002A gpr_write=0x00000033 gpr_return=0x00000010 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807A5A20 func_807A5A20 preserves=true fpr_mask=0x00000000
