#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80552D90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80552D90;

loc_80552D90:
{
    r4 = 0x80890000u;
    r0 = 4;
    r5 = 0;
    r4 = (r4 + 4544);
    ctr = r0;
}

loc_80552DA4:
{
    r0 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80552DAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80552DB8;
    }
}

loc_80552DB0:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80552DB8:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r5 = (r5 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80552DC4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80552DD0;
    }
}

loc_80552DC8:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80552DD0:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r5 = (r5 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80552DDC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80552DE8;
    }
}

loc_80552DE0:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80552DE8:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r5 = (r5 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80552DF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80552E00;
    }
}

loc_80552DF8:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80552E00:
{
    r0 = MemoryInline::FlatRead32((r4 + 16));
    r5 = (r5 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80552E0C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80552E18;
    }
}

loc_80552E10:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80552E18:
{
    r0 = MemoryInline::FlatRead32((r4 + 20));
    r5 = (r5 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80552E24:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80552E30;
    }
}

loc_80552E28:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80552E30:
{
    r0 = MemoryInline::FlatRead32((r4 + 24));
    r5 = (r5 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80552E3C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80552E48;
    }
}

loc_80552E40:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80552E48:
{
    r0 = MemoryInline::FlatRead32((r4 + 28));
    r5 = (r5 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80552E54:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80552E60;
    }
}

loc_80552E58:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_80552E60:
{
    r5 = (r5 + 1);
    r4 = (r4 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80552DA4;
    }
}

loc_80552E6C:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80552D90 func_80552D90 preserves=true fpr_mask=0x00000000
