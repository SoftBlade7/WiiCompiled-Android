#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8079C8C8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8079C8C8;

loc_8079C8C8:
{
    r3 = MemoryInline::FlatRead16((r3 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(14));
}

loc_8079C8D0:
{
    r0 = (r3 & 4095);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8079C8DC;
    }
}

loc_8079C8D8:
{
    r0 = (r3 & 3840);
}

loc_8079C8DC:
{
    r3 = (r0 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8079C8C8 func_8079C8C8 preserves=true fpr_mask=0x00000000
