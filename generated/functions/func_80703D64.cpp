#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80703D64(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80703D64;

loc_80703D64:
{
    r5 = MemoryInline::FlatRead32((r3 + 96));
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead16((r3 + 156));
    r4 = MemoryInline::FlatRead32((r4 + 9892));
    r5 = (r5 & -16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(240));
}

loc_80703D7C:
{
    r5 = (r5 | r4);
    MemoryInline::FlatWrite32((r3 + 96), r5);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703E40;
    }
}

loc_80703D88:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80703DD4;
    }
}

loc_80703D8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(226));
}

loc_80703D90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703E30;
    }
}

loc_80703D94:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80703DB0;
    }
}

loc_80703D98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(219));
}

loc_80703D9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703E20;
    }
}

loc_80703DA0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_80703DA4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(203));
}

loc_80703DA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703E10;
    }
}

loc_80703DAC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80703DB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(234));
}

loc_80703DB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80703DB8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80703DC8;
    }
}

loc_80703DBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(233));
}

loc_80703DC0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80703EA0;
    }
}

loc_80703DC4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80703DC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(236));
}

loc_80703DCC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_80703DD0:
{
    goto loc_80703EB0;
}

loc_80703DD4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(427));
}

loc_80703DD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703ED0;
    }
}

loc_80703DDC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80703DF8;
    }
}

loc_80703DE0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(369));
}

loc_80703DE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703EC0;
    }
}

loc_80703DE8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_80703DEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(242));
}

loc_80703DF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703E50;
    }
}

loc_80703DF4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80703DF8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5240));
}

loc_80703DFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703EF0;
    }
}

loc_80703E00:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_80703E04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(524));
}

loc_80703E08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80703EE0;
    }
}

loc_80703E0C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80703E10:
{
    r0 = (r5 & -16);
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80703E20:
{
    r0 = (r5 & -16);
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80703E30:
{
    r0 = (r5 & -16);
    r0 = (r0 | 3);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80703E40:
{
    r0 = (r5 & -16);
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80703E50:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(45));
}

loc_80703E64:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80703E8C;
    }
}

loc_80703E68:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 10232));
    r0 = MemoryInline::FlatRead32((r4 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(7));
}

loc_80703E78:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80703E8C;
    }
}

loc_80703E7C:
{
    r0 = (r5 & -16);
    r0 = (r0 | 12);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80703E8C:
{
    r0 = MemoryInline::FlatRead32((r3 + 96));
    r0 = (r0 & -16);
    r0 = (r0 | 3);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80703EA0:
{
    r0 = (r5 & -16);
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80703EB0:
{
    r0 = (r5 & -16);
    r0 = (r0 | 12);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80703EC0:
{
    r0 = (r5 & -16);
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80703ED0:
{
    r0 = (r5 & -16);
    r0 = (r0 | 6);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80703EE0:
{
    r0 = (r5 & -16);
    r0 = (r0 | 11);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80703EF0:
{
    r0 = (r5 & -16);
    r0 = (r0 | 14);
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
// RECOMP_REGISTRATION base 0x80703D64 func_80703D64 preserves=true fpr_mask=0x00000000
