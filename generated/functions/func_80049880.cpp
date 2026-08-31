#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80049880(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80049880;

loc_80049880:
{
    r5 = MemoryInline::FlatRead32((r3 + 60));
    goto loc_800498B0;
}

loc_80049888:
{
    r4 = MemoryInline::FlatRead16((r3 + 66));
    r5_addr_2 = (r5 + r4);
    r5 = MemoryInline::FlatRead32(r5_addr_2);
    goto loc_8004989C;
}

loc_80049898:
{
    r5_addr_4 = (r5 + r4);
    r5 = MemoryInline::FlatRead32(r5_addr_4);
}

loc_8004989C:
{
}

loc_800498A0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800498B0;
    }
}

loc_800498A4:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_800498AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80049898;
    }
}

loc_800498B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800498B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800498C4;
    }
}

loc_800498B8:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_800498C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80049888;
    }
}

loc_800498C4:
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
// RECOMP_REGISTRATION base 0x80049880 func_80049880 preserves=true fpr_mask=0x00000000
