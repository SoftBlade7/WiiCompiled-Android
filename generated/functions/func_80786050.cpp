#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80786050(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80786050;

loc_80786050:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80786054:
{
    r5 = 1;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80786060;
    }
}

loc_8078605C:
{
    r5 = (r5 | 256);
}

loc_80786060:
{
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80786134u>(ctx);
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00007FB gpr_write=0xF00007FB gpr_return=0x00000018 fpr_read=0xC0000007 fpr_write=0xC0000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80786050 func_80786050 preserves=true fpr_mask=0x00000000
