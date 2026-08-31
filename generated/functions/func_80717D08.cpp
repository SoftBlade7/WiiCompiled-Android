#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80717D08(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_80717D08;

loc_80717D08:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80717D10:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80717D1C;
    }
}

loc_80717D14:
{
    MemoryInline::FlatWriteFloat32((r3 + 20), f2.d);
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

loc_80717D1C:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80717D20:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_80717D24:
{
    MemoryInline::FlatWriteFloat32((r3 + 20), f1.d);
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000007 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80717D08 func_80717D08 preserves=true fpr_mask=0x00000000
