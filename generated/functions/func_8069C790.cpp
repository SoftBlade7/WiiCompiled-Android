#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8069C790(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;

    goto loc_8069C790;

loc_8069C790:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 1776));
    r4 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1768));
    r4 = (r4 + -10592);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8069C7A4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8069C7B0;
    }
}

loc_8069C7AC:
{
    goto loc_8069C7C8;
}

loc_8069C7B0:
{
    f2.d = MemoryInline::FlatReadFloat32((r4 + 40));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8069C7B8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8069C7C4;
    }
}

loc_8069C7C0:
{
    goto loc_8069C7C8;
}

loc_8069C7C4:
{
    f2.d = f0.d;
}

loc_8069C7C8:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 40));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 1776));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 44));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f3.d));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000010 gpr_return=0x00000010 fpr_read=0x00000005 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8069C790 func_8069C790 preserves=true fpr_mask=0x00000000
