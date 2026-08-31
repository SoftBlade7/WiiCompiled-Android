#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050BE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80050BE0;

loc_80050BE0:
{
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80050BE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80050BF8;
    }
}

loc_80050BEC:
{
    r3 = MemoryInline::FlatRead8((r3 + 1));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80050BF8:
{
    r3 = -1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80050BE0 func_80050BE0 preserves=true fpr_mask=0x00000000
