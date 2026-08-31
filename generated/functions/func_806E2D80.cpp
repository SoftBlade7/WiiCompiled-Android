#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806E2D80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806E2D80;

loc_806E2D80:
{
}

loc_806E2D84:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(3))) {
        goto loc_806E2DA4;
    }
}

loc_806E2D88:
{
}

loc_806E2D8C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(4))) {
        goto loc_806E2DBC;
    }
}

loc_806E2D90:
{
}

loc_806E2D94:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(5))) {
        goto loc_806E2DD4;
    }
}

loc_806E2D98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(6));
}

loc_806E2D9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806E2DEC;
    }
}

loc_806E2DA0:
{
    goto loc_806E2E00;
}

loc_806E2DA4:
{
    r0 = MemoryInline::FlatRead8((r3 + 249));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806E2DAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806E2E00;
    }
}

loc_806E2DB0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 249), static_cast<uint8_t>(r0));
    goto loc_806E2E00;
}

loc_806E2DBC:
{
    r0 = MemoryInline::FlatRead8((r3 + 249));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806E2DC4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806E2E00;
    }
}

loc_806E2DC8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 249), static_cast<uint8_t>(r0));
    goto loc_806E2E00;
}

loc_806E2DD4:
{
    r0 = MemoryInline::FlatRead8((r3 + 249));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806E2DDC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806E2E00;
    }
}

loc_806E2DE0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 249), static_cast<uint8_t>(r0));
    goto loc_806E2E00;
}

loc_806E2DEC:
{
    r0 = MemoryInline::FlatRead8((r3 + 249));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806E2DF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806E2E00;
    }
}

loc_806E2DF8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 249), static_cast<uint8_t>(r0));
}

loc_806E2E00:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000069 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806E2D80 func_806E2D80 preserves=true fpr_mask=0x00000000
