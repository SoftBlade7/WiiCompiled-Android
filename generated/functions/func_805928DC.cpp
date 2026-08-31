#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805928DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805928DC;

loc_805928DC:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2928));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(11));
}

loc_805928EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805928F8;
    }
}

loc_805928F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(12));
}

loc_805928F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8059290C;
    }
}

loc_805928F8:
{
    r4 = 0x808B0000u;
    r3 = 0x809C0000u;
    r4 = (r4 + 25656);
    MemoryInline::FlatWriteRam32((r3 + 6488), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8059290C:
{
    r4 = 0x808B0000u;
    r3 = 0x809C0000u;
    r4 = (r4 + 25632);
    MemoryInline::FlatWriteRam32((r3 + 6488), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000001 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805928DC func_805928DC preserves=true fpr_mask=0x00000000
