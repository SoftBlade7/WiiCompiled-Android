#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A1A64(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805A1A64;

loc_805A1A64:
{
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r4 + 6564));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A1A70:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_805A1A74:
{
    MemoryInline::FlatWriteRam32((r4 + 6564), r3);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805A1A64 func_805A1A64 preserves=true fpr_mask=0x00000000
