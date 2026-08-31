#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806000C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806000C4;

loc_806000C4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
}

loc_806000C8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806000E8;
    }
}

loc_806000CC:
{
    r0 = (r4 + -4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_806000D4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806000E8;
    }
}

loc_806000D8:
{
    r0 = (r4 + -2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_806000E0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806000F0;
    }
}

loc_806000E4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_806000E8:
{
    MemoryInline::FlatWrite32((r3 + 104), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_806000F0:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10424));
    r4 = (r4 + 131072);
    r4 = MemoryInline::FlatRead32((r4 + 20476));
    r4 = (r4 + 131072);
    r0 = MemoryInline::FlatRead32((r4 + 13068));
    r0 = (r0 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8060010C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8060011C;
    }
}

loc_80600110:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 104), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8060011C:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 104), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806000C4 func_806000C4 preserves=true fpr_mask=0x00000000
