#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807074B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807074B0;

loc_807074B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(6));
}

loc_807074B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807074C4;
    }
}

loc_807074B8:
{
    r0 = 6;
    MemoryInline::FlatWrite32((r3 + 160), r0);
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

loc_807074C4:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r3 + 160), r0);
    ctx->gpr[0] = r0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807074B0 func_807074B0 preserves=true fpr_mask=0x00000000
