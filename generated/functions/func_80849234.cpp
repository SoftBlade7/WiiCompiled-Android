#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80849234(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80849234;

loc_80849234:
{
    r0 = MemoryInline::FlatRead32((r3 + 3484));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8084923C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80849254;
    }
}

loc_80849240:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80849244:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80849264;
    }
}

loc_80849248:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8084924C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8084926C;
    }
}

loc_80849250:
{
    goto loc_8084927C;
}

loc_80849254:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10480));
    r3 = MemoryInline::FlatRead8((r3 + 724));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80849264:
{
    r3 = 6;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8084926C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10480));
    r3 = MemoryInline::FlatRead8((r3 + 744));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_8084927C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80849234 func_80849234 preserves=true fpr_mask=0x00000000
