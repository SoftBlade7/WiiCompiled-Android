#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066CA04(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8066CA04;

loc_8066CA04:
{
    r0 = MemoryInline::FlatRead32((r3 + 16884));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8066CA0C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066CA4C;
    }
}

loc_8066CA10:
{
    r4 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + 88));
    r4 = MemoryInline::FlatRead32((r4 + -29952));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8066CA20:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8066CA4C;
    }
}

loc_8066CA24:
{
    r0 = MemoryInline::FlatRead8((r3 + 85));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8066CA2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066CA3C;
    }
}

loc_8066CA30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8066CA34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066CA44;
    }
}

loc_8066CA38:
{
    goto loc_8066CA4C;
}

loc_8066CA3C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8066CA44:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8066CA4C:
{
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8066CA04 func_8066CA04 preserves=true fpr_mask=0x00000000
