#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8003DEE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8003DEE0;

loc_8003DEE0:
{
    r4 = MemoryInline::FlatRead32((r3 + 56));
    goto loc_8003DEF4;
}

loc_8003DEE8:
{
    r0 = MemoryInline::FlatRead16((r3 + 66));
    r4 = (r4 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8003DEF4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8003DEF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003DF08;
    }
}

loc_8003DEFC:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8003DF04:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003DEE8;
    }
}

loc_8003DF08:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8003DEE0 func_8003DEE0 preserves=true fpr_mask=0x00000000
