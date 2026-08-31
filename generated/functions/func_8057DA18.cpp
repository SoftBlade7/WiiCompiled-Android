#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8057DA18(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8057DA18;

loc_8057DA18:
{
    r4 = MemoryInline::FlatRead32(r3);
    r3 = 0;
    r5 = 0;
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r6 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r6 & 128);
}

loc_8057DA30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057DA40;
    }
}

loc_8057DA34:
{
    r0 = (r6 & 262144);
}

loc_8057DA38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057DA40;
    }
}

loc_8057DA3C:
{
    r5 = 1;
}

loc_8057DA40:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8057DA44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8057DA48:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057DA50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8057DA54:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8057DA18 func_8057DA18 preserves=true fpr_mask=0x00000000
