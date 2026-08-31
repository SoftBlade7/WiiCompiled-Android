#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8006E070(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_8006E070;

loc_8006E070:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 220));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 224));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8006E07C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8006E0A8;
    }
}

loc_8006E080:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 228));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8006E088:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8006E0A8;
    }
}

loc_8006E08C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29292));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8006E094:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8006E0A0;
    }
}

loc_8006E098:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_8006E0A0:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_8006E0A8:
{
    r3 = 2;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8006E070 func_8006E070 preserves=true fpr_mask=0x00000000
