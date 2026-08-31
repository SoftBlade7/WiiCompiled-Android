#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806E7B7C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806E7B7C;

loc_806E7B7C:
{
    r4 = MemoryInline::FlatRead32((r3 + 1236));
    r0 = MemoryInline::FlatRead32((r3 + 1248));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_806E7B88:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806E7B94;
    }
}

loc_806E7B8C:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r3 + 184), r0);
}

loc_806E7B94:
{
    r4 = MemoryInline::FlatRead32((r3 + 1236));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 1236), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806E7B7C func_806E7B7C preserves=true fpr_mask=0x00000000
