#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80213F54(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_80213F54;

loc_80213F54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    r0 = 0;
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80213F60:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80213F70;
    }
}

loc_80213F64:
{
    MemoryInline::FlatWriteFloat32((r3 + 20), f2.d);
    r0 = 1;
    goto loc_80213F80;
}

loc_80213F70:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80213F74:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80213F80;
    }
}

loc_80213F78:
{
    MemoryInline::FlatWriteFloat32((r3 + 20), f1.d);
    r0 = 1;
}

loc_80213F80:
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
// RECOMP_REGISTRATION base 0x80213F54 func_80213F54 preserves=true fpr_mask=0x00000000
