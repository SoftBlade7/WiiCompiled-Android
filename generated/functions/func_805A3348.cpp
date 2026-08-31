#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A3348(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_805A3348;

loc_805A3348:
{
    f0.d = MemoryInline::FlatReadFloat32(r3);
    r0 = 0;
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A3354:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805A3364;
    }
}

loc_805A3358:
{
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    r0 = 1;
    goto loc_805A3374;
}

loc_805A3364:
{
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805A3368:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A3374;
    }
}

loc_805A336C:
{
    MemoryInline::FlatWriteFloat32(r3, f2.d);
    r0 = 1;
}

loc_805A3374:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000007 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805A3348 func_805A3348 preserves=true fpr_mask=0x00000000
