#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8079ED1C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_8079ED1C;

loc_8079ED1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 104));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8079ED24:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8079ED44;
    }
}

loc_8079ED28:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 104), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8079ED34:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8079ED3C;
    }
}

loc_8079ED38:
{
    MemoryInline::FlatWriteFloat32((r3 + 104), f1.d);
}

loc_8079ED3C:
{
    r3 = 1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

loc_8079ED44:
{
    r3 = 0;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000007 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8079ED1C func_8079ED1C preserves=true fpr_mask=0x00000000
