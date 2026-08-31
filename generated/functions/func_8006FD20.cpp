#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8006FD20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8006FD20;

loc_8006FD20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8006FD24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006FD3C;
    }
}

loc_8006FD28:
{
    r0 = MemoryInline::FlatRead32((r3 + 240));
    MemoryInline::FlatWrite32((r3 + 236), r5);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 240), r0);
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

loc_8006FD3C:
{
    r0 = MemoryInline::FlatRead32((r3 + 240));
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r3 + 240), r0);
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8006FD20 func_8006FD20 preserves=true fpr_mask=0x00000000
