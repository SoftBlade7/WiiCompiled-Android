#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80574068(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80574068;

loc_80574068:
{
    r4 = MemoryInline::FlatRead32((r3 + 20));
    r0 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80574074:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80574100;
    }
}

loc_80574078:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16));
    f2.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8057408C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805740D4;
    }
}

loc_80574090:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805740A8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805740B0;
    }
}

loc_805740AC:
{
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
}

loc_805740B0:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    r4 = MemoryInline::FlatRead32((r3 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805740CC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805740D4;
    }
}

loc_805740D0:
{
    MemoryInline::FlatWriteFloat32((r3 + 8), f1.d);
}

loc_805740D4:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805740EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805740FC;
    }
}

loc_805740F0:
{
    MemoryInline::FlatWriteFloat32(r3, f2.d);
    r0 = 1;
    goto loc_80574100;
}

loc_805740FC:
{
    r0 = 0;
}

loc_80574100:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80574068 func_80574068 preserves=true fpr_mask=0x00000000
