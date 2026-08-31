#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80726FF8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;

    goto loc_80726FF8;

loc_80726FF8:
{
    r3 = 0x808D0000u;
    f1.d = MemoryInline::FlatReadFloat32(r5);
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = MemoryInline::FlatReadFloat32((r3 + -26372));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = (-(f3.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80727014:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80727020;
    }
}

loc_80727018:
{
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_8072701C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80727028;
    }
}

loc_80727020:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

loc_80727028:
{
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80727038:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80727044;
    }
}

loc_8072703C:
{
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_80727040:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8072704C;
    }
}

loc_80727044:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

loc_8072704C:
{
    r3 = 0x808D0000u;
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r3 + -26368));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = (-(f1.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80727068:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80727074;
    }
}

loc_8072706C:
{
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_80727070:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8072707C;
    }
}

loc_80727074:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

loc_8072707C:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000030 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80726FF8 func_80726FF8 preserves=true fpr_mask=0x00000000
