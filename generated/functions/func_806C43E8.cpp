#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806C43E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;

    goto loc_806C43E8;

loc_806C43E8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = MemoryInline::FlatRead8((r3 + 264));
}

loc_806C43F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806C441C;
    }
}

loc_806C43F8:
{
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 268));
    f0.d = MemoryInline::FlatReadFloat32((r4 + -2008));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806C4408:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806C443C;
    }
}

loc_806C4410:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r3 + 184), r0);
    goto loc_806C443C;
}

loc_806C441C:
{
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 268));
    f0.d = MemoryInline::FlatReadFloat32((r4 + -2120));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806C442C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806C443C;
    }
}

loc_806C4434:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r3 + 184), r0);
}

loc_806C443C:
{
    r4 = MemoryInline::FlatRead32((r3 + 188));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r4 = 0x808A0000u;
    f3.d = MemoryInline::FlatReadFloat64((r4 + -2024));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 260));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 272));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 268), f0.d);
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x00000013 gpr_return=0x00000010 fpr_read=0x00000003 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806C43E8 func_806C43E8 preserves=true fpr_mask=0x00000000
