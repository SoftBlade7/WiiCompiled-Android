#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A4BE4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805A4BE4;

loc_805A4BE4:
{
    r5 = 0x80380000u;
    r0 = MemoryInline::FlatRead32((r5 + 28432));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A4BF0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A4BFC;
    }
}

loc_805A4BF4:
{
    MemoryInline::FlatWrite32((r3 + 392), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_805A4BFC:
{
    r0 = (r4 + 16);
    MemoryInline::FlatWrite32((r3 + 392), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000021 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805A4BE4 func_805A4BE4 preserves=true fpr_mask=0x00000000
