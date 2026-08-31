#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808766F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_808766F0;

loc_808766F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_808766F4:
{
    r4 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8087670C;
    }
}

loc_808766FC:
{
    r0 = MemoryInline::FlatRead8((r3 + 796));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80876704:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8087670C;
    }
}

loc_80876708:
{
    r4 = 1;
}

loc_8087670C:
{
    // inline leaf 0x808217B0 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 157), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x808217B0
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808766F0 func_808766F0 preserves=true fpr_mask=0x00000000
