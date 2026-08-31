#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80533090(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80533090;

loc_80533090:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2928));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(11));
}

loc_805330A0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805330B4;
    }
}

loc_805330A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(12));
}

loc_805330A8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805330B4;
    }
}

loc_805330AC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_805330B4:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (240 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(240) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80533090 func_80533090 preserves=true fpr_mask=0x00000000
