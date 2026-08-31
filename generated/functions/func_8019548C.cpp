#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8019548C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;

    goto loc_8019548C;

loc_8019548C:
{
    f2.d = MemoryInline::FlatReadFloat32(r4);
    r0 = MemoryInline::FlatRead32((r3 + 1332));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
}

loc_8019549C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801954F8;
    }
}

loc_801954A0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26528));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_801954A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801954B4;
    }
}

loc_801954AC:
{
    f2.d = (-(f3.d));
    goto loc_801954B8;
}

loc_801954B4:
{
    f2.d = f3.d;
}

loc_801954B8:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 156));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_801954C0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801954D0;
    }
}

loc_801954C8:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -26512));
    goto loc_801954DC;
}

loc_801954D0:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
}

loc_801954DC:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 160));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = PpcFmulsInline(f2.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

loc_801954F8:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 156));
    f0.d = (-(f1.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_80195504:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80195520;
    }
}

loc_80195508:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 160));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

loc_80195520:
{
    SetCRFloatResident(cr, 0, f3.d, f1.d);
}

loc_80195524:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_80195528:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 160));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001C gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8019548C func_8019548C preserves=true fpr_mask=0x00000000
