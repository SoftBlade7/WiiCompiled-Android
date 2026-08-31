#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DE3A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801DE3A8;

loc_801DE3A8:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r3 & 1);
}

loc_801DE3B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801DE3FC;
    }
}

loc_801DE3B4:
{
    r0 = (r3 & 4);
}

loc_801DE3B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801DE3DC;
    }
}

loc_801DE3BC:
{
    r0 = (r3 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DE3C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DE3D0;
    }
}

loc_801DE3C4:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_801DE418;
}

loc_801DE3D0:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_801DE418;
}

loc_801DE3DC:
{
    r0 = (r3 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DE3E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DE3F0;
    }
}

loc_801DE3E4:
{
    r0 = 2;
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_801DE418;
}

loc_801DE3F0:
{
    r0 = 3;
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_801DE418;
}

loc_801DE3FC:
{
    r0 = (r3 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DE400:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DE410;
    }
}

loc_801DE404:
{
    r0 = 4;
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_801DE418;
}

loc_801DE410:
{
    r3 = -3;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_801DE418:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801DE3A8 func_801DE3A8 preserves=true fpr_mask=0x00000000
