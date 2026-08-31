#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8073D1F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_8073D1F0;

loc_8073D1F0:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f1.d = (-(f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 40), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8073D208:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8073D214;
    }
}

loc_8073D20C:
{
    f0.d = f2.d;
    goto loc_8073D220;
}

loc_8073D214:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8073D218:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8073D220;
    }
}

loc_8073D21C:
{
    f0.d = f1.d;
}

loc_8073D220:
{
    MemoryInline::FlatWriteFloat32((r3 + 40), f0.d);
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8073D1F0 func_8073D1F0 preserves=true fpr_mask=0x00000000
