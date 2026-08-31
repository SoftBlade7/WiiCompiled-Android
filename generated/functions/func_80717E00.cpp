#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80717E00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_80717E00;

loc_80717E00:
{
    f2.d = PpcFmulsInline(f1.d, f1.d);
    r4 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8176));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80717E14:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80717E1C;
    }
}

loc_80717E18:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
}

loc_80717E1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80717E24:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80717E2C;
    }
}

loc_80717E28:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_80717E2C:
{
    f1.d = f2.d;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000010 gpr_return=0x00000010 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80717E00 func_80717E00 preserves=true fpr_mask=0x00000000
