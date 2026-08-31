#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80797524(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80797524;

loc_80797524:
{
    r4 = MemoryInline::FlatRead16((r3 + 32));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 32), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(128));
}

loc_80797538:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80797544;
    }
}

loc_8079753C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 32), static_cast<uint16_t>(r0));
}

loc_80797544:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80797524 func_80797524 preserves=true fpr_mask=0x00000000
