#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806FD73C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806FD73C;

loc_806FD73C:
{
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806FD744:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FD768;
    }
}

loc_806FD748:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FD754;
    }
}

loc_806FD74C:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_806FD758;
}

loc_806FD754:
{
    r0 = -1;
}

loc_806FD758:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_806FD75C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FD768;
    }
}

loc_806FD760:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_806FD768:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806FD73C func_806FD73C preserves=true fpr_mask=0x00000000
