#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004BCB0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8004BCB0;

loc_8004BCB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8004BCB4:
{
    r3 = MemoryInline::FlatRead32(r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004BCCC;
    }
}

loc_8004BCBC:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8004BCCC:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r0 & -9);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004BCB0 func_8004BCB0 preserves=true fpr_mask=0x00000000
