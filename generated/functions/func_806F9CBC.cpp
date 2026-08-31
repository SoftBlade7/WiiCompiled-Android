#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806F9CBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806F9CBC;

loc_806F9CBC:
{
    MemoryInline::FlatWrite32((r3 + 184), r4);
    r4 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_806F9CC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F9CD4;
    }
}

loc_806F9CCC:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_806F9CD8;
}

loc_806F9CD4:
{
    r0 = -1;
}

loc_806F9CD8:
{
    MemoryInline::FlatWrite32((r3 + 188), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806F9CBC func_806F9CBC preserves=true fpr_mask=0x00000000
