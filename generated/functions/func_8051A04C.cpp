#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8051A04C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;

    goto loc_8051A04C;

loc_8051A04C:
{
    f3.d = MemoryInline::FlatReadFloat32(r3);
    SetCRFloatResident(cr, 0, f3.d, f1.d);
}

loc_8051A054:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8051A070;
    }
}

loc_8051A058:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    r0 = 1;
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    goto loc_8051A074;
}

loc_8051A070:
{
    r0 = 0;
}

loc_8051A074:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x0000000E fpr_write=0x00000009 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8051A04C func_8051A04C preserves=true fpr_mask=0x00000000
