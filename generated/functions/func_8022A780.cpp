#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8022A780(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8022A780;

loc_8022A780:
{
    r4 = MemoryInline::FlatRead16((r3 + 26));
    r0 = (r4 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8022A788:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8022A79C;
    }
}

loc_8022A78C:
{
    r0 = (r4 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8022A790:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8022A79C;
    }
}

loc_8022A794:
{
    r0 = (r4 & -17);
    MemoryInline::FlatWrite16((r3 + 26), static_cast<uint16_t>(r0));
}

loc_8022A79C:
{
    r0 = MemoryInline::FlatRead16((r3 + 26));
    r0 = (r0 & -13);
    MemoryInline::FlatWrite16((r3 + 26), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8022A780 func_8022A780 preserves=true fpr_mask=0x00000000
