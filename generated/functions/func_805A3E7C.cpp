#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A3E7C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;

    goto loc_805A3E7C;

loc_805A3E7C:
{
    f0.d = MemoryInline::FlatReadFloat32(r3);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A3E84:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A3E94;
    }
}

loc_805A3E88:
{
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

loc_805A3E94:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000002 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805A3E7C func_805A3E7C preserves=true fpr_mask=0x00000000
