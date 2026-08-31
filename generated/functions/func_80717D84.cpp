#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80717D84(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_80717D84;

loc_80717D84:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_80717D90:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80717DAC;
    }
}

loc_80717D94:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_80717DA4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80717DC0;
    }
}

loc_80717DA8:
{
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_80717DAC:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_80717DBC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_return;
    }
}

loc_80717DC0:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    r4 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8176));
    f1.d = PpcFmulsInline(f2.d, f2.d);
    MemoryInline::FlatWriteFloat32(r3, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80717DDC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80717DE4;
    }
}

loc_80717DE0:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
}

loc_80717DE4:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80717DEC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80717DF4;
    }
}

loc_80717DF0:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
}

loc_80717DF4:
{
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    f1.d = MemoryInline::FlatReadFloat32(r3);
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000010 gpr_return=0x00000010 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80717D84 func_80717D84 preserves=true fpr_mask=0x00000000
