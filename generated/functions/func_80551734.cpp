#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80551734(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80551734;

loc_80551734:
{
    r4 = 0x809C0000u;
    r4 = (r4 + -5376);
    r0 = MemoryInline::FlatRead32((r4 + 160));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80551744:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80551768;
    }
}

loc_80551748:
{
    r0 = MemoryInline::FlatRead8((r4 + 164));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80551750:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80551768;
    }
}

loc_80551754:
{
    r0 = 4;
    MemoryInline::FlatWriteRam8((r4 + 165), static_cast<uint8_t>(r0));
    r3 = 1;
    MemoryInline::FlatWriteRam8((r4 + 164), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_80551768:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000011 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80551734 func_80551734 preserves=true fpr_mask=0x00000000
