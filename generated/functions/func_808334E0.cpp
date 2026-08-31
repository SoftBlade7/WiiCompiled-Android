#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808334E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_808334E0;

loc_808334E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808334E4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_808334F0;
    }
}

loc_808334E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(36));
}

loc_808334EC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_808334F8;
    }
}

loc_808334F0:
{
    r3 = 9999;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

loc_808334F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(18));
}

loc_808334FC:
{
    r0 = (r3 + 9100);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80833508;
    }
}

loc_80833504:
{
    r0 = (r3 + 9132);
}

loc_80833508:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808334E0 func_808334E0 preserves=true fpr_mask=0x00000000
