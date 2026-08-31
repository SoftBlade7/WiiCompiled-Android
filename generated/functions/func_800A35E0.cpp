#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A35E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;

    goto loc_800A35E0;

loc_800A35E0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28088));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800A35E8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800A35F0;
    }
}

loc_800A35EC:
{
    goto loc_800A3604;
}

loc_800A35F0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28084));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800A35F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800A3600;
    }
}

loc_800A35FC:
{
    goto loc_800A3604;
}

loc_800A3600:
{
    f0.d = f1.d;
}

loc_800A3604:
{
    MemoryInline::FlatWriteFloat32((r3 + 44), f0.d);
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000003 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800A35E0 func_800A35E0 preserves=true fpr_mask=0x00000000
