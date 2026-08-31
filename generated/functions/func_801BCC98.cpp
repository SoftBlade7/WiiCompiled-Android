#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801BCC98(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801BCC98;

loc_801BCC98:
{
    r0 = MemoryInline::FlatRead8((r13 + -28488));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_801BCCA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_801BCCA4:
{
    r0 = MemoryInline::FlatRead32((r13 + -24592));
    MemoryInline::FlatWrite8((r13 + -28488), static_cast<uint8_t>(r3));
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32((r13 + -24592), r0);
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

// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801BCC98 func_801BCC98 preserves=true fpr_mask=0x00000000
