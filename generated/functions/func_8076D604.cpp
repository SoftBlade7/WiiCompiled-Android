#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8076D604(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8076D604;

loc_8076D604:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 208), r0);
    r4 = MemoryInline::FlatRead32((r3 + 160));
    r4 = MemoryInline::FlatRead32(r4);
    r5 = MemoryInline::FlatRead16((r4 + 50));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8076D61C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8076D624;
    }
}

loc_8076D620:
{
    goto loc_8076D628;
}

loc_8076D624:
{
    r5 = MemoryInline::FlatRead16((r4 + 52));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
}

loc_8076D628:
{
    r0 = 0;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    MemoryInline::FlatWrite32((r3 + 208), r4);
    MemoryInline::FlatWrite32((r3 + 212), r0);
    MemoryInline::FlatWrite32((r3 + 216), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8076D604 func_8076D604 preserves=true fpr_mask=0x00000000
