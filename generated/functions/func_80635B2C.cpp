#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80635B2C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80635B2C;

loc_80635B2C:
{
    r0 = MemoryInline::FlatRead32((r3 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80635B34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80635B44;
    }
}

loc_80635B38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80635B3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80635B58;
    }
}

loc_80635B40:
{
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

loc_80635B44:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 48), r0);
    MemoryInline::FlatWrite32((r3 + 28), r4);
    MemoryInline::FlatWrite32((r3 + 40), r5);
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

loc_80635B58:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_80635B60:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_80635B64:
{
    MemoryInline::FlatWrite32((r3 + 28), r4);
    MemoryInline::FlatWrite32((r3 + 40), r5);
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80635B2C func_80635B2C preserves=true fpr_mask=0x00000000
