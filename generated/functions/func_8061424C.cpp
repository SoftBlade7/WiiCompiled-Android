#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8061424C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8061424C;

loc_8061424C:
{
    r0 = (r4 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_80614254:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80614278;
    }
}

loc_80614258:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8061425C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061426C;
    }
}

loc_80614260:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(6));
}

loc_80614264:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80614284;
    }
}

loc_80614268:
{
    goto loc_80614290;
}

loc_8061426C:
{
    r3 = (r3 + 131072);
    r3 = (r3 + -18108);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80614278:
{
    r3 = (r3 + 131072);
    r3 = (r3 + -17732);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80614284:
{
    r3 = (r3 + 131072);
    r3 = (r3 + -17356);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_80614290:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8061424C func_8061424C preserves=true fpr_mask=0x00000000
