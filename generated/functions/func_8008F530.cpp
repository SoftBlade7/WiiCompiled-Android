#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008F530(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;

    goto loc_8008F530;

loc_8008F530:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28712));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8008F538:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8008F540;
    }
}

loc_8008F53C:
{
    goto loc_8008F554;
}

loc_8008F540:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28708));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8008F548:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8008F550;
    }
}

loc_8008F54C:
{
    goto loc_8008F554;
}

loc_8008F550:
{
    f0.d = f1.d;
}

loc_8008F554:
{
    MemoryInline::FlatWriteFloat32((r3 + 164), f0.d);
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000003 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008F530 func_8008F530 preserves=true fpr_mask=0x00000000
