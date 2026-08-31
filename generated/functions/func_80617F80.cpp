#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80617F80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80617F80;

loc_80617F80:
{
    r4 = MemoryInline::FlatRead32((r3 + 384));
    r0 = (r4 + -2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80617F8C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80617FA4;
    }
}

loc_80617F90:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_80617F94:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80617FAC;
    }
}

loc_80617F98:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 384), r0);
    goto loc_80617FAC;
}

loc_80617FA4:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r3 + 384), r0);
}

loc_80617FAC:
{
    r4 = 0;
    r3 = (r3 + 436);
    // inline leaf 0x805EFD14 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 112), r4);
    // end of inlined leaf 0x805EFD14
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80617F80 func_80617F80 preserves=true fpr_mask=0x00000000
