#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8070EDE8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8070EDE8;

loc_8070EDE8:
{
    r4 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + 96));
    r0 = MemoryInline::FlatRead32((r4 + 9896));
    r4 = MemoryInline::FlatRead16((r3 + 144));
    r5 = (r5 & -241);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & -16);
    r5 = (r5 | r0);
}

loc_8070EE08:
{
    MemoryInline::FlatWrite32((r3 + 96), r5);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(5))) {
        goto loc_8070EE1C;
    }
}

loc_8070EE10:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(14));
}

loc_8070EE14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070EE58;
    }
}

loc_8070EE18:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8070EE1C:
{
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 9904));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(29));
}

loc_8070EE28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070EE38;
    }
}

loc_8070EE2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(20));
}

loc_8070EE30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070EE48;
    }
}

loc_8070EE34:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8070EE38:
{
    r0 = (r5 & -241);
    r0 = (r0 | 112);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8070EE48:
{
    r0 = (r5 & -241);
    r0 = (r0 | 128);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8070EE58:
{
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 9904));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(20));
}

loc_8070EE64:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8070EE68:
{
    r0 = (r5 & -241);
    r0 = (r0 | 144);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8070EDE8 func_8070EDE8 preserves=true fpr_mask=0x00000000
