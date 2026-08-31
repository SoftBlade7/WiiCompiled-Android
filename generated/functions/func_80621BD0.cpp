#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80621BD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80621BD0;

loc_80621BD0:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80621BD8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80621BDC:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80621BE4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80621BE8:
{
    r7 = 1;
    r0 = -1;
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite32((r3 + 272), r0);
    MemoryInline::FlatWrite32((r3 + 276), r4);
    MemoryInline::FlatWrite8((r3 + 280), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r3 + 284), r6);
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000081 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80621BD0 func_80621BD0 preserves=true fpr_mask=0x00000000
