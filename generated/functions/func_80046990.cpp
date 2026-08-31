#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80046990(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80046990;

loc_80046990:
{
    r3 = MemoryInline::FlatRead32((r4 + 36));
    r0 = MemoryInline::FlatRead8((r3 + 330));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004699C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800469CC;
    }
}

loc_800469A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_800469A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800469D8;
    }
}

loc_800469A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_800469AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800469E4;
    }
}

loc_800469B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_800469B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800469F0;
    }
}

loc_800469B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_800469BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800469FC;
    }
}

loc_800469C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_800469C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80046A08;
    }
}

loc_800469C8:
{
    goto loc_80046A48;
}

loc_800469CC:
{
    r3 = 0x80040000u;
    r3 = (r3 + 256);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_800469D8:
{
    r3 = 0x80040000u;
    r3 = (r3 + 480);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_800469E4:
{
    r3 = 0x80040000u;
    r3 = (r3 + 672);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_800469F0:
{
    r3 = 0x80040000u;
    r3 = (r3 + 27232);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_800469FC:
{
    r3 = 0x80040000u;
    r3 = (r3 + 11072);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80046A08:
{
    r0 = MemoryInline::FlatRead8((r3 + 334));
    r0 = (r0 & 7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80046A14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80046A24;
    }
}

loc_80046A18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80046A1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80046A30;
    }
}

loc_80046A20:
{
    goto loc_80046A3C;
}

loc_80046A24:
{
    r3 = 0x80040000u;
    r3 = (r3 + 28144);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80046A30:
{
    r3 = 0x80040000u;
    r3 = (r3 + 28848);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80046A3C:
{
    r3 = 0x80040000u;
    r3 = (r3 + 27520);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80046A48:
{
    r3 = 0x80040000u;
    r3 = (r3 + 256);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80046990 func_80046990 preserves=true fpr_mask=0x00000000
