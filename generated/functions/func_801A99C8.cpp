#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A99C8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801A99C8;

loc_801A99C8:
{
    r4 = MemoryInline::FlatRead32((r3 + 724));
    r3 = MemoryInline::FlatRead32((r3 + 756));
    goto loc_801A99F4;
}

loc_801A99D4:
{
    r5 = MemoryInline::FlatRead32(r3);
}

loc_801A99DC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801A99F0;
    }
}

loc_801A99E0:
{
    r0 = MemoryInline::FlatRead32((r5 + 720));
}

loc_801A99E8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r4))) {
        goto loc_801A99F0;
    }
}

loc_801A99EC:
{
    r4 = r0;
}

loc_801A99F0:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_801A99F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801A99F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A99D4;
    }
}

loc_801A99FC:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801A99C8 func_801A99C8 preserves=true fpr_mask=0x00000000
