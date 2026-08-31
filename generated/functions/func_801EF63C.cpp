#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801EF63C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801EF63C;

loc_801EF63C:
{
    goto loc_801EF648;
}

loc_801EF640:
{
    r3 = (r3 + 1);
    r4 = (r4 + 1);
}

loc_801EF648:
{
    r5 = MemoryInline::FlatRead8(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801EF650:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801EF668;
    }
}

loc_801EF654:
{
    r0 = MemoryInline::FlatRead8(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801EF65C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801EF668;
    }
}

loc_801EF660:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_801EF664:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801EF640;
    }
}

loc_801EF668:
{
    r0 = MemoryInline::FlatRead8(r4);
    r3 = (r5 - r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801EF63C func_801EF63C preserves=true fpr_mask=0x00000000
