#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801D9B04(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801D9B04;

loc_801D9B04:
{
    r4 = MemoryInline::FlatRead32((r13 + -24416));
    r3 = 0;
    goto loc_801D9B18;
}

loc_801D9B10:
{
    r4 = MemoryInline::FlatRead32((r4 + 32));
    r3 = (r3 + 1);
}

loc_801D9B18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801D9B1C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D9B10;
    }
}

loc_801D9B20:
{
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002018 gpr_write=0x00000018 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801D9B04 func_801D9B04 preserves=true fpr_mask=0x00000000
