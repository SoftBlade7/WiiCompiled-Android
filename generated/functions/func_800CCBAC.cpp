#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CCBAC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800CCBAC;

loc_800CCBAC:
{
    r3 = MemoryInline::FlatRead32((r13 + -26964));
    r0 = (r3 + 131072);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(50642));
}

loc_800CCBB8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CCBC8;
    }
}

loc_800CCBBC:
{
    r0 = 2;
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_800CCC30;
}

loc_800CCBC8:
{
    r0 = 3;
    MemoryInline::FlatWrite32(r4, r0);
}

loc_800CCC30:
{
    r3 = MemoryInline::FlatRead32((r13 + -26968));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002010 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800CCBAC func_800CCBAC preserves=true fpr_mask=0x00000000
