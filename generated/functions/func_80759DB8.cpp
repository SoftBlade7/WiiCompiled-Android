#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80759DB8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80759DB8;

loc_80759DB8:
{
    r0 = MemoryInline::FlatRead32((r3 + 180));
    r4 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80759DC4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80759DD8;
    }
}

loc_80759DC8:
{
    r0 = MemoryInline::FlatRead32((r3 + 268));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(60));
}

loc_80759DD0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80759DD8;
    }
}

loc_80759DD4:
{
    r4 = 1;
}

loc_80759DD8:
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
// RECOMP_REGISTRATION base 0x80759DB8 func_80759DB8 preserves=true fpr_mask=0x00000000
