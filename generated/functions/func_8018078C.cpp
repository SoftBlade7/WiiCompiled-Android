#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8018078C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8018078C;

loc_8018078C:
{
    r0 = MemoryInline::FlatRead32(r3);
    r5 = 0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80180798:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801807B8;
    }
}

loc_8018079C:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65279));
}

loc_801807A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801807B8;
    }
}

loc_801807A8:
{
    r0 = MemoryInline::FlatRead16((r3 + 6));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
}

loc_801807B0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801807B8;
    }
}

loc_801807B4:
{
    r5 = 1;
}

loc_801807B8:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8018078C func_8018078C preserves=true fpr_mask=0x00000000
