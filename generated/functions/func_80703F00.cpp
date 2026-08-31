#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80703F00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80703F00;

loc_80703F00:
{
    r4 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + 96));
    r0 = MemoryInline::FlatRead32((r4 + 9896));
    r4 = MemoryInline::FlatRead16((r3 + 156));
    r5 = (r5 & -241);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & -16);
    r5 = (r5 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(240));
}

loc_80703F20:
{
    MemoryInline::FlatWrite32((r3 + 96), r5);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703F44;
    }
}

loc_80703F28:
{
}

loc_80703F2C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(242))) {
        goto loc_80703F54;
    }
}

loc_80703F30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(427));
}

loc_80703F34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703F90;
    }
}

loc_80703F38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(5240));
}

loc_80703F3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703FA0;
    }
}

loc_80703F40:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80703F44:
{
    r0 = (r5 & -241);
    r0 = (r0 | 48);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80703F54:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(45));
}

loc_80703F68:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80703F6C:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 10232));
    r0 = MemoryInline::FlatRead32((r4 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(7));
}

loc_80703F7C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80703F80:
{
    r0 = (r5 & -241);
    r0 = (r0 | 48);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80703F90:
{
    r0 = (r5 & -241);
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80703FA0:
{
    r0 = (r5 & -241);
    r0 = (r0 | 176);
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
// RECOMP_REGISTRATION base 0x80703F00 func_80703F00 preserves=true fpr_mask=0x00000000
