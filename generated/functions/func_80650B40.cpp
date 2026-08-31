#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80650B40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80650B40;

loc_80650B40:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80650B54:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(96))) {
        goto loc_80650B60;
    }
}

loc_80650B58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(97));
}

loc_80650B5C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80650B80;
    }
}

loc_80650B60:
{
}

loc_80650B64:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(100))) {
        goto loc_80650B70;
    }
}

loc_80650B68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(101));
}

loc_80650B6C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80650B80;
    }
}

loc_80650B70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(88));
}

loc_80650B74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80650B80;
    }
}

loc_80650B78:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(94));
}

loc_80650B7C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80650B88;
    }
}

loc_80650B80:
{
    r3 = MemoryInline::FlatRead32((r3 + 648));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80650B88:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80650B40 func_80650B40 preserves=true fpr_mask=0x00000000
