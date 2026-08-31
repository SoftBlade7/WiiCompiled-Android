#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805415E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805415E4;

loc_805415E4:
{
    r0 = (r4 * 36);
    r4 = 1;
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 712));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_805415F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8054160C;
    }
}

loc_805415FC:
{
    r0 = MemoryInline::FlatRead32((r3 + 712));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_80541604:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8054160C;
    }
}

loc_80541608:
{
    r4 = 0;
}

loc_8054160C:
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
// RECOMP_REGISTRATION base 0x805415E4 func_805415E4 preserves=true fpr_mask=0x00000000
