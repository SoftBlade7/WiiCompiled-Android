#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806E9D6C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806E9D6C;

loc_806E9D6C:
{
}

loc_806E9D70:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(3))) {
        goto loc_806E9D90;
    }
}

loc_806E9D74:
{
}

loc_806E9D78:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(4))) {
        goto loc_806E9DAC;
    }
}

loc_806E9D7C:
{
}

loc_806E9D80:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(5))) {
        goto loc_806E9DC8;
    }
}

loc_806E9D84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(6));
}

loc_806E9D88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806E9DE4;
    }
}

loc_806E9D8C:
{
    goto loc_806E9DFC;
}

loc_806E9D90:
{
    r0 = MemoryInline::FlatRead16((r3 + 180));
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_806E9D9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806E9DFC;
    }
}

loc_806E9DA0:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 184), r0);
    goto loc_806E9DFC;
}

loc_806E9DAC:
{
    r0 = MemoryInline::FlatRead16((r3 + 180));
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_806E9DB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806E9DFC;
    }
}

loc_806E9DBC:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 184), r0);
    goto loc_806E9DFC;
}

loc_806E9DC8:
{
    r0 = MemoryInline::FlatRead16((r3 + 180));
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_806E9DD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806E9DFC;
    }
}

loc_806E9DD8:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 184), r0);
    goto loc_806E9DFC;
}

loc_806E9DE4:
{
    r0 = MemoryInline::FlatRead16((r3 + 180));
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_806E9DF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806E9DFC;
    }
}

loc_806E9DF4:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 184), r0);
}

loc_806E9DFC:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000069 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806E9D6C func_806E9D6C preserves=true fpr_mask=0x00000000
