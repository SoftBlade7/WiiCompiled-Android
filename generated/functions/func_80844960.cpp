#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80844960(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80844960;

loc_80844960:
{
    r0 = (r4 * 12);
    r6 = 0;
    r4 = (r5 * 6);
    r0 = (r3 + r0);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 1736));
}

loc_8084497C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844984;
    }
}

loc_80844980:
{
    r6 = 1;
}

loc_80844984:
{
    r0 = MemoryInline::FlatRead8((r3 + 1737));
}

loc_8084498C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80844994;
    }
}

loc_80844990:
{
    r6 = (r6 + 1);
}

loc_80844994:
{
    r0 = MemoryInline::FlatRead8((r3 + 1738));
}

loc_8084499C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808449A4;
    }
}

loc_808449A0:
{
    r6 = (r6 + 1);
}

loc_808449A4:
{
    r0 = MemoryInline::FlatRead8((r3 + 1739));
}

loc_808449AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808449B4;
    }
}

loc_808449B0:
{
    r6 = (r6 + 1);
}

loc_808449B4:
{
    r0 = MemoryInline::FlatRead8((r3 + 1740));
}

loc_808449BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808449C4;
    }
}

loc_808449C0:
{
    r6 = (r6 + 1);
}

loc_808449C4:
{
    r0 = MemoryInline::FlatRead8((r3 + 1741));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808449CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808449D4;
    }
}

loc_808449D0:
{
    r6 = (r6 + 1);
}

loc_808449D4:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000059 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80844960 func_80844960 preserves=true fpr_mask=0x00000000
