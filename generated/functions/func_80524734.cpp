#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80524734(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80524734;

loc_80524734:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_80524738:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8052473C:
{
    r0 = MemoryInline::FlatRead32((r3 + 16728));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80524744:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80524764;
    }
}

loc_80524748:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8052474C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80524764;
    }
}

loc_80524750:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80524754:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80524770;
    }
}

loc_80524758:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8052475C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052477C;
    }
}

loc_80524760:
{
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

loc_80524764:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 16728), r0);
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

loc_80524770:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 16728), r0);
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

loc_8052477C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 16728), r0);
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80524734 func_80524734 preserves=true fpr_mask=0x00000000
