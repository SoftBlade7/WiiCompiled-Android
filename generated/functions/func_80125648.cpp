#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80125648(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80125648;

loc_80125648:
{
    r0 = MemoryInline::FlatRead32((r13 + -26424));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80125650:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80125670;
    }
}

loc_80125654:
{
    r0 = MemoryInline::FlatRead32((r13 + -26464));
    r4 = 0x802F0000u;
    r4 = (r4 + 26048);
    r0 = (r0 * 1152);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80125670:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80125648 func_80125648 preserves=true fpr_mask=0x00000000
