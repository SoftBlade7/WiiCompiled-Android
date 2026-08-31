#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805482A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805482A8;

loc_805482A8:
{
    r4 = MemoryInline::FlatRead32(r3);
    r5 = 0;
    r0 = (r4 + -1380646912);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(21316));
}

loc_805482B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805482D0;
    }
}

loc_805482BC:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r3 + -808452096);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(12342));
}

loc_805482C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805482D0;
    }
}

loc_805482CC:
{
    r5 = 1;
}

loc_805482D0:
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

// RECOMP_GUEST_ABI gpr_read=0x00000029 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805482A8 func_805482A8 preserves=true fpr_mask=0x00000000
