#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80727CF8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80727CF8;

loc_80727CF8:
{
    r0 = (r4 & 255);
    r4 = 0x809C0000u;
    r0 = (r0 * 240);
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r5 = 0;
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 244));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80727D18:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80727D28;
    }
}

loc_80727D1C:
{
    r3 = MemoryInline::FlatRead32((r3 + 196));
    r5 = MemoryInline::FlatRead32((r3 + 24));
    goto loc_80727D38;
}

loc_80727D28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80727D2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80727D38;
    }
}

loc_80727D30:
{
    r3 = MemoryInline::FlatRead32((r3 + 192));
    r5 = MemoryInline::FlatRead32((r3 + 24));
}

loc_80727D38:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80727CF8 func_80727CF8 preserves=true fpr_mask=0x00000000
