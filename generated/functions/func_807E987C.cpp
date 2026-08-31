#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807E987C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807E987C;

loc_807E987C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807E9880:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807E9888;
    }
}

loc_807E9884:
{
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DFC8u>(ctx);
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->cr = cr;
    return;
}

loc_807E9888:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_807E988C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_807E9890:
{
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807E987C func_807E987C preserves=true fpr_mask=0x00000000
