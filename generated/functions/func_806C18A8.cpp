#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806C18A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806C18A8;

loc_806C18A8:
{
}

loc_806C18AC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(3))) {
        goto loc_806C18CC;
    }
}

loc_806C18B0:
{
}

loc_806C18B4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(4))) {
        goto loc_806C18E4;
    }
}

loc_806C18B8:
{
}

loc_806C18BC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(5))) {
        goto loc_806C18FC;
    }
}

loc_806C18C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(6));
}

loc_806C18C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806C1914;
    }
}

loc_806C18C8:
{
    goto loc_806C1928;
}

loc_806C18CC:
{
    r0 = MemoryInline::FlatRead16((r3 + 184));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
}

loc_806C18D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806C1928;
    }
}

loc_806C18D8:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r3 + 188), r0);
    goto loc_806C1928;
}

loc_806C18E4:
{
    r0 = MemoryInline::FlatRead16((r3 + 184));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
}

loc_806C18EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806C1928;
    }
}

loc_806C18F0:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r3 + 188), r0);
    goto loc_806C1928;
}

loc_806C18FC:
{
    r0 = MemoryInline::FlatRead16((r3 + 184));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
}

loc_806C1904:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806C1928;
    }
}

loc_806C1908:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r3 + 188), r0);
    goto loc_806C1928;
}

loc_806C1914:
{
    r0 = MemoryInline::FlatRead16((r3 + 184));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
}

loc_806C191C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806C1928;
    }
}

loc_806C1920:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r3 + 188), r0);
}

loc_806C1928:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000069 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806C18A8 func_806C18A8 preserves=true fpr_mask=0x00000000
