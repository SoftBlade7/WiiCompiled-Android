#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8073D228(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_8073D228;

loc_8073D228:
{
    r4 = 0x808A0000u;
    f2.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 10400));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_8073D238:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8073D23C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 40));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
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

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000010 gpr_return=0x00000010 fpr_read=0x00000004 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8073D228 func_8073D228 preserves=true fpr_mask=0x00000000
